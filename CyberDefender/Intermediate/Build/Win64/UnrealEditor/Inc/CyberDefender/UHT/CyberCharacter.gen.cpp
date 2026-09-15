// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CyberCharacter.h"
#include "InputActionValue.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCyberCharacter() {}

// ********** Begin Cross Module References ********************************************************
CYBERDEFENDER_API UClass* Z_Construct_UClass_ACyberCharacter();
CYBERDEFENDER_API UClass* Z_Construct_UClass_ACyberCharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
UPackage* Z_Construct_UPackage__Script_CyberDefender();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACyberCharacter Function AddHealth ***************************************
struct Z_Construct_UFunction_ACyberCharacter_AddHealth_Statics
{
	struct CyberCharacter_eventAddHealth_Parms
	{
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/CyberCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACyberCharacter_AddHealth_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CyberCharacter_eventAddHealth_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACyberCharacter_AddHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACyberCharacter_AddHealth_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberCharacter_AddHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberCharacter_AddHealth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACyberCharacter, nullptr, "AddHealth", Z_Construct_UFunction_ACyberCharacter_AddHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberCharacter_AddHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACyberCharacter_AddHealth_Statics::CyberCharacter_eventAddHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberCharacter_AddHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACyberCharacter_AddHealth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACyberCharacter_AddHealth_Statics::CyberCharacter_eventAddHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACyberCharacter_AddHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACyberCharacter_AddHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACyberCharacter::execAddHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddHealth(Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class ACyberCharacter Function AddHealth *****************************************

// ********** Begin Class ACyberCharacter Function GetHealth ***************************************
struct Z_Construct_UFunction_ACyberCharacter_GetHealth_Statics
{
	struct CyberCharacter_eventGetHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/CyberCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACyberCharacter_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CyberCharacter_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACyberCharacter_GetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACyberCharacter_GetHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberCharacter_GetHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberCharacter_GetHealth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACyberCharacter, nullptr, "GetHealth", Z_Construct_UFunction_ACyberCharacter_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberCharacter_GetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACyberCharacter_GetHealth_Statics::CyberCharacter_eventGetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberCharacter_GetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACyberCharacter_GetHealth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACyberCharacter_GetHealth_Statics::CyberCharacter_eventGetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACyberCharacter_GetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACyberCharacter_GetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACyberCharacter::execGetHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHealth();
	P_NATIVE_END;
}
// ********** End Class ACyberCharacter Function GetHealth *****************************************

// ********** Begin Class ACyberCharacter Function Look ********************************************
struct Z_Construct_UFunction_ACyberCharacter_Look_Statics
{
	struct CyberCharacter_eventLook_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CyberCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACyberCharacter_Look_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CyberCharacter_eventLook_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 203218767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACyberCharacter_Look_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACyberCharacter_Look_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberCharacter_Look_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberCharacter_Look_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACyberCharacter, nullptr, "Look", Z_Construct_UFunction_ACyberCharacter_Look_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberCharacter_Look_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACyberCharacter_Look_Statics::CyberCharacter_eventLook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberCharacter_Look_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACyberCharacter_Look_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACyberCharacter_Look_Statics::CyberCharacter_eventLook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACyberCharacter_Look()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACyberCharacter_Look_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACyberCharacter::execLook)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Look(Z_Param_Out_value);
	P_NATIVE_END;
}
// ********** End Class ACyberCharacter Function Look **********************************************

// ********** Begin Class ACyberCharacter Function Move ********************************************
struct Z_Construct_UFunction_ACyberCharacter_Move_Statics
{
	struct CyberCharacter_eventMove_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CyberCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACyberCharacter_Move_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CyberCharacter_eventMove_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 203218767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACyberCharacter_Move_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACyberCharacter_Move_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberCharacter_Move_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberCharacter_Move_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACyberCharacter, nullptr, "Move", Z_Construct_UFunction_ACyberCharacter_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberCharacter_Move_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACyberCharacter_Move_Statics::CyberCharacter_eventMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberCharacter_Move_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACyberCharacter_Move_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACyberCharacter_Move_Statics::CyberCharacter_eventMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACyberCharacter_Move()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACyberCharacter_Move_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACyberCharacter::execMove)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Move(Z_Param_Out_value);
	P_NATIVE_END;
}
// ********** End Class ACyberCharacter Function Move **********************************************

// ********** Begin Class ACyberCharacter Function StartJump ***************************************
struct Z_Construct_UFunction_ACyberCharacter_StartJump_Statics
{
	struct CyberCharacter_eventStartJump_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CyberCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACyberCharacter_StartJump_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CyberCharacter_eventStartJump_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 203218767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACyberCharacter_StartJump_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACyberCharacter_StartJump_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberCharacter_StartJump_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberCharacter_StartJump_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACyberCharacter, nullptr, "StartJump", Z_Construct_UFunction_ACyberCharacter_StartJump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberCharacter_StartJump_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACyberCharacter_StartJump_Statics::CyberCharacter_eventStartJump_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberCharacter_StartJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACyberCharacter_StartJump_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACyberCharacter_StartJump_Statics::CyberCharacter_eventStartJump_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACyberCharacter_StartJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACyberCharacter_StartJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACyberCharacter::execStartJump)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartJump(Z_Param_Out_value);
	P_NATIVE_END;
}
// ********** End Class ACyberCharacter Function StartJump *****************************************

