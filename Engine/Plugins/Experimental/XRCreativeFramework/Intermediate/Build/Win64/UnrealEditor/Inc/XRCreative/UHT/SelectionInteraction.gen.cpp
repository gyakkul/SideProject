// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ITF/SelectionInteraction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelectionInteraction() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputBehaviorSet_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputBehaviorSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleClickInputBehavior_NoRegister();
	UPackage* Z_Construct_UPackage__Script_XRCreative();
	XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativeSelectionInteraction();
	XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativeSelectionInteraction_NoRegister();
// End Cross Module References
	void UXRCreativeSelectionInteraction::StaticRegisterNativesUXRCreativeSelectionInteraction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UXRCreativeSelectionInteraction);
	UClass* Z_Construct_UClass_UXRCreativeSelectionInteraction_NoRegister()
	{
		return UXRCreativeSelectionInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UXRCreativeSelectionInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClickBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ClickBehavior;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BehaviorSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXRCreativeSelectionInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_XRCreative,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativeSelectionInteraction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ITF/SelectionInteraction.h" },
		{ "ModuleRelativePath", "Private/ITF/SelectionInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativeSelectionInteraction_Statics::NewProp_ClickBehavior_MetaData[] = {
		{ "Comment", "// click-to-select behavior\n" },
		{ "ModuleRelativePath", "Private/ITF/SelectionInteraction.h" },
		{ "ToolTip", "click-to-select behavior" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UXRCreativeSelectionInteraction_Statics::NewProp_ClickBehavior = { "ClickBehavior", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UXRCreativeSelectionInteraction, ClickBehavior), Z_Construct_UClass_USingleClickInputBehavior_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UXRCreativeSelectionInteraction_Statics::NewProp_ClickBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeSelectionInteraction_Statics::NewProp_ClickBehavior_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativeSelectionInteraction_Statics::NewProp_BehaviorSet_MetaData[] = {
		{ "Comment", "// set of all behaviors, will be passed up to UInputRouter\n" },
		{ "ModuleRelativePath", "Private/ITF/SelectionInteraction.h" },
		{ "ToolTip", "set of all behaviors, will be passed up to UInputRouter" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UXRCreativeSelectionInteraction_Statics::NewProp_BehaviorSet = { "BehaviorSet", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UXRCreativeSelectionInteraction, BehaviorSet), Z_Construct_UClass_UInputBehaviorSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UXRCreativeSelectionInteraction_Statics::NewProp_BehaviorSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeSelectionInteraction_Statics::NewProp_BehaviorSet_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UXRCreativeSelectionInteraction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRCreativeSelectionInteraction_Statics::NewProp_ClickBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRCreativeSelectionInteraction_Statics::NewProp_BehaviorSet,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UXRCreativeSelectionInteraction_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInputBehaviorSource_NoRegister, (int32)VTABLE_OFFSET(UXRCreativeSelectionInteraction, IInputBehaviorSource), false },  // 4222810999
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXRCreativeSelectionInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXRCreativeSelectionInteraction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UXRCreativeSelectionInteraction_Statics::ClassParams = {
		&UXRCreativeSelectionInteraction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UXRCreativeSelectionInteraction_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeSelectionInteraction_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UXRCreativeSelectionInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeSelectionInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXRCreativeSelectionInteraction()
	{
		if (!Z_Registration_Info_UClass_UXRCreativeSelectionInteraction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UXRCreativeSelectionInteraction.OuterSingleton, Z_Construct_UClass_UXRCreativeSelectionInteraction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UXRCreativeSelectionInteraction.OuterSingleton;
	}
	template<> XRCREATIVE_API UClass* StaticClass<UXRCreativeSelectionInteraction>()
	{
		return UXRCreativeSelectionInteraction::StaticClass();
	}
	UXRCreativeSelectionInteraction::UXRCreativeSelectionInteraction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXRCreativeSelectionInteraction);
	UXRCreativeSelectionInteraction::~UXRCreativeSelectionInteraction() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Private_ITF_SelectionInteraction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Private_ITF_SelectionInteraction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UXRCreativeSelectionInteraction, UXRCreativeSelectionInteraction::StaticClass, TEXT("UXRCreativeSelectionInteraction"), &Z_Registration_Info_UClass_UXRCreativeSelectionInteraction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UXRCreativeSelectionInteraction), 153377930U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Private_ITF_SelectionInteraction_h_587077759(TEXT("/Script/XRCreative"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Private_ITF_SelectionInteraction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Private_ITF_SelectionInteraction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
