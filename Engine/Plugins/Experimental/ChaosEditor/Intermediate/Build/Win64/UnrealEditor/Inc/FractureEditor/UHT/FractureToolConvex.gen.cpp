// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/FractureToolConvex.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFractureToolConvex() {}
// Cross Module References
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EConvexOverlapRemoval();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureConvexActions();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureConvexActions_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureConvexSettings();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureConvexSettings_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureModalTool();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolConvex();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolConvex_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolSettings();
	UPackage* Z_Construct_UPackage__Script_FractureEditor();
// End Cross Module References
	DEFINE_FUNCTION(UFractureConvexSettings::execClearCustomConvex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearCustomConvex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFractureConvexSettings::execDeleteFromSelected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteFromSelected();
		P_NATIVE_END;
	}
	void UFractureConvexSettings::StaticRegisterNativesUFractureConvexSettings()
	{
		UClass* Class = UFractureConvexSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearCustomConvex", &UFractureConvexSettings::execClearCustomConvex },
			{ "DeleteFromSelected", &UFractureConvexSettings::execDeleteFromSelected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFractureConvexSettings_ClearCustomConvex_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFractureConvexSettings_ClearCustomConvex_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Custom" },
		{ "Comment", "/** Clear any manual adjustments to convex hulls on the selected bones */" },
		{ "DisplayName", "Clear Custom Convex" },
		{ "ModuleRelativePath", "Private/FractureToolConvex.h" },
		{ "ToolTip", "Clear any manual adjustments to convex hulls on the selected bones" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFractureConvexSettings_ClearCustomConvex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFractureConvexSettings, nullptr, "ClearCustomConvex", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFractureConvexSettings_ClearCustomConvex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFractureConvexSettings_ClearCustomConvex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFractureConvexSettings_ClearCustomConvex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFractureConvexSettings_ClearCustomConvex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFractureConvexSettings_DeleteFromSelected_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFractureConvexSettings_DeleteFromSelected_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Custom" },
		{ "Comment", "/** Delete convex hulls from selected clusters.  Does not affect hulls on leaves. */" },
		{ "DisplayName", "Delete From Selected" },
		{ "ModuleRelativePath", "Private/FractureToolConvex.h" },
		{ "ToolTip", "Delete convex hulls from selected clusters.  Does not affect hulls on leaves." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFractureConvexSettings_DeleteFromSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFractureConvexSettings, nullptr, "DeleteFromSelected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFractureConvexSettings_DeleteFromSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFractureConvexSettings_DeleteFromSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFractureConvexSettings_DeleteFromSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFractureConvexSettings_DeleteFromSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureConvexSettings);
	UClass* Z_Construct_UClass_UFractureConvexSettings_NoRegister()
	{
		return UFractureConvexSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFractureConvexSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CanExceedFraction_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_CanExceedFraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimplificationDistanceThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_SimplificationDistanceThreshold;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RemoveOverlaps_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoveOverlaps_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RemoveOverlaps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlapRemovalShrinkPercent_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_OverlapRemovalShrinkPercent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FractionAllowRemove_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_FractionAllowRemove;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureConvexSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureToolSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFractureConvexSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFractureConvexSettings_ClearCustomConvex, "ClearCustomConvex" }, // 3193971202
		{ &Z_Construct_UFunction_UFractureConvexSettings_DeleteFromSelected, "DeleteFromSelected" }, // 1032578181
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureConvexSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Settings controlling how convex hulls are generated for geometry collections */" },
		{ "IncludePath", "FractureToolConvex.h" },
		{ "ModuleRelativePath", "Private/FractureToolConvex.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Settings controlling how convex hulls are generated for geometry collections" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureConvexSettings_Statics::NewProp_CanExceedFraction_MetaData[] = {
		{ "Category", "Automatic" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Fraction (of geometry volume) by which a cluster's convex hull volume can exceed the actual geometry volume before instead using the hulls of the children.  0 means the convex volume cannot exceed the geometry volume; 1 means the convex volume is allowed to be 100% larger (2x) the geometry volume. */" },
		{ "DisplayName", "Allow Larger Hull Fraction" },
		{ "ModuleRelativePath", "Private/FractureToolConvex.h" },
		{ "ToolTip", "Fraction (of geometry volume) by which a cluster's convex hull volume can exceed the actual geometry volume before instead using the hulls of the children.  0 means the convex volume cannot exceed the geometry volume; 1 means the convex volume is allowed to be 100% larger (2x) the geometry volume." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UFractureConvexSettings_Statics::NewProp_CanExceedFraction = { "CanExceedFraction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureConvexSettings, CanExceedFraction), METADATA_PARAMS(Z_Construct_UClass_UFractureConvexSettings_Statics::NewProp_CanExceedFraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureConvexSettings_Statics::NewProp_CanExceedFraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureConvexSettings_Statics::NewProp_SimplificationDistanceThreshold_MetaData[] = {
		{ "Category", "Automatic" },
		{ "ClampMin", "0" },
		{ "Comment", "/** We simplify the convex shape to keep points spaced at least this far apart (except to keep the hull from collapsing to zero volume) */" },
		{ "ModuleRelativePath", "Private/FractureToolConvex.h" },
		{ "ToolTip", "We simplify the convex shape to keep points spaced at least this far apart (except to keep the hull from collapsing to zero volume)" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UFractureConvexSettings_Statics::NewProp_SimplificationDistanceThreshold = { "SimplificationDistanceThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureConvexSettings, SimplificationDistanceThreshold), METADATA_PARAMS(Z_Construct_UClass_UFractureConvexSettings_Statics::NewProp_SimplificationDistanceThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureConvexSettings_Statics::NewProp_SimplificationDistanceThreshold_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFractureConvexSettings_Statics::NewProp_RemoveOverlaps_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureConvexSettings_Statics::NewProp_RemoveOverlaps_MetaData[] = {
		{ "Category", "AutomaticOverlapRemoval" },
		{ "Comment", "/** Whether to automatically cut away overlapping parts of the convex hulls, to avoid the simulation 'popping' to fix the overlaps */" },
		{ "ModuleRelativePath", "Private/FractureToolConvex.h" },
		{ "ToolTip", "Whether to automatically cut away overlapping parts of the convex hulls, to avoid the simulation 'popping' to fix the overlaps" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFractureConvexSettings_Statics::NewProp_RemoveOverlaps = { "RemoveOverlaps", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureConvexSettings, RemoveOverlaps), Z_Construct_UEnum_Chaos_EConvexOverlapRemoval, METADATA_PARAMS(Z_Construct_UClass_UFractureConvexSettings_Statics::NewProp_RemoveOverlaps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureConvexSettings_Statics::NewProp_RemoveOverlaps_MetaData)) }; // 1572742885
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureConvexSettings_Statics::NewProp_OverlapRemovalShrinkPercent_MetaData[] = {
		{ "Category", "AutomaticOverlapRemoval" },
		{ "ClampMax", "99.9" },
		{ "Comment", "/** Overlap removal will be computed as if convex hulls were this percentage smaller (in range 0-100) */" },
		{ "ModuleRelativePath", "Private/FractureToolConvex.h" },
		{ "ToolTip", "Overlap removal will be computed as if convex hulls were this percentage smaller (in range 0-100)" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UFractureConvexSettings_Statics::NewProp_OverlapRemovalShrinkPercent = { "OverlapRemovalShrinkPercent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureConvexSettings, OverlapRemovalShrinkPercent), METADATA_PARAMS(Z_Construct_UClass_UFractureConvexSettings_Statics::NewProp_OverlapRemovalShrinkPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureConvexSettings_Statics::NewProp_OverlapRemovalShrinkPercent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureConvexSettings_Statics::NewProp_FractionAllowRemove_MetaData[] = {
		{ "Category", "AutomaticOverlapRemoval" },
		{ "ClampMax", "1" },
		{ "ClampMin", ".01" },
		{ "Comment", "/** Fraction of the convex hulls for a cluster that we can remove before using the hulls of the children */" },
		{ "DisplayName", "Max Removal Fraction" },
		{ "ModuleRelativePath", "Private/FractureToolConvex.h" },
		{ "ToolTip", "Fraction of the convex hulls for a cluster that we can remove before using the hulls of the children" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UFractureConvexSettings_Statics::NewProp_FractionAllowRemove = { "FractionAllowRemove", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureConvexSettings, FractionAllowRemove), METADATA_PARAMS(Z_Construct_UClass_UFractureConvexSettings_Statics::NewProp_FractionAllowRemove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureConvexSettings_Statics::NewProp_FractionAllowRemove_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureConvexSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureConvexSettings_Statics::NewProp_CanExceedFraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureConvexSettings_Statics::NewProp_SimplificationDistanceThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureConvexSettings_Statics::NewProp_RemoveOverlaps_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureConvexSettings_Statics::NewProp_RemoveOverlaps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureConvexSettings_Statics::NewProp_OverlapRemovalShrinkPercent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureConvexSettings_Statics::NewProp_FractionAllowRemove,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureConvexSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureConvexSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureConvexSettings_Statics::ClassParams = {
		&UFractureConvexSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFractureConvexSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureConvexSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureConvexSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureConvexSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureConvexSettings()
	{
		if (!Z_Registration_Info_UClass_UFractureConvexSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureConvexSettings.OuterSingleton, Z_Construct_UClass_UFractureConvexSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureConvexSettings.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureConvexSettings>()
	{
		return UFractureConvexSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureConvexSettings);
	UFractureConvexSettings::~UFractureConvexSettings() {}
	DEFINE_FUNCTION(UFractureConvexActions::execSetFromDefaults)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFromDefaults();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFractureConvexActions::execSaveAsDefaults)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveAsDefaults();
		P_NATIVE_END;
	}
	void UFractureConvexActions::StaticRegisterNativesUFractureConvexActions()
	{
		UClass* Class = UFractureConvexActions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SaveAsDefaults", &UFractureConvexActions::execSaveAsDefaults },
			{ "SetFromDefaults", &UFractureConvexActions::execSetFromDefaults },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFractureConvexActions_SaveAsDefaults_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFractureConvexActions_SaveAsDefaults_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "ProjectDefaults" },
		{ "Comment", "/** Save settings as project defaults, to be used for all new geometry collections */" },
		{ "DisplayName", "Save As Defaults" },
		{ "ModuleRelativePath", "Private/FractureToolConvex.h" },
		{ "ToolTip", "Save settings as project defaults, to be used for all new geometry collections" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFractureConvexActions_SaveAsDefaults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFractureConvexActions, nullptr, "SaveAsDefaults", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFractureConvexActions_SaveAsDefaults_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFractureConvexActions_SaveAsDefaults_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFractureConvexActions_SaveAsDefaults()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFractureConvexActions_SaveAsDefaults_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFractureConvexActions_SetFromDefaults_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFractureConvexActions_SetFromDefaults_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "ProjectDefaults" },
		{ "Comment", "/** Set settings from current project defaults */" },
		{ "DisplayName", "Set From Defaults" },
		{ "ModuleRelativePath", "Private/FractureToolConvex.h" },
		{ "ToolTip", "Set settings from current project defaults" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFractureConvexActions_SetFromDefaults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFractureConvexActions, nullptr, "SetFromDefaults", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFractureConvexActions_SetFromDefaults_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFractureConvexActions_SetFromDefaults_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFractureConvexActions_SetFromDefaults()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFractureConvexActions_SetFromDefaults_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureConvexActions);
	UClass* Z_Construct_UClass_UFractureConvexActions_NoRegister()
	{
		return UFractureConvexActions::StaticClass();
	}
	struct Z_Construct_UClass_UFractureConvexActions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureConvexActions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureToolSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFractureConvexActions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFractureConvexActions_SaveAsDefaults, "SaveAsDefaults" }, // 4173026739
		{ &Z_Construct_UFunction_UFractureConvexActions_SetFromDefaults, "SetFromDefaults" }, // 380622861
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureConvexActions_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UFUNCTION actions to manage convex hulls generation for geometry collections\n * (These are pulled out from the above settings object mainly to control their ordering in the properties panel)\n */" },
		{ "IncludePath", "FractureToolConvex.h" },
		{ "ModuleRelativePath", "Private/FractureToolConvex.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UFUNCTION actions to manage convex hulls generation for geometry collections\n(These are pulled out from the above settings object mainly to control their ordering in the properties panel)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureConvexActions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureConvexActions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureConvexActions_Statics::ClassParams = {
		&UFractureConvexActions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFractureConvexActions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureConvexActions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureConvexActions()
	{
		if (!Z_Registration_Info_UClass_UFractureConvexActions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureConvexActions.OuterSingleton, Z_Construct_UClass_UFractureConvexActions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureConvexActions.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureConvexActions>()
	{
		return UFractureConvexActions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureConvexActions);
	UFractureConvexActions::~UFractureConvexActions() {}
	void UFractureToolConvex::StaticRegisterNativesUFractureToolConvex()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureToolConvex);
	UClass* Z_Construct_UClass_UFractureToolConvex_NoRegister()
	{
		return UFractureToolConvex::StaticClass();
	}
	struct Z_Construct_UClass_UFractureToolConvex_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConvexSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ConvexSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConvexActions_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ConvexActions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureToolConvex_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureModalTool,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolConvex_Statics::Class_MetaDataParams[] = {
		{ "Category", "FractureTools" },
		{ "DisplayName", "Convex Tool" },
		{ "IncludePath", "FractureToolConvex.h" },
		{ "ModuleRelativePath", "Private/FractureToolConvex.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolConvex_Statics::NewProp_ConvexSettings_MetaData[] = {
		{ "Category", "Convex" },
		{ "ModuleRelativePath", "Private/FractureToolConvex.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFractureToolConvex_Statics::NewProp_ConvexSettings = { "ConvexSettings", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureToolConvex, ConvexSettings), Z_Construct_UClass_UFractureConvexSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFractureToolConvex_Statics::NewProp_ConvexSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolConvex_Statics::NewProp_ConvexSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolConvex_Statics::NewProp_ConvexActions_MetaData[] = {
		{ "Category", "Convex" },
		{ "ModuleRelativePath", "Private/FractureToolConvex.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFractureToolConvex_Statics::NewProp_ConvexActions = { "ConvexActions", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureToolConvex, ConvexActions), Z_Construct_UClass_UFractureConvexActions_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFractureToolConvex_Statics::NewProp_ConvexActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolConvex_Statics::NewProp_ConvexActions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureToolConvex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureToolConvex_Statics::NewProp_ConvexSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureToolConvex_Statics::NewProp_ConvexActions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureToolConvex_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureToolConvex>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureToolConvex_Statics::ClassParams = {
		&UFractureToolConvex::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureToolConvex_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolConvex_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureToolConvex_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolConvex_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureToolConvex()
	{
		if (!Z_Registration_Info_UClass_UFractureToolConvex.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureToolConvex.OuterSingleton, Z_Construct_UClass_UFractureToolConvex_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureToolConvex.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureToolConvex>()
	{
		return UFractureToolConvex::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureToolConvex);
	UFractureToolConvex::~UFractureToolConvex() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvex_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvex_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFractureConvexSettings, UFractureConvexSettings::StaticClass, TEXT("UFractureConvexSettings"), &Z_Registration_Info_UClass_UFractureConvexSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureConvexSettings), 1270508660U) },
		{ Z_Construct_UClass_UFractureConvexActions, UFractureConvexActions::StaticClass, TEXT("UFractureConvexActions"), &Z_Registration_Info_UClass_UFractureConvexActions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureConvexActions), 525900671U) },
		{ Z_Construct_UClass_UFractureToolConvex, UFractureToolConvex::StaticClass, TEXT("UFractureToolConvex"), &Z_Registration_Info_UClass_UFractureToolConvex, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureToolConvex), 285313666U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvex_h_87252439(TEXT("/Script/FractureEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvex_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolConvex_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
