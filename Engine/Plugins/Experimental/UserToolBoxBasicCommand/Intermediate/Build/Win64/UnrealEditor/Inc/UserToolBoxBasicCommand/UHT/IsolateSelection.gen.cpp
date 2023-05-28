// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IsolateSelection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIsolateSelection() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_UserToolBoxBasicCommand();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UIsolateSelection();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UIsolateSelection_NoRegister();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUTBBaseCommand();
// End Cross Module References
	void UIsolateSelection::StaticRegisterNativesUIsolateSelection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIsolateSelection);
	UClass* Z_Construct_UClass_UIsolateSelection_NoRegister()
	{
		return UIsolateSelection::StaticClass();
	}
	struct Z_Construct_UClass_UIsolateSelection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldOnlyAffectStaticMeshActor_MetaData[];
#endif
		static void NewProp_bShouldOnlyAffectStaticMeshActor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldOnlyAffectStaticMeshActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIsolateSelection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUTBBaseCommand,
		(UObject* (*)())Z_Construct_UPackage__Script_UserToolBoxBasicCommand,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsolateSelection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "IsolateSelection.h" },
		{ "ModuleRelativePath", "Public/IsolateSelection.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsolateSelection_Statics::NewProp_bShouldOnlyAffectStaticMeshActor_MetaData[] = {
		{ "Category", "Isolate Command" },
		{ "ModuleRelativePath", "Public/IsolateSelection.h" },
	};
#endif
	void Z_Construct_UClass_UIsolateSelection_Statics::NewProp_bShouldOnlyAffectStaticMeshActor_SetBit(void* Obj)
	{
		((UIsolateSelection*)Obj)->bShouldOnlyAffectStaticMeshActor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIsolateSelection_Statics::NewProp_bShouldOnlyAffectStaticMeshActor = { "bShouldOnlyAffectStaticMeshActor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UIsolateSelection), &Z_Construct_UClass_UIsolateSelection_Statics::NewProp_bShouldOnlyAffectStaticMeshActor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIsolateSelection_Statics::NewProp_bShouldOnlyAffectStaticMeshActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIsolateSelection_Statics::NewProp_bShouldOnlyAffectStaticMeshActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsolateSelection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsolateSelection_Statics::NewProp_bShouldOnlyAffectStaticMeshActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIsolateSelection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsolateSelection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsolateSelection_Statics::ClassParams = {
		&UIsolateSelection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIsolateSelection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIsolateSelection_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIsolateSelection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIsolateSelection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIsolateSelection()
	{
		if (!Z_Registration_Info_UClass_UIsolateSelection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsolateSelection.OuterSingleton, Z_Construct_UClass_UIsolateSelection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIsolateSelection.OuterSingleton;
	}
	template<> USERTOOLBOXBASICCOMMAND_API UClass* StaticClass<UIsolateSelection>()
	{
		return UIsolateSelection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIsolateSelection);
	UIsolateSelection::~UIsolateSelection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_IsolateSelection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_IsolateSelection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIsolateSelection, UIsolateSelection::StaticClass, TEXT("UIsolateSelection"), &Z_Registration_Info_UClass_UIsolateSelection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsolateSelection), 219196940U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_IsolateSelection_h_2575955409(TEXT("/Script/UserToolBoxBasicCommand"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_IsolateSelection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_IsolateSelection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
