// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleCameraShakePattern.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleCameraShakePattern() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakePattern();
	GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_USimpleCameraShakePattern();
	GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_USimpleCameraShakePattern_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References
	void USimpleCameraShakePattern::StaticRegisterNativesUSimpleCameraShakePattern()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleCameraShakePattern);
	UClass* Z_Construct_UClass_USimpleCameraShakePattern_NoRegister()
	{
		return USimpleCameraShakePattern::StaticClass();
	}
	struct Z_Construct_UClass_USimpleCameraShakePattern_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendInTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendInTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendOutTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendOutTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleCameraShakePattern_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraShakePattern,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleCameraShakePattern_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A base class for a simple camera shake.\n */" },
		{ "IncludePath", "SimpleCameraShakePattern.h" },
		{ "ModuleRelativePath", "Public/SimpleCameraShakePattern.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A base class for a simple camera shake." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleCameraShakePattern_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Timing" },
		{ "Comment", "/** Duration in seconds of this shake. Zero or less means infinite. */" },
		{ "ModuleRelativePath", "Public/SimpleCameraShakePattern.h" },
		{ "ToolTip", "Duration in seconds of this shake. Zero or less means infinite." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USimpleCameraShakePattern_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USimpleCameraShakePattern, Duration), METADATA_PARAMS(Z_Construct_UClass_USimpleCameraShakePattern_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCameraShakePattern_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleCameraShakePattern_Statics::NewProp_BlendInTime_MetaData[] = {
		{ "Category", "Timing" },
		{ "Comment", "/** Blend-in time for this shake. Zero or less means no blend-in. */" },
		{ "ModuleRelativePath", "Public/SimpleCameraShakePattern.h" },
		{ "ToolTip", "Blend-in time for this shake. Zero or less means no blend-in." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USimpleCameraShakePattern_Statics::NewProp_BlendInTime = { "BlendInTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USimpleCameraShakePattern, BlendInTime), METADATA_PARAMS(Z_Construct_UClass_USimpleCameraShakePattern_Statics::NewProp_BlendInTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCameraShakePattern_Statics::NewProp_BlendInTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleCameraShakePattern_Statics::NewProp_BlendOutTime_MetaData[] = {
		{ "Category", "Timing" },
		{ "Comment", "/** Blend-out time for this shake. Zero or less means no blend-out. */" },
		{ "ModuleRelativePath", "Public/SimpleCameraShakePattern.h" },
		{ "ToolTip", "Blend-out time for this shake. Zero or less means no blend-out." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USimpleCameraShakePattern_Statics::NewProp_BlendOutTime = { "BlendOutTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USimpleCameraShakePattern, BlendOutTime), METADATA_PARAMS(Z_Construct_UClass_USimpleCameraShakePattern_Statics::NewProp_BlendOutTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCameraShakePattern_Statics::NewProp_BlendOutTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleCameraShakePattern_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleCameraShakePattern_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleCameraShakePattern_Statics::NewProp_BlendInTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleCameraShakePattern_Statics::NewProp_BlendOutTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleCameraShakePattern_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleCameraShakePattern>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleCameraShakePattern_Statics::ClassParams = {
		&USimpleCameraShakePattern::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USimpleCameraShakePattern_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCameraShakePattern_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USimpleCameraShakePattern_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCameraShakePattern_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimpleCameraShakePattern()
	{
		if (!Z_Registration_Info_UClass_USimpleCameraShakePattern.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleCameraShakePattern.OuterSingleton, Z_Construct_UClass_USimpleCameraShakePattern_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleCameraShakePattern.OuterSingleton;
	}
	template<> GAMEPLAYCAMERAS_API UClass* StaticClass<USimpleCameraShakePattern>()
	{
		return USimpleCameraShakePattern::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleCameraShakePattern);
	USimpleCameraShakePattern::~USimpleCameraShakePattern() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_SimpleCameraShakePattern_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_SimpleCameraShakePattern_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimpleCameraShakePattern, USimpleCameraShakePattern::StaticClass, TEXT("USimpleCameraShakePattern"), &Z_Registration_Info_UClass_USimpleCameraShakePattern, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleCameraShakePattern), 3058516519U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_SimpleCameraShakePattern_h_2169441821(TEXT("/Script/GameplayCameras"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_SimpleCameraShakePattern_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_SimpleCameraShakePattern_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
