// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CyberCharacter.h"

#ifdef CYBERDEFENDER_CyberCharacter_generated_h
#error "CyberCharacter.generated.h already included, missing '#pragma once' in CyberCharacter.h"
#endif
#define CYBERDEFENDER_CyberCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACyberCharacter **********************************************************
CYBERDEFENDER_API UClass* Z_Construct_UClass_ACyberCharacter_NoRegister();

#define FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACyberCharacter(); \
	friend struct Z_Construct_UClass_ACyberCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CYBERDEFENDER_API UClass* Z_Construct_UClass_ACyberCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ACyberCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CyberDefender"), Z_Construct_UClass_ACyberCharacter_NoRegister) \
	DECLARE_SERIALIZER(ACyberCharacter)


#define FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberCharacter_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACyberCharacter(ACyberCharacter&&) = delete; \
	ACyberCharacter(const ACyberCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACyberCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACyberCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACyberCharacter) \
	NO_API virtual ~ACyberCharacter();


#define FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberCharacter_h_9_PROLOG
#define FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACyberCharacter;

// ********** End Class ACyberCharacter ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
