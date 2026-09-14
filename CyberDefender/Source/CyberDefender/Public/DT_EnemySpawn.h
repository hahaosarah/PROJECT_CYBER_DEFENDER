#pragma once

#include "CoreMinimal.h"
#include "DT_EnemySpawn.generated.h"

USTRUCT(BlueprintType)
struct FDT_EnemySpawn : public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Spawn")
	FName EnemyName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Spawn")
	TSubclassOf<AActor> EnemyClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Spawn")
	float SpawnChance;
};
