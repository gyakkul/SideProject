// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/PointLight.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointLight() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ALight();
	ENGINE_API UClass* Z_Construct_UClass_APointLight();
	ENGINE_API UClass* Z_Construct_UClass_APointLight_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(APointLight::execSetLightFalloffExponent)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewLightFalloffExponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLightFalloffExponent(Z_Param_NewLightFalloffExponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APointLight::execSetRadius)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewRadius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRadius(Z_Param_NewRadius);
		P_NATIVE_END;
	}
	void APointLight::StaticRegisterNativesAPointLight()
	{
		UClass* Class = APointLight::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetLightFalloffExponent", &APointLight::execSetLightFalloffExponent },
			{ "SetRadius", &APointLight::execSetRadius },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APointLight_SetLightFalloffExponent_Statics
	{
		struct PointLight_eventSetLightFalloffExponent_Parms
		{
			float NewLightFalloffExponent;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewLightFalloffExponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APointLight_SetLightFalloffExponent_Statics::NewProp_NewLightFalloffExponent = { "NewLightFalloffExponent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PointLight_eventSetLightFalloffExponent_Parms, NewLightFalloffExponent), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APointLight_SetLightFalloffExponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APointLight_SetLightFalloffExponent_Statics::NewProp_NewLightFalloffExponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APointLight_SetLightFalloffExponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Engine/PointLight.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APointLight_SetLightFalloffExponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APointLight, nullptr, "SetLightFalloffExponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_APointLight_SetLightFalloffExponent_Statics::PointLight_eventSetLightFalloffExponent_Parms), Z_Construct_UFunction_APointLight_SetLightFalloffExponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APointLight_SetLightFalloffExponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APointLight_SetLightFalloffExponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APointLight_SetLightFalloffExponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APointLight_SetLightFalloffExponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APointLight_SetLightFalloffExponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APointLight_SetRadius_Statics
	{
		struct PointLight_eventSetRadius_Parms
		{
			float NewRadius;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APointLight_SetRadius_Statics::NewProp_NewRadius = { "NewRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PointLight_eventSetRadius_Parms, NewRadius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APointLight_SetRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APointLight_SetRadius_Statics::NewProp_NewRadius,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APointLight_SetRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "Comment", "// BEGIN DEPRECATED (use component functions now in level script)\n" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Engine/PointLight.h" },
		{ "ToolTip", "BEGIN DEPRECATED (use component functions now in level script)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APointLight_SetRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APointLight, nullptr, "SetRadius", nullptr, nullptr, sizeof(Z_Construct_UFunction_APointLight_SetRadius_Statics::PointLight_eventSetRadius_Parms), Z_Construct_UFunction_APointLight_SetRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APointLight_SetRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APointLight_SetRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APointLight_SetRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APointLight_SetRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APointLight_SetRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APointLight);
	UClass* Z_Construct_UClass_APointLight_NoRegister()
	{
		return APointLight::StaticClass();
	}
	struct Z_Construct_UClass_APointLight_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointLightComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PointLightComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APointLight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALight,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APointLight_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APointLight_SetLightFalloffExponent, "SetLightFalloffExponent" }, // 265782619
		{ &Z_Construct_UFunction_APointLight_SetRadius, "SetRadius" }, // 1764897501
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointLight_Statics::Class_MetaDataParams[] = {
		{ "ChildCanTick", "" },
		{ "ClassGroupNames", "Lights PointLights" },
		{ "HideCategories", "Input Collision Replication" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "Engine/PointLight.h" },
		{ "ModuleRelativePath", "Classes/Engine/PointLight.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointLight_Statics::NewProp_PointLightComponent_MetaData[] = {
		{ "Category", "Light" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "PointLight,Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Engine/PointLight.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APointLight_Statics::NewProp_PointLightComponent = { "PointLightComponent", nullptr, (EPropertyFlags)0x00140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APointLight, PointLightComponent), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APointLight_Statics::NewProp_PointLightComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APointLight_Statics::NewProp_PointLightComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APointLight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointLight_Statics::NewProp_PointLightComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APointLight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APointLight>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APointLight_Statics::ClassParams = {
		&APointLight::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APointLight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APointLight_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_APointLight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APointLight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APointLight()
	{
		if (!Z_Registration_Info_UClass_APointLight.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APointLight.OuterSingleton, Z_Construct_UClass_APointLight_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APointLight.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<APointLight>()
	{
		return APointLight::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APointLight);
	APointLight::~APointLight() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APointLight, APointLight::StaticClass, TEXT("APointLight"), &Z_Registration_Info_UClass_APointLight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APointLight), 692466733U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_4124365930(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
