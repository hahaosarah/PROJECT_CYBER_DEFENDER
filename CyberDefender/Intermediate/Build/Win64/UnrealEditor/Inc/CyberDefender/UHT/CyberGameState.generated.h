// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CyberGameState.h"

#ifdef CYBERDEFENDER_CyberGameState_generated_h
#error "CyberGameState.generated.h already included, missing '#pragma once' in CyberGameState.h"
#endif
#define CYBERDEFENDER_CyberGameState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACyberGameState **********************************************************
CYBERDEFENDER_API UClass* Z_Construct_UClass_ACyberGameState_NoRegister();

#define FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberGameState_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACyberGameState(); \
	friend struct Z_Construct_UClass_ACyberGameState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CYBERDEFENDER_API UClass* Z_Construct_UClass_ACyberGameState_NoRegister(); \
public: \
	DECLARE_CLASS2(ACyberGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CyberDefender"), Z_Construct_UClass_ACyberGameState_NoRegister) \
	DECLARE_SERIALIZER(ACyberGameState)


#define FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberGameState_h_10_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACyberGameState(ACyberGameState&&) = delete; \
	ACyberGameState(const ACyberGameState&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACyberGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACyberGameState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACyberGameState) \
	NO_API virtual ~ACyberGameState();


#define FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberGameState_h_7_PROLOG
#define FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberGameState_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberGameState_h_10_INCLASS_NO_PURE_DECLS \
	FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberGameState_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACyberGameState;

// ********** End Class ACyberGameState ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberGameState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
