// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CyberAICharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCyberAICharacter() {}

// ********** Begin Cross Module References ********************************************************
CYBERDEFENDER_API UClass* Z_Construct_UClass_ACyberAICharacter();
CYBERDEFENDER_API UClass* Z_Construct_UClass_ACyberAICharacter_NoRegister();
CYBERDEFENDER_API UEnum* Z_Construct_UEnum_CyberDefender_ERobotType();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_CyberDefender();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ERobotType ****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERobotType;
static UEnum* ERobotType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERobotType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERobotType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CyberDefender_ERobotType, (UObject*)Z_Construct_UPackage__Script_CyberDefender(), TEXT("ERobotType"));
	}
	return Z_Registration_Info_UEnum_ERobotType.OuterSingleton;
}
template<> CYBERDEFENDER_API UEnum* StaticEnum<ERobotType>()
{
	return ERobotType_StaticEnum();
}
struct Z_Construct_UEnum_CyberDefender_ERobotType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CyberHacker.DisplayName", "CyberHacker" },
		{ "CyberHacker.Name", "ERobotType::CyberHacker" },
		{ "DogRobot.DisplayName", "DogRobot" },
		{ "DogRobot.Name", "ERobotType::DogRobot" },
		{ "Drone.DisplayName", "Drone" },
		{ "Drone.Name", "ERobotType::Drone" },
		{ "Humanoid.DisplayName", "Humanoid" },
		{ "Humanoid.Name", "ERobotType::Humanoid" },
		{ "ModuleRelativePath", "Public/CyberAICharacter.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERobotType::Humanoid", (int64)ERobotType::Humanoid },
		{ "ERobotType::DogRobot", (int64)ERobotType::DogRobot },
		{ "ERobotType::Drone", (int64)ERobotType::Drone },
		{ "ERobotType::CyberHacker", (int64)ERobotType::CyberHacker },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CyberDefender_ERobotType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CyberDefender,
	nullptr,
	"ERobotType",
	"ERobotType",
	Z_Construct_UEnum_CyberDefender_ERobotType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CyberDefender_ERobotType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CyberDefender_ERobotType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CyberDefender_ERobotType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CyberDefender_ERobotType()
{
	if (!Z_Registration_Info_UEnum_ERobotType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERobotType.InnerSingleton, Z_Construct_UEnum_CyberDefender_ERobotType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERobotType.InnerSingleton;
}
// ********** End Enum ERobotType ******************************************************************

// ********** Begin Class ACyberAICharacter ********************************************************
void ACyberAICharacter::StaticRegisterNativesACyberAICharacter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACyberAICharacter;
UClass* ACyberAICharacter::GetPrivateStaticClass()
{
	using TClass = ACyberAICharacter;
	if (!Z_Registration_Info_UClass_ACyberAICharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CyberAICharacter"),
			Z_Registration_Info_UClass_ACyberAICharacter.InnerSingleton,
			StaticRegisterNativesACyberAICharacter,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ACyberAICharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_ACyberAICharacter_NoRegister()
{
	return ACyberAICharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACyberAICharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CyberAICharacter.h" },
		{ "ModuleRelativePath", "Public/CyberAICharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/CyberAICharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunSpeed_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/CyberAICharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RobotType_MetaData[] = {
		{ "Category", "CyberAICharacter" },
		{ "ModuleRelativePath", "Public/CyberAICharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RobotMeshes_MetaData[] = {
		{ "Category", "CyberAICharacter" },
		{ "ModuleRelativePath", "Public/CyberAICharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RunSpeed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RobotType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RobotType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RobotMeshes_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RobotMeshes_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RobotMeshes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RobotMeshes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACyberAICharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACyberAICharacter_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACyberAICharacter, WalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkSpeed_MetaData), NewProp_WalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACyberAICharacter_Statics::NewProp_RunSpeed = { "RunSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACyberAICharacter, RunSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunSpeed_MetaData), NewProp_RunSpeed_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACyberAICharacter_Statics::NewProp_RobotType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACyberAICharacter_Statics::NewProp_RobotType = { "RobotType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACyberAICharacter, RobotType), Z_Construct_UEnum_CyberDefender_ERobotType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RobotType_MetaData), NewProp_RobotType_MetaData) }; // 2010056094
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberAICharacter_Statics::NewProp_RobotMeshes_ValueProp = { "RobotMeshes", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACyberAICharacter_Statics::NewProp_RobotMeshes_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACyberAICharacter_Statics::NewProp_RobotMeshes_Key_KeyProp = { "RobotMeshes_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_CyberDefender_ERobotType, METADATA_PARAMS(0, nullptr) }; // 2010056094
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ACyberAICharacter_Statics::NewProp_RobotMeshes = { "RobotMeshes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACyberAICharacter, RobotMeshes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RobotMeshes_MetaData), NewProp_RobotMeshes_MetaData) }; // 2010056094
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACyberAICharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberAICharacter_Statics::NewProp_WalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberAICharacter_Statics::NewProp_RunSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberAICharacter_Statics::NewProp_RobotType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberAICharacter_Statics::NewProp_RobotType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberAICharacter_Statics::NewProp_RobotMeshes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberAICharacter_Statics::NewProp_RobotMeshes_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberAICharacter_Statics::NewProp_RobotMeshes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberAICharacter_Statics::NewProp_RobotMeshes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACyberAICharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACyberAICharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_CyberDefender,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACyberAICharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACyberAICharacter_Statics::ClassParams = {
	&ACyberAICharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACyberAICharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACyberAICharacter_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACyberAICharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ACyberAICharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACyberAICharacter()
{
	if (!Z_Registration_Info_UClass_ACyberAICharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACyberAICharacter.OuterSingleton, Z_Construct_UClass_ACyberAICharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACyberAICharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACyberAICharacter);
ACyberAICharacter::~ACyberAICharacter() {}
// ********** End Class ACyberAICharacter **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberAICharacter_h__Script_CyberDefender_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERobotType_StaticEnum, TEXT("ERobotType"), &Z_Registration_Info_UEnum_ERobotType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2010056094U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACyberAICharacter, ACyberAICharacter::StaticClass, TEXT("ACyberAICharacter"), &Z_Registration_Info_UClass_ACyberAICharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACyberAICharacter), 1709781127U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberAICharacter_h__Script_CyberDefender_3590855292(TEXT("/Script/CyberDefender"),
	Z_CompiledInDeferFile_FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberAICharacter_h__Script_CyberDefender_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberAICharacter_h__Script_CyberDefender_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberAICharacter_h__Script_CyberDefender_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberAICharacter_h__Script_CyberDefender_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
