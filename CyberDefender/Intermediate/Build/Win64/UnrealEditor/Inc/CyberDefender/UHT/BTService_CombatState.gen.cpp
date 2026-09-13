// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BTService_CombatState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBTService_CombatState() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlackboardBase();
CYBERDEFENDER_API UClass* Z_Construct_UClass_UBTService_CombatState();
CYBERDEFENDER_API UClass* Z_Construct_UClass_UBTService_CombatState_NoRegister();
UPackage* Z_Construct_UPackage__Script_CyberDefender();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBTService_CombatState ***************************************************
void UBTService_CombatState::StaticRegisterNativesUBTService_CombatState()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBTService_CombatState;
UClass* UBTService_CombatState::GetPrivateStaticClass()
{
	using TClass = UBTService_CombatState;
	if (!Z_Registration_Info_UClass_UBTService_CombatState.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BTService_CombatState"),
			Z_Registration_Info_UClass_UBTService_CombatState.InnerSingleton,
			StaticRegisterNativesUBTService_CombatState,
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
	return Z_Registration_Info_UClass_UBTService_CombatState.InnerSingleton;
}
UClass* Z_Construct_UClass_UBTService_CombatState_NoRegister()
{
	return UBTService_CombatState::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBTService_CombatState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BTService_CombatState.h" },
		{ "ModuleRelativePath", "Public/BTService_CombatState.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_CombatState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTService_CombatState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CyberDefender,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_CombatState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_CombatState_Statics::ClassParams = {
	&UBTService_CombatState::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_CombatState_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTService_CombatState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTService_CombatState()
{
	if (!Z_Registration_Info_UClass_UBTService_CombatState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_CombatState.OuterSingleton, Z_Construct_UClass_UBTService_CombatState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTService_CombatState.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_CombatState);
UBTService_CombatState::~UBTService_CombatState() {}
// ********** End Class UBTService_CombatState *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_BTService_CombatState_h__Script_CyberDefender_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_CombatState, UBTService_CombatState::StaticClass, TEXT("UBTService_CombatState"), &Z_Registration_Info_UClass_UBTService_CombatState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_CombatState), 223620498U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_BTService_CombatState_h__Script_CyberDefender_2134319857(TEXT("/Script/CyberDefender"),
	Z_CompiledInDeferFile_FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_BTService_CombatState_h__Script_CyberDefender_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_BTService_CombatState_h__Script_CyberDefender_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
