// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/ZoneGraphAnnotations/Source/ZoneGraphAnnotations/Public/ZoneGraphAnnotationSubsystem.h"
#include "InstancedStructContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZoneGraphAnnotationSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStructContainer();
	UPackage* Z_Construct_UPackage__Script_ZoneGraphAnnotations();
	ZONEGRAPHANNOTATIONS_API UClass* Z_Construct_UClass_UZoneGraphAnnotationComponent_NoRegister();
	ZONEGRAPHANNOTATIONS_API UClass* Z_Construct_UClass_UZoneGraphAnnotationSubsystem();
	ZONEGRAPHANNOTATIONS_API UClass* Z_Construct_UClass_UZoneGraphAnnotationSubsystem_NoRegister();
	ZONEGRAPHANNOTATIONS_API UScriptStruct* Z_Construct_UScriptStruct_FRegisteredZoneGraphAnnotation();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RegisteredZoneGraphAnnotation;
class UScriptStruct* FRegisteredZoneGraphAnnotation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RegisteredZoneGraphAnnotation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RegisteredZoneGraphAnnotation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRegisteredZoneGraphAnnotation, (UObject*)Z_Construct_UPackage__Script_ZoneGraphAnnotations(), TEXT("RegisteredZoneGraphAnnotation"));
	}
	return Z_Registration_Info_UScriptStruct_RegisteredZoneGraphAnnotation.OuterSingleton;
}
template<> ZONEGRAPHANNOTATIONS_API UScriptStruct* StaticStruct<FRegisteredZoneGraphAnnotation>()
{
	return FRegisteredZoneGraphAnnotation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRegisteredZoneGraphAnnotation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnnotationComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AnnotationComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegisteredZoneGraphAnnotation_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Struct representing registered ZoneGraph data in the subsystem.\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphAnnotationSubsystem.h" },
		{ "ToolTip", "Struct representing registered ZoneGraph data in the subsystem." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRegisteredZoneGraphAnnotation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRegisteredZoneGraphAnnotation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegisteredZoneGraphAnnotation_Statics::NewProp_AnnotationComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ZoneGraphAnnotationSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FRegisteredZoneGraphAnnotation_Statics::NewProp_AnnotationComponent = { "AnnotationComponent", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRegisteredZoneGraphAnnotation, AnnotationComponent), Z_Construct_UClass_UZoneGraphAnnotationComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRegisteredZoneGraphAnnotation_Statics::NewProp_AnnotationComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegisteredZoneGraphAnnotation_Statics::NewProp_AnnotationComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRegisteredZoneGraphAnnotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegisteredZoneGraphAnnotation_Statics::NewProp_AnnotationComponent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRegisteredZoneGraphAnnotation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraphAnnotations,
		nullptr,
		&NewStructOps,
		"RegisteredZoneGraphAnnotation",
		sizeof(FRegisteredZoneGraphAnnotation),
		alignof(FRegisteredZoneGraphAnnotation),
		Z_Construct_UScriptStruct_FRegisteredZoneGraphAnnotation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegisteredZoneGraphAnnotation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRegisteredZoneGraphAnnotation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegisteredZoneGraphAnnotation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRegisteredZoneGraphAnnotation()
	{
		if (!Z_Registration_Info_UScriptStruct_RegisteredZoneGraphAnnotation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RegisteredZoneGraphAnnotation.InnerSingleton, Z_Construct_UScriptStruct_FRegisteredZoneGraphAnnotation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RegisteredZoneGraphAnnotation.InnerSingleton;
	}
	void UZoneGraphAnnotationSubsystem::StaticRegisterNativesUZoneGraphAnnotationSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UZoneGraphAnnotationSubsystem);
	UClass* Z_Construct_UClass_UZoneGraphAnnotationSubsystem_NoRegister()
	{
		return UZoneGraphAnnotationSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UZoneGraphAnnotationSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RegisteredComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RegisteredComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Events_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Events;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TagToAnnotationLookup_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagToAnnotationLookup_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TagToAnnotationLookup;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZoneGraphAnnotationSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraphAnnotations,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphAnnotationSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* A subsystem managing Zonegraph Annotations.\n*/" },
		{ "IncludePath", "ZoneGraphAnnotationSubsystem.h" },
		{ "ModuleRelativePath", "Public/ZoneGraphAnnotationSubsystem.h" },
		{ "ToolTip", "A subsystem managing Zonegraph Annotations." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZoneGraphAnnotationSubsystem_Statics::NewProp_RegisteredComponents_Inner = { "RegisteredComponents", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRegisteredZoneGraphAnnotation, METADATA_PARAMS(nullptr, 0) }; // 119504409
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphAnnotationSubsystem_Statics::NewProp_RegisteredComponents_MetaData[] = {
		{ "Comment", "/** Array of registered components. */" },
		{ "ModuleRelativePath", "Public/ZoneGraphAnnotationSubsystem.h" },
		{ "ToolTip", "Array of registered components." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UZoneGraphAnnotationSubsystem_Statics::NewProp_RegisteredComponents = { "RegisteredComponents", nullptr, (EPropertyFlags)0x0020088000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneGraphAnnotationSubsystem, RegisteredComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UZoneGraphAnnotationSubsystem_Statics::NewProp_RegisteredComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphAnnotationSubsystem_Statics::NewProp_RegisteredComponents_MetaData)) }; // 119504409
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphAnnotationSubsystem_Statics::NewProp_Events_MetaData[] = {
		{ "Comment", "/** Stream of events to be processed, double buffered. */" },
		{ "ModuleRelativePath", "Public/ZoneGraphAnnotationSubsystem.h" },
		{ "ToolTip", "Stream of events to be processed, double buffered." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZoneGraphAnnotationSubsystem_Statics::NewProp_Events = { "Events", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Events, UZoneGraphAnnotationSubsystem), nullptr, nullptr, STRUCT_OFFSET(UZoneGraphAnnotationSubsystem, Events), Z_Construct_UScriptStruct_FInstancedStructContainer, METADATA_PARAMS(Z_Construct_UClass_UZoneGraphAnnotationSubsystem_Statics::NewProp_Events_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphAnnotationSubsystem_Statics::NewProp_Events_MetaData)) }; // 334302854
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UZoneGraphAnnotationSubsystem_Statics::NewProp_TagToAnnotationLookup_Inner = { "TagToAnnotationLookup", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UZoneGraphAnnotationComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphAnnotationSubsystem_Statics::NewProp_TagToAnnotationLookup_MetaData[] = {
		{ "Comment", "/** Lookup table from tag index to Annotation */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ZoneGraphAnnotationSubsystem.h" },
		{ "ToolTip", "Lookup table from tag index to Annotation" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UZoneGraphAnnotationSubsystem_Statics::NewProp_TagToAnnotationLookup = { "TagToAnnotationLookup", nullptr, (EPropertyFlags)0x0024088000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneGraphAnnotationSubsystem, TagToAnnotationLookup), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UZoneGraphAnnotationSubsystem_Statics::NewProp_TagToAnnotationLookup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphAnnotationSubsystem_Statics::NewProp_TagToAnnotationLookup_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZoneGraphAnnotationSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphAnnotationSubsystem_Statics::NewProp_RegisteredComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphAnnotationSubsystem_Statics::NewProp_RegisteredComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphAnnotationSubsystem_Statics::NewProp_Events,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphAnnotationSubsystem_Statics::NewProp_TagToAnnotationLookup_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphAnnotationSubsystem_Statics::NewProp_TagToAnnotationLookup,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZoneGraphAnnotationSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZoneGraphAnnotationSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UZoneGraphAnnotationSubsystem_Statics::ClassParams = {
		&UZoneGraphAnnotationSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UZoneGraphAnnotationSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphAnnotationSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UZoneGraphAnnotationSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphAnnotationSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UZoneGraphAnnotationSubsystem()
	{
		if (!Z_Registration_Info_UClass_UZoneGraphAnnotationSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZoneGraphAnnotationSubsystem.OuterSingleton, Z_Construct_UClass_UZoneGraphAnnotationSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UZoneGraphAnnotationSubsystem.OuterSingleton;
	}
	template<> ZONEGRAPHANNOTATIONS_API UClass* StaticClass<UZoneGraphAnnotationSubsystem>()
	{
		return UZoneGraphAnnotationSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZoneGraphAnnotationSubsystem);
	UZoneGraphAnnotationSubsystem::~UZoneGraphAnnotationSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationSubsystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationSubsystem_h_Statics::ScriptStructInfo[] = {
		{ FRegisteredZoneGraphAnnotation::StaticStruct, Z_Construct_UScriptStruct_FRegisteredZoneGraphAnnotation_Statics::NewStructOps, TEXT("RegisteredZoneGraphAnnotation"), &Z_Registration_Info_UScriptStruct_RegisteredZoneGraphAnnotation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRegisteredZoneGraphAnnotation), 119504409U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UZoneGraphAnnotationSubsystem, UZoneGraphAnnotationSubsystem::StaticClass, TEXT("UZoneGraphAnnotationSubsystem"), &Z_Registration_Info_UClass_UZoneGraphAnnotationSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZoneGraphAnnotationSubsystem), 2944582494U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationSubsystem_h_2873236445(TEXT("/Script/ZoneGraphAnnotations"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationSubsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationSubsystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
