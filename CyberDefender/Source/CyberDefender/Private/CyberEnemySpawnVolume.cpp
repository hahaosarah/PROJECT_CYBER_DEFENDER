#include "CyberEnemySpawnVolume.h"
#include "Components/BoxComponent.h"
#include "CyberAICharacter.h"

ACyberEnemySpawnVolume::ACyberEnemySpawnVolume()
{
	PrimaryActorTick.bCanEverTick = false;

	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	SetRootComponent(Scene);

	SpawningBox = CreateDefaultSubobject<UBoxComponent>(TEXT("SpawningBox"));
	SpawningBox->SetupAttachment(Scene);

	EnemySpawnDataTable = nullptr;
}

void ACyberEnemySpawnVolume::SpawnRandomEnemy()
{
	if (FDT_EnemySpawn* SelectedRow = GetRandomEnemy())
	{
		if (UClass* ActualClass = SelectedRow->EnemyClass.Get())
		{
			SpawnEnemy(ActualClass);
		}
	}
}

FDT_EnemySpawn* ACyberEnemySpawnVolume::GetRandomEnemy() const
{
	if (!EnemySpawnDataTable)  return nullptr;

	TArray<FDT_EnemySpawn*> AllRows;
	static const FString ContextString(TEXT("EnemySpawnContext"));

	EnemySpawnDataTable->GetAllRows(ContextString, AllRows);
	
	if (AllRows.IsEmpty()) return nullptr;

	float TotalChance = 0.0f;
	for (const FDT_EnemySpawn* Row : AllRows)
	{
		if (Row)
		{
			TotalChance += Row->SpawnChance;
		}
	}

	const float RandValue = FMath::FRandRange(0.0f, TotalChance);
	float AccumulateChance = 0.0f;

	for (FDT_EnemySpawn* Row : AllRows)
	{
		AccumulateChance += Row->SpawnChance;
		if (RandValue <= AccumulateChance)
		{

			return Row;
		}
	}

	return nullptr;
}

FVector ACyberEnemySpawnVolume::GetRandomPointInVolume() const
{
	FVector BoxExtent = SpawningBox->GetScaledBoxExtent();
	FVector BoxOrigin = SpawningBox->GetComponentLocation();

	return BoxOrigin + FVector(
		FMath::FRandRange(-BoxExtent.X, BoxExtent.X),
		FMath::FRandRange(-BoxExtent.Y, BoxExtent.Y),
		FMath::FRandRange(-BoxExtent.Z, BoxExtent.Z));
}


void ACyberEnemySpawnVolume::SpawnEnemy(TSubclassOf<ACyberAICharacter> EnemyClass)
{
	if (!EnemyClass) return;

	GetWorld()->SpawnActor<ACyberAICharacter>(EnemyClass, GetRandomPointInVolume(), FRotator::ZeroRotator);
}

