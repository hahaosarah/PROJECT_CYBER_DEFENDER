// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DT_EnemySpawn.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDT_EnemySpawn() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
CYBERDEFENDER_API UScriptStruct* Z_Construct_UScriptStruct_FDT_EnemySpawn();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
UPackage* Z_Construct_UPackage__Script_CyberDefender();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FDT_EnemySpawn ****************************************************
static_assert(std::is_polymorphic<FDT_EnemySpawn>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FDT_EnemySpawn cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDT_EnemySpawn;
class UScriptStruct* FDT_EnemySpawn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDT_EnemySpawn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDT_EnemySpawn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDT_EnemySpawn, (UObject*)Z_Construct_UPackage__Script_CyberDefender(), TEXT("DT_EnemySpawn"));
	}
	return Z_Registration_Info_UScriptStruct_FDT_EnemySpawn.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FDT_EnemySpawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DT_EnemySpawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyName_MetaData[] = {
		{ "Category", "Enemy Spawn" },
		{ "ModuleRelativePath", "Public/DT_EnemySpawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyClass_MetaData[] = {
		{ "Category", "Enemy Spawn" },
		{ "ModuleRelativePath", "Public/DT_EnemySpawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnChance_MetaData[] = {
		{ "Category", "Enemy Spawn" },
		{ "ModuleRelativePath", "Public/DT_EnemySpawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_EnemyName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EnemyClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnChance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDT_EnemySpawn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDT_EnemySpawn_Statics::NewProp_EnemyName = { "EnemyName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDT_EnemySpawn, EnemyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyName_MetaData), NewProp_EnemyName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FDT_EnemySpawn_Statics::NewProp_EnemyClass = { "EnemyClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDT_EnemySpawn, EnemyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyClass_MetaData), NewProp_EnemyClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDT_EnemySpawn_Statics::NewProp_SpawnChance = { "SpawnChance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDT_EnemySpawn, SpawnChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnChance_MetaData), NewProp_SpawnChance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDT_EnemySpawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDT_EnemySpawn_Statics::NewProp_EnemyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDT_EnemySpawn_Statics::NewProp_EnemyClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDT_EnemySpawn_Statics::NewProp_SpawnChance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDT_EnemySpawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDT_EnemySpawn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CyberDefender,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"DT_EnemySpawn",
	Z_Construct_UScriptStruct_FDT_EnemySpawn_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDT_EnemySpawn_Statics::PropPointers),
	sizeof(FDT_EnemySpawn),
	alignof(FDT_EnemySpawn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDT_EnemySpawn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDT_EnemySpawn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDT_EnemySpawn()
{
	if (!Z_Registration_Info_UScriptStruct_FDT_EnemySpawn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDT_EnemySpawn.InnerSingleton, Z_Construct_UScriptStruct_FDT_EnemySpawn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FDT_EnemySpawn.InnerSingleton;
}
// ********** End ScriptStruct FDT_EnemySpawn ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_DT_EnemySpawn_h__Script_CyberDefender_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDT_EnemySpawn::StaticStruct, Z_Construct_UScriptStruct_FDT_EnemySpawn_Statics::NewStructOps, TEXT("DT_EnemySpawn"), &Z_Registration_Info_UScriptStruct_FDT_EnemySpawn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDT_EnemySpawn), 272536133U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_DT_EnemySpawn_h__Script_CyberDefender_1245942389(TEXT("/Script/CyberDefender"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_DT_EnemySpawn_h__Script_CyberDefender_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_DT_EnemySpawn_h__Script_CyberDefender_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
