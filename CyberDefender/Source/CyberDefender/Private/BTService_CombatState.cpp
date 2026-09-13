#include "BTService_CombatState.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"
#include "AIController.h"
#include "GameFramework/Pawn.h"

UBTService_CombatState::UBTService_CombatState()
{
	NodeName = TEXT("BTS_Update CombatState");
}

void UBTService_CombatState::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	AAIController* AIController = OwnerComp.GetAIOwner();
	APawn* AIPawn = AIController->GetPawn();
	APawn* playerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	float Distance = FVector::Distance(AIPawn->GetActorLocation(), playerPawn->GetActorLocation());

	float CombatDistance = 500.0f;

	if (Distance <= CombatDistance)
	{
		OwnerComp.GetBlackboardComponent()->SetValueAsBool(TEXT("IsCombat"), true);
	}
	else
	{
		OwnerComp.GetBlackboardComponent()->SetValueAsBool(TEXT("IsCombat"), false);
	}

}
