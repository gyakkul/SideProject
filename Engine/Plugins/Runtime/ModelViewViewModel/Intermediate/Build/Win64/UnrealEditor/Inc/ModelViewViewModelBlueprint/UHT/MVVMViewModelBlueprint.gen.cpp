// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewModel/MVVMViewModelBlueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMVVMViewModelBlueprint() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	MODELVIEWVIEWMODELBLUEPRINT_API UClass* Z_Construct_UClass_UMVVMViewModelBlueprint();
	MODELVIEWVIEWMODELBLUEPRINT_API UClass* Z_Construct_UClass_UMVVMViewModelBlueprint_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelViewViewModelBlueprint();
// End Cross Module References
	void UMVVMViewModelBlueprint::StaticRegisterNativesUMVVMViewModelBlueprint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMVVMViewModelBlueprint);
	UClass* Z_Construct_UClass_UMVVMViewModelBlueprint_NoRegister()
	{
		return UMVVMViewModelBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UMVVMViewModelBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TemporaryGraph_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemporaryGraph_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TemporaryGraph;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMVVMViewModelBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprint,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModelBlueprint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMViewModelBlueprint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IgnoreClassThumbnail", "" },
		{ "IncludePath", "ViewModel/MVVMViewModelBlueprint.h" },
		{ "ModuleRelativePath", "Public/ViewModel/MVVMViewModelBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMVVMViewModelBlueprint_Statics::NewProp_TemporaryGraph_Inner = { "TemporaryGraph", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMViewModelBlueprint_Statics::NewProp_TemporaryGraph_MetaData[] = {
		{ "Comment", "// Use during compilation to clean the automatically generated graph.\n" },
		{ "ModuleRelativePath", "Public/ViewModel/MVVMViewModelBlueprint.h" },
		{ "ToolTip", "Use during compilation to clean the automatically generated graph." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMVVMViewModelBlueprint_Statics::NewProp_TemporaryGraph = { "TemporaryGraph", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMVVMViewModelBlueprint, TemporaryGraph), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMVVMViewModelBlueprint_Statics::NewProp_TemporaryGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewModelBlueprint_Statics::NewProp_TemporaryGraph_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMVVMViewModelBlueprint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMViewModelBlueprint_Statics::NewProp_TemporaryGraph_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMViewModelBlueprint_Statics::NewProp_TemporaryGraph,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMVVMViewModelBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMVVMViewModelBlueprint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMVVMViewModelBlueprint_Statics::ClassParams = {
		&UMVVMViewModelBlueprint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMVVMViewModelBlueprint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewModelBlueprint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMVVMViewModelBlueprint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewModelBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMVVMViewModelBlueprint()
	{
		if (!Z_Registration_Info_UClass_UMVVMViewModelBlueprint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMVVMViewModelBlueprint.OuterSingleton, Z_Construct_UClass_UMVVMViewModelBlueprint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMVVMViewModelBlueprint.OuterSingleton;
	}
	template<> MODELVIEWVIEWMODELBLUEPRINT_API UClass* StaticClass<UMVVMViewModelBlueprint>()
	{
		return UMVVMViewModelBlueprint::StaticClass();
	}
	UMVVMViewModelBlueprint::UMVVMViewModelBlueprint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMVVMViewModelBlueprint);
	UMVVMViewModelBlueprint::~UMVVMViewModelBlueprint() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_ViewModel_MVVMViewModelBlueprint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_ViewModel_MVVMViewModelBlueprint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMVVMViewModelBlueprint, UMVVMViewModelBlueprint::StaticClass, TEXT("UMVVMViewModelBlueprint"), &Z_Registration_Info_UClass_UMVVMViewModelBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMVVMViewModelBlueprint), 1340492563U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_ViewModel_MVVMViewModelBlueprint_h_1999925017(TEXT("/Script/ModelViewViewModelBlueprint"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_ViewModel_MVVMViewModelBlueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_ViewModel_MVVMViewModelBlueprint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
