// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorGizmos/TransformGizmoInterfaces.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransformGizmoInterfaces() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformGizmoSource();
	EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformGizmoSource_NoRegister();
	EDITORINTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_EditorInteractiveToolsFramework_EGizmoTransformMode();
	EDITORINTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_EditorInteractiveToolsFramework_EGizmoTransformScaleType();
	UPackage* Z_Construct_UPackage__Script_EditorInteractiveToolsFramework();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGizmoTransformMode;
	static UEnum* EGizmoTransformMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGizmoTransformMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGizmoTransformMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EditorInteractiveToolsFramework_EGizmoTransformMode, (UObject*)Z_Construct_UPackage__Script_EditorInteractiveToolsFramework(), TEXT("EGizmoTransformMode"));
		}
		return Z_Registration_Info_UEnum_EGizmoTransformMode.OuterSingleton;
	}
	template<> EDITORINTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EGizmoTransformMode>()
	{
		return EGizmoTransformMode_StaticEnum();
	}
	struct Z_Construct_UEnum_EditorInteractiveToolsFramework_EGizmoTransformMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EditorInteractiveToolsFramework_EGizmoTransformMode_Statics::Enumerators[] = {
		{ "EGizmoTransformMode::None", (int64)EGizmoTransformMode::None },
		{ "EGizmoTransformMode::Translate", (int64)EGizmoTransformMode::Translate },
		{ "EGizmoTransformMode::Rotate", (int64)EGizmoTransformMode::Rotate },
		{ "EGizmoTransformMode::Scale", (int64)EGizmoTransformMode::Scale },
		{ "EGizmoTransformMode::Max", (int64)EGizmoTransformMode::Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EditorInteractiveToolsFramework_EGizmoTransformMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "//\n// Interface for the Transform gizmo.\n//\n" },
		{ "Max.Name", "EGizmoTransformMode::Max" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmoInterfaces.h" },
		{ "None.Name", "EGizmoTransformMode::None" },
		{ "Rotate.Name", "EGizmoTransformMode::Rotate" },
		{ "Scale.Name", "EGizmoTransformMode::Scale" },
		{ "ToolTip", "Interface for the Transform gizmo." },
		{ "Translate.Name", "EGizmoTransformMode::Translate" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EditorInteractiveToolsFramework_EGizmoTransformMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EditorInteractiveToolsFramework,
		nullptr,
		"EGizmoTransformMode",
		"EGizmoTransformMode",
		Z_Construct_UEnum_EditorInteractiveToolsFramework_EGizmoTransformMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EditorInteractiveToolsFramework_EGizmoTransformMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EditorInteractiveToolsFramework_EGizmoTransformMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EditorInteractiveToolsFramework_EGizmoTransformMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EditorInteractiveToolsFramework_EGizmoTransformMode()
	{
		if (!Z_Registration_Info_UEnum_EGizmoTransformMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGizmoTransformMode.InnerSingleton, Z_Construct_UEnum_EditorInteractiveToolsFramework_EGizmoTransformMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGizmoTransformMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGizmoTransformScaleType;
	static UEnum* EGizmoTransformScaleType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGizmoTransformScaleType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGizmoTransformScaleType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EditorInteractiveToolsFramework_EGizmoTransformScaleType, (UObject*)Z_Construct_UPackage__Script_EditorInteractiveToolsFramework(), TEXT("EGizmoTransformScaleType"));
		}
		return Z_Registration_Info_UEnum_EGizmoTransformScaleType.OuterSingleton;
	}
	template<> EDITORINTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EGizmoTransformScaleType>()
	{
		return EGizmoTransformScaleType_StaticEnum();
	}
	struct Z_Construct_UEnum_EditorInteractiveToolsFramework_EGizmoTransformScaleType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EditorInteractiveToolsFramework_EGizmoTransformScaleType_Statics::Enumerators[] = {
		{ "EGizmoTransformScaleType::Default", (int64)EGizmoTransformScaleType::Default },
		{ "EGizmoTransformScaleType::PercentageBased", (int64)EGizmoTransformScaleType::PercentageBased },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EditorInteractiveToolsFramework_EGizmoTransformScaleType_Statics::Enum_MetaDataParams[] = {
		{ "Default.Name", "EGizmoTransformScaleType::Default" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmoInterfaces.h" },
		{ "PercentageBased.Name", "EGizmoTransformScaleType::PercentageBased" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EditorInteractiveToolsFramework_EGizmoTransformScaleType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EditorInteractiveToolsFramework,
		nullptr,
		"EGizmoTransformScaleType",
		"EGizmoTransformScaleType",
		Z_Construct_UEnum_EditorInteractiveToolsFramework_EGizmoTransformScaleType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EditorInteractiveToolsFramework_EGizmoTransformScaleType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EditorInteractiveToolsFramework_EGizmoTransformScaleType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EditorInteractiveToolsFramework_EGizmoTransformScaleType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EditorInteractiveToolsFramework_EGizmoTransformScaleType()
	{
		if (!Z_Registration_Info_UEnum_EGizmoTransformScaleType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGizmoTransformScaleType.InnerSingleton, Z_Construct_UEnum_EditorInteractiveToolsFramework_EGizmoTransformScaleType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGizmoTransformScaleType.InnerSingleton;
	}
	void UTransformGizmoSource::StaticRegisterNativesUTransformGizmoSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTransformGizmoSource);
	UClass* Z_Construct_UClass_UTransformGizmoSource_NoRegister()
	{
		return UTransformGizmoSource::StaticClass();
	}
	struct Z_Construct_UClass_UTransformGizmoSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTransformGizmoSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorInteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmoSource_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmoInterfaces.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTransformGizmoSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITransformGizmoSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTransformGizmoSource_Statics::ClassParams = {
		&UTransformGizmoSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTransformGizmoSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmoSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTransformGizmoSource()
	{
		if (!Z_Registration_Info_UClass_UTransformGizmoSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTransformGizmoSource.OuterSingleton, Z_Construct_UClass_UTransformGizmoSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTransformGizmoSource.OuterSingleton;
	}
	template<> EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UTransformGizmoSource>()
	{
		return UTransformGizmoSource::StaticClass();
	}
	UTransformGizmoSource::UTransformGizmoSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTransformGizmoSource);
	UTransformGizmoSource::~UTransformGizmoSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_TransformGizmoInterfaces_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_TransformGizmoInterfaces_h_Statics::EnumInfo[] = {
		{ EGizmoTransformMode_StaticEnum, TEXT("EGizmoTransformMode"), &Z_Registration_Info_UEnum_EGizmoTransformMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 668756507U) },
		{ EGizmoTransformScaleType_StaticEnum, TEXT("EGizmoTransformScaleType"), &Z_Registration_Info_UEnum_EGizmoTransformScaleType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1020006353U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_TransformGizmoInterfaces_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTransformGizmoSource, UTransformGizmoSource::StaticClass, TEXT("UTransformGizmoSource"), &Z_Registration_Info_UClass_UTransformGizmoSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTransformGizmoSource), 1284711616U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_TransformGizmoInterfaces_h_556222103(TEXT("/Script/EditorInteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_TransformGizmoInterfaces_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_TransformGizmoInterfaces_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_TransformGizmoInterfaces_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_TransformGizmoInterfaces_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
