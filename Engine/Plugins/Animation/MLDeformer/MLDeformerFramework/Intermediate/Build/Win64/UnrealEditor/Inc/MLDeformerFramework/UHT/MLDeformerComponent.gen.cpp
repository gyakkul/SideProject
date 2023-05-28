// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MLDeformerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMLDeformerComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerAsset_NoRegister();
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerComponent();
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerComponent_NoRegister();
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerModelInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MLDeformerFramework();
// End Cross Module References
	DEFINE_FUNCTION(UMLDeformerComponent::execUpdateSkeletalMeshComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSkeletalMeshComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMLDeformerComponent::execGetSkeletalMeshComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetSkeletalMeshComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMLDeformerComponent::execFindSkeletalMeshComponent)
	{
		P_GET_OBJECT(UMLDeformerAsset,Z_Param_Asset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->FindSkeletalMeshComponent(Z_Param_Asset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMLDeformerComponent::execSetDeformerAsset)
	{
		P_GET_OBJECT(UMLDeformerAsset,Z_Param_InDeformerAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDeformerAsset(Z_Param_InDeformerAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMLDeformerComponent::execGetDeformerAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMLDeformerAsset**)Z_Param__Result=P_THIS->GetDeformerAsset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMLDeformerComponent::execGetQualityLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetQualityLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMLDeformerComponent::execSetQualityLevel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InQualityLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetQualityLevel(Z_Param_InQualityLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMLDeformerComponent::execSetWeight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NormalizedWeightValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWeight(Z_Param_NormalizedWeightValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMLDeformerComponent::execGetWeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetWeight();
		P_NATIVE_END;
	}
	void UMLDeformerComponent::StaticRegisterNativesUMLDeformerComponent()
	{
		UClass* Class = UMLDeformerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindSkeletalMeshComponent", &UMLDeformerComponent::execFindSkeletalMeshComponent },
			{ "GetDeformerAsset", &UMLDeformerComponent::execGetDeformerAsset },
			{ "GetQualityLevel", &UMLDeformerComponent::execGetQualityLevel },
			{ "GetSkeletalMeshComponent", &UMLDeformerComponent::execGetSkeletalMeshComponent },
			{ "GetWeight", &UMLDeformerComponent::execGetWeight },
			{ "SetDeformerAsset", &UMLDeformerComponent::execSetDeformerAsset },
			{ "SetQualityLevel", &UMLDeformerComponent::execSetQualityLevel },
			{ "SetWeight", &UMLDeformerComponent::execSetWeight },
			{ "UpdateSkeletalMeshComponent", &UMLDeformerComponent::execUpdateSkeletalMeshComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMLDeformerComponent_FindSkeletalMeshComponent_Statics
	{
		struct MLDeformerComponent_eventFindSkeletalMeshComponent_Parms
		{
			const UMLDeformerAsset* Asset;
			USkeletalMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMLDeformerComponent_FindSkeletalMeshComponent_Statics::NewProp_Asset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMLDeformerComponent_FindSkeletalMeshComponent_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MLDeformerComponent_eventFindSkeletalMeshComponent_Parms, Asset), Z_Construct_UClass_UMLDeformerAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMLDeformerComponent_FindSkeletalMeshComponent_Statics::NewProp_Asset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLDeformerComponent_FindSkeletalMeshComponent_Statics::NewProp_Asset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMLDeformerComponent_FindSkeletalMeshComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMLDeformerComponent_FindSkeletalMeshComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MLDeformerComponent_eventFindSkeletalMeshComponent_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMLDeformerComponent_FindSkeletalMeshComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLDeformerComponent_FindSkeletalMeshComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMLDeformerComponent_FindSkeletalMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMLDeformerComponent_FindSkeletalMeshComponent_Statics::NewProp_Asset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMLDeformerComponent_FindSkeletalMeshComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMLDeformerComponent_FindSkeletalMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "MLDeformer" },
		{ "Comment", "/**\n\x09 * Find the skeletal mesh component to apply the deformer on.\n\x09 * This will return the skeletal mesh component (on this actor) which uses the same skeletal mesh as the passed in ML Deformer asset was trained on.\n\x09 * If there is no such skeletal mesh component then it will return a nullptr.\n\x09 * @param Asset The ML Deformer asset to search a component for.\n\x09 * @return The skeletal mesh component that would be the best.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MLDeformerComponent.h" },
		{ "ToolTip", "Find the skeletal mesh component to apply the deformer on.\nThis will return the skeletal mesh component (on this actor) which uses the same skeletal mesh as the passed in ML Deformer asset was trained on.\nIf there is no such skeletal mesh component then it will return a nullptr.\n@param Asset The ML Deformer asset to search a component for.\n@return The skeletal mesh component that would be the best." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMLDeformerComponent_FindSkeletalMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMLDeformerComponent, nullptr, "FindSkeletalMeshComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMLDeformerComponent_FindSkeletalMeshComponent_Statics::MLDeformerComponent_eventFindSkeletalMeshComponent_Parms), Z_Construct_UFunction_UMLDeformerComponent_FindSkeletalMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLDeformerComponent_FindSkeletalMeshComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMLDeformerComponent_FindSkeletalMeshComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLDeformerComponent_FindSkeletalMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMLDeformerComponent_FindSkeletalMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMLDeformerComponent_FindSkeletalMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMLDeformerComponent_GetDeformerAsset_Statics
	{
		struct MLDeformerComponent_eventGetDeformerAsset_Parms
		{
			UMLDeformerAsset* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMLDeformerComponent_GetDeformerAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MLDeformerComponent_eventGetDeformerAsset_Parms, ReturnValue), Z_Construct_UClass_UMLDeformerAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMLDeformerComponent_GetDeformerAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMLDeformerComponent_GetDeformerAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMLDeformerComponent_GetDeformerAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "MLDeformer" },
		{ "Comment", "/**\n\x09 * Get the ML Deformer asset that is used by this component.\n\x09 * @return A pointer to the ML Deformer asset.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MLDeformerComponent.h" },
		{ "ToolTip", "Get the ML Deformer asset that is used by this component.\n@return A pointer to the ML Deformer asset." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMLDeformerComponent_GetDeformerAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMLDeformerComponent, nullptr, "GetDeformerAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMLDeformerComponent_GetDeformerAsset_Statics::MLDeformerComponent_eventGetDeformerAsset_Parms), Z_Construct_UFunction_UMLDeformerComponent_GetDeformerAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLDeformerComponent_GetDeformerAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMLDeformerComponent_GetDeformerAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLDeformerComponent_GetDeformerAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMLDeformerComponent_GetDeformerAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMLDeformerComponent_GetDeformerAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMLDeformerComponent_GetQualityLevel_Statics
	{
		struct MLDeformerComponent_eventGetQualityLevel_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMLDeformerComponent_GetQualityLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MLDeformerComponent_eventGetQualityLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMLDeformerComponent_GetQualityLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMLDeformerComponent_GetQualityLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMLDeformerComponent_GetQualityLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "MLDeformer" },
		{ "Comment", "/** \n\x09 * The quality level of the deformer. A value of 0 is the highest quality, 1 is a step lower, etc.\n\x09 * It is up to the models to configure what each quality level means visually.\n\x09 * If the quality level will be clamped to the available quality levels, so if you choose quality level 100, while there are only 3 levels, then quality\n\x09 * level 3 will be used in this case, which represents the lowest available quality.\n\x09 * In morph based models each quality level defines how many morph targets are active at most.\n\x09 * @param InQualityLevel The quality level to switch to.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MLDeformerComponent.h" },
		{ "ToolTip", "The quality level of the deformer. A value of 0 is the highest quality, 1 is a step lower, etc.\nIt is up to the models to configure what each quality level means visually.\nIf the quality level will be clamped to the available quality levels, so if you choose quality level 100, while there are only 3 levels, then quality\nlevel 3 will be used in this case, which represents the lowest available quality.\nIn morph based models each quality level defines how many morph targets are active at most.\n@param InQualityLevel The quality level to switch to." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMLDeformerComponent_GetQualityLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMLDeformerComponent, nullptr, "GetQualityLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMLDeformerComponent_GetQualityLevel_Statics::MLDeformerComponent_eventGetQualityLevel_Parms), Z_Construct_UFunction_UMLDeformerComponent_GetQualityLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLDeformerComponent_GetQualityLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMLDeformerComponent_GetQualityLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLDeformerComponent_GetQualityLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMLDeformerComponent_GetQualityLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMLDeformerComponent_GetQualityLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMLDeformerComponent_GetSkeletalMeshComponent_Statics
	{
		struct MLDeformerComponent_eventGetSkeletalMeshComponent_Parms
		{
			USkeletalMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMLDeformerComponent_GetSkeletalMeshComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMLDeformerComponent_GetSkeletalMeshComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MLDeformerComponent_eventGetSkeletalMeshComponent_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMLDeformerComponent_GetSkeletalMeshComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLDeformerComponent_GetSkeletalMeshComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMLDeformerComponent_GetSkeletalMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMLDeformerComponent_GetSkeletalMeshComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMLDeformerComponent_GetSkeletalMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "MLDeformer" },
		{ "Comment", "/**\n\x09 * Get the skeletal mesh component that the ML Deformer will work on.\n\x09 * The skeletal mesh that is setup inside the skeletal mesh component will be the mesh that will be deformed by this ML Deformer component.\n\x09 * @return A pointer to the skeletal mesh component who's mesh will be deformed by this ML Deformer component.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MLDeformerComponent.h" },
		{ "ToolTip", "Get the skeletal mesh component that the ML Deformer will work on.\nThe skeletal mesh that is setup inside the skeletal mesh component will be the mesh that will be deformed by this ML Deformer component.\n@return A pointer to the skeletal mesh component who's mesh will be deformed by this ML Deformer component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMLDeformerComponent_GetSkeletalMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMLDeformerComponent, nullptr, "GetSkeletalMeshComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMLDeformerComponent_GetSkeletalMeshComponent_Statics::MLDeformerComponent_eventGetSkeletalMeshComponent_Parms), Z_Construct_UFunction_UMLDeformerComponent_GetSkeletalMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLDeformerComponent_GetSkeletalMeshComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMLDeformerComponent_GetSkeletalMeshComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLDeformerComponent_GetSkeletalMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMLDeformerComponent_GetSkeletalMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMLDeformerComponent_GetSkeletalMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMLDeformerComponent_GetWeight_Statics
	{
		struct MLDeformerComponent_eventGetWeight_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMLDeformerComponent_GetWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MLDeformerComponent_eventGetWeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMLDeformerComponent_GetWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMLDeformerComponent_GetWeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMLDeformerComponent_GetWeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "MLDeformer" },
		{ "Comment", "/** \n\x09 * Get the current ML Deformer weight. A value of 0 means it is fully disabled, while 1 means fully active.\n\x09 * Values can be anything between 0 and 1.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MLDeformerComponent.h" },
		{ "ToolTip", "Get the current ML Deformer weight. A value of 0 means it is fully disabled, while 1 means fully active.\nValues can be anything between 0 and 1." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMLDeformerComponent_GetWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMLDeformerComponent, nullptr, "GetWeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMLDeformerComponent_GetWeight_Statics::MLDeformerComponent_eventGetWeight_Parms), Z_Construct_UFunction_UMLDeformerComponent_GetWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLDeformerComponent_GetWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMLDeformerComponent_GetWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLDeformerComponent_GetWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMLDeformerComponent_GetWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMLDeformerComponent_GetWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMLDeformerComponent_SetDeformerAsset_Statics
	{
		struct MLDeformerComponent_eventSetDeformerAsset_Parms
		{
			UMLDeformerAsset* InDeformerAsset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InDeformerAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMLDeformerComponent_SetDeformerAsset_Statics::NewProp_InDeformerAsset = { "InDeformerAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MLDeformerComponent_eventSetDeformerAsset_Parms, InDeformerAsset), Z_Construct_UClass_UMLDeformerAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMLDeformerComponent_SetDeformerAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMLDeformerComponent_SetDeformerAsset_Statics::NewProp_InDeformerAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMLDeformerComponent_SetDeformerAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "MLDeformer" },
		{ "Comment", "/**\n\x09 * Set the deformer asset that is used by this component.\n\x09 * This will trigger the internal ML Deformer instance to be recreated.\n\x09 * @param InDeformerAsset A pointer to the deformer asset.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MLDeformerComponent.h" },
		{ "ToolTip", "Set the deformer asset that is used by this component.\nThis will trigger the internal ML Deformer instance to be recreated.\n@param InDeformerAsset A pointer to the deformer asset." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMLDeformerComponent_SetDeformerAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMLDeformerComponent, nullptr, "SetDeformerAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMLDeformerComponent_SetDeformerAsset_Statics::MLDeformerComponent_eventSetDeformerAsset_Parms), Z_Construct_UFunction_UMLDeformerComponent_SetDeformerAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLDeformerComponent_SetDeformerAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMLDeformerComponent_SetDeformerAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLDeformerComponent_SetDeformerAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMLDeformerComponent_SetDeformerAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMLDeformerComponent_SetDeformerAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMLDeformerComponent_SetQualityLevel_Statics
	{
		struct MLDeformerComponent_eventSetQualityLevel_Parms
		{
			int32 InQualityLevel;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InQualityLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMLDeformerComponent_SetQualityLevel_Statics::NewProp_InQualityLevel = { "InQualityLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MLDeformerComponent_eventSetQualityLevel_Parms, InQualityLevel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMLDeformerComponent_SetQualityLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMLDeformerComponent_SetQualityLevel_Statics::NewProp_InQualityLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMLDeformerComponent_SetQualityLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "MLDeformer" },
		{ "Comment", "/** \n\x09 * The quality level of the deformer. A value of 0 is the highest quality, 1 is a step lower, etc.\n\x09 * It is up to the models to configure what each quality level means visually.\n\x09 * If the quality level will be clamped to the available quality levels, so if you choose quality level 100, while there are only 3 levels, then quality\n\x09 * level 3 will be used in this case, which represents the lowest available quality.\n\x09 * In morph based models each quality level defines how many morph targets are active at most.\n\x09 * @param InQualityLevel The quality level to switch to.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MLDeformerComponent.h" },
		{ "ToolTip", "The quality level of the deformer. A value of 0 is the highest quality, 1 is a step lower, etc.\nIt is up to the models to configure what each quality level means visually.\nIf the quality level will be clamped to the available quality levels, so if you choose quality level 100, while there are only 3 levels, then quality\nlevel 3 will be used in this case, which represents the lowest available quality.\nIn morph based models each quality level defines how many morph targets are active at most.\n@param InQualityLevel The quality level to switch to." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMLDeformerComponent_SetQualityLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMLDeformerComponent, nullptr, "SetQualityLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMLDeformerComponent_SetQualityLevel_Statics::MLDeformerComponent_eventSetQualityLevel_Parms), Z_Construct_UFunction_UMLDeformerComponent_SetQualityLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLDeformerComponent_SetQualityLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMLDeformerComponent_SetQualityLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLDeformerComponent_SetQualityLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMLDeformerComponent_SetQualityLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMLDeformerComponent_SetQualityLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMLDeformerComponent_SetWeight_Statics
	{
		struct MLDeformerComponent_eventSetWeight_Parms
		{
			float NormalizedWeightValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizedWeightValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMLDeformerComponent_SetWeight_Statics::NewProp_NormalizedWeightValue = { "NormalizedWeightValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MLDeformerComponent_eventSetWeight_Parms, NormalizedWeightValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMLDeformerComponent_SetWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMLDeformerComponent_SetWeight_Statics::NewProp_NormalizedWeightValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMLDeformerComponent_SetWeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "MLDeformer" },
		{ "Comment", "/**\n\x09 * Set the ML Deformer weight. This determines how active the deformer is. You can see it as a blend weight.\n\x09 * A value of 0 means it is inactive. Certain calculations will be skipped in that case.\n\x09 * A value of 1 means it is fully active.\n\x09 * Values between 0 and 1 blend between the two states.\n\x09 * Call this after you call SetupComponent.\n\x09 * @param NormalizedWeightValue The weight value.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MLDeformerComponent.h" },
		{ "ToolTip", "Set the ML Deformer weight. This determines how active the deformer is. You can see it as a blend weight.\nA value of 0 means it is inactive. Certain calculations will be skipped in that case.\nA value of 1 means it is fully active.\nValues between 0 and 1 blend between the two states.\nCall this after you call SetupComponent.\n@param NormalizedWeightValue The weight value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMLDeformerComponent_SetWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMLDeformerComponent, nullptr, "SetWeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMLDeformerComponent_SetWeight_Statics::MLDeformerComponent_eventSetWeight_Parms), Z_Construct_UFunction_UMLDeformerComponent_SetWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLDeformerComponent_SetWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMLDeformerComponent_SetWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLDeformerComponent_SetWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMLDeformerComponent_SetWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMLDeformerComponent_SetWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMLDeformerComponent_UpdateSkeletalMeshComponent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMLDeformerComponent_UpdateSkeletalMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "MLDeformer" },
		{ "Comment", "/** Find the skeletal mesh component that this deformer should work on, and set it as our target component. */" },
		{ "ModuleRelativePath", "Public/MLDeformerComponent.h" },
		{ "ToolTip", "Find the skeletal mesh component that this deformer should work on, and set it as our target component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMLDeformerComponent_UpdateSkeletalMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMLDeformerComponent, nullptr, "UpdateSkeletalMeshComponent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMLDeformerComponent_UpdateSkeletalMeshComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLDeformerComponent_UpdateSkeletalMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMLDeformerComponent_UpdateSkeletalMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMLDeformerComponent_UpdateSkeletalMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMLDeformerComponent);
	UClass* Z_Construct_UClass_UMLDeformerComponent_NoRegister()
	{
		return UMLDeformerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMLDeformerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeformerAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DeformerAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QualityLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_QualityLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModelInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ModelInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMLDeformerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MLDeformerFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMLDeformerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMLDeformerComponent_FindSkeletalMeshComponent, "FindSkeletalMeshComponent" }, // 3517516052
		{ &Z_Construct_UFunction_UMLDeformerComponent_GetDeformerAsset, "GetDeformerAsset" }, // 2136745466
		{ &Z_Construct_UFunction_UMLDeformerComponent_GetQualityLevel, "GetQualityLevel" }, // 2267949301
		{ &Z_Construct_UFunction_UMLDeformerComponent_GetSkeletalMeshComponent, "GetSkeletalMeshComponent" }, // 376533123
		{ &Z_Construct_UFunction_UMLDeformerComponent_GetWeight, "GetWeight" }, // 1152590144
		{ &Z_Construct_UFunction_UMLDeformerComponent_SetDeformerAsset, "SetDeformerAsset" }, // 2175468705
		{ &Z_Construct_UFunction_UMLDeformerComponent_SetQualityLevel, "SetQualityLevel" }, // 2172617107
		{ &Z_Construct_UFunction_UMLDeformerComponent_SetWeight, "SetWeight" }, // 2410804242
		{ &Z_Construct_UFunction_UMLDeformerComponent_UpdateSkeletalMeshComponent, "UpdateSkeletalMeshComponent" }, // 2121030458
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Component" },
		{ "Comment", "/**\n * The ML mesh deformer component.\n * This works in combination with a MLDeformerAsset and SkeletalMeshComponent.\n * The component will perform runtime inference of the deformer model setup inside the asset.\n * When you have multiple skeletal mesh components on your actor, this component will try to use the skeletal mesh component that uses\n * the same skeletal mesh as the applied deformer was trained on.\n * If it cannot find that, it will use the first skeletal mesh component it finds.\n */" },
		{ "IncludePath", "MLDeformerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MLDeformerComponent.h" },
		{ "ToolTip", "The ML mesh deformer component.\nThis works in combination with a MLDeformerAsset and SkeletalMeshComponent.\nThe component will perform runtime inference of the deformer model setup inside the asset.\nWhen you have multiple skeletal mesh components on your actor, this component will try to use the skeletal mesh component that uses\nthe same skeletal mesh as the applied deformer was trained on.\nIf it cannot find that, it will use the first skeletal mesh component it finds." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerComponent_Statics::NewProp_DeformerAsset_MetaData[] = {
		{ "Category", "ML Deformer" },
		{ "Comment", "/** The deformer asset to use. */" },
		{ "DisplayName", "ML Deformer Asset" },
		{ "ModuleRelativePath", "Public/MLDeformerComponent.h" },
		{ "ToolTip", "The deformer asset to use." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMLDeformerComponent_Statics::NewProp_DeformerAsset = { "DeformerAsset", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerComponent, DeformerAsset), Z_Construct_UClass_UMLDeformerAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMLDeformerComponent_Statics::NewProp_DeformerAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerComponent_Statics::NewProp_DeformerAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerComponent_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "ML Deformer" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** How active is this deformer? Can be used to blend it in and out. */" },
		{ "ModuleRelativePath", "Public/MLDeformerComponent.h" },
		{ "ToolTip", "How active is this deformer? Can be used to blend it in and out." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMLDeformerComponent_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerComponent, Weight), METADATA_PARAMS(Z_Construct_UClass_UMLDeformerComponent_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerComponent_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerComponent_Statics::NewProp_QualityLevel_MetaData[] = {
		{ "Category", "ML Deformer" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The quality level of the deformer. A value of 0 is the highest quality, 1 is a step lower, etc.\n\x09 * It is up to the models to configure what each quality level means visually.\n\x09 * If the quality level will be clamped to the available quality levels, so if you choose quality level 100, while there are only 3 levels, then quality\n\x09 * level 3 will be used in this case, which represents the lowest available quality.\n\x09 * In morph based models each quality level defines how many morph targets are active at most.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MLDeformerComponent.h" },
		{ "ToolTip", "The quality level of the deformer. A value of 0 is the highest quality, 1 is a step lower, etc.\nIt is up to the models to configure what each quality level means visually.\nIf the quality level will be clamped to the available quality levels, so if you choose quality level 100, while there are only 3 levels, then quality\nlevel 3 will be used in this case, which represents the lowest available quality.\nIn morph based models each quality level defines how many morph targets are active at most." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMLDeformerComponent_Statics::NewProp_QualityLevel = { "QualityLevel", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerComponent, QualityLevel), METADATA_PARAMS(Z_Construct_UClass_UMLDeformerComponent_Statics::NewProp_QualityLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerComponent_Statics::NewProp_QualityLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerComponent_Statics::NewProp_ModelInstance_MetaData[] = {
		{ "Comment", "/** The deformation model instance. This is used to perform the runtime updates and run the inference. */" },
		{ "ModuleRelativePath", "Public/MLDeformerComponent.h" },
		{ "ToolTip", "The deformation model instance. This is used to perform the runtime updates and run the inference." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMLDeformerComponent_Statics::NewProp_ModelInstance = { "ModelInstance", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerComponent, ModelInstance), Z_Construct_UClass_UMLDeformerModelInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMLDeformerComponent_Statics::NewProp_ModelInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerComponent_Statics::NewProp_ModelInstance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMLDeformerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerComponent_Statics::NewProp_DeformerAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerComponent_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerComponent_Statics::NewProp_QualityLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerComponent_Statics::NewProp_ModelInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMLDeformerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMLDeformerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMLDeformerComponent_Statics::ClassParams = {
		&UMLDeformerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMLDeformerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMLDeformerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMLDeformerComponent()
	{
		if (!Z_Registration_Info_UClass_UMLDeformerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMLDeformerComponent.OuterSingleton, Z_Construct_UClass_UMLDeformerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMLDeformerComponent.OuterSingleton;
	}
	template<> MLDEFORMERFRAMEWORK_API UClass* StaticClass<UMLDeformerComponent>()
	{
		return UMLDeformerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMLDeformerComponent);
	UMLDeformerComponent::~UMLDeformerComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMLDeformerComponent, UMLDeformerComponent::StaticClass, TEXT("UMLDeformerComponent"), &Z_Registration_Info_UClass_UMLDeformerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMLDeformerComponent), 2764487320U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerComponent_h_2005925554(TEXT("/Script/MLDeformerFramework"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
