// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCOE/Nodes/CustomizableObjectNodeExtendMaterial.h"
#include "../../Source/Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "../Public/MuCOE/CustomizableObjectEditor_Deprecated.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectNodeExtendMaterial() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableObject_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeExtendMaterial();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeExtendMaterial_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeMaterialBase();
	CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectNodeExtendMaterialImage();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinReference();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	void UCustomizableObjectNodeExtendMaterial::StaticRegisterNativesUCustomizableObjectNodeExtendMaterial()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeExtendMaterial);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeExtendMaterial_NoRegister()
	{
		return UCustomizableObjectNodeExtendMaterial::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeExtendMaterial_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Tags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentMaterialObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParentMaterialObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentMaterialNodeId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParentMaterialNodeId;
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeExtendMaterial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNodeMaterialBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeExtendMaterial_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeExtendMaterial.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeExtendMaterial.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableObjectNodeExtendMaterial_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeExtendMaterial_Statics::NewProp_Tags_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeExtendMaterial.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectNodeExtendMaterial_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeExtendMaterial, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeExtendMaterial_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeExtendMaterial_Statics::NewProp_Tags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeExtendMaterial_Statics::NewProp_ParentMaterialObject_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeExtendMaterial.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCustomizableObjectNodeExtendMaterial_Statics::NewProp_ParentMaterialObject = { "ParentMaterialObject", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeExtendMaterial, ParentMaterialObject), Z_Construct_UClass_UCustomizableObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeExtendMaterial_Statics::NewProp_ParentMaterialObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeExtendMaterial_Statics::NewProp_ParentMaterialObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeExtendMaterial_Statics::NewProp_ParentMaterialNodeId_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeExtendMaterial.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeExtendMaterial_Statics::NewProp_ParentMaterialNodeId = { "ParentMaterialNodeId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeExtendMaterial, ParentMaterialNodeId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeExtendMaterial_Statics::NewProp_ParentMaterialNodeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeExtendMaterial_Statics::NewProp_ParentMaterialNodeId_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeExtendMaterial_Statics::NewProp_PinsParameter_ValueProp = { "PinsParameter", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FEdGraphPinReference, METADATA_PARAMS(nullptr, 0) }; // 1910659421
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeExtendMaterial_Statics::NewProp_PinsParameter_Key_KeyProp = { "PinsParameter_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeExtendMaterial_Statics::NewProp_PinsParameter_MetaData[] = {
		{ "Comment", "/** Relates a Parameter id to a Pin. Only used to improve performance. */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeExtendMaterial.h" },
		{ "ToolTip", "Relates a Parameter id to a Pin. Only used to improve performance." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCustomizableObjectNodeExtendMaterial_Statics::NewProp_PinsParameter = { "PinsParameter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeExtendMaterial, PinsParameter), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeExtendMaterial_Statics::NewProp_PinsParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeExtendMaterial_Statics::NewProp_PinsParameter_MetaData)) }; // 1910659421
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeExtendMaterial_Statics::NewProp_Images_Inner = { "Images", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCustomizableObjectNodeExtendMaterialImage, METADATA_PARAMS(nullptr, 0) }; // 2899725780
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeExtendMaterial_Statics::NewProp_Images_MetaData[] = {
		{ "Comment", "// Deprecated properties\n" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeExtendMaterial.h" },
		{ "ToolTip", "Deprecated properties" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectNodeExtendMaterial_Statics::NewProp_Images = { "Images", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeExtendMaterial, Images_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeExtendMaterial_Statics::NewProp_Images_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeExtendMaterial_Statics::NewProp_Images_MetaData)) }; // 2899725780
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectNodeExtendMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeExtendMaterial_Statics::NewProp_Tags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeExtendMaterial_Statics::NewProp_Tags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeExtendMaterial_Statics::NewProp_ParentMaterialObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeExtendMaterial_Statics::NewProp_ParentMaterialNodeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeExtendMaterial_Statics::NewProp_PinsParameter_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeExtendMaterial_Statics::NewProp_PinsParameter_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeExtendMaterial_Statics::NewProp_PinsParameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeExtendMaterial_Statics::NewProp_Images_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeExtendMaterial_Statics::NewProp_Images,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeExtendMaterial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeExtendMaterial>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeExtendMaterial_Statics::ClassParams = {
		&UCustomizableObjectNodeExtendMaterial::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectNodeExtendMaterial_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeExtendMaterial_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeExtendMaterial_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeExtendMaterial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectNodeExtendMaterial()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeExtendMaterial.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeExtendMaterial.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeExtendMaterial_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeExtendMaterial.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeExtendMaterial>()
	{
		return UCustomizableObjectNodeExtendMaterial::StaticClass();
	}
	UCustomizableObjectNodeExtendMaterial::UCustomizableObjectNodeExtendMaterial(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeExtendMaterial);
	UCustomizableObjectNodeExtendMaterial::~UCustomizableObjectNodeExtendMaterial() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UCustomizableObjectNodeExtendMaterial)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeExtendMaterial_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeExtendMaterial_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectNodeExtendMaterial, UCustomizableObjectNodeExtendMaterial::StaticClass, TEXT("UCustomizableObjectNodeExtendMaterial"), &Z_Registration_Info_UClass_UCustomizableObjectNodeExtendMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeExtendMaterial), 4208048057U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeExtendMaterial_h_2973871878(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeExtendMaterial_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeExtendMaterial_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
