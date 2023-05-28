// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LandscapeCircleHeightPatch.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeCircleHeightPatch() {}
// Cross Module References
	LANDSCAPEPATCH_API UClass* Z_Construct_UClass_ULandscapeCircleHeightPatch();
	LANDSCAPEPATCH_API UClass* Z_Construct_UClass_ULandscapeCircleHeightPatch_NoRegister();
	LANDSCAPEPATCH_API UClass* Z_Construct_UClass_ULandscapePatchComponent();
	UPackage* Z_Construct_UPackage__Script_LandscapePatch();
// End Cross Module References
	void ULandscapeCircleHeightPatch::StaticRegisterNativesULandscapeCircleHeightPatch()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeCircleHeightPatch);
	UClass* Z_Construct_UClass_ULandscapeCircleHeightPatch_NoRegister()
	{
		return ULandscapeCircleHeightPatch::StaticClass();
	}
	struct Z_Construct_UClass_ULandscapeCircleHeightPatch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Falloff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Falloff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExclusiveRadius_MetaData[];
#endif
		static void NewProp_bExclusiveRadius_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExclusiveRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULandscapeCircleHeightPatch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULandscapePatchComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LandscapePatch,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeCircleHeightPatch_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Landscape" },
		{ "Comment", "/**\n * The simplest height patch: a circle of flat ground with a falloff past the initial radius across which the\n * alpha decreases linearly. When added to an actor, initializes itself to the bottom of the bounding box.\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "LandscapeCircleHeightPatch.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LandscapeCircleHeightPatch.h" },
		{ "ToolTip", "The simplest height patch: a circle of flat ground with a falloff past the initial radius across which the\nalpha decreases linearly. When added to an actor, initializes itself to the bottom of the bounding box." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeCircleHeightPatch_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LandscapeCircleHeightPatch.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeCircleHeightPatch_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeCircleHeightPatch, Radius), METADATA_PARAMS(Z_Construct_UClass_ULandscapeCircleHeightPatch_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeCircleHeightPatch_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeCircleHeightPatch_Statics::NewProp_Falloff_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Distance across which the alpha will go from 1 down to 0 outside of circle. */" },
		{ "ModuleRelativePath", "Public/LandscapeCircleHeightPatch.h" },
		{ "ToolTip", "Distance across which the alpha will go from 1 down to 0 outside of circle." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeCircleHeightPatch_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeCircleHeightPatch, Falloff), METADATA_PARAMS(Z_Construct_UClass_ULandscapeCircleHeightPatch_Statics::NewProp_Falloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeCircleHeightPatch_Statics::NewProp_Falloff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeCircleHeightPatch_Statics::NewProp_bExclusiveRadius_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When true, only the vertices in the circle have alpha 1. If false, the radius is expanded slightly so that neighboring \n\x09  vertices are also included and the whole circle is able to lie flat. */" },
		{ "ModuleRelativePath", "Public/LandscapeCircleHeightPatch.h" },
		{ "ToolTip", "When true, only the vertices in the circle have alpha 1. If false, the radius is expanded slightly so that neighboring\n        vertices are also included and the whole circle is able to lie flat." },
	};
#endif
	void Z_Construct_UClass_ULandscapeCircleHeightPatch_Statics::NewProp_bExclusiveRadius_SetBit(void* Obj)
	{
		((ULandscapeCircleHeightPatch*)Obj)->bExclusiveRadius = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeCircleHeightPatch_Statics::NewProp_bExclusiveRadius = { "bExclusiveRadius", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULandscapeCircleHeightPatch), &Z_Construct_UClass_ULandscapeCircleHeightPatch_Statics::NewProp_bExclusiveRadius_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeCircleHeightPatch_Statics::NewProp_bExclusiveRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeCircleHeightPatch_Statics::NewProp_bExclusiveRadius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapeCircleHeightPatch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeCircleHeightPatch_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeCircleHeightPatch_Statics::NewProp_Falloff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeCircleHeightPatch_Statics::NewProp_bExclusiveRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULandscapeCircleHeightPatch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeCircleHeightPatch>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeCircleHeightPatch_Statics::ClassParams = {
		&ULandscapeCircleHeightPatch::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULandscapeCircleHeightPatch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeCircleHeightPatch_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULandscapeCircleHeightPatch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeCircleHeightPatch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULandscapeCircleHeightPatch()
	{
		if (!Z_Registration_Info_UClass_ULandscapeCircleHeightPatch.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeCircleHeightPatch.OuterSingleton, Z_Construct_UClass_ULandscapeCircleHeightPatch_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULandscapeCircleHeightPatch.OuterSingleton;
	}
	template<> LANDSCAPEPATCH_API UClass* StaticClass<ULandscapeCircleHeightPatch>()
	{
		return ULandscapeCircleHeightPatch::StaticClass();
	}
	ULandscapeCircleHeightPatch::ULandscapeCircleHeightPatch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeCircleHeightPatch);
	ULandscapeCircleHeightPatch::~ULandscapeCircleHeightPatch() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeCircleHeightPatch_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeCircleHeightPatch_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULandscapeCircleHeightPatch, ULandscapeCircleHeightPatch::StaticClass, TEXT("ULandscapeCircleHeightPatch"), &Z_Registration_Info_UClass_ULandscapeCircleHeightPatch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeCircleHeightPatch), 2840478807U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeCircleHeightPatch_h_944642274(TEXT("/Script/LandscapePatch"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeCircleHeightPatch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeCircleHeightPatch_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
