#include "CyberAIController.h"
#include "TimerManager.h"
#include "NavigationSystem.h"
#include "Kismet/GameplayStatics.h"
#include "Perception/AIPerceptionComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Engine/Engine.h"
#include "Perception/AISenseConfig_Sight.h"

ACyberAIController::ACyberAIController()
{
	
	//AIPerception = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerception"));
	//SetPerceptionComponent(*AIPerception);

	//SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("SightConfig"));
	//SightConfig->SightRadius = 1500.0f; // AI가 감지할 수 있는 최대 거리
	//SightConfig->LoseSightRadius = 2000.0f; // AI가 시야에서 벗어나기 시작하는 거리
	//SightConfig->PeripheralVisionAngleDegrees = 90.0f; // AI의 주변 시야 각도
	//SightConfig->SetMaxAge(5.0f);

	//SightConfig->DetectionByAffiliation.bDetectEnemies = true; // 적을 감지하도록 설정
	//SightConfig->DetectionByAffiliation.bDetectNeutrals = true; // 중립적인 대상을 감지하도록 설정
	//SightConfig->DetectionByAffiliation.bDetectFriendlies = true; // 아군을 감지하도록 설정

	//AIPerception->ConfigureSense(*SightConfig); // 시야 감지 설정을 AIPerception에 적용
	//AIPerception->SetDominantSense(SightConfig->GetSenseImplementation()); // 우선적으로 사용할 감각을 시야 감지로 설정
}

void ACyberAIController::StartBehaviorTree()
{
	if (BehaviorTreeAsset)
	{
		RunBehaviorTree(BehaviorTreeAsset);
		UE_LOG(LogTemp, Warning, TEXT("[Cyber] Behavior Tree started"));
	}
}

void ACyberAIController::BeginPlay()
{
	Super::BeginPlay();

	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	StartBehaviorTree();

	UBlackboardComponent* BlackboardComp = GetBlackboardComponent();

	if (BlackboardComp)
	{
		BlackboardComp->SetValueAsVector(TEXT("PlayerVector"), PlayerPawn->GetActorLocation());
	}

	

	/*if (AIPerception)
	{
		AIPerception->OnTargetPerceptionUpdated.AddDynamic(this, &ACyberAIController::OnPerceptionUpdated);
	}*/
	
	/*GetWorldTimerManager().SetTimer(RandomMoveTimer, this, &ACyberAIController::MoveToRandomLocation, 3.0f, true, 1.0f );*/
}

void ACyberAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	
	if (InPawn)
	{
		UE_LOG(LogTemp, Warning, TEXT("[Cyber] AI Controller is controlling %s."), *InPawn->GetName());
	}
}

void ACyberAIController::MoveToRandomLocation()
{
	//APawn* MyPawn = GetPawn();

	//// 현재 월드에서 사용 중인 NavigationSystem을 가져온다.
	//UNavigationSystemV1* NavSystem = UNavigationSystemV1::GetCurrent(GetWorld());

	//// NavigationSystem이 반환하는 위치 정보를 저장할 구조체를 선언.
	//FNavLocation RandomLocation;
	//bool bFoundLocation = NavSystem->GetRandomReachablePointInRadius(MyPawn->GetActorLocation(), MoveRadius, RandomLocation);

	//if (bFoundLocation)
	//{
	//	MoveToLocation(RandomLocation.Location); // 월드의 특정 좌표로	이동하도록 AI에게 명령.
	//}
}

void ACyberAIController::OnPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus)
{
	//if (Stimulus.WasSuccessfullySensed())
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("[Cyber] Saw something! %s"), *Actor->GetName());

	//	DrawDebugString(
	//		GetWorld(), 
	//		Actor->GetActorLocation() + FVector(0, 0, 100), 
	//		FString::Printf(TEXT("Saw: %s"), *Actor->GetName()),
	//		nullptr, 
	//		FColor::Green, 
	//		2.0f, 
	//		true
	//	);
	//}
	//else
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("[Cyber] Missed it! %s"), *Actor->GetName());

	//	DrawDebugString(
	//		GetWorld(),
	//		Actor->GetActorLocation() + FVector(0, 0, 100),
	//		FString::Printf(TEXT("Missed: %s"), *Actor->GetName()),
	//		nullptr,
	//		FColor::Red,
	//		2.0f,
	//		true
	//	);
	//}
}