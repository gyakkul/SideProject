// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FractureModeSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFractureModeSettings() {}
// Cross Module References
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EConvexOverlapRemoval();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EProximityContactMethod();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EProximityMethod();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureModeSettings();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureModeSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FractureEditor();
// End Cross Module References
	void UFractureModeSettings::StaticRegisterNativesUFractureModeSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureModeSettings);
	UClass* Z_Construct_UClass_UFractureModeSettings_NoRegister()
	{
		return UFractureModeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFractureModeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConvexCanExceedFraction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConvexCanExceedFraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConvexSimplificationDistanceThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConvexSimplificationDistanceThreshold;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConvexRemoveOverlaps_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConvexRemoveOverlaps_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ConvexRemoveOverlaps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConvexOverlapRemovalShrinkPercent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConvexOverlapRemovalShrinkPercent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConvexFractionAllowRemove_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ConvexFractionAllowRemove;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ProximityMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProximityMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ProximityMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProximityDistanceThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProximityDistanceThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bProximityUseAsConnectionGraph_MetaData[];
#endif
		static void NewProp_bProximityUseAsConnectionGraph_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bProximityUseAsConnectionGraph;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ProximityContactMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProximityContactMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ProximityContactMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProximityContactThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProximityContactThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureModeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureModeSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for the Fracture Editor Mode.\n */" },
		{ "IncludePath", "FractureModeSettings.h" },
		{ "ModuleRelativePath", "Public/FractureModeSettings.h" },
		{ "ToolTip", "Settings for the Fracture Editor Mode." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_ConvexCanExceedFraction_MetaData[] = {
		{ "Category", "Fracture Mode|Convex Generation Defaults" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Default fraction of geometry volume by which a cluster's convex hull volume can exceed the actual geometry volume before instead using the hulls of the children.  0 means the convex volume cannot exceed the geometry volume; 1 means the convex volume is allowed to be 100% larger (2x) the geometry volume. */" },
		{ "DisplayName", "Allow Larger Hull Fraction" },
		{ "ModuleRelativePath", "Public/FractureModeSettings.h" },
		{ "ToolTip", "Default fraction of geometry volume by which a cluster's convex hull volume can exceed the actual geometry volume before instead using the hulls of the children.  0 means the convex volume cannot exceed the geometry volume; 1 means the convex volume is allowed to be 100% larger (2x) the geometry volume." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_ConvexCanExceedFraction = { "ConvexCanExceedFraction", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureModeSettings, ConvexCanExceedFraction), METADATA_PARAMS(Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_ConvexCanExceedFraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_ConvexCanExceedFraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_ConvexSimplificationDistanceThreshold_MetaData[] = {
		{ "Category", "Fracture Mode|Convex Generation Defaults" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Default simplification threshold for convex hulls of new geometry collections */" },
		{ "DisplayName", "Simplification Distance Threshold" },
		{ "ModuleRelativePath", "Public/FractureModeSettings.h" },
		{ "ToolTip", "Default simplification threshold for convex hulls of new geometry collections" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_ConvexSimplificationDistanceThreshold = { "ConvexSimplificationDistanceThreshold", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureModeSettings, ConvexSimplificationDistanceThreshold), METADATA_PARAMS(Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_ConvexSimplificationDistanceThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_ConvexSimplificationDistanceThreshold_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_ConvexRemoveOverlaps_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_ConvexRemoveOverlaps_MetaData[] = {
		{ "Category", "Fracture Mode|Convex Generation Defaults|Overlap Removal" },
		{ "Comment", "/** Default overlap removal setting for convex hulls of new geometry collections */" },
		{ "DisplayName", "Remove Overlaps" },
		{ "ModuleRelativePath", "Public/FractureModeSettings.h" },
		{ "ToolTip", "Default overlap removal setting for convex hulls of new geometry collections" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_ConvexRemoveOverlaps = { "ConvexRemoveOverlaps", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureModeSettings, ConvexRemoveOverlaps), Z_Construct_UEnum_Chaos_EConvexOverlapRemoval, METADATA_PARAMS(Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_ConvexRemoveOverlaps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_ConvexRemoveOverlaps_MetaData)) }; // 1572742885
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_ConvexOverlapRemovalShrinkPercent_MetaData[] = {
		{ "Category", "Fracture Mode|Convex Generation Defaults|Overlap Removal" },
		{ "ClampMax", "99.9" },
		{ "Comment", "/** Default overlap removal shrink percent (in range 0-100) for convex hulls of new geometry collections. Overlap removal will be computed assuming convex shapes will be scaled down by this percentage. */" },
		{ "DisplayName", "Overlap Removal Shrink Percent" },
		{ "ModuleRelativePath", "Public/FractureModeSettings.h" },
		{ "ToolTip", "Default overlap removal shrink percent (in range 0-100) for convex hulls of new geometry collections. Overlap removal will be computed assuming convex shapes will be scaled down by this percentage." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_ConvexOverlapRemovalShrinkPercent = { "ConvexOverlapRemovalShrinkPercent", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureModeSettings, ConvexOverlapRemovalShrinkPercent), METADATA_PARAMS(Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_ConvexOverlapRemovalShrinkPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_ConvexOverlapRemovalShrinkPercent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_ConvexFractionAllowRemove_MetaData[] = {
		{ "Category", "Fracture Mode|Convex Generation Defaults|Overlap Removal" },
		{ "ClampMax", "1" },
		{ "ClampMin", ".01" },
		{ "Comment", "/** Default fraction of convex hulls for a transform that we can remove before using the hulls of the children */" },
		{ "DisplayName", "Max Removal Fraction" },
		{ "ModuleRelativePath", "Public/FractureModeSettings.h" },
		{ "ToolTip", "Default fraction of convex hulls for a transform that we can remove before using the hulls of the children" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_ConvexFractionAllowRemove = { "ConvexFractionAllowRemove", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureModeSettings, ConvexFractionAllowRemove), METADATA_PARAMS(Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_ConvexFractionAllowRemove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_ConvexFractionAllowRemove_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_ProximityMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_ProximityMethod_MetaData[] = {
		{ "Category", "Fracture Mode|Proximity Detection Defaults" },
		{ "Comment", "/** Default method used to detect proximity of geometry in a new geometry collection */" },
		{ "DisplayName", "Detection Method" },
		{ "ModuleRelativePath", "Public/FractureModeSettings.h" },
		{ "ToolTip", "Default method used to detect proximity of geometry in a new geometry collection" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_ProximityMethod = { "ProximityMethod", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureModeSettings, ProximityMethod), Z_Construct_UEnum_Chaos_EProximityMethod, METADATA_PARAMS(Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_ProximityMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_ProximityMethod_MetaData)) }; // 2310855953
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_ProximityDistanceThreshold_MetaData[] = {
		{ "Category", "Fracture Mode|Proximity Detection Defaults" },
		{ "ClampMin", "0" },
		{ "Comment", "/** When Proximity Detection Method is Convex Hull, how close two hulls need to be to be considered as 'in proximity' */" },
		{ "DisplayName", "Distance Threshold" },
		{ "EditCondition", "ProximityMethod == EProximityMethod::ConvexHull" },
		{ "ModuleRelativePath", "Public/FractureModeSettings.h" },
		{ "ToolTip", "When Proximity Detection Method is Convex Hull, how close two hulls need to be to be considered as 'in proximity'" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_ProximityDistanceThreshold = { "ProximityDistanceThreshold", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureModeSettings, ProximityDistanceThreshold), METADATA_PARAMS(Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_ProximityDistanceThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_ProximityDistanceThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_bProximityUseAsConnectionGraph_MetaData[] = {
		{ "Category", "Fracture Mode|Proximity Detection Defaults" },
		{ "Comment", "/** Whether to automatically transform the proximity graph into a connection graph to be used for simulation */" },
		{ "DisplayName", "Use As Connection Graph" },
		{ "ModuleRelativePath", "Public/FractureModeSettings.h" },
		{ "ToolTip", "Whether to automatically transform the proximity graph into a connection graph to be used for simulation" },
	};
#endif
	void Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_bProximityUseAsConnectionGraph_SetBit(void* Obj)
	{
		((UFractureModeSettings*)Obj)->bProximityUseAsConnectionGraph = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_bProximityUseAsConnectionGraph = { "bProximityUseAsConnectionGraph", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFractureModeSettings), &Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_bProximityUseAsConnectionGraph_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_bProximityUseAsConnectionGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_bProximityUseAsConnectionGraph_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_ProximityContactMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_ProximityContactMethod_MetaData[] = {
		{ "Category", "Fracture Mode|Proximity Detection Defaults" },
		{ "Comment", "// Method to use to determine the contact between two pieces, if the Contact Threshold is greater than 0\n" },
		{ "DisplayName", "Contact Method" },
		{ "ModuleRelativePath", "Public/FractureModeSettings.h" },
		{ "ToolTip", "Method to use to determine the contact between two pieces, if the Contact Threshold is greater than 0" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_ProximityContactMethod = { "ProximityContactMethod", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureModeSettings, ProximityContactMethod), Z_Construct_UEnum_Chaos_EProximityContactMethod, METADATA_PARAMS(Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_ProximityContactMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_ProximityContactMethod_MetaData)) }; // 370826576
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_ProximityContactThreshold_MetaData[] = {
		{ "Category", "Fracture Mode|Proximity Detection Defaults" },
		{ "ClampMin", "0" },
		{ "Comment", "// If greater than zero, proximity will be additionally filtered by a 'contact' threshold, in cm, to exclude grazing / corner proximity\n" },
		{ "DisplayName", "Contact Threshold" },
		{ "ModuleRelativePath", "Public/FractureModeSettings.h" },
		{ "ToolTip", "If greater than zero, proximity will be additionally filtered by a 'contact' threshold, in cm, to exclude grazing / corner proximity" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_ProximityContactThreshold = { "ProximityContactThreshold", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureModeSettings, ProximityContactThreshold), METADATA_PARAMS(Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_ProximityContactThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_ProximityContactThreshold_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureModeSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_ConvexCanExceedFraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_ConvexSimplificationDistanceThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_ConvexRemoveOverlaps_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_ConvexRemoveOverlaps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_ConvexOverlapRemovalShrinkPercent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_ConvexFractionAllowRemove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_ProximityMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_ProximityMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_ProximityDistanceThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_bProximityUseAsConnectionGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_ProximityContactMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_ProximityContactMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureModeSettings_Statics::NewProp_ProximityContactThreshold,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureModeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureModeSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureModeSettings_Statics::ClassParams = {
		&UFractureModeSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureModeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureModeSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureModeSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureModeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureModeSettings()
	{
		if (!Z_Registration_Info_UClass_UFractureModeSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureModeSettings.OuterSingleton, Z_Construct_UClass_UFractureModeSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureModeSettings.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureModeSettings>()
	{
		return UFractureModeSettings::StaticClass();
	}
	UFractureModeSettings::UFractureModeSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureModeSettings);
	UFractureModeSettings::~UFractureModeSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureModeSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureModeSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFractureModeSettings, UFractureModeSettings::StaticClass, TEXT("UFractureModeSettings"), &Z_Registration_Info_UClass_UFractureModeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureModeSettings), 3303070121U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureModeSettings_h_2222493357(TEXT("/Script/FractureEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureModeSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureModeSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
