// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "USDReferenceOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUSDReferenceOptions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	UPackage* Z_Construct_UPackage__Script_USDClasses();
	USDCLASSES_API UClass* Z_Construct_UClass_UUsdReferenceOptions();
	USDCLASSES_API UClass* Z_Construct_UClass_UUsdReferenceOptions_NoRegister();
// End Cross Module References
	void UUsdReferenceOptions::StaticRegisterNativesUUsdReferenceOptions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUsdReferenceOptions);
	UClass* Z_Construct_UClass_UUsdReferenceOptions_NoRegister()
	{
		return UUsdReferenceOptions::StaticClass();
	}
	struct Z_Construct_UClass_UUsdReferenceOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInternalReference_MetaData[];
#endif
		static void NewProp_bInternalReference_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInternalReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetFile_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetFile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseDefaultPrim_MetaData[];
#endif
		static void NewProp_bUseDefaultPrim_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDefaultPrim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetPrimPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TargetPrimPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeCodeOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeCodeOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeCodeScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeCodeScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUsdReferenceOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_USDClasses,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdReferenceOptions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Options to display when adding a reference or a payload for a prim\n */" },
		{ "IncludePath", "USDReferenceOptions.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/USDReferenceOptions.h" },
		{ "ToolTip", "Options to display when adding a reference or a payload for a prim" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdReferenceOptions_Statics::NewProp_bInternalReference_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// When enabled, the reference/payload will target a prim on this stage\n" },
		{ "ModuleRelativePath", "Public/USDReferenceOptions.h" },
		{ "ToolTip", "When enabled, the reference/payload will target a prim on this stage" },
	};
#endif
	void Z_Construct_UClass_UUsdReferenceOptions_Statics::NewProp_bInternalReference_SetBit(void* Obj)
	{
		((UUsdReferenceOptions*)Obj)->bInternalReference = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUsdReferenceOptions_Statics::NewProp_bInternalReference = { "bInternalReference", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUsdReferenceOptions), &Z_Construct_UClass_UUsdReferenceOptions_Statics::NewProp_bInternalReference_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUsdReferenceOptions_Statics::NewProp_bInternalReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdReferenceOptions_Statics::NewProp_bInternalReference_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdReferenceOptions_Statics::NewProp_TargetFile_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// File to use as the reference\n" },
		{ "EditCondition", "!bInternalReference" },
		{ "ModuleRelativePath", "Public/USDReferenceOptions.h" },
		{ "ToolTip", "File to use as the reference" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUsdReferenceOptions_Statics::NewProp_TargetFile = { "TargetFile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUsdReferenceOptions, TargetFile), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_UUsdReferenceOptions_Statics::NewProp_TargetFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdReferenceOptions_Statics::NewProp_TargetFile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdReferenceOptions_Statics::NewProp_bUseDefaultPrim_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// Use the default prim of the target stage as the referenced/payload prim\n" },
		{ "ModuleRelativePath", "Public/USDReferenceOptions.h" },
		{ "ToolTip", "Use the default prim of the target stage as the referenced/payload prim" },
	};
#endif
	void Z_Construct_UClass_UUsdReferenceOptions_Statics::NewProp_bUseDefaultPrim_SetBit(void* Obj)
	{
		((UUsdReferenceOptions*)Obj)->bUseDefaultPrim = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUsdReferenceOptions_Statics::NewProp_bUseDefaultPrim = { "bUseDefaultPrim", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUsdReferenceOptions), &Z_Construct_UClass_UUsdReferenceOptions_Statics::NewProp_bUseDefaultPrim_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUsdReferenceOptions_Statics::NewProp_bUseDefaultPrim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdReferenceOptions_Statics::NewProp_bUseDefaultPrim_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdReferenceOptions_Statics::NewProp_TargetPrimPath_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// Use a specific prim of the target stage as the referenced/payload prim\n" },
		{ "EditCondition", "!bUseDefaultPrim" },
		{ "ModuleRelativePath", "Public/USDReferenceOptions.h" },
		{ "ToolTip", "Use a specific prim of the target stage as the referenced/payload prim" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUsdReferenceOptions_Statics::NewProp_TargetPrimPath = { "TargetPrimPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUsdReferenceOptions, TargetPrimPath), METADATA_PARAMS(Z_Construct_UClass_UUsdReferenceOptions_Statics::NewProp_TargetPrimPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdReferenceOptions_Statics::NewProp_TargetPrimPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdReferenceOptions_Statics::NewProp_TimeCodeOffset_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// Offset to apply to the referenced/payload prim's time sampled attributes\n" },
		{ "ModuleRelativePath", "Public/USDReferenceOptions.h" },
		{ "ToolTip", "Offset to apply to the referenced/payload prim's time sampled attributes" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUsdReferenceOptions_Statics::NewProp_TimeCodeOffset = { "TimeCodeOffset", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUsdReferenceOptions, TimeCodeOffset), METADATA_PARAMS(Z_Construct_UClass_UUsdReferenceOptions_Statics::NewProp_TimeCodeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdReferenceOptions_Statics::NewProp_TimeCodeOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdReferenceOptions_Statics::NewProp_TimeCodeScale_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// TimeCode scaling factor to apply to the referenced/payload prim's time sampled attributes\n" },
		{ "ModuleRelativePath", "Public/USDReferenceOptions.h" },
		{ "ToolTip", "TimeCode scaling factor to apply to the referenced/payload prim's time sampled attributes" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUsdReferenceOptions_Statics::NewProp_TimeCodeScale = { "TimeCodeScale", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUsdReferenceOptions, TimeCodeScale), METADATA_PARAMS(Z_Construct_UClass_UUsdReferenceOptions_Statics::NewProp_TimeCodeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdReferenceOptions_Statics::NewProp_TimeCodeScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUsdReferenceOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdReferenceOptions_Statics::NewProp_bInternalReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdReferenceOptions_Statics::NewProp_TargetFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdReferenceOptions_Statics::NewProp_bUseDefaultPrim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdReferenceOptions_Statics::NewProp_TargetPrimPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdReferenceOptions_Statics::NewProp_TimeCodeOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdReferenceOptions_Statics::NewProp_TimeCodeScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUsdReferenceOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUsdReferenceOptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUsdReferenceOptions_Statics::ClassParams = {
		&UUsdReferenceOptions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUsdReferenceOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUsdReferenceOptions_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUsdReferenceOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdReferenceOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUsdReferenceOptions()
	{
		if (!Z_Registration_Info_UClass_UUsdReferenceOptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUsdReferenceOptions.OuterSingleton, Z_Construct_UClass_UUsdReferenceOptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUsdReferenceOptions.OuterSingleton;
	}
	template<> USDCLASSES_API UClass* StaticClass<UUsdReferenceOptions>()
	{
		return UUsdReferenceOptions::StaticClass();
	}
	UUsdReferenceOptions::UUsdReferenceOptions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUsdReferenceOptions);
	UUsdReferenceOptions::~UUsdReferenceOptions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDReferenceOptions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDReferenceOptions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUsdReferenceOptions, UUsdReferenceOptions::StaticClass, TEXT("UUsdReferenceOptions"), &Z_Registration_Info_UClass_UUsdReferenceOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUsdReferenceOptions), 1360134652U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDReferenceOptions_h_3509251646(TEXT("/Script/USDClasses"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDReferenceOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDReferenceOptions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
