#pragma once

#include "CoreMinimal.h"
#include "DT_EnemySpawn.h"
#include "GameFramework/Actor.h"
#include "CyberEnemySpawnVolume.generated.h"

class UBoxComponent;
class ACyberAICharacter;

UCLASS()
class CYBERDEFENDER_API ACyberEnemySpawnVolume : public AActor
{
	GENERATED_BODY()
	
public:	
	ACyberEnemySpawnVolume();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spawning")
	USceneComponent* Scene;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spawning")
	UBoxComponent* SpawningBox;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Spawning")
	UDataTable* EnemySpawnDataTable;

	UFUNCTION(BlueprintCallable, Category = "Spawning")
	void SpawnRandomEnemy();

	FDT_EnemySpawn* GetRandomEnemy() const;
	void SpawnEnemy(TSubclassOf<ACyberAICharacter> EnemyClass);
	FVector GetRandomPointInVolume() const;
};
