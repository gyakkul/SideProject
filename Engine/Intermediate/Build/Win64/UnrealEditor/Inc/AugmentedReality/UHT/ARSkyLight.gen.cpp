// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARSkyLight.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARSkyLight() {}
// Cross Module References
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_AARSkyLight();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_AARSkyLight_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UAREnvironmentCaptureProbe_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ASkyLight();
	UPackage* Z_Construct_UPackage__Script_AugmentedReality();
// End Cross Module References
	DEFINE_FUNCTION(AARSkyLight::execSetEnvironmentCaptureProbe)
	{
		P_GET_OBJECT(UAREnvironmentCaptureProbe,Z_Param_InCaptureProbe);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnvironmentCaptureProbe(Z_Param_InCaptureProbe);
		P_NATIVE_END;
	}
	void AARSkyLight::StaticRegisterNativesAARSkyLight()
	{
		UClass* Class = AARSkyLight::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetEnvironmentCaptureProbe", &AARSkyLight::execSetEnvironmentCaptureProbe },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AARSkyLight_SetEnvironmentCaptureProbe_Statics
	{
		struct ARSkyLight_eventSetEnvironmentCaptureProbe_Parms
		{
			UAREnvironmentCaptureProbe* InCaptureProbe;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InCaptureProbe;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AARSkyLight_SetEnvironmentCaptureProbe_Statics::NewProp_InCaptureProbe = { "InCaptureProbe", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARSkyLight_eventSetEnvironmentCaptureProbe_Parms, InCaptureProbe), Z_Construct_UClass_UAREnvironmentCaptureProbe_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AARSkyLight_SetEnvironmentCaptureProbe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARSkyLight_SetEnvironmentCaptureProbe_Statics::NewProp_InCaptureProbe,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARSkyLight_SetEnvironmentCaptureProbe_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|SkyLight" },
		{ "Comment", "/** Sets the environment capture probe that this sky light is driven by */" },
		{ "ModuleRelativePath", "Public/ARSkyLight.h" },
		{ "ToolTip", "Sets the environment capture probe that this sky light is driven by" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AARSkyLight_SetEnvironmentCaptureProbe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AARSkyLight, nullptr, "SetEnvironmentCaptureProbe", nullptr, nullptr, sizeof(Z_Construct_UFunction_AARSkyLight_SetEnvironmentCaptureProbe_Statics::ARSkyLight_eventSetEnvironmentCaptureProbe_Parms), Z_Construct_UFunction_AARSkyLight_SetEnvironmentCaptureProbe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AARSkyLight_SetEnvironmentCaptureProbe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AARSkyLight_SetEnvironmentCaptureProbe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AARSkyLight_SetEnvironmentCaptureProbe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AARSkyLight_SetEnvironmentCaptureProbe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AARSkyLight_SetEnvironmentCaptureProbe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AARSkyLight);
	UClass* Z_Construct_UClass_AARSkyLight_NoRegister()
	{
		return AARSkyLight::StaticClass();
	}
	struct Z_Construct_UClass_AARSkyLight_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureProbe_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CaptureProbe;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AARSkyLight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASkyLight,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AARSkyLight_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AARSkyLight_SetEnvironmentCaptureProbe, "SetEnvironmentCaptureProbe" }, // 1577644784
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARSkyLight_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** This sky light class forces a refresh of the cube map data when an AR environment probe changes */" },
		{ "HideCategories", "Input Collision Replication Info Input Movement Collision Transformation HLOD WorldPartition" },
		{ "IncludePath", "ARSkyLight.h" },
		{ "ModuleRelativePath", "Public/ARSkyLight.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "This sky light class forces a refresh of the cube map data when an AR environment probe changes" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARSkyLight_Statics::NewProp_CaptureProbe_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARSkyLight.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AARSkyLight_Statics::NewProp_CaptureProbe = { "CaptureProbe", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AARSkyLight, CaptureProbe), Z_Construct_UClass_UAREnvironmentCaptureProbe_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARSkyLight_Statics::NewProp_CaptureProbe_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AARSkyLight_Statics::NewProp_CaptureProbe_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AARSkyLight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARSkyLight_Statics::NewProp_CaptureProbe,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AARSkyLight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AARSkyLight>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AARSkyLight_Statics::ClassParams = {
		&AARSkyLight::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AARSkyLight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AARSkyLight_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AARSkyLight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AARSkyLight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AARSkyLight()
	{
		if (!Z_Registration_Info_UClass_AARSkyLight.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AARSkyLight.OuterSingleton, Z_Construct_UClass_AARSkyLight_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AARSkyLight.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UClass* StaticClass<AARSkyLight>()
	{
		return AARSkyLight::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AARSkyLight);
	AARSkyLight::~AARSkyLight() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AARSkyLight, AARSkyLight::StaticClass, TEXT("AARSkyLight"), &Z_Registration_Info_UClass_AARSkyLight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AARSkyLight), 3392812778U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_1029455333(TEXT("/Script/AugmentedReality"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
