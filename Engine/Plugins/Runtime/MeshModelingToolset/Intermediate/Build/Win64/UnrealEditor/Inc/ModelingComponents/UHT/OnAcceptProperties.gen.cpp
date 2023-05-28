// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PropertySets/OnAcceptProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnAcceptProperties() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UOnAcceptHandleSourcesProperties();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UOnAcceptHandleSourcesProperties_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UOnAcceptHandleSourcesPropertiesBase();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UOnAcceptHandleSourcesPropertiesBase_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UOnAcceptHandleSourcesPropertiesSingle();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UOnAcceptHandleSourcesPropertiesSingle_NoRegister();
	MODELINGCOMPONENTS_API UEnum* Z_Construct_UEnum_ModelingComponents_EHandleSourcesMethod();
	UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHandleSourcesMethod;
	static UEnum* EHandleSourcesMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHandleSourcesMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHandleSourcesMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingComponents_EHandleSourcesMethod, (UObject*)Z_Construct_UPackage__Script_ModelingComponents(), TEXT("EHandleSourcesMethod"));
		}
		return Z_Registration_Info_UEnum_EHandleSourcesMethod.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UEnum* StaticEnum<EHandleSourcesMethod>()
	{
		return EHandleSourcesMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_ModelingComponents_EHandleSourcesMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModelingComponents_EHandleSourcesMethod_Statics::Enumerators[] = {
		{ "EHandleSourcesMethod::DeleteSources", (int64)EHandleSourcesMethod::DeleteSources },
		{ "EHandleSourcesMethod::HideSources", (int64)EHandleSourcesMethod::HideSources },
		{ "EHandleSourcesMethod::KeepSources", (int64)EHandleSourcesMethod::KeepSources },
		{ "EHandleSourcesMethod::KeepFirstSource", (int64)EHandleSourcesMethod::KeepFirstSource },
		{ "EHandleSourcesMethod::KeepLastSource", (int64)EHandleSourcesMethod::KeepLastSource },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModelingComponents_EHandleSourcesMethod_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Options to handle source meshes */" },
		{ "DeleteSources.Comment", "/** Delete all input objects */" },
		{ "DeleteSources.DisplayName", "Delete Inputs" },
		{ "DeleteSources.Name", "EHandleSourcesMethod::DeleteSources" },
		{ "DeleteSources.ToolTip", "Delete all input objects" },
		{ "HideSources.Comment", "/** Hide all input objects */" },
		{ "HideSources.DisplayName", "Hide Inputs" },
		{ "HideSources.Name", "EHandleSourcesMethod::HideSources" },
		{ "HideSources.ToolTip", "Hide all input objects" },
		{ "KeepFirstSource.Comment", "/** Keep only the first input object and delete all other input objects */" },
		{ "KeepFirstSource.DisplayName", "Keep First Input" },
		{ "KeepFirstSource.Name", "EHandleSourcesMethod::KeepFirstSource" },
		{ "KeepFirstSource.ToolTip", "Keep only the first input object and delete all other input objects" },
		{ "KeepLastSource.Comment", "/** Keep only the last input object and delete all other input objects */" },
		{ "KeepLastSource.DisplayName", "Keep Last Input" },
		{ "KeepLastSource.Name", "EHandleSourcesMethod::KeepLastSource" },
		{ "KeepLastSource.ToolTip", "Keep only the last input object and delete all other input objects" },
		{ "KeepSources.Comment", "/** Keep all input objects */" },
		{ "KeepSources.DisplayName", "Keep Inputs" },
		{ "KeepSources.Name", "EHandleSourcesMethod::KeepSources" },
		{ "KeepSources.ToolTip", "Keep all input objects" },
		{ "ModuleRelativePath", "Public/PropertySets/OnAcceptProperties.h" },
		{ "ToolTip", "Options to handle source meshes" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingComponents_EHandleSourcesMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModelingComponents,
		nullptr,
		"EHandleSourcesMethod",
		"EHandleSourcesMethod",
		Z_Construct_UEnum_ModelingComponents_EHandleSourcesMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingComponents_EHandleSourcesMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ModelingComponents_EHandleSourcesMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingComponents_EHandleSourcesMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ModelingComponents_EHandleSourcesMethod()
	{
		if (!Z_Registration_Info_UEnum_EHandleSourcesMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHandleSourcesMethod.InnerSingleton, Z_Construct_UEnum_ModelingComponents_EHandleSourcesMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHandleSourcesMethod.InnerSingleton;
	}
	void UOnAcceptHandleSourcesPropertiesBase::StaticRegisterNativesUOnAcceptHandleSourcesPropertiesBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnAcceptHandleSourcesPropertiesBase);
	UClass* Z_Construct_UClass_UOnAcceptHandleSourcesPropertiesBase_NoRegister()
	{
		return UOnAcceptHandleSourcesPropertiesBase::StaticClass();
	}
	struct Z_Construct_UClass_UOnAcceptHandleSourcesPropertiesBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnAcceptHandleSourcesPropertiesBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnAcceptHandleSourcesPropertiesBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Base class for property settings for tools that create a new actor and need to decide what to do with the input objects.\n" },
		{ "IncludePath", "PropertySets/OnAcceptProperties.h" },
		{ "ModuleRelativePath", "Public/PropertySets/OnAcceptProperties.h" },
		{ "ToolTip", "Base class for property settings for tools that create a new actor and need to decide what to do with the input objects." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnAcceptHandleSourcesPropertiesBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnAcceptHandleSourcesPropertiesBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnAcceptHandleSourcesPropertiesBase_Statics::ClassParams = {
		&UOnAcceptHandleSourcesPropertiesBase::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UOnAcceptHandleSourcesPropertiesBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnAcceptHandleSourcesPropertiesBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnAcceptHandleSourcesPropertiesBase()
	{
		if (!Z_Registration_Info_UClass_UOnAcceptHandleSourcesPropertiesBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnAcceptHandleSourcesPropertiesBase.OuterSingleton, Z_Construct_UClass_UOnAcceptHandleSourcesPropertiesBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnAcceptHandleSourcesPropertiesBase.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<UOnAcceptHandleSourcesPropertiesBase>()
	{
		return UOnAcceptHandleSourcesPropertiesBase::StaticClass();
	}
	UOnAcceptHandleSourcesPropertiesBase::UOnAcceptHandleSourcesPropertiesBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnAcceptHandleSourcesPropertiesBase);
	UOnAcceptHandleSourcesPropertiesBase::~UOnAcceptHandleSourcesPropertiesBase() {}
	void UOnAcceptHandleSourcesProperties::StaticRegisterNativesUOnAcceptHandleSourcesProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnAcceptHandleSourcesProperties);
	UClass* Z_Construct_UClass_UOnAcceptHandleSourcesProperties_NoRegister()
	{
		return UOnAcceptHandleSourcesProperties::StaticClass();
	}
	struct Z_Construct_UClass_UOnAcceptHandleSourcesProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_HandleInputs_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandleInputs_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HandleInputs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnAcceptHandleSourcesProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnAcceptHandleSourcesPropertiesBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnAcceptHandleSourcesProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Specialization for property settings for tools that create a new actor and need to decide what to do with multiple input objects.\n" },
		{ "IncludePath", "PropertySets/OnAcceptProperties.h" },
		{ "ModuleRelativePath", "Public/PropertySets/OnAcceptProperties.h" },
		{ "ToolTip", "Specialization for property settings for tools that create a new actor and need to decide what to do with multiple input objects." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOnAcceptHandleSourcesProperties_Statics::NewProp_HandleInputs_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnAcceptHandleSourcesProperties_Statics::NewProp_HandleInputs_MetaData[] = {
		{ "Category", "OnToolAccept" },
		{ "Comment", "/** Defines what to do with the input objects when accepting the tool results. */" },
		{ "ModuleRelativePath", "Public/PropertySets/OnAcceptProperties.h" },
		{ "ToolTip", "Defines what to do with the input objects when accepting the tool results." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOnAcceptHandleSourcesProperties_Statics::NewProp_HandleInputs = { "HandleInputs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnAcceptHandleSourcesProperties, HandleInputs), Z_Construct_UEnum_ModelingComponents_EHandleSourcesMethod, METADATA_PARAMS(Z_Construct_UClass_UOnAcceptHandleSourcesProperties_Statics::NewProp_HandleInputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnAcceptHandleSourcesProperties_Statics::NewProp_HandleInputs_MetaData)) }; // 3543888481
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnAcceptHandleSourcesProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnAcceptHandleSourcesProperties_Statics::NewProp_HandleInputs_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnAcceptHandleSourcesProperties_Statics::NewProp_HandleInputs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnAcceptHandleSourcesProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnAcceptHandleSourcesProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnAcceptHandleSourcesProperties_Statics::ClassParams = {
		&UOnAcceptHandleSourcesProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOnAcceptHandleSourcesProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnAcceptHandleSourcesProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UOnAcceptHandleSourcesProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnAcceptHandleSourcesProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnAcceptHandleSourcesProperties()
	{
		if (!Z_Registration_Info_UClass_UOnAcceptHandleSourcesProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnAcceptHandleSourcesProperties.OuterSingleton, Z_Construct_UClass_UOnAcceptHandleSourcesProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnAcceptHandleSourcesProperties.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<UOnAcceptHandleSourcesProperties>()
	{
		return UOnAcceptHandleSourcesProperties::StaticClass();
	}
	UOnAcceptHandleSourcesProperties::UOnAcceptHandleSourcesProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnAcceptHandleSourcesProperties);
	UOnAcceptHandleSourcesProperties::~UOnAcceptHandleSourcesProperties() {}
	void UOnAcceptHandleSourcesPropertiesSingle::StaticRegisterNativesUOnAcceptHandleSourcesPropertiesSingle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnAcceptHandleSourcesPropertiesSingle);
	UClass* Z_Construct_UClass_UOnAcceptHandleSourcesPropertiesSingle_NoRegister()
	{
		return UOnAcceptHandleSourcesPropertiesSingle::StaticClass();
	}
	struct Z_Construct_UClass_UOnAcceptHandleSourcesPropertiesSingle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_HandleInputs_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandleInputs_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HandleInputs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnAcceptHandleSourcesPropertiesSingle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnAcceptHandleSourcesPropertiesBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnAcceptHandleSourcesPropertiesSingle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Specialization for property settings for tools that create a new actor and need to decide what to do with a single input object.\n" },
		{ "IncludePath", "PropertySets/OnAcceptProperties.h" },
		{ "ModuleRelativePath", "Public/PropertySets/OnAcceptProperties.h" },
		{ "ToolTip", "Specialization for property settings for tools that create a new actor and need to decide what to do with a single input object." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOnAcceptHandleSourcesPropertiesSingle_Statics::NewProp_HandleInputs_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnAcceptHandleSourcesPropertiesSingle_Statics::NewProp_HandleInputs_MetaData[] = {
		{ "Category", "OnToolAccept" },
		{ "Comment", "/** Defines what to do with the input object when accepting the tool results. */" },
		{ "ModuleRelativePath", "Public/PropertySets/OnAcceptProperties.h" },
		{ "ToolTip", "Defines what to do with the input object when accepting the tool results." },
		{ "ValidEnumValues", "DeleteSources, HideSources, KeepSources" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOnAcceptHandleSourcesPropertiesSingle_Statics::NewProp_HandleInputs = { "HandleInputs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnAcceptHandleSourcesPropertiesSingle, HandleInputs), Z_Construct_UEnum_ModelingComponents_EHandleSourcesMethod, METADATA_PARAMS(Z_Construct_UClass_UOnAcceptHandleSourcesPropertiesSingle_Statics::NewProp_HandleInputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnAcceptHandleSourcesPropertiesSingle_Statics::NewProp_HandleInputs_MetaData)) }; // 3543888481
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnAcceptHandleSourcesPropertiesSingle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnAcceptHandleSourcesPropertiesSingle_Statics::NewProp_HandleInputs_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnAcceptHandleSourcesPropertiesSingle_Statics::NewProp_HandleInputs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnAcceptHandleSourcesPropertiesSingle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnAcceptHandleSourcesPropertiesSingle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnAcceptHandleSourcesPropertiesSingle_Statics::ClassParams = {
		&UOnAcceptHandleSourcesPropertiesSingle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOnAcceptHandleSourcesPropertiesSingle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnAcceptHandleSourcesPropertiesSingle_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UOnAcceptHandleSourcesPropertiesSingle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnAcceptHandleSourcesPropertiesSingle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnAcceptHandleSourcesPropertiesSingle()
	{
		if (!Z_Registration_Info_UClass_UOnAcceptHandleSourcesPropertiesSingle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnAcceptHandleSourcesPropertiesSingle.OuterSingleton, Z_Construct_UClass_UOnAcceptHandleSourcesPropertiesSingle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnAcceptHandleSourcesPropertiesSingle.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<UOnAcceptHandleSourcesPropertiesSingle>()
	{
		return UOnAcceptHandleSourcesPropertiesSingle::StaticClass();
	}
	UOnAcceptHandleSourcesPropertiesSingle::UOnAcceptHandleSourcesPropertiesSingle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnAcceptHandleSourcesPropertiesSingle);
	UOnAcceptHandleSourcesPropertiesSingle::~UOnAcceptHandleSourcesPropertiesSingle() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_OnAcceptProperties_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_OnAcceptProperties_h_Statics::EnumInfo[] = {
		{ EHandleSourcesMethod_StaticEnum, TEXT("EHandleSourcesMethod"), &Z_Registration_Info_UEnum_EHandleSourcesMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3543888481U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_OnAcceptProperties_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOnAcceptHandleSourcesPropertiesBase, UOnAcceptHandleSourcesPropertiesBase::StaticClass, TEXT("UOnAcceptHandleSourcesPropertiesBase"), &Z_Registration_Info_UClass_UOnAcceptHandleSourcesPropertiesBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnAcceptHandleSourcesPropertiesBase), 4005276084U) },
		{ Z_Construct_UClass_UOnAcceptHandleSourcesProperties, UOnAcceptHandleSourcesProperties::StaticClass, TEXT("UOnAcceptHandleSourcesProperties"), &Z_Registration_Info_UClass_UOnAcceptHandleSourcesProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnAcceptHandleSourcesProperties), 3698692893U) },
		{ Z_Construct_UClass_UOnAcceptHandleSourcesPropertiesSingle, UOnAcceptHandleSourcesPropertiesSingle::StaticClass, TEXT("UOnAcceptHandleSourcesPropertiesSingle"), &Z_Registration_Info_UClass_UOnAcceptHandleSourcesPropertiesSingle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnAcceptHandleSourcesPropertiesSingle), 503676048U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_OnAcceptProperties_h_2886372590(TEXT("/Script/ModelingComponents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_OnAcceptProperties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_OnAcceptProperties_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_OnAcceptProperties_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_OnAcceptProperties_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
