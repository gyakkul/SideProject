// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ParametricSurfaceData.h"
#include "DatasmithImportOptions.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParametricSurfaceData() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithAdditionalData();
	DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithTessellationOptions();
	PARAMETRICSURFACE_API UClass* Z_Construct_UClass_UParametricSurfaceData();
	PARAMETRICSURFACE_API UClass* Z_Construct_UClass_UParametricSurfaceData_NoRegister();
	PARAMETRICSURFACE_API UScriptStruct* Z_Construct_UScriptStruct_FParametricMeshParameters();
	PARAMETRICSURFACE_API UScriptStruct* Z_Construct_UScriptStruct_FParametricSceneParameters();
	UPackage* Z_Construct_UPackage__Script_ParametricSurface();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ParametricSceneParameters;
class UScriptStruct* FParametricSceneParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ParametricSceneParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ParametricSceneParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FParametricSceneParameters, (UObject*)Z_Construct_UPackage__Script_ParametricSurface(), TEXT("ParametricSceneParameters"));
	}
	return Z_Registration_Info_UScriptStruct_ParametricSceneParameters.OuterSingleton;
}
template<> PARAMETRICSURFACE_API UScriptStruct* StaticStruct<FParametricSceneParameters>()
{
	return FParametricSceneParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FParametricSceneParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModelCoordSys_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ModelCoordSys;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetricUnit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MetricUnit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleFactor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParametricSceneParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ParametricSurfaceData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FParametricSceneParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParametricSceneParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParametricSceneParameters_Statics::NewProp_ModelCoordSys_MetaData[] = {
		{ "Comment", "// value from FDatasmithUtils::EModelCoordSystem\n" },
		{ "ModuleRelativePath", "Public/ParametricSurfaceData.h" },
		{ "ToolTip", "value from FDatasmithUtils::EModelCoordSystem" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FParametricSceneParameters_Statics::NewProp_ModelCoordSys = { "ModelCoordSys", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FParametricSceneParameters, ModelCoordSys), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FParametricSceneParameters_Statics::NewProp_ModelCoordSys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParametricSceneParameters_Statics::NewProp_ModelCoordSys_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParametricSceneParameters_Statics::NewProp_MetricUnit_MetaData[] = {
		{ "ModuleRelativePath", "Public/ParametricSurfaceData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FParametricSceneParameters_Statics::NewProp_MetricUnit = { "MetricUnit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FParametricSceneParameters, MetricUnit), METADATA_PARAMS(Z_Construct_UScriptStruct_FParametricSceneParameters_Statics::NewProp_MetricUnit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParametricSceneParameters_Statics::NewProp_MetricUnit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParametricSceneParameters_Statics::NewProp_ScaleFactor_MetaData[] = {
		{ "ModuleRelativePath", "Public/ParametricSurfaceData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FParametricSceneParameters_Statics::NewProp_ScaleFactor = { "ScaleFactor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FParametricSceneParameters, ScaleFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FParametricSceneParameters_Statics::NewProp_ScaleFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParametricSceneParameters_Statics::NewProp_ScaleFactor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParametricSceneParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParametricSceneParameters_Statics::NewProp_ModelCoordSys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParametricSceneParameters_Statics::NewProp_MetricUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParametricSceneParameters_Statics::NewProp_ScaleFactor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParametricSceneParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ParametricSurface,
		nullptr,
		&NewStructOps,
		"ParametricSceneParameters",
		sizeof(FParametricSceneParameters),
		alignof(FParametricSceneParameters),
		Z_Construct_UScriptStruct_FParametricSceneParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParametricSceneParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FParametricSceneParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParametricSceneParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FParametricSceneParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_ParametricSceneParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ParametricSceneParameters.InnerSingleton, Z_Construct_UScriptStruct_FParametricSceneParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ParametricSceneParameters.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ParametricMeshParameters;
class UScriptStruct* FParametricMeshParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ParametricMeshParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ParametricMeshParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FParametricMeshParameters, (UObject*)Z_Construct_UPackage__Script_ParametricSurface(), TEXT("ParametricMeshParameters"));
	}
	return Z_Registration_Info_UScriptStruct_ParametricMeshParameters.OuterSingleton;
}
template<> PARAMETRICSURFACE_API UScriptStruct* StaticStruct<FParametricMeshParameters>()
{
	return FParametricMeshParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FParametricMeshParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNeedSwapOrientation_MetaData[];
#endif
		static void NewProp_bNeedSwapOrientation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeedSwapOrientation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSymmetric_MetaData[];
#endif
		static void NewProp_bIsSymmetric_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSymmetric;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SymmetricOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SymmetricOrigin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SymmetricNormal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SymmetricNormal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParametricMeshParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ParametricSurfaceData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FParametricMeshParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParametricMeshParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParametricMeshParameters_Statics::NewProp_bNeedSwapOrientation_MetaData[] = {
		{ "ModuleRelativePath", "Public/ParametricSurfaceData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FParametricMeshParameters_Statics::NewProp_bNeedSwapOrientation_SetBit(void* Obj)
	{
		((FParametricMeshParameters*)Obj)->bNeedSwapOrientation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FParametricMeshParameters_Statics::NewProp_bNeedSwapOrientation = { "bNeedSwapOrientation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FParametricMeshParameters), &Z_Construct_UScriptStruct_FParametricMeshParameters_Statics::NewProp_bNeedSwapOrientation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FParametricMeshParameters_Statics::NewProp_bNeedSwapOrientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParametricMeshParameters_Statics::NewProp_bNeedSwapOrientation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParametricMeshParameters_Statics::NewProp_bIsSymmetric_MetaData[] = {
		{ "ModuleRelativePath", "Public/ParametricSurfaceData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FParametricMeshParameters_Statics::NewProp_bIsSymmetric_SetBit(void* Obj)
	{
		((FParametricMeshParameters*)Obj)->bIsSymmetric = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FParametricMeshParameters_Statics::NewProp_bIsSymmetric = { "bIsSymmetric", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FParametricMeshParameters), &Z_Construct_UScriptStruct_FParametricMeshParameters_Statics::NewProp_bIsSymmetric_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FParametricMeshParameters_Statics::NewProp_bIsSymmetric_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParametricMeshParameters_Statics::NewProp_bIsSymmetric_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParametricMeshParameters_Statics::NewProp_SymmetricOrigin_MetaData[] = {
		{ "ModuleRelativePath", "Public/ParametricSurfaceData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FParametricMeshParameters_Statics::NewProp_SymmetricOrigin = { "SymmetricOrigin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FParametricMeshParameters, SymmetricOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FParametricMeshParameters_Statics::NewProp_SymmetricOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParametricMeshParameters_Statics::NewProp_SymmetricOrigin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParametricMeshParameters_Statics::NewProp_SymmetricNormal_MetaData[] = {
		{ "ModuleRelativePath", "Public/ParametricSurfaceData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FParametricMeshParameters_Statics::NewProp_SymmetricNormal = { "SymmetricNormal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FParametricMeshParameters, SymmetricNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FParametricMeshParameters_Statics::NewProp_SymmetricNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParametricMeshParameters_Statics::NewProp_SymmetricNormal_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParametricMeshParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParametricMeshParameters_Statics::NewProp_bNeedSwapOrientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParametricMeshParameters_Statics::NewProp_bIsSymmetric,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParametricMeshParameters_Statics::NewProp_SymmetricOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParametricMeshParameters_Statics::NewProp_SymmetricNormal,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParametricMeshParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ParametricSurface,
		nullptr,
		&NewStructOps,
		"ParametricMeshParameters",
		sizeof(FParametricMeshParameters),
		alignof(FParametricMeshParameters),
		Z_Construct_UScriptStruct_FParametricMeshParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParametricMeshParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FParametricMeshParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParametricMeshParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FParametricMeshParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_ParametricMeshParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ParametricMeshParameters.InnerSingleton, Z_Construct_UScriptStruct_FParametricMeshParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ParametricMeshParameters.InnerSingleton;
	}
	void UParametricSurfaceData::StaticRegisterNativesUParametricSurfaceData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParametricSurfaceData);
	UClass* Z_Construct_UClass_UParametricSurfaceData_NoRegister()
	{
		return UParametricSurfaceData::StaticClass();
	}
	struct Z_Construct_UClass_UParametricSurfaceData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SceneParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastTessellationOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastTessellationOptions;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RawData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RawData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RawData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParametricSurfaceData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithAdditionalData,
		(UObject* (*)())Z_Construct_UPackage__Script_ParametricSurface,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParametricSurfaceData_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Parametric Surface Data" },
		{ "IncludePath", "ParametricSurfaceData.h" },
		{ "ModuleRelativePath", "Public/ParametricSurfaceData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParametricSurfaceData_Statics::NewProp_SceneParameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/ParametricSurfaceData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParametricSurfaceData_Statics::NewProp_SceneParameters = { "SceneParameters", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParametricSurfaceData, SceneParameters), Z_Construct_UScriptStruct_FParametricSceneParameters, METADATA_PARAMS(Z_Construct_UClass_UParametricSurfaceData_Statics::NewProp_SceneParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParametricSurfaceData_Statics::NewProp_SceneParameters_MetaData)) }; // 1959761808
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParametricSurfaceData_Statics::NewProp_MeshParameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/ParametricSurfaceData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParametricSurfaceData_Statics::NewProp_MeshParameters = { "MeshParameters", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParametricSurfaceData, MeshParameters), Z_Construct_UScriptStruct_FParametricMeshParameters, METADATA_PARAMS(Z_Construct_UClass_UParametricSurfaceData_Statics::NewProp_MeshParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParametricSurfaceData_Statics::NewProp_MeshParameters_MetaData)) }; // 3574526328
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParametricSurfaceData_Statics::NewProp_LastTessellationOptions_MetaData[] = {
		{ "Category", "NURBS" },
		{ "ModuleRelativePath", "Public/ParametricSurfaceData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParametricSurfaceData_Statics::NewProp_LastTessellationOptions = { "LastTessellationOptions", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParametricSurfaceData, LastTessellationOptions), Z_Construct_UScriptStruct_FDatasmithTessellationOptions, METADATA_PARAMS(Z_Construct_UClass_UParametricSurfaceData_Statics::NewProp_LastTessellationOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParametricSurfaceData_Statics::NewProp_LastTessellationOptions_MetaData)) }; // 2392613072
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParametricSurfaceData_Statics::NewProp_RawData_Inner = { "RawData", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParametricSurfaceData_Statics::NewProp_RawData_MetaData[] = {
		{ "ModuleRelativePath", "Public/ParametricSurfaceData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParametricSurfaceData_Statics::NewProp_RawData = { "RawData", nullptr, (EPropertyFlags)0x0020080020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParametricSurfaceData, RawData_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UParametricSurfaceData_Statics::NewProp_RawData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParametricSurfaceData_Statics::NewProp_RawData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParametricSurfaceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParametricSurfaceData_Statics::NewProp_SceneParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParametricSurfaceData_Statics::NewProp_MeshParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParametricSurfaceData_Statics::NewProp_LastTessellationOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParametricSurfaceData_Statics::NewProp_RawData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParametricSurfaceData_Statics::NewProp_RawData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParametricSurfaceData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParametricSurfaceData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParametricSurfaceData_Statics::ClassParams = {
		&UParametricSurfaceData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParametricSurfaceData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParametricSurfaceData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParametricSurfaceData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParametricSurfaceData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParametricSurfaceData()
	{
		if (!Z_Registration_Info_UClass_UParametricSurfaceData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParametricSurfaceData.OuterSingleton, Z_Construct_UClass_UParametricSurfaceData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParametricSurfaceData.OuterSingleton;
	}
	template<> PARAMETRICSURFACE_API UClass* StaticClass<UParametricSurfaceData>()
	{
		return UParametricSurfaceData::StaticClass();
	}
	UParametricSurfaceData::UParametricSurfaceData() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParametricSurfaceData);
	UParametricSurfaceData::~UParametricSurfaceData() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UParametricSurfaceData)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurface_Public_ParametricSurfaceData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurface_Public_ParametricSurfaceData_h_Statics::ScriptStructInfo[] = {
		{ FParametricSceneParameters::StaticStruct, Z_Construct_UScriptStruct_FParametricSceneParameters_Statics::NewStructOps, TEXT("ParametricSceneParameters"), &Z_Registration_Info_UScriptStruct_ParametricSceneParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FParametricSceneParameters), 1959761808U) },
		{ FParametricMeshParameters::StaticStruct, Z_Construct_UScriptStruct_FParametricMeshParameters_Statics::NewStructOps, TEXT("ParametricMeshParameters"), &Z_Registration_Info_UScriptStruct_ParametricMeshParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FParametricMeshParameters), 3574526328U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurface_Public_ParametricSurfaceData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParametricSurfaceData, UParametricSurfaceData::StaticClass, TEXT("UParametricSurfaceData"), &Z_Registration_Info_UClass_UParametricSurfaceData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParametricSurfaceData), 636511254U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurface_Public_ParametricSurfaceData_h_690414835(TEXT("/Script/ParametricSurface"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurface_Public_ParametricSurfaceData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurface_Public_ParametricSurfaceData_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurface_Public_ParametricSurfaceData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurface_Public_ParametricSurfaceData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
