// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenerateLODMeshesTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenerateLODMeshesTool() {}
// Cross Module References
	HAIRMODELINGTOOLSET_API UClass* Z_Construct_UClass_UGenerateLODMeshesTool();
	HAIRMODELINGTOOLSET_API UClass* Z_Construct_UClass_UGenerateLODMeshesTool_NoRegister();
	HAIRMODELINGTOOLSET_API UClass* Z_Construct_UClass_UGenerateLODMeshesToolBuilder();
	HAIRMODELINGTOOLSET_API UClass* Z_Construct_UClass_UGenerateLODMeshesToolBuilder_NoRegister();
	HAIRMODELINGTOOLSET_API UClass* Z_Construct_UClass_UGenerateLODMeshesToolProperties();
	HAIRMODELINGTOOLSET_API UClass* Z_Construct_UClass_UGenerateLODMeshesToolProperties_NoRegister();
	HAIRMODELINGTOOLSET_API UScriptStruct* Z_Construct_UScriptStruct_FLODLevelGenerateSettings();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshConstraintProperties();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder();
	MODELINGOPERATORSEDITORONLY_API UEnum* Z_Construct_UEnum_ModelingOperatorsEditorOnly_ESimplifyTargetType();
	MODELINGOPERATORSEDITORONLY_API UEnum* Z_Construct_UEnum_ModelingOperatorsEditorOnly_ESimplifyType();
	UPackage* Z_Construct_UPackage__Script_HairModelingToolset();
// End Cross Module References
	void UGenerateLODMeshesToolBuilder::StaticRegisterNativesUGenerateLODMeshesToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGenerateLODMeshesToolBuilder);
	UClass* Z_Construct_UClass_UGenerateLODMeshesToolBuilder_NoRegister()
	{
		return UGenerateLODMeshesToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UGenerateLODMeshesToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGenerateLODMeshesToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_HairModelingToolset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateLODMeshesToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "GenerateLODMeshesTool.h" },
		{ "ModuleRelativePath", "Public/GenerateLODMeshesTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGenerateLODMeshesToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenerateLODMeshesToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenerateLODMeshesToolBuilder_Statics::ClassParams = {
		&UGenerateLODMeshesToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGenerateLODMeshesToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateLODMeshesToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGenerateLODMeshesToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UGenerateLODMeshesToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenerateLODMeshesToolBuilder.OuterSingleton, Z_Construct_UClass_UGenerateLODMeshesToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGenerateLODMeshesToolBuilder.OuterSingleton;
	}
	template<> HAIRMODELINGTOOLSET_API UClass* StaticClass<UGenerateLODMeshesToolBuilder>()
	{
		return UGenerateLODMeshesToolBuilder::StaticClass();
	}
	UGenerateLODMeshesToolBuilder::UGenerateLODMeshesToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGenerateLODMeshesToolBuilder);
	UGenerateLODMeshesToolBuilder::~UGenerateLODMeshesToolBuilder() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LODLevelGenerateSettings;
