// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CyberAICharacter.h"

#ifdef CYBERDEFENDER_CyberAICharacter_generated_h
#error "CyberAICharacter.generated.h already included, missing '#pragma once' in CyberAICharacter.h"
#endif
#define CYBERDEFENDER_CyberAICharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACyberAICharacter ********************************************************
CYBERDEFENDER_API UClass* Z_Construct_UClass_ACyberAICharacter_NoRegister();

#define FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberAICharacter_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACyberAICharacter(); \
	friend struct Z_Construct_UClass_ACyberAICharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CYBERDEFENDER_API UClass* Z_Construct_UClass_ACyberAICharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ACyberAICharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CyberDefender"), Z_Construct_UClass_ACyberAICharacter_NoRegister) \
	DECLARE_SERIALIZER(ACyberAICharacter)


#define FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberAICharacter_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACyberAICharacter(ACyberAICharacter&&) = delete; \
	ACyberAICharacter(const ACyberAICharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACyberAICharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACyberAICharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACyberAICharacter) \
	NO_API virtual ~ACyberAICharacter();


#define FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberAICharacter_h_16_PROLOG
#define FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberAICharacter_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberAICharacter_h_19_INCLASS_NO_PURE_DECLS \
	FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberAICharacter_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACyberAICharacter;

// ********** End Class ACyberAICharacter **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberAICharacter_h

// ********** Begin Enum ERobotType ****************************************************************
#define FOREACH_ENUM_EROBOTTYPE(op) \
	op(ERobotType::Humanoid) \
	op(ERobotType::DogRobot) \
	op(ERobotType::Drone) \
	op(ERobotType::CyberHacker) 

enum class ERobotType : uint8;
template<> struct TIsUEnumClass<ERobotType> { enum { Value = true }; };
template<> CYBERDEFENDER_API UEnum* StaticEnum<ERobotType>();
// ********** End Enum ERobotType ******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
