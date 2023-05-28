// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/MuCOE/CustomizableObjectEditor_Deprecated.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectEditor_Deprecated() {}
// Cross Module References
	CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectNodeEditMaterialImage();
	CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectNodeExtendMaterialImage();
	CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage();
	CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar();
	CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizableObjectNodeMaterialImage;
class UScriptStruct* FCustomizableObjectNodeMaterialImage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizableObjectNodeMaterialImage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizableObjectNodeMaterialImage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("CustomizableObjectNodeMaterialImage"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizableObjectNodeMaterialImage.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* StaticStruct<FCustomizableObjectNodeMaterialImage>()
{
	return FCustomizableObjectNodeMaterialImage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVLayout_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UVLayout;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReferenceTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LayerIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PinName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// UCustomizableObjectNodeMaterial\n// Deprecated, do not use!\n" },
		{ "ModuleRelativePath", "Public/MuCOE/CustomizableObjectEditor_Deprecated.h" },
		{ "ToolTip", "UCustomizableObjectNodeMaterial\nDeprecated, do not use!" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizableObjectNodeMaterialImage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCOE/CustomizableObjectEditor_Deprecated.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectNodeMaterialImage, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewProp_UVLayout_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCOE/CustomizableObjectEditor_Deprecated.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewProp_UVLayout = { "UVLayout", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectNodeMaterialImage, UVLayout), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewProp_UVLayout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewProp_UVLayout_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewProp_ReferenceTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCOE/CustomizableObjectEditor_Deprecated.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewProp_ReferenceTexture = { "ReferenceTexture", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectNodeMaterialImage, ReferenceTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewProp_ReferenceTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewProp_ReferenceTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewProp_LayerIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCOE/CustomizableObjectEditor_Deprecated.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewProp_LayerIndex = { "LayerIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectNodeMaterialImage, LayerIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewProp_LayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewProp_LayerIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewProp_PinName_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCOE/CustomizableObjectEditor_Deprecated.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewProp_PinName = { "PinName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectNodeMaterialImage, PinName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewProp_PinName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewProp_PinName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewProp_UVLayout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewProp_ReferenceTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewProp_LayerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewProp_PinName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		&NewStructOps,
		"CustomizableObjectNodeMaterialImage",
		sizeof(FCustomizableObjectNodeMaterialImage),
		alignof(FCustomizableObjectNodeMaterialImage),
		Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomizableObjectNodeMaterialImage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizableObjectNodeMaterialImage.InnerSingleton, Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomizableObjectNodeMaterialImage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizableObjectNodeMaterialVector;
class UScriptStruct* FCustomizableObjectNodeMaterialVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizableObjectNodeMaterialVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizableObjectNodeMaterialVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("CustomizableObjectNodeMaterialVector"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizableObjectNodeMaterialVector.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* StaticStruct<FCustomizableObjectNodeMaterialVector>()
{
	return FCustomizableObjectNodeMaterialVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LayerIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PinName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Deprecated, do not use!\n" },
		{ "ModuleRelativePath", "Public/MuCOE/CustomizableObjectEditor_Deprecated.h" },
		{ "ToolTip", "Deprecated, do not use!" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizableObjectNodeMaterialVector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCOE/CustomizableObjectEditor_Deprecated.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectNodeMaterialVector, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics::NewProp_LayerIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCOE/CustomizableObjectEditor_Deprecated.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics::NewProp_LayerIndex = { "LayerIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectNodeMaterialVector, LayerIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics::NewProp_LayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics::NewProp_LayerIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics::NewProp_PinName_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCOE/CustomizableObjectEditor_Deprecated.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics::NewProp_PinName = { "PinName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectNodeMaterialVector, PinName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics::NewProp_PinName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics::NewProp_PinName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics::NewProp_LayerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics::NewProp_PinName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		&NewStructOps,
		"CustomizableObjectNodeMaterialVector",
		sizeof(FCustomizableObjectNodeMaterialVector),
		alignof(FCustomizableObjectNodeMaterialVector),
		Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomizableObjectNodeMaterialVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizableObjectNodeMaterialVector.InnerSingleton, Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomizableObjectNodeMaterialVector.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizableObjectNodeMaterialScalar;
class UScriptStruct* FCustomizableObjectNodeMaterialScalar::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizableObjectNodeMaterialScalar.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizableObjectNodeMaterialScalar.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("CustomizableObjectNodeMaterialScalar"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizableObjectNodeMaterialScalar.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* StaticStruct<FCustomizableObjectNodeMaterialScalar>()
{
	return FCustomizableObjectNodeMaterialScalar::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LayerIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PinName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Deprecated, do not use!\n" },
		{ "ModuleRelativePath", "Public/MuCOE/CustomizableObjectEditor_Deprecated.h" },
		{ "ToolTip", "Deprecated, do not use!" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizableObjectNodeMaterialScalar>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCOE/CustomizableObjectEditor_Deprecated.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectNodeMaterialScalar, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics::NewProp_LayerIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCOE/CustomizableObjectEditor_Deprecated.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics::NewProp_LayerIndex = { "LayerIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectNodeMaterialScalar, LayerIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics::NewProp_LayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics::NewProp_LayerIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics::NewProp_PinName_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCOE/CustomizableObjectEditor_Deprecated.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics::NewProp_PinName = { "PinName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectNodeMaterialScalar, PinName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics::NewProp_PinName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics::NewProp_PinName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics::NewProp_LayerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics::NewProp_PinName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		&NewStructOps,
		"CustomizableObjectNodeMaterialScalar",
		sizeof(FCustomizableObjectNodeMaterialScalar),
		alignof(FCustomizableObjectNodeMaterialScalar),
		Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomizableObjectNodeMaterialScalar.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizableObjectNodeMaterialScalar.InnerSingleton, Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomizableObjectNodeMaterialScalar.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizableObjectNodeEditMaterialImage;
class UScriptStruct* FCustomizableObjectNodeEditMaterialImage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizableObjectNodeEditMaterialImage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizableObjectNodeEditMaterialImage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectNodeEditMaterialImage, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("CustomizableObjectNodeEditMaterialImage"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizableObjectNodeEditMaterialImage.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* StaticStruct<FCustomizableObjectNodeEditMaterialImage>()
{
	return FCustomizableObjectNodeEditMaterialImage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomizableObjectNodeEditMaterialImage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeEditMaterialImage_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// UCustomizableObjectNodeEditMaterial\n// Deprecated, do not use!\n" },
		{ "ModuleRelativePath", "Public/MuCOE/CustomizableObjectEditor_Deprecated.h" },
		{ "ToolTip", "UCustomizableObjectNodeEditMaterial\nDeprecated, do not use!" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizableObjectNodeEditMaterialImage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizableObjectNodeEditMaterialImage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeEditMaterialImage_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCOE/CustomizableObjectEditor_Deprecated.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeEditMaterialImage_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectNodeEditMaterialImage, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectNodeEditMaterialImage_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeEditMaterialImage_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizableObjectNodeEditMaterialImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeEditMaterialImage_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizableObjectNodeEditMaterialImage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		&NewStructOps,
		"CustomizableObjectNodeEditMaterialImage",
		sizeof(FCustomizableObjectNodeEditMaterialImage),
		alignof(FCustomizableObjectNodeEditMaterialImage),
		Z_Construct_UScriptStruct_FCustomizableObjectNodeEditMaterialImage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeEditMaterialImage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectNodeEditMaterialImage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeEditMaterialImage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectNodeEditMaterialImage()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomizableObjectNodeEditMaterialImage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizableObjectNodeEditMaterialImage.InnerSingleton, Z_Construct_UScriptStruct_FCustomizableObjectNodeEditMaterialImage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomizableObjectNodeEditMaterialImage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizableObjectNodeExtendMaterialImage;
class UScriptStruct* FCustomizableObjectNodeExtendMaterialImage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizableObjectNodeExtendMaterialImage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizableObjectNodeExtendMaterialImage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectNodeExtendMaterialImage, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("CustomizableObjectNodeExtendMaterialImage"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizableObjectNodeExtendMaterialImage.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* StaticStruct<FCustomizableObjectNodeExtendMaterialImage>()
{
	return FCustomizableObjectNodeExtendMaterialImage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomizableObjectNodeExtendMaterialImage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeExtendMaterialImage_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// UCustomizableObjectNodeExtendMaterial\n// Deprecated, do not use!\n" },
		{ "ModuleRelativePath", "Public/MuCOE/CustomizableObjectEditor_Deprecated.h" },
		{ "ToolTip", "UCustomizableObjectNodeExtendMaterial\nDeprecated, do not use!" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizableObjectNodeExtendMaterialImage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizableObjectNodeExtendMaterialImage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeExtendMaterialImage_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCOE/CustomizableObjectEditor_Deprecated.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeExtendMaterialImage_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectNodeExtendMaterialImage, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectNodeExtendMaterialImage_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeExtendMaterialImage_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizableObjectNodeExtendMaterialImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeExtendMaterialImage_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizableObjectNodeExtendMaterialImage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		&NewStructOps,
		"CustomizableObjectNodeExtendMaterialImage",
		sizeof(FCustomizableObjectNodeExtendMaterialImage),
		alignof(FCustomizableObjectNodeExtendMaterialImage),
		Z_Construct_UScriptStruct_FCustomizableObjectNodeExtendMaterialImage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeExtendMaterialImage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectNodeExtendMaterialImage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeExtendMaterialImage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectNodeExtendMaterialImage()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomizableObjectNodeExtendMaterialImage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizableObjectNodeExtendMaterialImage.InnerSingleton, Z_Construct_UScriptStruct_FCustomizableObjectNodeExtendMaterialImage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomizableObjectNodeExtendMaterialImage.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_CustomizableObjectEditor_Deprecated_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_CustomizableObjectEditor_Deprecated_h_Statics::ScriptStructInfo[] = {
		{ FCustomizableObjectNodeMaterialImage::StaticStruct, Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewStructOps, TEXT("CustomizableObjectNodeMaterialImage"), &Z_Registration_Info_UScriptStruct_CustomizableObjectNodeMaterialImage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizableObjectNodeMaterialImage), 2481421481U) },
		{ FCustomizableObjectNodeMaterialVector::StaticStruct, Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics::NewStructOps, TEXT("CustomizableObjectNodeMaterialVector"), &Z_Registration_Info_UScriptStruct_CustomizableObjectNodeMaterialVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizableObjectNodeMaterialVector), 1181303984U) },
		{ FCustomizableObjectNodeMaterialScalar::StaticStruct, Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics::NewStructOps, TEXT("CustomizableObjectNodeMaterialScalar"), &Z_Registration_Info_UScriptStruct_CustomizableObjectNodeMaterialScalar, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizableObjectNodeMaterialScalar), 3025784112U) },
		{ FCustomizableObjectNodeEditMaterialImage::StaticStruct, Z_Construct_UScriptStruct_FCustomizableObjectNodeEditMaterialImage_Statics::NewStructOps, TEXT("CustomizableObjectNodeEditMaterialImage"), &Z_Registration_Info_UScriptStruct_CustomizableObjectNodeEditMaterialImage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizableObjectNodeEditMaterialImage), 3807383302U) },
		{ FCustomizableObjectNodeExtendMaterialImage::StaticStruct, Z_Construct_UScriptStruct_FCustomizableObjectNodeExtendMaterialImage_Statics::NewStructOps, TEXT("CustomizableObjectNodeExtendMaterialImage"), &Z_Registration_Info_UScriptStruct_CustomizableObjectNodeExtendMaterialImage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizableObjectNodeExtendMaterialImage), 2899725780U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_CustomizableObjectEditor_Deprecated_h_2460714344(TEXT("/Script/CustomizableObjectEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_CustomizableObjectEditor_Deprecated_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_CustomizableObjectEditor_Deprecated_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
