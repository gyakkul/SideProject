// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UVEditorLayoutTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUVEditorLayoutTool() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
	MODELINGOPERATORS_API UClass* Z_Construct_UClass_UUVLayoutOperatorFactory_NoRegister();
	MODELINGOPERATORS_API UClass* Z_Construct_UClass_UUVLayoutProperties_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UVEditorTools();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorLayoutTool();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorLayoutTool_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorLayoutToolBuilder();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorLayoutToolBuilder_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorToolMeshInput_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVToolSelectionAPI_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVToolSupportsSelection_NoRegister();
// End Cross Module References
	void UUVEditorLayoutToolBuilder::StaticRegisterNativesUUVEditorLayoutToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVEditorLayoutToolBuilder);
	UClass* Z_Construct_UClass_UUVEditorLayoutToolBuilder_NoRegister()
	{
		return UUVEditorLayoutToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UUVEditorLayoutToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVEditorLayoutToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorLayoutToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UVEditorLayoutTool.h" },
		{ "ModuleRelativePath", "Public/UVEditorLayoutTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVEditorLayoutToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVEditorLayoutToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVEditorLayoutToolBuilder_Statics::ClassParams = {
		&UUVEditorLayoutToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUVEditorLayoutToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorLayoutToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVEditorLayoutToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UUVEditorLayoutToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVEditorLayoutToolBuilder.OuterSingleton, Z_Construct_UClass_UUVEditorLayoutToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVEditorLayoutToolBuilder.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UUVEditorLayoutToolBuilder>()
	{
		return UUVEditorLayoutToolBuilder::StaticClass();
	}
	UUVEditorLayoutToolBuilder::UUVEditorLayoutToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVEditorLayoutToolBuilder);
	UUVEditorLayoutToolBuilder::~UUVEditorLayoutToolBuilder() {}
	void UUVEditorLayoutTool::StaticRegisterNativesUUVEditorLayoutTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVEditorLayoutTool);
	UClass* Z_Construct_UClass_UUVEditorLayoutTool_NoRegister()
	{
		return UUVEditorLayoutTool::StaticClass();
	}
	struct Z_Construct_UClass_UUVEditorLayoutTool_Statics
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
	UObject* (*const Z_Construct_UClass_UUVEditorLayoutTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveTool,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorLayoutTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UVEditorLayoutTool.h" },
		{ "ModuleRelativePath", "Public/UVEditorLayoutTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorLayoutTool_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UUVEditorToolMeshInput_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorLayoutTool_Statics::NewProp_Targets_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVEditorLayoutTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUVEditorLayoutTool_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorLayoutTool, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUVEditorLayoutTool_Statics::NewProp_Targets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorLayoutTool_Statics::NewProp_Targets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorLayoutTool_Statics::NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVEditorLayoutTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorLayoutTool_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorLayoutTool, Settings), Z_Construct_UClass_UUVLayoutProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVEditorLayoutTool_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorLayoutTool_Statics::NewProp_Settings_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorLayoutTool_Statics::NewProp_Factories_Inner = { "Factories", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UUVLayoutOperatorFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorLayoutTool_Statics::NewProp_Factories_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVEditorLayoutTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUVEditorLayoutTool_Statics::NewProp_Factories = { "Factories", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorLayoutTool, Factories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUVEditorLayoutTool_Statics::NewProp_Factories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorLayoutTool_Statics::NewProp_Factories_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorLayoutTool_Statics::NewProp_UVToolSelectionAPI_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVEditorLayoutTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorLayoutTool_Statics::NewProp_UVToolSelectionAPI = { "UVToolSelectionAPI", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorLayoutTool, UVToolSelectionAPI), Z_Construct_UClass_UUVToolSelectionAPI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVEditorLayoutTool_Statics::NewProp_UVToolSelectionAPI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorLayoutTool_Statics::NewProp_UVToolSelectionAPI_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUVEditorLayoutTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorLayoutTool_Statics::NewProp_Targets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorLayoutTool_Statics::NewProp_Targets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorLayoutTool_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorLayoutTool_Statics::NewProp_Factories_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorLayoutTool_Statics::NewProp_Factories,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorLayoutTool_Statics::NewProp_UVToolSelectionAPI,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UUVEditorLayoutTool_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UUVToolSupportsSelection_NoRegister, (int32)VTABLE_OFFSET(UUVEditorLayoutTool, IUVToolSupportsSelection), false },  // 3987422184
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVEditorLayoutTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVEditorLayoutTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVEditorLayoutTool_Statics::ClassParams = {
		&UUVEditorLayoutTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUVEditorLayoutTool_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorLayoutTool_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UUVEditorLayoutTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorLayoutTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVEditorLayoutTool()
	{
		if (!Z_Registration_Info_UClass_UUVEditorLayoutTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVEditorLayoutTool.OuterSingleton, Z_Construct_UClass_UUVEditorLayoutTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVEditorLayoutTool.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UUVEditorLayoutTool>()
	{
		return UUVEditorLayoutTool::StaticClass();
	}
	UUVEditorLayoutTool::UUVEditorLayoutTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVEditorLayoutTool);
	UUVEditorLayoutTool::~UUVEditorLayoutTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_UVEditorLayoutTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_UVEditorLayoutTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUVEditorLayoutToolBuilder, UUVEditorLayoutToolBuilder::StaticClass, TEXT("UUVEditorLayoutToolBuilder"), &Z_Registration_Info_UClass_UUVEditorLayoutToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVEditorLayoutToolBuilder), 3913079944U) },
		{ Z_Construct_UClass_UUVEditorLayoutTool, UUVEditorLayoutTool::StaticClass, TEXT("UUVEditorLayoutTool"), &Z_Registration_Info_UClass_UUVEditorLayoutTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVEditorLayoutTool), 4086672389U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_UVEditorLayoutTool_h_901198056(TEXT("/Script/UVEditorTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_UVEditorLayoutTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_UVEditorLayoutTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
