// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DataprepTessellationOperation.h"
#include "DatasmithImportOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataprepTessellationOperation() {}
// Cross Module References
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepOperation();
	DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithTessellationOptions();
	PARAMETRICSURFACEEXTENSION_API UClass* Z_Construct_UClass_UDataprepTessellationOperation();
	PARAMETRICSURFACEEXTENSION_API UClass* Z_Construct_UClass_UDataprepTessellationOperation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ParametricSurfaceExtension();
// End Cross Module References
	void UDataprepTessellationOperation::StaticRegisterNativesUDataprepTessellationOperation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepTessellationOperation);
	UClass* Z_Construct_UClass_UDataprepTessellationOperation_NoRegister()
	{
		return UDataprepTessellationOperation::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepTessellationOperation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChordTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ChordTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxEdgeLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxEdgeLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TessellationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TessellationSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepTessellationOperation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataprepOperation,
		(UObject* (*)())Z_Construct_UPackage__Script_ParametricSurfaceExtension,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepTessellationOperation_Statics::Class_MetaDataParams[] = {
		{ "Category", "MeshOperation" },
		{ "DevelopmentStatus", "Experimental" },
		{ "DisplayName", "Datasmith Tessellation" },
		{ "IncludePath", "DataprepTessellationOperation.h" },
		{ "ModuleRelativePath", "Private/DataprepTessellationOperation.h" },
		{ "ToolTip", "For each static mesh to process, retessellate the mesh if the object contains the required data" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepTessellationOperation_Statics::NewProp_ChordTolerance_MetaData[] = {
		{ "Category", "Tessellation Options" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Private/DataprepTessellationOperation.h" },
		{ "ToolTip", "Maximum distance between any generated triangle and the original surface. Smaller values make more triangles." },
		{ "Units", "cm" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDataprepTessellationOperation_Statics::NewProp_ChordTolerance = { "ChordTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepTessellationOperation, ChordTolerance), METADATA_PARAMS(Z_Construct_UClass_UDataprepTessellationOperation_Statics::NewProp_ChordTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepTessellationOperation_Statics::NewProp_ChordTolerance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepTessellationOperation_Statics::NewProp_MaxEdgeLength_MetaData[] = {
		{ "Category", "Tessellation Options" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Max Edge Length" },
		{ "ModuleRelativePath", "Private/DataprepTessellationOperation.h" },
		{ "ToolTip", "Maximum length of any edge in the generated triangles. Smaller values make more triangles." },
		{ "Units", "cm" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDataprepTessellationOperation_Statics::NewProp_MaxEdgeLength = { "MaxEdgeLength", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepTessellationOperation, MaxEdgeLength), METADATA_PARAMS(Z_Construct_UClass_UDataprepTessellationOperation_Statics::NewProp_MaxEdgeLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepTessellationOperation_Statics::NewProp_MaxEdgeLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepTessellationOperation_Statics::NewProp_NormalTolerance_MetaData[] = {
		{ "Category", "Tessellation Options" },
		{ "ClampMax", "90.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Private/DataprepTessellationOperation.h" },
		{ "ToolTip", "Maximum angle between adjacent triangles. Smaller values make more triangles." },
		{ "Units", "deg" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDataprepTessellationOperation_Statics::NewProp_NormalTolerance = { "NormalTolerance", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepTessellationOperation, NormalTolerance), METADATA_PARAMS(Z_Construct_UClass_UDataprepTessellationOperation_Statics::NewProp_NormalTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepTessellationOperation_Statics::NewProp_NormalTolerance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepTessellationOperation_Statics::NewProp_TessellationSettings_MetaData[] = {
		{ "Comment", "/** Version 4.24 : Deprecated - not serialized anymore */" },
		{ "ModuleRelativePath", "Private/DataprepTessellationOperation.h" },
		{ "ToolTip", "Version 4.24 : Deprecated - not serialized anymore" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataprepTessellationOperation_Statics::NewProp_TessellationSettings = { "TessellationSettings", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepTessellationOperation, TessellationSettings_DEPRECATED), Z_Construct_UScriptStruct_FDatasmithTessellationOptions, METADATA_PARAMS(Z_Construct_UClass_UDataprepTessellationOperation_Statics::NewProp_TessellationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepTessellationOperation_Statics::NewProp_TessellationSettings_MetaData)) }; // 2392613072
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataprepTessellationOperation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepTessellationOperation_Statics::NewProp_ChordTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepTessellationOperation_Statics::NewProp_MaxEdgeLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepTessellationOperation_Statics::NewProp_NormalTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepTessellationOperation_Statics::NewProp_TessellationSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepTessellationOperation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepTessellationOperation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepTessellationOperation_Statics::ClassParams = {
		&UDataprepTessellationOperation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataprepTessellationOperation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepTessellationOperation_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepTessellationOperation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepTessellationOperation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepTessellationOperation()
	{
		if (!Z_Registration_Info_UClass_UDataprepTessellationOperation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepTessellationOperation.OuterSingleton, Z_Construct_UClass_UDataprepTessellationOperation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepTessellationOperation.OuterSingleton;
	}
	template<> PARAMETRICSURFACEEXTENSION_API UClass* StaticClass<UDataprepTessellationOperation>()
	{
		return UDataprepTessellationOperation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepTessellationOperation);
	UDataprepTessellationOperation::~UDataprepTessellationOperation() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurfaceExtension_Private_DataprepTessellationOperation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurfaceExtension_Private_DataprepTessellationOperation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataprepTessellationOperation, UDataprepTessellationOperation::StaticClass, TEXT("UDataprepTessellationOperation"), &Z_Registration_Info_UClass_UDataprepTessellationOperation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepTessellationOperation), 4141873624U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurfaceExtension_Private_DataprepTessellationOperation_h_1973517132(TEXT("/Script/ParametricSurfaceExtension"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurfaceExtension_Private_DataprepTessellationOperation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurfaceExtension_Private_DataprepTessellationOperation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
