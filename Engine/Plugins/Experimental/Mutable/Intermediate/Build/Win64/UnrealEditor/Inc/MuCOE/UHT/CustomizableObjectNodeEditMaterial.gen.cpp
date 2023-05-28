// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCOE/Nodes/CustomizableObjectNodeEditMaterial.h"
#include "../../Source/Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "../Public/MuCOE/CustomizableObjectEditor_Deprecated.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectNodeEditMaterial() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeEditLayoutBlocks();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeEditMaterial();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeEditMaterial_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeEditMaterialPinEditImageData();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeEditMaterialPinEditImageData_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodePinData();
	CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectNodeEditMaterialImage();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinReference();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	void UCustomizableObjectNodeEditMaterialPinEditImageData::StaticRegisterNativesUCustomizableObjectNodeEditMaterialPinEditImageData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeEditMaterialPinEditImageData);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeEditMaterialPinEditImageData_NoRegister()
	{
		return UCustomizableObjectNodeEditMaterialPinEditImageData::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeEditMaterialPinEditImageData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImageId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinMask_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PinMask;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeEditMaterialPinEditImageData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNodePinData,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeEditMaterialPinEditImageData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Additional data for the Parent Texture Parameter to edit pin. */" },
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeEditMaterial.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeEditMaterial.h" },
		{ "ToolTip", "Additional data for the Parent Texture Parameter to edit pin." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeEditMaterialPinEditImageData_Statics::NewProp_ImageId_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeEditMaterial.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeEditMaterialPinEditImageData_Statics::NewProp_ImageId = { "ImageId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeEditMaterialPinEditImageData, ImageId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeEditMaterialPinEditImageData_Statics::NewProp_ImageId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeEditMaterialPinEditImageData_Statics::NewProp_ImageId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeEditMaterialPinEditImageData_Statics::NewProp_PinMask_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeEditMaterial.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeEditMaterialPinEditImageData_Statics::NewProp_PinMask = { "PinMask", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeEditMaterialPinEditImageData, PinMask), Z_Construct_UScriptStruct_FEdGraphPinReference, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeEditMaterialPinEditImageData_Statics::NewProp_PinMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeEditMaterialPinEditImageData_Statics::NewProp_PinMask_MetaData)) }; // 1910659421
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectNodeEditMaterialPinEditImageData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeEditMaterialPinEditImageData_Statics::NewProp_ImageId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeEditMaterialPinEditImageData_Statics::NewProp_PinMask,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeEditMaterialPinEditImageData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeEditMaterialPinEditImageData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeEditMaterialPinEditImageData_Statics::ClassParams = {
		&UCustomizableObjectNodeEditMaterialPinEditImageData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectNodeEditMaterialPinEditImageData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeEditMaterialPinEditImageData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeEditMaterialPinEditImageData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeEditMaterialPinEditImageData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectNodeEditMaterialPinEditImageData()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeEditMaterialPinEditImageData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeEditMaterialPinEditImageData.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeEditMaterialPinEditImageData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeEditMaterialPinEditImageData.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeEditMaterialPinEditImageData>()
	{
		return UCustomizableObjectNodeEditMaterialPinEditImageData::StaticClass();
	}
	UCustomizableObjectNodeEditMaterialPinEditImageData::UCustomizableObjectNodeEditMaterialPinEditImageData() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeEditMaterialPinEditImageData);
	UCustomizableObjectNodeEditMaterialPinEditImageData::~UCustomizableObjectNodeEditMaterialPinEditImageData() {}
	void UCustomizableObjectNodeEditMaterial::StaticRegisterNativesUCustomizableObjectNodeEditMaterial()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeEditMaterial);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeEditMaterial_NoRegister()
	{
		return UCustomizableObjectNodeEditMaterial::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeEditMaterial_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PinsParameter_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PinsParameter_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinsParameter_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PinsParameter;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Images_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Images_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Images;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Blocks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Blocks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Blocks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeEditMaterial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNodeEditLayoutBlocks,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeEditMaterial_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeEditMaterial.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeEditMaterial.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeEditMaterial_Statics::NewProp_PinsParameter_ValueProp = { "PinsParameter", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FEdGraphPinReference, METADATA_PARAMS(nullptr, 0) }; // 1910659421
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeEditMaterial_Statics::NewProp_PinsParameter_Key_KeyProp = { "PinsParameter_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeEditMaterial_Statics::NewProp_PinsParameter_MetaData[] = {
		{ "Comment", "/** Relates a Parameter id to a Pin. Only used to improve performance. */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeEditMaterial.h" },
		{ "ToolTip", "Relates a Parameter id to a Pin. Only used to improve performance." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCustomizableObjectNodeEditMaterial_Statics::NewProp_PinsParameter = { "PinsParameter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeEditMaterial, PinsParameter), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeEditMaterial_Statics::NewProp_PinsParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeEditMaterial_Statics::NewProp_PinsParameter_MetaData)) }; // 1910659421
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeEditMaterial_Statics::NewProp_Images_Inner = { "Images", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCustomizableObjectNodeEditMaterialImage, METADATA_PARAMS(nullptr, 0) }; // 3807383302
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeEditMaterial_Statics::NewProp_Images_MetaData[] = {
		{ "Comment", "// Deprecated properties\n" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeEditMaterial.h" },
		{ "ToolTip", "Deprecated properties" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectNodeEditMaterial_Statics::NewProp_Images = { "Images", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeEditMaterial, Images_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeEditMaterial_Statics::NewProp_Images_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeEditMaterial_Statics::NewProp_Images_MetaData)) }; // 3807383302
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomizableObjectNodeEditMaterial_Statics::NewProp_Blocks_Inner = { "Blocks", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeEditMaterial_Statics::NewProp_Blocks_MetaData[] = {
		{ "Comment", "// Old layout blocks to patch. Now in parent class.\n" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeEditMaterial.h" },
		{ "ToolTip", "Old layout blocks to patch. Now in parent class." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectNodeEditMaterial_Statics::NewProp_Blocks = { "Blocks", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeEditMaterial, Blocks_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeEditMaterial_Statics::NewProp_Blocks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeEditMaterial_Statics::NewProp_Blocks_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectNodeEditMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeEditMaterial_Statics::NewProp_PinsParameter_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeEditMaterial_Statics::NewProp_PinsParameter_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeEditMaterial_Statics::NewProp_PinsParameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeEditMaterial_Statics::NewProp_Images_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeEditMaterial_Statics::NewProp_Images,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeEditMaterial_Statics::NewProp_Blocks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeEditMaterial_Statics::NewProp_Blocks,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeEditMaterial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeEditMaterial>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeEditMaterial_Statics::ClassParams = {
		&UCustomizableObjectNodeEditMaterial::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectNodeEditMaterial_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeEditMaterial_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeEditMaterial_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeEditMaterial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectNodeEditMaterial()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeEditMaterial.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeEditMaterial.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeEditMaterial_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeEditMaterial.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeEditMaterial>()
	{
		return UCustomizableObjectNodeEditMaterial::StaticClass();
	}
	UCustomizableObjectNodeEditMaterial::UCustomizableObjectNodeEditMaterial(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeEditMaterial);
	UCustomizableObjectNodeEditMaterial::~UCustomizableObjectNodeEditMaterial() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UCustomizableObjectNodeEditMaterial)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeEditMaterial_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeEditMaterial_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectNodeEditMaterialPinEditImageData, UCustomizableObjectNodeEditMaterialPinEditImageData::StaticClass, TEXT("UCustomizableObjectNodeEditMaterialPinEditImageData"), &Z_Registration_Info_UClass_UCustomizableObjectNodeEditMaterialPinEditImageData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeEditMaterialPinEditImageData), 450941448U) },
		{ Z_Construct_UClass_UCustomizableObjectNodeEditMaterial, UCustomizableObjectNodeEditMaterial::StaticClass, TEXT("UCustomizableObjectNodeEditMaterial"), &Z_Registration_Info_UClass_UCustomizableObjectNodeEditMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeEditMaterial), 1008069691U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeEditMaterial_h_4155933222(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeEditMaterial_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeEditMaterial_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
