// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UVSelectTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUVSelectTool() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmo_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolNestedAcceptCancelAPI_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UVEditorTools();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorMeshSelectionMechanic_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorToolMeshInput_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVSelectTool();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVSelectTool_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVSelectToolBuilder();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVSelectToolBuilder_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVToolEmitChangeAPI_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVToolSelectionAPI_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVToolSupportsSelection_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVToolViewportButtonsAPI_NoRegister();
// End Cross Module References
	void UUVSelectToolBuilder::StaticRegisterNativesUUVSelectToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVSelectToolBuilder);
	UClass* Z_Construct_UClass_UUVSelectToolBuilder_NoRegister()
	{
		return UUVSelectToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UUVSelectToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVSelectToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVSelectToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UVSelectTool.h" },
		{ "ModuleRelativePath", "Public/UVSelectTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVSelectToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVSelectToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVSelectToolBuilder_Statics::ClassParams = {
		&UUVSelectToolBuilder::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UUVSelectToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVSelectToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVSelectToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UUVSelectToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVSelectToolBuilder.OuterSingleton, Z_Construct_UClass_UUVSelectToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVSelectToolBuilder.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UUVSelectToolBuilder>()
	{
		return UUVSelectToolBuilder::StaticClass();
	}
	UUVSelectToolBuilder::UUVSelectToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVSelectToolBuilder);
	UUVSelectToolBuilder::~UUVSelectToolBuilder() {}
	void UUVSelectTool::StaticRegisterNativesUUVSelectTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVSelectTool);
	UClass* Z_Construct_UClass_UUVSelectTool_NoRegister()
	{
		return UUVSelectTool::StaticClass();
	}
	struct Z_Construct_UClass_UUVSelectTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Targets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Targets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewportButtonsAPI_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ViewportButtonsAPI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmitChangeAPI_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EmitChangeAPI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionAPI_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SelectionAPI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionMechanic_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SelectionMechanic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformGizmo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransformGizmo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVSelectTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveTool,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVSelectTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The tool in the UV editor that secretly runs when other tools are not running. It uses the\n * selection api to allow the user to select elements, and has a gizmo that can be used to\n * transform these elements.\n */" },
		{ "IncludePath", "UVSelectTool.h" },
		{ "ModuleRelativePath", "Public/UVSelectTool.h" },
		{ "ToolTip", "The tool in the UV editor that secretly runs when other tools are not running. It uses the\nselection api to allow the user to select elements, and has a gizmo that can be used to\ntransform these elements." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVSelectTool_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UUVEditorToolMeshInput_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVSelectTool_Statics::NewProp_Targets_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVSelectTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUVSelectTool_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVSelectTool, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUVSelectTool_Statics::NewProp_Targets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVSelectTool_Statics::NewProp_Targets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVSelectTool_Statics::NewProp_ViewportButtonsAPI_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVSelectTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVSelectTool_Statics::NewProp_ViewportButtonsAPI = { "ViewportButtonsAPI", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVSelectTool, ViewportButtonsAPI), Z_Construct_UClass_UUVToolViewportButtonsAPI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVSelectTool_Statics::NewProp_ViewportButtonsAPI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVSelectTool_Statics::NewProp_ViewportButtonsAPI_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVSelectTool_Statics::NewProp_EmitChangeAPI_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVSelectTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVSelectTool_Statics::NewProp_EmitChangeAPI = { "EmitChangeAPI", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVSelectTool, EmitChangeAPI), Z_Construct_UClass_UUVToolEmitChangeAPI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVSelectTool_Statics::NewProp_EmitChangeAPI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVSelectTool_Statics::NewProp_EmitChangeAPI_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVSelectTool_Statics::NewProp_SelectionAPI_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVSelectTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVSelectTool_Statics::NewProp_SelectionAPI = { "SelectionAPI", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVSelectTool, SelectionAPI), Z_Construct_UClass_UUVToolSelectionAPI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVSelectTool_Statics::NewProp_SelectionAPI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVSelectTool_Statics::NewProp_SelectionAPI_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVSelectTool_Statics::NewProp_SelectionMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVSelectTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVSelectTool_Statics::NewProp_SelectionMechanic = { "SelectionMechanic", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVSelectTool, SelectionMechanic), Z_Construct_UClass_UUVEditorMeshSelectionMechanic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVSelectTool_Statics::NewProp_SelectionMechanic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVSelectTool_Statics::NewProp_SelectionMechanic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVSelectTool_Statics::NewProp_TransformGizmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVSelectTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVSelectTool_Statics::NewProp_TransformGizmo = { "TransformGizmo", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVSelectTool, TransformGizmo), Z_Construct_UClass_UCombinedTransformGizmo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVSelectTool_Statics::NewProp_TransformGizmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVSelectTool_Statics::NewProp_TransformGizmo_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUVSelectTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVSelectTool_Statics::NewProp_Targets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVSelectTool_Statics::NewProp_Targets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVSelectTool_Statics::NewProp_ViewportButtonsAPI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVSelectTool_Statics::NewProp_EmitChangeAPI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVSelectTool_Statics::NewProp_SelectionAPI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVSelectTool_Statics::NewProp_SelectionMechanic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVSelectTool_Statics::NewProp_TransformGizmo,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UUVSelectTool_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractiveToolNestedAcceptCancelAPI_NoRegister, (int32)VTABLE_OFFSET(UUVSelectTool, IInteractiveToolNestedAcceptCancelAPI), false },  // 1745745235
			{ Z_Construct_UClass_UUVToolSupportsSelection_NoRegister, (int32)VTABLE_OFFSET(UUVSelectTool, IUVToolSupportsSelection), false },  // 3987422184
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVSelectTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVSelectTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVSelectTool_Statics::ClassParams = {
		&UUVSelectTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUVSelectTool_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUVSelectTool_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UUVSelectTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVSelectTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVSelectTool()
	{
		if (!Z_Registration_Info_UClass_UUVSelectTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVSelectTool.OuterSingleton, Z_Construct_UClass_UUVSelectTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVSelectTool.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UUVSelectTool>()
	{
		return UUVSelectTool::StaticClass();
	}
	UUVSelectTool::UUVSelectTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVSelectTool);
	UUVSelectTool::~UUVSelectTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_UVSelectTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_UVSelectTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUVSelectToolBuilder, UUVSelectToolBuilder::StaticClass, TEXT("UUVSelectToolBuilder"), &Z_Registration_Info_UClass_UUVSelectToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVSelectToolBuilder), 2470411882U) },
		{ Z_Construct_UClass_UUVSelectTool, UUVSelectTool::StaticClass, TEXT("UUVSelectTool"), &Z_Registration_Info_UClass_UUVSelectTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVSelectTool), 216302736U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_UVSelectTool_h_796740300(TEXT("/Script/UVEditorTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_UVSelectTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_UVSelectTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
