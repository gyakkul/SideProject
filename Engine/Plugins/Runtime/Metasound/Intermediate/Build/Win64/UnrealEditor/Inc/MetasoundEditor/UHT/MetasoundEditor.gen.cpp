// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MetasoundEditor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetasoundEditor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundInterfacesView();
	METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundInterfacesView_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MetasoundEditor();
// End Cross Module References
	void UMetasoundInterfacesView::StaticRegisterNativesUMetasoundInterfacesView()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetasoundInterfacesView);
	UClass* Z_Construct_UClass_UMetasoundInterfacesView_NoRegister()
	{
		return UMetasoundInterfacesView::StaticClass();
	}
	struct Z_Construct_UClass_UMetasoundInterfacesView_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMetasoundInterfacesView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundInterfacesView_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Simple class for the interfaces details tab to keep track of its corresponding Metasound \n" },
		{ "IncludePath", "MetasoundEditor.h" },
		{ "ModuleRelativePath", "Private/MetasoundEditor.h" },
		{ "ToolTip", "Simple class for the interfaces details tab to keep track of its corresponding Metasound" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMetasoundInterfacesView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetasoundInterfacesView>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetasoundInterfacesView_Statics::ClassParams = {
		&UMetasoundInterfacesView::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMetasoundInterfacesView_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundInterfacesView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMetasoundInterfacesView()
	{
		if (!Z_Registration_Info_UClass_UMetasoundInterfacesView.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetasoundInterfacesView.OuterSingleton, Z_Construct_UClass_UMetasoundInterfacesView_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMetasoundInterfacesView.OuterSingleton;
	}
	template<> METASOUNDEDITOR_API UClass* StaticClass<UMetasoundInterfacesView>()
	{
		return UMetasoundInterfacesView::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMetasoundInterfacesView);
	UMetasoundInterfacesView::~UMetasoundInterfacesView() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Private_MetasoundEditor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Private_MetasoundEditor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMetasoundInterfacesView, UMetasoundInterfacesView::StaticClass, TEXT("UMetasoundInterfacesView"), &Z_Registration_Info_UClass_UMetasoundInterfacesView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetasoundInterfacesView), 2001159292U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Private_MetasoundEditor_h_2820146309(TEXT("/Script/MetasoundEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Private_MetasoundEditor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Private_MetasoundEditor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
