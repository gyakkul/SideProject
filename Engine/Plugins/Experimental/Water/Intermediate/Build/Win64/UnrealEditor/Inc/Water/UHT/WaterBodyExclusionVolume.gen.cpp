// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaterBodyExclusionVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterBodyExclusionVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APhysicsVolume();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Water();
	WATER_API UClass* Z_Construct_UClass_AWaterBody_NoRegister();
	WATER_API UClass* Z_Construct_UClass_AWaterBodyExclusionVolume();
	WATER_API UClass* Z_Construct_UClass_AWaterBodyExclusionVolume_NoRegister();
// End Cross Module References
	void AWaterBodyExclusionVolume::StaticRegisterNativesAWaterBodyExclusionVolume()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWaterBodyExclusionVolume);
	UClass* Z_Construct_UClass_AWaterBodyExclusionVolume_NoRegister()
	{
		return AWaterBodyExclusionVolume::StaticClass();
	}
	struct Z_Construct_UClass_AWaterBodyExclusionVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExcludeAllOverlappingWaterBodies_MetaData[];
#endif
		static void NewProp_bExcludeAllOverlappingWaterBodies_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExcludeAllOverlappingWaterBodies;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WaterBodiesToExclude_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterBodiesToExclude_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WaterBodiesToExclude;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreAllOverlappingWaterBodies_MetaData[];
#endif
		static void NewProp_bIgnoreAllOverlappingWaterBodies_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreAllOverlappingWaterBodies;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WaterBodiesToIgnore_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterBodiesToIgnore_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WaterBodiesToIgnore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterBodyToIgnore_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WaterBodyToIgnore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActorIcon;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWaterBodyExclusionVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APhysicsVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBodyExclusionVolume_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * WaterBodyExclusionVolume allows players not enter surface swimming when touching a water volume\n */" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "WaterBodyExclusionVolume.h" },
		{ "ModuleRelativePath", "Public/WaterBodyExclusionVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "WaterBodyExclusionVolume allows players not enter surface swimming when touching a water volume" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBodyExclusionVolume_Statics::NewProp_bExcludeAllOverlappingWaterBodies_MetaData[] = {
		{ "Category", "Water" },
		{ "Comment", "/** If checked, all water bodies overlapping with this exclusion volumes will be affected. */" },
		{ "ModuleRelativePath", "Public/WaterBodyExclusionVolume.h" },
		{ "ToolTip", "If checked, all water bodies overlapping with this exclusion volumes will be affected." },
	};
