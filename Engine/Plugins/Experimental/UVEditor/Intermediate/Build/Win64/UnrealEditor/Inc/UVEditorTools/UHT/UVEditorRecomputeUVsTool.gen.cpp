// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UVEditorRecomputeUVsTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUVEditorRecomputeUVsTool() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPolygroupLayersProperties_NoRegister();
	MODELINGOPERATORS_API UClass* Z_Construct_UClass_URecomputeUVsOpFactory_NoRegister();
	MODELINGOPERATORS_API UClass* Z_Construct_UClass_URecomputeUVsToolProperties_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UVEditorTools();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorRecomputeUVsTool();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorRecomputeUVsTool_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorRecomputeUVsToolBuilder();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorRecomputeUVsToolBuilder_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorToolMeshInput_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVToolSelectionAPI_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVToolSupportsSelection_NoRegister();
// End Cross Module References
	void UUVEditorRecomputeUVsToolBuilder::StaticRegisterNativesUUVEditorRecomputeUVsToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVEditorRecomputeUVsToolBuilder);
	UClass* Z_Construct_UClass_UUVEditorRecomputeUVsToolBuilder_NoRegister()
	{
		return UUVEditorRecomputeUVsToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UUVEditorRecomputeUVsToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVEditorRecomputeUVsToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorRecomputeUVsToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "UVEditorRecomputeUVsTool.h" },
		{ "ModuleRelativePath", "Public/UVEditorRecomputeUVsTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVEditorRecomputeUVsToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVEditorRecomputeUVsToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVEditorRecomputeUVsToolBuilder_Statics::ClassParams = {
		&UUVEditorRecomputeUVsToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUVEditorRecomputeUVsToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorRecomputeUVsToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVEditorRecomputeUVsToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UUVEditorRecomputeUVsToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVEditorRecomputeUVsToolBuilder.OuterSingleton, Z_Construct_UClass_UUVEditorRecomputeUVsToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVEditorRecomputeUVsToolBuilder.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UUVEditorRecomputeUVsToolBuilder>()
	{
		return UUVEditorRecomputeUVsToolBuilder::StaticClass();
	}
	UUVEditorRecomputeUVsToolBuilder::UUVEditorRecomputeUVsToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVEditorRecomputeUVsToolBuilder);
	UUVEditorRecomputeUVsToolBuilder::~UUVEditorRecomputeUVsToolBuilder() {}
	void UUVEditorRecomputeUVsTool::StaticRegisterNativesUUVEditorRecomputeUVsTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVEditorRecomputeUVsTool);
	UClass* Z_Construct_UClass_UUVEditorRecomputeUVsTool_NoRegister()
	{
		return UUVEditorRecomputeUVsTool::StaticClass();
	}
	struct Z_Construct_UClass_UUVEditorRecomputeUVsTool_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolygroupLayerProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PolygroupLayerProperties;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Factories_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Factories_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Factories;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVToolSelectionAPI_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UVToolSelectionAPI;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVEditorRecomputeUVsTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveTool,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorRecomputeUVsTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UUVEditorRecomputeUVsTool Recomputes UVs based on existing segmentations of the mesh\n */" },
		{ "IncludePath", "UVEditorRecomputeUVsTool.h" },
		{ "ModuleRelativePath", "Public/UVEditorRecomputeUVsTool.h" },
		{ "ToolTip", "UUVEditorRecomputeUVsTool Recomputes UVs based on existing segmentations of the mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorRecomputeUVsTool_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UUVEditorToolMeshInput_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorRecomputeUVsTool_Statics::NewProp_Targets_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVEditorRecomputeUVsTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUVEditorRecomputeUVsTool_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorRecomputeUVsTool, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUVEditorRecomputeUVsTool_Statics::NewProp_Targets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorRecomputeUVsTool_Statics::NewProp_Targets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorRecomputeUVsTool_Statics::NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVEditorRecomputeUVsTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorRecomputeUVsTool_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorRecomputeUVsTool, Settings), Z_Construct_UClass_URecomputeUVsToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVEditorRecomputeUVsTool_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorRecomputeUVsTool_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorRecomputeUVsTool_Statics::NewProp_PolygroupLayerProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVEditorRecomputeUVsTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorRecomputeUVsTool_Statics::NewProp_PolygroupLayerProperties = { "PolygroupLayerProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorRecomputeUVsTool, PolygroupLayerProperties), Z_Construct_UClass_UPolygroupLayersProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVEditorRecomputeUVsTool_Statics::NewProp_PolygroupLayerProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorRecomputeUVsTool_Statics::NewProp_PolygroupLayerProperties_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorRecomputeUVsTool_Statics::NewProp_Factories_Inner = { "Factories", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URecomputeUVsOpFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorRecomputeUVsTool_Statics::NewProp_Factories_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVEditorRecomputeUVsTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUVEditorRecomputeUVsTool_Statics::NewProp_Factories = { "Factories", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorRecomputeUVsTool, Factories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUVEditorRecomputeUVsTool_Statics::NewProp_Factories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorRecomputeUVsTool_Statics::NewProp_Factories_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorRecomputeUVsTool_Statics::NewProp_UVToolSelectionAPI_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVEditorRecomputeUVsTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorRecomputeUVsTool_Statics::NewProp_UVToolSelectionAPI = { "UVToolSelectionAPI", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorRecomputeUVsTool, UVToolSelectionAPI), Z_Construct_UClass_UUVToolSelectionAPI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVEditorRecomputeUVsTool_Statics::NewProp_UVToolSelectionAPI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorRecomputeUVsTool_Statics::NewProp_UVToolSelectionAPI_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUVEditorRecomputeUVsTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorRecomputeUVsTool_Statics::NewProp_Targets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorRecomputeUVsTool_Statics::NewProp_Targets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorRecomputeUVsTool_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorRecomputeUVsTool_Statics::NewProp_PolygroupLayerProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorRecomputeUVsTool_Statics::NewProp_Factories_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorRecomputeUVsTool_Statics::NewProp_Factories,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorRecomputeUVsTool_Statics::NewProp_UVToolSelectionAPI,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UUVEditorRecomputeUVsTool_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UUVToolSupportsSelection_NoRegister, (int32)VTABLE_OFFSET(UUVEditorRecomputeUVsTool, IUVToolSupportsSelection), false },  // 3987422184
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVEditorRecomputeUVsTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVEditorRecomputeUVsTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVEditorRecomputeUVsTool_Statics::ClassParams = {
		&UUVEditorRecomputeUVsTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUVEditorRecomputeUVsTool_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorRecomputeUVsTool_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UUVEditorRecomputeUVsTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorRecomputeUVsTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVEditorRecomputeUVsTool()
	{
		if (!Z_Registration_Info_UClass_UUVEditorRecomputeUVsTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVEditorRecomputeUVsTool.OuterSingleton, Z_Construct_UClass_UUVEditorRecomputeUVsTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVEditorRecomputeUVsTool.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UUVEditorRecomputeUVsTool>()
	{
		return UUVEditorRecomputeUVsTool::StaticClass();
	}
	UUVEditorRecomputeUVsTool::UUVEditorRecomputeUVsTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVEditorRecomputeUVsTool);
	UUVEditorRecomputeUVsTool::~UUVEditorRecomputeUVsTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_UVEditorRecomputeUVsTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_UVEditorRecomputeUVsTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUVEditorRecomputeUVsToolBuilder, UUVEditorRecomputeUVsToolBuilder::StaticClass, TEXT("UUVEditorRecomputeUVsToolBuilder"), &Z_Registration_Info_UClass_UUVEditorRecomputeUVsToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVEditorRecomputeUVsToolBuilder), 2334731918U) },
		{ Z_Construct_UClass_UUVEditorRecomputeUVsTool, UUVEditorRecomputeUVsTool::StaticClass, TEXT("UUVEditorRecomputeUVsTool"), &Z_Registration_Info_UClass_UUVEditorRecomputeUVsTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVEditorRecomputeUVsTool), 2185566716U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_UVEditorRecomputeUVsTool_h_786561008(TEXT("/Script/UVEditorTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_UVEditorRecomputeUVsTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_UVEditorRecomputeUVsTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