// ********** Begin Class ACyberCharacter Function StartSprint *************************************
struct Z_Construct_UFunction_ACyberCharacter_StartSprint_Statics
{
	struct CyberCharacter_eventStartSprint_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CyberCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACyberCharacter_StartSprint_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CyberCharacter_eventStartSprint_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 203218767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACyberCharacter_StartSprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACyberCharacter_StartSprint_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberCharacter_StartSprint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberCharacter_StartSprint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACyberCharacter, nullptr, "StartSprint", Z_Construct_UFunction_ACyberCharacter_StartSprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberCharacter_StartSprint_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACyberCharacter_StartSprint_Statics::CyberCharacter_eventStartSprint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberCharacter_StartSprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACyberCharacter_StartSprint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACyberCharacter_StartSprint_Statics::CyberCharacter_eventStartSprint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACyberCharacter_StartSprint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACyberCharacter_StartSprint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACyberCharacter::execStartSprint)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartSprint(Z_Param_Out_value);
	P_NATIVE_END;
}
// ********** End Class ACyberCharacter Function StartSprint ***************************************

// ********** Begin Class ACyberCharacter Function StopJump ****************************************
struct Z_Construct_UFunction_ACyberCharacter_StopJump_Statics
{
	struct CyberCharacter_eventStopJump_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CyberCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACyberCharacter_StopJump_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CyberCharacter_eventStopJump_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 203218767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACyberCharacter_StopJump_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACyberCharacter_StopJump_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberCharacter_StopJump_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberCharacter_StopJump_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACyberCharacter, nullptr, "StopJump", Z_Construct_UFunction_ACyberCharacter_StopJump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberCharacter_StopJump_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACyberCharacter_StopJump_Statics::CyberCharacter_eventStopJump_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberCharacter_StopJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACyberCharacter_StopJump_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACyberCharacter_StopJump_Statics::CyberCharacter_eventStopJump_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACyberCharacter_StopJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACyberCharacter_StopJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACyberCharacter::execStopJump)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopJump(Z_Param_Out_value);
	P_NATIVE_END;
}
// ********** End Class ACyberCharacter Function StopJump ******************************************

// ********** Begin Class ACyberCharacter Function StopSprint **************************************
struct Z_Construct_UFunction_ACyberCharacter_StopSprint_Statics
{
	struct CyberCharacter_eventStopSprint_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CyberCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACyberCharacter_StopSprint_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CyberCharacter_eventStopSprint_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 203218767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACyberCharacter_StopSprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACyberCharacter_StopSprint_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberCharacter_StopSprint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberCharacter_StopSprint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACyberCharacter, nullptr, "StopSprint", Z_Construct_UFunction_ACyberCharacter_StopSprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberCharacter_StopSprint_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACyberCharacter_StopSprint_Statics::CyberCharacter_eventStopSprint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberCharacter_StopSprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACyberCharacter_StopSprint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACyberCharacter_StopSprint_Statics::CyberCharacter_eventStopSprint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACyberCharacter_StopSprint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACyberCharacter_StopSprint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACyberCharacter::execStopSprint)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopSprint(Z_Param_Out_value);
	P_NATIVE_END;
}
// ********** End Class ACyberCharacter Function StopSprint ****************************************

// ********** Begin Class ACyberCharacter **********************************************************
void ACyberCharacter::StaticRegisterNativesACyberCharacter()
{
	UClass* Class = ACyberCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddHealth", &ACyberCharacter::execAddHealth },
		{ "GetHealth", &ACyberCharacter::execGetHealth },
		{ "Look", &ACyberCharacter::execLook },
		{ "Move", &ACyberCharacter::execMove },
		{ "StartJump", &ACyberCharacter::execStartJump },
		{ "StartSprint", &ACyberCharacter::execStartSprint },
		{ "StopJump", &ACyberCharacter::execStopJump },
		{ "StopSprint", &ACyberCharacter::execStopSprint },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CyberCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CyberCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/CyberCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/CyberCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACyberCharacter_AddHealth, "AddHealth" }, // 833205748
		{ &Z_Construct_UFunction_ACyberCharacter_GetHealth, "GetHealth" }, // 335508652
		{ &Z_Construct_UFunction_ACyberCharacter_Look, "Look" }, // 1738608891
		{ &Z_Construct_UFunction_ACyberCharacter_Move, "Move" }, // 3351241396
		{ &Z_Construct_UFunction_ACyberCharacter_StartJump, "StartJump" }, // 1238993108
		{ &Z_Construct_UFunction_ACyberCharacter_StartSprint, "StartSprint" }, // 980998381
		{ &Z_Construct_UFunction_ACyberCharacter_StopJump, "StopJump" }, // 3438195490
		{ &Z_Construct_UFunction_ACyberCharacter_StopSprint, "StopSprint" }, // 1869672048
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACyberCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberCharacter_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACyberCharacter, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmComp_MetaData), NewProp_SpringArmComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberCharacter_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACyberCharacter, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComp_MetaData), NewProp_CameraComp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACyberCharacter_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACyberCharacter, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACyberCharacter_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACyberCharacter, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACyberCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberCharacter_Statics::NewProp_SpringArmComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberCharacter_Statics::NewProp_CameraComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberCharacter_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberCharacter_Statics::NewProp_Health,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACyberCharacter_Statics::PropPointers) < 2048);
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
	FuncInfo,
	Z_Construct_UClass_ACyberCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACyberCharacter_Statics::PropPointers),
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
		{ Z_Construct_UClass_ACyberCharacter, ACyberCharacter::StaticClass, TEXT("ACyberCharacter"), &Z_Registration_Info_UClass_ACyberCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACyberCharacter), 106192930U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberCharacter_h__Script_CyberDefender_3169652946(TEXT("/Script/CyberDefender"),
	Z_CompiledInDeferFile_FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberCharacter_h__Script_CyberDefender_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_git_PROJECT_CYBER_DEFENDER_CyberDefender_Source_CyberDefender_Public_CyberCharacter_h__Script_CyberDefender_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
