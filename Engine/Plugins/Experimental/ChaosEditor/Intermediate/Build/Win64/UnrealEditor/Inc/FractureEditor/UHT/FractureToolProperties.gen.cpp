// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/FractureToolProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFractureToolProperties() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureInitialDynamicStateSettings();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureInitialDynamicStateSettings_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureModalTool();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureRemoveOnBreakSettings();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureRemoveOnBreakSettings_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolSetInitialDynamicState();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolSetInitialDynamicState_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolSetRemoveOnBreak();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolSetRemoveOnBreak_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolSettings();
	FRACTUREEDITOR_API UEnum* Z_Construct_UEnum_FractureEditor_EDynamicStateOverrideEnum();
	UPackage* Z_Construct_UPackage__Script_FractureEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDynamicStateOverrideEnum;
	static UEnum* EDynamicStateOverrideEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDynamicStateOverrideEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDynamicStateOverrideEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FractureEditor_EDynamicStateOverrideEnum, (UObject*)Z_Construct_UPackage__Script_FractureEditor(), TEXT("EDynamicStateOverrideEnum"));
		}
		return Z_Registration_Info_UEnum_EDynamicStateOverrideEnum.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UEnum* StaticEnum<EDynamicStateOverrideEnum>()
	{
		return EDynamicStateOverrideEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_FractureEditor_EDynamicStateOverrideEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FractureEditor_EDynamicStateOverrideEnum_Statics::Enumerators[] = {
		{ "EDynamicStateOverrideEnum::NoOverride", (int64)EDynamicStateOverrideEnum::NoOverride },
		{ "EDynamicStateOverrideEnum::Sleeping", (int64)EDynamicStateOverrideEnum::Sleeping },
		{ "EDynamicStateOverrideEnum::Kinematic", (int64)EDynamicStateOverrideEnum::Kinematic },
		{ "EDynamicStateOverrideEnum::Static", (int64)EDynamicStateOverrideEnum::Static },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FractureEditor_EDynamicStateOverrideEnum_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Kinematic.Comment", "/*~Chaos::EObjectStateType::Sleeping*/" },
		{ "Kinematic.DisplayName", "Kinematic" },
		{ "Kinematic.Name", "EDynamicStateOverrideEnum::Kinematic" },
		{ "ModuleRelativePath", "Private/FractureToolProperties.h" },
		{ "NoOverride.DisplayName", "No Override" },
		{ "NoOverride.Name", "EDynamicStateOverrideEnum::NoOverride" },
		{ "Sleeping.DisplayName", "Sleeping" },
		{ "Sleeping.Name", "EDynamicStateOverrideEnum::Sleeping" },
		{ "Static.Comment", "/*~Chaos::EObjectStateType::Kinematic*/" },
		{ "Static.DisplayName", "Static" },
		{ "Static.Name", "EDynamicStateOverrideEnum::Static" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FractureEditor_EDynamicStateOverrideEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FractureEditor,
		nullptr,
		"EDynamicStateOverrideEnum",
		"EDynamicStateOverrideEnum",
		Z_Construct_UEnum_FractureEditor_EDynamicStateOverrideEnum_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEditor_EDynamicStateOverrideEnum_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FractureEditor_EDynamicStateOverrideEnum_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEditor_EDynamicStateOverrideEnum_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FractureEditor_EDynamicStateOverrideEnum()
	{
		if (!Z_Registration_Info_UEnum_EDynamicStateOverrideEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDynamicStateOverrideEnum.InnerSingleton, Z_Construct_UEnum_FractureEditor_EDynamicStateOverrideEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDynamicStateOverrideEnum.InnerSingleton;
	}
	void UFractureInitialDynamicStateSettings::StaticRegisterNativesUFractureInitialDynamicStateSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureInitialDynamicStateSettings);
	UClass* Z_Construct_UClass_UFractureInitialDynamicStateSettings_NoRegister()
	{
		return UFractureInitialDynamicStateSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFractureInitialDynamicStateSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_InitialDynamicState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialDynamicState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InitialDynamicState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureInitialDynamicStateSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureToolSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureInitialDynamicStateSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Settings specifically related to the one-time destructive fracturing of a mesh **/" },
		{ "IncludePath", "FractureToolProperties.h" },
		{ "ModuleRelativePath", "Private/FractureToolProperties.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Settings specifically related to the one-time destructive fracturing of a mesh *" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFractureInitialDynamicStateSettings_Statics::NewProp_InitialDynamicState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureInitialDynamicStateSettings_Statics::NewProp_InitialDynamicState_MetaData[] = {
		{ "Category", "SetInitialDynamicState" },
		{ "Comment", "/** Simulation state to be set on selected bones */" },
		{ "DisplayName", "Initial Dynamic State" },
		{ "ModuleRelativePath", "Private/FractureToolProperties.h" },
		{ "ToolTip", "Simulation state to be set on selected bones" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFractureInitialDynamicStateSettings_Statics::NewProp_InitialDynamicState = { "InitialDynamicState", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureInitialDynamicStateSettings, InitialDynamicState), Z_Construct_UEnum_FractureEditor_EDynamicStateOverrideEnum, METADATA_PARAMS(Z_Construct_UClass_UFractureInitialDynamicStateSettings_Statics::NewProp_InitialDynamicState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureInitialDynamicStateSettings_Statics::NewProp_InitialDynamicState_MetaData)) }; // 3733537539
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureInitialDynamicStateSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureInitialDynamicStateSettings_Statics::NewProp_InitialDynamicState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureInitialDynamicStateSettings_Statics::NewProp_InitialDynamicState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureInitialDynamicStateSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureInitialDynamicStateSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureInitialDynamicStateSettings_Statics::ClassParams = {
		&UFractureInitialDynamicStateSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureInitialDynamicStateSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureInitialDynamicStateSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureInitialDynamicStateSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureInitialDynamicStateSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureInitialDynamicStateSettings()
	{
		if (!Z_Registration_Info_UClass_UFractureInitialDynamicStateSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureInitialDynamicStateSettings.OuterSingleton, Z_Construct_UClass_UFractureInitialDynamicStateSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureInitialDynamicStateSettings.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureInitialDynamicStateSettings>()
	{
		return UFractureInitialDynamicStateSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureInitialDynamicStateSettings);
	UFractureInitialDynamicStateSettings::~UFractureInitialDynamicStateSettings() {}
	void UFractureToolSetInitialDynamicState::StaticRegisterNativesUFractureToolSetInitialDynamicState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureToolSetInitialDynamicState);
	UClass* Z_Construct_UClass_UFractureToolSetInitialDynamicState_NoRegister()
	{
		return UFractureToolSetInitialDynamicState::StaticClass();
	}
	struct Z_Construct_UClass_UFractureToolSetInitialDynamicState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StateSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureToolSetInitialDynamicState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureModalTool,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolSetInitialDynamicState_Statics::Class_MetaDataParams[] = {
		{ "Category", "FractureTools" },
		{ "DisplayName", "State" },
		{ "IncludePath", "FractureToolProperties.h" },
		{ "ModuleRelativePath", "Private/FractureToolProperties.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolSetInitialDynamicState_Statics::NewProp_StateSettings_MetaData[] = {
		{ "Category", "InitialDynamicState" },
		{ "ModuleRelativePath", "Private/FractureToolProperties.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFractureToolSetInitialDynamicState_Statics::NewProp_StateSettings = { "StateSettings", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureToolSetInitialDynamicState, StateSettings), Z_Construct_UClass_UFractureInitialDynamicStateSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFractureToolSetInitialDynamicState_Statics::NewProp_StateSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolSetInitialDynamicState_Statics::NewProp_StateSettings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureToolSetInitialDynamicState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureToolSetInitialDynamicState_Statics::NewProp_StateSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureToolSetInitialDynamicState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureToolSetInitialDynamicState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureToolSetInitialDynamicState_Statics::ClassParams = {
		&UFractureToolSetInitialDynamicState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureToolSetInitialDynamicState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolSetInitialDynamicState_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureToolSetInitialDynamicState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolSetInitialDynamicState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureToolSetInitialDynamicState()
	{
		if (!Z_Registration_Info_UClass_UFractureToolSetInitialDynamicState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureToolSetInitialDynamicState.OuterSingleton, Z_Construct_UClass_UFractureToolSetInitialDynamicState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureToolSetInitialDynamicState.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureToolSetInitialDynamicState>()
	{
		return UFractureToolSetInitialDynamicState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureToolSetInitialDynamicState);
	UFractureToolSetInitialDynamicState::~UFractureToolSetInitialDynamicState() {}
	DEFINE_FUNCTION(UFractureRemoveOnBreakSettings::execDeleteRemoveOnBreakData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteRemoveOnBreakData();
		P_NATIVE_END;
	}
	void UFractureRemoveOnBreakSettings::StaticRegisterNativesUFractureRemoveOnBreakSettings()
	{
		UClass* Class = UFractureRemoveOnBreakSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeleteRemoveOnBreakData", &UFractureRemoveOnBreakSettings::execDeleteRemoveOnBreakData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFractureRemoveOnBreakSettings_DeleteRemoveOnBreakData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFractureRemoveOnBreakSettings_DeleteRemoveOnBreakData_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Actions" },
		{ "Comment", "/** remove the remove on break attribute from the geometry collection, usefull to save memory on the asset if not needed */" },
		{ "DisplayName", "Delete Remove-On-Break Data" },
		{ "ModuleRelativePath", "Private/FractureToolProperties.h" },
		{ "ToolTip", "remove the remove on break attribute from the geometry collection, usefull to save memory on the asset if not needed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFractureRemoveOnBreakSettings_DeleteRemoveOnBreakData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFractureRemoveOnBreakSettings, nullptr, "DeleteRemoveOnBreakData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFractureRemoveOnBreakSettings_DeleteRemoveOnBreakData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFractureRemoveOnBreakSettings_DeleteRemoveOnBreakData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFractureRemoveOnBreakSettings_DeleteRemoveOnBreakData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFractureRemoveOnBreakSettings_DeleteRemoveOnBreakData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureRemoveOnBreakSettings);
	UClass* Z_Construct_UClass_UFractureRemoveOnBreakSettings_NoRegister()
	{
		return UFractureRemoveOnBreakSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFractureRemoveOnBreakSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[];
#endif
		static void NewProp_Enabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostBreakTimer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PostBreakTimer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClusterCrumbling_MetaData[];
#endif
		static void NewProp_ClusterCrumbling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ClusterCrumbling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemovalTimer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RemovalTimer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureRemoveOnBreakSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureToolSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFractureRemoveOnBreakSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFractureRemoveOnBreakSettings_DeleteRemoveOnBreakData, "DeleteRemoveOnBreakData" }, // 1190261312
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureRemoveOnBreakSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FractureToolProperties.h" },
		{ "ModuleRelativePath", "Private/FractureToolProperties.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureRemoveOnBreakSettings_Statics::NewProp_Enabled_MetaData[] = {
		{ "Category", "SetRemoveOnBreak" },
		{ "Comment", "/** whether or not the remove on fracture is enabled */" },
		{ "DisplayName", "Enabled" },
		{ "ModuleRelativePath", "Private/FractureToolProperties.h" },
		{ "ToolTip", "whether or not the remove on fracture is enabled" },
	};
#endif
	void Z_Construct_UClass_UFractureRemoveOnBreakSettings_Statics::NewProp_Enabled_SetBit(void* Obj)
	{
		((UFractureRemoveOnBreakSettings*)Obj)->Enabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureRemoveOnBreakSettings_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFractureRemoveOnBreakSettings), &Z_Construct_UClass_UFractureRemoveOnBreakSettings_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFractureRemoveOnBreakSettings_Statics::NewProp_Enabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureRemoveOnBreakSettings_Statics::NewProp_Enabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureRemoveOnBreakSettings_Statics::NewProp_PostBreakTimer_MetaData[] = {
		{ "Category", "SetRemoveOnBreak" },
		{ "Comment", "/** Min/Max time after break before removal starts */" },
		{ "DisplayName", "Post Break Timer" },
		{ "EditCondition", "Enabled" },
		{ "ModuleRelativePath", "Private/FractureToolProperties.h" },
		{ "ToolTip", "Min/Max time after break before removal starts" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFractureRemoveOnBreakSettings_Statics::NewProp_PostBreakTimer = { "PostBreakTimer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureRemoveOnBreakSettings, PostBreakTimer), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(Z_Construct_UClass_UFractureRemoveOnBreakSettings_Statics::NewProp_PostBreakTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureRemoveOnBreakSettings_Statics::NewProp_PostBreakTimer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureRemoveOnBreakSettings_Statics::NewProp_ClusterCrumbling_MetaData[] = {
		{ "Category", "SetRemoveOnBreak" },
		{ "Comment", "/** When set, clusters will crumble when post break timer expires, non clusters will simply use the removal timer */" },
		{ "DisplayName", "Cluster Crumbling" },
		{ "EditCondition", "Enabled" },
		{ "ModuleRelativePath", "Private/FractureToolProperties.h" },
		{ "ToolTip", "When set, clusters will crumble when post break timer expires, non clusters will simply use the removal timer" },
	};
#endif
	void Z_Construct_UClass_UFractureRemoveOnBreakSettings_Statics::NewProp_ClusterCrumbling_SetBit(void* Obj)
	{
		((UFractureRemoveOnBreakSettings*)Obj)->ClusterCrumbling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureRemoveOnBreakSettings_Statics::NewProp_ClusterCrumbling = { "ClusterCrumbling", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFractureRemoveOnBreakSettings), &Z_Construct_UClass_UFractureRemoveOnBreakSettings_Statics::NewProp_ClusterCrumbling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFractureRemoveOnBreakSettings_Statics::NewProp_ClusterCrumbling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureRemoveOnBreakSettings_Statics::NewProp_ClusterCrumbling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureRemoveOnBreakSettings_Statics::NewProp_RemovalTimer_MetaData[] = {
		{ "Category", "SetRemoveOnBreak" },
		{ "Comment", "/** Min/Max time for how long removal lasts - not applicable when cluster crumbling is on  */" },
		{ "DisplayName", "Removal Timer" },
		{ "EditCondition", "!ClusterCrumbling && Enabled" },
		{ "ModuleRelativePath", "Private/FractureToolProperties.h" },
		{ "ToolTip", "Min/Max time for how long removal lasts - not applicable when cluster crumbling is on" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFractureRemoveOnBreakSettings_Statics::NewProp_RemovalTimer = { "RemovalTimer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureRemoveOnBreakSettings, RemovalTimer), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(Z_Construct_UClass_UFractureRemoveOnBreakSettings_Statics::NewProp_RemovalTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureRemoveOnBreakSettings_Statics::NewProp_RemovalTimer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureRemoveOnBreakSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureRemoveOnBreakSettings_Statics::NewProp_Enabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureRemoveOnBreakSettings_Statics::NewProp_PostBreakTimer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureRemoveOnBreakSettings_Statics::NewProp_ClusterCrumbling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureRemoveOnBreakSettings_Statics::NewProp_RemovalTimer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureRemoveOnBreakSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureRemoveOnBreakSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureRemoveOnBreakSettings_Statics::ClassParams = {
		&UFractureRemoveOnBreakSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFractureRemoveOnBreakSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureRemoveOnBreakSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureRemoveOnBreakSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureRemoveOnBreakSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureRemoveOnBreakSettings()
	{
		if (!Z_Registration_Info_UClass_UFractureRemoveOnBreakSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureRemoveOnBreakSettings.OuterSingleton, Z_Construct_UClass_UFractureRemoveOnBreakSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureRemoveOnBreakSettings.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureRemoveOnBreakSettings>()
	{
		return UFractureRemoveOnBreakSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureRemoveOnBreakSettings);
	UFractureRemoveOnBreakSettings::~UFractureRemoveOnBreakSettings() {}
	void UFractureToolSetRemoveOnBreak::StaticRegisterNativesUFractureToolSetRemoveOnBreak()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureToolSetRemoveOnBreak);
	UClass* Z_Construct_UClass_UFractureToolSetRemoveOnBreak_NoRegister()
	{
		return UFractureToolSetRemoveOnBreak::StaticClass();
	}
	struct Z_Construct_UClass_UFractureToolSetRemoveOnBreak_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoveOnBreakSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RemoveOnBreakSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureToolSetRemoveOnBreak_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureModalTool,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolSetRemoveOnBreak_Statics::Class_MetaDataParams[] = {
		{ "Category", "FractureTools" },
		{ "DisplayName", "RemoveOnBreak" },
		{ "IncludePath", "FractureToolProperties.h" },
		{ "ModuleRelativePath", "Private/FractureToolProperties.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolSetRemoveOnBreak_Statics::NewProp_RemoveOnBreakSettings_MetaData[] = {
		{ "Category", "InitialDynamicState" },
		{ "ModuleRelativePath", "Private/FractureToolProperties.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFractureToolSetRemoveOnBreak_Statics::NewProp_RemoveOnBreakSettings = { "RemoveOnBreakSettings", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureToolSetRemoveOnBreak, RemoveOnBreakSettings), Z_Construct_UClass_UFractureRemoveOnBreakSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFractureToolSetRemoveOnBreak_Statics::NewProp_RemoveOnBreakSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolSetRemoveOnBreak_Statics::NewProp_RemoveOnBreakSettings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureToolSetRemoveOnBreak_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureToolSetRemoveOnBreak_Statics::NewProp_RemoveOnBreakSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureToolSetRemoveOnBreak_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureToolSetRemoveOnBreak>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureToolSetRemoveOnBreak_Statics::ClassParams = {
		&UFractureToolSetRemoveOnBreak::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureToolSetRemoveOnBreak_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolSetRemoveOnBreak_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureToolSetRemoveOnBreak_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolSetRemoveOnBreak_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureToolSetRemoveOnBreak()
	{
		if (!Z_Registration_Info_UClass_UFractureToolSetRemoveOnBreak.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureToolSetRemoveOnBreak.OuterSingleton, Z_Construct_UClass_UFractureToolSetRemoveOnBreak_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureToolSetRemoveOnBreak.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureToolSetRemoveOnBreak>()
	{
		return UFractureToolSetRemoveOnBreak::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureToolSetRemoveOnBreak);
	UFractureToolSetRemoveOnBreak::~UFractureToolSetRemoveOnBreak() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProperties_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProperties_h_Statics::EnumInfo[] = {
		{ EDynamicStateOverrideEnum_StaticEnum, TEXT("EDynamicStateOverrideEnum"), &Z_Registration_Info_UEnum_EDynamicStateOverrideEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3733537539U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProperties_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFractureInitialDynamicStateSettings, UFractureInitialDynamicStateSettings::StaticClass, TEXT("UFractureInitialDynamicStateSettings"), &Z_Registration_Info_UClass_UFractureInitialDynamicStateSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureInitialDynamicStateSettings), 1046588595U) },
		{ Z_Construct_UClass_UFractureToolSetInitialDynamicState, UFractureToolSetInitialDynamicState::StaticClass, TEXT("UFractureToolSetInitialDynamicState"), &Z_Registration_Info_UClass_UFractureToolSetInitialDynamicState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureToolSetInitialDynamicState), 1558632849U) },
		{ Z_Construct_UClass_UFractureRemoveOnBreakSettings, UFractureRemoveOnBreakSettings::StaticClass, TEXT("UFractureRemoveOnBreakSettings"), &Z_Registration_Info_UClass_UFractureRemoveOnBreakSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureRemoveOnBreakSettings), 3715254401U) },
		{ Z_Construct_UClass_UFractureToolSetRemoveOnBreak, UFractureToolSetRemoveOnBreak::StaticClass, TEXT("UFractureToolSetRemoveOnBreak"), &Z_Registration_Info_UClass_UFractureToolSetRemoveOnBreak, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureToolSetRemoveOnBreak), 3190736002U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProperties_h_1096687509(TEXT("/Script/FractureEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProperties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProperties_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProperties_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProperties_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
