// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CyberAIController.h"

#ifdef CYBERDEFENDER_CyberAIController_generated_h
#error "CyberAIController.generated.h already included, missing '#pragma once' in CyberAIController.h"
#endif
#define CYBERDEFENDER_CyberAIController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
struct FAIStimulus;

// ********** Begin Class ACyberAIController *******************************************************
#define FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberAIController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPerceptionUpdated);


CYBERDEFENDER_API UClass* Z_Construct_UClass_ACyberAIController_NoRegister();

#define FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberAIController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACyberAIController(); \
	friend struct Z_Construct_UClass_ACyberAIController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CYBERDEFENDER_API UClass* Z_Construct_UClass_ACyberAIController_NoRegister(); \
public: \
	DECLARE_CLASS2(ACyberAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CyberDefender"), Z_Construct_UClass_ACyberAIController_NoRegister) \
	DECLARE_SERIALIZER(ACyberAIController)


#define FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberAIController_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACyberAIController(ACyberAIController&&) = delete; \
	ACyberAIController(const ACyberAIController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACyberAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACyberAIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACyberAIController) \
	NO_API virtual ~ACyberAIController();


#define FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberAIController_h_12_PROLOG
#define FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberAIController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberAIController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberAIController_h_15_INCLASS_NO_PURE_DECLS \
	FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberAIController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACyberAIController;

// ********** End Class ACyberAIController *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberAIController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
