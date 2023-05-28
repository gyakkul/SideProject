// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SequencerAnimEditPivotTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequencerAnimEditPivotTool() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmo_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMultiSelectionTool();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleClickInputBehavior_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformProxy_NoRegister();
	SEQUENCERANIMTOOLS_API UClass* Z_Construct_UClass_UBaseSequencerAnimTool_NoRegister();
	SEQUENCERANIMTOOLS_API UClass* Z_Construct_UClass_USequencerPivotTool();
	SEQUENCERANIMTOOLS_API UClass* Z_Construct_UClass_USequencerPivotTool_NoRegister();
	SEQUENCERANIMTOOLS_API UClass* Z_Construct_UClass_USequencerPivotToolBuilder();
	SEQUENCERANIMTOOLS_API UClass* Z_Construct_UClass_USequencerPivotToolBuilder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SequencerAnimTools();
// End Cross Module References
	void USequencerPivotToolBuilder::StaticRegisterNativesUSequencerPivotToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USequencerPivotToolBuilder);
	UClass* Z_Construct_UClass_USequencerPivotToolBuilder_NoRegister()
	{
		return USequencerPivotToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_USequencerPivotToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USequencerPivotToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_SequencerAnimTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerPivotToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Builder for USequencerPivotTool\n */" },
		{ "IncludePath", "SequencerAnimEditPivotTool.h" },
		{ "ModuleRelativePath", "Public/SequencerAnimEditPivotTool.h" },
		{ "ToolTip", "Builder for USequencerPivotTool" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USequencerPivotToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USequencerPivotToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USequencerPivotToolBuilder_Statics::ClassParams = {
		&USequencerPivotToolBuilder::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USequencerPivotToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerPivotToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USequencerPivotToolBuilder()
	{
		if (!Z_Registration_Info_UClass_USequencerPivotToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USequencerPivotToolBuilder.OuterSingleton, Z_Construct_UClass_USequencerPivotToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USequencerPivotToolBuilder.OuterSingleton;
	}
	template<> SEQUENCERANIMTOOLS_API UClass* StaticClass<USequencerPivotToolBuilder>()
	{
		return USequencerPivotToolBuilder::StaticClass();
	}
	USequencerPivotToolBuilder::USequencerPivotToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USequencerPivotToolBuilder);
	USequencerPivotToolBuilder::~USequencerPivotToolBuilder() {}
	void USequencerPivotTool::StaticRegisterNativesUSequencerPivotTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USequencerPivotTool);
	UClass* Z_Construct_UClass_USequencerPivotTool_NoRegister()
	{
		return USequencerPivotTool::StaticClass();
	}
	struct Z_Construct_UClass_USequencerPivotTool_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformProxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransformProxy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformGizmo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransformGizmo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USequencerPivotTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMultiSelectionTool,
		(UObject* (*)())Z_Construct_UPackage__Script_SequencerAnimTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerPivotTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\nPivot tool class\n */" },
		{ "IncludePath", "SequencerAnimEditPivotTool.h" },
		{ "ModuleRelativePath", "Public/SequencerAnimEditPivotTool.h" },
		{ "ToolTip", "Pivot tool class" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerPivotTool_Statics::NewProp_ClickBehavior_MetaData[] = {
		{ "ModuleRelativePath", "Public/SequencerAnimEditPivotTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USequencerPivotTool_Statics::NewProp_ClickBehavior = { "ClickBehavior", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequencerPivotTool, ClickBehavior), Z_Construct_UClass_USingleClickInputBehavior_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USequencerPivotTool_Statics::NewProp_ClickBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerPivotTool_Statics::NewProp_ClickBehavior_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerPivotTool_Statics::NewProp_TransformProxy_MetaData[] = {
		{ "ModuleRelativePath", "Public/SequencerAnimEditPivotTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USequencerPivotTool_Statics::NewProp_TransformProxy = { "TransformProxy", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequencerPivotTool, TransformProxy), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USequencerPivotTool_Statics::NewProp_TransformProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerPivotTool_Statics::NewProp_TransformProxy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerPivotTool_Statics::NewProp_TransformGizmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/SequencerAnimEditPivotTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USequencerPivotTool_Statics::NewProp_TransformGizmo = { "TransformGizmo", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequencerPivotTool, TransformGizmo), Z_Construct_UClass_UCombinedTransformGizmo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USequencerPivotTool_Statics::NewProp_TransformGizmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerPivotTool_Statics::NewProp_TransformGizmo_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USequencerPivotTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerPivotTool_Statics::NewProp_ClickBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerPivotTool_Statics::NewProp_TransformProxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerPivotTool_Statics::NewProp_TransformGizmo,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USequencerPivotTool_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBaseSequencerAnimTool_NoRegister, (int32)VTABLE_OFFSET(USequencerPivotTool, IBaseSequencerAnimTool), false },  // 4068982606
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USequencerPivotTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USequencerPivotTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USequencerPivotTool_Statics::ClassParams = {
		&USequencerPivotTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USequencerPivotTool_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USequencerPivotTool_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USequencerPivotTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerPivotTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USequencerPivotTool()
	{
		if (!Z_Registration_Info_UClass_USequencerPivotTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USequencerPivotTool.OuterSingleton, Z_Construct_UClass_USequencerPivotTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USequencerPivotTool.OuterSingleton;
	}
	template<> SEQUENCERANIMTOOLS_API UClass* StaticClass<USequencerPivotTool>()
	{
		return USequencerPivotTool::StaticClass();
	}
	USequencerPivotTool::USequencerPivotTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USequencerPivotTool);
	USequencerPivotTool::~USequencerPivotTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_SequencerAnimTools_Source_SequencerAnimTools_Public_SequencerAnimEditPivotTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_SequencerAnimTools_Source_SequencerAnimTools_Public_SequencerAnimEditPivotTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USequencerPivotToolBuilder, USequencerPivotToolBuilder::StaticClass, TEXT("USequencerPivotToolBuilder"), &Z_Registration_Info_UClass_USequencerPivotToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USequencerPivotToolBuilder), 2884924975U) },
		{ Z_Construct_UClass_USequencerPivotTool, USequencerPivotTool::StaticClass, TEXT("USequencerPivotTool"), &Z_Registration_Info_UClass_USequencerPivotTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USequencerPivotTool), 3793036955U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_SequencerAnimTools_Source_SequencerAnimTools_Public_SequencerAnimEditPivotTool_h_335023512(TEXT("/Script/SequencerAnimTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_SequencerAnimTools_Source_SequencerAnimTools_Public_SequencerAnimEditPivotTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_SequencerAnimTools_Source_SequencerAnimTools_Public_SequencerAnimEditPivotTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
