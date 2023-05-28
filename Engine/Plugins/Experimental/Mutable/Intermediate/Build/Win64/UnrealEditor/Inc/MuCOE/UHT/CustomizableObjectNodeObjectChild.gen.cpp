// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCOE/Nodes/CustomizableObjectNodeObjectChild.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectNodeObjectChild() {}
// Cross Module References
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeObject();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeObjectChild();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeObjectChild_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	void UCustomizableObjectNodeObjectChild::StaticRegisterNativesUCustomizableObjectNodeObjectChild()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeObjectChild);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeObjectChild_NoRegister()
	{
		return UCustomizableObjectNodeObjectChild::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeObjectChild_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeObjectChild_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNodeObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeObjectChild_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeObjectChild.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObjectChild.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeObjectChild_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeObjectChild>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeObjectChild_Statics::ClassParams = {
		&UCustomizableObjectNodeObjectChild::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeObjectChild_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeObjectChild_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectNodeObjectChild()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeObjectChild.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeObjectChild.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeObjectChild_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeObjectChild.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeObjectChild>()
	{
		return UCustomizableObjectNodeObjectChild::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeObjectChild);
	UCustomizableObjectNodeObjectChild::~UCustomizableObjectNodeObjectChild() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeObjectChild_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeObjectChild_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectNodeObjectChild, UCustomizableObjectNodeObjectChild::StaticClass, TEXT("UCustomizableObjectNodeObjectChild"), &Z_Registration_Info_UClass_UCustomizableObjectNodeObjectChild, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeObjectChild), 241227470U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeObjectChild_h_4117517326(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeObjectChild_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeObjectChild_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
