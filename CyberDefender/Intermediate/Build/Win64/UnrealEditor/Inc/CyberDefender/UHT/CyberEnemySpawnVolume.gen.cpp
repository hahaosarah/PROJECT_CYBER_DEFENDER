// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CyberEnemySpawnVolume.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCyberEnemySpawnVolume() {}

// ********** Begin Cross Module References ********************************************************
CYBERDEFENDER_API UClass* Z_Construct_UClass_ACyberEnemySpawnVolume();
CYBERDEFENDER_API UClass* Z_Construct_UClass_ACyberEnemySpawnVolume_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_CyberDefender();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACyberEnemySpawnVolume Function SpawnRandomEnemy *************************
struct Z_Construct_UFunction_ACyberEnemySpawnVolume_SpawnRandomEnemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/CyberEnemySpawnVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberEnemySpawnVolume_SpawnRandomEnemy_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACyberEnemySpawnVolume, nullptr, "SpawnRandomEnemy", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberEnemySpawnVolume_SpawnRandomEnemy_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACyberEnemySpawnVolume_SpawnRandomEnemy_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACyberEnemySpawnVolume_SpawnRandomEnemy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACyberEnemySpawnVolume_SpawnRandomEnemy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACyberEnemySpawnVolume::execSpawnRandomEnemy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnRandomEnemy();
	P_NATIVE_END;
}
// ********** End Class ACyberEnemySpawnVolume Function SpawnRandomEnemy ***************************

// ********** Begin Class ACyberEnemySpawnVolume ***************************************************
void ACyberEnemySpawnVolume::StaticRegisterNativesACyberEnemySpawnVolume()
{
	UClass* Class = ACyberEnemySpawnVolume::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SpawnRandomEnemy", &ACyberEnemySpawnVolume::execSpawnRandomEnemy },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACyberEnemySpawnVolume;
UClass* ACyberEnemySpawnVolume::GetPrivateStaticClass()
{
	using TClass = ACyberEnemySpawnVolume;
	if (!Z_Registration_Info_UClass_ACyberEnemySpawnVolume.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CyberEnemySpawnVolume"),
			Z_Registration_Info_UClass_ACyberEnemySpawnVolume.InnerSingleton,
			StaticRegisterNativesACyberEnemySpawnVolume,
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
	return Z_Registration_Info_UClass_ACyberEnemySpawnVolume.InnerSingleton;
}
UClass* Z_Construct_UClass_ACyberEnemySpawnVolume_NoRegister()
{
	return ACyberEnemySpawnVolume::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACyberEnemySpawnVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CyberEnemySpawnVolume.h" },
		{ "ModuleRelativePath", "Public/CyberEnemySpawnVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scene_MetaData[] = {
		{ "Category", "Spawning" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CyberEnemySpawnVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawningBox_MetaData[] = {
		{ "Category", "Spawning" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CyberEnemySpawnVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemySpawnDataTable_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/CyberEnemySpawnVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Scene;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawningBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemySpawnDataTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACyberEnemySpawnVolume_SpawnRandomEnemy, "SpawnRandomEnemy" }, // 832540087
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACyberEnemySpawnVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberEnemySpawnVolume_Statics::NewProp_Scene = { "Scene", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACyberEnemySpawnVolume, Scene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scene_MetaData), NewProp_Scene_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberEnemySpawnVolume_Statics::NewProp_SpawningBox = { "SpawningBox", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACyberEnemySpawnVolume, SpawningBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawningBox_MetaData), NewProp_SpawningBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberEnemySpawnVolume_Statics::NewProp_EnemySpawnDataTable = { "EnemySpawnDataTable", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACyberEnemySpawnVolume, EnemySpawnDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemySpawnDataTable_MetaData), NewProp_EnemySpawnDataTable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACyberEnemySpawnVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberEnemySpawnVolume_Statics::NewProp_Scene,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberEnemySpawnVolume_Statics::NewProp_SpawningBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberEnemySpawnVolume_Statics::NewProp_EnemySpawnDataTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACyberEnemySpawnVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACyberEnemySpawnVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CyberDefender,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACyberEnemySpawnVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACyberEnemySpawnVolume_Statics::ClassParams = {
	&ACyberEnemySpawnVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACyberEnemySpawnVolume_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACyberEnemySpawnVolume_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACyberEnemySpawnVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_ACyberEnemySpawnVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACyberEnemySpawnVolume()
{
	if (!Z_Registration_Info_UClass_ACyberEnemySpawnVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACyberEnemySpawnVolume.OuterSingleton, Z_Construct_UClass_ACyberEnemySpawnVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACyberEnemySpawnVolume.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACyberEnemySpawnVolume);
ACyberEnemySpawnVolume::~ACyberEnemySpawnVolume() {}
// ********** End Class ACyberEnemySpawnVolume *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberEnemySpawnVolume_h__Script_CyberDefender_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACyberEnemySpawnVolume, ACyberEnemySpawnVolume::StaticClass, TEXT("ACyberEnemySpawnVolume"), &Z_Registration_Info_UClass_ACyberEnemySpawnVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACyberEnemySpawnVolume), 1865283851U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberEnemySpawnVolume_h__Script_CyberDefender_577180882(TEXT("/Script/CyberDefender"),
	Z_CompiledInDeferFile_FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberEnemySpawnVolume_h__Script_CyberDefender_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberEnemySpawnVolume_h__Script_CyberDefender_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
