// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosClothAsset/ClothTrainingTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothTrainingTool() {}
// Cross Module References
	CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UClothTrainingTool();
	CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UClothTrainingTool_NoRegister();
	CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UClothTrainingToolActionProperties();
	CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UClothTrainingToolActionProperties_NoRegister();
	CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UClothTrainingToolBuilder();
	CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UClothTrainingToolBuilder_NoRegister();
	CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UClothTrainingToolProperties();
	CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UClothTrainingToolProperties_NoRegister();
	CHAOSCLOTHASSETEDITORTOOLS_API UEnum* Z_Construct_UEnum_ChaosClothAssetEditorTools_EClothTrainingToolActions();
	CHAOSCLOTHASSETENGINE_API UClass* Z_Construct_UClass_UChaosClothComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolWithToolTargetsBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleSelectionTool();
	UPackage* Z_Construct_UPackage__Script_ChaosClothAssetEditorTools();
// End Cross Module References
	void UClothTrainingToolProperties::StaticRegisterNativesUClothTrainingToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothTrainingToolProperties);
	UClass* Z_Construct_UClass_UClothTrainingToolProperties_NoRegister()
	{
		return UClothTrainingToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UClothTrainingToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AnimationSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputBufferLocation_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_OutputBufferLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothTrainingToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothTrainingToolProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChaosClothAsset/ClothTrainingTool.h" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothTrainingTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothTrainingToolProperties_Statics::NewProp_AnimationSequence_MetaData[] = {
		{ "Category", "Files" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothTrainingTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UClothTrainingToolProperties_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothTrainingToolProperties, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UClothTrainingToolProperties_Statics::NewProp_AnimationSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothTrainingToolProperties_Statics::NewProp_AnimationSequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothTrainingToolProperties_Statics::NewProp_OutputBufferLocation_MetaData[] = {
		{ "Category", "Files" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothTrainingTool.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UClothTrainingToolProperties_Statics::NewProp_OutputBufferLocation = { "OutputBufferLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothTrainingToolProperties, OutputBufferLocation), METADATA_PARAMS(Z_Construct_UClass_UClothTrainingToolProperties_Statics::NewProp_OutputBufferLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothTrainingToolProperties_Statics::NewProp_OutputBufferLocation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClothTrainingToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothTrainingToolProperties_Statics::NewProp_AnimationSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothTrainingToolProperties_Statics::NewProp_OutputBufferLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothTrainingToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothTrainingToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothTrainingToolProperties_Statics::ClassParams = {
		&UClothTrainingToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UClothTrainingToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UClothTrainingToolProperties_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UClothTrainingToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClothTrainingToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothTrainingToolProperties()
	{
		if (!Z_Registration_Info_UClass_UClothTrainingToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothTrainingToolProperties.OuterSingleton, Z_Construct_UClass_UClothTrainingToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClothTrainingToolProperties.OuterSingleton;
	}
	template<> CHAOSCLOTHASSETEDITORTOOLS_API UClass* StaticClass<UClothTrainingToolProperties>()
	{
		return UClothTrainingToolProperties::StaticClass();
	}
	UClothTrainingToolProperties::UClothTrainingToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothTrainingToolProperties);
	UClothTrainingToolProperties::~UClothTrainingToolProperties() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EClothTrainingToolActions;
	static UEnum* EClothTrainingToolActions_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EClothTrainingToolActions.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EClothTrainingToolActions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosClothAssetEditorTools_EClothTrainingToolActions, (UObject*)Z_Construct_UPackage__Script_ChaosClothAssetEditorTools(), TEXT("EClothTrainingToolActions"));
		}
		return Z_Registration_Info_UEnum_EClothTrainingToolActions.OuterSingleton;
	}
	template<> CHAOSCLOTHASSETEDITORTOOLS_API UEnum* StaticEnum<EClothTrainingToolActions>()
	{
		return EClothTrainingToolActions_StaticEnum();
	}
	struct Z_Construct_UEnum_ChaosClothAssetEditorTools_EClothTrainingToolActions_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ChaosClothAssetEditorTools_EClothTrainingToolActions_Statics::Enumerators[] = {
		{ "EClothTrainingToolActions::NoAction", (int64)EClothTrainingToolActions::NoAction },
		{ "EClothTrainingToolActions::Train", (int64)EClothTrainingToolActions::Train },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ChaosClothAssetEditorTools_EClothTrainingToolActions_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothTrainingTool.h" },
		{ "NoAction.Name", "EClothTrainingToolActions::NoAction" },
		{ "Train.Name", "EClothTrainingToolActions::Train" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosClothAssetEditorTools_EClothTrainingToolActions_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ChaosClothAssetEditorTools,
		nullptr,
		"EClothTrainingToolActions",
		"EClothTrainingToolActions",
		Z_Construct_UEnum_ChaosClothAssetEditorTools_EClothTrainingToolActions_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosClothAssetEditorTools_EClothTrainingToolActions_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ChaosClothAssetEditorTools_EClothTrainingToolActions_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosClothAssetEditorTools_EClothTrainingToolActions_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ChaosClothAssetEditorTools_EClothTrainingToolActions()
	{
		if (!Z_Registration_Info_UEnum_EClothTrainingToolActions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EClothTrainingToolActions.InnerSingleton, Z_Construct_UEnum_ChaosClothAssetEditorTools_EClothTrainingToolActions_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EClothTrainingToolActions.InnerSingleton;
	}
	DEFINE_FUNCTION(UClothTrainingToolActionProperties::execStartTraining)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartTraining();
		P_NATIVE_END;
	}
	void UClothTrainingToolActionProperties::StaticRegisterNativesUClothTrainingToolActionProperties()
	{
		UClass* Class = UClothTrainingToolActionProperties::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartTraining", &UClothTrainingToolActionProperties::execStartTraining },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UClothTrainingToolActionProperties_StartTraining_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClothTrainingToolActionProperties_StartTraining_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Actions" },
		{ "DisplayName", "Begin Training" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothTrainingTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothTrainingToolActionProperties_StartTraining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothTrainingToolActionProperties, nullptr, "StartTraining", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClothTrainingToolActionProperties_StartTraining_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothTrainingToolActionProperties_StartTraining_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClothTrainingToolActionProperties_StartTraining()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClothTrainingToolActionProperties_StartTraining_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothTrainingToolActionProperties);
	UClass* Z_Construct_UClass_UClothTrainingToolActionProperties_NoRegister()
	{
		return UClothTrainingToolActionProperties::StaticClass();
	}
	struct Z_Construct_UClass_UClothTrainingToolActionProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothTrainingToolActionProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetEditorTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UClothTrainingToolActionProperties_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UClothTrainingToolActionProperties_StartTraining, "StartTraining" }, // 1029250614
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothTrainingToolActionProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChaosClothAsset/ClothTrainingTool.h" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothTrainingTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothTrainingToolActionProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothTrainingToolActionProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothTrainingToolActionProperties_Statics::ClassParams = {
		&UClothTrainingToolActionProperties::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UClothTrainingToolActionProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClothTrainingToolActionProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothTrainingToolActionProperties()
	{
		if (!Z_Registration_Info_UClass_UClothTrainingToolActionProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothTrainingToolActionProperties.OuterSingleton, Z_Construct_UClass_UClothTrainingToolActionProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClothTrainingToolActionProperties.OuterSingleton;
	}
	template<> CHAOSCLOTHASSETEDITORTOOLS_API UClass* StaticClass<UClothTrainingToolActionProperties>()
	{
		return UClothTrainingToolActionProperties::StaticClass();
	}
	UClothTrainingToolActionProperties::UClothTrainingToolActionProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothTrainingToolActionProperties);
	UClothTrainingToolActionProperties::~UClothTrainingToolActionProperties() {}
	void UClothTrainingToolBuilder::StaticRegisterNativesUClothTrainingToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothTrainingToolBuilder);
	UClass* Z_Construct_UClass_UClothTrainingToolBuilder_NoRegister()
	{
		return UClothTrainingToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UClothTrainingToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothTrainingToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolWithToolTargetsBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothTrainingToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChaosClothAsset/ClothTrainingTool.h" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothTrainingTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothTrainingToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothTrainingToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothTrainingToolBuilder_Statics::ClassParams = {
		&UClothTrainingToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UClothTrainingToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClothTrainingToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothTrainingToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UClothTrainingToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothTrainingToolBuilder.OuterSingleton, Z_Construct_UClass_UClothTrainingToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClothTrainingToolBuilder.OuterSingleton;
	}
	template<> CHAOSCLOTHASSETEDITORTOOLS_API UClass* StaticClass<UClothTrainingToolBuilder>()
	{
		return UClothTrainingToolBuilder::StaticClass();
	}
	UClothTrainingToolBuilder::UClothTrainingToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothTrainingToolBuilder);
	UClothTrainingToolBuilder::~UClothTrainingToolBuilder() {}
	void UClothTrainingTool::StaticRegisterNativesUClothTrainingTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothTrainingTool);
	UClass* Z_Construct_UClass_UClothTrainingTool_NoRegister()
	{
		return UClothTrainingTool::StaticClass();
	}
	struct Z_Construct_UClass_UClothTrainingTool_Statics
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
	UObject* (*const Z_Construct_UClass_UClothTrainingTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleSelectionTool,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothTrainingTool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChaosClothAsset/ClothTrainingTool.h" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothTrainingTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothTrainingTool_Statics::NewProp_ToolProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothTrainingTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UClothTrainingTool_Statics::NewProp_ToolProperties = { "ToolProperties", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothTrainingTool, ToolProperties), Z_Construct_UClass_UClothTrainingToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UClothTrainingTool_Statics::NewProp_ToolProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothTrainingTool_Statics::NewProp_ToolProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothTrainingTool_Statics::NewProp_ActionProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothTrainingTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UClothTrainingTool_Statics::NewProp_ActionProperties = { "ActionProperties", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothTrainingTool, ActionProperties), Z_Construct_UClass_UClothTrainingToolActionProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UClothTrainingTool_Statics::NewProp_ActionProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothTrainingTool_Statics::NewProp_ActionProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothTrainingTool_Statics::NewProp_ClothComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothTrainingTool.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UClothTrainingTool_Statics::NewProp_ClothComponent = { "ClothComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothTrainingTool, ClothComponent), Z_Construct_UClass_UChaosClothComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UClothTrainingTool_Statics::NewProp_ClothComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothTrainingTool_Statics::NewProp_ClothComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClothTrainingTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothTrainingTool_Statics::NewProp_ToolProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothTrainingTool_Statics::NewProp_ActionProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothTrainingTool_Statics::NewProp_ClothComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothTrainingTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothTrainingTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothTrainingTool_Statics::ClassParams = {
		&UClothTrainingTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UClothTrainingTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UClothTrainingTool_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UClothTrainingTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClothTrainingTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothTrainingTool()
	{
		if (!Z_Registration_Info_UClass_UClothTrainingTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothTrainingTool.OuterSingleton, Z_Construct_UClass_UClothTrainingTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClothTrainingTool.OuterSingleton;
	}
	template<> CHAOSCLOTHASSETEDITORTOOLS_API UClass* StaticClass<UClothTrainingTool>()
	{
		return UClothTrainingTool::StaticClass();
	}
	UClothTrainingTool::UClothTrainingTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothTrainingTool);
	UClothTrainingTool::~UClothTrainingTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothTrainingTool_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothTrainingTool_h_Statics::EnumInfo[] = {
		{ EClothTrainingToolActions_StaticEnum, TEXT("EClothTrainingToolActions"), &Z_Registration_Info_UEnum_EClothTrainingToolActions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3466312617U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothTrainingTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UClothTrainingToolProperties, UClothTrainingToolProperties::StaticClass, TEXT("UClothTrainingToolProperties"), &Z_Registration_Info_UClass_UClothTrainingToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothTrainingToolProperties), 366985084U) },
		{ Z_Construct_UClass_UClothTrainingToolActionProperties, UClothTrainingToolActionProperties::StaticClass, TEXT("UClothTrainingToolActionProperties"), &Z_Registration_Info_UClass_UClothTrainingToolActionProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothTrainingToolActionProperties), 1114576328U) },
		{ Z_Construct_UClass_UClothTrainingToolBuilder, UClothTrainingToolBuilder::StaticClass, TEXT("UClothTrainingToolBuilder"), &Z_Registration_Info_UClass_UClothTrainingToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothTrainingToolBuilder), 4043752056U) },
		{ Z_Construct_UClass_UClothTrainingTool, UClothTrainingTool::StaticClass, TEXT("UClothTrainingTool"), &Z_Registration_Info_UClass_UClothTrainingTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothTrainingTool), 162353278U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothTrainingTool_h_412985541(TEXT("/Script/ChaosClothAssetEditorTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothTrainingTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothTrainingTool_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothTrainingTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothTrainingTool_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
