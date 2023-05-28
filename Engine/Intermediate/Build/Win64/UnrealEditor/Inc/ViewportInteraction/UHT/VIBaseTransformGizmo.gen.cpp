// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VIBaseTransformGizmo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVIBaseTransformGizmo() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ViewportInteraction();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_ABaseTransformGizmo();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_ABaseTransformGizmo_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UGizmoHandleGroup_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportWorldInteraction_NoRegister();
	VIEWPORTINTERACTION_API UEnum* Z_Construct_UEnum_ViewportInteraction_EGizmoHandleTypes();
	VIEWPORTINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FTransformGizmoMeasurement();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGizmoHandleTypes;
	static UEnum* EGizmoHandleTypes_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGizmoHandleTypes.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGizmoHandleTypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ViewportInteraction_EGizmoHandleTypes, (UObject*)Z_Construct_UPackage__Script_ViewportInteraction(), TEXT("EGizmoHandleTypes"));
		}
		return Z_Registration_Info_UEnum_EGizmoHandleTypes.OuterSingleton;
	}
	template<> VIEWPORTINTERACTION_API UEnum* StaticEnum<EGizmoHandleTypes>()
	{
		return EGizmoHandleTypes_StaticEnum();
	}
	struct Z_Construct_UEnum_ViewportInteraction_EGizmoHandleTypes_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ViewportInteraction_EGizmoHandleTypes_Statics::Enumerators[] = {
		{ "EGizmoHandleTypes::All", (int64)EGizmoHandleTypes::All },
		{ "EGizmoHandleTypes::Translate", (int64)EGizmoHandleTypes::Translate },
		{ "EGizmoHandleTypes::Rotate", (int64)EGizmoHandleTypes::Rotate },
		{ "EGizmoHandleTypes::Scale", (int64)EGizmoHandleTypes::Scale },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ViewportInteraction_EGizmoHandleTypes_Statics::Enum_MetaDataParams[] = {
		{ "All.Name", "EGizmoHandleTypes::All" },
		{ "ModuleRelativePath", "Public/VIBaseTransformGizmo.h" },
		{ "Rotate.Name", "EGizmoHandleTypes::Rotate" },
		{ "Scale.Name", "EGizmoHandleTypes::Scale" },
		{ "Translate.Name", "EGizmoHandleTypes::Translate" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ViewportInteraction_EGizmoHandleTypes_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ViewportInteraction,
		nullptr,
		"EGizmoHandleTypes",
		"EGizmoHandleTypes",
		Z_Construct_UEnum_ViewportInteraction_EGizmoHandleTypes_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ViewportInteraction_EGizmoHandleTypes_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ViewportInteraction_EGizmoHandleTypes_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ViewportInteraction_EGizmoHandleTypes_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ViewportInteraction_EGizmoHandleTypes()
	{
		if (!Z_Registration_Info_UEnum_EGizmoHandleTypes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGizmoHandleTypes.InnerSingleton, Z_Construct_UEnum_ViewportInteraction_EGizmoHandleTypes_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGizmoHandleTypes.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TransformGizmoMeasurement;
class UScriptStruct* FTransformGizmoMeasurement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TransformGizmoMeasurement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TransformGizmoMeasurement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransformGizmoMeasurement, (UObject*)Z_Construct_UPackage__Script_ViewportInteraction(), TEXT("TransformGizmoMeasurement"));
	}
	return Z_Registration_Info_UScriptStruct_TransformGizmoMeasurement.OuterSingleton;
}
template<> VIEWPORTINTERACTION_API UScriptStruct* StaticStruct<FTransformGizmoMeasurement>()
{
	return FTransformGizmoMeasurement::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTransformGizmoMeasurement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeasurementText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeasurementText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformGizmoMeasurement_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Displays measurements along the bounds of selected objects\n*/" },
		{ "ModuleRelativePath", "Public/VIBaseTransformGizmo.h" },
		{ "ToolTip", "Displays measurements along the bounds of selected objects" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTransformGizmoMeasurement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransformGizmoMeasurement>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformGizmoMeasurement_Statics::NewProp_MeasurementText_MetaData[] = {
		{ "Comment", "/** The text that displays the actual measurement and units */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VIBaseTransformGizmo.h" },
		{ "ToolTip", "The text that displays the actual measurement and units" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FTransformGizmoMeasurement_Statics::NewProp_MeasurementText = { "MeasurementText", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransformGizmoMeasurement, MeasurementText), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformGizmoMeasurement_Statics::NewProp_MeasurementText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformGizmoMeasurement_Statics::NewProp_MeasurementText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransformGizmoMeasurement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformGizmoMeasurement_Statics::NewProp_MeasurementText,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransformGizmoMeasurement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
		nullptr,
		&NewStructOps,
		"TransformGizmoMeasurement",
		sizeof(FTransformGizmoMeasurement),
		alignof(FTransformGizmoMeasurement),
		Z_Construct_UScriptStruct_FTransformGizmoMeasurement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformGizmoMeasurement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformGizmoMeasurement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformGizmoMeasurement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTransformGizmoMeasurement()
	{
		if (!Z_Registration_Info_UScriptStruct_TransformGizmoMeasurement.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TransformGizmoMeasurement.InnerSingleton, Z_Construct_UScriptStruct_FTransformGizmoMeasurement_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TransformGizmoMeasurement.InnerSingleton;
	}
	void ABaseTransformGizmo::StaticRegisterNativesABaseTransformGizmo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseTransformGizmo);
	UClass* Z_Construct_UClass_ABaseTransformGizmo_NoRegister()
	{
		return ABaseTransformGizmo::StaticClass();
	}
	struct Z_Construct_UClass_ABaseTransformGizmo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SceneComponent;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AllHandleGroups_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllHandleGroups_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllHandleGroups;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldInteraction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WorldInteraction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseTransformGizmo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseTransformGizmo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for transform gizmo\n */" },
		{ "IncludePath", "VIBaseTransformGizmo.h" },
		{ "ModuleRelativePath", "Public/VIBaseTransformGizmo.h" },
		{ "ToolTip", "Base class for transform gizmo" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseTransformGizmo_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "Comment", "/** Scene component root of this actor */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VIBaseTransformGizmo.h" },
		{ "ToolTip", "Scene component root of this actor" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ABaseTransformGizmo_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseTransformGizmo, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseTransformGizmo_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseTransformGizmo_Statics::NewProp_SceneComponent_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ABaseTransformGizmo_Statics::NewProp_AllHandleGroups_Inner = { "AllHandleGroups", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UGizmoHandleGroup_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseTransformGizmo_Statics::NewProp_AllHandleGroups_MetaData[] = {
		{ "Comment", "/** All gizmo components */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VIBaseTransformGizmo.h" },
		{ "ToolTip", "All gizmo components" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABaseTransformGizmo_Statics::NewProp_AllHandleGroups = { "AllHandleGroups", nullptr, (EPropertyFlags)0x0024088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseTransformGizmo, AllHandleGroups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABaseTransformGizmo_Statics::NewProp_AllHandleGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseTransformGizmo_Statics::NewProp_AllHandleGroups_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseTransformGizmo_Statics::NewProp_WorldInteraction_MetaData[] = {
		{ "Comment", "/** Owning object */" },
		{ "ModuleRelativePath", "Public/VIBaseTransformGizmo.h" },
		{ "ToolTip", "Owning object" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ABaseTransformGizmo_Statics::NewProp_WorldInteraction = { "WorldInteraction", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseTransformGizmo, WorldInteraction), Z_Construct_UClass_UViewportWorldInteraction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseTransformGizmo_Statics::NewProp_WorldInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseTransformGizmo_Statics::NewProp_WorldInteraction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseTransformGizmo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseTransformGizmo_Statics::NewProp_SceneComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseTransformGizmo_Statics::NewProp_AllHandleGroups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseTransformGizmo_Statics::NewProp_AllHandleGroups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseTransformGizmo_Statics::NewProp_WorldInteraction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseTransformGizmo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseTransformGizmo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseTransformGizmo_Statics::ClassParams = {
		&ABaseTransformGizmo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABaseTransformGizmo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseTransformGizmo_Statics::PropPointers),
		0,
		0x009002A5u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseTransformGizmo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseTransformGizmo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseTransformGizmo()
	{
		if (!Z_Registration_Info_UClass_ABaseTransformGizmo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseTransformGizmo.OuterSingleton, Z_Construct_UClass_ABaseTransformGizmo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseTransformGizmo.OuterSingleton;
	}
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<ABaseTransformGizmo>()
	{
		return ABaseTransformGizmo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseTransformGizmo);
	ABaseTransformGizmo::~ABaseTransformGizmo() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_VIBaseTransformGizmo_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_VIBaseTransformGizmo_h_Statics::EnumInfo[] = {
		{ EGizmoHandleTypes_StaticEnum, TEXT("EGizmoHandleTypes"), &Z_Registration_Info_UEnum_EGizmoHandleTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3687433905U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_VIBaseTransformGizmo_h_Statics::ScriptStructInfo[] = {
		{ FTransformGizmoMeasurement::StaticStruct, Z_Construct_UScriptStruct_FTransformGizmoMeasurement_Statics::NewStructOps, TEXT("TransformGizmoMeasurement"), &Z_Registration_Info_UScriptStruct_TransformGizmoMeasurement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTransformGizmoMeasurement), 2440900741U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_VIBaseTransformGizmo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseTransformGizmo, ABaseTransformGizmo::StaticClass, TEXT("ABaseTransformGizmo"), &Z_Registration_Info_UClass_ABaseTransformGizmo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseTransformGizmo), 3626996822U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_VIBaseTransformGizmo_h_924296213(TEXT("/Script/ViewportInteraction"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_VIBaseTransformGizmo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_VIBaseTransformGizmo_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_VIBaseTransformGizmo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_VIBaseTransformGizmo_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_VIBaseTransformGizmo_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_VIBaseTransformGizmo_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
