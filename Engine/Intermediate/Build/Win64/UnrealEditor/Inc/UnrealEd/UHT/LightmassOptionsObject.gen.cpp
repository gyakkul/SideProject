// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Preferences/LightmassOptionsObject.h"
#include "../../Source/Runtime/Engine/Classes/Engine/EngineTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightmassOptionsObject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightmassDebugOptions();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSwarmDebugOptions();
	UNREALED_API UClass* Z_Construct_UClass_ULightmassOptionsObject();
	UNREALED_API UClass* Z_Construct_UClass_ULightmassOptionsObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void ULightmassOptionsObject::StaticRegisterNativesULightmassOptionsObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULightmassOptionsObject);
	UClass* Z_Construct_UClass_ULightmassOptionsObject_NoRegister()
	{
		return ULightmassOptionsObject::StaticClass();
	}
	struct Z_Construct_UClass_ULightmassOptionsObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwarmSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SwarmSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULightmassOptionsObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightmassOptionsObject_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Preferences/LightmassOptionsObject.h" },
		{ "ModuleRelativePath", "Classes/Preferences/LightmassOptionsObject.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightmassOptionsObject_Statics::NewProp_DebugSettings_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Classes/Preferences/LightmassOptionsObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULightmassOptionsObject_Statics::NewProp_DebugSettings = { "DebugSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULightmassOptionsObject, DebugSettings), Z_Construct_UScriptStruct_FLightmassDebugOptions, METADATA_PARAMS(Z_Construct_UClass_ULightmassOptionsObject_Statics::NewProp_DebugSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightmassOptionsObject_Statics::NewProp_DebugSettings_MetaData)) }; // 1757465584
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightmassOptionsObject_Statics::NewProp_SwarmSettings_MetaData[] = {
		{ "Category", "Swarm" },
		{ "ModuleRelativePath", "Classes/Preferences/LightmassOptionsObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULightmassOptionsObject_Statics::NewProp_SwarmSettings = { "SwarmSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULightmassOptionsObject, SwarmSettings), Z_Construct_UScriptStruct_FSwarmDebugOptions, METADATA_PARAMS(Z_Construct_UClass_ULightmassOptionsObject_Statics::NewProp_SwarmSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightmassOptionsObject_Statics::NewProp_SwarmSettings_MetaData)) }; // 838667736
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULightmassOptionsObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightmassOptionsObject_Statics::NewProp_DebugSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightmassOptionsObject_Statics::NewProp_SwarmSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULightmassOptionsObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightmassOptionsObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULightmassOptionsObject_Statics::ClassParams = {
		&ULightmassOptionsObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULightmassOptionsObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULightmassOptionsObject_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULightmassOptionsObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULightmassOptionsObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULightmassOptionsObject()
	{
		if (!Z_Registration_Info_UClass_ULightmassOptionsObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULightmassOptionsObject.OuterSingleton, Z_Construct_UClass_ULightmassOptionsObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULightmassOptionsObject.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<ULightmassOptionsObject>()
	{
		return ULightmassOptionsObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULightmassOptionsObject);
	ULightmassOptionsObject::~ULightmassOptionsObject() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_LightmassOptionsObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_LightmassOptionsObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULightmassOptionsObject, ULightmassOptionsObject::StaticClass, TEXT("ULightmassOptionsObject"), &Z_Registration_Info_UClass_ULightmassOptionsObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULightmassOptionsObject), 3090975145U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_LightmassOptionsObject_h_415657016(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_LightmassOptionsObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_LightmassOptionsObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
