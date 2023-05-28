// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaterEditorSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterEditorSubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_WaterEditor();
	WATEREDITOR_API UClass* Z_Construct_UClass_UWaterEditorSubsystem();
	WATEREDITOR_API UClass* Z_Construct_UClass_UWaterEditorSubsystem_NoRegister();
// End Cross Module References
	void UWaterEditorSubsystem::StaticRegisterNativesUWaterEditorSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaterEditorSubsystem);
	UClass* Z_Construct_UClass_UWaterEditorSubsystem_NoRegister()
	{
		return UWaterEditorSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UWaterEditorSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeMaterialParameterCollection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LandscapeMaterialParameterCollection;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WaterActorSprites_ValueProp;
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_WaterActorSprites_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterActorSprites_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_WaterActorSprites;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWaterActorSprite_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultWaterActorSprite;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorSprite_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ErrorSprite;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaterEditorSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_WaterEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterEditorSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WaterEditorSubsystem.h" },
		{ "ModuleRelativePath", "Public/WaterEditorSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterEditorSubsystem_Statics::NewProp_LandscapeMaterialParameterCollection_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWaterEditorSubsystem_Statics::NewProp_LandscapeMaterialParameterCollection = { "LandscapeMaterialParameterCollection", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterEditorSubsystem, LandscapeMaterialParameterCollection), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterEditorSubsystem_Statics::NewProp_LandscapeMaterialParameterCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterEditorSubsystem_Statics::NewProp_LandscapeMaterialParameterCollection_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWaterEditorSubsystem_Statics::NewProp_WaterActorSprites_ValueProp = { "WaterActorSprites", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_UWaterEditorSubsystem_Statics::NewProp_WaterActorSprites_Key_KeyProp = { "WaterActorSprites_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterEditorSubsystem_Statics::NewProp_WaterActorSprites_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWaterEditorSubsystem_Statics::NewProp_WaterActorSprites = { "WaterActorSprites", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterEditorSubsystem, WaterActorSprites), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWaterEditorSubsystem_Statics::NewProp_WaterActorSprites_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterEditorSubsystem_Statics::NewProp_WaterActorSprites_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterEditorSubsystem_Statics::NewProp_DefaultWaterActorSprite_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWaterEditorSubsystem_Statics::NewProp_DefaultWaterActorSprite = { "DefaultWaterActorSprite", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterEditorSubsystem, DefaultWaterActorSprite), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterEditorSubsystem_Statics::NewProp_DefaultWaterActorSprite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterEditorSubsystem_Statics::NewProp_DefaultWaterActorSprite_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterEditorSubsystem_Statics::NewProp_ErrorSprite_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWaterEditorSubsystem_Statics::NewProp_ErrorSprite = { "ErrorSprite", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterEditorSubsystem, ErrorSprite), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterEditorSubsystem_Statics::NewProp_ErrorSprite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterEditorSubsystem_Statics::NewProp_ErrorSprite_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaterEditorSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterEditorSubsystem_Statics::NewProp_LandscapeMaterialParameterCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterEditorSubsystem_Statics::NewProp_WaterActorSprites_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterEditorSubsystem_Statics::NewProp_WaterActorSprites_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterEditorSubsystem_Statics::NewProp_WaterActorSprites,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterEditorSubsystem_Statics::NewProp_DefaultWaterActorSprite,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterEditorSubsystem_Statics::NewProp_ErrorSprite,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaterEditorSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaterEditorSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaterEditorSubsystem_Statics::ClassParams = {
		&UWaterEditorSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWaterEditorSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWaterEditorSubsystem_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWaterEditorSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterEditorSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaterEditorSubsystem()
	{
		if (!Z_Registration_Info_UClass_UWaterEditorSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaterEditorSubsystem.OuterSingleton, Z_Construct_UClass_UWaterEditorSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaterEditorSubsystem.OuterSingleton;
	}
	template<> WATEREDITOR_API UClass* StaticClass<UWaterEditorSubsystem>()
	{
		return UWaterEditorSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaterEditorSubsystem);
	UWaterEditorSubsystem::~UWaterEditorSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWaterEditorSubsystem, UWaterEditorSubsystem::StaticClass, TEXT("UWaterEditorSubsystem"), &Z_Registration_Info_UClass_UWaterEditorSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaterEditorSubsystem), 2490656295U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSubsystem_h_2637870993(TEXT("/Script/WaterEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
