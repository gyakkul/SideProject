// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionTextureSampleParameter.h"
#include "../../Source/Runtime/Engine/Public/MaterialTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionTextureSampleParameter() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSample();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameter();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameter_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParameterChannelNames();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionTextureSampleParameter::StaticRegisterNativesUMaterialExpressionTextureSampleParameter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionTextureSampleParameter);
	UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameter_NoRegister()
	{
		return UMaterialExpressionTextureSampleParameter::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionTextureSampleParameter_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelNames_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionTextureSampleParameter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionTextureSample,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureSampleParameter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionTextureSampleParameter.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSampleParameter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureSampleParameter_Statics::NewProp_ParameterName_MetaData[] = {
		{ "Category", "MaterialExpressionTextureSampleParameter" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSampleParameter.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMaterialExpressionTextureSampleParameter_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionTextureSampleParameter, ParameterName), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureSampleParameter_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSampleParameter_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureSampleParameter_Statics::NewProp_ExpressionGUID_MetaData[] = {
		{ "Comment", "/** GUID that should be unique within the material, this is used for parameter renaming. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSampleParameter.h" },
		{ "ToolTip", "GUID that should be unique within the material, this is used for parameter renaming." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionTextureSampleParameter_Statics::NewProp_ExpressionGUID = { "ExpressionGUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionTextureSampleParameter, ExpressionGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureSampleParameter_Statics::NewProp_ExpressionGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSampleParameter_Statics::NewProp_ExpressionGUID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureSampleParameter_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "MaterialExpressionTextureSampleParameter" },
		{ "Comment", "/** The name of the parameter Group to display in MaterialInstance Editor. Default is None group */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSampleParameter.h" },
		{ "ToolTip", "The name of the parameter Group to display in MaterialInstance Editor. Default is None group" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMaterialExpressionTextureSampleParameter_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionTextureSampleParameter, Group), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureSampleParameter_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSampleParameter_Statics::NewProp_Group_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureSampleParameter_Statics::NewProp_SortPriority_MetaData[] = {
		{ "Category", "MaterialExpressionTextureSampleParameter" },
		{ "Comment", "/** Controls where the this parameter is displayed in a material instance parameter list.  The lower the number the higher up in the parameter list. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSampleParameter.h" },
		{ "ToolTip", "Controls where the this parameter is displayed in a material instance parameter list.  The lower the number the higher up in the parameter list." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionTextureSampleParameter_Statics::NewProp_SortPriority = { "SortPriority", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionTextureSampleParameter, SortPriority), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureSampleParameter_Statics::NewProp_SortPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSampleParameter_Statics::NewProp_SortPriority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureSampleParameter_Statics::NewProp_ChannelNames_MetaData[] = {
		{ "Category", "ParameterCustomization" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSampleParameter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionTextureSampleParameter_Statics::NewProp_ChannelNames = { "ChannelNames", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionTextureSampleParameter, ChannelNames), Z_Construct_UScriptStruct_FParameterChannelNames, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureSampleParameter_Statics::NewProp_ChannelNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSampleParameter_Statics::NewProp_ChannelNames_MetaData)) }; // 2209706662
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionTextureSampleParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureSampleParameter_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureSampleParameter_Statics::NewProp_ExpressionGUID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureSampleParameter_Statics::NewProp_Group,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureSampleParameter_Statics::NewProp_SortPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureSampleParameter_Statics::NewProp_ChannelNames,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionTextureSampleParameter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionTextureSampleParameter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionTextureSampleParameter_Statics::ClassParams = {
		&UMaterialExpressionTextureSampleParameter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionTextureSampleParameter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSampleParameter_Statics::PropPointers),
		0,
		0x001020B1u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureSampleParameter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSampleParameter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameter()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameter.OuterSingleton, Z_Construct_UClass_UMaterialExpressionTextureSampleParameter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameter.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionTextureSampleParameter>()
	{
		return UMaterialExpressionTextureSampleParameter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionTextureSampleParameter);
	UMaterialExpressionTextureSampleParameter::~UMaterialExpressionTextureSampleParameter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSampleParameter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSampleParameter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionTextureSampleParameter, UMaterialExpressionTextureSampleParameter::StaticClass, TEXT("UMaterialExpressionTextureSampleParameter"), &Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionTextureSampleParameter), 803214076U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSampleParameter_h_3399672823(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSampleParameter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSampleParameter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
