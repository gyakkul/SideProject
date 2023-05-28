// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangePipelineBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangePipelineBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangePipelineBase();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangePipelineBase_NoRegister();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeResultsContainer_NoRegister();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeSourceData_NoRegister();
	INTERCHANGECORE_API UEnum* Z_Construct_UEnum_InterchangeCore_EInterchangePipelineContext();
	INTERCHANGECORE_API UEnum* Z_Construct_UEnum_InterchangeCore_EInterchangePipelineTask();
	INTERCHANGECORE_API UScriptStruct* Z_Construct_UScriptStruct_FInterchangePipelinePropertyStatePerContext();
	INTERCHANGECORE_API UScriptStruct* Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates();
	UPackage* Z_Construct_UPackage__Script_InterchangeCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterchangePipelineTask;
	static UEnum* EInterchangePipelineTask_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInterchangePipelineTask.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInterchangePipelineTask.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangeCore_EInterchangePipelineTask, (UObject*)Z_Construct_UPackage__Script_InterchangeCore(), TEXT("EInterchangePipelineTask"));
		}
		return Z_Registration_Info_UEnum_EInterchangePipelineTask.OuterSingleton;
	}
	template<> INTERCHANGECORE_API UEnum* StaticEnum<EInterchangePipelineTask>()
	{
		return EInterchangePipelineTask_StaticEnum();
	}
	struct Z_Construct_UEnum_InterchangeCore_EInterchangePipelineTask_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InterchangeCore_EInterchangePipelineTask_Statics::Enumerators[] = {
		{ "EInterchangePipelineTask::PostTranslator", (int64)EInterchangePipelineTask::PostTranslator },
		{ "EInterchangePipelineTask::PostFactory", (int64)EInterchangePipelineTask::PostFactory },
		{ "EInterchangePipelineTask::PostImport", (int64)EInterchangePipelineTask::PostImport },
		{ "EInterchangePipelineTask::Export", (int64)EInterchangePipelineTask::Export },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InterchangeCore_EInterchangePipelineTask_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Export.Name", "EInterchangePipelineTask::Export" },
		{ "ModuleRelativePath", "Public/InterchangePipelineBase.h" },
		{ "PostFactory.Name", "EInterchangePipelineTask::PostFactory" },
		{ "PostImport.Name", "EInterchangePipelineTask::PostImport" },
		{ "PostTranslator.Name", "EInterchangePipelineTask::PostTranslator" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangeCore_EInterchangePipelineTask_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InterchangeCore,
		nullptr,
		"EInterchangePipelineTask",
		"EInterchangePipelineTask",
		Z_Construct_UEnum_InterchangeCore_EInterchangePipelineTask_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeCore_EInterchangePipelineTask_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_InterchangeCore_EInterchangePipelineTask_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeCore_EInterchangePipelineTask_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_InterchangeCore_EInterchangePipelineTask()
	{
		if (!Z_Registration_Info_UEnum_EInterchangePipelineTask.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterchangePipelineTask.InnerSingleton, Z_Construct_UEnum_InterchangeCore_EInterchangePipelineTask_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInterchangePipelineTask.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterchangePipelineContext;
	static UEnum* EInterchangePipelineContext_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInterchangePipelineContext.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInterchangePipelineContext.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangeCore_EInterchangePipelineContext, (UObject*)Z_Construct_UPackage__Script_InterchangeCore(), TEXT("EInterchangePipelineContext"));
		}
		return Z_Registration_Info_UEnum_EInterchangePipelineContext.OuterSingleton;
	}
	template<> INTERCHANGECORE_API UEnum* StaticEnum<EInterchangePipelineContext>()
	{
		return EInterchangePipelineContext_StaticEnum();
	}
	struct Z_Construct_UEnum_InterchangeCore_EInterchangePipelineContext_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InterchangeCore_EInterchangePipelineContext_Statics::Enumerators[] = {
		{ "EInterchangePipelineContext::None", (int64)EInterchangePipelineContext::None },
		{ "EInterchangePipelineContext::AssetImport", (int64)EInterchangePipelineContext::AssetImport },
		{ "EInterchangePipelineContext::AssetReimport", (int64)EInterchangePipelineContext::AssetReimport },
		{ "EInterchangePipelineContext::SceneImport", (int64)EInterchangePipelineContext::SceneImport },
		{ "EInterchangePipelineContext::SceneReimport", (int64)EInterchangePipelineContext::SceneReimport },
		{ "EInterchangePipelineContext::AssetCustomLODImport", (int64)EInterchangePipelineContext::AssetCustomLODImport },
		{ "EInterchangePipelineContext::AssetCustomLODReimport", (int64)EInterchangePipelineContext::AssetCustomLODReimport },
		{ "EInterchangePipelineContext::AssetAlternateSkinningImport", (int64)EInterchangePipelineContext::AssetAlternateSkinningImport },
		{ "EInterchangePipelineContext::AssetAlternateSkinningReimport", (int64)EInterchangePipelineContext::AssetAlternateSkinningReimport },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InterchangeCore_EInterchangePipelineContext_Statics::Enum_MetaDataParams[] = {
		{ "AssetAlternateSkinningImport.Name", "EInterchangePipelineContext::AssetAlternateSkinningImport" },
		{ "AssetAlternateSkinningReimport.Comment", "//The import for custom LOD is there because we use a copy of the asset import data pipeline stack.\n" },
		{ "AssetAlternateSkinningReimport.Name", "EInterchangePipelineContext::AssetAlternateSkinningReimport" },
		{ "AssetAlternateSkinningReimport.ToolTip", "The import for custom LOD is there because we use a copy of the asset import data pipeline stack." },
		{ "AssetCustomLODImport.Name", "EInterchangePipelineContext::AssetCustomLODImport" },
		{ "AssetCustomLODReimport.Comment", "//The import for custom LOD is there because we use a copy of the asset import data pipeline stack.\n" },
		{ "AssetCustomLODReimport.Name", "EInterchangePipelineContext::AssetCustomLODReimport" },
		{ "AssetCustomLODReimport.ToolTip", "The import for custom LOD is there because we use a copy of the asset import data pipeline stack." },
		{ "AssetImport.Comment", "//Default pipeline instance we refer in the project settings pipeline stack. This context should allow editing of the properties states\n" },
		{ "AssetImport.Name", "EInterchangePipelineContext::AssetImport" },
		{ "AssetImport.ToolTip", "Default pipeline instance we refer in the project settings pipeline stack. This context should allow editing of the properties states" },
		{ "AssetReimport.Name", "EInterchangePipelineContext::AssetReimport" },
		{ "ModuleRelativePath", "Public/InterchangePipelineBase.h" },
		{ "None.Name", "EInterchangePipelineContext::None" },
		{ "SceneImport.Name", "EInterchangePipelineContext::SceneImport" },
		{ "SceneReimport.Name", "EInterchangePipelineContext::SceneReimport" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangeCore_EInterchangePipelineContext_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InterchangeCore,
		nullptr,
		"EInterchangePipelineContext",
		"EInterchangePipelineContext",
		Z_Construct_UEnum_InterchangeCore_EInterchangePipelineContext_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeCore_EInterchangePipelineContext_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_InterchangeCore_EInterchangePipelineContext_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeCore_EInterchangePipelineContext_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_InterchangeCore_EInterchangePipelineContext()
	{
		if (!Z_Registration_Info_UEnum_EInterchangePipelineContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterchangePipelineContext.InnerSingleton, Z_Construct_UEnum_InterchangeCore_EInterchangePipelineContext_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInterchangePipelineContext.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InterchangePipelinePropertyStatePerContext;
class UScriptStruct* FInterchangePipelinePropertyStatePerContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangePipelinePropertyStatePerContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InterchangePipelinePropertyStatePerContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterchangePipelinePropertyStatePerContext, (UObject*)Z_Construct_UPackage__Script_InterchangeCore(), TEXT("InterchangePipelinePropertyStatePerContext"));
	}
	return Z_Registration_Info_UScriptStruct_InterchangePipelinePropertyStatePerContext.OuterSingleton;
}
template<> INTERCHANGECORE_API UScriptStruct* StaticStruct<FInterchangePipelinePropertyStatePerContext>()
{
	return FInterchangePipelinePropertyStatePerContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInterchangePipelinePropertyStatePerContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[];
#endif
		static void NewProp_bVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangePipelinePropertyStatePerContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InterchangePipelineBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInterchangePipelinePropertyStatePerContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterchangePipelinePropertyStatePerContext>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangePipelinePropertyStatePerContext_Statics::NewProp_bVisible_MetaData[] = {
		{ "Category", "Property States" },
		{ "Comment", "/** If true, the property is visible. */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineBase.h" },
		{ "ToolTip", "If true, the property is visible." },
	};
#endif
	void Z_Construct_UScriptStruct_FInterchangePipelinePropertyStatePerContext_Statics::NewProp_bVisible_SetBit(void* Obj)
	{
		((FInterchangePipelinePropertyStatePerContext*)Obj)->bVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInterchangePipelinePropertyStatePerContext_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FInterchangePipelinePropertyStatePerContext), &Z_Construct_UScriptStruct_FInterchangePipelinePropertyStatePerContext_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInterchangePipelinePropertyStatePerContext_Statics::NewProp_bVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangePipelinePropertyStatePerContext_Statics::NewProp_bVisible_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInterchangePipelinePropertyStatePerContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangePipelinePropertyStatePerContext_Statics::NewProp_bVisible,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInterchangePipelinePropertyStatePerContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeCore,
		nullptr,
		&NewStructOps,
		"InterchangePipelinePropertyStatePerContext",
		sizeof(FInterchangePipelinePropertyStatePerContext),
		alignof(FInterchangePipelinePropertyStatePerContext),
		Z_Construct_UScriptStruct_FInterchangePipelinePropertyStatePerContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangePipelinePropertyStatePerContext_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInterchangePipelinePropertyStatePerContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangePipelinePropertyStatePerContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInterchangePipelinePropertyStatePerContext()
	{
		if (!Z_Registration_Info_UScriptStruct_InterchangePipelinePropertyStatePerContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InterchangePipelinePropertyStatePerContext.InnerSingleton, Z_Construct_UScriptStruct_FInterchangePipelinePropertyStatePerContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InterchangePipelinePropertyStatePerContext.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InterchangePipelinePropertyStates;
class UScriptStruct* FInterchangePipelinePropertyStates::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangePipelinePropertyStates.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InterchangePipelinePropertyStates.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates, (UObject*)Z_Construct_UPackage__Script_InterchangeCore(), TEXT("InterchangePipelinePropertyStates"));
	}
	return Z_Registration_Info_UScriptStruct_InterchangePipelinePropertyStates.OuterSingleton;
}
template<> INTERCHANGECORE_API UScriptStruct* StaticStruct<FInterchangePipelinePropertyStates>()
{
	return FInterchangePipelinePropertyStates::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLocked_MetaData[];
#endif
		static void NewProp_bLocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportStates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImportStates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReimportStates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReimportStates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InterchangePipelineBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterchangePipelinePropertyStates>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics::NewProp_bLocked_MetaData[] = {
		{ "Category", "Property States" },
		{ "Comment", "/** If true, the property is locked. */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineBase.h" },
		{ "ToolTip", "If true, the property is locked." },
	};
#endif
	void Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics::NewProp_bLocked_SetBit(void* Obj)
	{
		((FInterchangePipelinePropertyStates*)Obj)->bLocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics::NewProp_bLocked = { "bLocked", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FInterchangePipelinePropertyStates), &Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics::NewProp_bLocked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics::NewProp_bLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics::NewProp_bLocked_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics::NewProp_ImportStates_MetaData[] = {
		{ "Category", "Context Properties States" },
		{ "Comment", "/** The property states for the import context */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineBase.h" },
		{ "ToolTip", "The property states for the import context" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics::NewProp_ImportStates = { "ImportStates", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInterchangePipelinePropertyStates, ImportStates), Z_Construct_UScriptStruct_FInterchangePipelinePropertyStatePerContext, METADATA_PARAMS(Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics::NewProp_ImportStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics::NewProp_ImportStates_MetaData)) }; // 303131839
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics::NewProp_ReimportStates_MetaData[] = {
		{ "Category", "Context Properties States" },
		{ "Comment", "/** The property states for the reimport context */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineBase.h" },
		{ "ToolTip", "The property states for the reimport context" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics::NewProp_ReimportStates = { "ReimportStates", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInterchangePipelinePropertyStates, ReimportStates), Z_Construct_UScriptStruct_FInterchangePipelinePropertyStatePerContext, METADATA_PARAMS(Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics::NewProp_ReimportStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics::NewProp_ReimportStates_MetaData)) }; // 303131839
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics::NewProp_bLocked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics::NewProp_ImportStates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics::NewProp_ReimportStates,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeCore,
		nullptr,
		&NewStructOps,
		"InterchangePipelinePropertyStates",
		sizeof(FInterchangePipelinePropertyStates),
		alignof(FInterchangePipelinePropertyStates),
		Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates()
	{
		if (!Z_Registration_Info_UScriptStruct_InterchangePipelinePropertyStates.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InterchangePipelinePropertyStates.InnerSingleton, Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InterchangePipelinePropertyStates.InnerSingleton;
	}
	DEFINE_FUNCTION(UInterchangePipelineBase::execFindOrAddPropertyStates)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_PropertyPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangePipelinePropertyStates*)Z_Param__Result=P_THIS->FindOrAddPropertyStates(Z_Param_PropertyPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePipelineBase::execDoesPropertyStatesExist)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_PropertyPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoesPropertyStatesExist(Z_Param_PropertyPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePipelineBase::execScriptedSetReimportSourceIndex)
	{
		P_GET_OBJECT(UClass,Z_Param_ReimportObjectClass);
		P_GET_PROPERTY(FIntProperty,Z_Param_SourceFileIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ScriptedSetReimportSourceIndex_Implementation(Z_Param_ReimportObjectClass,Z_Param_SourceFileIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePipelineBase::execScriptedCanExecuteOnAnyThread)
	{
		P_GET_ENUM(EInterchangePipelineTask,Z_Param_PipelineTask);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ScriptedCanExecuteOnAnyThread_Implementation(EInterchangePipelineTask(Z_Param_PipelineTask));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePipelineBase::execScriptedExecuteExportPipeline)
	{
		P_GET_OBJECT(UInterchangeBaseNodeContainer,Z_Param_BaseNodeContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ScriptedExecuteExportPipeline_Implementation(Z_Param_BaseNodeContainer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePipelineBase::execScriptedExecutePostImportPipeline)
	{
		P_GET_OBJECT(UInterchangeBaseNodeContainer,Z_Param_BaseNodeContainer);
		P_GET_PROPERTY(FStrProperty,Z_Param_FactoryNodeKey);
		P_GET_OBJECT(UObject,Z_Param_CreatedAsset);
		P_GET_UBOOL(Z_Param_bIsAReimport);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ScriptedExecutePostImportPipeline_Implementation(Z_Param_BaseNodeContainer,Z_Param_FactoryNodeKey,Z_Param_CreatedAsset,Z_Param_bIsAReimport);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePipelineBase::execScriptedExecutePostFactoryPipeline)
	{
		P_GET_OBJECT(UInterchangeBaseNodeContainer,Z_Param_BaseNodeContainer);
		P_GET_PROPERTY(FStrProperty,Z_Param_FactoryNodeKey);
		P_GET_OBJECT(UObject,Z_Param_CreatedAsset);
		P_GET_UBOOL(Z_Param_bIsAReimport);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ScriptedExecutePostFactoryPipeline_Implementation(Z_Param_BaseNodeContainer,Z_Param_FactoryNodeKey,Z_Param_CreatedAsset,Z_Param_bIsAReimport);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePipelineBase::execScriptedExecutePipeline)
	{
		P_GET_OBJECT(UInterchangeBaseNodeContainer,Z_Param_BaseNodeContainer);
		P_GET_TARRAY_REF(UInterchangeSourceData*,Z_Param_Out_SourceDatas);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ScriptedExecutePipeline_Implementation(Z_Param_BaseNodeContainer,Z_Param_Out_SourceDatas);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePipelineBase::execScriptedExecutePreImportPipeline)
	{
		P_GET_OBJECT(UInterchangeBaseNodeContainer,Z_Param_BaseNodeContainer);
		P_GET_TARRAY_REF(UInterchangeSourceData*,Z_Param_Out_SourceDatas);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ScriptedExecutePreImportPipeline_Implementation(Z_Param_BaseNodeContainer,Z_Param_Out_SourceDatas);
		P_NATIVE_END;
	}
	struct InterchangePipelineBase_eventScriptedCanExecuteOnAnyThread_Parms
	{
		EInterchangePipelineTask PipelineTask;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		InterchangePipelineBase_eventScriptedCanExecuteOnAnyThread_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct InterchangePipelineBase_eventScriptedExecuteExportPipeline_Parms
	{
		UInterchangeBaseNodeContainer* BaseNodeContainer;
	};
	struct InterchangePipelineBase_eventScriptedExecutePipeline_Parms
	{
		UInterchangeBaseNodeContainer* BaseNodeContainer;
		TArray<UInterchangeSourceData*> SourceDatas;
	};
	struct InterchangePipelineBase_eventScriptedExecutePostFactoryPipeline_Parms
	{
		const UInterchangeBaseNodeContainer* BaseNodeContainer;
		FString FactoryNodeKey;
		UObject* CreatedAsset;
		bool bIsAReimport;
	};
	struct InterchangePipelineBase_eventScriptedExecutePostImportPipeline_Parms
	{
		const UInterchangeBaseNodeContainer* BaseNodeContainer;
		FString FactoryNodeKey;
		UObject* CreatedAsset;
		bool bIsAReimport;
	};
	struct InterchangePipelineBase_eventScriptedExecutePreImportPipeline_Parms
	{
		UInterchangeBaseNodeContainer* BaseNodeContainer;
		TArray<UInterchangeSourceData*> SourceDatas;
	};
	struct InterchangePipelineBase_eventScriptedSetReimportSourceIndex_Parms
	{
		UClass* ReimportObjectClass;
		int32 SourceFileIndex;
	};
	static FName NAME_UInterchangePipelineBase_ScriptedCanExecuteOnAnyThread = FName(TEXT("ScriptedCanExecuteOnAnyThread"));
	bool UInterchangePipelineBase::ScriptedCanExecuteOnAnyThread(EInterchangePipelineTask PipelineTask)
	{
		InterchangePipelineBase_eventScriptedCanExecuteOnAnyThread_Parms Parms;
		Parms.PipelineTask=PipelineTask;
		ProcessEvent(FindFunctionChecked(NAME_UInterchangePipelineBase_ScriptedCanExecuteOnAnyThread),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UInterchangePipelineBase_ScriptedExecuteExportPipeline = FName(TEXT("ScriptedExecuteExportPipeline"));
	void UInterchangePipelineBase::ScriptedExecuteExportPipeline(UInterchangeBaseNodeContainer* BaseNodeContainer)
	{
		InterchangePipelineBase_eventScriptedExecuteExportPipeline_Parms Parms;
		Parms.BaseNodeContainer=BaseNodeContainer;
		ProcessEvent(FindFunctionChecked(NAME_UInterchangePipelineBase_ScriptedExecuteExportPipeline),&Parms);
	}
	static FName NAME_UInterchangePipelineBase_ScriptedExecutePipeline = FName(TEXT("ScriptedExecutePipeline"));
	void UInterchangePipelineBase::ScriptedExecutePipeline(UInterchangeBaseNodeContainer* BaseNodeContainer, TArray<UInterchangeSourceData*> const& SourceDatas)
	{
		InterchangePipelineBase_eventScriptedExecutePipeline_Parms Parms;
		Parms.BaseNodeContainer=BaseNodeContainer;
		Parms.SourceDatas=SourceDatas;
		ProcessEvent(FindFunctionChecked(NAME_UInterchangePipelineBase_ScriptedExecutePipeline),&Parms);
	}
	static FName NAME_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline = FName(TEXT("ScriptedExecutePostFactoryPipeline"));
	void UInterchangePipelineBase::ScriptedExecutePostFactoryPipeline(const UInterchangeBaseNodeContainer* BaseNodeContainer, const FString& FactoryNodeKey, UObject* CreatedAsset, bool bIsAReimport)
	{
		InterchangePipelineBase_eventScriptedExecutePostFactoryPipeline_Parms Parms;
		Parms.BaseNodeContainer=BaseNodeContainer;
		Parms.FactoryNodeKey=FactoryNodeKey;
		Parms.CreatedAsset=CreatedAsset;
		Parms.bIsAReimport=bIsAReimport ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline),&Parms);
	}
	static FName NAME_UInterchangePipelineBase_ScriptedExecutePostImportPipeline = FName(TEXT("ScriptedExecutePostImportPipeline"));
	void UInterchangePipelineBase::ScriptedExecutePostImportPipeline(const UInterchangeBaseNodeContainer* BaseNodeContainer, const FString& FactoryNodeKey, UObject* CreatedAsset, bool bIsAReimport)
	{
		InterchangePipelineBase_eventScriptedExecutePostImportPipeline_Parms Parms;
		Parms.BaseNodeContainer=BaseNodeContainer;
		Parms.FactoryNodeKey=FactoryNodeKey;
		Parms.CreatedAsset=CreatedAsset;
		Parms.bIsAReimport=bIsAReimport ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UInterchangePipelineBase_ScriptedExecutePostImportPipeline),&Parms);
	}
	static FName NAME_UInterchangePipelineBase_ScriptedExecutePreImportPipeline = FName(TEXT("ScriptedExecutePreImportPipeline"));
	void UInterchangePipelineBase::ScriptedExecutePreImportPipeline(UInterchangeBaseNodeContainer* BaseNodeContainer, TArray<UInterchangeSourceData*> const& SourceDatas)
	{
		InterchangePipelineBase_eventScriptedExecutePreImportPipeline_Parms Parms;
		Parms.BaseNodeContainer=BaseNodeContainer;
		Parms.SourceDatas=SourceDatas;
		ProcessEvent(FindFunctionChecked(NAME_UInterchangePipelineBase_ScriptedExecutePreImportPipeline),&Parms);
	}
	static FName NAME_UInterchangePipelineBase_ScriptedSetReimportSourceIndex = FName(TEXT("ScriptedSetReimportSourceIndex"));
	void UInterchangePipelineBase::ScriptedSetReimportSourceIndex(UClass* ReimportObjectClass, const int32 SourceFileIndex)
	{
		InterchangePipelineBase_eventScriptedSetReimportSourceIndex_Parms Parms;
		Parms.ReimportObjectClass=ReimportObjectClass;
		Parms.SourceFileIndex=SourceFileIndex;
		ProcessEvent(FindFunctionChecked(NAME_UInterchangePipelineBase_ScriptedSetReimportSourceIndex),&Parms);
	}
	void UInterchangePipelineBase::StaticRegisterNativesUInterchangePipelineBase()
	{
		UClass* Class = UInterchangePipelineBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DoesPropertyStatesExist", &UInterchangePipelineBase::execDoesPropertyStatesExist },
			{ "FindOrAddPropertyStates", &UInterchangePipelineBase::execFindOrAddPropertyStates },
			{ "ScriptedCanExecuteOnAnyThread", &UInterchangePipelineBase::execScriptedCanExecuteOnAnyThread },
			{ "ScriptedExecuteExportPipeline", &UInterchangePipelineBase::execScriptedExecuteExportPipeline },
			{ "ScriptedExecutePipeline", &UInterchangePipelineBase::execScriptedExecutePipeline },
			{ "ScriptedExecutePostFactoryPipeline", &UInterchangePipelineBase::execScriptedExecutePostFactoryPipeline },
			{ "ScriptedExecutePostImportPipeline", &UInterchangePipelineBase::execScriptedExecutePostImportPipeline },
			{ "ScriptedExecutePreImportPipeline", &UInterchangePipelineBase::execScriptedExecutePreImportPipeline },
			{ "ScriptedSetReimportSourceIndex", &UInterchangePipelineBase::execScriptedSetReimportSourceIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterchangePipelineBase_DoesPropertyStatesExist_Statics
	{
		struct InterchangePipelineBase_eventDoesPropertyStatesExist_Parms
		{
			FName PropertyPath;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyPath_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyPath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineBase_DoesPropertyStatesExist_Statics::NewProp_PropertyPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInterchangePipelineBase_DoesPropertyStatesExist_Statics::NewProp_PropertyPath = { "PropertyPath", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePipelineBase_eventDoesPropertyStatesExist_Parms, PropertyPath), METADATA_PARAMS(Z_Construct_UFunction_UInterchangePipelineBase_DoesPropertyStatesExist_Statics::NewProp_PropertyPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineBase_DoesPropertyStatesExist_Statics::NewProp_PropertyPath_MetaData)) };
	void Z_Construct_UFunction_UInterchangePipelineBase_DoesPropertyStatesExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangePipelineBase_eventDoesPropertyStatesExist_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePipelineBase_DoesPropertyStatesExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangePipelineBase_eventDoesPropertyStatesExist_Parms), &Z_Construct_UFunction_UInterchangePipelineBase_DoesPropertyStatesExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineBase_DoesPropertyStatesExist_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineBase_DoesPropertyStatesExist_Statics::NewProp_PropertyPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineBase_DoesPropertyStatesExist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineBase_DoesPropertyStatesExist_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline" },
		{ "Comment", "/**\n\x09 * Return true if the property has valid states, false if no states was set for the property\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineBase.h" },
		{ "ToolTip", "Return true if the property has valid states, false if no states was set for the property" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineBase_DoesPropertyStatesExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineBase, nullptr, "DoesPropertyStatesExist", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangePipelineBase_DoesPropertyStatesExist_Statics::InterchangePipelineBase_eventDoesPropertyStatesExist_Parms), Z_Construct_UFunction_UInterchangePipelineBase_DoesPropertyStatesExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineBase_DoesPropertyStatesExist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangePipelineBase_DoesPropertyStatesExist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineBase_DoesPropertyStatesExist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangePipelineBase_DoesPropertyStatesExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineBase_DoesPropertyStatesExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePipelineBase_FindOrAddPropertyStates_Statics
	{
		struct InterchangePipelineBase_eventFindOrAddPropertyStates_Parms
		{
			FName PropertyPath;
			FInterchangePipelinePropertyStates ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyPath_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyPath;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineBase_FindOrAddPropertyStates_Statics::NewProp_PropertyPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInterchangePipelineBase_FindOrAddPropertyStates_Statics::NewProp_PropertyPath = { "PropertyPath", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePipelineBase_eventFindOrAddPropertyStates_Parms, PropertyPath), METADATA_PARAMS(Z_Construct_UFunction_UInterchangePipelineBase_FindOrAddPropertyStates_Statics::NewProp_PropertyPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineBase_FindOrAddPropertyStates_Statics::NewProp_PropertyPath_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangePipelineBase_FindOrAddPropertyStates_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePipelineBase_eventFindOrAddPropertyStates_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates, METADATA_PARAMS(nullptr, 0) }; // 3491779153
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineBase_FindOrAddPropertyStates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineBase_FindOrAddPropertyStates_Statics::NewProp_PropertyPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineBase_FindOrAddPropertyStates_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineBase_FindOrAddPropertyStates_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline" },
		{ "Comment", "/**\n\x09 * Return a mutable property states Reference. Add the property states if it doesnt exist.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineBase.h" },
		{ "ToolTip", "Return a mutable property states Reference. Add the property states if it doesnt exist." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineBase_FindOrAddPropertyStates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineBase, nullptr, "FindOrAddPropertyStates", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangePipelineBase_FindOrAddPropertyStates_Statics::InterchangePipelineBase_eventFindOrAddPropertyStates_Parms), Z_Construct_UFunction_UInterchangePipelineBase_FindOrAddPropertyStates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineBase_FindOrAddPropertyStates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangePipelineBase_FindOrAddPropertyStates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineBase_FindOrAddPropertyStates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangePipelineBase_FindOrAddPropertyStates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineBase_FindOrAddPropertyStates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePipelineBase_ScriptedCanExecuteOnAnyThread_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_PipelineTask_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PipelineTask;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangePipelineBase_ScriptedCanExecuteOnAnyThread_Statics::NewProp_PipelineTask_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangePipelineBase_ScriptedCanExecuteOnAnyThread_Statics::NewProp_PipelineTask = { "PipelineTask", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePipelineBase_eventScriptedCanExecuteOnAnyThread_Parms, PipelineTask), Z_Construct_UEnum_InterchangeCore_EInterchangePipelineTask, METADATA_PARAMS(nullptr, 0) }; // 3201342931
	void Z_Construct_UFunction_UInterchangePipelineBase_ScriptedCanExecuteOnAnyThread_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangePipelineBase_eventScriptedCanExecuteOnAnyThread_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePipelineBase_ScriptedCanExecuteOnAnyThread_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangePipelineBase_eventScriptedCanExecuteOnAnyThread_Parms), &Z_Construct_UFunction_UInterchangePipelineBase_ScriptedCanExecuteOnAnyThread_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineBase_ScriptedCanExecuteOnAnyThread_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineBase_ScriptedCanExecuteOnAnyThread_Statics::NewProp_PipelineTask_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineBase_ScriptedCanExecuteOnAnyThread_Statics::NewProp_PipelineTask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineBase_ScriptedCanExecuteOnAnyThread_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineBase_ScriptedCanExecuteOnAnyThread_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline" },
		{ "Comment", "/**\n\x09 * Non virtual helper to allow blueprint to implement event base function let the interchange know if it can run asynchronously.\n\x09 * the Interchange manager is calling this function not the virtual one that is call by the default implementation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineBase.h" },
		{ "ToolTip", "Non virtual helper to allow blueprint to implement event base function let the interchange know if it can run asynchronously.\nthe Interchange manager is calling this function not the virtual one that is call by the default implementation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineBase_ScriptedCanExecuteOnAnyThread_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineBase, nullptr, "ScriptedCanExecuteOnAnyThread", nullptr, nullptr, sizeof(InterchangePipelineBase_eventScriptedCanExecuteOnAnyThread_Parms), Z_Construct_UFunction_UInterchangePipelineBase_ScriptedCanExecuteOnAnyThread_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedCanExecuteOnAnyThread_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedCanExecuteOnAnyThread_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedCanExecuteOnAnyThread_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangePipelineBase_ScriptedCanExecuteOnAnyThread()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineBase_ScriptedCanExecuteOnAnyThread_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecuteExportPipeline_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseNodeContainer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecuteExportPipeline_Statics::NewProp_BaseNodeContainer = { "BaseNodeContainer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePipelineBase_eventScriptedExecuteExportPipeline_Parms, BaseNodeContainer), Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecuteExportPipeline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecuteExportPipeline_Statics::NewProp_BaseNodeContainer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecuteExportPipeline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline" },
		{ "Comment", "/**\n\x09 * Non virtual helper to allow blueprint to implement event base function let the interchange know if it can run asynchronously.\n\x09 * the Interchange manager is calling this function not the virtual one that is call by the default implementation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineBase.h" },
		{ "ToolTip", "Non virtual helper to allow blueprint to implement event base function let the interchange know if it can run asynchronously.\nthe Interchange manager is calling this function not the virtual one that is call by the default implementation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecuteExportPipeline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineBase, nullptr, "ScriptedExecuteExportPipeline", nullptr, nullptr, sizeof(InterchangePipelineBase_eventScriptedExecuteExportPipeline_Parms), Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecuteExportPipeline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecuteExportPipeline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecuteExportPipeline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecuteExportPipeline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecuteExportPipeline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecuteExportPipeline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePipeline_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseNodeContainer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceDatas_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceDatas_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceDatas;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePipeline_Statics::NewProp_BaseNodeContainer = { "BaseNodeContainer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePipelineBase_eventScriptedExecutePipeline_Parms, BaseNodeContainer), Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePipeline_Statics::NewProp_SourceDatas_Inner = { "SourceDatas", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UInterchangeSourceData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePipeline_Statics::NewProp_SourceDatas_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePipeline_Statics::NewProp_SourceDatas = { "SourceDatas", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePipelineBase_eventScriptedExecutePipeline_Parms, SourceDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePipeline_Statics::NewProp_SourceDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePipeline_Statics::NewProp_SourceDatas_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePipeline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePipeline_Statics::NewProp_BaseNodeContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePipeline_Statics::NewProp_SourceDatas_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePipeline_Statics::NewProp_SourceDatas,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePipeline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline" },
		{ "Comment", "/**\n\x09 * ScriptedExecutePipeline, is call after the translation and before we parse the graph to call the factory.\n\x09 * This is where factory node should be created by the pipeline.\n\x09 * Each factory node represent an unreal asset create that will be create by an interchange factory.\n\x09 * @note - the FTaskPipeline is calling this function not the virtual one that is call by the default implementation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineBase.h" },
		{ "ToolTip", "ScriptedExecutePipeline, is call after the translation and before we parse the graph to call the factory.\nThis is where factory node should be created by the pipeline.\nEach factory node represent an unreal asset create that will be create by an interchange factory.\n@note - the FTaskPipeline is calling this function not the virtual one that is call by the default implementation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePipeline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineBase, nullptr, "ScriptedExecutePipeline", nullptr, nullptr, sizeof(InterchangePipelineBase_eventScriptedExecutePipeline_Parms), Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePipeline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePipeline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePipeline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePipeline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePipeline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePipeline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseNodeContainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseNodeContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FactoryNodeKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FactoryNodeKey;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatedAsset;
		static void NewProp_bIsAReimport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAReimport;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline_Statics::NewProp_BaseNodeContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline_Statics::NewProp_BaseNodeContainer = { "BaseNodeContainer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePipelineBase_eventScriptedExecutePostFactoryPipeline_Parms, BaseNodeContainer), Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline_Statics::NewProp_BaseNodeContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline_Statics::NewProp_BaseNodeContainer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline_Statics::NewProp_FactoryNodeKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline_Statics::NewProp_FactoryNodeKey = { "FactoryNodeKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePipelineBase_eventScriptedExecutePostFactoryPipeline_Parms, FactoryNodeKey), METADATA_PARAMS(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline_Statics::NewProp_FactoryNodeKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline_Statics::NewProp_FactoryNodeKey_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline_Statics::NewProp_CreatedAsset = { "CreatedAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePipelineBase_eventScriptedExecutePostFactoryPipeline_Parms, CreatedAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline_Statics::NewProp_bIsAReimport_SetBit(void* Obj)
	{
		((InterchangePipelineBase_eventScriptedExecutePostFactoryPipeline_Parms*)Obj)->bIsAReimport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline_Statics::NewProp_bIsAReimport = { "bIsAReimport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangePipelineBase_eventScriptedExecutePostFactoryPipeline_Parms), &Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline_Statics::NewProp_bIsAReimport_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline_Statics::NewProp_BaseNodeContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline_Statics::NewProp_FactoryNodeKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline_Statics::NewProp_CreatedAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline_Statics::NewProp_bIsAReimport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline" },
		{ "Comment", "/**\n\x09 * ScriptedExecutePostFactoryPipeline is call after the factory create the unreal asset but before calling PostEditChange.\n\x09 * @note - the FTaskPreCompletion task is calling this function not the virtual one that is call by the default implementation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineBase.h" },
		{ "ToolTip", "ScriptedExecutePostFactoryPipeline is call after the factory create the unreal asset but before calling PostEditChange.\n@note - the FTaskPreCompletion task is calling this function not the virtual one that is call by the default implementation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineBase, nullptr, "ScriptedExecutePostFactoryPipeline", nullptr, nullptr, sizeof(InterchangePipelineBase_eventScriptedExecutePostFactoryPipeline_Parms), Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostImportPipeline_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseNodeContainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseNodeContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FactoryNodeKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FactoryNodeKey;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatedAsset;
		static void NewProp_bIsAReimport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAReimport;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostImportPipeline_Statics::NewProp_BaseNodeContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostImportPipeline_Statics::NewProp_BaseNodeContainer = { "BaseNodeContainer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePipelineBase_eventScriptedExecutePostImportPipeline_Parms, BaseNodeContainer), Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostImportPipeline_Statics::NewProp_BaseNodeContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostImportPipeline_Statics::NewProp_BaseNodeContainer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostImportPipeline_Statics::NewProp_FactoryNodeKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostImportPipeline_Statics::NewProp_FactoryNodeKey = { "FactoryNodeKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePipelineBase_eventScriptedExecutePostImportPipeline_Parms, FactoryNodeKey), METADATA_PARAMS(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostImportPipeline_Statics::NewProp_FactoryNodeKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostImportPipeline_Statics::NewProp_FactoryNodeKey_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostImportPipeline_Statics::NewProp_CreatedAsset = { "CreatedAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePipelineBase_eventScriptedExecutePostImportPipeline_Parms, CreatedAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostImportPipeline_Statics::NewProp_bIsAReimport_SetBit(void* Obj)
	{
		((InterchangePipelineBase_eventScriptedExecutePostImportPipeline_Parms*)Obj)->bIsAReimport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostImportPipeline_Statics::NewProp_bIsAReimport = { "bIsAReimport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangePipelineBase_eventScriptedExecutePostImportPipeline_Parms), &Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostImportPipeline_Statics::NewProp_bIsAReimport_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostImportPipeline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostImportPipeline_Statics::NewProp_BaseNodeContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostImportPipeline_Statics::NewProp_FactoryNodeKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostImportPipeline_Statics::NewProp_CreatedAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostImportPipeline_Statics::NewProp_bIsAReimport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostImportPipeline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline" },
		{ "Comment", "/**\n\x09 * ScriptedExecutePostImportPipeline is call after we completely import an asset, PostEditChange is already called.\n\x09 * This can be useful if you need an asset build data to finish the setup of another asset.\n\x09 * @example - PhysicsAsset need skeletal mesh render data to be build properly.\n\x09 * @note - the FTaskPipelinePostImport is calling this function not the virtual one that is call by the default implementation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineBase.h" },
		{ "ToolTip", "ScriptedExecutePostImportPipeline is call after we completely import an asset, PostEditChange is already called.\nThis can be useful if you need an asset build data to finish the setup of another asset.\n@example - PhysicsAsset need skeletal mesh render data to be build properly.\n@note - the FTaskPipelinePostImport is calling this function not the virtual one that is call by the default implementation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostImportPipeline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineBase, nullptr, "ScriptedExecutePostImportPipeline", nullptr, nullptr, sizeof(InterchangePipelineBase_eventScriptedExecutePostImportPipeline_Parms), Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostImportPipeline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostImportPipeline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostImportPipeline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostImportPipeline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostImportPipeline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostImportPipeline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePreImportPipeline_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseNodeContainer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceDatas_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceDatas_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceDatas;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePreImportPipeline_Statics::NewProp_BaseNodeContainer = { "BaseNodeContainer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePipelineBase_eventScriptedExecutePreImportPipeline_Parms, BaseNodeContainer), Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePreImportPipeline_Statics::NewProp_SourceDatas_Inner = { "SourceDatas", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UInterchangeSourceData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePreImportPipeline_Statics::NewProp_SourceDatas_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePreImportPipeline_Statics::NewProp_SourceDatas = { "SourceDatas", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePipelineBase_eventScriptedExecutePreImportPipeline_Parms, SourceDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePreImportPipeline_Statics::NewProp_SourceDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePreImportPipeline_Statics::NewProp_SourceDatas_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePreImportPipeline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePreImportPipeline_Statics::NewProp_BaseNodeContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePreImportPipeline_Statics::NewProp_SourceDatas_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePreImportPipeline_Statics::NewProp_SourceDatas,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePreImportPipeline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline" },
		{ "ModuleRelativePath", "Public/InterchangePipelineBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePreImportPipeline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineBase, nullptr, "ScriptedExecutePreImportPipeline", nullptr, nullptr, sizeof(InterchangePipelineBase_eventScriptedExecutePreImportPipeline_Parms), Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePreImportPipeline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePreImportPipeline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePreImportPipeline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePreImportPipeline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePreImportPipeline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePreImportPipeline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePipelineBase_ScriptedSetReimportSourceIndex_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReimportObjectClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceFileIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SourceFileIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInterchangePipelineBase_ScriptedSetReimportSourceIndex_Statics::NewProp_ReimportObjectClass = { "ReimportObjectClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePipelineBase_eventScriptedSetReimportSourceIndex_Parms, ReimportObjectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineBase_ScriptedSetReimportSourceIndex_Statics::NewProp_SourceFileIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangePipelineBase_ScriptedSetReimportSourceIndex_Statics::NewProp_SourceFileIndex = { "SourceFileIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePipelineBase_eventScriptedSetReimportSourceIndex_Parms, SourceFileIndex), METADATA_PARAMS(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedSetReimportSourceIndex_Statics::NewProp_SourceFileIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedSetReimportSourceIndex_Statics::NewProp_SourceFileIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineBase_ScriptedSetReimportSourceIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineBase_ScriptedSetReimportSourceIndex_Statics::NewProp_ReimportObjectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineBase_ScriptedSetReimportSourceIndex_Statics::NewProp_SourceFileIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineBase_ScriptedSetReimportSourceIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline" },
		{ "Comment", "/**\n\x09 * Non virtual helper to allow blueprint to implement event base function.\n\x09 * the Interchange framework is calling this function not the virtual one that is called by the default implementation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineBase.h" },
		{ "ToolTip", "Non virtual helper to allow blueprint to implement event base function.\nthe Interchange framework is calling this function not the virtual one that is called by the default implementation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineBase_ScriptedSetReimportSourceIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineBase, nullptr, "ScriptedSetReimportSourceIndex", nullptr, nullptr, sizeof(InterchangePipelineBase_eventScriptedSetReimportSourceIndex_Parms), Z_Construct_UFunction_UInterchangePipelineBase_ScriptedSetReimportSourceIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedSetReimportSourceIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedSetReimportSourceIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineBase_ScriptedSetReimportSourceIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangePipelineBase_ScriptedSetReimportSourceIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineBase_ScriptedSetReimportSourceIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangePipelineBase);
	UClass* Z_Construct_UClass_UInterchangePipelineBase_NoRegister()
	{
		return UInterchangePipelineBase::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangePipelineBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Results_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Results;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertiesStates_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertiesStates_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertiesStates_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PropertiesStates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangePipelineBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterchangePipelineBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangePipelineBase_DoesPropertyStatesExist, "DoesPropertyStatesExist" }, // 1562604591
		{ &Z_Construct_UFunction_UInterchangePipelineBase_FindOrAddPropertyStates, "FindOrAddPropertyStates" }, // 38488853
		{ &Z_Construct_UFunction_UInterchangePipelineBase_ScriptedCanExecuteOnAnyThread, "ScriptedCanExecuteOnAnyThread" }, // 750469803
		{ &Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecuteExportPipeline, "ScriptedExecuteExportPipeline" }, // 1933625953
		{ &Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePipeline, "ScriptedExecutePipeline" }, // 3432985446
		{ &Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostFactoryPipeline, "ScriptedExecutePostFactoryPipeline" }, // 798282254
		{ &Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePostImportPipeline, "ScriptedExecutePostImportPipeline" }, // 4148177732
		{ &Z_Construct_UFunction_UInterchangePipelineBase_ScriptedExecutePreImportPipeline, "ScriptedExecutePreImportPipeline" }, // 1894944419
		{ &Z_Construct_UFunction_UInterchangePipelineBase_ScriptedSetReimportSourceIndex, "ScriptedSetReimportSourceIndex" }, // 769161745
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangePipelineBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangePipelineBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InterchangePipelineBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangePipelineBase_Statics::NewProp_Results_MetaData[] = {
		{ "ModuleRelativePath", "Public/InterchangePipelineBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInterchangePipelineBase_Statics::NewProp_Results = { "Results", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangePipelineBase, Results), Z_Construct_UClass_UInterchangeResultsContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterchangePipelineBase_Statics::NewProp_Results_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePipelineBase_Statics::NewProp_Results_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterchangePipelineBase_Statics::NewProp_PropertiesStates_ValueProp = { "PropertiesStates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates, METADATA_PARAMS(nullptr, 0) }; // 3491779153
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UInterchangePipelineBase_Statics::NewProp_PropertiesStates_Key_KeyProp = { "PropertiesStates_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangePipelineBase_Statics::NewProp_PropertiesStates_MetaData[] = {
		{ "Comment", "/**\n\x09 * Map of property path and lock status. Any properties that have a true lock status will be readonly when showing the import dialog.\n\x09 * Use the API to Get and Set the properties states\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineBase.h" },
		{ "ToolTip", "Map of property path and lock status. Any properties that have a true lock status will be readonly when showing the import dialog.\nUse the API to Get and Set the properties states" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInterchangePipelineBase_Statics::NewProp_PropertiesStates = { "PropertiesStates", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangePipelineBase, PropertiesStates), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInterchangePipelineBase_Statics::NewProp_PropertiesStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePipelineBase_Statics::NewProp_PropertiesStates_MetaData)) }; // 3491779153
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangePipelineBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangePipelineBase_Statics::NewProp_Results,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangePipelineBase_Statics::NewProp_PropertiesStates_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangePipelineBase_Statics::NewProp_PropertiesStates_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangePipelineBase_Statics::NewProp_PropertiesStates,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangePipelineBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangePipelineBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangePipelineBase_Statics::ClassParams = {
		&UInterchangePipelineBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInterchangePipelineBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePipelineBase_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangePipelineBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePipelineBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangePipelineBase()
	{
		if (!Z_Registration_Info_UClass_UInterchangePipelineBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangePipelineBase.OuterSingleton, Z_Construct_UClass_UInterchangePipelineBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangePipelineBase.OuterSingleton;
	}
	template<> INTERCHANGECORE_API UClass* StaticClass<UInterchangePipelineBase>()
	{
		return UInterchangePipelineBase::StaticClass();
	}
	UInterchangePipelineBase::UInterchangePipelineBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangePipelineBase);
	UInterchangePipelineBase::~UInterchangePipelineBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_Statics::EnumInfo[] = {
		{ EInterchangePipelineTask_StaticEnum, TEXT("EInterchangePipelineTask"), &Z_Registration_Info_UEnum_EInterchangePipelineTask, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3201342931U) },
		{ EInterchangePipelineContext_StaticEnum, TEXT("EInterchangePipelineContext"), &Z_Registration_Info_UEnum_EInterchangePipelineContext, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2987141902U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_Statics::ScriptStructInfo[] = {
		{ FInterchangePipelinePropertyStatePerContext::StaticStruct, Z_Construct_UScriptStruct_FInterchangePipelinePropertyStatePerContext_Statics::NewStructOps, TEXT("InterchangePipelinePropertyStatePerContext"), &Z_Registration_Info_UScriptStruct_InterchangePipelinePropertyStatePerContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInterchangePipelinePropertyStatePerContext), 303131839U) },
		{ FInterchangePipelinePropertyStates::StaticStruct, Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics::NewStructOps, TEXT("InterchangePipelinePropertyStates"), &Z_Registration_Info_UScriptStruct_InterchangePipelinePropertyStates, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInterchangePipelinePropertyStates), 3491779153U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangePipelineBase, UInterchangePipelineBase::StaticClass, TEXT("UInterchangePipelineBase"), &Z_Registration_Info_UClass_UInterchangePipelineBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangePipelineBase), 1023975058U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_1990756276(TEXT("/Script/InterchangeCore"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
