// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CyberPlayerController.h"

#ifdef CYBERDEFENDER_CyberPlayerController_generated_h
#error "CyberPlayerController.generated.h already included, missing '#pragma once' in CyberPlayerController.h"
#endif
#define CYBERDEFENDER_CyberPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACyberPlayerController ***************************************************
CYBERDEFENDER_API UClass* Z_Construct_UClass_ACyberPlayerController_NoRegister();

#define FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberPlayerController_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACyberPlayerController(); \
	friend struct Z_Construct_UClass_ACyberPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CYBERDEFENDER_API UClass* Z_Construct_UClass_ACyberPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(ACyberPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CyberDefender"), Z_Construct_UClass_ACyberPlayerController_NoRegister) \
	DECLARE_SERIALIZER(ACyberPlayerController)


#define FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberPlayerController_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACyberPlayerController(ACyberPlayerController&&) = delete; \
	ACyberPlayerController(const ACyberPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACyberPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACyberPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACyberPlayerController) \
	NO_API virtual ~ACyberPlayerController();


#define FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberPlayerController_h_10_PROLOG
#define FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberPlayerController_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberPlayerController_h_13_INCLASS_NO_PURE_DECLS \
	FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberPlayerController_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACyberPlayerController;

// ********** End Class ACyberPlayerController *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
