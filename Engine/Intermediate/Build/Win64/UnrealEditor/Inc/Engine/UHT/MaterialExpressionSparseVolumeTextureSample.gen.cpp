// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionSparseVolumeTextureSample.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSparseVolumeTextureSample() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USparseVolumeTexture_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionSparseVolumeTextureSample::StaticRegisterNativesUMaterialExpressionSparseVolumeTextureSample()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionSparseVolumeTextureSample);
	UClass* Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample_NoRegister()
	{
		return UMaterialExpressionSparseVolumeTextureSample::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Coordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Coordinates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SparseVolumeTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SparseVolumeTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Material expression for sampling from a runtime virtual texture. */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionSparseVolumeTextureSample.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSparseVolumeTextureSample.h" },
		{ "ToolTip", "Material expression for sampling from a runtime virtual texture." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample_Statics::NewProp_Coordinates_MetaData[] = {
		{ "Comment", "/** 3D texture coordinate used to sample the sparse volume texture. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSparseVolumeTextureSample.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "3D texture coordinate used to sample the sparse volume texture." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample_Statics::NewProp_Coordinates = { "Coordinates", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSparseVolumeTextureSample, Coordinates), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample_Statics::NewProp_Coordinates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample_Statics::NewProp_Coordinates_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample_Statics::NewProp_SparseVolumeTexture_MetaData[] = {
		{ "Category", "SparseVolumeTexture" },
		{ "Comment", "/** The Sparse Virtual Texture to sample. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSparseVolumeTextureSample.h" },
		{ "ToolTip", "The Sparse Virtual Texture to sample." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample_Statics::NewProp_SparseVolumeTexture = { "SparseVolumeTexture", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSparseVolumeTextureSample, SparseVolumeTexture), Z_Construct_UClass_USparseVolumeTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample_Statics::NewProp_SparseVolumeTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample_Statics::NewProp_SparseVolumeTexture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample_Statics::NewProp_Coordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample_Statics::NewProp_SparseVolumeTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSparseVolumeTextureSample>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample_Statics::ClassParams = {
		&UMaterialExpressionSparseVolumeTextureSample::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample_Statics::PropPointers),
		0,
		0x001020B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureSample.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureSample.OuterSingleton, Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureSample.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSparseVolumeTextureSample>()
	{
		return UMaterialExpressionSparseVolumeTextureSample::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSparseVolumeTextureSample);
	UMaterialExpressionSparseVolumeTextureSample::~UMaterialExpressionSparseVolumeTextureSample() {}
	void UMaterialExpressionSparseVolumeTextureSampleParameter::StaticRegisterNativesUMaterialExpressionSparseVolumeTextureSampleParameter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionSparseVolumeTextureSampleParameter);
	UClass* Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_NoRegister()
	{
		return UMaterialExpressionSparseVolumeTextureSampleParameter::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionGUID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExpressionGUID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Group;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SortPriority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SortPriority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionSparseVolumeTextureSample.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSparseVolumeTextureSample.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_Statics::NewProp_ParameterName_MetaData[] = {
		{ "Category", "MaterialParameter" },
		{ "Comment", "/** Name to be referenced when we want to find and set this parameter */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSparseVolumeTextureSample.h" },
		{ "ToolTip", "Name to be referenced when we want to find and set this parameter" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSparseVolumeTextureSampleParameter, ParameterName), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_Statics::NewProp_ExpressionGUID_MetaData[] = {
		{ "Comment", "/** GUID that should be unique within the material, this is used for parameter renaming. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSparseVolumeTextureSample.h" },
		{ "ToolTip", "GUID that should be unique within the material, this is used for parameter renaming." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_Statics::NewProp_ExpressionGUID = { "ExpressionGUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSparseVolumeTextureSampleParameter, ExpressionGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_Statics::NewProp_ExpressionGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_Statics::NewProp_ExpressionGUID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "MaterialParameter" },
		{ "Comment", "/** The name of the parameter Group to display in MaterialInstance Editor. Default is None group */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSparseVolumeTextureSample.h" },
		{ "ToolTip", "The name of the parameter Group to display in MaterialInstance Editor. Default is None group" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSparseVolumeTextureSampleParameter, Group), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_Statics::NewProp_Group_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_Statics::NewProp_SortPriority_MetaData[] = {
		{ "Category", "MaterialParameter" },
		{ "Comment", "/** Controls where the this parameter is displayed in a material instance parameter list. The lower the number the higher up in the parameter list. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSparseVolumeTextureSample.h" },
		{ "ToolTip", "Controls where the this parameter is displayed in a material instance parameter list. The lower the number the higher up in the parameter list." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_Statics::NewProp_SortPriority = { "SortPriority", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSparseVolumeTextureSampleParameter, SortPriority), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_Statics::NewProp_SortPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_Statics::NewProp_SortPriority_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_Statics::NewProp_ExpressionGUID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_Statics::NewProp_Group,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_Statics::NewProp_SortPriority,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSparseVolumeTextureSampleParameter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_Statics::ClassParams = {
		&UMaterialExpressionSparseVolumeTextureSampleParameter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter.OuterSingleton, Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSparseVolumeTextureSampleParameter>()
	{
		return UMaterialExpressionSparseVolumeTextureSampleParameter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSparseVolumeTextureSampleParameter);
	UMaterialExpressionSparseVolumeTextureSampleParameter::~UMaterialExpressionSparseVolumeTextureSampleParameter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSparseVolumeTextureSample_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSparseVolumeTextureSample_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSample, UMaterialExpressionSparseVolumeTextureSample::StaticClass, TEXT("UMaterialExpressionSparseVolumeTextureSample"), &Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureSample, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionSparseVolumeTextureSample), 3370001172U) },
		{ Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter, UMaterialExpressionSparseVolumeTextureSampleParameter::StaticClass, TEXT("UMaterialExpressionSparseVolumeTextureSampleParameter"), &Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionSparseVolumeTextureSampleParameter), 2264868343U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSparseVolumeTextureSample_h_589593362(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSparseVolumeTextureSample_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSparseVolumeTextureSample_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
