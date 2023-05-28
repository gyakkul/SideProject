// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Components/SpotLightComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpotLightComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent();
	ENGINE_API UClass* Z_Construct_UClass_USpotLightComponent();
	ENGINE_API UClass* Z_Construct_UClass_USpotLightComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(USpotLightComponent::execSetOuterConeAngle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewOuterConeAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOuterConeAngle(Z_Param_NewOuterConeAngle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpotLightComponent::execSetInnerConeAngle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewInnerConeAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInnerConeAngle(Z_Param_NewInnerConeAngle);
		P_NATIVE_END;
	}
	void USpotLightComponent::StaticRegisterNativesUSpotLightComponent()
	{
		UClass* Class = USpotLightComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetInnerConeAngle", &USpotLightComponent::execSetInnerConeAngle },
			{ "SetOuterConeAngle", &USpotLightComponent::execSetOuterConeAngle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USpotLightComponent_SetInnerConeAngle_Statics
	{
		struct SpotLightComponent_eventSetInnerConeAngle_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpotLightComponent_SetInnerConeAngle_Statics::NewProp_NewInnerConeAngle = { "NewInnerConeAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpotLightComponent_eventSetInnerConeAngle_Parms, NewInnerConeAngle), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpotLightComponent_SetInnerConeAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpotLightComponent_SetInnerConeAngle_Statics::NewProp_NewInnerConeAngle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpotLightComponent_SetInnerConeAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/SpotLightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpotLightComponent_SetInnerConeAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpotLightComponent, nullptr, "SetInnerConeAngle", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpotLightComponent_SetInnerConeAngle_Statics::SpotLightComponent_eventSetInnerConeAngle_Parms), Z_Construct_UFunction_USpotLightComponent_SetInnerConeAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpotLightComponent_SetInnerConeAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpotLightComponent_SetInnerConeAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpotLightComponent_SetInnerConeAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpotLightComponent_SetInnerConeAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpotLightComponent_SetInnerConeAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpotLightComponent_SetOuterConeAngle_Statics
	{
		struct SpotLightComponent_eventSetOuterConeAngle_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpotLightComponent_SetOuterConeAngle_Statics::NewProp_NewOuterConeAngle = { "NewOuterConeAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpotLightComponent_eventSetOuterConeAngle_Parms, NewOuterConeAngle), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpotLightComponent_SetOuterConeAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpotLightComponent_SetOuterConeAngle_Statics::NewProp_NewOuterConeAngle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpotLightComponent_SetOuterConeAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/SpotLightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpotLightComponent_SetOuterConeAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpotLightComponent, nullptr, "SetOuterConeAngle", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpotLightComponent_SetOuterConeAngle_Statics::SpotLightComponent_eventSetOuterConeAngle_Parms), Z_Construct_UFunction_USpotLightComponent_SetOuterConeAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpotLightComponent_SetOuterConeAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpotLightComponent_SetOuterConeAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpotLightComponent_SetOuterConeAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpotLightComponent_SetOuterConeAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpotLightComponent_SetOuterConeAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpotLightComponent);
	UClass* Z_Construct_UClass_USpotLightComponent_NoRegister()
	{
		return USpotLightComponent::StaticClass();
	}
	struct Z_Construct_UClass_USpotLightComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InnerConeAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InnerConeAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OuterConeAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OuterConeAngle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpotLightComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPointLightComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USpotLightComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USpotLightComponent_SetInnerConeAngle, "SetInnerConeAngle" }, // 674581248
		{ &Z_Construct_UFunction_USpotLightComponent_SetOuterConeAngle, "SetOuterConeAngle" }, // 4238121936
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpotLightComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Lights" },
		{ "Comment", "/**\n * A spot light component emits a directional cone shaped light (Eg a Torch).\n */" },
		{ "HideCategories", "Object Object LightShafts Object LightShafts Trigger Activation Components|Activation Physics Trigger Activation Components|Activation Physics Trigger PhysicsVolume" },
		{ "IncludePath", "Components/SpotLightComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Components/SpotLightComponent.h" },
		{ "ToolTip", "A spot light component emits a directional cone shaped light (Eg a Torch)." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpotLightComponent_Statics::NewProp_InnerConeAngle_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Degrees. */" },
		{ "ModuleRelativePath", "Classes/Components/SpotLightComponent.h" },
		{ "ShouldShowInViewport", "TRUE" },
		{ "ToolTip", "Degrees." },
		{ "UIMax", "80.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpotLightComponent_Statics::NewProp_InnerConeAngle = { "InnerConeAngle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpotLightComponent, InnerConeAngle), METADATA_PARAMS(Z_Construct_UClass_USpotLightComponent_Statics::NewProp_InnerConeAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpotLightComponent_Statics::NewProp_InnerConeAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpotLightComponent_Statics::NewProp_OuterConeAngle_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Degrees. */" },
		{ "ModuleRelativePath", "Classes/Components/SpotLightComponent.h" },
		{ "ShouldShowInViewport", "TRUE" },
		{ "ToolTip", "Degrees." },
		{ "UIMax", "80.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpotLightComponent_Statics::NewProp_OuterConeAngle = { "OuterConeAngle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpotLightComponent, OuterConeAngle), METADATA_PARAMS(Z_Construct_UClass_USpotLightComponent_Statics::NewProp_OuterConeAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpotLightComponent_Statics::NewProp_OuterConeAngle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpotLightComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpotLightComponent_Statics::NewProp_InnerConeAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpotLightComponent_Statics::NewProp_OuterConeAngle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpotLightComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpotLightComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpotLightComponent_Statics::ClassParams = {
		&USpotLightComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USpotLightComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USpotLightComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_USpotLightComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpotLightComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpotLightComponent()
	{
		if (!Z_Registration_Info_UClass_USpotLightComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpotLightComponent.OuterSingleton, Z_Construct_UClass_USpotLightComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpotLightComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USpotLightComponent>()
	{
		return USpotLightComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpotLightComponent);
	USpotLightComponent::~USpotLightComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SpotLightComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SpotLightComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpotLightComponent, USpotLightComponent::StaticClass, TEXT("USpotLightComponent"), &Z_Registration_Info_UClass_USpotLightComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpotLightComponent), 4195943142U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SpotLightComponent_h_239227985(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SpotLightComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SpotLightComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
