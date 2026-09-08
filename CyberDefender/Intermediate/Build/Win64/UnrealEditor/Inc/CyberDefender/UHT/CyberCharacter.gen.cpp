// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CyberCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCyberCharacter() {}

// ********** Begin Cross Module References ********************************************************
CYBERDEFENDER_API UClass* Z_Construct_UClass_ACyberCharacter();
CYBERDEFENDER_API UClass* Z_Construct_UClass_ACyberCharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_CyberDefender();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACyberCharacter **********************************************************
void ACyberCharacter::StaticRegisterNativesACyberCharacter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACyberCharacter;
UClass* ACyberCharacter::GetPrivateStaticClass()
{
	using TClass = ACyberCharacter;
	if (!Z_Registration_Info_UClass_ACyberCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CyberCharacter"),
			Z_Registration_Info_UClass_ACyberCharacter.InnerSingleton,
			StaticRegisterNativesACyberCharacter,
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
	return Z_Registration_Info_UClass_ACyberCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_ACyberCharacter_NoRegister()
{
	return ACyberCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACyberCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CyberCharacter.h" },
		{ "ModuleRelativePath", "Public/CyberCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACyberCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACyberCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_CyberDefender,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACyberCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACyberCharacter_Statics::ClassParams = {
	&ACyberCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACyberCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ACyberCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACyberCharacter()
{
	if (!Z_Registration_Info_UClass_ACyberCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACyberCharacter.OuterSingleton, Z_Construct_UClass_ACyberCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACyberCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACyberCharacter);
ACyberCharacter::~ACyberCharacter() {}
// ********** End Class ACyberCharacter ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberCharacter_h__Script_CyberDefender_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACyberCharacter, ACyberCharacter::StaticClass, TEXT("ACyberCharacter"), &Z_Registration_Info_UClass_ACyberCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACyberCharacter), 2317106534U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberCharacter_h__Script_CyberDefender_1986411297(TEXT("/Script/CyberDefender"),
	Z_CompiledInDeferFile_FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberCharacter_h__Script_CyberDefender_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberCharacter_h__Script_CyberDefender_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
