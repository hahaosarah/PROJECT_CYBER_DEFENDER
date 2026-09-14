// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CyberEnemySpawnVolume.h"

#ifdef CYBERDEFENDER_CyberEnemySpawnVolume_generated_h
#error "CyberEnemySpawnVolume.generated.h already included, missing '#pragma once' in CyberEnemySpawnVolume.h"
#endif
#define CYBERDEFENDER_CyberEnemySpawnVolume_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACyberEnemySpawnVolume ***************************************************
#define FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberEnemySpawnVolume_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSpawnRandomEnemy);


CYBERDEFENDER_API UClass* Z_Construct_UClass_ACyberEnemySpawnVolume_NoRegister();

#define FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberEnemySpawnVolume_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACyberEnemySpawnVolume(); \
	friend struct Z_Construct_UClass_ACyberEnemySpawnVolume_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CYBERDEFENDER_API UClass* Z_Construct_UClass_ACyberEnemySpawnVolume_NoRegister(); \
public: \
	DECLARE_CLASS2(ACyberEnemySpawnVolume, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CyberDefender"), Z_Construct_UClass_ACyberEnemySpawnVolume_NoRegister) \
	DECLARE_SERIALIZER(ACyberEnemySpawnVolume)


#define FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberEnemySpawnVolume_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACyberEnemySpawnVolume(ACyberEnemySpawnVolume&&) = delete; \
	ACyberEnemySpawnVolume(const ACyberEnemySpawnVolume&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACyberEnemySpawnVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACyberEnemySpawnVolume); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACyberEnemySpawnVolume) \
	NO_API virtual ~ACyberEnemySpawnVolume();


#define FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberEnemySpawnVolume_h_11_PROLOG
#define FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberEnemySpawnVolume_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberEnemySpawnVolume_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberEnemySpawnVolume_h_14_INCLASS_NO_PURE_DECLS \
	FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberEnemySpawnVolume_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACyberEnemySpawnVolume;

// ********** End Class ACyberEnemySpawnVolume *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberEnemySpawnVolume_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
