// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/SpotLight.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpotLight() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ALight();
	ENGINE_API UClass* Z_Construct_UClass_ASpotLight();
	ENGINE_API UClass* Z_Construct_UClass_ASpotLight_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpotLightComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(ASpotLight::execSetOuterConeAngle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewOuterConeAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOuterConeAngle(Z_Param_NewOuterConeAngle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpotLight::execSetInnerConeAngle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewInnerConeAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInnerConeAngle(Z_Param_NewInnerConeAngle);
		P_NATIVE_END;
	}
	void ASpotLight::StaticRegisterNativesASpotLight()
	{
		UClass* Class = ASpotLight::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetInnerConeAngle", &ASpotLight::execSetInnerConeAngle },
			{ "SetOuterConeAngle", &ASpotLight::execSetOuterConeAngle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASpotLight_SetInnerConeAngle_Statics
	{
		struct SpotLight_eventSetInnerConeAngle_Parms
		{
			float NewInnerConeAngle;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewInnerConeAngle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpotLight_SetInnerConeAngle_Statics::NewProp_NewInnerConeAngle = { "NewInnerConeAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpotLight_eventSetInnerConeAngle_Parms, NewInnerConeAngle), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpotLight_SetInnerConeAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpotLight_SetInnerConeAngle_Statics::NewProp_NewInnerConeAngle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpotLight_SetInnerConeAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "Comment", "// BEGIN DEPRECATED (use component functions now in level script)\n" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Engine/SpotLight.h" },
		{ "ToolTip", "BEGIN DEPRECATED (use component functions now in level script)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpotLight_SetInnerConeAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpotLight, nullptr, "SetInnerConeAngle", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASpotLight_SetInnerConeAngle_Statics::SpotLight_eventSetInnerConeAngle_Parms), Z_Construct_UFunction_ASpotLight_SetInnerConeAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpotLight_SetInnerConeAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpotLight_SetInnerConeAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpotLight_SetInnerConeAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpotLight_SetInnerConeAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpotLight_SetInnerConeAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpotLight_SetOuterConeAngle_Statics
	{
		struct SpotLight_eventSetOuterConeAngle_Parms
		{
			float NewOuterConeAngle;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewOuterConeAngle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpotLight_SetOuterConeAngle_Statics::NewProp_NewOuterConeAngle = { "NewOuterConeAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpotLight_eventSetOuterConeAngle_Parms, NewOuterConeAngle), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpotLight_SetOuterConeAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpotLight_SetOuterConeAngle_Statics::NewProp_NewOuterConeAngle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpotLight_SetOuterConeAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Engine/SpotLight.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpotLight_SetOuterConeAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpotLight, nullptr, "SetOuterConeAngle", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASpotLight_SetOuterConeAngle_Statics::SpotLight_eventSetOuterConeAngle_Parms), Z_Construct_UFunction_ASpotLight_SetOuterConeAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpotLight_SetOuterConeAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpotLight_SetOuterConeAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpotLight_SetOuterConeAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpotLight_SetOuterConeAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpotLight_SetOuterConeAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpotLight);
	UClass* Z_Construct_UClass_ASpotLight_NoRegister()
	{
		return ASpotLight::StaticClass();
	}
	struct Z_Construct_UClass_ASpotLight_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpotLightComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpotLightComponent;
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
	UObject* (*const Z_Construct_UClass_ASpotLight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALight,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASpotLight_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpotLight_SetInnerConeAngle, "SetInnerConeAngle" }, // 2304722576
		{ &Z_Construct_UFunction_ASpotLight_SetOuterConeAngle, "SetOuterConeAngle" }, // 2722743755
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpotLight_Statics::Class_MetaDataParams[] = {
		{ "ChildCanTick", "" },
		{ "ClassGroupNames", "Lights SpotLights" },
		{ "HideCategories", "Input Collision Replication" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "Engine/SpotLight.h" },
		{ "ModuleRelativePath", "Classes/Engine/SpotLight.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpotLight_Statics::NewProp_SpotLightComponent_MetaData[] = {
		{ "Category", "Light" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "SpotLight,Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Engine/SpotLight.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASpotLight_Statics::NewProp_SpotLightComponent = { "SpotLightComponent", nullptr, (EPropertyFlags)0x00140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASpotLight, SpotLightComponent), Z_Construct_UClass_USpotLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpotLight_Statics::NewProp_SpotLightComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpotLight_Statics::NewProp_SpotLightComponent_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpotLight_Statics::NewProp_ArrowComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/SpotLight.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASpotLight_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x0044000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASpotLight, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpotLight_Statics::NewProp_ArrowComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpotLight_Statics::NewProp_ArrowComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpotLight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpotLight_Statics::NewProp_SpotLightComponent,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpotLight_Statics::NewProp_ArrowComponent,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpotLight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpotLight>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpotLight_Statics::ClassParams = {
		&ASpotLight::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASpotLight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpotLight_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASpotLight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpotLight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpotLight()
	{
		if (!Z_Registration_Info_UClass_ASpotLight.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpotLight.OuterSingleton, Z_Construct_UClass_ASpotLight_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASpotLight.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ASpotLight>()
	{
		return ASpotLight::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpotLight);
	ASpotLight::~ASpotLight() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASpotLight, ASpotLight::StaticClass, TEXT("ASpotLight"), &Z_Registration_Info_UClass_ASpotLight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpotLight), 1165588540U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_139355263(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
