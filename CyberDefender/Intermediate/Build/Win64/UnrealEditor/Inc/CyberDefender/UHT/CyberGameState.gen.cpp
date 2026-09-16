// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CyberGameState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCyberGameState() {}

// ********** Begin Cross Module References ********************************************************
CYBERDEFENDER_API UClass* Z_Construct_UClass_ACyberGameState();
CYBERDEFENDER_API UClass* Z_Construct_UClass_ACyberGameState_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameState();
UPackage* Z_Construct_UPackage__Script_CyberDefender();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACyberGameState **********************************************************
void ACyberGameState::StaticRegisterNativesACyberGameState()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACyberGameState;
UClass* ACyberGameState::GetPrivateStaticClass()
{
	using TClass = ACyberGameState;
	if (!Z_Registration_Info_UClass_ACyberGameState.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CyberGameState"),
			Z_Registration_Info_UClass_ACyberGameState.InnerSingleton,
			StaticRegisterNativesACyberGameState,
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
	return Z_Registration_Info_UClass_ACyberGameState.InnerSingleton;
}
UClass* Z_Construct_UClass_ACyberGameState_NoRegister()
{
	return ACyberGameState::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACyberGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CyberGameState.h" },
		{ "ModuleRelativePath", "Public/CyberGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Public/CyberGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWave_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Public/CyberGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentWave;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACyberGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACyberGameState_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACyberGameState, Score), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Score_MetaData), NewProp_Score_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACyberGameState_Statics::NewProp_CurrentWave = { "CurrentWave", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACyberGameState, CurrentWave), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentWave_MetaData), NewProp_CurrentWave_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACyberGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberGameState_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberGameState_Statics::NewProp_CurrentWave,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACyberGameState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACyberGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameState,
	(UObject* (*)())Z_Construct_UPackage__Script_CyberDefender,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACyberGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACyberGameState_Statics::ClassParams = {
	&ACyberGameState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACyberGameState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACyberGameState_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACyberGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_ACyberGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACyberGameState()
{
	if (!Z_Registration_Info_UClass_ACyberGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACyberGameState.OuterSingleton, Z_Construct_UClass_ACyberGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACyberGameState.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACyberGameState);
ACyberGameState::~ACyberGameState() {}
// ********** End Class ACyberGameState ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberGameState_h__Script_CyberDefender_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACyberGameState, ACyberGameState::StaticClass, TEXT("ACyberGameState"), &Z_Registration_Info_UClass_ACyberGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACyberGameState), 2961712945U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberGameState_h__Script_CyberDefender_3412658440(TEXT("/Script/CyberDefender"),
	Z_CompiledInDeferFile_FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberGameState_h__Script_CyberDefender_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberGameState_h__Script_CyberDefender_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
