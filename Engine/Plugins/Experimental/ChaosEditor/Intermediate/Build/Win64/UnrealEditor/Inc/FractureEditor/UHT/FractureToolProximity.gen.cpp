// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/FractureToolProximity.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFractureToolProximity() {}
// Cross Module References
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EProximityContactMethod();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EProximityMethod();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureModalTool();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureProximityActions();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureProximityActions_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureProximitySettings();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureProximitySettings_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolProximity();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolProximity_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolSettings();
	UPackage* Z_Construct_UPackage__Script_FractureEditor();
// End Cross Module References
	void UFractureProximitySettings::StaticRegisterNativesUFractureProximitySettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureProximitySettings);
	UClass* Z_Construct_UClass_UFractureProximitySettings_NoRegister()
	{
		return UFractureProximitySettings::StaticClass();
	}
	struct Z_Construct_UClass_UFractureProximitySettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Method_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Method;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_DistanceThreshold;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ContactMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContactMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ContactMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContactThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ContactThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAsConnectionGraph_MetaData[];
#endif
		static void NewProp_bUseAsConnectionGraph_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAsConnectionGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowProximity_MetaData[];
#endif
		static void NewProp_bShowProximity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowProximity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyShowForSelected_MetaData[];
#endif
		static void NewProp_bOnlyShowForSelected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyShowForSelected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureProximitySettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureToolSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureProximitySettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Settings controlling how proximity is detected for geometry collections */" },
		{ "IncludePath", "FractureToolProximity.h" },
		{ "ModuleRelativePath", "Private/FractureToolProximity.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Settings controlling how proximity is detected for geometry collections" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFractureProximitySettings_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureProximitySettings_Statics::NewProp_Method_MetaData[] = {
		{ "Category", "Automatic" },
		{ "Comment", "// Which method to use to decide whether a given piece of geometry is in proximity with another\n" },
		{ "ModuleRelativePath", "Private/FractureToolProximity.h" },
		{ "ToolTip", "Which method to use to decide whether a given piece of geometry is in proximity with another" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFractureProximitySettings_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureProximitySettings, Method), Z_Construct_UEnum_Chaos_EProximityMethod, METADATA_PARAMS(Z_Construct_UClass_UFractureProximitySettings_Statics::NewProp_Method_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureProximitySettings_Statics::NewProp_Method_MetaData)) }; // 2310855953
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureProximitySettings_Statics::NewProp_DistanceThreshold_MetaData[] = {
		{ "Category", "Automatic" },
		{ "ClampMin", "0" },
		{ "Comment", "// If hull-based proximity detection is enabled, amount to expand hulls when searching for overlapping neighbors\n" },
		{ "EditCondition", "Method == EProximityMethod::ConvexHull" },
		{ "ModuleRelativePath", "Private/FractureToolProximity.h" },
		{ "ToolTip", "If hull-based proximity detection is enabled, amount to expand hulls when searching for overlapping neighbors" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UFractureProximitySettings_Statics::NewProp_DistanceThreshold = { "DistanceThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureProximitySettings, DistanceThreshold), METADATA_PARAMS(Z_Construct_UClass_UFractureProximitySettings_Statics::NewProp_DistanceThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureProximitySettings_Statics::NewProp_DistanceThreshold_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFractureProximitySettings_Statics::NewProp_ContactMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureProximitySettings_Statics::NewProp_ContactMethod_MetaData[] = {
		{ "Category", "Automatic" },
		{ "Comment", "// Method to use to determine the contact between two pieces, if the Contact Threshold is greater than 0\n" },
		{ "ModuleRelativePath", "Private/FractureToolProximity.h" },
		{ "ToolTip", "Method to use to determine the contact between two pieces, if the Contact Threshold is greater than 0" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFractureProximitySettings_Statics::NewProp_ContactMethod = { "ContactMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureProximitySettings, ContactMethod), Z_Construct_UEnum_Chaos_EProximityContactMethod, METADATA_PARAMS(Z_Construct_UClass_UFractureProximitySettings_Statics::NewProp_ContactMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureProximitySettings_Statics::NewProp_ContactMethod_MetaData)) }; // 370826576
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureProximitySettings_Statics::NewProp_ContactThreshold_MetaData[] = {
		{ "Category", "Automatic" },
		{ "ClampMin", "0" },
		{ "Comment", "// If greater than zero, proximity will be additionally filtered by a 'contact' threshold, in cm, to exclude grazing / corner proximity\n" },
		{ "ModuleRelativePath", "Private/FractureToolProximity.h" },
		{ "ToolTip", "If greater than zero, proximity will be additionally filtered by a 'contact' threshold, in cm, to exclude grazing / corner proximity" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UFractureProximitySettings_Statics::NewProp_ContactThreshold = { "ContactThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureProximitySettings, ContactThreshold), METADATA_PARAMS(Z_Construct_UClass_UFractureProximitySettings_Statics::NewProp_ContactThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureProximitySettings_Statics::NewProp_ContactThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureProximitySettings_Statics::NewProp_bUseAsConnectionGraph_MetaData[] = {
		{ "Category", "Automatic" },
		{ "Comment", "// Whether to automatically transform the proximity graph into a connection graph to be used for simulation\n" },
		{ "ModuleRelativePath", "Private/FractureToolProximity.h" },
		{ "ToolTip", "Whether to automatically transform the proximity graph into a connection graph to be used for simulation" },
	};
#endif
	void Z_Construct_UClass_UFractureProximitySettings_Statics::NewProp_bUseAsConnectionGraph_SetBit(void* Obj)
	{
		((UFractureProximitySettings*)Obj)->bUseAsConnectionGraph = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureProximitySettings_Statics::NewProp_bUseAsConnectionGraph = { "bUseAsConnectionGraph", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFractureProximitySettings), &Z_Construct_UClass_UFractureProximitySettings_Statics::NewProp_bUseAsConnectionGraph_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFractureProximitySettings_Statics::NewProp_bUseAsConnectionGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureProximitySettings_Statics::NewProp_bUseAsConnectionGraph_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureProximitySettings_Statics::NewProp_bShowProximity_MetaData[] = {
		{ "Category", "Visualization" },
		{ "Comment", "// Whether to display the proximity graph edges\n" },
		{ "ModuleRelativePath", "Private/FractureToolProximity.h" },
		{ "ToolTip", "Whether to display the proximity graph edges" },
	};
#endif
	void Z_Construct_UClass_UFractureProximitySettings_Statics::NewProp_bShowProximity_SetBit(void* Obj)
	{
		((UFractureProximitySettings*)Obj)->bShowProximity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureProximitySettings_Statics::NewProp_bShowProximity = { "bShowProximity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFractureProximitySettings), &Z_Construct_UClass_UFractureProximitySettings_Statics::NewProp_bShowProximity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFractureProximitySettings_Statics::NewProp_bShowProximity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureProximitySettings_Statics::NewProp_bShowProximity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureProximitySettings_Statics::NewProp_bOnlyShowForSelected_MetaData[] = {
		{ "Category", "Visualization" },
		{ "Comment", "// Whether to only show the proximity graph connections for selected bones\n" },
		{ "EditCondition", "bShowProximity" },
		{ "ModuleRelativePath", "Private/FractureToolProximity.h" },
		{ "ToolTip", "Whether to only show the proximity graph connections for selected bones" },
	};
#endif
	void Z_Construct_UClass_UFractureProximitySettings_Statics::NewProp_bOnlyShowForSelected_SetBit(void* Obj)
	{
		((UFractureProximitySettings*)Obj)->bOnlyShowForSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureProximitySettings_Statics::NewProp_bOnlyShowForSelected = { "bOnlyShowForSelected", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFractureProximitySettings), &Z_Construct_UClass_UFractureProximitySettings_Statics::NewProp_bOnlyShowForSelected_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFractureProximitySettings_Statics::NewProp_bOnlyShowForSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureProximitySettings_Statics::NewProp_bOnlyShowForSelected_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureProximitySettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureProximitySettings_Statics::NewProp_Method_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureProximitySettings_Statics::NewProp_Method,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureProximitySettings_Statics::NewProp_DistanceThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureProximitySettings_Statics::NewProp_ContactMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureProximitySettings_Statics::NewProp_ContactMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureProximitySettings_Statics::NewProp_ContactThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureProximitySettings_Statics::NewProp_bUseAsConnectionGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureProximitySettings_Statics::NewProp_bShowProximity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureProximitySettings_Statics::NewProp_bOnlyShowForSelected,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureProximitySettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureProximitySettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureProximitySettings_Statics::ClassParams = {
		&UFractureProximitySettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureProximitySettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureProximitySettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureProximitySettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureProximitySettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureProximitySettings()
	{
		if (!Z_Registration_Info_UClass_UFractureProximitySettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureProximitySettings.OuterSingleton, Z_Construct_UClass_UFractureProximitySettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureProximitySettings.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureProximitySettings>()
	{
		return UFractureProximitySettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureProximitySettings);
	UFractureProximitySettings::~UFractureProximitySettings() {}
	DEFINE_FUNCTION(UFractureProximityActions::execSetFromDefaults)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFromDefaults();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFractureProximityActions::execSaveAsDefaults)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveAsDefaults();
		P_NATIVE_END;
	}
	void UFractureProximityActions::StaticRegisterNativesUFractureProximityActions()
	{
		UClass* Class = UFractureProximityActions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SaveAsDefaults", &UFractureProximityActions::execSaveAsDefaults },
			{ "SetFromDefaults", &UFractureProximityActions::execSetFromDefaults },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFractureProximityActions_SaveAsDefaults_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFractureProximityActions_SaveAsDefaults_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "ProjectDefaults" },
		{ "Comment", "/** Save settings as project defaults, to be used for all new geometry collections */" },
		{ "DisplayName", "Save As Defaults" },
		{ "ModuleRelativePath", "Private/FractureToolProximity.h" },
		{ "ToolTip", "Save settings as project defaults, to be used for all new geometry collections" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFractureProximityActions_SaveAsDefaults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFractureProximityActions, nullptr, "SaveAsDefaults", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFractureProximityActions_SaveAsDefaults_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFractureProximityActions_SaveAsDefaults_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFractureProximityActions_SaveAsDefaults()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFractureProximityActions_SaveAsDefaults_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFractureProximityActions_SetFromDefaults_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFractureProximityActions_SetFromDefaults_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "ProjectDefaults" },
		{ "Comment", "/** Set settings from current project defaults */" },
		{ "DisplayName", "Set From Defaults" },
		{ "ModuleRelativePath", "Private/FractureToolProximity.h" },
		{ "ToolTip", "Set settings from current project defaults" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFractureProximityActions_SetFromDefaults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFractureProximityActions, nullptr, "SetFromDefaults", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFractureProximityActions_SetFromDefaults_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFractureProximityActions_SetFromDefaults_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFractureProximityActions_SetFromDefaults()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFractureProximityActions_SetFromDefaults_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureProximityActions);
	UClass* Z_Construct_UClass_UFractureProximityActions_NoRegister()
	{
		return UFractureProximityActions::StaticClass();
	}
	struct Z_Construct_UClass_UFractureProximityActions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureProximityActions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureToolSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFractureProximityActions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFractureProximityActions_SaveAsDefaults, "SaveAsDefaults" }, // 422374711
		{ &Z_Construct_UFunction_UFractureProximityActions_SetFromDefaults, "SetFromDefaults" }, // 739003365
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureProximityActions_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UFUNCTION actions to manage default proximity detection settings for geometry collections\n * (These are pulled out from the above settings object mainly to control their ordering in the properties panel)\n */" },
		{ "IncludePath", "FractureToolProximity.h" },
		{ "ModuleRelativePath", "Private/FractureToolProximity.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UFUNCTION actions to manage default proximity detection settings for geometry collections\n(These are pulled out from the above settings object mainly to control their ordering in the properties panel)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureProximityActions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureProximityActions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureProximityActions_Statics::ClassParams = {
		&UFractureProximityActions::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureProximityActions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureProximityActions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureProximityActions()
	{
		if (!Z_Registration_Info_UClass_UFractureProximityActions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureProximityActions.OuterSingleton, Z_Construct_UClass_UFractureProximityActions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureProximityActions.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureProximityActions>()
	{
		return UFractureProximityActions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureProximityActions);
	UFractureProximityActions::~UFractureProximityActions() {}
	void UFractureToolProximity::StaticRegisterNativesUFractureToolProximity()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureToolProximity);
	UClass* Z_Construct_UClass_UFractureToolProximity_NoRegister()
	{
		return UFractureToolProximity::StaticClass();
	}
	struct Z_Construct_UClass_UFractureToolProximity_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProximitySettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ProximitySettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProximityActions_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ProximityActions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureToolProximity_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureModalTool,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolProximity_Statics::Class_MetaDataParams[] = {
		{ "Category", "FractureTools" },
		{ "DisplayName", "Proximity Tool" },
		{ "IncludePath", "FractureToolProximity.h" },
		{ "ModuleRelativePath", "Private/FractureToolProximity.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolProximity_Statics::NewProp_ProximitySettings_MetaData[] = {
		{ "Category", "Proximity" },
		{ "ModuleRelativePath", "Private/FractureToolProximity.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFractureToolProximity_Statics::NewProp_ProximitySettings = { "ProximitySettings", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureToolProximity, ProximitySettings), Z_Construct_UClass_UFractureProximitySettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFractureToolProximity_Statics::NewProp_ProximitySettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolProximity_Statics::NewProp_ProximitySettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolProximity_Statics::NewProp_ProximityActions_MetaData[] = {
		{ "Category", "Proximity" },
		{ "ModuleRelativePath", "Private/FractureToolProximity.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFractureToolProximity_Statics::NewProp_ProximityActions = { "ProximityActions", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureToolProximity, ProximityActions), Z_Construct_UClass_UFractureProximityActions_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFractureToolProximity_Statics::NewProp_ProximityActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolProximity_Statics::NewProp_ProximityActions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureToolProximity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureToolProximity_Statics::NewProp_ProximitySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureToolProximity_Statics::NewProp_ProximityActions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureToolProximity_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureToolProximity>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureToolProximity_Statics::ClassParams = {
		&UFractureToolProximity::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureToolProximity_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolProximity_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureToolProximity_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolProximity_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureToolProximity()
	{
		if (!Z_Registration_Info_UClass_UFractureToolProximity.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureToolProximity.OuterSingleton, Z_Construct_UClass_UFractureToolProximity_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureToolProximity.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureToolProximity>()
	{
		return UFractureToolProximity::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureToolProximity);
	UFractureToolProximity::~UFractureToolProximity() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFractureProximitySettings, UFractureProximitySettings::StaticClass, TEXT("UFractureProximitySettings"), &Z_Registration_Info_UClass_UFractureProximitySettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureProximitySettings), 633199190U) },
		{ Z_Construct_UClass_UFractureProximityActions, UFractureProximityActions::StaticClass, TEXT("UFractureProximityActions"), &Z_Registration_Info_UClass_UFractureProximityActions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureProximityActions), 1335357140U) },
		{ Z_Construct_UClass_UFractureToolProximity, UFractureToolProximity::StaticClass, TEXT("UFractureToolProximity"), &Z_Registration_Info_UClass_UFractureToolProximity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureToolProximity), 2211944163U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_3981876149(TEXT("/Script/FractureEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