class UScriptStruct* FLODLevelGenerateSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LODLevelGenerateSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LODLevelGenerateSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLODLevelGenerateSettings, (UObject*)Z_Construct_UPackage__Script_HairModelingToolset(), TEXT("LODLevelGenerateSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LODLevelGenerateSettings.OuterSingleton;
}
template<> HAIRMODELINGTOOLSET_API UScriptStruct* StaticStruct<FLODLevelGenerateSettings>()
{
	return FLODLevelGenerateSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLODLevelGenerateSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_SimplifierType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimplifierType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SimplifierType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetPercentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReproject_MetaData[];
#endif
		static void NewProp_bReproject_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReproject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLODLevelGenerateSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GenerateLODMeshesTool.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLODLevelGenerateSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLODLevelGenerateSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLODLevelGenerateSettings_Statics::NewProp_SimplifierType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLODLevelGenerateSettings_Statics::NewProp_SimplifierType_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Simplification Scheme  */" },
		{ "ModuleRelativePath", "Public/GenerateLODMeshesTool.h" },
		{ "ToolTip", "Simplification Scheme" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLODLevelGenerateSettings_Statics::NewProp_SimplifierType = { "SimplifierType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLODLevelGenerateSettings, SimplifierType), Z_Construct_UEnum_ModelingOperatorsEditorOnly_ESimplifyType, METADATA_PARAMS(Z_Construct_UScriptStruct_FLODLevelGenerateSettings_Statics::NewProp_SimplifierType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLODLevelGenerateSettings_Statics::NewProp_SimplifierType_MetaData)) }; // 3173694660
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLODLevelGenerateSettings_Statics::NewProp_TargetMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLODLevelGenerateSettings_Statics::NewProp_TargetMode_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Simplification Target Type  */" },
		{ "ModuleRelativePath", "Public/GenerateLODMeshesTool.h" },
		{ "ToolTip", "Simplification Target Type" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLODLevelGenerateSettings_Statics::NewProp_TargetMode = { "TargetMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLODLevelGenerateSettings, TargetMode), Z_Construct_UEnum_ModelingOperatorsEditorOnly_ESimplifyTargetType, METADATA_PARAMS(Z_Construct_UScriptStruct_FLODLevelGenerateSettings_Statics::NewProp_TargetMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLODLevelGenerateSettings_Statics::NewProp_TargetMode_MetaData)) }; // 303187214
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLODLevelGenerateSettings_Statics::NewProp_TargetPercentage_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Target percentage */" },
		{ "EditCondition", "TargetMode == ESimplifyTargetType::Percentage" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/GenerateLODMeshesTool.h" },
		{ "ToolTip", "Target percentage" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLODLevelGenerateSettings_Statics::NewProp_TargetPercentage = { "TargetPercentage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLODLevelGenerateSettings, TargetPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FLODLevelGenerateSettings_Statics::NewProp_TargetPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLODLevelGenerateSettings_Statics::NewProp_TargetPercentage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLODLevelGenerateSettings_Statics::NewProp_TargetCount_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "9999999999" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Target vertex/triangle count */" },
		{ "EditCondition", "TargetMode == ESimplifyTargetType::TriangleCount || TargetMode == ESimplifyTargetType::VertexCount" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/GenerateLODMeshesTool.h" },
		{ "ToolTip", "Target vertex/triangle count" },
		{ "UIMax", "10000" },
		{ "UIMin", "4" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLODLevelGenerateSettings_Statics::NewProp_TargetCount = { "TargetCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLODLevelGenerateSettings, TargetCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FLODLevelGenerateSettings_Statics::NewProp_TargetCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLODLevelGenerateSettings_Statics::NewProp_TargetCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLODLevelGenerateSettings_Statics::NewProp_bReproject_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Target vertex/triangle count */" },
		{ "ModuleRelativePath", "Public/GenerateLODMeshesTool.h" },
		{ "ToolTip", "Target vertex/triangle count" },
	};
#endif
	void Z_Construct_UScriptStruct_FLODLevelGenerateSettings_Statics::NewProp_bReproject_SetBit(void* Obj)
	{
		((FLODLevelGenerateSettings*)Obj)->bReproject = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLODLevelGenerateSettings_Statics::NewProp_bReproject = { "bReproject", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLODLevelGenerateSettings), &Z_Construct_UScriptStruct_FLODLevelGenerateSettings_Statics::NewProp_bReproject_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLODLevelGenerateSettings_Statics::NewProp_bReproject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLODLevelGenerateSettings_Statics::NewProp_bReproject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLODLevelGenerateSettings_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GenerateLODMeshesTool.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLODLevelGenerateSettings_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLODLevelGenerateSettings, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FLODLevelGenerateSettings_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLODLevelGenerateSettings_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLODLevelGenerateSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLODLevelGenerateSettings_Statics::NewProp_SimplifierType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLODLevelGenerateSettings_Statics::NewProp_SimplifierType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLODLevelGenerateSettings_Statics::NewProp_TargetMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLODLevelGenerateSettings_Statics::NewProp_TargetMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLODLevelGenerateSettings_Statics::NewProp_TargetPercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLODLevelGenerateSettings_Statics::NewProp_TargetCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLODLevelGenerateSettings_Statics::NewProp_bReproject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLODLevelGenerateSettings_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLODLevelGenerateSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HairModelingToolset,
		nullptr,
		&NewStructOps,
		"LODLevelGenerateSettings",
		sizeof(FLODLevelGenerateSettings),
		alignof(FLODLevelGenerateSettings),
		Z_Construct_UScriptStruct_FLODLevelGenerateSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLODLevelGenerateSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLODLevelGenerateSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLODLevelGenerateSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLODLevelGenerateSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_LODLevelGenerateSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LODLevelGenerateSettings.InnerSingleton, Z_Construct_UScriptStruct_FLODLevelGenerateSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LODLevelGenerateSettings.InnerSingleton;
	}
	void UGenerateLODMeshesToolProperties::StaticRegisterNativesUGenerateLODMeshesToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGenerateLODMeshesToolProperties);
	UClass* Z_Construct_UClass_UGenerateLODMeshesToolProperties_NoRegister()
	{
		return UGenerateLODMeshesToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SimplifierType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimplifierType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SimplifierType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameIndexBase_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NameIndexBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TargetPercentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetEdgeLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetEdgeLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetCount_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TargetCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDiscardAttributes_MetaData[];
#endif
		static void NewProp_bDiscardAttributes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDiscardAttributes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowWireframe_MetaData[];
#endif
		static void NewProp_bShowWireframe_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowWireframe;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowGroupColors_MetaData[];
#endif
		static void NewProp_bShowGroupColors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowGroupColors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReproject_MetaData[];
#endif
		static void NewProp_bReproject_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReproject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LODLevels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODLevels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LODLevels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshConstraintProperties,
		(UObject* (*)())Z_Construct_UPackage__Script_HairModelingToolset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Standard properties of the Simplify operation\n */" },
		{ "IncludePath", "GenerateLODMeshesTool.h" },
		{ "ModuleRelativePath", "Public/GenerateLODMeshesTool.h" },
		{ "ToolTip", "Standard properties of the Simplify operation" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_TargetMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_TargetMode_MetaData[] = {
		{ "Comment", "/** Simplification Target Type  *///UPROPERTY(EditAnywhere, Category = Options)\n" },
		{ "ModuleRelativePath", "Public/GenerateLODMeshesTool.h" },
		{ "ToolTip", "Simplification Target Type  //UPROPERTY(EditAnywhere, Category = Options)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_TargetMode = { "TargetMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGenerateLODMeshesToolProperties, TargetMode), Z_Construct_UEnum_ModelingOperatorsEditorOnly_ESimplifyTargetType, METADATA_PARAMS(Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_TargetMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_TargetMode_MetaData)) }; // 303187214
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_SimplifierType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_SimplifierType_MetaData[] = {
		{ "Comment", "/** Simplification Scheme  *///UPROPERTY(EditAnywhere, Category = Options)\n" },
		{ "ModuleRelativePath", "Public/GenerateLODMeshesTool.h" },
		{ "ToolTip", "Simplification Scheme  //UPROPERTY(EditAnywhere, Category = Options)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_SimplifierType = { "SimplifierType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGenerateLODMeshesToolProperties, SimplifierType), Z_Construct_UEnum_ModelingOperatorsEditorOnly_ESimplifyType, METADATA_PARAMS(Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_SimplifierType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_SimplifierType_MetaData)) }; // 3173694660
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_NameIndexBase_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Output LOD Assets will be numbered starting at this number */" },
		{ "ModuleRelativePath", "Public/GenerateLODMeshesTool.h" },
		{ "ToolTip", "Output LOD Assets will be numbered starting at this number" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_NameIndexBase = { "NameIndexBase", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGenerateLODMeshesToolProperties, NameIndexBase), METADATA_PARAMS(Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_NameIndexBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_NameIndexBase_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_TargetPercentage_MetaData[] = {
		{ "Comment", "/** Target percentage of original triangle count *///UPROPERTY(EditAnywhere, Category = Options, meta = (UIMin = \"0\", UIMax = \"100\", EditCondition = \"TargetMode == ESimplifyTargetType::Percentage\"))\n" },
		{ "ModuleRelativePath", "Public/GenerateLODMeshesTool.h" },
		{ "ToolTip", "Target percentage of original triangle count //UPROPERTY(EditAnywhere, Category = Options, meta = (UIMin = \"0\", UIMax = \"100\", EditCondition = \"TargetMode == ESimplifyTargetType::Percentage\"))" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_TargetPercentage = { "TargetPercentage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGenerateLODMeshesToolProperties, TargetPercentage), METADATA_PARAMS(Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_TargetPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_TargetPercentage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_TargetEdgeLength_MetaData[] = {
		{ "Comment", "/** Target edge length *///UPROPERTY(EditAnywhere, Category = Options, meta = (UIMin = \"3.0\", UIMax = \"10.0\", ClampMin = \"0.001\", ClampMax = \"1000.0\", EditCondition = \"TargetMode == ESimplifyTargetType::EdgeLength && SimplifierType != ESimplifyType::UEStandard\"))\n" },
		{ "ModuleRelativePath", "Public/GenerateLODMeshesTool.h" },
		{ "ToolTip", "Target edge length //UPROPERTY(EditAnywhere, Category = Options, meta = (UIMin = \"3.0\", UIMax = \"10.0\", ClampMin = \"0.001\", ClampMax = \"1000.0\", EditCondition = \"TargetMode == ESimplifyTargetType::EdgeLength && SimplifierType != ESimplifyType::UEStandard\"))" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_TargetEdgeLength = { "TargetEdgeLength", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGenerateLODMeshesToolProperties, TargetEdgeLength), METADATA_PARAMS(Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_TargetEdgeLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_TargetEdgeLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_TargetCount_MetaData[] = {
		{ "Comment", "/** Target triangle/vertex count *///UPROPERTY(EditAnywhere, Category = Options, meta = (UIMin = \"4\", UIMax = \"10000\", ClampMin = \"1\", ClampMax = \"9999999999\", EditCondition = \"TargetMode == ESimplifyTargetType::TriangleCount\"))\n" },
		{ "ModuleRelativePath", "Public/GenerateLODMeshesTool.h" },
		{ "ToolTip", "Target triangle/vertex count //UPROPERTY(EditAnywhere, Category = Options, meta = (UIMin = \"4\", UIMax = \"10000\", ClampMin = \"1\", ClampMax = \"9999999999\", EditCondition = \"TargetMode == ESimplifyTargetType::TriangleCount\"))" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_TargetCount = { "TargetCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGenerateLODMeshesToolProperties, TargetCount), METADATA_PARAMS(Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_TargetCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_TargetCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_bDiscardAttributes_MetaData[] = {
		{ "Comment", "/** Discard UVs and existing normals, allowing the simplifier to ignore any UV and normal seams. New per-vertex normals are computed. *///UPROPERTY(EditAnywhere, Category = Options)\n" },
		{ "ModuleRelativePath", "Public/GenerateLODMeshesTool.h" },
		{ "ToolTip", "Discard UVs and existing normals, allowing the simplifier to ignore any UV and normal seams. New per-vertex normals are computed. //UPROPERTY(EditAnywhere, Category = Options)" },
	};
#endif
	void Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_bDiscardAttributes_SetBit(void* Obj)
	{
		((UGenerateLODMeshesToolProperties*)Obj)->bDiscardAttributes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_bDiscardAttributes = { "bDiscardAttributes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGenerateLODMeshesToolProperties), &Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_bDiscardAttributes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_bDiscardAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_bDiscardAttributes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_bShowWireframe_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** If true, display wireframe */" },
		{ "ModuleRelativePath", "Public/GenerateLODMeshesTool.h" },
		{ "ToolTip", "If true, display wireframe" },
	};
#endif
	void Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_bShowWireframe_SetBit(void* Obj)
	{
		((UGenerateLODMeshesToolProperties*)Obj)->bShowWireframe = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_bShowWireframe = { "bShowWireframe", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGenerateLODMeshesToolProperties), &Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_bShowWireframe_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_bShowWireframe_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_bShowWireframe_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_bShowGroupColors_MetaData[] = {
		{ "Comment", "/** Display colors corresponding to the mesh's polygon groups *///UPROPERTY(EditAnywhere, Category = Display)\n" },
		{ "ModuleRelativePath", "Public/GenerateLODMeshesTool.h" },
		{ "ToolTip", "Display colors corresponding to the mesh's polygon groups //UPROPERTY(EditAnywhere, Category = Display)" },
	};
#endif
	void Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_bShowGroupColors_SetBit(void* Obj)
	{
		((UGenerateLODMeshesToolProperties*)Obj)->bShowGroupColors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_bShowGroupColors = { "bShowGroupColors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGenerateLODMeshesToolProperties), &Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_bShowGroupColors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_bShowGroupColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_bShowGroupColors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_bReproject_MetaData[] = {
		{ "Comment", "/** Enable projection back to input mesh *///UPROPERTY(EditAnywhere, Category = Options, AdvancedDisplay)\n" },
		{ "ModuleRelativePath", "Public/GenerateLODMeshesTool.h" },
		{ "ToolTip", "Enable projection back to input mesh //UPROPERTY(EditAnywhere, Category = Options, AdvancedDisplay)" },
	};
#endif
	void Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_bReproject_SetBit(void* Obj)
	{
		((UGenerateLODMeshesToolProperties*)Obj)->bReproject = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_bReproject = { "bReproject", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGenerateLODMeshesToolProperties), &Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_bReproject_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_bReproject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_bReproject_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_LODLevels_Inner = { "LODLevels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLODLevelGenerateSettings, METADATA_PARAMS(nullptr, 0) }; // 2881408551
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_LODLevels_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GenerateLODMeshesTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_LODLevels = { "LODLevels", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGenerateLODMeshesToolProperties, LODLevels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_LODLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_LODLevels_MetaData)) }; // 2881408551
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_TargetMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_TargetMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_SimplifierType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_SimplifierType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_NameIndexBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_TargetPercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_TargetEdgeLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_TargetCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_bDiscardAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_bShowWireframe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_bShowGroupColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_bReproject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_LODLevels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::NewProp_LODLevels,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenerateLODMeshesToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::ClassParams = {
		&UGenerateLODMeshesToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGenerateLODMeshesToolProperties()
	{
		if (!Z_Registration_Info_UClass_UGenerateLODMeshesToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenerateLODMeshesToolProperties.OuterSingleton, Z_Construct_UClass_UGenerateLODMeshesToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGenerateLODMeshesToolProperties.OuterSingleton;
	}
	template<> HAIRMODELINGTOOLSET_API UClass* StaticClass<UGenerateLODMeshesToolProperties>()
	{
		return UGenerateLODMeshesToolProperties::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGenerateLODMeshesToolProperties);
	UGenerateLODMeshesToolProperties::~UGenerateLODMeshesToolProperties() {}
	void UGenerateLODMeshesTool::StaticRegisterNativesUGenerateLODMeshesTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGenerateLODMeshesTool);
	UClass* Z_Construct_UClass_UGenerateLODMeshesTool_NoRegister()
	{
		return UGenerateLODMeshesTool::StaticClass();
	}
	struct Z_Construct_UClass_UGenerateLODMeshesTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimplifyProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SimplifyProperties;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Previews_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Previews_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Previews;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGenerateLODMeshesTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingTool,
		(UObject* (*)())Z_Construct_UPackage__Script_HairModelingToolset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateLODMeshesTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Simple Mesh Simplifying Tool\n */" },
		{ "IncludePath", "GenerateLODMeshesTool.h" },
		{ "ModuleRelativePath", "Public/GenerateLODMeshesTool.h" },
		{ "ToolTip", "Simple Mesh Simplifying Tool" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateLODMeshesTool_Statics::NewProp_SimplifyProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/GenerateLODMeshesTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGenerateLODMeshesTool_Statics::NewProp_SimplifyProperties = { "SimplifyProperties", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGenerateLODMeshesTool, SimplifyProperties), Z_Construct_UClass_UGenerateLODMeshesToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGenerateLODMeshesTool_Statics::NewProp_SimplifyProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateLODMeshesTool_Statics::NewProp_SimplifyProperties_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGenerateLODMeshesTool_Statics::NewProp_Previews_Inner = { "Previews", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateLODMeshesTool_Statics::NewProp_Previews_MetaData[] = {
		{ "ModuleRelativePath", "Public/GenerateLODMeshesTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGenerateLODMeshesTool_Statics::NewProp_Previews = { "Previews", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGenerateLODMeshesTool, Previews), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGenerateLODMeshesTool_Statics::NewProp_Previews_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateLODMeshesTool_Statics::NewProp_Previews_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGenerateLODMeshesTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateLODMeshesTool_Statics::NewProp_SimplifyProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateLODMeshesTool_Statics::NewProp_Previews_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateLODMeshesTool_Statics::NewProp_Previews,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGenerateLODMeshesTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenerateLODMeshesTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenerateLODMeshesTool_Statics::ClassParams = {
		&UGenerateLODMeshesTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGenerateLODMeshesTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateLODMeshesTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGenerateLODMeshesTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateLODMeshesTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGenerateLODMeshesTool()
	{
		if (!Z_Registration_Info_UClass_UGenerateLODMeshesTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenerateLODMeshesTool.OuterSingleton, Z_Construct_UClass_UGenerateLODMeshesTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGenerateLODMeshesTool.OuterSingleton;
	}
	template<> HAIRMODELINGTOOLSET_API UClass* StaticClass<UGenerateLODMeshesTool>()
	{
		return UGenerateLODMeshesTool::StaticClass();
	}
	UGenerateLODMeshesTool::UGenerateLODMeshesTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGenerateLODMeshesTool);
	UGenerateLODMeshesTool::~UGenerateLODMeshesTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_HairModelingToolset_Source_HairModelingToolset_Public_GenerateLODMeshesTool_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_HairModelingToolset_Source_HairModelingToolset_Public_GenerateLODMeshesTool_h_Statics::ScriptStructInfo[] = {
		{ FLODLevelGenerateSettings::StaticStruct, Z_Construct_UScriptStruct_FLODLevelGenerateSettings_Statics::NewStructOps, TEXT("LODLevelGenerateSettings"), &Z_Registration_Info_UScriptStruct_LODLevelGenerateSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLODLevelGenerateSettings), 2881408551U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_HairModelingToolset_Source_HairModelingToolset_Public_GenerateLODMeshesTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGenerateLODMeshesToolBuilder, UGenerateLODMeshesToolBuilder::StaticClass, TEXT("UGenerateLODMeshesToolBuilder"), &Z_Registration_Info_UClass_UGenerateLODMeshesToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenerateLODMeshesToolBuilder), 153743950U) },
		{ Z_Construct_UClass_UGenerateLODMeshesToolProperties, UGenerateLODMeshesToolProperties::StaticClass, TEXT("UGenerateLODMeshesToolProperties"), &Z_Registration_Info_UClass_UGenerateLODMeshesToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenerateLODMeshesToolProperties), 3839967075U) },
		{ Z_Construct_UClass_UGenerateLODMeshesTool, UGenerateLODMeshesTool::StaticClass, TEXT("UGenerateLODMeshesTool"), &Z_Registration_Info_UClass_UGenerateLODMeshesTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenerateLODMeshesTool), 2629345305U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_HairModelingToolset_Source_HairModelingToolset_Public_GenerateLODMeshesTool_h_828718693(TEXT("/Script/HairModelingToolset"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_HairModelingToolset_Source_HairModelingToolset_Public_GenerateLODMeshesTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_HairModelingToolset_Source_HairModelingToolset_Public_GenerateLODMeshesTool_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_HairModelingToolset_Source_HairModelingToolset_Public_GenerateLODMeshesTool_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_HairModelingToolset_Source_HairModelingToolset_Public_GenerateLODMeshesTool_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
