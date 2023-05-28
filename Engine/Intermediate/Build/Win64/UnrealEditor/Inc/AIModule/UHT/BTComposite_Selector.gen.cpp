// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/BehaviorTree/Composites/BTComposite_Selector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTComposite_Selector() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTComposite_Selector();
	AIMODULE_API UClass* Z_Construct_UClass_UBTComposite_Selector_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTCompositeNode();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBTComposite_Selector::StaticRegisterNativesUBTComposite_Selector()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTComposite_Selector);
	UClass* Z_Construct_UClass_UBTComposite_Selector_NoRegister()
	{
		return UBTComposite_Selector::StaticClass();
	}
	struct Z_Construct_UClass_UBTComposite_Selector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTComposite_Selector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTCompositeNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTComposite_Selector_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Selector composite node.\n * Selector Nodes execute their children from left to right, and will stop executing its children when one of their children succeeds.\n * If a Selector's child succeeds, the Selector succeeds. If all the Selector's children fail, the Selector fails.\n */" },
		{ "IncludePath", "BehaviorTree/Composites/BTComposite_Selector.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Composites/BTComposite_Selector.h" },
		{ "ToolTip", "Selector composite node.\nSelector Nodes execute their children from left to right, and will stop executing its children when one of their children succeeds.\nIf a Selector's child succeeds, the Selector succeeds. If all the Selector's children fail, the Selector fails." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTComposite_Selector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTComposite_Selector>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTComposite_Selector_Statics::ClassParams = {
		&UBTComposite_Selector::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTComposite_Selector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTComposite_Selector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTComposite_Selector()
	{
		if (!Z_Registration_Info_UClass_UBTComposite_Selector.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTComposite_Selector.OuterSingleton, Z_Construct_UClass_UBTComposite_Selector_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTComposite_Selector.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UBTComposite_Selector>()
	{
		return UBTComposite_Selector::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTComposite_Selector);
	UBTComposite_Selector::~UBTComposite_Selector() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_Selector_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_Selector_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTComposite_Selector, UBTComposite_Selector::StaticClass, TEXT("UBTComposite_Selector"), &Z_Registration_Info_UClass_UBTComposite_Selector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTComposite_Selector), 3508656175U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_Selector_h_2992538802(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_Selector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Composites_BTComposite_Selector_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
