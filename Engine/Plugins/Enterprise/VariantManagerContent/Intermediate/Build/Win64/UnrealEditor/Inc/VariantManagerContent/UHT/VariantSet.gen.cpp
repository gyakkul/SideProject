// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VariantSet.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVariantSet() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VariantManagerContent();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_ULevelVariantSets_NoRegister();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UVariant_NoRegister();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UVariantSet();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UVariantSet_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVariantSet::execGetThumbnail)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->GetThumbnail();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantSet::execSetThumbnailFromEditorViewport)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetThumbnailFromEditorViewport();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantSet::execSetThumbnailFromCamera)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_CameraTransform);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FOVDegrees);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MinZ);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Gamma);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetThumbnailFromCamera(Z_Param_WorldContextObject,Z_Param_Out_CameraTransform,Z_Param_FOVDegrees,Z_Param_MinZ,Z_Param_Gamma);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantSet::execSetThumbnailFromFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetThumbnailFromFile(Z_Param_FilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantSet::execSetThumbnailFromTexture)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_NewThumbnail);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetThumbnailFromTexture(Z_Param_NewThumbnail);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantSet::execGetVariantByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_VariantName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVariant**)Z_Param__Result=P_THIS->GetVariantByName(Z_Param_VariantName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantSet::execGetVariant)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_VariantIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVariant**)Z_Param__Result=P_THIS->GetVariant(Z_Param_VariantIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantSet::execGetNumVariants)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumVariants();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantSet::execGetDisplayText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetDisplayText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantSet::execSetDisplayText)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_NewDisplayText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisplayText(Z_Param_Out_NewDisplayText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantSet::execGetParent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULevelVariantSets**)Z_Param__Result=P_THIS->GetParent();
		P_NATIVE_END;
	}
	void UVariantSet::StaticRegisterNativesUVariantSet()
	{
		UClass* Class = UVariantSet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDisplayText", &UVariantSet::execGetDisplayText },
			{ "GetNumVariants", &UVariantSet::execGetNumVariants },
			{ "GetParent", &UVariantSet::execGetParent },
			{ "GetThumbnail", &UVariantSet::execGetThumbnail },
			{ "GetVariant", &UVariantSet::execGetVariant },
			{ "GetVariantByName", &UVariantSet::execGetVariantByName },
			{ "SetDisplayText", &UVariantSet::execSetDisplayText },
			{ "SetThumbnailFromCamera", &UVariantSet::execSetThumbnailFromCamera },
			{ "SetThumbnailFromEditorViewport", &UVariantSet::execSetThumbnailFromEditorViewport },
			{ "SetThumbnailFromFile", &UVariantSet::execSetThumbnailFromFile },
			{ "SetThumbnailFromTexture", &UVariantSet::execSetThumbnailFromTexture },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVariantSet_GetDisplayText_Statics
	{
		struct VariantSet_eventGetDisplayText_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UVariantSet_GetDisplayText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantSet_eventGetDisplayText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantSet_GetDisplayText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantSet_GetDisplayText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantSet_GetDisplayText_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantSet" },
		{ "ModuleRelativePath", "Public/VariantSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantSet_GetDisplayText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantSet, nullptr, "GetDisplayText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantSet_GetDisplayText_Statics::VariantSet_eventGetDisplayText_Parms), Z_Construct_UFunction_UVariantSet_GetDisplayText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantSet_GetDisplayText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantSet_GetDisplayText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantSet_GetDisplayText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantSet_GetDisplayText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantSet_GetDisplayText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantSet_GetNumVariants_Statics
	{
		struct VariantSet_eventGetNumVariants_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVariantSet_GetNumVariants_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantSet_eventGetNumVariants_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantSet_GetNumVariants_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantSet_GetNumVariants_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantSet_GetNumVariants_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantSet" },
		{ "ModuleRelativePath", "Public/VariantSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantSet_GetNumVariants_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantSet, nullptr, "GetNumVariants", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantSet_GetNumVariants_Statics::VariantSet_eventGetNumVariants_Parms), Z_Construct_UFunction_UVariantSet_GetNumVariants_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantSet_GetNumVariants_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantSet_GetNumVariants_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantSet_GetNumVariants_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantSet_GetNumVariants()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantSet_GetNumVariants_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantSet_GetParent_Statics
	{
		struct VariantSet_eventGetParent_Parms
		{
			ULevelVariantSets* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantSet_GetParent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantSet_eventGetParent_Parms, ReturnValue), Z_Construct_UClass_ULevelVariantSets_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantSet_GetParent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantSet_GetParent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantSet_GetParent_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantSet" },
		{ "ModuleRelativePath", "Public/VariantSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantSet_GetParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantSet, nullptr, "GetParent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantSet_GetParent_Statics::VariantSet_eventGetParent_Parms), Z_Construct_UFunction_UVariantSet_GetParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantSet_GetParent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantSet_GetParent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantSet_GetParent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantSet_GetParent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantSet_GetParent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantSet_GetThumbnail_Statics
	{
		struct VariantSet_eventGetThumbnail_Parms
		{
			UTexture2D* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantSet_GetThumbnail_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantSet_eventGetThumbnail_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantSet_GetThumbnail_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantSet_GetThumbnail_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantSet_GetThumbnail_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantSet|Thumbnail" },
		{ "Comment", "// Gets the thumbnail currently used for this variant set\n" },
		{ "ModuleRelativePath", "Public/VariantSet.h" },
		{ "ToolTip", "Gets the thumbnail currently used for this variant set" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantSet_GetThumbnail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantSet, nullptr, "GetThumbnail", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantSet_GetThumbnail_Statics::VariantSet_eventGetThumbnail_Parms), Z_Construct_UFunction_UVariantSet_GetThumbnail_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantSet_GetThumbnail_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantSet_GetThumbnail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantSet_GetThumbnail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantSet_GetThumbnail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantSet_GetThumbnail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantSet_GetVariant_Statics
	{
		struct VariantSet_eventGetVariant_Parms
		{
			int32 VariantIndex;
			UVariant* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_VariantIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVariantSet_GetVariant_Statics::NewProp_VariantIndex = { "VariantIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantSet_eventGetVariant_Parms, VariantIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantSet_GetVariant_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantSet_eventGetVariant_Parms, ReturnValue), Z_Construct_UClass_UVariant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantSet_GetVariant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantSet_GetVariant_Statics::NewProp_VariantIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantSet_GetVariant_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantSet_GetVariant_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantSet" },
		{ "ModuleRelativePath", "Public/VariantSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantSet_GetVariant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantSet, nullptr, "GetVariant", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantSet_GetVariant_Statics::VariantSet_eventGetVariant_Parms), Z_Construct_UFunction_UVariantSet_GetVariant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantSet_GetVariant_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantSet_GetVariant_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantSet_GetVariant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantSet_GetVariant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantSet_GetVariant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantSet_GetVariantByName_Statics
	{
		struct VariantSet_eventGetVariantByName_Parms
		{
			FString VariantName;
			UVariant* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_VariantName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVariantSet_GetVariantByName_Statics::NewProp_VariantName = { "VariantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantSet_eventGetVariantByName_Parms, VariantName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantSet_GetVariantByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantSet_eventGetVariantByName_Parms, ReturnValue), Z_Construct_UClass_UVariant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantSet_GetVariantByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantSet_GetVariantByName_Statics::NewProp_VariantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantSet_GetVariantByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantSet_GetVariantByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantSet" },
		{ "ModuleRelativePath", "Public/VariantSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantSet_GetVariantByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantSet, nullptr, "GetVariantByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantSet_GetVariantByName_Statics::VariantSet_eventGetVariantByName_Parms), Z_Construct_UFunction_UVariantSet_GetVariantByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantSet_GetVariantByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantSet_GetVariantByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantSet_GetVariantByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantSet_GetVariantByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantSet_GetVariantByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantSet_SetDisplayText_Statics
	{
		struct VariantSet_eventSetDisplayText_Parms
		{
			FText NewDisplayText;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewDisplayText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_NewDisplayText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantSet_SetDisplayText_Statics::NewProp_NewDisplayText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UVariantSet_SetDisplayText_Statics::NewProp_NewDisplayText = { "NewDisplayText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantSet_eventSetDisplayText_Parms, NewDisplayText), METADATA_PARAMS(Z_Construct_UFunction_UVariantSet_SetDisplayText_Statics::NewProp_NewDisplayText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantSet_SetDisplayText_Statics::NewProp_NewDisplayText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantSet_SetDisplayText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantSet_SetDisplayText_Statics::NewProp_NewDisplayText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantSet_SetDisplayText_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantSet" },
		{ "ModuleRelativePath", "Public/VariantSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantSet_SetDisplayText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantSet, nullptr, "SetDisplayText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantSet_SetDisplayText_Statics::VariantSet_eventSetDisplayText_Parms), Z_Construct_UFunction_UVariantSet_SetDisplayText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantSet_SetDisplayText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantSet_SetDisplayText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantSet_SetDisplayText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantSet_SetDisplayText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantSet_SetDisplayText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantSet_SetThumbnailFromCamera_Statics
	{
		struct VariantSet_eventSetThumbnailFromCamera_Parms
		{
			UObject* WorldContextObject;
			FTransform CameraTransform;
			float FOVDegrees;
			float MinZ;
			float Gamma;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraTransform;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FOVDegrees;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinZ;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Gamma;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantSet_SetThumbnailFromCamera_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantSet_eventSetThumbnailFromCamera_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantSet_SetThumbnailFromCamera_Statics::NewProp_CameraTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariantSet_SetThumbnailFromCamera_Statics::NewProp_CameraTransform = { "CameraTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantSet_eventSetThumbnailFromCamera_Parms, CameraTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UVariantSet_SetThumbnailFromCamera_Statics::NewProp_CameraTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantSet_SetThumbnailFromCamera_Statics::NewProp_CameraTransform_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVariantSet_SetThumbnailFromCamera_Statics::NewProp_FOVDegrees = { "FOVDegrees", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantSet_eventSetThumbnailFromCamera_Parms, FOVDegrees), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVariantSet_SetThumbnailFromCamera_Statics::NewProp_MinZ = { "MinZ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantSet_eventSetThumbnailFromCamera_Parms, MinZ), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVariantSet_SetThumbnailFromCamera_Statics::NewProp_Gamma = { "Gamma", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantSet_eventSetThumbnailFromCamera_Parms, Gamma), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantSet_SetThumbnailFromCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantSet_SetThumbnailFromCamera_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantSet_SetThumbnailFromCamera_Statics::NewProp_CameraTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantSet_SetThumbnailFromCamera_Statics::NewProp_FOVDegrees,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantSet_SetThumbnailFromCamera_Statics::NewProp_MinZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantSet_SetThumbnailFromCamera_Statics::NewProp_Gamma,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantSet_SetThumbnailFromCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantSet|Thumbnail" },
		{ "CPP_Default_FOVDegrees", "50.000000" },
		{ "CPP_Default_Gamma", "2.200000" },
		{ "CPP_Default_MinZ", "50.000000" },
		{ "ModuleRelativePath", "Public/VariantSet.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantSet_SetThumbnailFromCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantSet, nullptr, "SetThumbnailFromCamera", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantSet_SetThumbnailFromCamera_Statics::VariantSet_eventSetThumbnailFromCamera_Parms), Z_Construct_UFunction_UVariantSet_SetThumbnailFromCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantSet_SetThumbnailFromCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantSet_SetThumbnailFromCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantSet_SetThumbnailFromCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantSet_SetThumbnailFromCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantSet_SetThumbnailFromCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantSet_SetThumbnailFromEditorViewport_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantSet_SetThumbnailFromEditorViewport_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "VariantSet|Thumbnail" },
		{ "Comment", "// Sets the thumbnail from the active editor viewport. Doesn't do anything if the Editor is not available\n" },
		{ "ModuleRelativePath", "Public/VariantSet.h" },
		{ "ToolTip", "Sets the thumbnail from the active editor viewport. Doesn't do anything if the Editor is not available" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantSet_SetThumbnailFromEditorViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantSet, nullptr, "SetThumbnailFromEditorViewport", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantSet_SetThumbnailFromEditorViewport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantSet_SetThumbnailFromEditorViewport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantSet_SetThumbnailFromEditorViewport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantSet_SetThumbnailFromEditorViewport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantSet_SetThumbnailFromFile_Statics
	{
		struct VariantSet_eventSetThumbnailFromFile_Parms
		{
			FString FilePath;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVariantSet_SetThumbnailFromFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantSet_eventSetThumbnailFromFile_Parms, FilePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantSet_SetThumbnailFromFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantSet_SetThumbnailFromFile_Statics::NewProp_FilePath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantSet_SetThumbnailFromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantSet|Thumbnail" },
		{ "ModuleRelativePath", "Public/VariantSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantSet_SetThumbnailFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantSet, nullptr, "SetThumbnailFromFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantSet_SetThumbnailFromFile_Statics::VariantSet_eventSetThumbnailFromFile_Parms), Z_Construct_UFunction_UVariantSet_SetThumbnailFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantSet_SetThumbnailFromFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantSet_SetThumbnailFromFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantSet_SetThumbnailFromFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantSet_SetThumbnailFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantSet_SetThumbnailFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantSet_SetThumbnailFromTexture_Statics
	{
		struct VariantSet_eventSetThumbnailFromTexture_Parms
		{
			UTexture2D* NewThumbnail;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewThumbnail;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantSet_SetThumbnailFromTexture_Statics::NewProp_NewThumbnail = { "NewThumbnail", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantSet_eventSetThumbnailFromTexture_Parms, NewThumbnail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantSet_SetThumbnailFromTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantSet_SetThumbnailFromTexture_Statics::NewProp_NewThumbnail,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantSet_SetThumbnailFromTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantSet|Thumbnail" },
		{ "Comment", "// Sets the thumbnail to use for this variant set. Can receive nullptr to clear it\n" },
		{ "ModuleRelativePath", "Public/VariantSet.h" },
		{ "ToolTip", "Sets the thumbnail to use for this variant set. Can receive nullptr to clear it" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantSet_SetThumbnailFromTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantSet, nullptr, "SetThumbnailFromTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantSet_SetThumbnailFromTexture_Statics::VariantSet_eventSetThumbnailFromTexture_Parms), Z_Construct_UFunction_UVariantSet_SetThumbnailFromTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantSet_SetThumbnailFromTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantSet_SetThumbnailFromTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantSet_SetThumbnailFromTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantSet_SetThumbnailFromTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantSet_SetThumbnailFromTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVariantSet);
	UClass* Z_Construct_UClass_UVariantSet_NoRegister()
	{
		return UVariantSet::StaticClass();
	}
	struct Z_Construct_UClass_UVariantSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExpanded_MetaData[];
#endif
		static void NewProp_bExpanded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExpanded;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Variants_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variants_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Variants;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thumbnail_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Thumbnail;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVariantSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VariantManagerContent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVariantSet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVariantSet_GetDisplayText, "GetDisplayText" }, // 1841450405
		{ &Z_Construct_UFunction_UVariantSet_GetNumVariants, "GetNumVariants" }, // 1693031200
		{ &Z_Construct_UFunction_UVariantSet_GetParent, "GetParent" }, // 3426610058
		{ &Z_Construct_UFunction_UVariantSet_GetThumbnail, "GetThumbnail" }, // 3212951647
		{ &Z_Construct_UFunction_UVariantSet_GetVariant, "GetVariant" }, // 4184538098
		{ &Z_Construct_UFunction_UVariantSet_GetVariantByName, "GetVariantByName" }, // 2687283775
		{ &Z_Construct_UFunction_UVariantSet_SetDisplayText, "SetDisplayText" }, // 2622250597
		{ &Z_Construct_UFunction_UVariantSet_SetThumbnailFromCamera, "SetThumbnailFromCamera" }, // 1899969899
		{ &Z_Construct_UFunction_UVariantSet_SetThumbnailFromEditorViewport, "SetThumbnailFromEditorViewport" }, // 2369685428
		{ &Z_Construct_UFunction_UVariantSet_SetThumbnailFromFile, "SetThumbnailFromFile" }, // 624458298
		{ &Z_Construct_UFunction_UVariantSet_SetThumbnailFromTexture, "SetThumbnailFromTexture" }, // 3411525520
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVariantSet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VariantSet.h" },
		{ "ModuleRelativePath", "Public/VariantSet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVariantSet_Statics::NewProp_DisplayText_MetaData[] = {
		{ "Comment", "// The display name used to be a property. Use the non-deprecated, non-property version from now on\n" },
		{ "ModuleRelativePath", "Public/VariantSet.h" },
		{ "ToolTip", "The display name used to be a property. Use the non-deprecated, non-property version from now on" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UVariantSet_Statics::NewProp_DisplayText = { "DisplayText", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVariantSet, DisplayText_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UVariantSet_Statics::NewProp_DisplayText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVariantSet_Statics::NewProp_DisplayText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVariantSet_Statics::NewProp_bExpanded_MetaData[] = {
		{ "ModuleRelativePath", "Public/VariantSet.h" },
	};
#endif
	void Z_Construct_UClass_UVariantSet_Statics::NewProp_bExpanded_SetBit(void* Obj)
	{
		((UVariantSet*)Obj)->bExpanded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVariantSet_Statics::NewProp_bExpanded = { "bExpanded", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVariantSet), &Z_Construct_UClass_UVariantSet_Statics::NewProp_bExpanded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVariantSet_Statics::NewProp_bExpanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVariantSet_Statics::NewProp_bExpanded_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVariantSet_Statics::NewProp_Variants_Inner = { "Variants", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UVariant_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVariantSet_Statics::NewProp_Variants_MetaData[] = {
		{ "ModuleRelativePath", "Public/VariantSet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVariantSet_Statics::NewProp_Variants = { "Variants", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVariantSet, Variants), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVariantSet_Statics::NewProp_Variants_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVariantSet_Statics::NewProp_Variants_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVariantSet_Statics::NewProp_Thumbnail_MetaData[] = {
		{ "ModuleRelativePath", "Public/VariantSet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVariantSet_Statics::NewProp_Thumbnail = { "Thumbnail", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVariantSet, Thumbnail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVariantSet_Statics::NewProp_Thumbnail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVariantSet_Statics::NewProp_Thumbnail_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVariantSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVariantSet_Statics::NewProp_DisplayText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVariantSet_Statics::NewProp_bExpanded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVariantSet_Statics::NewProp_Variants_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVariantSet_Statics::NewProp_Variants,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVariantSet_Statics::NewProp_Thumbnail,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVariantSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVariantSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVariantSet_Statics::ClassParams = {
		&UVariantSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVariantSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVariantSet_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVariantSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVariantSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVariantSet()
	{
		if (!Z_Registration_Info_UClass_UVariantSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVariantSet.OuterSingleton, Z_Construct_UClass_UVariantSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVariantSet.OuterSingleton;
	}
	template<> VARIANTMANAGERCONTENT_API UClass* StaticClass<UVariantSet>()
	{
		return UVariantSet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVariantSet);
	UVariantSet::~UVariantSet() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UVariantSet)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVariantSet, UVariantSet::StaticClass, TEXT("UVariantSet"), &Z_Registration_Info_UClass_UVariantSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVariantSet), 805692740U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_582648226(TEXT("/Script/VariantManagerContent"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
