// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BakeMeshAttributeToolCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBakeMeshAttributeToolCommon() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeCurvatureMapToolProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeCurvatureMapToolProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeInputMeshProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeInputMeshProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeMultiTexture2DProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeMultiTexture2DProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeNormalMapToolProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeNormalMapToolProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeOcclusionMapToolProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeOcclusionMapToolProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeTexture2DProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeTexture2DProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeVisualizationProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeVisualizationProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EBakeCurvatureClampMode();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EBakeCurvatureColorMode();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EBakeCurvatureTypeMode();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EBakeNormalSpace();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBakeNormalSpace;
	static UEnum* EBakeNormalSpace_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBakeNormalSpace.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBakeNormalSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EBakeNormalSpace, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EBakeNormalSpace"));
		}
		return Z_Registration_Info_UEnum_EBakeNormalSpace.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EBakeNormalSpace>()
	{
		return EBakeNormalSpace_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EBakeNormalSpace_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EBakeNormalSpace_Statics::Enumerators[] = {
		{ "EBakeNormalSpace::Tangent", (int64)EBakeNormalSpace::Tangent },
		{ "EBakeNormalSpace::Object", (int64)EBakeNormalSpace::Object },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EBakeNormalSpace_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Bake tool property sets\n */" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeToolCommon.h" },
		{ "Object.Comment", "/** Object space */" },
		{ "Object.Name", "EBakeNormalSpace::Object" },
		{ "Object.ToolTip", "Object space" },
		{ "Tangent.Comment", "/** Tangent space */" },
		{ "Tangent.Name", "EBakeNormalSpace::Tangent" },
		{ "Tangent.ToolTip", "Tangent space" },
		{ "ToolTip", "Bake tool property sets" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EBakeNormalSpace_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EBakeNormalSpace",
		"EBakeNormalSpace",
		Z_Construct_UEnum_MeshModelingToolsExp_EBakeNormalSpace_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EBakeNormalSpace_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EBakeNormalSpace_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EBakeNormalSpace_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EBakeNormalSpace()
	{
		if (!Z_Registration_Info_UEnum_EBakeNormalSpace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBakeNormalSpace.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EBakeNormalSpace_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBakeNormalSpace.InnerSingleton;
	}
	DEFINE_FUNCTION(UBakeInputMeshProperties::execGetSourceUVLayerNamesFunc)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetSourceUVLayerNamesFunc();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBakeInputMeshProperties::execGetTargetUVLayerNamesFunc)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetTargetUVLayerNamesFunc();
		P_NATIVE_END;
	}
	void UBakeInputMeshProperties::StaticRegisterNativesUBakeInputMeshProperties()
	{
		UClass* Class = UBakeInputMeshProperties::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSourceUVLayerNamesFunc", &UBakeInputMeshProperties::execGetSourceUVLayerNamesFunc },
			{ "GetTargetUVLayerNamesFunc", &UBakeInputMeshProperties::execGetTargetUVLayerNamesFunc },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBakeInputMeshProperties_GetSourceUVLayerNamesFunc_Statics
	{
		struct BakeInputMeshProperties_eventGetSourceUVLayerNamesFunc_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBakeInputMeshProperties_GetSourceUVLayerNamesFunc_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBakeInputMeshProperties_GetSourceUVLayerNamesFunc_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBakeInputMeshProperties_GetSourceUVLayerNamesFunc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BakeInputMeshProperties_eventGetSourceUVLayerNamesFunc_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBakeInputMeshProperties_GetSourceUVLayerNamesFunc_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBakeInputMeshProperties_GetSourceUVLayerNamesFunc_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBakeInputMeshProperties_GetSourceUVLayerNamesFunc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBakeInputMeshProperties_GetSourceUVLayerNamesFunc_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBakeInputMeshProperties_GetSourceUVLayerNamesFunc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBakeInputMeshProperties_GetSourceUVLayerNamesFunc_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BakeMeshAttributeToolCommon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBakeInputMeshProperties_GetSourceUVLayerNamesFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBakeInputMeshProperties, nullptr, "GetSourceUVLayerNamesFunc", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBakeInputMeshProperties_GetSourceUVLayerNamesFunc_Statics::BakeInputMeshProperties_eventGetSourceUVLayerNamesFunc_Parms), Z_Construct_UFunction_UBakeInputMeshProperties_GetSourceUVLayerNamesFunc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBakeInputMeshProperties_GetSourceUVLayerNamesFunc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBakeInputMeshProperties_GetSourceUVLayerNamesFunc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBakeInputMeshProperties_GetSourceUVLayerNamesFunc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBakeInputMeshProperties_GetSourceUVLayerNamesFunc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBakeInputMeshProperties_GetSourceUVLayerNamesFunc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBakeInputMeshProperties_GetTargetUVLayerNamesFunc_Statics
	{
		struct BakeInputMeshProperties_eventGetTargetUVLayerNamesFunc_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBakeInputMeshProperties_GetTargetUVLayerNamesFunc_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBakeInputMeshProperties_GetTargetUVLayerNamesFunc_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBakeInputMeshProperties_GetTargetUVLayerNamesFunc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BakeInputMeshProperties_eventGetTargetUVLayerNamesFunc_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBakeInputMeshProperties_GetTargetUVLayerNamesFunc_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBakeInputMeshProperties_GetTargetUVLayerNamesFunc_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBakeInputMeshProperties_GetTargetUVLayerNamesFunc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBakeInputMeshProperties_GetTargetUVLayerNamesFunc_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBakeInputMeshProperties_GetTargetUVLayerNamesFunc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBakeInputMeshProperties_GetTargetUVLayerNamesFunc_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BakeMeshAttributeToolCommon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBakeInputMeshProperties_GetTargetUVLayerNamesFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBakeInputMeshProperties, nullptr, "GetTargetUVLayerNamesFunc", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBakeInputMeshProperties_GetTargetUVLayerNamesFunc_Statics::BakeInputMeshProperties_eventGetTargetUVLayerNamesFunc_Parms), Z_Construct_UFunction_UBakeInputMeshProperties_GetTargetUVLayerNamesFunc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBakeInputMeshProperties_GetTargetUVLayerNamesFunc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBakeInputMeshProperties_GetTargetUVLayerNamesFunc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBakeInputMeshProperties_GetTargetUVLayerNamesFunc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBakeInputMeshProperties_GetTargetUVLayerNamesFunc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBakeInputMeshProperties_GetTargetUVLayerNamesFunc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBakeInputMeshProperties);
	UClass* Z_Construct_UClass_UBakeInputMeshProperties_NoRegister()
	{
		return UBakeInputMeshProperties::StaticClass();
	}
	struct Z_Construct_UClass_UBakeInputMeshProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetStaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetStaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetSkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetDynamicMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetDynamicMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetUVLayer_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TargetUVLayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasTargetUVLayer_MetaData[];
#endif
		static void NewProp_bHasTargetUVLayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasTargetUVLayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceStaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceStaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceSkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceDynamicMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceDynamicMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideSourceMesh_MetaData[];
#endif
		static void NewProp_bHideSourceMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideSourceMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceNormalMap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceNormalMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceNormalMapUVLayer_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceNormalMapUVLayer;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SourceNormalSpace_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceNormalSpace_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceNormalSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasSourceNormalMap_MetaData[];
#endif
		static void NewProp_bHasSourceNormalMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasSourceNormalMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectionDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bProjectionInWorldSpace_MetaData[];
#endif
		static void NewProp_bProjectionInWorldSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bProjectionInWorldSpace;
		static const UECodeGen_Private::FStrPropertyParams NewProp_TargetUVLayerNamesList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetUVLayerNamesList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetUVLayerNamesList;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceUVLayerNamesList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceUVLayerNamesList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceUVLayerNamesList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBakeInputMeshProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBakeInputMeshProperties_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBakeInputMeshProperties_GetSourceUVLayerNamesFunc, "GetSourceUVLayerNamesFunc" }, // 1569880463
		{ &Z_Construct_UFunction_UBakeInputMeshProperties_GetTargetUVLayerNamesFunc, "GetTargetUVLayerNamesFunc" }, // 2300198272
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeInputMeshProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BakeMeshAttributeToolCommon.h" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeToolCommon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_TargetStaticMesh_MetaData[] = {
		{ "Category", "BakeInput" },
		{ "Comment", "/** Target mesh to sample to */" },
		{ "DisplayName", "Target Mesh" },
		{ "EditCondition", "TargetStaticMesh != nullptr" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeToolCommon.h" },
		{ "ToolTip", "Target mesh to sample to" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_TargetStaticMesh = { "TargetStaticMesh", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeInputMeshProperties, TargetStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_TargetStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_TargetStaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_TargetSkeletalMesh_MetaData[] = {
		{ "Category", "BakeInput" },
		{ "Comment", "/** Target mesh to sample to */" },
		{ "DisplayName", "Target Mesh" },
		{ "EditCondition", "TargetSkeletalMesh != nullptr" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeToolCommon.h" },
		{ "ToolTip", "Target mesh to sample to" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_TargetSkeletalMesh = { "TargetSkeletalMesh", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeInputMeshProperties, TargetSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_TargetSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_TargetSkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_TargetDynamicMesh_MetaData[] = {
		{ "Category", "BakeInput" },
		{ "Comment", "/** Target mesh to sample to */" },
		{ "DisplayName", "Target Mesh" },
		{ "EditCondition", "TargetDynamicMesh != nullptr" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeToolCommon.h" },
		{ "ToolTip", "Target mesh to sample to" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_TargetDynamicMesh = { "TargetDynamicMesh", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeInputMeshProperties, TargetDynamicMesh), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_TargetDynamicMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_TargetDynamicMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_TargetUVLayer_MetaData[] = {
		{ "Category", "BakeInput" },
		{ "Comment", "/** UV channel to use for the target mesh */" },
		{ "DisplayName", "Target Mesh UV Channel" },
		{ "EditCondition", "bHasTargetUVLayer == true" },
		{ "EditConditionHides", "" },
		{ "GetOptions", "GetTargetUVLayerNamesFunc" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeToolCommon.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "UV channel to use for the target mesh" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_TargetUVLayer = { "TargetUVLayer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeInputMeshProperties, TargetUVLayer), METADATA_PARAMS(Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_TargetUVLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_TargetUVLayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_bHasTargetUVLayer_MetaData[] = {
		{ "Comment", "/** If true, expose the TargetUVLayer property */" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeToolCommon.h" },
		{ "ToolTip", "If true, expose the TargetUVLayer property" },
	};
#endif
	void Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_bHasTargetUVLayer_SetBit(void* Obj)
	{
		((UBakeInputMeshProperties*)Obj)->bHasTargetUVLayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_bHasTargetUVLayer = { "bHasTargetUVLayer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBakeInputMeshProperties), &Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_bHasTargetUVLayer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_bHasTargetUVLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_bHasTargetUVLayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_SourceStaticMesh_MetaData[] = {
		{ "Category", "BakeInput" },
		{ "Comment", "/** Source mesh to sample from */" },
		{ "DisplayName", "Source Mesh" },
		{ "EditCondition", "SourceStaticMesh != nullptr" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeToolCommon.h" },
		{ "ToolTip", "Source mesh to sample from" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_SourceStaticMesh = { "SourceStaticMesh", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeInputMeshProperties, SourceStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_SourceStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_SourceStaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_SourceSkeletalMesh_MetaData[] = {
		{ "Category", "BakeInput" },
		{ "Comment", "/** Source mesh to sample from */" },
		{ "DisplayName", "Source Mesh" },
		{ "EditCondition", "SourceSkeletalMesh != nullptr" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeToolCommon.h" },
		{ "ToolTip", "Source mesh to sample from" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_SourceSkeletalMesh = { "SourceSkeletalMesh", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeInputMeshProperties, SourceSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_SourceSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_SourceSkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_SourceDynamicMesh_MetaData[] = {
		{ "Category", "BakeInput" },
		{ "Comment", "/** Source mesh to sample from */" },
		{ "DisplayName", "Source Mesh" },
		{ "EditCondition", "SourceDynamicMesh != nullptr" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeToolCommon.h" },
		{ "ToolTip", "Source mesh to sample from" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_SourceDynamicMesh = { "SourceDynamicMesh", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeInputMeshProperties, SourceDynamicMesh), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_SourceDynamicMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_SourceDynamicMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_bHideSourceMesh_MetaData[] = {
		{ "Category", "BakeInput" },
		{ "Comment", "/** If true, hide the source mesh */" },
		{ "EditCondition", "SourceStaticMesh != nullptr || SourceSkeletalMesh != nullptr || SourceDynamicMesh != nullptr" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeToolCommon.h" },
		{ "ToolTip", "If true, hide the source mesh" },
	};
#endif
	void Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_bHideSourceMesh_SetBit(void* Obj)
	{
		((UBakeInputMeshProperties*)Obj)->bHideSourceMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_bHideSourceMesh = { "bHideSourceMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBakeInputMeshProperties), &Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_bHideSourceMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_bHideSourceMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_bHideSourceMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_SourceNormalMap_MetaData[] = {
		{ "Category", "BakeInput" },
		{ "Comment", "/** Source mesh normal map; if empty, the geometric normals will be used */" },
		{ "EditCondition", "bHasSourceNormalMap == true" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeToolCommon.h" },
		{ "ToolTip", "Source mesh normal map; if empty, the geometric normals will be used" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_SourceNormalMap = { "SourceNormalMap", nullptr, (EPropertyFlags)0x0014040000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeInputMeshProperties, SourceNormalMap), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_SourceNormalMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_SourceNormalMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_SourceNormalMapUVLayer_MetaData[] = {
		{ "Category", "BakeInput" },
		{ "Comment", "/** UV channel to use for the source mesh normal map; only relevant if a source normal map is set */" },
		{ "DisplayName", "Source Normal UV Channel" },
		{ "EditCondition", "bHasSourceNormalMap == true" },
		{ "EditConditionHides", "" },
		{ "GetOptions", "GetSourceUVLayerNamesFunc" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeToolCommon.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "UV channel to use for the source mesh normal map; only relevant if a source normal map is set" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_SourceNormalMapUVLayer = { "SourceNormalMapUVLayer", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeInputMeshProperties, SourceNormalMapUVLayer), METADATA_PARAMS(Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_SourceNormalMapUVLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_SourceNormalMapUVLayer_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_SourceNormalSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_SourceNormalSpace_MetaData[] = {
		{ "Category", "BakeInput" },
		{ "Comment", "/** Normal space of the source mesh normal map. */" },
		{ "EditCondition", "bHasSourceNormalMap == true" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeToolCommon.h" },
		{ "ToolTip", "Normal space of the source mesh normal map." },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_SourceNormalSpace = { "SourceNormalSpace", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeInputMeshProperties, SourceNormalSpace), Z_Construct_UEnum_MeshModelingToolsExp_EBakeNormalSpace, METADATA_PARAMS(Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_SourceNormalSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_SourceNormalSpace_MetaData)) }; // 3597578270
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_bHasSourceNormalMap_MetaData[] = {
		{ "Comment", "/** If true, expose the SourceNormalMap and SourceNormalMapUVLayer properties */" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeToolCommon.h" },
		{ "ToolTip", "If true, expose the SourceNormalMap and SourceNormalMapUVLayer properties" },
	};
#endif
	void Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_bHasSourceNormalMap_SetBit(void* Obj)
	{
		((UBakeInputMeshProperties*)Obj)->bHasSourceNormalMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_bHasSourceNormalMap = { "bHasSourceNormalMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBakeInputMeshProperties), &Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_bHasSourceNormalMap_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_bHasSourceNormalMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_bHasSourceNormalMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_ProjectionDistance_MetaData[] = {
		{ "Category", "BakeInput" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Maximum allowed distance for the projection from target mesh to source mesh for the sample to be considered valid.\n\x09 * This is only relevant if a separate source mesh is provided. */" },
		{ "EditCondition", "SourceStaticMesh != nullptr || SourceSkeletalMesh != nullptr || SourceDynamicMesh != nullptr" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeToolCommon.h" },
		{ "ToolTip", "Maximum allowed distance for the projection from target mesh to source mesh for the sample to be considered valid.\nThis is only relevant if a separate source mesh is provided." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_ProjectionDistance = { "ProjectionDistance", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeInputMeshProperties, ProjectionDistance), METADATA_PARAMS(Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_ProjectionDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_ProjectionDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_bProjectionInWorldSpace_MetaData[] = {
		{ "Category", "BakeInput" },
		{ "Comment", "/** If true, uses the world space positions for the projection from target mesh to source mesh, otherwise it uses their object space positions.\n\x09 * This is only relevant if a separate source mesh is provided. */" },
		{ "EditCondition", "SourceStaticMesh != nullptr || SourceSkeletalMesh != nullptr || SourceDynamicMesh != nullptr" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeToolCommon.h" },
		{ "ToolTip", "If true, uses the world space positions for the projection from target mesh to source mesh, otherwise it uses their object space positions.\nThis is only relevant if a separate source mesh is provided." },
	};
#endif
	void Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_bProjectionInWorldSpace_SetBit(void* Obj)
	{
		((UBakeInputMeshProperties*)Obj)->bProjectionInWorldSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_bProjectionInWorldSpace = { "bProjectionInWorldSpace", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBakeInputMeshProperties), &Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_bProjectionInWorldSpace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_bProjectionInWorldSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_bProjectionInWorldSpace_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_TargetUVLayerNamesList_Inner = { "TargetUVLayerNamesList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_TargetUVLayerNamesList_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeMeshAttributeToolCommon.h" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_TargetUVLayerNamesList = { "TargetUVLayerNamesList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeInputMeshProperties, TargetUVLayerNamesList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_TargetUVLayerNamesList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_TargetUVLayerNamesList_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_SourceUVLayerNamesList_Inner = { "SourceUVLayerNamesList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_SourceUVLayerNamesList_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeMeshAttributeToolCommon.h" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_SourceUVLayerNamesList = { "SourceUVLayerNamesList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeInputMeshProperties, SourceUVLayerNamesList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_SourceUVLayerNamesList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_SourceUVLayerNamesList_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBakeInputMeshProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_TargetStaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_TargetSkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_TargetDynamicMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_TargetUVLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_bHasTargetUVLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_SourceStaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_SourceSkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_SourceDynamicMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_bHideSourceMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_SourceNormalMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_SourceNormalMapUVLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_SourceNormalSpace_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_SourceNormalSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_bHasSourceNormalMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_ProjectionDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_bProjectionInWorldSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_TargetUVLayerNamesList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_TargetUVLayerNamesList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_SourceUVLayerNamesList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeInputMeshProperties_Statics::NewProp_SourceUVLayerNamesList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBakeInputMeshProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBakeInputMeshProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBakeInputMeshProperties_Statics::ClassParams = {
		&UBakeInputMeshProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBakeInputMeshProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBakeInputMeshProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBakeInputMeshProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeInputMeshProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBakeInputMeshProperties()
	{
		if (!Z_Registration_Info_UClass_UBakeInputMeshProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBakeInputMeshProperties.OuterSingleton, Z_Construct_UClass_UBakeInputMeshProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBakeInputMeshProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UBakeInputMeshProperties>()
	{
		return UBakeInputMeshProperties::StaticClass();
	}
	UBakeInputMeshProperties::UBakeInputMeshProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBakeInputMeshProperties);
	UBakeInputMeshProperties::~UBakeInputMeshProperties() {}
	void UBakeNormalMapToolProperties::StaticRegisterNativesUBakeNormalMapToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBakeNormalMapToolProperties);
	UClass* Z_Construct_UClass_UBakeNormalMapToolProperties_NoRegister()
	{
		return UBakeNormalMapToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UBakeNormalMapToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBakeNormalMapToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeNormalMapToolProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BakeMeshAttributeToolCommon.h" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeToolCommon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBakeNormalMapToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBakeNormalMapToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBakeNormalMapToolProperties_Statics::ClassParams = {
		&UBakeNormalMapToolProperties::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBakeNormalMapToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeNormalMapToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBakeNormalMapToolProperties()
	{
		if (!Z_Registration_Info_UClass_UBakeNormalMapToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBakeNormalMapToolProperties.OuterSingleton, Z_Construct_UClass_UBakeNormalMapToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBakeNormalMapToolProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UBakeNormalMapToolProperties>()
	{
		return UBakeNormalMapToolProperties::StaticClass();
	}
	UBakeNormalMapToolProperties::UBakeNormalMapToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBakeNormalMapToolProperties);
	UBakeNormalMapToolProperties::~UBakeNormalMapToolProperties() {}
	void UBakeOcclusionMapToolProperties::StaticRegisterNativesUBakeOcclusionMapToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBakeOcclusionMapToolProperties);
	UClass* Z_Construct_UClass_UBakeOcclusionMapToolProperties_NoRegister()
	{
		return UBakeOcclusionMapToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UBakeOcclusionMapToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionRays_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OcclusionRays;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpreadAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpreadAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BiasAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BiasAngle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBakeOcclusionMapToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeOcclusionMapToolProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BakeMeshAttributeToolCommon.h" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeToolCommon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeOcclusionMapToolProperties_Statics::NewProp_OcclusionRays_MetaData[] = {
		{ "Category", "OcclusionOutput" },
		{ "ClampMax", "65536" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Number of occlusion rays per sample */" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeToolCommon.h" },
		{ "ToolTip", "Number of occlusion rays per sample" },
		{ "UIMax", "1024" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBakeOcclusionMapToolProperties_Statics::NewProp_OcclusionRays = { "OcclusionRays", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeOcclusionMapToolProperties, OcclusionRays), METADATA_PARAMS(Z_Construct_UClass_UBakeOcclusionMapToolProperties_Statics::NewProp_OcclusionRays_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeOcclusionMapToolProperties_Statics::NewProp_OcclusionRays_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeOcclusionMapToolProperties_Statics::NewProp_MaxDistance_MetaData[] = {
		{ "Category", "OcclusionOutput" },
		{ "ClampMax", "99999999.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Maximum distance for occlusion rays to test for intersections; a value of 0 means infinity */" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeToolCommon.h" },
		{ "ToolTip", "Maximum distance for occlusion rays to test for intersections; a value of 0 means infinity" },
		{ "UIMax", "1000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBakeOcclusionMapToolProperties_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeOcclusionMapToolProperties, MaxDistance), METADATA_PARAMS(Z_Construct_UClass_UBakeOcclusionMapToolProperties_Statics::NewProp_MaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeOcclusionMapToolProperties_Statics::NewProp_MaxDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeOcclusionMapToolProperties_Statics::NewProp_SpreadAngle_MetaData[] = {
		{ "Category", "OcclusionOutput" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Maximum spread angle in degrees for occlusion rays; for example, 180 degrees will cover the entire hemisphere whereas 90 degrees will only cover the center of the hemisphere down to 45 degrees from the horizon. */" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeToolCommon.h" },
		{ "ToolTip", "Maximum spread angle in degrees for occlusion rays; for example, 180 degrees will cover the entire hemisphere whereas 90 degrees will only cover the center of the hemisphere down to 45 degrees from the horizon." },
		{ "UIMax", "180.0" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBakeOcclusionMapToolProperties_Statics::NewProp_SpreadAngle = { "SpreadAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeOcclusionMapToolProperties, SpreadAngle), METADATA_PARAMS(Z_Construct_UClass_UBakeOcclusionMapToolProperties_Statics::NewProp_SpreadAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeOcclusionMapToolProperties_Statics::NewProp_SpreadAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeOcclusionMapToolProperties_Statics::NewProp_BiasAngle_MetaData[] = {
		{ "Category", "OcclusionOutput" },
		{ "ClampMax", "89.9" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Angle in degrees from the horizon for occlusion rays for which the contribution is attenuated to reduce faceting artifacts. */" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeToolCommon.h" },
		{ "ToolTip", "Angle in degrees from the horizon for occlusion rays for which the contribution is attenuated to reduce faceting artifacts." },
		{ "UIMax", "45.0" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBakeOcclusionMapToolProperties_Statics::NewProp_BiasAngle = { "BiasAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeOcclusionMapToolProperties, BiasAngle), METADATA_PARAMS(Z_Construct_UClass_UBakeOcclusionMapToolProperties_Statics::NewProp_BiasAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeOcclusionMapToolProperties_Statics::NewProp_BiasAngle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBakeOcclusionMapToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeOcclusionMapToolProperties_Statics::NewProp_OcclusionRays,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeOcclusionMapToolProperties_Statics::NewProp_MaxDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeOcclusionMapToolProperties_Statics::NewProp_SpreadAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeOcclusionMapToolProperties_Statics::NewProp_BiasAngle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBakeOcclusionMapToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBakeOcclusionMapToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBakeOcclusionMapToolProperties_Statics::ClassParams = {
		&UBakeOcclusionMapToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBakeOcclusionMapToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBakeOcclusionMapToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBakeOcclusionMapToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeOcclusionMapToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBakeOcclusionMapToolProperties()
	{
		if (!Z_Registration_Info_UClass_UBakeOcclusionMapToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBakeOcclusionMapToolProperties.OuterSingleton, Z_Construct_UClass_UBakeOcclusionMapToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBakeOcclusionMapToolProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UBakeOcclusionMapToolProperties>()
	{
		return UBakeOcclusionMapToolProperties::StaticClass();
	}
	UBakeOcclusionMapToolProperties::UBakeOcclusionMapToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBakeOcclusionMapToolProperties);
	UBakeOcclusionMapToolProperties::~UBakeOcclusionMapToolProperties() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBakeCurvatureTypeMode;
	static UEnum* EBakeCurvatureTypeMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBakeCurvatureTypeMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBakeCurvatureTypeMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EBakeCurvatureTypeMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EBakeCurvatureTypeMode"));
		}
		return Z_Registration_Info_UEnum_EBakeCurvatureTypeMode.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EBakeCurvatureTypeMode>()
	{
		return EBakeCurvatureTypeMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EBakeCurvatureTypeMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EBakeCurvatureTypeMode_Statics::Enumerators[] = {
		{ "EBakeCurvatureTypeMode::MeanAverage", (int64)EBakeCurvatureTypeMode::MeanAverage },
		{ "EBakeCurvatureTypeMode::Max", (int64)EBakeCurvatureTypeMode::Max },
		{ "EBakeCurvatureTypeMode::Min", (int64)EBakeCurvatureTypeMode::Min },
		{ "EBakeCurvatureTypeMode::Gaussian", (int64)EBakeCurvatureTypeMode::Gaussian },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EBakeCurvatureTypeMode_Statics::Enum_MetaDataParams[] = {
		{ "Gaussian.Comment", "/** Product of the minimum and maximum principal curvatures */" },
		{ "Gaussian.Name", "EBakeCurvatureTypeMode::Gaussian" },
		{ "Gaussian.ToolTip", "Product of the minimum and maximum principal curvatures" },
		{ "Max.Comment", "/** Maximum principal curvature */" },
		{ "Max.Name", "EBakeCurvatureTypeMode::Max" },
		{ "Max.ToolTip", "Maximum principal curvature" },
		{ "MeanAverage.Comment", "/** Average of the minimum and maximum principal curvatures */" },
		{ "MeanAverage.DisplayName", "Mean" },
		{ "MeanAverage.Name", "EBakeCurvatureTypeMode::MeanAverage" },
		{ "MeanAverage.ToolTip", "Average of the minimum and maximum principal curvatures" },
		{ "Min.Comment", "/** Minimum principal curvature */" },
		{ "Min.Name", "EBakeCurvatureTypeMode::Min" },
		{ "Min.ToolTip", "Minimum principal curvature" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeToolCommon.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EBakeCurvatureTypeMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EBakeCurvatureTypeMode",
		"EBakeCurvatureTypeMode",
		Z_Construct_UEnum_MeshModelingToolsExp_EBakeCurvatureTypeMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EBakeCurvatureTypeMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EBakeCurvatureTypeMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EBakeCurvatureTypeMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EBakeCurvatureTypeMode()
	{
		if (!Z_Registration_Info_UEnum_EBakeCurvatureTypeMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBakeCurvatureTypeMode.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EBakeCurvatureTypeMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBakeCurvatureTypeMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBakeCurvatureColorMode;
	static UEnum* EBakeCurvatureColorMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBakeCurvatureColorMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBakeCurvatureColorMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EBakeCurvatureColorMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EBakeCurvatureColorMode"));
		}
		return Z_Registration_Info_UEnum_EBakeCurvatureColorMode.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EBakeCurvatureColorMode>()
	{
		return EBakeCurvatureColorMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EBakeCurvatureColorMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EBakeCurvatureColorMode_Statics::Enumerators[] = {
		{ "EBakeCurvatureColorMode::Grayscale", (int64)EBakeCurvatureColorMode::Grayscale },
		{ "EBakeCurvatureColorMode::RedBlue", (int64)EBakeCurvatureColorMode::RedBlue },
		{ "EBakeCurvatureColorMode::RedGreenBlue", (int64)EBakeCurvatureColorMode::RedGreenBlue },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EBakeCurvatureColorMode_Statics::Enum_MetaDataParams[] = {
		{ "Grayscale.Comment", "/** Map curvature values to grayscale such that black is negative, grey is zero, and white is positive */" },
		{ "Grayscale.Name", "EBakeCurvatureColorMode::Grayscale" },
		{ "Grayscale.ToolTip", "Map curvature values to grayscale such that black is negative, grey is zero, and white is positive" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeToolCommon.h" },
		{ "RedBlue.Comment", "/** Map curvature values to red and blue such that red is negative, black is zero, and blue is positive */" },
		{ "RedBlue.Name", "EBakeCurvatureColorMode::RedBlue" },
		{ "RedBlue.ToolTip", "Map curvature values to red and blue such that red is negative, black is zero, and blue is positive" },
		{ "RedGreenBlue.Comment", "/** Map curvature values to red, green, blue such that red is negative, green is zero, and blue is positive */" },
		{ "RedGreenBlue.Name", "EBakeCurvatureColorMode::RedGreenBlue" },
		{ "RedGreenBlue.ToolTip", "Map curvature values to red, green, blue such that red is negative, green is zero, and blue is positive" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EBakeCurvatureColorMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EBakeCurvatureColorMode",
		"EBakeCurvatureColorMode",
		Z_Construct_UEnum_MeshModelingToolsExp_EBakeCurvatureColorMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EBakeCurvatureColorMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EBakeCurvatureColorMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EBakeCurvatureColorMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EBakeCurvatureColorMode()
	{
		if (!Z_Registration_Info_UEnum_EBakeCurvatureColorMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBakeCurvatureColorMode.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EBakeCurvatureColorMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBakeCurvatureColorMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBakeCurvatureClampMode;
	static UEnum* EBakeCurvatureClampMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBakeCurvatureClampMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBakeCurvatureClampMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EBakeCurvatureClampMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EBakeCurvatureClampMode"));
		}
		return Z_Registration_Info_UEnum_EBakeCurvatureClampMode.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EBakeCurvatureClampMode>()
	{
		return EBakeCurvatureClampMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EBakeCurvatureClampMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EBakeCurvatureClampMode_Statics::Enumerators[] = {
		{ "EBakeCurvatureClampMode::None", (int64)EBakeCurvatureClampMode::None },
		{ "EBakeCurvatureClampMode::OnlyPositive", (int64)EBakeCurvatureClampMode::OnlyPositive },
		{ "EBakeCurvatureClampMode::OnlyNegative", (int64)EBakeCurvatureClampMode::OnlyNegative },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EBakeCurvatureClampMode_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BakeMeshAttributeToolCommon.h" },
		{ "None.Comment", "/** Include both negative and positive curvatures */" },
		{ "None.Name", "EBakeCurvatureClampMode::None" },
		{ "None.ToolTip", "Include both negative and positive curvatures" },
		{ "OnlyNegative.Comment", "/** Clamp positive curvatures to zero */" },
		{ "OnlyNegative.Name", "EBakeCurvatureClampMode::OnlyNegative" },
		{ "OnlyNegative.ToolTip", "Clamp positive curvatures to zero" },
		{ "OnlyPositive.Comment", "/** Clamp negative curvatures to zero */" },
		{ "OnlyPositive.Name", "EBakeCurvatureClampMode::OnlyPositive" },
		{ "OnlyPositive.ToolTip", "Clamp negative curvatures to zero" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EBakeCurvatureClampMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EBakeCurvatureClampMode",
		"EBakeCurvatureClampMode",
		Z_Construct_UEnum_MeshModelingToolsExp_EBakeCurvatureClampMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EBakeCurvatureClampMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EBakeCurvatureClampMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EBakeCurvatureClampMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EBakeCurvatureClampMode()
	{
		if (!Z_Registration_Info_UEnum_EBakeCurvatureClampMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBakeCurvatureClampMode.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EBakeCurvatureClampMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBakeCurvatureClampMode.InnerSingleton;
	}
	void UBakeCurvatureMapToolProperties::StaticRegisterNativesUBakeCurvatureMapToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBakeCurvatureMapToolProperties);
	UClass* Z_Construct_UClass_UBakeCurvatureMapToolProperties_NoRegister()
	{
		return UBakeCurvatureMapToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UBakeCurvatureMapToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CurvatureType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurvatureType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurvatureType;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ColorMapping_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorMapping_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorMapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorRangeMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ColorRangeMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinRangeMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinRangeMultiplier;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Clamping_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Clamping_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Clamping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBakeCurvatureMapToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeCurvatureMapToolProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BakeMeshAttributeToolCommon.h" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeToolCommon.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UBakeCurvatureMapToolProperties_Statics::NewProp_CurvatureType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeCurvatureMapToolProperties_Statics::NewProp_CurvatureType_MetaData[] = {
		{ "Category", "CurvatureOutput" },
		{ "Comment", "/** Type of curvature */" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeToolCommon.h" },
		{ "ToolTip", "Type of curvature" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBakeCurvatureMapToolProperties_Statics::NewProp_CurvatureType = { "CurvatureType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeCurvatureMapToolProperties, CurvatureType), Z_Construct_UEnum_MeshModelingToolsExp_EBakeCurvatureTypeMode, METADATA_PARAMS(Z_Construct_UClass_UBakeCurvatureMapToolProperties_Statics::NewProp_CurvatureType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeCurvatureMapToolProperties_Statics::NewProp_CurvatureType_MetaData)) }; // 1664827671
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UBakeCurvatureMapToolProperties_Statics::NewProp_ColorMapping_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeCurvatureMapToolProperties_Statics::NewProp_ColorMapping_MetaData[] = {
		{ "Category", "CurvatureOutput" },
		{ "Comment", "/** How to map calculated curvature values to colors */" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeToolCommon.h" },
		{ "ToolTip", "How to map calculated curvature values to colors" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBakeCurvatureMapToolProperties_Statics::NewProp_ColorMapping = { "ColorMapping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeCurvatureMapToolProperties, ColorMapping), Z_Construct_UEnum_MeshModelingToolsExp_EBakeCurvatureColorMode, METADATA_PARAMS(Z_Construct_UClass_UBakeCurvatureMapToolProperties_Statics::NewProp_ColorMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeCurvatureMapToolProperties_Statics::NewProp_ColorMapping_MetaData)) }; // 3557718621
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeCurvatureMapToolProperties_Statics::NewProp_ColorRangeMultiplier_MetaData[] = {
		{ "Category", "CurvatureOutput" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Multiplier for how the curvature values fill the available range in the selected Color Mapping; a larger value means that higher curvature is required to achieve the maximum color value. */" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeToolCommon.h" },
		{ "ToolTip", "Multiplier for how the curvature values fill the available range in the selected Color Mapping; a larger value means that higher curvature is required to achieve the maximum color value." },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBakeCurvatureMapToolProperties_Statics::NewProp_ColorRangeMultiplier = { "ColorRangeMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeCurvatureMapToolProperties, ColorRangeMultiplier), METADATA_PARAMS(Z_Construct_UClass_UBakeCurvatureMapToolProperties_Statics::NewProp_ColorRangeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeCurvatureMapToolProperties_Statics::NewProp_ColorRangeMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeCurvatureMapToolProperties_Statics::NewProp_MinRangeMultiplier_MetaData[] = {
		{ "Category", "CurvatureOutput" },
		{ "Comment", "/** Minimum for the curvature values to not be clamped to zero relative to the curvature for the maximum color value; a larger value means that higher curvature is required to not be considered as no curvature. */" },
		{ "DisplayName", "Color Range Minimum" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeToolCommon.h" },
		{ "ToolTip", "Minimum for the curvature values to not be clamped to zero relative to the curvature for the maximum color value; a larger value means that higher curvature is required to not be considered as no curvature." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBakeCurvatureMapToolProperties_Statics::NewProp_MinRangeMultiplier = { "MinRangeMultiplier", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeCurvatureMapToolProperties, MinRangeMultiplier), METADATA_PARAMS(Z_Construct_UClass_UBakeCurvatureMapToolProperties_Statics::NewProp_MinRangeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeCurvatureMapToolProperties_Statics::NewProp_MinRangeMultiplier_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UBakeCurvatureMapToolProperties_Statics::NewProp_Clamping_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeCurvatureMapToolProperties_Statics::NewProp_Clamping_MetaData[] = {
		{ "Category", "CurvatureOutput" },
		{ "Comment", "/** Clamping applied to curvature values before color mapping */" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeToolCommon.h" },
		{ "ToolTip", "Clamping applied to curvature values before color mapping" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBakeCurvatureMapToolProperties_Statics::NewProp_Clamping = { "Clamping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeCurvatureMapToolProperties, Clamping), Z_Construct_UEnum_MeshModelingToolsExp_EBakeCurvatureClampMode, METADATA_PARAMS(Z_Construct_UClass_UBakeCurvatureMapToolProperties_Statics::NewProp_Clamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeCurvatureMapToolProperties_Statics::NewProp_Clamping_MetaData)) }; // 2876708371
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBakeCurvatureMapToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeCurvatureMapToolProperties_Statics::NewProp_CurvatureType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeCurvatureMapToolProperties_Statics::NewProp_CurvatureType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeCurvatureMapToolProperties_Statics::NewProp_ColorMapping_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeCurvatureMapToolProperties_Statics::NewProp_ColorMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeCurvatureMapToolProperties_Statics::NewProp_ColorRangeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeCurvatureMapToolProperties_Statics::NewProp_MinRangeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeCurvatureMapToolProperties_Statics::NewProp_Clamping_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeCurvatureMapToolProperties_Statics::NewProp_Clamping,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBakeCurvatureMapToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBakeCurvatureMapToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBakeCurvatureMapToolProperties_Statics::ClassParams = {
		&UBakeCurvatureMapToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBakeCurvatureMapToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBakeCurvatureMapToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBakeCurvatureMapToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeCurvatureMapToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBakeCurvatureMapToolProperties()
	{
		if (!Z_Registration_Info_UClass_UBakeCurvatureMapToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBakeCurvatureMapToolProperties.OuterSingleton, Z_Construct_UClass_UBakeCurvatureMapToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBakeCurvatureMapToolProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UBakeCurvatureMapToolProperties>()
	{
		return UBakeCurvatureMapToolProperties::StaticClass();
	}
	UBakeCurvatureMapToolProperties::UBakeCurvatureMapToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBakeCurvatureMapToolProperties);
	UBakeCurvatureMapToolProperties::~UBakeCurvatureMapToolProperties() {}
	DEFINE_FUNCTION(UBakeTexture2DProperties::execGetUVLayerNamesFunc)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetUVLayerNamesFunc();
		P_NATIVE_END;
	}
	void UBakeTexture2DProperties::StaticRegisterNativesUBakeTexture2DProperties()
	{
		UClass* Class = UBakeTexture2DProperties::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetUVLayerNamesFunc", &UBakeTexture2DProperties::execGetUVLayerNamesFunc },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBakeTexture2DProperties_GetUVLayerNamesFunc_Statics
	{
		struct BakeTexture2DProperties_eventGetUVLayerNamesFunc_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBakeTexture2DProperties_GetUVLayerNamesFunc_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBakeTexture2DProperties_GetUVLayerNamesFunc_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBakeTexture2DProperties_GetUVLayerNamesFunc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BakeTexture2DProperties_eventGetUVLayerNamesFunc_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBakeTexture2DProperties_GetUVLayerNamesFunc_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBakeTexture2DProperties_GetUVLayerNamesFunc_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBakeTexture2DProperties_GetUVLayerNamesFunc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBakeTexture2DProperties_GetUVLayerNamesFunc_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBakeTexture2DProperties_GetUVLayerNamesFunc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBakeTexture2DProperties_GetUVLayerNamesFunc_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BakeMeshAttributeToolCommon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBakeTexture2DProperties_GetUVLayerNamesFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBakeTexture2DProperties, nullptr, "GetUVLayerNamesFunc", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBakeTexture2DProperties_GetUVLayerNamesFunc_Statics::BakeTexture2DProperties_eventGetUVLayerNamesFunc_Parms), Z_Construct_UFunction_UBakeTexture2DProperties_GetUVLayerNamesFunc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBakeTexture2DProperties_GetUVLayerNamesFunc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBakeTexture2DProperties_GetUVLayerNamesFunc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBakeTexture2DProperties_GetUVLayerNamesFunc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBakeTexture2DProperties_GetUVLayerNamesFunc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBakeTexture2DProperties_GetUVLayerNamesFunc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBakeTexture2DProperties);
	UClass* Z_Construct_UClass_UBakeTexture2DProperties_NoRegister()
	{
		return UBakeTexture2DProperties::StaticClass();
	}
	struct Z_Construct_UClass_UBakeTexture2DProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVLayer_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UVLayer;
		static const UECodeGen_Private::FStrPropertyParams NewProp_UVLayerNamesList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVLayerNamesList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UVLayerNamesList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBakeTexture2DProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBakeTexture2DProperties_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBakeTexture2DProperties_GetUVLayerNamesFunc, "GetUVLayerNamesFunc" }, // 4152982061
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeTexture2DProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BakeMeshAttributeToolCommon.h" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeToolCommon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeTexture2DProperties_Statics::NewProp_SourceTexture_MetaData[] = {
		{ "Category", "TextureOutput" },
		{ "Comment", "/** Source mesh texture that is to be resampled into a new texture */" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeToolCommon.h" },
		{ "ToolTip", "Source mesh texture that is to be resampled into a new texture" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeTexture2DProperties_Statics::NewProp_SourceTexture = { "SourceTexture", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeTexture2DProperties, SourceTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeTexture2DProperties_Statics::NewProp_SourceTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeTexture2DProperties_Statics::NewProp_SourceTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeTexture2DProperties_Statics::NewProp_UVLayer_MetaData[] = {
		{ "Category", "TextureOutput" },
		{ "Comment", "/** UV channel to use for the source mesh texture */" },
		{ "DisplayName", "Source Texture UV Channel" },
		{ "GetOptions", "GetUVLayerNamesFunc" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeToolCommon.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "UV channel to use for the source mesh texture" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBakeTexture2DProperties_Statics::NewProp_UVLayer = { "UVLayer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeTexture2DProperties, UVLayer), METADATA_PARAMS(Z_Construct_UClass_UBakeTexture2DProperties_Statics::NewProp_UVLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeTexture2DProperties_Statics::NewProp_UVLayer_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBakeTexture2DProperties_Statics::NewProp_UVLayerNamesList_Inner = { "UVLayerNamesList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeTexture2DProperties_Statics::NewProp_UVLayerNamesList_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeMeshAttributeToolCommon.h" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBakeTexture2DProperties_Statics::NewProp_UVLayerNamesList = { "UVLayerNamesList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeTexture2DProperties, UVLayerNamesList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBakeTexture2DProperties_Statics::NewProp_UVLayerNamesList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeTexture2DProperties_Statics::NewProp_UVLayerNamesList_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBakeTexture2DProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeTexture2DProperties_Statics::NewProp_SourceTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeTexture2DProperties_Statics::NewProp_UVLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeTexture2DProperties_Statics::NewProp_UVLayerNamesList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeTexture2DProperties_Statics::NewProp_UVLayerNamesList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBakeTexture2DProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBakeTexture2DProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBakeTexture2DProperties_Statics::ClassParams = {
		&UBakeTexture2DProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBakeTexture2DProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBakeTexture2DProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBakeTexture2DProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeTexture2DProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBakeTexture2DProperties()
	{
		if (!Z_Registration_Info_UClass_UBakeTexture2DProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBakeTexture2DProperties.OuterSingleton, Z_Construct_UClass_UBakeTexture2DProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBakeTexture2DProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UBakeTexture2DProperties>()
	{
		return UBakeTexture2DProperties::StaticClass();
	}
	UBakeTexture2DProperties::UBakeTexture2DProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBakeTexture2DProperties);
	UBakeTexture2DProperties::~UBakeTexture2DProperties() {}
	DEFINE_FUNCTION(UBakeMultiTexture2DProperties::execGetUVLayerNamesFunc)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetUVLayerNamesFunc();
		P_NATIVE_END;
	}
	void UBakeMultiTexture2DProperties::StaticRegisterNativesUBakeMultiTexture2DProperties()
	{
		UClass* Class = UBakeMultiTexture2DProperties::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetUVLayerNamesFunc", &UBakeMultiTexture2DProperties::execGetUVLayerNamesFunc },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBakeMultiTexture2DProperties_GetUVLayerNamesFunc_Statics
	{
		struct BakeMultiTexture2DProperties_eventGetUVLayerNamesFunc_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBakeMultiTexture2DProperties_GetUVLayerNamesFunc_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBakeMultiTexture2DProperties_GetUVLayerNamesFunc_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBakeMultiTexture2DProperties_GetUVLayerNamesFunc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BakeMultiTexture2DProperties_eventGetUVLayerNamesFunc_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBakeMultiTexture2DProperties_GetUVLayerNamesFunc_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBakeMultiTexture2DProperties_GetUVLayerNamesFunc_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBakeMultiTexture2DProperties_GetUVLayerNamesFunc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBakeMultiTexture2DProperties_GetUVLayerNamesFunc_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBakeMultiTexture2DProperties_GetUVLayerNamesFunc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBakeMultiTexture2DProperties_GetUVLayerNamesFunc_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BakeMeshAttributeToolCommon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBakeMultiTexture2DProperties_GetUVLayerNamesFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBakeMultiTexture2DProperties, nullptr, "GetUVLayerNamesFunc", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBakeMultiTexture2DProperties_GetUVLayerNamesFunc_Statics::BakeMultiTexture2DProperties_eventGetUVLayerNamesFunc_Parms), Z_Construct_UFunction_UBakeMultiTexture2DProperties_GetUVLayerNamesFunc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBakeMultiTexture2DProperties_GetUVLayerNamesFunc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBakeMultiTexture2DProperties_GetUVLayerNamesFunc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBakeMultiTexture2DProperties_GetUVLayerNamesFunc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBakeMultiTexture2DProperties_GetUVLayerNamesFunc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBakeMultiTexture2DProperties_GetUVLayerNamesFunc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBakeMultiTexture2DProperties);
	UClass* Z_Construct_UClass_UBakeMultiTexture2DProperties_NoRegister()
	{
		return UBakeMultiTexture2DProperties::StaticClass();
	}
	struct Z_Construct_UClass_UBakeMultiTexture2DProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MaterialIDSourceTextures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialIDSourceTextures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialIDSourceTextures;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVLayer_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UVLayer;
		static const UECodeGen_Private::FStrPropertyParams NewProp_UVLayerNamesList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVLayerNamesList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UVLayerNamesList;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AllSourceTextures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllSourceTextures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllSourceTextures;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBakeMultiTexture2DProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBakeMultiTexture2DProperties_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBakeMultiTexture2DProperties_GetUVLayerNamesFunc, "GetUVLayerNamesFunc" }, // 2924816827
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeMultiTexture2DProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BakeMeshAttributeToolCommon.h" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeToolCommon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeMultiTexture2DProperties_Statics::NewProp_MaterialIDSourceTextures_Inner = { "MaterialIDSourceTextures", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeMultiTexture2DProperties_Statics::NewProp_MaterialIDSourceTextures_MetaData[] = {
		{ "Category", "MultiTextureOutput" },
		{ "Comment", "/** For each material ID, the source texture that will be resampled in that material's region*/" },
		{ "DisplayName", "Material IDs" },
		{ "EditFixedOrder", "" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeToolCommon.h" },
		{ "ToolTip", "For each material ID, the source texture that will be resampled in that material's region" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBakeMultiTexture2DProperties_Statics::NewProp_MaterialIDSourceTextures = { "MaterialIDSourceTextures", nullptr, (EPropertyFlags)0x0014000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeMultiTexture2DProperties, MaterialIDSourceTextures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBakeMultiTexture2DProperties_Statics::NewProp_MaterialIDSourceTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMultiTexture2DProperties_Statics::NewProp_MaterialIDSourceTextures_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeMultiTexture2DProperties_Statics::NewProp_UVLayer_MetaData[] = {
		{ "Category", "MultiTextureOutput" },
		{ "Comment", "/** UV channel to use for the source mesh texture */" },
		{ "DisplayName", "Source Texture UV Channel" },
		{ "GetOptions", "GetUVLayerNamesFunc" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeToolCommon.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "UV channel to use for the source mesh texture" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBakeMultiTexture2DProperties_Statics::NewProp_UVLayer = { "UVLayer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeMultiTexture2DProperties, UVLayer), METADATA_PARAMS(Z_Construct_UClass_UBakeMultiTexture2DProperties_Statics::NewProp_UVLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMultiTexture2DProperties_Statics::NewProp_UVLayer_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBakeMultiTexture2DProperties_Statics::NewProp_UVLayerNamesList_Inner = { "UVLayerNamesList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeMultiTexture2DProperties_Statics::NewProp_UVLayerNamesList_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeMeshAttributeToolCommon.h" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBakeMultiTexture2DProperties_Statics::NewProp_UVLayerNamesList = { "UVLayerNamesList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeMultiTexture2DProperties, UVLayerNamesList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBakeMultiTexture2DProperties_Statics::NewProp_UVLayerNamesList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMultiTexture2DProperties_Statics::NewProp_UVLayerNamesList_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeMultiTexture2DProperties_Statics::NewProp_AllSourceTextures_Inner = { "AllSourceTextures", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeMultiTexture2DProperties_Statics::NewProp_AllSourceTextures_MetaData[] = {
		{ "Category", "MultiTextureOutput" },
		{ "Comment", "/** The set of all source textures from all input materials */" },
		{ "DisplayName", "Source Textures" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeToolCommon.h" },
		{ "ToolTip", "The set of all source textures from all input materials" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBakeMultiTexture2DProperties_Statics::NewProp_AllSourceTextures = { "AllSourceTextures", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeMultiTexture2DProperties, AllSourceTextures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBakeMultiTexture2DProperties_Statics::NewProp_AllSourceTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMultiTexture2DProperties_Statics::NewProp_AllSourceTextures_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBakeMultiTexture2DProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMultiTexture2DProperties_Statics::NewProp_MaterialIDSourceTextures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMultiTexture2DProperties_Statics::NewProp_MaterialIDSourceTextures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMultiTexture2DProperties_Statics::NewProp_UVLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMultiTexture2DProperties_Statics::NewProp_UVLayerNamesList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMultiTexture2DProperties_Statics::NewProp_UVLayerNamesList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMultiTexture2DProperties_Statics::NewProp_AllSourceTextures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMultiTexture2DProperties_Statics::NewProp_AllSourceTextures,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBakeMultiTexture2DProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBakeMultiTexture2DProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBakeMultiTexture2DProperties_Statics::ClassParams = {
		&UBakeMultiTexture2DProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBakeMultiTexture2DProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMultiTexture2DProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBakeMultiTexture2DProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMultiTexture2DProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBakeMultiTexture2DProperties()
	{
		if (!Z_Registration_Info_UClass_UBakeMultiTexture2DProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBakeMultiTexture2DProperties.OuterSingleton, Z_Construct_UClass_UBakeMultiTexture2DProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBakeMultiTexture2DProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UBakeMultiTexture2DProperties>()
	{
		return UBakeMultiTexture2DProperties::StaticClass();
	}
	UBakeMultiTexture2DProperties::UBakeMultiTexture2DProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBakeMultiTexture2DProperties);
	UBakeMultiTexture2DProperties::~UBakeMultiTexture2DProperties() {}
	void UBakeVisualizationProperties::StaticRegisterNativesUBakeVisualizationProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBakeVisualizationProperties);
	UClass* Z_Construct_UClass_UBakeVisualizationProperties_NoRegister()
	{
		return UBakeVisualizationProperties::StaticClass();
	}
	struct Z_Construct_UClass_UBakeVisualizationProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreviewAsMaterial_MetaData[];
#endif
		static void NewProp_bPreviewAsMaterial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviewAsMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Brightness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Brightness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AOMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AOMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBakeVisualizationProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeVisualizationProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BakeMeshAttributeToolCommon.h" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeToolCommon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeVisualizationProperties_Statics::NewProp_bPreviewAsMaterial_MetaData[] = {
		{ "Category", "Preview" },
		{ "Comment", "/** Preview the texture as an input to the respective material parameter (ex. Normal, Ambient Occlusion) */" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeToolCommon.h" },
		{ "ToolTip", "Preview the texture as an input to the respective material parameter (ex. Normal, Ambient Occlusion)" },
	};
#endif
	void Z_Construct_UClass_UBakeVisualizationProperties_Statics::NewProp_bPreviewAsMaterial_SetBit(void* Obj)
	{
		((UBakeVisualizationProperties*)Obj)->bPreviewAsMaterial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBakeVisualizationProperties_Statics::NewProp_bPreviewAsMaterial = { "bPreviewAsMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBakeVisualizationProperties), &Z_Construct_UClass_UBakeVisualizationProperties_Statics::NewProp_bPreviewAsMaterial_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBakeVisualizationProperties_Statics::NewProp_bPreviewAsMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeVisualizationProperties_Statics::NewProp_bPreviewAsMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeVisualizationProperties_Statics::NewProp_Brightness_MetaData[] = {
		{ "Category", "Preview" },
		{ "Comment", "/** Adjust the brightness of the preview material; does not affect results stored in textures */" },
		{ "DisplayName", "Brightness" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeToolCommon.h" },
		{ "ToolTip", "Adjust the brightness of the preview material; does not affect results stored in textures" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBakeVisualizationProperties_Statics::NewProp_Brightness = { "Brightness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeVisualizationProperties, Brightness), METADATA_PARAMS(Z_Construct_UClass_UBakeVisualizationProperties_Statics::NewProp_Brightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeVisualizationProperties_Statics::NewProp_Brightness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeVisualizationProperties_Statics::NewProp_AOMultiplier_MetaData[] = {
		{ "Category", "Preview" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Ambient Occlusion multiplier in the viewport; does not affect results stored in textures */" },
		{ "DisplayName", "AO Multiplier" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeToolCommon.h" },
		{ "ToolTip", "Ambient Occlusion multiplier in the viewport; does not affect results stored in textures" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBakeVisualizationProperties_Statics::NewProp_AOMultiplier = { "AOMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeVisualizationProperties, AOMultiplier), METADATA_PARAMS(Z_Construct_UClass_UBakeVisualizationProperties_Statics::NewProp_AOMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeVisualizationProperties_Statics::NewProp_AOMultiplier_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBakeVisualizationProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeVisualizationProperties_Statics::NewProp_bPreviewAsMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeVisualizationProperties_Statics::NewProp_Brightness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeVisualizationProperties_Statics::NewProp_AOMultiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBakeVisualizationProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBakeVisualizationProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBakeVisualizationProperties_Statics::ClassParams = {
		&UBakeVisualizationProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBakeVisualizationProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBakeVisualizationProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBakeVisualizationProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeVisualizationProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBakeVisualizationProperties()
	{
		if (!Z_Registration_Info_UClass_UBakeVisualizationProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBakeVisualizationProperties.OuterSingleton, Z_Construct_UClass_UBakeVisualizationProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBakeVisualizationProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UBakeVisualizationProperties>()
	{
		return UBakeVisualizationProperties::StaticClass();
	}
	UBakeVisualizationProperties::UBakeVisualizationProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBakeVisualizationProperties);
	UBakeVisualizationProperties::~UBakeVisualizationProperties() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMeshAttributeToolCommon_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMeshAttributeToolCommon_h_Statics::EnumInfo[] = {
		{ EBakeNormalSpace_StaticEnum, TEXT("EBakeNormalSpace"), &Z_Registration_Info_UEnum_EBakeNormalSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3597578270U) },
		{ EBakeCurvatureTypeMode_StaticEnum, TEXT("EBakeCurvatureTypeMode"), &Z_Registration_Info_UEnum_EBakeCurvatureTypeMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1664827671U) },
		{ EBakeCurvatureColorMode_StaticEnum, TEXT("EBakeCurvatureColorMode"), &Z_Registration_Info_UEnum_EBakeCurvatureColorMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3557718621U) },
		{ EBakeCurvatureClampMode_StaticEnum, TEXT("EBakeCurvatureClampMode"), &Z_Registration_Info_UEnum_EBakeCurvatureClampMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2876708371U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMeshAttributeToolCommon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBakeInputMeshProperties, UBakeInputMeshProperties::StaticClass, TEXT("UBakeInputMeshProperties"), &Z_Registration_Info_UClass_UBakeInputMeshProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBakeInputMeshProperties), 2202159394U) },
		{ Z_Construct_UClass_UBakeNormalMapToolProperties, UBakeNormalMapToolProperties::StaticClass, TEXT("UBakeNormalMapToolProperties"), &Z_Registration_Info_UClass_UBakeNormalMapToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBakeNormalMapToolProperties), 1681565029U) },
		{ Z_Construct_UClass_UBakeOcclusionMapToolProperties, UBakeOcclusionMapToolProperties::StaticClass, TEXT("UBakeOcclusionMapToolProperties"), &Z_Registration_Info_UClass_UBakeOcclusionMapToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBakeOcclusionMapToolProperties), 632713541U) },
		{ Z_Construct_UClass_UBakeCurvatureMapToolProperties, UBakeCurvatureMapToolProperties::StaticClass, TEXT("UBakeCurvatureMapToolProperties"), &Z_Registration_Info_UClass_UBakeCurvatureMapToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBakeCurvatureMapToolProperties), 152914671U) },
		{ Z_Construct_UClass_UBakeTexture2DProperties, UBakeTexture2DProperties::StaticClass, TEXT("UBakeTexture2DProperties"), &Z_Registration_Info_UClass_UBakeTexture2DProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBakeTexture2DProperties), 2775811146U) },
		{ Z_Construct_UClass_UBakeMultiTexture2DProperties, UBakeMultiTexture2DProperties::StaticClass, TEXT("UBakeMultiTexture2DProperties"), &Z_Registration_Info_UClass_UBakeMultiTexture2DProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBakeMultiTexture2DProperties), 2283470510U) },
		{ Z_Construct_UClass_UBakeVisualizationProperties, UBakeVisualizationProperties::StaticClass, TEXT("UBakeVisualizationProperties"), &Z_Registration_Info_UClass_UBakeVisualizationProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBakeVisualizationProperties), 3024910914U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMeshAttributeToolCommon_h_705447260(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMeshAttributeToolCommon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMeshAttributeToolCommon_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMeshAttributeToolCommon_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMeshAttributeToolCommon_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
