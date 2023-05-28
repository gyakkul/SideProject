// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UVEditorLayerEditTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUVEditorLayerEditTool() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	UPackage* Z_Construct_UPackage__Script_UVEditorTools();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorChannelEditAddProperties();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorChannelEditAddProperties_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorChannelEditCopyProperties();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorChannelEditCopyProperties_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorChannelEditDeleteProperties();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorChannelEditDeleteProperties_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorChannelEditSettings();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorChannelEditSettings_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorChannelEditTargetProperties();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorChannelEditTargetProperties_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorChannelEditTool();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorChannelEditTool_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorChannelEditToolActionPropertySet();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorChannelEditToolActionPropertySet_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorChannelEditToolBuilder();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorChannelEditToolBuilder_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorToolMeshInput_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVToolEmitChangeAPI_NoRegister();
	UVEDITORTOOLS_API UEnum* Z_Construct_UEnum_UVEditorTools_EChannelEditToolAction();
// End Cross Module References
	void UUVEditorChannelEditToolBuilder::StaticRegisterNativesUUVEditorChannelEditToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVEditorChannelEditToolBuilder);
	UClass* Z_Construct_UClass_UUVEditorChannelEditToolBuilder_NoRegister()
	{
		return UUVEditorChannelEditToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UUVEditorChannelEditToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVEditorChannelEditToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorChannelEditToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UVEditorLayerEditTool.h" },
		{ "ModuleRelativePath", "Public/UVEditorLayerEditTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVEditorChannelEditToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVEditorChannelEditToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVEditorChannelEditToolBuilder_Statics::ClassParams = {
		&UUVEditorChannelEditToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUVEditorChannelEditToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorChannelEditToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVEditorChannelEditToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UUVEditorChannelEditToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVEditorChannelEditToolBuilder.OuterSingleton, Z_Construct_UClass_UUVEditorChannelEditToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVEditorChannelEditToolBuilder.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UUVEditorChannelEditToolBuilder>()
	{
		return UUVEditorChannelEditToolBuilder::StaticClass();
	}
	UUVEditorChannelEditToolBuilder::UUVEditorChannelEditToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVEditorChannelEditToolBuilder);
	UUVEditorChannelEditToolBuilder::~UUVEditorChannelEditToolBuilder() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChannelEditToolAction;
	static UEnum* EChannelEditToolAction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EChannelEditToolAction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EChannelEditToolAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UVEditorTools_EChannelEditToolAction, (UObject*)Z_Construct_UPackage__Script_UVEditorTools(), TEXT("EChannelEditToolAction"));
		}
		return Z_Registration_Info_UEnum_EChannelEditToolAction.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UEnum* StaticEnum<EChannelEditToolAction>()
	{
		return EChannelEditToolAction_StaticEnum();
	}
	struct Z_Construct_UEnum_UVEditorTools_EChannelEditToolAction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UVEditorTools_EChannelEditToolAction_Statics::Enumerators[] = {
		{ "EChannelEditToolAction::NoAction", (int64)EChannelEditToolAction::NoAction },
		{ "EChannelEditToolAction::Add", (int64)EChannelEditToolAction::Add },
		{ "EChannelEditToolAction::Copy", (int64)EChannelEditToolAction::Copy },
		{ "EChannelEditToolAction::Delete", (int64)EChannelEditToolAction::Delete },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UVEditorTools_EChannelEditToolAction_Statics::Enum_MetaDataParams[] = {
		{ "Add.Name", "EChannelEditToolAction::Add" },
		{ "Copy.Name", "EChannelEditToolAction::Copy" },
		{ "Delete.Name", "EChannelEditToolAction::Delete" },
		{ "ModuleRelativePath", "Public/UVEditorLayerEditTool.h" },
		{ "NoAction.Name", "EChannelEditToolAction::NoAction" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UVEditorTools_EChannelEditToolAction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UVEditorTools,
		nullptr,
		"EChannelEditToolAction",
		"EChannelEditToolAction",
		Z_Construct_UEnum_UVEditorTools_EChannelEditToolAction_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UVEditorTools_EChannelEditToolAction_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UVEditorTools_EChannelEditToolAction_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UVEditorTools_EChannelEditToolAction_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UVEditorTools_EChannelEditToolAction()
	{
		if (!Z_Registration_Info_UEnum_EChannelEditToolAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChannelEditToolAction.InnerSingleton, Z_Construct_UEnum_UVEditorTools_EChannelEditToolAction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EChannelEditToolAction.InnerSingleton;
	}
	void UUVEditorChannelEditSettings::StaticRegisterNativesUUVEditorChannelEditSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVEditorChannelEditSettings);
	UClass* Z_Construct_UClass_UUVEditorChannelEditSettings_NoRegister()
	{
		return UUVEditorChannelEditSettings::StaticClass();
	}
	struct Z_Construct_UClass_UUVEditorChannelEditSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Action_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Action;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVEditorChannelEditSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorChannelEditSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UVEditorLayerEditTool.h" },
		{ "ModuleRelativePath", "Public/UVEditorLayerEditTool.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UUVEditorChannelEditSettings_Statics::NewProp_Action_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorChannelEditSettings_Statics::NewProp_Action_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** UV Layer Edit action to preform */" },
		{ "InvalidEnumValues", "NoAction" },
		{ "ModuleRelativePath", "Public/UVEditorLayerEditTool.h" },
		{ "ToolTip", "UV Layer Edit action to preform" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUVEditorChannelEditSettings_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorChannelEditSettings, Action), Z_Construct_UEnum_UVEditorTools_EChannelEditToolAction, METADATA_PARAMS(Z_Construct_UClass_UUVEditorChannelEditSettings_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorChannelEditSettings_Statics::NewProp_Action_MetaData)) }; // 588806635
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUVEditorChannelEditSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorChannelEditSettings_Statics::NewProp_Action_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorChannelEditSettings_Statics::NewProp_Action,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVEditorChannelEditSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVEditorChannelEditSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVEditorChannelEditSettings_Statics::ClassParams = {
		&UUVEditorChannelEditSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUVEditorChannelEditSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorChannelEditSettings_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UUVEditorChannelEditSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorChannelEditSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVEditorChannelEditSettings()
	{
		if (!Z_Registration_Info_UClass_UUVEditorChannelEditSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVEditorChannelEditSettings.OuterSingleton, Z_Construct_UClass_UUVEditorChannelEditSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVEditorChannelEditSettings.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UUVEditorChannelEditSettings>()
	{
		return UUVEditorChannelEditSettings::StaticClass();
	}
	UUVEditorChannelEditSettings::UUVEditorChannelEditSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVEditorChannelEditSettings);
	UUVEditorChannelEditSettings::~UUVEditorChannelEditSettings() {}
	DEFINE_FUNCTION(UUVEditorChannelEditTargetProperties::execGetUVChannelNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetUVChannelNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUVEditorChannelEditTargetProperties::execGetAssetNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetAssetNames();
		P_NATIVE_END;
	}
	void UUVEditorChannelEditTargetProperties::StaticRegisterNativesUUVEditorChannelEditTargetProperties()
	{
		UClass* Class = UUVEditorChannelEditTargetProperties::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAssetNames", &UUVEditorChannelEditTargetProperties::execGetAssetNames },
			{ "GetUVChannelNames", &UUVEditorChannelEditTargetProperties::execGetUVChannelNames },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUVEditorChannelEditTargetProperties_GetAssetNames_Statics
	{
		struct UVEditorChannelEditTargetProperties_eventGetAssetNames_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUVEditorChannelEditTargetProperties_GetAssetNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUVEditorChannelEditTargetProperties_GetAssetNames_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUVEditorChannelEditTargetProperties_GetAssetNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVEditorChannelEditTargetProperties_eventGetAssetNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUVEditorChannelEditTargetProperties_GetAssetNames_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUVEditorChannelEditTargetProperties_GetAssetNames_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUVEditorChannelEditTargetProperties_GetAssetNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUVEditorChannelEditTargetProperties_GetAssetNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUVEditorChannelEditTargetProperties_GetAssetNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUVEditorChannelEditTargetProperties_GetAssetNames_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UVEditorLayerEditTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUVEditorChannelEditTargetProperties_GetAssetNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUVEditorChannelEditTargetProperties, nullptr, "GetAssetNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUVEditorChannelEditTargetProperties_GetAssetNames_Statics::UVEditorChannelEditTargetProperties_eventGetAssetNames_Parms), Z_Construct_UFunction_UUVEditorChannelEditTargetProperties_GetAssetNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUVEditorChannelEditTargetProperties_GetAssetNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUVEditorChannelEditTargetProperties_GetAssetNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUVEditorChannelEditTargetProperties_GetAssetNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUVEditorChannelEditTargetProperties_GetAssetNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUVEditorChannelEditTargetProperties_GetAssetNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUVEditorChannelEditTargetProperties_GetUVChannelNames_Statics
	{
		struct UVEditorChannelEditTargetProperties_eventGetUVChannelNames_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUVEditorChannelEditTargetProperties_GetUVChannelNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUVEditorChannelEditTargetProperties_GetUVChannelNames_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUVEditorChannelEditTargetProperties_GetUVChannelNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVEditorChannelEditTargetProperties_eventGetUVChannelNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUVEditorChannelEditTargetProperties_GetUVChannelNames_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUVEditorChannelEditTargetProperties_GetUVChannelNames_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUVEditorChannelEditTargetProperties_GetUVChannelNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUVEditorChannelEditTargetProperties_GetUVChannelNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUVEditorChannelEditTargetProperties_GetUVChannelNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUVEditorChannelEditTargetProperties_GetUVChannelNames_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UVEditorLayerEditTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUVEditorChannelEditTargetProperties_GetUVChannelNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUVEditorChannelEditTargetProperties, nullptr, "GetUVChannelNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUVEditorChannelEditTargetProperties_GetUVChannelNames_Statics::UVEditorChannelEditTargetProperties_eventGetUVChannelNames_Parms), Z_Construct_UFunction_UUVEditorChannelEditTargetProperties_GetUVChannelNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUVEditorChannelEditTargetProperties_GetUVChannelNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUVEditorChannelEditTargetProperties_GetUVChannelNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUVEditorChannelEditTargetProperties_GetUVChannelNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUVEditorChannelEditTargetProperties_GetUVChannelNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUVEditorChannelEditTargetProperties_GetUVChannelNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVEditorChannelEditTargetProperties);
	UClass* Z_Construct_UClass_UUVEditorChannelEditTargetProperties_NoRegister()
	{
		return UUVEditorChannelEditTargetProperties::StaticClass();
	}
	struct Z_Construct_UClass_UUVEditorChannelEditTargetProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Asset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetChannel_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TargetChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceChannel_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReferenceChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bActionNeedsAsset_MetaData[];
#endif
		static void NewProp_bActionNeedsAsset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActionNeedsAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bActionNeedsReference_MetaData[];
#endif
		static void NewProp_bActionNeedsReference_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActionNeedsReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bActionNeedsTarget_MetaData[];
#endif
		static void NewProp_bActionNeedsTarget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActionNeedsTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVEditorChannelEditTargetProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUVEditorChannelEditTargetProperties_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUVEditorChannelEditTargetProperties_GetAssetNames, "GetAssetNames" }, // 2400911148
		{ &Z_Construct_UFunction_UUVEditorChannelEditTargetProperties_GetUVChannelNames, "GetUVChannelNames" }, // 515219057
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorChannelEditTargetProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UVEditorLayerEditTool.h" },
		{ "ModuleRelativePath", "Public/UVEditorLayerEditTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorChannelEditTargetProperties_Statics::NewProp_Asset_MetaData[] = {
		{ "Category", "UVChannels" },
		{ "DisplayName", "Asset" },
		{ "EditCondition", "bActionNeedsAsset" },
		{ "EditConditionHides", "TRUE" },
		{ "GetOptions", "GetAssetNames" },
		{ "HideEditConditionToggle", "TRUE" },
		{ "ModuleRelativePath", "Public/UVEditorLayerEditTool.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUVEditorChannelEditTargetProperties_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorChannelEditTargetProperties, Asset), METADATA_PARAMS(Z_Construct_UClass_UUVEditorChannelEditTargetProperties_Statics::NewProp_Asset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorChannelEditTargetProperties_Statics::NewProp_Asset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorChannelEditTargetProperties_Statics::NewProp_TargetChannel_MetaData[] = {
		{ "Category", "UVChannels" },
		{ "DisplayName", "Target UV Channel" },
		{ "EditCondition", "bActionNeedsTarget" },
		{ "EditConditionHides", "TRUE" },
		{ "GetOptions", "GetUVChannelNames" },
		{ "HideEditConditionToggle", "TRUE" },
		{ "ModuleRelativePath", "Public/UVEditorLayerEditTool.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUVEditorChannelEditTargetProperties_Statics::NewProp_TargetChannel = { "TargetChannel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorChannelEditTargetProperties, TargetChannel), METADATA_PARAMS(Z_Construct_UClass_UUVEditorChannelEditTargetProperties_Statics::NewProp_TargetChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorChannelEditTargetProperties_Statics::NewProp_TargetChannel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorChannelEditTargetProperties_Statics::NewProp_ReferenceChannel_MetaData[] = {
		{ "Category", "UVChannels" },
		{ "DisplayName", "Source UV Channel" },
		{ "EditCondition", "bActionNeedsReference" },
		{ "EditConditionHides", "TRUE" },
		{ "GetOptions", "GetUVChannelNames" },
		{ "HideEditConditionToggle", "TRUE" },
		{ "ModuleRelativePath", "Public/UVEditorLayerEditTool.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUVEditorChannelEditTargetProperties_Statics::NewProp_ReferenceChannel = { "ReferenceChannel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorChannelEditTargetProperties, ReferenceChannel), METADATA_PARAMS(Z_Construct_UClass_UUVEditorChannelEditTargetProperties_Statics::NewProp_ReferenceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorChannelEditTargetProperties_Statics::NewProp_ReferenceChannel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorChannelEditTargetProperties_Statics::NewProp_bActionNeedsAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVEditorLayerEditTool.h" },
		{ "TransientToolProperty", "" },
	};
#endif
	void Z_Construct_UClass_UUVEditorChannelEditTargetProperties_Statics::NewProp_bActionNeedsAsset_SetBit(void* Obj)
	{
		((UUVEditorChannelEditTargetProperties*)Obj)->bActionNeedsAsset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUVEditorChannelEditTargetProperties_Statics::NewProp_bActionNeedsAsset = { "bActionNeedsAsset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUVEditorChannelEditTargetProperties), &Z_Construct_UClass_UUVEditorChannelEditTargetProperties_Statics::NewProp_bActionNeedsAsset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUVEditorChannelEditTargetProperties_Statics::NewProp_bActionNeedsAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorChannelEditTargetProperties_Statics::NewProp_bActionNeedsAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorChannelEditTargetProperties_Statics::NewProp_bActionNeedsReference_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVEditorLayerEditTool.h" },
		{ "TransientToolProperty", "" },
	};
#endif
	void Z_Construct_UClass_UUVEditorChannelEditTargetProperties_Statics::NewProp_bActionNeedsReference_SetBit(void* Obj)
	{
		((UUVEditorChannelEditTargetProperties*)Obj)->bActionNeedsReference = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUVEditorChannelEditTargetProperties_Statics::NewProp_bActionNeedsReference = { "bActionNeedsReference", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUVEditorChannelEditTargetProperties), &Z_Construct_UClass_UUVEditorChannelEditTargetProperties_Statics::NewProp_bActionNeedsReference_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUVEditorChannelEditTargetProperties_Statics::NewProp_bActionNeedsReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorChannelEditTargetProperties_Statics::NewProp_bActionNeedsReference_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorChannelEditTargetProperties_Statics::NewProp_bActionNeedsTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVEditorLayerEditTool.h" },
		{ "TransientToolProperty", "" },
	};
#endif
	void Z_Construct_UClass_UUVEditorChannelEditTargetProperties_Statics::NewProp_bActionNeedsTarget_SetBit(void* Obj)
	{
		((UUVEditorChannelEditTargetProperties*)Obj)->bActionNeedsTarget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUVEditorChannelEditTargetProperties_Statics::NewProp_bActionNeedsTarget = { "bActionNeedsTarget", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUVEditorChannelEditTargetProperties), &Z_Construct_UClass_UUVEditorChannelEditTargetProperties_Statics::NewProp_bActionNeedsTarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUVEditorChannelEditTargetProperties_Statics::NewProp_bActionNeedsTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorChannelEditTargetProperties_Statics::NewProp_bActionNeedsTarget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUVEditorChannelEditTargetProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorChannelEditTargetProperties_Statics::NewProp_Asset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorChannelEditTargetProperties_Statics::NewProp_TargetChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorChannelEditTargetProperties_Statics::NewProp_ReferenceChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorChannelEditTargetProperties_Statics::NewProp_bActionNeedsAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorChannelEditTargetProperties_Statics::NewProp_bActionNeedsReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorChannelEditTargetProperties_Statics::NewProp_bActionNeedsTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVEditorChannelEditTargetProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVEditorChannelEditTargetProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVEditorChannelEditTargetProperties_Statics::ClassParams = {
		&UUVEditorChannelEditTargetProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUVEditorChannelEditTargetProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorChannelEditTargetProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UUVEditorChannelEditTargetProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorChannelEditTargetProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVEditorChannelEditTargetProperties()
	{
		if (!Z_Registration_Info_UClass_UUVEditorChannelEditTargetProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVEditorChannelEditTargetProperties.OuterSingleton, Z_Construct_UClass_UUVEditorChannelEditTargetProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVEditorChannelEditTargetProperties.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UUVEditorChannelEditTargetProperties>()
	{
		return UUVEditorChannelEditTargetProperties::StaticClass();
	}
	UUVEditorChannelEditTargetProperties::UUVEditorChannelEditTargetProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVEditorChannelEditTargetProperties);
	UUVEditorChannelEditTargetProperties::~UUVEditorChannelEditTargetProperties() {}
	void UUVEditorChannelEditAddProperties::StaticRegisterNativesUUVEditorChannelEditAddProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVEditorChannelEditAddProperties);
	UClass* Z_Construct_UClass_UUVEditorChannelEditAddProperties_NoRegister()
	{
		return UUVEditorChannelEditAddProperties::StaticClass();
	}
	struct Z_Construct_UClass_UUVEditorChannelEditAddProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVEditorChannelEditAddProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorChannelEditAddProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UVEditorLayerEditTool.h" },
		{ "ModuleRelativePath", "Public/UVEditorLayerEditTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVEditorChannelEditAddProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVEditorChannelEditAddProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVEditorChannelEditAddProperties_Statics::ClassParams = {
		&UUVEditorChannelEditAddProperties::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUVEditorChannelEditAddProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorChannelEditAddProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVEditorChannelEditAddProperties()
	{
		if (!Z_Registration_Info_UClass_UUVEditorChannelEditAddProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVEditorChannelEditAddProperties.OuterSingleton, Z_Construct_UClass_UUVEditorChannelEditAddProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVEditorChannelEditAddProperties.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UUVEditorChannelEditAddProperties>()
	{
		return UUVEditorChannelEditAddProperties::StaticClass();
	}
	UUVEditorChannelEditAddProperties::UUVEditorChannelEditAddProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVEditorChannelEditAddProperties);
	UUVEditorChannelEditAddProperties::~UUVEditorChannelEditAddProperties() {}
	void UUVEditorChannelEditCopyProperties::StaticRegisterNativesUUVEditorChannelEditCopyProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVEditorChannelEditCopyProperties);
	UClass* Z_Construct_UClass_UUVEditorChannelEditCopyProperties_NoRegister()
	{
		return UUVEditorChannelEditCopyProperties::StaticClass();
	}
	struct Z_Construct_UClass_UUVEditorChannelEditCopyProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVEditorChannelEditCopyProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorChannelEditCopyProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UVEditorLayerEditTool.h" },
		{ "ModuleRelativePath", "Public/UVEditorLayerEditTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVEditorChannelEditCopyProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVEditorChannelEditCopyProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVEditorChannelEditCopyProperties_Statics::ClassParams = {
		&UUVEditorChannelEditCopyProperties::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUVEditorChannelEditCopyProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorChannelEditCopyProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVEditorChannelEditCopyProperties()
	{
		if (!Z_Registration_Info_UClass_UUVEditorChannelEditCopyProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVEditorChannelEditCopyProperties.OuterSingleton, Z_Construct_UClass_UUVEditorChannelEditCopyProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVEditorChannelEditCopyProperties.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UUVEditorChannelEditCopyProperties>()
	{
		return UUVEditorChannelEditCopyProperties::StaticClass();
	}
	UUVEditorChannelEditCopyProperties::UUVEditorChannelEditCopyProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVEditorChannelEditCopyProperties);
	UUVEditorChannelEditCopyProperties::~UUVEditorChannelEditCopyProperties() {}
	void UUVEditorChannelEditDeleteProperties::StaticRegisterNativesUUVEditorChannelEditDeleteProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVEditorChannelEditDeleteProperties);
	UClass* Z_Construct_UClass_UUVEditorChannelEditDeleteProperties_NoRegister()
	{
		return UUVEditorChannelEditDeleteProperties::StaticClass();
	}
	struct Z_Construct_UClass_UUVEditorChannelEditDeleteProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVEditorChannelEditDeleteProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorChannelEditDeleteProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UVEditorLayerEditTool.h" },
		{ "ModuleRelativePath", "Public/UVEditorLayerEditTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVEditorChannelEditDeleteProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVEditorChannelEditDeleteProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVEditorChannelEditDeleteProperties_Statics::ClassParams = {
		&UUVEditorChannelEditDeleteProperties::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUVEditorChannelEditDeleteProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorChannelEditDeleteProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVEditorChannelEditDeleteProperties()
	{
		if (!Z_Registration_Info_UClass_UUVEditorChannelEditDeleteProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVEditorChannelEditDeleteProperties.OuterSingleton, Z_Construct_UClass_UUVEditorChannelEditDeleteProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVEditorChannelEditDeleteProperties.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UUVEditorChannelEditDeleteProperties>()
	{
		return UUVEditorChannelEditDeleteProperties::StaticClass();
	}
	UUVEditorChannelEditDeleteProperties::UUVEditorChannelEditDeleteProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVEditorChannelEditDeleteProperties);
	UUVEditorChannelEditDeleteProperties::~UUVEditorChannelEditDeleteProperties() {}
	DEFINE_FUNCTION(UUVEditorChannelEditToolActionPropertySet::execApply)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Apply();
		P_NATIVE_END;
	}
	void UUVEditorChannelEditToolActionPropertySet::StaticRegisterNativesUUVEditorChannelEditToolActionPropertySet()
	{
		UClass* Class = UUVEditorChannelEditToolActionPropertySet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Apply", &UUVEditorChannelEditToolActionPropertySet::execApply },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUVEditorChannelEditToolActionPropertySet_Apply_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUVEditorChannelEditToolActionPropertySet_Apply_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Actions" },
		{ "ModuleRelativePath", "Public/UVEditorLayerEditTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUVEditorChannelEditToolActionPropertySet_Apply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUVEditorChannelEditToolActionPropertySet, nullptr, "Apply", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUVEditorChannelEditToolActionPropertySet_Apply_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUVEditorChannelEditToolActionPropertySet_Apply_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUVEditorChannelEditToolActionPropertySet_Apply()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUVEditorChannelEditToolActionPropertySet_Apply_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVEditorChannelEditToolActionPropertySet);
	UClass* Z_Construct_UClass_UUVEditorChannelEditToolActionPropertySet_NoRegister()
	{
		return UUVEditorChannelEditToolActionPropertySet::StaticClass();
	}
	struct Z_Construct_UClass_UUVEditorChannelEditToolActionPropertySet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVEditorChannelEditToolActionPropertySet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUVEditorChannelEditToolActionPropertySet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUVEditorChannelEditToolActionPropertySet_Apply, "Apply" }, // 809282033
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorChannelEditToolActionPropertySet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UVEditorLayerEditTool.h" },
		{ "ModuleRelativePath", "Public/UVEditorLayerEditTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVEditorChannelEditToolActionPropertySet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVEditorChannelEditToolActionPropertySet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVEditorChannelEditToolActionPropertySet_Statics::ClassParams = {
		&UUVEditorChannelEditToolActionPropertySet::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UUVEditorChannelEditToolActionPropertySet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorChannelEditToolActionPropertySet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVEditorChannelEditToolActionPropertySet()
	{
		if (!Z_Registration_Info_UClass_UUVEditorChannelEditToolActionPropertySet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVEditorChannelEditToolActionPropertySet.OuterSingleton, Z_Construct_UClass_UUVEditorChannelEditToolActionPropertySet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVEditorChannelEditToolActionPropertySet.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UUVEditorChannelEditToolActionPropertySet>()
	{
		return UUVEditorChannelEditToolActionPropertySet::StaticClass();
	}
	UUVEditorChannelEditToolActionPropertySet::UUVEditorChannelEditToolActionPropertySet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVEditorChannelEditToolActionPropertySet);
	UUVEditorChannelEditToolActionPropertySet::~UUVEditorChannelEditToolActionPropertySet() {}
	void UUVEditorChannelEditTool::StaticRegisterNativesUUVEditorChannelEditTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVEditorChannelEditTool);
	UClass* Z_Construct_UClass_UUVEditorChannelEditTool_NoRegister()
	{
		return UUVEditorChannelEditTool::StaticClass();
	}
	struct Z_Construct_UClass_UUVEditorChannelEditTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Targets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Targets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolActions_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ToolActions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionSelectionProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActionSelectionProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceChannelProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceChannelProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddActionProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AddActionProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CopyActionProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CopyActionProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeleteActionProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DeleteActionProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmitChangeAPI_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EmitChangeAPI;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVEditorChannelEditTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveTool,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorChannelEditTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "UVEditorLayerEditTool.h" },
		{ "ModuleRelativePath", "Public/UVEditorLayerEditTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorChannelEditTool_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UUVEditorToolMeshInput_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorChannelEditTool_Statics::NewProp_Targets_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVEditorLayerEditTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUVEditorChannelEditTool_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorChannelEditTool, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUVEditorChannelEditTool_Statics::NewProp_Targets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorChannelEditTool_Statics::NewProp_Targets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorChannelEditTool_Statics::NewProp_ToolActions_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVEditorLayerEditTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorChannelEditTool_Statics::NewProp_ToolActions = { "ToolActions", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorChannelEditTool, ToolActions), Z_Construct_UClass_UUVEditorChannelEditToolActionPropertySet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVEditorChannelEditTool_Statics::NewProp_ToolActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorChannelEditTool_Statics::NewProp_ToolActions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorChannelEditTool_Statics::NewProp_ActionSelectionProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVEditorLayerEditTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorChannelEditTool_Statics::NewProp_ActionSelectionProperties = { "ActionSelectionProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorChannelEditTool, ActionSelectionProperties), Z_Construct_UClass_UUVEditorChannelEditSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVEditorChannelEditTool_Statics::NewProp_ActionSelectionProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorChannelEditTool_Statics::NewProp_ActionSelectionProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorChannelEditTool_Statics::NewProp_SourceChannelProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVEditorLayerEditTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorChannelEditTool_Statics::NewProp_SourceChannelProperties = { "SourceChannelProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorChannelEditTool, SourceChannelProperties), Z_Construct_UClass_UUVEditorChannelEditTargetProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVEditorChannelEditTool_Statics::NewProp_SourceChannelProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorChannelEditTool_Statics::NewProp_SourceChannelProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorChannelEditTool_Statics::NewProp_AddActionProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVEditorLayerEditTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorChannelEditTool_Statics::NewProp_AddActionProperties = { "AddActionProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorChannelEditTool, AddActionProperties), Z_Construct_UClass_UUVEditorChannelEditAddProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVEditorChannelEditTool_Statics::NewProp_AddActionProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorChannelEditTool_Statics::NewProp_AddActionProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorChannelEditTool_Statics::NewProp_CopyActionProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVEditorLayerEditTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorChannelEditTool_Statics::NewProp_CopyActionProperties = { "CopyActionProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorChannelEditTool, CopyActionProperties), Z_Construct_UClass_UUVEditorChannelEditCopyProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVEditorChannelEditTool_Statics::NewProp_CopyActionProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorChannelEditTool_Statics::NewProp_CopyActionProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorChannelEditTool_Statics::NewProp_DeleteActionProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVEditorLayerEditTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorChannelEditTool_Statics::NewProp_DeleteActionProperties = { "DeleteActionProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorChannelEditTool, DeleteActionProperties), Z_Construct_UClass_UUVEditorChannelEditDeleteProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVEditorChannelEditTool_Statics::NewProp_DeleteActionProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorChannelEditTool_Statics::NewProp_DeleteActionProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorChannelEditTool_Statics::NewProp_EmitChangeAPI_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVEditorLayerEditTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorChannelEditTool_Statics::NewProp_EmitChangeAPI = { "EmitChangeAPI", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorChannelEditTool, EmitChangeAPI), Z_Construct_UClass_UUVToolEmitChangeAPI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVEditorChannelEditTool_Statics::NewProp_EmitChangeAPI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorChannelEditTool_Statics::NewProp_EmitChangeAPI_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUVEditorChannelEditTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorChannelEditTool_Statics::NewProp_Targets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorChannelEditTool_Statics::NewProp_Targets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorChannelEditTool_Statics::NewProp_ToolActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorChannelEditTool_Statics::NewProp_ActionSelectionProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorChannelEditTool_Statics::NewProp_SourceChannelProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorChannelEditTool_Statics::NewProp_AddActionProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorChannelEditTool_Statics::NewProp_CopyActionProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorChannelEditTool_Statics::NewProp_DeleteActionProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorChannelEditTool_Statics::NewProp_EmitChangeAPI,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVEditorChannelEditTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVEditorChannelEditTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVEditorChannelEditTool_Statics::ClassParams = {
		&UUVEditorChannelEditTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUVEditorChannelEditTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorChannelEditTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UUVEditorChannelEditTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorChannelEditTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVEditorChannelEditTool()
	{
		if (!Z_Registration_Info_UClass_UUVEditorChannelEditTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVEditorChannelEditTool.OuterSingleton, Z_Construct_UClass_UUVEditorChannelEditTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVEditorChannelEditTool.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UUVEditorChannelEditTool>()
	{
		return UUVEditorChannelEditTool::StaticClass();
	}
	UUVEditorChannelEditTool::UUVEditorChannelEditTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVEditorChannelEditTool);
	UUVEditorChannelEditTool::~UUVEditorChannelEditTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_UVEditorLayerEditTool_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_UVEditorLayerEditTool_h_Statics::EnumInfo[] = {
		{ EChannelEditToolAction_StaticEnum, TEXT("EChannelEditToolAction"), &Z_Registration_Info_UEnum_EChannelEditToolAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 588806635U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_UVEditorLayerEditTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUVEditorChannelEditToolBuilder, UUVEditorChannelEditToolBuilder::StaticClass, TEXT("UUVEditorChannelEditToolBuilder"), &Z_Registration_Info_UClass_UUVEditorChannelEditToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVEditorChannelEditToolBuilder), 2952488616U) },
		{ Z_Construct_UClass_UUVEditorChannelEditSettings, UUVEditorChannelEditSettings::StaticClass, TEXT("UUVEditorChannelEditSettings"), &Z_Registration_Info_UClass_UUVEditorChannelEditSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVEditorChannelEditSettings), 4232808955U) },
		{ Z_Construct_UClass_UUVEditorChannelEditTargetProperties, UUVEditorChannelEditTargetProperties::StaticClass, TEXT("UUVEditorChannelEditTargetProperties"), &Z_Registration_Info_UClass_UUVEditorChannelEditTargetProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVEditorChannelEditTargetProperties), 474556919U) },
		{ Z_Construct_UClass_UUVEditorChannelEditAddProperties, UUVEditorChannelEditAddProperties::StaticClass, TEXT("UUVEditorChannelEditAddProperties"), &Z_Registration_Info_UClass_UUVEditorChannelEditAddProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVEditorChannelEditAddProperties), 998049518U) },
		{ Z_Construct_UClass_UUVEditorChannelEditCopyProperties, UUVEditorChannelEditCopyProperties::StaticClass, TEXT("UUVEditorChannelEditCopyProperties"), &Z_Registration_Info_UClass_UUVEditorChannelEditCopyProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVEditorChannelEditCopyProperties), 2593692998U) },
		{ Z_Construct_UClass_UUVEditorChannelEditDeleteProperties, UUVEditorChannelEditDeleteProperties::StaticClass, TEXT("UUVEditorChannelEditDeleteProperties"), &Z_Registration_Info_UClass_UUVEditorChannelEditDeleteProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVEditorChannelEditDeleteProperties), 1823374156U) },
		{ Z_Construct_UClass_UUVEditorChannelEditToolActionPropertySet, UUVEditorChannelEditToolActionPropertySet::StaticClass, TEXT("UUVEditorChannelEditToolActionPropertySet"), &Z_Registration_Info_UClass_UUVEditorChannelEditToolActionPropertySet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVEditorChannelEditToolActionPropertySet), 3942472605U) },
		{ Z_Construct_UClass_UUVEditorChannelEditTool, UUVEditorChannelEditTool::StaticClass, TEXT("UUVEditorChannelEditTool"), &Z_Registration_Info_UClass_UUVEditorChannelEditTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVEditorChannelEditTool), 3587281338U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_UVEditorLayerEditTool_h_2561936984(TEXT("/Script/UVEditorTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_UVEditorLayerEditTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_UVEditorLayerEditTool_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_UVEditorLayerEditTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_UVEditorLayerEditTool_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
