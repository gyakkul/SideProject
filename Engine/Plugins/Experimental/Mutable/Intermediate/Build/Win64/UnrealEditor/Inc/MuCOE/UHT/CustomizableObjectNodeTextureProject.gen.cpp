// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCOE/Nodes/CustomizableObjectNodeTextureProject.h"
#include "../../Source/Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectNodeTextureProject() {}
// Cross Module References
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNode();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeTextureProject();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeTextureProject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinReference();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	void UCustomizableObjectNodeTextureProject::StaticRegisterNativesUCustomizableObjectNodeTextureProject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeTextureProject);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeTextureProject_NoRegister()
	{
		return UCustomizableObjectNodeTextureProject::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Layout_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Layout;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAngleFadeOutForRGB_MetaData[];
#endif
		static void NewProp_bEnableAngleFadeOutForRGB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAngleFadeOutForRGB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAngleFadeOutForAlpha_MetaData[];
#endif
		static void NewProp_bEnableAngleFadeOutForAlpha_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAngleFadeOutForAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureSizeX_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_TextureSizeX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureSizeY_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_TextureSizeY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Textures_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Textures;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReferenceTexture;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TexturePinsReferences_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TexturePinsReferences_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TexturePinsReferences;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputPinsReferences_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputPinsReferences_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputPinsReferences;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNode,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeTextureProject.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTextureProject.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_Layout_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "// Layout to use for the generated images.\n" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTextureProject.h" },
		{ "ToolTip", "Layout to use for the generated images." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_Layout = { "Layout", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeTextureProject, Layout), nullptr, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_Layout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_Layout_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_bEnableAngleFadeOutForRGB_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTextureProject.h" },
	};
#endif
	void Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_bEnableAngleFadeOutForRGB_SetBit(void* Obj)
	{
		((UCustomizableObjectNodeTextureProject*)Obj)->bEnableAngleFadeOutForRGB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_bEnableAngleFadeOutForRGB = { "bEnableAngleFadeOutForRGB", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCustomizableObjectNodeTextureProject), &Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_bEnableAngleFadeOutForRGB_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_bEnableAngleFadeOutForRGB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_bEnableAngleFadeOutForRGB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_bEnableAngleFadeOutForAlpha_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTextureProject.h" },
	};
#endif
	void Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_bEnableAngleFadeOutForAlpha_SetBit(void* Obj)
	{
		((UCustomizableObjectNodeTextureProject*)Obj)->bEnableAngleFadeOutForAlpha = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_bEnableAngleFadeOutForAlpha = { "bEnableAngleFadeOutForAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCustomizableObjectNodeTextureProject), &Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_bEnableAngleFadeOutForAlpha_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_bEnableAngleFadeOutForAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_bEnableAngleFadeOutForAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_TextureSizeX_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "/** Set the width of the Texture. If the reference texture is not null, it overrides the Size X property */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTextureProject.h" },
		{ "ToolTip", "Set the width of the Texture. If the reference texture is not null, it overrides the Size X property" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_TextureSizeX = { "TextureSizeX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeTextureProject, TextureSizeX), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_TextureSizeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_TextureSizeX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_TextureSizeY_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "/** Set the height of the Texture. If the reference texture is not null, it overrides the Size Y property */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTextureProject.h" },
		{ "ToolTip", "Set the height of the Texture. If the reference texture is not null, it overrides the Size Y property" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_TextureSizeY = { "TextureSizeY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeTextureProject, TextureSizeY), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_TextureSizeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_TextureSizeY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_Textures_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTextureProject.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeTextureProject, Textures), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_Textures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_Textures_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_ReferenceTexture_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "/** Reference Texture used to decide the texture properties of the mutable-generated textures\n\x09* connected to this material (e.g. LODBias, Size X,...). If null, mutable default texture properties will be applied. */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTextureProject.h" },
		{ "ToolTip", "Reference Texture used to decide the texture properties of the mutable-generated textures\nconnected to this material (e.g. LODBias, Size X,...). If null, mutable default texture properties will be applied." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_ReferenceTexture = { "ReferenceTexture", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeTextureProject, ReferenceTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_ReferenceTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_ReferenceTexture_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_TexturePinsReferences_Inner = { "TexturePinsReferences", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FEdGraphPinReference, METADATA_PARAMS(nullptr, 0) }; // 1910659421
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_TexturePinsReferences_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTextureProject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_TexturePinsReferences = { "TexturePinsReferences", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeTextureProject, TexturePinsReferences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_TexturePinsReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_TexturePinsReferences_MetaData)) }; // 1910659421
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_OutputPinsReferences_Inner = { "OutputPinsReferences", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FEdGraphPinReference, METADATA_PARAMS(nullptr, 0) }; // 1910659421
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_OutputPinsReferences_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTextureProject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_OutputPinsReferences = { "OutputPinsReferences", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeTextureProject, OutputPinsReferences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_OutputPinsReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_OutputPinsReferences_MetaData)) }; // 1910659421
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_Layout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_bEnableAngleFadeOutForRGB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_bEnableAngleFadeOutForAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_TextureSizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_TextureSizeY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_Textures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_ReferenceTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_TexturePinsReferences_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_TexturePinsReferences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_OutputPinsReferences_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_OutputPinsReferences,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeTextureProject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::ClassParams = {
		&UCustomizableObjectNodeTextureProject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectNodeTextureProject()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeTextureProject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeTextureProject.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeTextureProject.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeTextureProject>()
	{
		return UCustomizableObjectNodeTextureProject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeTextureProject);
	UCustomizableObjectNodeTextureProject::~UCustomizableObjectNodeTextureProject() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UCustomizableObjectNodeTextureProject)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureProject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureProject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectNodeTextureProject, UCustomizableObjectNodeTextureProject::StaticClass, TEXT("UCustomizableObjectNodeTextureProject"), &Z_Registration_Info_UClass_UCustomizableObjectNodeTextureProject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeTextureProject), 3794496436U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureProject_h_2795238200(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureProject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureProject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
