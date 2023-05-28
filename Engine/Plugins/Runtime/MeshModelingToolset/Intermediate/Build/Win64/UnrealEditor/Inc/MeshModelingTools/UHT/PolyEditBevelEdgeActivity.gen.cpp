// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ToolActivities/PolyEditBevelEdgeActivity.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePolyEditBevelEdgeActivity() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditActivityContext_NoRegister();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditBevelEdgeActivity();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditBevelEdgeActivity_NoRegister();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditBevelEdgeProperties();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditBevelEdgeProperties_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UInteractiveToolActivity();
	UPackage* Z_Construct_UPackage__Script_MeshModelingTools();
// End Cross Module References
	void UPolyEditBevelEdgeProperties::StaticRegisterNativesUPolyEditBevelEdgeProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPolyEditBevelEdgeProperties);
	UClass* Z_Construct_UClass_UPolyEditBevelEdgeProperties_NoRegister()
	{
		return UPolyEditBevelEdgeProperties::StaticClass();
	}
	struct Z_Construct_UClass_UPolyEditBevelEdgeProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BevelDistance_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_BevelDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPolyEditBevelEdgeProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolyEditBevelEdgeProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ToolActivities/PolyEditBevelEdgeActivity.h" },
		{ "ModuleRelativePath", "Private/ToolActivities/PolyEditBevelEdgeActivity.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolyEditBevelEdgeProperties_Statics::NewProp_BevelDistance_MetaData[] = {
		{ "Category", "Bevel" },
		{ "ModuleRelativePath", "Private/ToolActivities/PolyEditBevelEdgeActivity.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPolyEditBevelEdgeProperties_Statics::NewProp_BevelDistance = { "BevelDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPolyEditBevelEdgeProperties, BevelDistance), METADATA_PARAMS(Z_Construct_UClass_UPolyEditBevelEdgeProperties_Statics::NewProp_BevelDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditBevelEdgeProperties_Statics::NewProp_BevelDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPolyEditBevelEdgeProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditBevelEdgeProperties_Statics::NewProp_BevelDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPolyEditBevelEdgeProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPolyEditBevelEdgeProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPolyEditBevelEdgeProperties_Statics::ClassParams = {
		&UPolyEditBevelEdgeProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPolyEditBevelEdgeProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditBevelEdgeProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPolyEditBevelEdgeProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditBevelEdgeProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPolyEditBevelEdgeProperties()
	{
		if (!Z_Registration_Info_UClass_UPolyEditBevelEdgeProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPolyEditBevelEdgeProperties.OuterSingleton, Z_Construct_UClass_UPolyEditBevelEdgeProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPolyEditBevelEdgeProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLS_API UClass* StaticClass<UPolyEditBevelEdgeProperties>()
	{
		return UPolyEditBevelEdgeProperties::StaticClass();
	}
	UPolyEditBevelEdgeProperties::UPolyEditBevelEdgeProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPolyEditBevelEdgeProperties);
	UPolyEditBevelEdgeProperties::~UPolyEditBevelEdgeProperties() {}
	void UPolyEditBevelEdgeActivity::StaticRegisterNativesUPolyEditBevelEdgeActivity()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPolyEditBevelEdgeActivity);
	UClass* Z_Construct_UClass_UPolyEditBevelEdgeActivity_NoRegister()
	{
		return UPolyEditBevelEdgeActivity::StaticClass();
	}
	struct Z_Construct_UClass_UPolyEditBevelEdgeActivity_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BevelProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BevelProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivityContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActivityContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPolyEditBevelEdgeActivity_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolActivity,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolyEditBevelEdgeActivity_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ToolActivities/PolyEditBevelEdgeActivity.h" },
		{ "ModuleRelativePath", "Private/ToolActivities/PolyEditBevelEdgeActivity.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolyEditBevelEdgeActivity_Statics::NewProp_BevelProperties_MetaData[] = {
		{ "ModuleRelativePath", "Private/ToolActivities/PolyEditBevelEdgeActivity.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPolyEditBevelEdgeActivity_Statics::NewProp_BevelProperties = { "BevelProperties", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPolyEditBevelEdgeActivity, BevelProperties), Z_Construct_UClass_UPolyEditBevelEdgeProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPolyEditBevelEdgeActivity_Statics::NewProp_BevelProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditBevelEdgeActivity_Statics::NewProp_BevelProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolyEditBevelEdgeActivity_Statics::NewProp_ActivityContext_MetaData[] = {
		{ "ModuleRelativePath", "Private/ToolActivities/PolyEditBevelEdgeActivity.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPolyEditBevelEdgeActivity_Statics::NewProp_ActivityContext = { "ActivityContext", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPolyEditBevelEdgeActivity, ActivityContext), Z_Construct_UClass_UPolyEditActivityContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPolyEditBevelEdgeActivity_Statics::NewProp_ActivityContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditBevelEdgeActivity_Statics::NewProp_ActivityContext_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPolyEditBevelEdgeActivity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditBevelEdgeActivity_Statics::NewProp_BevelProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditBevelEdgeActivity_Statics::NewProp_ActivityContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPolyEditBevelEdgeActivity_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPolyEditBevelEdgeActivity>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPolyEditBevelEdgeActivity_Statics::ClassParams = {
		&UPolyEditBevelEdgeActivity::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPolyEditBevelEdgeActivity_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditBevelEdgeActivity_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPolyEditBevelEdgeActivity_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditBevelEdgeActivity_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPolyEditBevelEdgeActivity()
	{
		if (!Z_Registration_Info_UClass_UPolyEditBevelEdgeActivity.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPolyEditBevelEdgeActivity.OuterSingleton, Z_Construct_UClass_UPolyEditBevelEdgeActivity_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPolyEditBevelEdgeActivity.OuterSingleton;
	}
	template<> MESHMODELINGTOOLS_API UClass* StaticClass<UPolyEditBevelEdgeActivity>()
	{
		return UPolyEditBevelEdgeActivity::StaticClass();
	}
	UPolyEditBevelEdgeActivity::UPolyEditBevelEdgeActivity() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPolyEditBevelEdgeActivity);
	UPolyEditBevelEdgeActivity::~UPolyEditBevelEdgeActivity() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Private_ToolActivities_PolyEditBevelEdgeActivity_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Private_ToolActivities_PolyEditBevelEdgeActivity_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPolyEditBevelEdgeProperties, UPolyEditBevelEdgeProperties::StaticClass, TEXT("UPolyEditBevelEdgeProperties"), &Z_Registration_Info_UClass_UPolyEditBevelEdgeProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPolyEditBevelEdgeProperties), 1670715148U) },
		{ Z_Construct_UClass_UPolyEditBevelEdgeActivity, UPolyEditBevelEdgeActivity::StaticClass, TEXT("UPolyEditBevelEdgeActivity"), &Z_Registration_Info_UClass_UPolyEditBevelEdgeActivity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPolyEditBevelEdgeActivity), 3701068322U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Private_ToolActivities_PolyEditBevelEdgeActivity_h_1232340369(TEXT("/Script/MeshModelingTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Private_ToolActivities_PolyEditBevelEdgeActivity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Private_ToolActivities_PolyEditBevelEdgeActivity_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
