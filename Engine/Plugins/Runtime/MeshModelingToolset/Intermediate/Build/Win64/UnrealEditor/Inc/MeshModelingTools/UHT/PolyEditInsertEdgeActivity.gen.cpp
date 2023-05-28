// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolActivities/PolyEditInsertEdgeActivity.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePolyEditInsertEdgeActivity() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UGroupEdgeInsertionProperties();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UGroupEdgeInsertionProperties_NoRegister();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditActivityContext_NoRegister();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditInsertEdgeActivity();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditInsertEdgeActivity_NoRegister();
	MESHMODELINGTOOLS_API UEnum* Z_Construct_UEnum_MeshModelingTools_EGroupEdgeInsertionMode();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UInteractiveToolActivity();
	UPackage* Z_Construct_UPackage__Script_MeshModelingTools();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGroupEdgeInsertionMode;
	static UEnum* EGroupEdgeInsertionMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGroupEdgeInsertionMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGroupEdgeInsertionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EGroupEdgeInsertionMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingTools(), TEXT("EGroupEdgeInsertionMode"));
		}
		return Z_Registration_Info_UEnum_EGroupEdgeInsertionMode.OuterSingleton;
	}
	template<> MESHMODELINGTOOLS_API UEnum* StaticEnum<EGroupEdgeInsertionMode>()
	{
		return EGroupEdgeInsertionMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingTools_EGroupEdgeInsertionMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingTools_EGroupEdgeInsertionMode_Statics::Enumerators[] = {
		{ "EGroupEdgeInsertionMode::Retriangulate", (int64)EGroupEdgeInsertionMode::Retriangulate },
		{ "EGroupEdgeInsertionMode::PlaneCut", (int64)EGroupEdgeInsertionMode::PlaneCut },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingTools_EGroupEdgeInsertionMode_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsertEdgeActivity.h" },
		{ "PlaneCut.Comment", "/** Keeps existing triangles and cuts them to create a new path. May result in fragmented triangles over time.*/" },
		{ "PlaneCut.Name", "EGroupEdgeInsertionMode::PlaneCut" },
		{ "PlaneCut.ToolTip", "Keeps existing triangles and cuts them to create a new path. May result in fragmented triangles over time." },
		{ "Retriangulate.Comment", "/** Existing groups will be deleted and new triangles will be created for the new groups.\n\x09 Keeps topology simple but breaks non-planar groups. */" },
		{ "Retriangulate.Name", "EGroupEdgeInsertionMode::Retriangulate" },
		{ "Retriangulate.ToolTip", "Existing groups will be deleted and new triangles will be created for the new groups.\n       Keeps topology simple but breaks non-planar groups." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingTools_EGroupEdgeInsertionMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingTools,
		nullptr,
		"EGroupEdgeInsertionMode",
		"EGroupEdgeInsertionMode",
		Z_Construct_UEnum_MeshModelingTools_EGroupEdgeInsertionMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_EGroupEdgeInsertionMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingTools_EGroupEdgeInsertionMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_EGroupEdgeInsertionMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingTools_EGroupEdgeInsertionMode()
	{
		if (!Z_Registration_Info_UEnum_EGroupEdgeInsertionMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGroupEdgeInsertionMode.InnerSingleton, Z_Construct_UEnum_MeshModelingTools_EGroupEdgeInsertionMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGroupEdgeInsertionMode.InnerSingleton;
	}
	void UGroupEdgeInsertionProperties::StaticRegisterNativesUGroupEdgeInsertionProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGroupEdgeInsertionProperties);
	UClass* Z_Construct_UClass_UGroupEdgeInsertionProperties_NoRegister()
	{
		return UGroupEdgeInsertionProperties::StaticClass();
	}
	struct Z_Construct_UClass_UGroupEdgeInsertionProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_InsertionMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InsertionMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InsertionMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bContinuousInsertion_MetaData[];
#endif
		static void NewProp_bContinuousInsertion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bContinuousInsertion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_VertexTolerance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGroupEdgeInsertionProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroupEdgeInsertionProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ToolActivities/PolyEditInsertEdgeActivity.h" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsertEdgeActivity.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UGroupEdgeInsertionProperties_Statics::NewProp_InsertionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroupEdgeInsertionProperties_Statics::NewProp_InsertionMode_MetaData[] = {
		{ "Category", "InsertEdge" },
		{ "Comment", "/** Determines how group edges are added to the geometry */" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsertEdgeActivity.h" },
		{ "ToolTip", "Determines how group edges are added to the geometry" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGroupEdgeInsertionProperties_Statics::NewProp_InsertionMode = { "InsertionMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroupEdgeInsertionProperties, InsertionMode), Z_Construct_UEnum_MeshModelingTools_EGroupEdgeInsertionMode, METADATA_PARAMS(Z_Construct_UClass_UGroupEdgeInsertionProperties_Statics::NewProp_InsertionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroupEdgeInsertionProperties_Statics::NewProp_InsertionMode_MetaData)) }; // 4151836914
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroupEdgeInsertionProperties_Statics::NewProp_bContinuousInsertion_MetaData[] = {
		{ "Category", "InsertEdge" },
		{ "Comment", "/** If true, edge insertions are chained together so that each end point becomes the new start point */" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsertEdgeActivity.h" },
		{ "ToolTip", "If true, edge insertions are chained together so that each end point becomes the new start point" },
	};
#endif
	void Z_Construct_UClass_UGroupEdgeInsertionProperties_Statics::NewProp_bContinuousInsertion_SetBit(void* Obj)
	{
		((UGroupEdgeInsertionProperties*)Obj)->bContinuousInsertion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGroupEdgeInsertionProperties_Statics::NewProp_bContinuousInsertion = { "bContinuousInsertion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGroupEdgeInsertionProperties), &Z_Construct_UClass_UGroupEdgeInsertionProperties_Statics::NewProp_bContinuousInsertion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGroupEdgeInsertionProperties_Statics::NewProp_bContinuousInsertion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroupEdgeInsertionProperties_Statics::NewProp_bContinuousInsertion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroupEdgeInsertionProperties_Statics::NewProp_VertexTolerance_MetaData[] = {
		{ "Category", "InsertEdge" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How close a new loop edge needs to pass next to an existing vertex to use that vertex rather than creating a new one (used for plane cut). */" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsertEdgeActivity.h" },
		{ "ToolTip", "How close a new loop edge needs to pass next to an existing vertex to use that vertex rather than creating a new one (used for plane cut)." },
		{ "UIMax", "0.01" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UGroupEdgeInsertionProperties_Statics::NewProp_VertexTolerance = { "VertexTolerance", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroupEdgeInsertionProperties, VertexTolerance), METADATA_PARAMS(Z_Construct_UClass_UGroupEdgeInsertionProperties_Statics::NewProp_VertexTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroupEdgeInsertionProperties_Statics::NewProp_VertexTolerance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGroupEdgeInsertionProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroupEdgeInsertionProperties_Statics::NewProp_InsertionMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroupEdgeInsertionProperties_Statics::NewProp_InsertionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroupEdgeInsertionProperties_Statics::NewProp_bContinuousInsertion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroupEdgeInsertionProperties_Statics::NewProp_VertexTolerance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGroupEdgeInsertionProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGroupEdgeInsertionProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGroupEdgeInsertionProperties_Statics::ClassParams = {
		&UGroupEdgeInsertionProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGroupEdgeInsertionProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGroupEdgeInsertionProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGroupEdgeInsertionProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGroupEdgeInsertionProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGroupEdgeInsertionProperties()
	{
		if (!Z_Registration_Info_UClass_UGroupEdgeInsertionProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGroupEdgeInsertionProperties.OuterSingleton, Z_Construct_UClass_UGroupEdgeInsertionProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGroupEdgeInsertionProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLS_API UClass* StaticClass<UGroupEdgeInsertionProperties>()
	{
		return UGroupEdgeInsertionProperties::StaticClass();
	}
	UGroupEdgeInsertionProperties::UGroupEdgeInsertionProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGroupEdgeInsertionProperties);
	UGroupEdgeInsertionProperties::~UGroupEdgeInsertionProperties() {}
	void UPolyEditInsertEdgeActivity::StaticRegisterNativesUPolyEditInsertEdgeActivity()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPolyEditInsertEdgeActivity);
	UClass* Z_Construct_UClass_UPolyEditInsertEdgeActivity_NoRegister()
	{
		return UPolyEditInsertEdgeActivity::StaticClass();
	}
	struct Z_Construct_UClass_UPolyEditInsertEdgeActivity_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivityContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActivityContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPolyEditInsertEdgeActivity_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolActivity,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolyEditInsertEdgeActivity_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Interactive activity for inserting a group edge into a mesh. */" },
		{ "IncludePath", "ToolActivities/PolyEditInsertEdgeActivity.h" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsertEdgeActivity.h" },
		{ "ToolTip", "Interactive activity for inserting a group edge into a mesh." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolyEditInsertEdgeActivity_Statics::NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsertEdgeActivity.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPolyEditInsertEdgeActivity_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPolyEditInsertEdgeActivity, Settings), Z_Construct_UClass_UGroupEdgeInsertionProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPolyEditInsertEdgeActivity_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditInsertEdgeActivity_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolyEditInsertEdgeActivity_Statics::NewProp_ActivityContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsertEdgeActivity.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPolyEditInsertEdgeActivity_Statics::NewProp_ActivityContext = { "ActivityContext", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPolyEditInsertEdgeActivity, ActivityContext), Z_Construct_UClass_UPolyEditActivityContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPolyEditInsertEdgeActivity_Statics::NewProp_ActivityContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditInsertEdgeActivity_Statics::NewProp_ActivityContext_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPolyEditInsertEdgeActivity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditInsertEdgeActivity_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditInsertEdgeActivity_Statics::NewProp_ActivityContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPolyEditInsertEdgeActivity_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPolyEditInsertEdgeActivity>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPolyEditInsertEdgeActivity_Statics::ClassParams = {
		&UPolyEditInsertEdgeActivity::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPolyEditInsertEdgeActivity_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditInsertEdgeActivity_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPolyEditInsertEdgeActivity_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditInsertEdgeActivity_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPolyEditInsertEdgeActivity()
	{
		if (!Z_Registration_Info_UClass_UPolyEditInsertEdgeActivity.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPolyEditInsertEdgeActivity.OuterSingleton, Z_Construct_UClass_UPolyEditInsertEdgeActivity_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPolyEditInsertEdgeActivity.OuterSingleton;
	}
	template<> MESHMODELINGTOOLS_API UClass* StaticClass<UPolyEditInsertEdgeActivity>()
	{
		return UPolyEditInsertEdgeActivity::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPolyEditInsertEdgeActivity);
	UPolyEditInsertEdgeActivity::~UPolyEditInsertEdgeActivity() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditInsertEdgeActivity_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditInsertEdgeActivity_h_Statics::EnumInfo[] = {
		{ EGroupEdgeInsertionMode_StaticEnum, TEXT("EGroupEdgeInsertionMode"), &Z_Registration_Info_UEnum_EGroupEdgeInsertionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4151836914U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditInsertEdgeActivity_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGroupEdgeInsertionProperties, UGroupEdgeInsertionProperties::StaticClass, TEXT("UGroupEdgeInsertionProperties"), &Z_Registration_Info_UClass_UGroupEdgeInsertionProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGroupEdgeInsertionProperties), 51383092U) },
		{ Z_Construct_UClass_UPolyEditInsertEdgeActivity, UPolyEditInsertEdgeActivity::StaticClass, TEXT("UPolyEditInsertEdgeActivity"), &Z_Registration_Info_UClass_UPolyEditInsertEdgeActivity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPolyEditInsertEdgeActivity), 4208161976U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditInsertEdgeActivity_h_2395594101(TEXT("/Script/MeshModelingTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditInsertEdgeActivity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditInsertEdgeActivity_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditInsertEdgeActivity_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditInsertEdgeActivity_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
