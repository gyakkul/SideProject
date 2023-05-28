// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Components/LightComponentBase.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightComponentBase() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_ULightComponentBase();
	ENGINE_API UClass* Z_Construct_UClass_ULightComponentBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECastRayTracedShadow();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(ULightComponentBase::execSetSamplesPerPixel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSamplesPerPixel(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULightComponentBase::execSetCastRaytracedShadows)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_bNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCastRaytracedShadows(ECastRayTracedShadow::Type(Z_Param_bNewValue));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULightComponentBase::execSetCastRaytracedShadow)
	{
		P_GET_UBOOL(Z_Param_bNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCastRaytracedShadow(Z_Param_bNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULightComponentBase::execSetAffectGlobalIllumination)
	{
		P_GET_UBOOL(Z_Param_bNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAffectGlobalIllumination(Z_Param_bNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULightComponentBase::execSetAffectReflection)
	{
		P_GET_UBOOL(Z_Param_bNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAffectReflection(Z_Param_bNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULightComponentBase::execSetCastDeepShadow)
	{
		P_GET_UBOOL(Z_Param_bNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCastDeepShadow(Z_Param_bNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULightComponentBase::execSetCastVolumetricShadow)
	{
		P_GET_UBOOL(Z_Param_bNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCastVolumetricShadow(Z_Param_bNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULightComponentBase::execGetLightColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetLightColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULightComponentBase::execSetCastShadows)
	{
		P_GET_UBOOL(Z_Param_bNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCastShadows(Z_Param_bNewValue);
		P_NATIVE_END;
	}
	void ULightComponentBase::StaticRegisterNativesULightComponentBase()
	{
		UClass* Class = ULightComponentBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLightColor", &ULightComponentBase::execGetLightColor },
			{ "SetAffectGlobalIllumination", &ULightComponentBase::execSetAffectGlobalIllumination },
			{ "SetAffectReflection", &ULightComponentBase::execSetAffectReflection },
			{ "SetCastDeepShadow", &ULightComponentBase::execSetCastDeepShadow },
			{ "SetCastRaytracedShadow", &ULightComponentBase::execSetCastRaytracedShadow },
			{ "SetCastRaytracedShadows", &ULightComponentBase::execSetCastRaytracedShadows },
			{ "SetCastShadows", &ULightComponentBase::execSetCastShadows },
			{ "SetCastVolumetricShadow", &ULightComponentBase::execSetCastVolumetricShadow },
			{ "SetSamplesPerPixel", &ULightComponentBase::execSetSamplesPerPixel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULightComponentBase_GetLightColor_Statics
	{
		struct LightComponentBase_eventGetLightColor_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULightComponentBase_GetLightColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LightComponentBase_eventGetLightColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponentBase_GetLightColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponentBase_GetLightColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponentBase_GetLightColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "Comment", "/** Gets the light color as a linear color */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Gets the light color as a linear color" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponentBase_GetLightColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponentBase, nullptr, "GetLightColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULightComponentBase_GetLightColor_Statics::LightComponentBase_eventGetLightColor_Parms), Z_Construct_UFunction_ULightComponentBase_GetLightColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_GetLightColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponentBase_GetLightColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_GetLightColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponentBase_GetLightColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponentBase_GetLightColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponentBase_SetAffectGlobalIllumination_Statics
	{
		struct LightComponentBase_eventSetAffectGlobalIllumination_Parms
		{
			bool bNewValue;
		};
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULightComponentBase_SetAffectGlobalIllumination_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((LightComponentBase_eventSetAffectGlobalIllumination_Parms*)Obj)->bNewValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULightComponentBase_SetAffectGlobalIllumination_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LightComponentBase_eventSetAffectGlobalIllumination_Parms), &Z_Construct_UFunction_ULightComponentBase_SetAffectGlobalIllumination_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponentBase_SetAffectGlobalIllumination_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponentBase_SetAffectGlobalIllumination_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponentBase_SetAffectGlobalIllumination_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponentBase_SetAffectGlobalIllumination_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponentBase, nullptr, "SetAffectGlobalIllumination", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULightComponentBase_SetAffectGlobalIllumination_Statics::LightComponentBase_eventSetAffectGlobalIllumination_Parms), Z_Construct_UFunction_ULightComponentBase_SetAffectGlobalIllumination_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_SetAffectGlobalIllumination_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponentBase_SetAffectGlobalIllumination_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_SetAffectGlobalIllumination_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponentBase_SetAffectGlobalIllumination()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponentBase_SetAffectGlobalIllumination_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponentBase_SetAffectReflection_Statics
	{
		struct LightComponentBase_eventSetAffectReflection_Parms
		{
			bool bNewValue;
		};
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULightComponentBase_SetAffectReflection_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((LightComponentBase_eventSetAffectReflection_Parms*)Obj)->bNewValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULightComponentBase_SetAffectReflection_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LightComponentBase_eventSetAffectReflection_Parms), &Z_Construct_UFunction_ULightComponentBase_SetAffectReflection_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponentBase_SetAffectReflection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponentBase_SetAffectReflection_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponentBase_SetAffectReflection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponentBase_SetAffectReflection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponentBase, nullptr, "SetAffectReflection", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULightComponentBase_SetAffectReflection_Statics::LightComponentBase_eventSetAffectReflection_Parms), Z_Construct_UFunction_ULightComponentBase_SetAffectReflection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_SetAffectReflection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponentBase_SetAffectReflection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_SetAffectReflection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponentBase_SetAffectReflection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponentBase_SetAffectReflection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponentBase_SetCastDeepShadow_Statics
	{
		struct LightComponentBase_eventSetCastDeepShadow_Parms
		{
			bool bNewValue;
		};
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULightComponentBase_SetCastDeepShadow_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((LightComponentBase_eventSetCastDeepShadow_Parms*)Obj)->bNewValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULightComponentBase_SetCastDeepShadow_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LightComponentBase_eventSetCastDeepShadow_Parms), &Z_Construct_UFunction_ULightComponentBase_SetCastDeepShadow_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponentBase_SetCastDeepShadow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponentBase_SetCastDeepShadow_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponentBase_SetCastDeepShadow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponentBase_SetCastDeepShadow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponentBase, nullptr, "SetCastDeepShadow", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULightComponentBase_SetCastDeepShadow_Statics::LightComponentBase_eventSetCastDeepShadow_Parms), Z_Construct_UFunction_ULightComponentBase_SetCastDeepShadow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_SetCastDeepShadow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponentBase_SetCastDeepShadow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_SetCastDeepShadow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponentBase_SetCastDeepShadow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponentBase_SetCastDeepShadow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadow_Statics
	{
		struct LightComponentBase_eventSetCastRaytracedShadow_Parms
		{
			bool bNewValue;
		};
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadow_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((LightComponentBase_eventSetCastRaytracedShadow_Parms*)Obj)->bNewValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadow_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LightComponentBase_eventSetCastRaytracedShadow_Parms), &Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadow_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadow_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "ULightComponentBase::SetCastRaytracedShadow is deprecated. Use ULightComponentBase::SetCastRaytracedShadows instead." },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponentBase, nullptr, "SetCastRaytracedShadow", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadow_Statics::LightComponentBase_eventSetCastRaytracedShadow_Parms), Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadows_Statics
	{
		struct LightComponentBase_eventSetCastRaytracedShadows_Parms
		{
			TEnumAsByte<ECastRayTracedShadow::Type> bNewValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_bNewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadows_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LightComponentBase_eventSetCastRaytracedShadows_Parms, bNewValue), Z_Construct_UEnum_Engine_ECastRayTracedShadow, METADATA_PARAMS(nullptr, 0) }; // 1648730365
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadows_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadows_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadows_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadows_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponentBase, nullptr, "SetCastRaytracedShadows", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadows_Statics::LightComponentBase_eventSetCastRaytracedShadows_Parms), Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadows_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadows_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadows_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadows_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadows()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadows_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponentBase_SetCastShadows_Statics
	{
		struct LightComponentBase_eventSetCastShadows_Parms
		{
			bool bNewValue;
		};
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULightComponentBase_SetCastShadows_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((LightComponentBase_eventSetCastShadows_Parms*)Obj)->bNewValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULightComponentBase_SetCastShadows_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LightComponentBase_eventSetCastShadows_Parms), &Z_Construct_UFunction_ULightComponentBase_SetCastShadows_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponentBase_SetCastShadows_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponentBase_SetCastShadows_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponentBase_SetCastShadows_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "Comment", "/** Sets whether this light casts shadows */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Sets whether this light casts shadows" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponentBase_SetCastShadows_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponentBase, nullptr, "SetCastShadows", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULightComponentBase_SetCastShadows_Statics::LightComponentBase_eventSetCastShadows_Parms), Z_Construct_UFunction_ULightComponentBase_SetCastShadows_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_SetCastShadows_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponentBase_SetCastShadows_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_SetCastShadows_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponentBase_SetCastShadows()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponentBase_SetCastShadows_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow_Statics
	{
		struct LightComponentBase_eventSetCastVolumetricShadow_Parms
		{
			bool bNewValue;
		};
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((LightComponentBase_eventSetCastVolumetricShadow_Parms*)Obj)->bNewValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LightComponentBase_eventSetCastVolumetricShadow_Parms), &Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponentBase, nullptr, "SetCastVolumetricShadow", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow_Statics::LightComponentBase_eventSetCastVolumetricShadow_Parms), Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponentBase_SetSamplesPerPixel_Statics
	{
		struct LightComponentBase_eventSetSamplesPerPixel_Parms
		{
			int32 NewValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULightComponentBase_SetSamplesPerPixel_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LightComponentBase_eventSetSamplesPerPixel_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponentBase_SetSamplesPerPixel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponentBase_SetSamplesPerPixel_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponentBase_SetSamplesPerPixel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponentBase_SetSamplesPerPixel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponentBase, nullptr, "SetSamplesPerPixel", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULightComponentBase_SetSamplesPerPixel_Statics::LightComponentBase_eventSetSamplesPerPixel_Parms), Z_Construct_UFunction_ULightComponentBase_SetSamplesPerPixel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_SetSamplesPerPixel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponentBase_SetSamplesPerPixel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_SetSamplesPerPixel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponentBase_SetSamplesPerPixel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponentBase_SetSamplesPerPixel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULightComponentBase);
	UClass* Z_Construct_UClass_ULightComponentBase_NoRegister()
	{
		return ULightComponentBase::StaticClass();
	}
	struct Z_Construct_UClass_ULightComponentBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Brightness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Brightness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAffectsWorld_MetaData[];
#endif
		static void NewProp_bAffectsWorld_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectsWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CastShadows_MetaData[];
#endif
		static void NewProp_CastShadows_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CastShadows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CastStaticShadows_MetaData[];
#endif
		static void NewProp_CastStaticShadows_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CastStaticShadows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CastDynamicShadows_MetaData[];
#endif
		static void NewProp_CastDynamicShadows_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CastDynamicShadows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAffectTranslucentLighting_MetaData[];
#endif
		static void NewProp_bAffectTranslucentLighting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectTranslucentLighting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTransmission_MetaData[];
#endif
		static void NewProp_bTransmission_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTransmission;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCastVolumetricShadow_MetaData[];
#endif
		static void NewProp_bCastVolumetricShadow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastVolumetricShadow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCastDeepShadow_MetaData[];
#endif
		static void NewProp_bCastDeepShadow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastDeepShadow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCastRaytracedShadow_MetaData[];
#endif
		static void NewProp_bCastRaytracedShadow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastRaytracedShadow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CastRaytracedShadow_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CastRaytracedShadow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAffectReflection_MetaData[];
#endif
		static void NewProp_bAffectReflection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectReflection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAffectGlobalIllumination_MetaData[];
#endif
		static void NewProp_bAffectGlobalIllumination_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectGlobalIllumination;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeepShadowLayerDistribution_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeepShadowLayerDistribution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndirectLightingIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IndirectLightingIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricScatteringIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumetricScatteringIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplesPerPixel_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SamplesPerPixel;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticEditorTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StaticEditorTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticEditorTextureScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StaticEditorTextureScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicEditorTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DynamicEditorTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicEditorTextureScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DynamicEditorTextureScale;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULightComponentBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULightComponentBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULightComponentBase_GetLightColor, "GetLightColor" }, // 3927139482
		{ &Z_Construct_UFunction_ULightComponentBase_SetAffectGlobalIllumination, "SetAffectGlobalIllumination" }, // 3225494564
		{ &Z_Construct_UFunction_ULightComponentBase_SetAffectReflection, "SetAffectReflection" }, // 2287749386
		{ &Z_Construct_UFunction_ULightComponentBase_SetCastDeepShadow, "SetCastDeepShadow" }, // 3020847567
		{ &Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadow, "SetCastRaytracedShadow" }, // 2037838484
		{ &Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadows, "SetCastRaytracedShadows" }, // 2555611608
		{ &Z_Construct_UFunction_ULightComponentBase_SetCastShadows, "SetCastShadows" }, // 2638456460
		{ &Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow, "SetCastVolumetricShadow" }, // 2657308915
		{ &Z_Construct_UFunction_ULightComponentBase_SetSamplesPerPixel, "SetSamplesPerPixel" }, // 2488465643
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponentBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger Activation Components|Activation Physics Trigger PhysicsVolume" },
		{ "IncludePath", "Components/LightComponentBase.h" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponentBase_Statics::NewProp_LightGuid_MetaData[] = {
		{ "Comment", "/**\n\x09 * GUID used to associate a light component with precomputed shadowing information across levels.\n\x09 * The GUID changes whenever the light position changes.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "GUID used to associate a light component with precomputed shadowing information across levels.\nThe GUID changes whenever the light position changes." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_LightGuid = { "LightGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULightComponentBase, LightGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_LightGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_LightGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponentBase_Statics::NewProp_Brightness_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_Brightness = { "Brightness", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULightComponentBase, Brightness_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_Brightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_Brightness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponentBase_Statics::NewProp_Intensity_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** \n\x09 * Total energy that the light emits.  \n\x09 */" },
		{ "DisplayName", "Intensity" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ShouldShowInViewport", "TRUE" },
		{ "ToolTip", "Total energy that the light emits." },
		{ "UIMax", "20.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULightComponentBase, Intensity), METADATA_PARAMS(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_Intensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_Intensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponentBase_Statics::NewProp_LightColor_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** \n\x09 * Filter color of the light.\n\x09 * Note that this can change the light's effective intensity.\n\x09 */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ShouldShowInViewport", "TRUE" },
		{ "ToolTip", "Filter color of the light.\nNote that this can change the light's effective intensity." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_LightColor = { "LightColor", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULightComponentBase, LightColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_LightColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_LightColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectsWorld_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** \n\x09 * Whether the light can affect the world, or whether it is disabled.\n\x09 * A disabled light will not contribute to the scene in any way.  This setting cannot be changed at runtime and unbuilds lighting when changed.\n\x09 * Setting this to false has the same effect as deleting the light, so it is useful for non-destructive experiments.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ShouldShowInViewport", "TRUE" },
		{ "ToolTip", "Whether the light can affect the world, or whether it is disabled.\nA disabled light will not contribute to the scene in any way.  This setting cannot be changed at runtime and unbuilds lighting when changed.\nSetting this to false has the same effect as deleting the light, so it is useful for non-destructive experiments." },
	};
#endif
	void Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectsWorld_SetBit(void* Obj)
	{
		((ULightComponentBase*)Obj)->bAffectsWorld = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectsWorld = { "bAffectsWorld", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULightComponentBase), &Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectsWorld_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectsWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectsWorld_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastShadows_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/**\n\x09 * Whether the light should cast any shadows.\n\x09 **/" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Whether the light should cast any shadows." },
	};
#endif
	void Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastShadows_SetBit(void* Obj)
	{
		((ULightComponentBase*)Obj)->CastShadows = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastShadows = { "CastShadows", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULightComponentBase), &Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastShadows_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastShadows_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastStaticShadows_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/**\n\x09 * Whether the light should cast shadows from static objects.  Also requires Cast Shadows to be set to True.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Whether the light should cast shadows from static objects.  Also requires Cast Shadows to be set to True." },
	};
#endif
	void Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastStaticShadows_SetBit(void* Obj)
	{
		((ULightComponentBase*)Obj)->CastStaticShadows = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastStaticShadows = { "CastStaticShadows", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULightComponentBase), &Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastStaticShadows_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastStaticShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastStaticShadows_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastDynamicShadows_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/**\n\x09 * Whether the light should cast shadows from dynamic objects.  Also requires Cast Shadows to be set to True.\n\x09 **/" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Whether the light should cast shadows from dynamic objects.  Also requires Cast Shadows to be set to True." },
	};
#endif
	void Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastDynamicShadows_SetBit(void* Obj)
	{
		((ULightComponentBase*)Obj)->CastDynamicShadows = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastDynamicShadows = { "CastDynamicShadows", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULightComponentBase), &Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastDynamicShadows_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastDynamicShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastDynamicShadows_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectTranslucentLighting_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Whether the light affects translucency or not.  Disabling this can save GPU time when there are many small lights. */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Whether the light affects translucency or not.  Disabling this can save GPU time when there are many small lights." },
	};
#endif
	void Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectTranslucentLighting_SetBit(void* Obj)
	{
		((ULightComponentBase*)Obj)->bAffectTranslucentLighting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectTranslucentLighting = { "bAffectTranslucentLighting", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULightComponentBase), &Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectTranslucentLighting_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectTranslucentLighting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectTranslucentLighting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bTransmission_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Whether light from this light transmits through surfaces with subsurface scattering profiles. Requires light to be movable. */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Whether light from this light transmits through surfaces with subsurface scattering profiles. Requires light to be movable." },
	};
#endif
	void Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bTransmission_SetBit(void* Obj)
	{
		((ULightComponentBase*)Obj)->bTransmission = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bTransmission = { "bTransmission", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULightComponentBase), &Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bTransmission_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bTransmission_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bTransmission_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bCastVolumetricShadow_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Whether the light shadows volumetric fog.  Disabling this can save GPU time. */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Whether the light shadows volumetric fog.  Disabling this can save GPU time." },
	};
#endif
	void Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bCastVolumetricShadow_SetBit(void* Obj)
	{
		((ULightComponentBase*)Obj)->bCastVolumetricShadow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bCastVolumetricShadow = { "bCastVolumetricShadow", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULightComponentBase), &Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bCastVolumetricShadow_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bCastVolumetricShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bCastVolumetricShadow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bCastDeepShadow_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/**\n\x09 * Whether the light should cast high quality hair-strands self-shadowing. When this option is enabled, an extra GPU cost for this light. \n\x09 **/" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Whether the light should cast high quality hair-strands self-shadowing. When this option is enabled, an extra GPU cost for this light." },
	};
#endif
	void Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bCastDeepShadow_SetBit(void* Obj)
	{
		((ULightComponentBase*)Obj)->bCastDeepShadow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bCastDeepShadow = { "bCastDeepShadow", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULightComponentBase), &Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bCastDeepShadow_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bCastDeepShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bCastDeepShadow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bCastRaytracedShadow_MetaData[] = {
		{ "Comment", "/** Whether the light shadows are computed with shadow-mapping or ray-tracing (when available). */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Whether the light shadows are computed with shadow-mapping or ray-tracing (when available)." },
	};
#endif
	void Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bCastRaytracedShadow_SetBit(void* Obj)
	{
		((ULightComponentBase*)Obj)->bCastRaytracedShadow_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bCastRaytracedShadow = { "bCastRaytracedShadow", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULightComponentBase), &Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bCastRaytracedShadow_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bCastRaytracedShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bCastRaytracedShadow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastRaytracedShadow_MetaData[] = {
		{ "Category", "Light" },
		{ "DisplayName", "Cast Ray Traced Shadows" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastRaytracedShadow = { "CastRaytracedShadow", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULightComponentBase, CastRaytracedShadow), Z_Construct_UEnum_Engine_ECastRayTracedShadow, METADATA_PARAMS(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastRaytracedShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastRaytracedShadow_MetaData)) }; // 1648730365
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectReflection_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Whether the light affects objects in reflections, when ray-traced reflection is enabled. */" },
		{ "DisplayName", "Affect Ray Tracing Reflections" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Whether the light affects objects in reflections, when ray-traced reflection is enabled." },
	};
#endif
	void Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectReflection_SetBit(void* Obj)
	{
		((ULightComponentBase*)Obj)->bAffectReflection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectReflection = { "bAffectReflection", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULightComponentBase), &Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectReflection_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectReflection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectReflection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectGlobalIllumination_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Whether the light affects global illumination, when ray-traced global illumination is enabled. */" },
		{ "DisplayName", "Affect Ray Tracing Global Illumination" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Whether the light affects global illumination, when ray-traced global illumination is enabled." },
	};
#endif
	void Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectGlobalIllumination_SetBit(void* Obj)
	{
		((ULightComponentBase*)Obj)->bAffectGlobalIllumination = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectGlobalIllumination = { "bAffectGlobalIllumination", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULightComponentBase), &Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectGlobalIllumination_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectGlobalIllumination_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectGlobalIllumination_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponentBase_Statics::NewProp_DeepShadowLayerDistribution_MetaData[] = {
		{ "Category", "Light" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 *Change the deep shadow layers distribution 0:linear distribution (uniform layer distribution), 1:exponential (more details on near small details).\n\x09 **/" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Change the deep shadow layers distribution 0:linear distribution (uniform layer distribution), 1:exponential (more details on near small details)." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_DeepShadowLayerDistribution = { "DeepShadowLayerDistribution", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULightComponentBase, DeepShadowLayerDistribution), METADATA_PARAMS(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_DeepShadowLayerDistribution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_DeepShadowLayerDistribution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponentBase_Statics::NewProp_IndirectLightingIntensity_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** \n\x09 * Scales the indirect lighting contribution from this light. \n\x09 * A value of 0 disables any GI from this light. Default is 1.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Scales the indirect lighting contribution from this light.\nA value of 0 disables any GI from this light. Default is 1." },
		{ "UIMax", "6.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_IndirectLightingIntensity = { "IndirectLightingIntensity", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULightComponentBase, IndirectLightingIntensity), METADATA_PARAMS(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_IndirectLightingIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_IndirectLightingIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponentBase_Statics::NewProp_VolumetricScatteringIntensity_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Intensity of the volumetric scattering from this light.  This scales Intensity and LightColor. */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Intensity of the volumetric scattering from this light.  This scales Intensity and LightColor." },
		{ "UIMax", "4.0" },
		{ "UIMin", "0.25" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_VolumetricScatteringIntensity = { "VolumetricScatteringIntensity", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULightComponentBase, VolumetricScatteringIntensity), METADATA_PARAMS(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_VolumetricScatteringIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_VolumetricScatteringIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponentBase_Statics::NewProp_SamplesPerPixel_MetaData[] = {
		{ "Category", "RayTracing" },
		{ "Comment", "/** Samples per pixel for ray tracing */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Samples per pixel for ray tracing" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_SamplesPerPixel = { "SamplesPerPixel", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULightComponentBase, SamplesPerPixel), METADATA_PARAMS(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_SamplesPerPixel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_SamplesPerPixel_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponentBase_Statics::NewProp_StaticEditorTexture_MetaData[] = {
		{ "Comment", "/** Sprite for static light in the editor. */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Sprite for static light in the editor." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_StaticEditorTexture = { "StaticEditorTexture", nullptr, (EPropertyFlags)0x0014000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULightComponentBase, StaticEditorTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_StaticEditorTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_StaticEditorTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponentBase_Statics::NewProp_StaticEditorTextureScale_MetaData[] = {
		{ "Comment", "/** Sprite scaling for static light in the editor. */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Sprite scaling for static light in the editor." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_StaticEditorTextureScale = { "StaticEditorTextureScale", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULightComponentBase, StaticEditorTextureScale), METADATA_PARAMS(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_StaticEditorTextureScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_StaticEditorTextureScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponentBase_Statics::NewProp_DynamicEditorTexture_MetaData[] = {
		{ "Comment", "/** Sprite for dynamic light in the editor. */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Sprite for dynamic light in the editor." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_DynamicEditorTexture = { "DynamicEditorTexture", nullptr, (EPropertyFlags)0x0014000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULightComponentBase, DynamicEditorTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_DynamicEditorTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_DynamicEditorTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponentBase_Statics::NewProp_DynamicEditorTextureScale_MetaData[] = {
		{ "Comment", "/** Sprite scaling for dynamic light in the editor. */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Sprite scaling for dynamic light in the editor." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_DynamicEditorTextureScale = { "DynamicEditorTextureScale", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULightComponentBase, DynamicEditorTextureScale), METADATA_PARAMS(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_DynamicEditorTextureScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_DynamicEditorTextureScale_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULightComponentBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_LightGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_Brightness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_Intensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_LightColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectsWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastShadows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastStaticShadows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastDynamicShadows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectTranslucentLighting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bTransmission,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bCastVolumetricShadow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bCastDeepShadow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bCastRaytracedShadow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastRaytracedShadow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectReflection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectGlobalIllumination,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_DeepShadowLayerDistribution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_IndirectLightingIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_VolumetricScatteringIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_SamplesPerPixel,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_StaticEditorTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_StaticEditorTextureScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_DynamicEditorTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_DynamicEditorTextureScale,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULightComponentBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightComponentBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULightComponentBase_Statics::ClassParams = {
		&ULightComponentBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULightComponentBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ULightComponentBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULightComponentBase()
	{
		if (!Z_Registration_Info_UClass_ULightComponentBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULightComponentBase.OuterSingleton, Z_Construct_UClass_ULightComponentBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULightComponentBase.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ULightComponentBase>()
	{
		return ULightComponentBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULightComponentBase);
	ULightComponentBase::~ULightComponentBase() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULightComponentBase)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULightComponentBase, ULightComponentBase::StaticClass, TEXT("ULightComponentBase"), &Z_Registration_Info_UClass_ULightComponentBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULightComponentBase), 3504228459U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_2646816675(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
