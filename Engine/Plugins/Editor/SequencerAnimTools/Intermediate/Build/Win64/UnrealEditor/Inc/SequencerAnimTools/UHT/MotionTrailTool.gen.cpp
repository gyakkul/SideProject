// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionTrailTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotionTrailTool() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmo_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMultiSelectionTool();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleClickInputBehavior_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformProxy_NoRegister();
	SEQUENCERANIMTOOLS_API UClass* Z_Construct_UClass_UBaseSequencerAnimTool_NoRegister();
	SEQUENCERANIMTOOLS_API UClass* Z_Construct_UClass_UMotionTrailTool();
	SEQUENCERANIMTOOLS_API UClass* Z_Construct_UClass_UMotionTrailTool_NoRegister();
	SEQUENCERANIMTOOLS_API UClass* Z_Construct_UClass_UMotionTrailToolBuilder();
	SEQUENCERANIMTOOLS_API UClass* Z_Construct_UClass_UMotionTrailToolBuilder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SequencerAnimTools();
// End Cross Module References
	void UMotionTrailToolBuilder::StaticRegisterNativesUMotionTrailToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMotionTrailToolBuilder);
	UClass* Z_Construct_UClass_UMotionTrailToolBuilder_NoRegister()
	{
		return UMotionTrailToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UMotionTrailToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMotionTrailToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_SequencerAnimTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionTrailToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Builder for UMotionTrailTool\n */" },
		{ "IncludePath", "MotionTrailTool.h" },
		{ "ModuleRelativePath", "Public/MotionTrailTool.h" },
		{ "ToolTip", "Builder for UMotionTrailTool" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMotionTrailToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMotionTrailToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMotionTrailToolBuilder_Statics::ClassParams = {
		&UMotionTrailToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMotionTrailToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionTrailToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMotionTrailToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UMotionTrailToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMotionTrailToolBuilder.OuterSingleton, Z_Construct_UClass_UMotionTrailToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMotionTrailToolBuilder.OuterSingleton;
	}
	template<> SEQUENCERANIMTOOLS_API UClass* StaticClass<UMotionTrailToolBuilder>()
	{
		return UMotionTrailToolBuilder::StaticClass();
	}
	UMotionTrailToolBuilder::UMotionTrailToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMotionTrailToolBuilder);
	UMotionTrailToolBuilder::~UMotionTrailToolBuilder() {}
	void UMotionTrailTool::StaticRegisterNativesUMotionTrailTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMotionTrailTool);
	UClass* Z_Construct_UClass_UMotionTrailTool_NoRegister()
	{
		return UMotionTrailTool::StaticClass();
	}
	struct Z_Construct_UClass_UMotionTrailTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformProxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransformProxy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformGizmo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransformGizmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftClickBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LeftClickBehavior;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightClickBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RightClickBehavior;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMotionTrailTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMultiSelectionTool,
		(UObject* (*)())Z_Construct_UPackage__Script_SequencerAnimTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionTrailTool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MotionTrailTool.h" },
		{ "ModuleRelativePath", "Public/MotionTrailTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionTrailTool_Statics::NewProp_TransformProxy_MetaData[] = {
		{ "Comment", "// Support for gizmo. Since the points aren't individual components, we don't actually use UTransformProxy\n// for the transform forwarding- we just use it for the callbacks.\n" },
		{ "ModuleRelativePath", "Public/MotionTrailTool.h" },
		{ "ToolTip", "Support for gizmo. Since the points aren't individual components, we don't actually use UTransformProxy\nfor the transform forwarding- we just use it for the callbacks." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMotionTrailTool_Statics::NewProp_TransformProxy = { "TransformProxy", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotionTrailTool, TransformProxy), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMotionTrailTool_Statics::NewProp_TransformProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionTrailTool_Statics::NewProp_TransformProxy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionTrailTool_Statics::NewProp_TransformGizmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionTrailTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMotionTrailTool_Statics::NewProp_TransformGizmo = { "TransformGizmo", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotionTrailTool, TransformGizmo), Z_Construct_UClass_UCombinedTransformGizmo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMotionTrailTool_Statics::NewProp_TransformGizmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionTrailTool_Statics::NewProp_TransformGizmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionTrailTool_Statics::NewProp_LeftClickBehavior_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionTrailTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMotionTrailTool_Statics::NewProp_LeftClickBehavior = { "LeftClickBehavior", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotionTrailTool, LeftClickBehavior), Z_Construct_UClass_USingleClickInputBehavior_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMotionTrailTool_Statics::NewProp_LeftClickBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionTrailTool_Statics::NewProp_LeftClickBehavior_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionTrailTool_Statics::NewProp_RightClickBehavior_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionTrailTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMotionTrailTool_Statics::NewProp_RightClickBehavior = { "RightClickBehavior", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotionTrailTool, RightClickBehavior), Z_Construct_UClass_USingleClickInputBehavior_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMotionTrailTool_Statics::NewProp_RightClickBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionTrailTool_Statics::NewProp_RightClickBehavior_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMotionTrailTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionTrailTool_Statics::NewProp_TransformProxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionTrailTool_Statics::NewProp_TransformGizmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionTrailTool_Statics::NewProp_LeftClickBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionTrailTool_Statics::NewProp_RightClickBehavior,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMotionTrailTool_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBaseSequencerAnimTool_NoRegister, (int32)VTABLE_OFFSET(UMotionTrailTool, IBaseSequencerAnimTool), false },  // 4068982606
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMotionTrailTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMotionTrailTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMotionTrailTool_Statics::ClassParams = {
		&UMotionTrailTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMotionTrailTool_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMotionTrailTool_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMotionTrailTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionTrailTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMotionTrailTool()
	{
		if (!Z_Registration_Info_UClass_UMotionTrailTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMotionTrailTool.OuterSingleton, Z_Construct_UClass_UMotionTrailTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMotionTrailTool.OuterSingleton;
	}
	template<> SEQUENCERANIMTOOLS_API UClass* StaticClass<UMotionTrailTool>()
	{
		return UMotionTrailTool::StaticClass();
	}
	UMotionTrailTool::UMotionTrailTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMotionTrailTool);
	UMotionTrailTool::~UMotionTrailTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_SequencerAnimTools_Source_SequencerAnimTools_Public_MotionTrailTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_SequencerAnimTools_Source_SequencerAnimTools_Public_MotionTrailTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMotionTrailToolBuilder, UMotionTrailToolBuilder::StaticClass, TEXT("UMotionTrailToolBuilder"), &Z_Registration_Info_UClass_UMotionTrailToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMotionTrailToolBuilder), 3908948524U) },
		{ Z_Construct_UClass_UMotionTrailTool, UMotionTrailTool::StaticClass, TEXT("UMotionTrailTool"), &Z_Registration_Info_UClass_UMotionTrailTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMotionTrailTool), 3745675462U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_SequencerAnimTools_Source_SequencerAnimTools_Public_MotionTrailTool_h_3263739084(TEXT("/Script/SequencerAnimTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_SequencerAnimTools_Source_SequencerAnimTools_Public_MotionTrailTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_SequencerAnimTools_Source_SequencerAnimTools_Public_MotionTrailTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
