// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialInstanceConstant() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterialMask_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(UMaterialInstanceConstant::execK2_GetVectorParameterValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->K2_GetVectorParameterValue(Z_Param_ParameterName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialInstanceConstant::execK2_GetTextureParameterValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture**)Z_Param__Result=P_THIS->K2_GetTextureParameterValue(Z_Param_ParameterName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialInstanceConstant::execK2_GetScalarParameterValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->K2_GetScalarParameterValue(Z_Param_ParameterName);
		P_NATIVE_END;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(UMaterialInstanceConstant::execSetNaniteOverrideMaterial)
	{
		P_GET_UBOOL(Z_Param_bInEnableOverride);
		P_GET_OBJECT(UMaterialInterface,Z_Param_InOverrideMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNaniteOverrideMaterial(Z_Param_bInEnableOverride,Z_Param_InOverrideMaterial);
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UMaterialInstanceConstant::StaticRegisterNativesUMaterialInstanceConstant()
	{
		UClass* Class = UMaterialInstanceConstant::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "K2_GetScalarParameterValue", &UMaterialInstanceConstant::execK2_GetScalarParameterValue },
			{ "K2_GetTextureParameterValue", &UMaterialInstanceConstant::execK2_GetTextureParameterValue },
			{ "K2_GetVectorParameterValue", &UMaterialInstanceConstant::execK2_GetVectorParameterValue },
#if WITH_EDITOR
			{ "SetNaniteOverrideMaterial", &UMaterialInstanceConstant::execSetNaniteOverrideMaterial },
#endif // WITH_EDITOR
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetScalarParameterValue_Statics
	{
		struct MaterialInstanceConstant_eventK2_GetScalarParameterValue_Parms
		{
			FName ParameterName;
			float ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetScalarParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialInstanceConstant_eventK2_GetScalarParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetScalarParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialInstanceConstant_eventK2_GetScalarParameterValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetScalarParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetScalarParameterValue_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetScalarParameterValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetScalarParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Get the scalar (float) parameter value from an MIC */" },
		{ "DisplayName", "Get Scalar Parameter Value" },
		{ "Keywords", "GetFloatParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceConstant.h" },
		{ "ScriptName", "GetScalarParameterValue" },
		{ "ToolTip", "Get the scalar (float) parameter value from an MIC" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetScalarParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceConstant, nullptr, "K2_GetScalarParameterValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetScalarParameterValue_Statics::MaterialInstanceConstant_eventK2_GetScalarParameterValue_Parms), Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetScalarParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetScalarParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetScalarParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetScalarParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetScalarParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetScalarParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetTextureParameterValue_Statics
	{
		struct MaterialInstanceConstant_eventK2_GetTextureParameterValue_Parms
		{
			FName ParameterName;
			UTexture* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetTextureParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialInstanceConstant_eventK2_GetTextureParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetTextureParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialInstanceConstant_eventK2_GetTextureParameterValue_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetTextureParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetTextureParameterValue_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetTextureParameterValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetTextureParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Get the MIC texture parameter value */" },
		{ "DisplayName", "Get Texture Parameter Value" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceConstant.h" },
		{ "ScriptName", "GetTextureParameterValue" },
		{ "ToolTip", "Get the MIC texture parameter value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetTextureParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceConstant, nullptr, "K2_GetTextureParameterValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetTextureParameterValue_Statics::MaterialInstanceConstant_eventK2_GetTextureParameterValue_Parms), Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetTextureParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetTextureParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetTextureParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetTextureParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetTextureParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetTextureParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetVectorParameterValue_Statics
	{
		struct MaterialInstanceConstant_eventK2_GetVectorParameterValue_Parms
		{
			FName ParameterName;
			FLinearColor ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetVectorParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialInstanceConstant_eventK2_GetVectorParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetVectorParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialInstanceConstant_eventK2_GetVectorParameterValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetVectorParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetVectorParameterValue_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetVectorParameterValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetVectorParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Get the MIC vector parameter value */" },
		{ "DisplayName", "Get Vector Parameter Value" },
		{ "Keywords", "GetColorParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceConstant.h" },
		{ "ScriptName", "GetVectorParameterValue" },
		{ "ToolTip", "Get the MIC vector parameter value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetVectorParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceConstant, nullptr, "K2_GetVectorParameterValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetVectorParameterValue_Statics::MaterialInstanceConstant_eventK2_GetVectorParameterValue_Parms), Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetVectorParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetVectorParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetVectorParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetVectorParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetVectorParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetVectorParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UMaterialInstanceConstant_SetNaniteOverrideMaterial_Statics
	{
		struct MaterialInstanceConstant_eventSetNaniteOverrideMaterial_Parms
		{
			bool bInEnableOverride;
			UMaterialInterface* InOverrideMaterial;
		};
		static void NewProp_bInEnableOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnableOverride;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOverrideMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMaterialInstanceConstant_SetNaniteOverrideMaterial_Statics::NewProp_bInEnableOverride_SetBit(void* Obj)
	{
		((MaterialInstanceConstant_eventSetNaniteOverrideMaterial_Parms*)Obj)->bInEnableOverride = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialInstanceConstant_SetNaniteOverrideMaterial_Statics::NewProp_bInEnableOverride = { "bInEnableOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MaterialInstanceConstant_eventSetNaniteOverrideMaterial_Parms), &Z_Construct_UFunction_UMaterialInstanceConstant_SetNaniteOverrideMaterial_Statics::NewProp_bInEnableOverride_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInstanceConstant_SetNaniteOverrideMaterial_Statics::NewProp_InOverrideMaterial = { "InOverrideMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialInstanceConstant_eventSetNaniteOverrideMaterial_Parms, InOverrideMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceConstant_SetNaniteOverrideMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceConstant_SetNaniteOverrideMaterial_Statics::NewProp_bInEnableOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceConstant_SetNaniteOverrideMaterial_Statics::NewProp_InOverrideMaterial,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceConstant_SetNaniteOverrideMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Set an override material which will be used when rendering with nanite. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceConstant.h" },
		{ "ToolTip", "Set an override material which will be used when rendering with nanite." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceConstant_SetNaniteOverrideMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceConstant, nullptr, "SetNaniteOverrideMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialInstanceConstant_SetNaniteOverrideMaterial_Statics::MaterialInstanceConstant_eventSetNaniteOverrideMaterial_Parms), Z_Construct_UFunction_UMaterialInstanceConstant_SetNaniteOverrideMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceConstant_SetNaniteOverrideMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceConstant_SetNaniteOverrideMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceConstant_SetNaniteOverrideMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceConstant_SetNaniteOverrideMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInstanceConstant_SetNaniteOverrideMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialInstanceConstant);
	UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister()
	{
		return UMaterialInstanceConstant::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialInstanceConstant_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterStateId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterStateId;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysMaterialMask_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PhysMaterialMask;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialInstanceConstant_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMaterialInstanceConstant_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetScalarParameterValue, "K2_GetScalarParameterValue" }, // 1464894295
		{ &Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetTextureParameterValue, "K2_GetTextureParameterValue" }, // 742739906
		{ &Z_Construct_UFunction_UMaterialInstanceConstant_K2_GetVectorParameterValue, "K2_GetVectorParameterValue" }, // 2385069420
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UMaterialInstanceConstant_SetNaniteOverrideMaterial, "SetNaniteOverrideMaterial" }, // 1100810223
#endif //WITH_EDITOR
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInstanceConstant_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Material Instances may be used to change the appearance of a material without incurring an expensive recompilation of the material.\n * General modification of the material cannot be supported without recompilation, so the instances are limited to changing the values of\n * predefined material parameters. The parameters are statically defined in the compiled material by a unique name, type and default value.\n */" },
		{ "HideCategories", "Object Thumbnail" },
		{ "IncludePath", "Materials/MaterialInstanceConstant.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceConstant.h" },
		{ "ToolTip", "Material Instances may be used to change the appearance of a material without incurring an expensive recompilation of the material.\nGeneral modification of the material cannot be supported without recompilation, so the instances are limited to changing the values of\npredefined material parameters. The parameters are statically defined in the compiled material by a unique name, type and default value." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInstanceConstant_Statics::NewProp_ParameterStateId_MetaData[] = {
		{ "Comment", "/** Unique ID for this material instance's parameter set \n\x09 *  Updated on changes in the editor to allow those changes to be detected */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceConstant.h" },
		{ "ToolTip", "Unique ID for this material instance's parameter set\nUpdated on changes in the editor to allow those changes to be detected" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialInstanceConstant_Statics::NewProp_ParameterStateId = { "ParameterStateId", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialInstanceConstant, ParameterStateId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UMaterialInstanceConstant_Statics::NewProp_ParameterStateId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstanceConstant_Statics::NewProp_ParameterStateId_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInstanceConstant_Statics::NewProp_PhysMaterialMask_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "Comment", "/** Physical material mask to use for this graphics material. Used for sounds, effects etc.*/" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceConstant.h" },
		{ "ToolTip", "Physical material mask to use for this graphics material. Used for sounds, effects etc." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialInstanceConstant_Statics::NewProp_PhysMaterialMask = { "PhysMaterialMask", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialInstanceConstant, PhysMaterialMask), Z_Construct_UClass_UPhysicalMaterialMask_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialInstanceConstant_Statics::NewProp_PhysMaterialMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstanceConstant_Statics::NewProp_PhysMaterialMask_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialInstanceConstant_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstanceConstant_Statics::NewProp_ParameterStateId,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstanceConstant_Statics::NewProp_PhysMaterialMask,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialInstanceConstant_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialInstanceConstant>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialInstanceConstant_Statics::ClassParams = {
		&UMaterialInstanceConstant::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMaterialInstanceConstant_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstanceConstant_Statics::PropPointers),
		0,
		0x008820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialInstanceConstant_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstanceConstant_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialInstanceConstant()
	{
		if (!Z_Registration_Info_UClass_UMaterialInstanceConstant.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialInstanceConstant.OuterSingleton, Z_Construct_UClass_UMaterialInstanceConstant_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialInstanceConstant.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialInstanceConstant>()
	{
		return UMaterialInstanceConstant::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialInstanceConstant);
	UMaterialInstanceConstant::~UMaterialInstanceConstant() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialInstanceConstant, UMaterialInstanceConstant::StaticClass, TEXT("UMaterialInstanceConstant"), &Z_Registration_Info_UClass_UMaterialInstanceConstant, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialInstanceConstant), 2757031500U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_1350350161(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
