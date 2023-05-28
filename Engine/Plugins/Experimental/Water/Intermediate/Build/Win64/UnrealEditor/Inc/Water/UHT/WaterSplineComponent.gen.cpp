// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaterSplineComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#include "WaterSplineMetadata.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterSplineComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent();
	UPackage* Z_Construct_UPackage__Script_Water();
	WATER_API UClass* Z_Construct_UClass_UWaterSplineComponent();
	WATER_API UClass* Z_Construct_UClass_UWaterSplineComponent_NoRegister();
	WATER_API UScriptStruct* Z_Construct_UScriptStruct_FWaterSplineCurveDefaults();
// End Cross Module References
	DEFINE_FUNCTION(UWaterSplineComponent::execK2_SynchronizeAndBroadcastDataChange)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_SynchronizeAndBroadcastDataChange();
		P_NATIVE_END;
	}
	void UWaterSplineComponent::StaticRegisterNativesUWaterSplineComponent()
	{
		UClass* Class = UWaterSplineComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "K2_SynchronizeAndBroadcastDataChange", &UWaterSplineComponent::execK2_SynchronizeAndBroadcastDataChange },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWaterSplineComponent_K2_SynchronizeAndBroadcastDataChange_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterSplineComponent_K2_SynchronizeAndBroadcastDataChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Water" },
		{ "Comment", "/*\n\x09 * Call to update water spline\n\x09 * Necessary if using USplineComponent::AddPoint(s) instead of editing the spline in editor\n\x09 */" },
		{ "DisplayName", "Synchronize And Broadcast Data Change" },
		{ "ModuleRelativePath", "Public/WaterSplineComponent.h" },
		{ "ToolTip", "* Call to update water spline\n* Necessary if using USplineComponent::AddPoint(s) instead of editing the spline in editor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterSplineComponent_K2_SynchronizeAndBroadcastDataChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterSplineComponent, nullptr, "K2_SynchronizeAndBroadcastDataChange", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterSplineComponent_K2_SynchronizeAndBroadcastDataChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterSplineComponent_K2_SynchronizeAndBroadcastDataChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterSplineComponent_K2_SynchronizeAndBroadcastDataChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterSplineComponent_K2_SynchronizeAndBroadcastDataChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaterSplineComponent);
	UClass* Z_Construct_UClass_UWaterSplineComponent_NoRegister()
	{
		return UWaterSplineComponent::StaticClass();
	}
	struct Z_Construct_UClass_UWaterSplineComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterSplineDefaults_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaterSplineDefaults;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousWaterSplineDefaults_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousWaterSplineDefaults;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaterSplineComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USplineComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWaterSplineComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWaterSplineComponent_K2_SynchronizeAndBroadcastDataChange, "K2_SynchronizeAndBroadcastDataChange" }, // 2157575997
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterSplineComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Physics Collision Lighting Rendering Mobile Trigger VirtualTexture" },
		{ "IncludePath", "WaterSplineComponent.h" },
		{ "ModuleRelativePath", "Public/WaterSplineComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterSplineComponent_Statics::NewProp_WaterSplineDefaults_MetaData[] = {
		{ "Category", "Water" },
		{ "Comment", "/**\n\x09 * Defaults which are used to propagate values to spline points on instances of this in the world\n\x09 */" },
		{ "ModuleRelativePath", "Public/WaterSplineComponent.h" },
		{ "ToolTip", "Defaults which are used to propagate values to spline points on instances of this in the world" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaterSplineComponent_Statics::NewProp_WaterSplineDefaults = { "WaterSplineDefaults", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterSplineComponent, WaterSplineDefaults), Z_Construct_UScriptStruct_FWaterSplineCurveDefaults, METADATA_PARAMS(Z_Construct_UClass_UWaterSplineComponent_Statics::NewProp_WaterSplineDefaults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterSplineComponent_Statics::NewProp_WaterSplineDefaults_MetaData)) }; // 1062460365
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterSplineComponent_Statics::NewProp_PreviousWaterSplineDefaults_MetaData[] = {
		{ "Comment", "/** \n\x09 * This stores the last defaults propagated to spline points on an instance of this component \n\x09 *  Used to determine if spline points were modifed by users or if they exist at a current default value\n\x09 */" },
		{ "ModuleRelativePath", "Public/WaterSplineComponent.h" },
		{ "ToolTip", "This stores the last defaults propagated to spline points on an instance of this component\n Used to determine if spline points were modifed by users or if they exist at a current default value" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaterSplineComponent_Statics::NewProp_PreviousWaterSplineDefaults = { "PreviousWaterSplineDefaults", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterSplineComponent, PreviousWaterSplineDefaults), Z_Construct_UScriptStruct_FWaterSplineCurveDefaults, METADATA_PARAMS(Z_Construct_UClass_UWaterSplineComponent_Statics::NewProp_PreviousWaterSplineDefaults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterSplineComponent_Statics::NewProp_PreviousWaterSplineDefaults_MetaData)) }; // 1062460365
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaterSplineComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterSplineComponent_Statics::NewProp_WaterSplineDefaults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterSplineComponent_Statics::NewProp_PreviousWaterSplineDefaults,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaterSplineComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaterSplineComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaterSplineComponent_Statics::ClassParams = {
		&UWaterSplineComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWaterSplineComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWaterSplineComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWaterSplineComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterSplineComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaterSplineComponent()
	{
		if (!Z_Registration_Info_UClass_UWaterSplineComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaterSplineComponent.OuterSingleton, Z_Construct_UClass_UWaterSplineComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaterSplineComponent.OuterSingleton;
	}
	template<> WATER_API UClass* StaticClass<UWaterSplineComponent>()
	{
		return UWaterSplineComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaterSplineComponent);
	UWaterSplineComponent::~UWaterSplineComponent() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UWaterSplineComponent)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWaterSplineComponent, UWaterSplineComponent::StaticClass, TEXT("UWaterSplineComponent"), &Z_Registration_Info_UClass_UWaterSplineComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaterSplineComponent), 1178119346U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineComponent_h_1491352675(TEXT("/Script/Water"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
