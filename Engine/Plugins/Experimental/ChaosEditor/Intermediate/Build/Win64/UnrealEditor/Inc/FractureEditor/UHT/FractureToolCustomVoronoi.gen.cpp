// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/FractureToolCustomVoronoi.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFractureToolCustomVoronoi() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureCustomVoronoiSettings();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureCustomVoronoiSettings_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolCustomVoronoi();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolCustomVoronoi_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolSettings();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolVoronoiCutterBase();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureTransformGizmoSettings_NoRegister();
	FRACTUREEDITOR_API UEnum* Z_Construct_UEnum_FractureEditor_EDownsamplingMode();
	FRACTUREEDITOR_API UEnum* Z_Construct_UEnum_FractureEditor_EVoronoiPattern();
	UPackage* Z_Construct_UPackage__Script_FractureEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoronoiPattern;
	static UEnum* EVoronoiPattern_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoronoiPattern.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoronoiPattern.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FractureEditor_EVoronoiPattern, (UObject*)Z_Construct_UPackage__Script_FractureEditor(), TEXT("EVoronoiPattern"));
		}
		return Z_Registration_Info_UEnum_EVoronoiPattern.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UEnum* StaticEnum<EVoronoiPattern>()
	{
		return EVoronoiPattern_StaticEnum();
	}
	struct Z_Construct_UEnum_FractureEditor_EVoronoiPattern_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FractureEditor_EVoronoiPattern_Statics::Enumerators[] = {
		{ "EVoronoiPattern::Centered", (int64)EVoronoiPattern::Centered },
		{ "EVoronoiPattern::Uniform", (int64)EVoronoiPattern::Uniform },
		{ "EVoronoiPattern::Grid", (int64)EVoronoiPattern::Grid },
		{ "EVoronoiPattern::MeshVertices", (int64)EVoronoiPattern::MeshVertices },
		{ "EVoronoiPattern::SelectedBones", (int64)EVoronoiPattern::SelectedBones },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FractureEditor_EVoronoiPattern_Statics::Enum_MetaDataParams[] = {
		{ "Centered.Comment", "// Add a single site centered on the gizmo (or multiple if Variability is > 0)\n" },
		{ "Centered.Name", "EVoronoiPattern::Centered" },
		{ "Centered.ToolTip", "Add a single site centered on the gizmo (or multiple if Variability is > 0)" },
		{ "Grid.Comment", "// Add a regular grid of points\n" },
		{ "Grid.Name", "EVoronoiPattern::Grid" },
		{ "Grid.ToolTip", "Add a regular grid of points" },
		{ "MeshVertices.Comment", "// Add a point at every mesh vertex\n" },
		{ "MeshVertices.Name", "EVoronoiPattern::MeshVertices" },
		{ "MeshVertices.ToolTip", "Add a point at every mesh vertex" },
		{ "ModuleRelativePath", "Private/FractureToolCustomVoronoi.h" },
		{ "SelectedBones.Comment", "// Add a point per vertex of the selected bones\n" },
		{ "SelectedBones.Name", "EVoronoiPattern::SelectedBones" },
		{ "SelectedBones.ToolTip", "Add a point per vertex of the selected bones" },
		{ "Uniform.Comment", "// Add uniform-random sites\n" },
		{ "Uniform.Name", "EVoronoiPattern::Uniform" },
		{ "Uniform.ToolTip", "Add uniform-random sites" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FractureEditor_EVoronoiPattern_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FractureEditor,
		nullptr,
		"EVoronoiPattern",
		"EVoronoiPattern",
		Z_Construct_UEnum_FractureEditor_EVoronoiPattern_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEditor_EVoronoiPattern_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FractureEditor_EVoronoiPattern_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEditor_EVoronoiPattern_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FractureEditor_EVoronoiPattern()
	{
		if (!Z_Registration_Info_UEnum_EVoronoiPattern.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoronoiPattern.InnerSingleton, Z_Construct_UEnum_FractureEditor_EVoronoiPattern_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoronoiPattern.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDownsamplingMode;
	static UEnum* EDownsamplingMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDownsamplingMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDownsamplingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FractureEditor_EDownsamplingMode, (UObject*)Z_Construct_UPackage__Script_FractureEditor(), TEXT("EDownsamplingMode"));
		}
		return Z_Registration_Info_UEnum_EDownsamplingMode.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UEnum* StaticEnum<EDownsamplingMode>()
	{
		return EDownsamplingMode_StaticEnum();
	}
	struct Z_Construct_UEnum_FractureEditor_EDownsamplingMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FractureEditor_EDownsamplingMode_Statics::Enumerators[] = {
		{ "EDownsamplingMode::Random", (int64)EDownsamplingMode::Random },
		{ "EDownsamplingMode::UniformSpacing", (int64)EDownsamplingMode::UniformSpacing },
		{ "EDownsamplingMode::KeepSharp", (int64)EDownsamplingMode::KeepSharp },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FractureEditor_EDownsamplingMode_Statics::Enum_MetaDataParams[] = {
		{ "KeepSharp.Comment", "// Downsample points so points on sharp features are the last to be removed\n" },
		{ "KeepSharp.Name", "EDownsamplingMode::KeepSharp" },
		{ "KeepSharp.ToolTip", "Downsample points so points on sharp features are the last to be removed" },
		{ "ModuleRelativePath", "Private/FractureToolCustomVoronoi.h" },
		{ "Random.Comment", "// Downsample points by randomly removing points, without considering spacing\n" },
		{ "Random.Name", "EDownsamplingMode::Random" },
		{ "Random.ToolTip", "Downsample points by randomly removing points, without considering spacing" },
		{ "UniformSpacing.Comment", "// Downsample points so they're spread evenly across space, favoring points on sharp features\n" },
		{ "UniformSpacing.Name", "EDownsamplingMode::UniformSpacing" },
		{ "UniformSpacing.ToolTip", "Downsample points so they're spread evenly across space, favoring points on sharp features" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FractureEditor_EDownsamplingMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FractureEditor,
		nullptr,
		"EDownsamplingMode",
		"EDownsamplingMode",
		Z_Construct_UEnum_FractureEditor_EDownsamplingMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEditor_EDownsamplingMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FractureEditor_EDownsamplingMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEditor_EDownsamplingMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FractureEditor_EDownsamplingMode()
	{
		if (!Z_Registration_Info_UEnum_EDownsamplingMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDownsamplingMode.InnerSingleton, Z_Construct_UEnum_FractureEditor_EDownsamplingMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDownsamplingMode.InnerSingleton;
	}
	DEFINE_FUNCTION(UFractureCustomVoronoiSettings::execRegenerateLiveSites)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegenerateLiveSites();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFractureCustomVoronoiSettings::execUnfreezeSites)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnfreezeSites();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFractureCustomVoronoiSettings::execClearFrozenSites)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearFrozenSites();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFractureCustomVoronoiSettings::execFreezeLiveSites)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FreezeLiveSites();
		P_NATIVE_END;
	}
	void UFractureCustomVoronoiSettings::StaticRegisterNativesUFractureCustomVoronoiSettings()
	{
		UClass* Class = UFractureCustomVoronoiSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearFrozenSites", &UFractureCustomVoronoiSettings::execClearFrozenSites },
			{ "FreezeLiveSites", &UFractureCustomVoronoiSettings::execFreezeLiveSites },
			{ "RegenerateLiveSites", &UFractureCustomVoronoiSettings::execRegenerateLiveSites },
			{ "UnfreezeSites", &UFractureCustomVoronoiSettings::execUnfreezeSites },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFractureCustomVoronoiSettings_ClearFrozenSites_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFractureCustomVoronoiSettings_ClearFrozenSites_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "CustomVoronoi" },
		{ "Comment", "/** Remove all frozen sites */" },
		{ "ModuleRelativePath", "Private/FractureToolCustomVoronoi.h" },
		{ "ToolTip", "Remove all frozen sites" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFractureCustomVoronoiSettings_ClearFrozenSites_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFractureCustomVoronoiSettings, nullptr, "ClearFrozenSites", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFractureCustomVoronoiSettings_ClearFrozenSites_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFractureCustomVoronoiSettings_ClearFrozenSites_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFractureCustomVoronoiSettings_ClearFrozenSites()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFractureCustomVoronoiSettings_ClearFrozenSites_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFractureCustomVoronoiSettings_FreezeLiveSites_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFractureCustomVoronoiSettings_FreezeLiveSites_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "CustomVoronoi" },
		{ "Comment", "/** Freeze the current live Voronoi Sites based on the current parameters */" },
		{ "ModuleRelativePath", "Private/FractureToolCustomVoronoi.h" },
		{ "ToolTip", "Freeze the current live Voronoi Sites based on the current parameters" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFractureCustomVoronoiSettings_FreezeLiveSites_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFractureCustomVoronoiSettings, nullptr, "FreezeLiveSites", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFractureCustomVoronoiSettings_FreezeLiveSites_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFractureCustomVoronoiSettings_FreezeLiveSites_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFractureCustomVoronoiSettings_FreezeLiveSites()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFractureCustomVoronoiSettings_FreezeLiveSites_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFractureCustomVoronoiSettings_RegenerateLiveSites_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFractureCustomVoronoiSettings_RegenerateLiveSites_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "CustomVoronoi" },
		{ "Comment", "/** Re-run the live Voronoi sites generator, using the current settings and selection bounds */" },
		{ "ModuleRelativePath", "Private/FractureToolCustomVoronoi.h" },
		{ "ToolTip", "Re-run the live Voronoi sites generator, using the current settings and selection bounds" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFractureCustomVoronoiSettings_RegenerateLiveSites_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFractureCustomVoronoiSettings, nullptr, "RegenerateLiveSites", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFractureCustomVoronoiSettings_RegenerateLiveSites_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFractureCustomVoronoiSettings_RegenerateLiveSites_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFractureCustomVoronoiSettings_RegenerateLiveSites()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFractureCustomVoronoiSettings_RegenerateLiveSites_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFractureCustomVoronoiSettings_UnfreezeSites_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFractureCustomVoronoiSettings_UnfreezeSites_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "CustomVoronoi" },
		{ "Comment", "/** Unfreeze all frozen sites */" },
		{ "ModuleRelativePath", "Private/FractureToolCustomVoronoi.h" },
		{ "ToolTip", "Unfreeze all frozen sites" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFractureCustomVoronoiSettings_UnfreezeSites_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFractureCustomVoronoiSettings, nullptr, "UnfreezeSites", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFractureCustomVoronoiSettings_UnfreezeSites_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFractureCustomVoronoiSettings_UnfreezeSites_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFractureCustomVoronoiSettings_UnfreezeSites()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFractureCustomVoronoiSettings_UnfreezeSites_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureCustomVoronoiSettings);
	UClass* Z_Construct_UClass_UFractureCustomVoronoiSettings_NoRegister()
	{
		return UFractureCustomVoronoiSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_VoronoiPattern_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoronoiPattern_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_VoronoiPattern;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variability_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Variability;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SitesToAdd_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SitesToAdd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GridX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GridY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridZ_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GridZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkipFraction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SkipFraction;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SkipMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkipMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SkipMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceMesh_MetaData[];
#endif
		static const UECodeGen_Private::FLazyObjectPropertyParams NewProp_ReferenceMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStartAtActor_MetaData[];
#endif
		static void NewProp_bStartAtActor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartAtActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureToolSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFractureCustomVoronoiSettings_ClearFrozenSites, "ClearFrozenSites" }, // 809205025
		{ &Z_Construct_UFunction_UFractureCustomVoronoiSettings_FreezeLiveSites, "FreezeLiveSites" }, // 4270653097
		{ &Z_Construct_UFunction_UFractureCustomVoronoiSettings_RegenerateLiveSites, "RegenerateLiveSites" }, // 3470165834
		{ &Z_Construct_UFunction_UFractureCustomVoronoiSettings_UnfreezeSites, "UnfreezeSites" }, // 1955379484
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FractureToolCustomVoronoi.h" },
		{ "ModuleRelativePath", "Private/FractureToolCustomVoronoi.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_VoronoiPattern_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_VoronoiPattern_MetaData[] = {
		{ "Category", "LiveVoronoiSites" },
		{ "Comment", "/** Method to generate next group of voronoi sites */" },
		{ "DisplayName", "Pattern" },
		{ "ModuleRelativePath", "Private/FractureToolCustomVoronoi.h" },
		{ "ToolTip", "Method to generate next group of voronoi sites" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_VoronoiPattern = { "VoronoiPattern", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureCustomVoronoiSettings, VoronoiPattern), Z_Construct_UEnum_FractureEditor_EVoronoiPattern, METADATA_PARAMS(Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_VoronoiPattern_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_VoronoiPattern_MetaData)) }; // 2036514066
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_NormalOffset_MetaData[] = {
		{ "Category", "LiveVoronoiSites" },
		{ "Comment", "/** Offset point samples in the vertex normal directions */" },
		{ "EditCondition", "VoronoiPattern == EVoronoiPattern::MeshVertices || VoronoiPattern == EVoronoiPattern::SelectedBones" },
		{ "ModuleRelativePath", "Private/FractureToolCustomVoronoi.h" },
		{ "ToolTip", "Offset point samples in the vertex normal directions" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_NormalOffset = { "NormalOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureCustomVoronoiSettings, NormalOffset), METADATA_PARAMS(Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_NormalOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_NormalOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_Variability_MetaData[] = {
		{ "Category", "LiveVoronoiSites" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount to randomly displace each Voronoi site (in cm) */" },
		{ "DisplayName", "Variability" },
		{ "ModuleRelativePath", "Private/FractureToolCustomVoronoi.h" },
		{ "ToolTip", "Amount to randomly displace each Voronoi site (in cm)" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_Variability = { "Variability", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureCustomVoronoiSettings, Variability), METADATA_PARAMS(Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_Variability_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_Variability_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_SitesToAdd_MetaData[] = {
		{ "Category", "LiveVoronoiSites" },
		{ "ClampMax", "5000" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Number of Voronoi sites to add */" },
		{ "DisplayName", "Sites To Add" },
		{ "EditCondition", "VoronoiPattern != EVoronoiPattern::MeshVertices && VoronoiPattern != EVoronoiPattern::Grid" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/FractureToolCustomVoronoi.h" },
		{ "ToolTip", "Number of Voronoi sites to add" },
		{ "UIMax", "1000" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_SitesToAdd = { "SitesToAdd", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureCustomVoronoiSettings, SitesToAdd), METADATA_PARAMS(Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_SitesToAdd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_SitesToAdd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_GridX_MetaData[] = {
		{ "Category", "LiveVoronoiSites" },
		{ "ClampMax", "5000" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Number of sites to add to grid in X */" },
		{ "DisplayName", "Sites in X" },
		{ "EditCondition", "VoronoiPattern == EVoronoiPattern::Grid" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/FractureToolCustomVoronoi.h" },
		{ "ToolTip", "Number of sites to add to grid in X" },
		{ "UIMax", "100" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_GridX = { "GridX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureCustomVoronoiSettings, GridX), METADATA_PARAMS(Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_GridX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_GridX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_GridY_MetaData[] = {
		{ "Category", "LiveVoronoiSites" },
		{ "ClampMax", "5000" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Number of sites to add to grid in Y */" },
		{ "DisplayName", "Sites in Y" },
		{ "EditCondition", "VoronoiPattern == EVoronoiPattern::Grid" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/FractureToolCustomVoronoi.h" },
		{ "ToolTip", "Number of sites to add to grid in Y" },
		{ "UIMax", "100" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_GridY = { "GridY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureCustomVoronoiSettings, GridY), METADATA_PARAMS(Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_GridY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_GridY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_GridZ_MetaData[] = {
		{ "Category", "LiveVoronoiSites" },
		{ "ClampMax", "5000" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Number of sites to add to grid in Z */" },
		{ "DisplayName", "Sites in Z" },
		{ "EditCondition", "VoronoiPattern == EVoronoiPattern::Grid" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/FractureToolCustomVoronoi.h" },
		{ "ToolTip", "Number of sites to add to grid in Z" },
		{ "UIMax", "100" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_GridZ = { "GridZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureCustomVoronoiSettings, GridZ), METADATA_PARAMS(Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_GridZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_GridZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_SkipFraction_MetaData[] = {
		{ "Category", "LiveVoronoiSites" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Fraction of points to skip */" },
		{ "ModuleRelativePath", "Private/FractureToolCustomVoronoi.h" },
		{ "ToolTip", "Fraction of points to skip" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_SkipFraction = { "SkipFraction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureCustomVoronoiSettings, SkipFraction), METADATA_PARAMS(Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_SkipFraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_SkipFraction_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_SkipMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_SkipMode_MetaData[] = {
		{ "Category", "LiveVoronoiSites" },
		{ "Comment", "/** Strategy used for skipping points; only used if SkipFraction is greater than 0 */" },
		{ "ModuleRelativePath", "Private/FractureToolCustomVoronoi.h" },
		{ "ToolTip", "Strategy used for skipping points; only used if SkipFraction is greater than 0" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_SkipMode = { "SkipMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureCustomVoronoiSettings, SkipMode), Z_Construct_UEnum_FractureEditor_EDownsamplingMode, METADATA_PARAMS(Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_SkipMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_SkipMode_MetaData)) }; // 3944729291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_ReferenceMesh_MetaData[] = {
		{ "Category", "LiveVoronoiSites" },
		{ "Comment", "/** Static mesh actor to be used as a reference when adding Voronoi sites */" },
		{ "DisplayName", "Reference Mesh" },
		{ "EditCondition", "VoronoiPattern == EVoronoiPattern::MeshVertices" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/FractureToolCustomVoronoi.h" },
		{ "ToolTip", "Static mesh actor to be used as a reference when adding Voronoi sites" },
	};
#endif
	const UECodeGen_Private::FLazyObjectPropertyParams Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_ReferenceMesh = { "ReferenceMesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureCustomVoronoiSettings, ReferenceMesh), Z_Construct_UClass_AStaticMeshActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_ReferenceMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_ReferenceMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_bStartAtActor_MetaData[] = {
		{ "Category", "LiveVoronoiSites" },
		{ "Comment", "/** Whether to use the reference mesh actor's transform when placing the Voronoi sites, or center them at the current gizmo location instead */" },
		{ "EditCondition", "VoronoiPattern == EVoronoiPattern::MeshVertices" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/FractureToolCustomVoronoi.h" },
		{ "ToolTip", "Whether to use the reference mesh actor's transform when placing the Voronoi sites, or center them at the current gizmo location instead" },
	};
#endif
	void Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_bStartAtActor_SetBit(void* Obj)
	{
		((UFractureCustomVoronoiSettings*)Obj)->bStartAtActor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_bStartAtActor = { "bStartAtActor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFractureCustomVoronoiSettings), &Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_bStartAtActor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_bStartAtActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_bStartAtActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_VoronoiPattern_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_VoronoiPattern,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_NormalOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_Variability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_SitesToAdd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_GridX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_GridY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_GridZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_SkipFraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_SkipMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_SkipMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_ReferenceMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::NewProp_bStartAtActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureCustomVoronoiSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::ClassParams = {
		&UFractureCustomVoronoiSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureCustomVoronoiSettings()
	{
		if (!Z_Registration_Info_UClass_UFractureCustomVoronoiSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureCustomVoronoiSettings.OuterSingleton, Z_Construct_UClass_UFractureCustomVoronoiSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureCustomVoronoiSettings.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureCustomVoronoiSettings>()
	{
		return UFractureCustomVoronoiSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureCustomVoronoiSettings);
	UFractureCustomVoronoiSettings::~UFractureCustomVoronoiSettings() {}
	void UFractureToolCustomVoronoi::StaticRegisterNativesUFractureToolCustomVoronoi()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureToolCustomVoronoi);
	UClass* Z_Construct_UClass_UFractureToolCustomVoronoi_NoRegister()
	{
		return UFractureToolCustomVoronoi::StaticClass();
	}
	struct Z_Construct_UClass_UFractureToolCustomVoronoi_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomVoronoiSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CustomVoronoiSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GizmoSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GizmoSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureToolCustomVoronoi_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureToolVoronoiCutterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolCustomVoronoi_Statics::Class_MetaDataParams[] = {
		{ "Category", "FractureTools" },
		{ "DisplayName", "Custom Voronoi" },
		{ "IncludePath", "FractureToolCustomVoronoi.h" },
		{ "ModuleRelativePath", "Private/FractureToolCustomVoronoi.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolCustomVoronoi_Statics::NewProp_CustomVoronoiSettings_MetaData[] = {
		{ "Category", "Uniform" },
		{ "Comment", "// CustomVoronoi Voronoi Fracture Input Settings\n" },
		{ "ModuleRelativePath", "Private/FractureToolCustomVoronoi.h" },
		{ "ToolTip", "CustomVoronoi Voronoi Fracture Input Settings" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFractureToolCustomVoronoi_Statics::NewProp_CustomVoronoiSettings = { "CustomVoronoiSettings", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureToolCustomVoronoi, CustomVoronoiSettings), Z_Construct_UClass_UFractureCustomVoronoiSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFractureToolCustomVoronoi_Statics::NewProp_CustomVoronoiSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolCustomVoronoi_Statics::NewProp_CustomVoronoiSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolCustomVoronoi_Statics::NewProp_GizmoSettings_MetaData[] = {
		{ "Category", "Uniform" },
		{ "ModuleRelativePath", "Private/FractureToolCustomVoronoi.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFractureToolCustomVoronoi_Statics::NewProp_GizmoSettings = { "GizmoSettings", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureToolCustomVoronoi, GizmoSettings), Z_Construct_UClass_UFractureTransformGizmoSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFractureToolCustomVoronoi_Statics::NewProp_GizmoSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolCustomVoronoi_Statics::NewProp_GizmoSettings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureToolCustomVoronoi_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureToolCustomVoronoi_Statics::NewProp_CustomVoronoiSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureToolCustomVoronoi_Statics::NewProp_GizmoSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureToolCustomVoronoi_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureToolCustomVoronoi>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureToolCustomVoronoi_Statics::ClassParams = {
		&UFractureToolCustomVoronoi::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureToolCustomVoronoi_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolCustomVoronoi_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureToolCustomVoronoi_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolCustomVoronoi_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureToolCustomVoronoi()
	{
		if (!Z_Registration_Info_UClass_UFractureToolCustomVoronoi.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureToolCustomVoronoi.OuterSingleton, Z_Construct_UClass_UFractureToolCustomVoronoi_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureToolCustomVoronoi.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureToolCustomVoronoi>()
	{
		return UFractureToolCustomVoronoi::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureToolCustomVoronoi);
	UFractureToolCustomVoronoi::~UFractureToolCustomVoronoi() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolCustomVoronoi_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolCustomVoronoi_h_Statics::EnumInfo[] = {
		{ EVoronoiPattern_StaticEnum, TEXT("EVoronoiPattern"), &Z_Registration_Info_UEnum_EVoronoiPattern, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2036514066U) },
		{ EDownsamplingMode_StaticEnum, TEXT("EDownsamplingMode"), &Z_Registration_Info_UEnum_EDownsamplingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3944729291U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolCustomVoronoi_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFractureCustomVoronoiSettings, UFractureCustomVoronoiSettings::StaticClass, TEXT("UFractureCustomVoronoiSettings"), &Z_Registration_Info_UClass_UFractureCustomVoronoiSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureCustomVoronoiSettings), 2229657743U) },
		{ Z_Construct_UClass_UFractureToolCustomVoronoi, UFractureToolCustomVoronoi::StaticClass, TEXT("UFractureToolCustomVoronoi"), &Z_Registration_Info_UClass_UFractureToolCustomVoronoi, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureToolCustomVoronoi), 3354668794U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolCustomVoronoi_h_3204351798(TEXT("/Script/FractureEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolCustomVoronoi_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolCustomVoronoi_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolCustomVoronoi_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolCustomVoronoi_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