#endif
	void Z_Construct_UClass_AWaterBodyExclusionVolume_Statics::NewProp_bExcludeAllOverlappingWaterBodies_SetBit(void* Obj)
	{
		((AWaterBodyExclusionVolume*)Obj)->bExcludeAllOverlappingWaterBodies = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWaterBodyExclusionVolume_Statics::NewProp_bExcludeAllOverlappingWaterBodies = { "bExcludeAllOverlappingWaterBodies", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AWaterBodyExclusionVolume), &Z_Construct_UClass_AWaterBodyExclusionVolume_Statics::NewProp_bExcludeAllOverlappingWaterBodies_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWaterBodyExclusionVolume_Statics::NewProp_bExcludeAllOverlappingWaterBodies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBodyExclusionVolume_Statics::NewProp_bExcludeAllOverlappingWaterBodies_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBodyExclusionVolume_Statics::NewProp_WaterBodiesToExclude_Inner = { "WaterBodiesToExclude", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AWaterBody_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBodyExclusionVolume_Statics::NewProp_WaterBodiesToExclude_MetaData[] = {
		{ "Category", "Water" },
		{ "Comment", "/** List of water bodies that will be affected by this exclusion volume */" },
		{ "EditCondition", "!bExcludeAllOverlappingWaterBodies" },
		{ "ModuleRelativePath", "Public/WaterBodyExclusionVolume.h" },
		{ "ToolTip", "List of water bodies that will be affected by this exclusion volume" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWaterBodyExclusionVolume_Statics::NewProp_WaterBodiesToExclude = { "WaterBodiesToExclude", nullptr, (EPropertyFlags)0x0014000000000801, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBodyExclusionVolume, WaterBodiesToExclude), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWaterBodyExclusionVolume_Statics::NewProp_WaterBodiesToExclude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBodyExclusionVolume_Statics::NewProp_WaterBodiesToExclude_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBodyExclusionVolume_Statics::NewProp_bIgnoreAllOverlappingWaterBodies_MetaData[] = {
		{ "DeprecationMessage", "Property renamed to bExcludeAllOverlapping" },
		{ "ModuleRelativePath", "Public/WaterBodyExclusionVolume.h" },
	};
#endif
	void Z_Construct_UClass_AWaterBodyExclusionVolume_Statics::NewProp_bIgnoreAllOverlappingWaterBodies_SetBit(void* Obj)
	{
		((AWaterBodyExclusionVolume*)Obj)->bIgnoreAllOverlappingWaterBodies_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWaterBodyExclusionVolume_Statics::NewProp_bIgnoreAllOverlappingWaterBodies = { "bIgnoreAllOverlappingWaterBodies", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AWaterBodyExclusionVolume), &Z_Construct_UClass_AWaterBodyExclusionVolume_Statics::NewProp_bIgnoreAllOverlappingWaterBodies_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWaterBodyExclusionVolume_Statics::NewProp_bIgnoreAllOverlappingWaterBodies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBodyExclusionVolume_Statics::NewProp_bIgnoreAllOverlappingWaterBodies_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBodyExclusionVolume_Statics::NewProp_WaterBodiesToIgnore_Inner = { "WaterBodiesToIgnore", nullptr, (EPropertyFlags)0x0004000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AWaterBody_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBodyExclusionVolume_Statics::NewProp_WaterBodiesToIgnore_MetaData[] = {
		{ "DeprecationMessage", "Property renamed to WaterBodiesToExclude" },
		{ "ModuleRelativePath", "Public/WaterBodyExclusionVolume.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWaterBodyExclusionVolume_Statics::NewProp_WaterBodiesToIgnore = { "WaterBodiesToIgnore", nullptr, (EPropertyFlags)0x0014000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBodyExclusionVolume, WaterBodiesToIgnore_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWaterBodyExclusionVolume_Statics::NewProp_WaterBodiesToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBodyExclusionVolume_Statics::NewProp_WaterBodiesToIgnore_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBodyExclusionVolume_Statics::NewProp_WaterBodyToIgnore_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/WaterBodyExclusionVolume.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBodyExclusionVolume_Statics::NewProp_WaterBodyToIgnore = { "WaterBodyToIgnore", nullptr, (EPropertyFlags)0x0014000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBodyExclusionVolume, WaterBodyToIgnore_DEPRECATED), Z_Construct_UClass_AWaterBody_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBodyExclusionVolume_Statics::NewProp_WaterBodyToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBodyExclusionVolume_Statics::NewProp_WaterBodyToIgnore_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBodyExclusionVolume_Statics::NewProp_ActorIcon_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WaterBodyExclusionVolume.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBodyExclusionVolume_Statics::NewProp_ActorIcon = { "ActorIcon", nullptr, (EPropertyFlags)0x0014000800082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBodyExclusionVolume, ActorIcon), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBodyExclusionVolume_Statics::NewProp_ActorIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBodyExclusionVolume_Statics::NewProp_ActorIcon_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWaterBodyExclusionVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBodyExclusionVolume_Statics::NewProp_bExcludeAllOverlappingWaterBodies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBodyExclusionVolume_Statics::NewProp_WaterBodiesToExclude_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBodyExclusionVolume_Statics::NewProp_WaterBodiesToExclude,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBodyExclusionVolume_Statics::NewProp_bIgnoreAllOverlappingWaterBodies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBodyExclusionVolume_Statics::NewProp_WaterBodiesToIgnore_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBodyExclusionVolume_Statics::NewProp_WaterBodiesToIgnore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBodyExclusionVolume_Statics::NewProp_WaterBodyToIgnore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBodyExclusionVolume_Statics::NewProp_ActorIcon,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWaterBodyExclusionVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWaterBodyExclusionVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWaterBodyExclusionVolume_Statics::ClassParams = {
		&AWaterBodyExclusionVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWaterBodyExclusionVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBodyExclusionVolume_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWaterBodyExclusionVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBodyExclusionVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWaterBodyExclusionVolume()
	{
		if (!Z_Registration_Info_UClass_AWaterBodyExclusionVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWaterBodyExclusionVolume.OuterSingleton, Z_Construct_UClass_AWaterBodyExclusionVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWaterBodyExclusionVolume.OuterSingleton;
	}
	template<> WATER_API UClass* StaticClass<AWaterBodyExclusionVolume>()
	{
		return AWaterBodyExclusionVolume::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWaterBodyExclusionVolume);
	AWaterBodyExclusionVolume::~AWaterBodyExclusionVolume() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyExclusionVolume_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyExclusionVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWaterBodyExclusionVolume, AWaterBodyExclusionVolume::StaticClass, TEXT("AWaterBodyExclusionVolume"), &Z_Registration_Info_UClass_AWaterBodyExclusionVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWaterBodyExclusionVolume), 595780195U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyExclusionVolume_h_2680858241(TEXT("/Script/Water"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyExclusionVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyExclusionVolume_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
