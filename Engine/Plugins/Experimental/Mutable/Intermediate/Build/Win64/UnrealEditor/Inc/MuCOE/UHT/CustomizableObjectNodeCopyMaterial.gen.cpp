// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCOE/Nodes/CustomizableObjectNodeCopyMaterial.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectNodeCopyMaterial() {}
// Cross Module References
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeCopyMaterial();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeCopyMaterial_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeMaterial();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	void UCustomizableObjectNodeCopyMaterial::StaticRegisterNativesUCustomizableObjectNodeCopyMaterial()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeCopyMaterial);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeCopyMaterial_NoRegister()
	{
		return UCustomizableObjectNodeCopyMaterial::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeCopyMaterial_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeCopyMaterial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNodeMaterial,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeCopyMaterial_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Copy Material node. Duplicates a Material Node. Duplicates all Material node input pins and properties except for the Mesh input pin.\n * A new Mesh has to be defined through the new Mesh input pin.\n *\n * Input pins:\n * - Mesh: New mesh.\n * - Material: Material to duplicate.\n * \n * Output pins:\n * - Material: New material.\n * \n * Properties:\n *   [NONE]\n */" },
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeCopyMaterial.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeCopyMaterial.h" },
		{ "ToolTip", "Copy Material node. Duplicates a Material Node. Duplicates all Material node input pins and properties except for the Mesh input pin.\nA new Mesh has to be defined through the new Mesh input pin.\n\nInput pins:\n- Mesh: New mesh.\n- Material: Material to duplicate.\n\nOutput pins:\n- Material: New material.\n\nProperties:\n  [NONE]" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeCopyMaterial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeCopyMaterial>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeCopyMaterial_Statics::ClassParams = {
		&UCustomizableObjectNodeCopyMaterial::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeCopyMaterial_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeCopyMaterial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectNodeCopyMaterial()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeCopyMaterial.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeCopyMaterial.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeCopyMaterial_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeCopyMaterial.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeCopyMaterial>()
	{
		return UCustomizableObjectNodeCopyMaterial::StaticClass();
	}
	UCustomizableObjectNodeCopyMaterial::UCustomizableObjectNodeCopyMaterial(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeCopyMaterial);
	UCustomizableObjectNodeCopyMaterial::~UCustomizableObjectNodeCopyMaterial() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeCopyMaterial_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeCopyMaterial_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectNodeCopyMaterial, UCustomizableObjectNodeCopyMaterial::StaticClass, TEXT("UCustomizableObjectNodeCopyMaterial"), &Z_Registration_Info_UClass_UCustomizableObjectNodeCopyMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeCopyMaterial), 160714643U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeCopyMaterial_h_4279903351(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeCopyMaterial_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeCopyMaterial_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
