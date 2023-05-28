// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosClothAsset/ClothTransferSkinWeightsTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothTransferSkinWeightsTool() {}
// Cross Module References
	CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UClothTransferSkinWeightsTool();
	CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UClothTransferSkinWeightsTool_NoRegister();
	CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UClothTransferSkinWeightsToolActionProperties();
	CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UClothTransferSkinWeightsToolActionProperties_NoRegister();
	CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UClothTransferSkinWeightsToolBuilder();
	CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UClothTransferSkinWeightsToolBuilder_NoRegister();
	CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UClothTransferSkinWeightsToolProperties();
	CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_NoRegister();
	CHAOSCLOTHASSETEDITORTOOLS_API UEnum* Z_Construct_UEnum_ChaosClothAssetEditorTools_EClothTransferSkinWeightsToolActions();
	CHAOSCLOTHASSETENGINE_API UClass* Z_Construct_UClass_UChaosClothComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolWithToolTargetsBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleSelectionTool();
	UPackage* Z_Construct_UPackage__Script_ChaosClothAssetEditorTools();
// End Cross Module References
	void UClothTransferSkinWeightsToolProperties::StaticRegisterNativesUClothTransferSkinWeightsToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothTransferSkinWeightsToolProperties);
	UClass* Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_NoRegister()
	{
		return UClothTransferSkinWeightsToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChaosClothAsset/ClothTransferSkinWeightsTool.h" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothTransferSkinWeightsTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::NewProp_SourceMesh_MetaData[] = {
		{ "Category", "Files" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothTransferSkinWeightsTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::NewProp_SourceMesh = { "SourceMesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothTransferSkinWeightsToolProperties, SourceMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::NewProp_SourceMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::NewProp_SourceMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::NewProp_SourceMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothTransferSkinWeightsToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::ClassParams = {
		&UClothTransferSkinWeightsToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothTransferSkinWeightsToolProperties()
	{
		if (!Z_Registration_Info_UClass_UClothTransferSkinWeightsToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothTransferSkinWeightsToolProperties.OuterSingleton, Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClothTransferSkinWeightsToolProperties.OuterSingleton;
	}
	template<> CHAOSCLOTHASSETEDITORTOOLS_API UClass* StaticClass<UClothTransferSkinWeightsToolProperties>()
	{
		return UClothTransferSkinWeightsToolProperties::StaticClass();
	}
	UClothTransferSkinWeightsToolProperties::UClothTransferSkinWeightsToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothTransferSkinWeightsToolProperties);
	UClothTransferSkinWeightsToolProperties::~UClothTransferSkinWeightsToolProperties() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EClothTransferSkinWeightsToolActions;
	static UEnum* EClothTransferSkinWeightsToolActions_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EClothTransferSkinWeightsToolActions.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EClothTransferSkinWeightsToolActions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosClothAssetEditorTools_EClothTransferSkinWeightsToolActions, (UObject*)Z_Construct_UPackage__Script_ChaosClothAssetEditorTools(), TEXT("EClothTransferSkinWeightsToolActions"));
		}
		return Z_Registration_Info_UEnum_EClothTransferSkinWeightsToolActions.OuterSingleton;
	}
	template<> CHAOSCLOTHASSETEDITORTOOLS_API UEnum* StaticEnum<EClothTransferSkinWeightsToolActions>()
	{
		return EClothTransferSkinWeightsToolActions_StaticEnum();
	}
	struct Z_Construct_UEnum_ChaosClothAssetEditorTools_EClothTransferSkinWeightsToolActions_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ChaosClothAssetEditorTools_EClothTransferSkinWeightsToolActions_Statics::Enumerators[] = {
		{ "EClothTransferSkinWeightsToolActions::NoAction", (int64)EClothTransferSkinWeightsToolActions::NoAction },
		{ "EClothTransferSkinWeightsToolActions::Transfer", (int64)EClothTransferSkinWeightsToolActions::Transfer },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ChaosClothAssetEditorTools_EClothTransferSkinWeightsToolActions_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothTransferSkinWeightsTool.h" },
		{ "NoAction.Name", "EClothTransferSkinWeightsToolActions::NoAction" },
		{ "Transfer.Name", "EClothTransferSkinWeightsToolActions::Transfer" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosClothAssetEditorTools_EClothTransferSkinWeightsToolActions_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ChaosClothAssetEditorTools,
		nullptr,
		"EClothTransferSkinWeightsToolActions",
		"EClothTransferSkinWeightsToolActions",
		Z_Construct_UEnum_ChaosClothAssetEditorTools_EClothTransferSkinWeightsToolActions_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosClothAssetEditorTools_EClothTransferSkinWeightsToolActions_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ChaosClothAssetEditorTools_EClothTransferSkinWeightsToolActions_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosClothAssetEditorTools_EClothTransferSkinWeightsToolActions_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ChaosClothAssetEditorTools_EClothTransferSkinWeightsToolActions()
	{
		if (!Z_Registration_Info_UEnum_EClothTransferSkinWeightsToolActions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EClothTransferSkinWeightsToolActions.InnerSingleton, Z_Construct_UEnum_ChaosClothAssetEditorTools_EClothTransferSkinWeightsToolActions_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EClothTransferSkinWeightsToolActions.InnerSingleton;
	}
	DEFINE_FUNCTION(UClothTransferSkinWeightsToolActionProperties::execTransferWeights)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TransferWeights();
		P_NATIVE_END;
	}
	void UClothTransferSkinWeightsToolActionProperties::StaticRegisterNativesUClothTransferSkinWeightsToolActionProperties()
	{
		UClass* Class = UClothTransferSkinWeightsToolActionProperties::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TransferWeights", &UClothTransferSkinWeightsToolActionProperties::execTransferWeights },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UClothTransferSkinWeightsToolActionProperties_TransferWeights_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClothTransferSkinWeightsToolActionProperties_TransferWeights_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Actions" },
		{ "DisplayName", "Transfer weights" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothTransferSkinWeightsTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothTransferSkinWeightsToolActionProperties_TransferWeights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothTransferSkinWeightsToolActionProperties, nullptr, "TransferWeights", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClothTransferSkinWeightsToolActionProperties_TransferWeights_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothTransferSkinWeightsToolActionProperties_TransferWeights_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClothTransferSkinWeightsToolActionProperties_TransferWeights()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClothTransferSkinWeightsToolActionProperties_TransferWeights_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothTransferSkinWeightsToolActionProperties);
	UClass* Z_Construct_UClass_UClothTransferSkinWeightsToolActionProperties_NoRegister()
	{
		return UClothTransferSkinWeightsToolActionProperties::StaticClass();
	}
	struct Z_Construct_UClass_UClothTransferSkinWeightsToolActionProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothTransferSkinWeightsToolActionProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetEditorTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UClothTransferSkinWeightsToolActionProperties_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UClothTransferSkinWeightsToolActionProperties_TransferWeights, "TransferWeights" }, // 3091842523
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothTransferSkinWeightsToolActionProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChaosClothAsset/ClothTransferSkinWeightsTool.h" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothTransferSkinWeightsTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothTransferSkinWeightsToolActionProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothTransferSkinWeightsToolActionProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothTransferSkinWeightsToolActionProperties_Statics::ClassParams = {
		&UClothTransferSkinWeightsToolActionProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UClothTransferSkinWeightsToolActionProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClothTransferSkinWeightsToolActionProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothTransferSkinWeightsToolActionProperties()
	{
		if (!Z_Registration_Info_UClass_UClothTransferSkinWeightsToolActionProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothTransferSkinWeightsToolActionProperties.OuterSingleton, Z_Construct_UClass_UClothTransferSkinWeightsToolActionProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClothTransferSkinWeightsToolActionProperties.OuterSingleton;
	}
	template<> CHAOSCLOTHASSETEDITORTOOLS_API UClass* StaticClass<UClothTransferSkinWeightsToolActionProperties>()
	{
		return UClothTransferSkinWeightsToolActionProperties::StaticClass();
	}
	UClothTransferSkinWeightsToolActionProperties::UClothTransferSkinWeightsToolActionProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothTransferSkinWeightsToolActionProperties);
	UClothTransferSkinWeightsToolActionProperties::~UClothTransferSkinWeightsToolActionProperties() {}
	void UClothTransferSkinWeightsToolBuilder::StaticRegisterNativesUClothTransferSkinWeightsToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothTransferSkinWeightsToolBuilder);
	UClass* Z_Construct_UClass_UClothTransferSkinWeightsToolBuilder_NoRegister()
	{
		return UClothTransferSkinWeightsToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UClothTransferSkinWeightsToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothTransferSkinWeightsToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolWithToolTargetsBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothTransferSkinWeightsToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChaosClothAsset/ClothTransferSkinWeightsTool.h" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothTransferSkinWeightsTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothTransferSkinWeightsToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothTransferSkinWeightsToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothTransferSkinWeightsToolBuilder_Statics::ClassParams = {
		&UClothTransferSkinWeightsToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UClothTransferSkinWeightsToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClothTransferSkinWeightsToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothTransferSkinWeightsToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UClothTransferSkinWeightsToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothTransferSkinWeightsToolBuilder.OuterSingleton, Z_Construct_UClass_UClothTransferSkinWeightsToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClothTransferSkinWeightsToolBuilder.OuterSingleton;
	}
	template<> CHAOSCLOTHASSETEDITORTOOLS_API UClass* StaticClass<UClothTransferSkinWeightsToolBuilder>()
	{
		return UClothTransferSkinWeightsToolBuilder::StaticClass();
	}
	UClothTransferSkinWeightsToolBuilder::UClothTransferSkinWeightsToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothTransferSkinWeightsToolBuilder);
	UClothTransferSkinWeightsToolBuilder::~UClothTransferSkinWeightsToolBuilder() {}
	void UClothTransferSkinWeightsTool::StaticRegisterNativesUClothTransferSkinWeightsTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothTransferSkinWeightsTool);
	UClass* Z_Construct_UClass_UClothTransferSkinWeightsTool_NoRegister()
	{
		return UClothTransferSkinWeightsTool::StaticClass();
	}
	struct Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ToolProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActionProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClothComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ClothComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleSelectionTool,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChaosClothAsset/ClothTransferSkinWeightsTool.h" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothTransferSkinWeightsTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::NewProp_ToolProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothTransferSkinWeightsTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::NewProp_ToolProperties = { "ToolProperties", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothTransferSkinWeightsTool, ToolProperties), Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::NewProp_ToolProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::NewProp_ToolProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::NewProp_ActionProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothTransferSkinWeightsTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::NewProp_ActionProperties = { "ActionProperties", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothTransferSkinWeightsTool, ActionProperties), Z_Construct_UClass_UClothTransferSkinWeightsToolActionProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::NewProp_ActionProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::NewProp_ActionProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::NewProp_ClothComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothTransferSkinWeightsTool.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::NewProp_ClothComponent = { "ClothComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothTransferSkinWeightsTool, ClothComponent), Z_Construct_UClass_UChaosClothComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::NewProp_ClothComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::NewProp_ClothComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::NewProp_ToolProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::NewProp_ActionProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::NewProp_ClothComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothTransferSkinWeightsTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::ClassParams = {
		&UClothTransferSkinWeightsTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothTransferSkinWeightsTool()
	{
		if (!Z_Registration_Info_UClass_UClothTransferSkinWeightsTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothTransferSkinWeightsTool.OuterSingleton, Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClothTransferSkinWeightsTool.OuterSingleton;
	}
	template<> CHAOSCLOTHASSETEDITORTOOLS_API UClass* StaticClass<UClothTransferSkinWeightsTool>()
	{
		return UClothTransferSkinWeightsTool::StaticClass();
	}
	UClothTransferSkinWeightsTool::UClothTransferSkinWeightsTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothTransferSkinWeightsTool);
	UClothTransferSkinWeightsTool::~UClothTransferSkinWeightsTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothTransferSkinWeightsTool_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothTransferSkinWeightsTool_h_Statics::EnumInfo[] = {
		{ EClothTransferSkinWeightsToolActions_StaticEnum, TEXT("EClothTransferSkinWeightsToolActions"), &Z_Registration_Info_UEnum_EClothTransferSkinWeightsToolActions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 9227269U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothTransferSkinWeightsTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UClothTransferSkinWeightsToolProperties, UClothTransferSkinWeightsToolProperties::StaticClass, TEXT("UClothTransferSkinWeightsToolProperties"), &Z_Registration_Info_UClass_UClothTransferSkinWeightsToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothTransferSkinWeightsToolProperties), 1354915640U) },
		{ Z_Construct_UClass_UClothTransferSkinWeightsToolActionProperties, UClothTransferSkinWeightsToolActionProperties::StaticClass, TEXT("UClothTransferSkinWeightsToolActionProperties"), &Z_Registration_Info_UClass_UClothTransferSkinWeightsToolActionProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothTransferSkinWeightsToolActionProperties), 2856679007U) },
		{ Z_Construct_UClass_UClothTransferSkinWeightsToolBuilder, UClothTransferSkinWeightsToolBuilder::StaticClass, TEXT("UClothTransferSkinWeightsToolBuilder"), &Z_Registration_Info_UClass_UClothTransferSkinWeightsToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothTransferSkinWeightsToolBuilder), 1076738383U) },
		{ Z_Construct_UClass_UClothTransferSkinWeightsTool, UClothTransferSkinWeightsTool::StaticClass, TEXT("UClothTransferSkinWeightsTool"), &Z_Registration_Info_UClass_UClothTransferSkinWeightsTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothTransferSkinWeightsTool), 4032191632U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothTransferSkinWeightsTool_h_2435780046(TEXT("/Script/ChaosClothAssetEditorTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothTransferSkinWeightsTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothTransferSkinWeightsTool_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothTransferSkinWeightsTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothTransferSkinWeightsTool_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
