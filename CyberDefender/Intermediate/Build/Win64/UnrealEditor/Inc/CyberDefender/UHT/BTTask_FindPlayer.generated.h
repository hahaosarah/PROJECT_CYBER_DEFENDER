// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BTTask_FindPlayer.h"

#ifdef CYBERDEFENDER_BTTask_FindPlayer_generated_h
#error "BTTask_FindPlayer.generated.h already included, missing '#pragma once' in BTTask_FindPlayer.h"
#endif
#define CYBERDEFENDER_BTTask_FindPlayer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBTTask_FindPlayer *******************************************************
CYBERDEFENDER_API UClass* Z_Construct_UClass_UBTTask_FindPlayer_NoRegister();

#define FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_BTTask_FindPlayer_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBTTask_FindPlayer(); \
	friend struct Z_Construct_UClass_UBTTask_FindPlayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CYBERDEFENDER_API UClass* Z_Construct_UClass_UBTTask_FindPlayer_NoRegister(); \
public: \
	DECLARE_CLASS2(UBTTask_FindPlayer, UBTTask_BlackboardBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CyberDefender"), Z_Construct_UClass_UBTTask_FindPlayer_NoRegister) \
	DECLARE_SERIALIZER(UBTTask_FindPlayer)


#define FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_BTTask_FindPlayer_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBTTask_FindPlayer(UBTTask_FindPlayer&&) = delete; \
	UBTTask_FindPlayer(const UBTTask_FindPlayer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTTask_FindPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTTask_FindPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBTTask_FindPlayer) \
	NO_API virtual ~UBTTask_FindPlayer();


#define FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_BTTask_FindPlayer_h_12_PROLOG
#define FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_BTTask_FindPlayer_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_BTTask_FindPlayer_h_15_INCLASS_NO_PURE_DECLS \
	FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_BTTask_FindPlayer_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBTTask_FindPlayer;

// ********** End Class UBTTask_FindPlayer *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_BTTask_FindPlayer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
