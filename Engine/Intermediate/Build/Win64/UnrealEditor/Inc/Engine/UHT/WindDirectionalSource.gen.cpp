// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/WindDirectionalSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWindDirectionalSource() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	ENGINE_API UClass* Z_Construct_UClass_AWindDirectionalSource();
	ENGINE_API UClass* Z_Construct_UClass_AWindDirectionalSource_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWindDirectionalSourceComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void AWindDirectionalSource::StaticRegisterNativesAWindDirectionalSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWindDirectionalSource);
	UClass* Z_Construct_UClass_AWindDirectionalSource_NoRegister()
	{
		return AWindDirectionalSource::StaticClass();
	}
	struct Z_Construct_UClass_AWindDirectionalSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Component;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ArrowComponent;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWindDirectionalSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWindDirectionalSource_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Wind" },
		{ "Comment", "/** Actor that provides a directional wind source. Only affects SpeedTree assets. */" },
		{ "HideCategories", "Input Movement Collision WorldPartition HLOD" },
		{ "IncludePath", "Engine/WindDirectionalSource.h" },
		{ "ModuleRelativePath", "Classes/Engine/WindDirectionalSource.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Actor that provides a directional wind source. Only affects SpeedTree assets." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWindDirectionalSource_Statics::NewProp_Component_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "WindDirectionalSource" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/WindDirectionalSource.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWindDirectionalSource_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWindDirectionalSource, Component), Z_Construct_UClass_UWindDirectionalSourceComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWindDirectionalSource_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWindDirectionalSource_Statics::NewProp_Component_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWindDirectionalSource_Statics::NewProp_ArrowComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/WindDirectionalSource.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWindDirectionalSource_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x0044000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWindDirectionalSource, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWindDirectionalSource_Statics::NewProp_ArrowComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWindDirectionalSource_Statics::NewProp_ArrowComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWindDirectionalSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindDirectionalSource_Statics::NewProp_Component,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindDirectionalSource_Statics::NewProp_ArrowComponent,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWindDirectionalSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWindDirectionalSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWindDirectionalSource_Statics::ClassParams = {
		&AWindDirectionalSource::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWindDirectionalSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWindDirectionalSource_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWindDirectionalSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWindDirectionalSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWindDirectionalSource()
	{
		if (!Z_Registration_Info_UClass_AWindDirectionalSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWindDirectionalSource.OuterSingleton, Z_Construct_UClass_AWindDirectionalSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWindDirectionalSource.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<AWindDirectionalSource>()
	{
		return AWindDirectionalSource::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWindDirectionalSource);
	AWindDirectionalSource::~AWindDirectionalSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_WindDirectionalSource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_WindDirectionalSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWindDirectionalSource, AWindDirectionalSource::StaticClass, TEXT("AWindDirectionalSource"), &Z_Registration_Info_UClass_AWindDirectionalSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWindDirectionalSource), 973733894U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_WindDirectionalSource_h_382788653(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_WindDirectionalSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_WindDirectionalSource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
