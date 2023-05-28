// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DMXFixtureActorBase.h"
#include "DMXTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXFixtureActorBase() {}
// Cross Module References
	DMXFIXTURES_API UClass* Z_Construct_UClass_ADMXFixtureActorBase();
	DMXFIXTURES_API UClass* Z_Construct_UClass_ADMXFixtureActorBase_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXComponent_NoRegister();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXNormalizedAttributeValueMap();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DMXFixtures();
// End Cross Module References
	DEFINE_FUNCTION(ADMXFixtureActorBase::execInterpolateDMXComponents)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InterpolateDMXComponents(Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADMXFixtureActorBase::execPushNormalizedValuesPerAttribute)
	{
		P_GET_STRUCT_REF(FDMXNormalizedAttributeValueMap,Z_Param_Out_ValuePerAttributeMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PushNormalizedValuesPerAttribute(Z_Param_Out_ValuePerAttributeMap);
		P_NATIVE_END;
	}
	void ADMXFixtureActorBase::StaticRegisterNativesADMXFixtureActorBase()
	{
		UClass* Class = ADMXFixtureActorBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InterpolateDMXComponents", &ADMXFixtureActorBase::execInterpolateDMXComponents },
			{ "PushNormalizedValuesPerAttribute", &ADMXFixtureActorBase::execPushNormalizedValuesPerAttribute },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADMXFixtureActorBase_InterpolateDMXComponents_Statics
	{
		struct DMXFixtureActorBase_eventInterpolateDMXComponents_Parms
		{
			float DeltaSeconds;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADMXFixtureActorBase_InterpolateDMXComponents_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXFixtureActorBase_eventInterpolateDMXComponents_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADMXFixtureActorBase_InterpolateDMXComponents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADMXFixtureActorBase_InterpolateDMXComponents_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADMXFixtureActorBase_InterpolateDMXComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX Fixture" },
		{ "ModuleRelativePath", "Public/DMXFixtureActorBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADMXFixtureActorBase_InterpolateDMXComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADMXFixtureActorBase, nullptr, "InterpolateDMXComponents", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADMXFixtureActorBase_InterpolateDMXComponents_Statics::DMXFixtureActorBase_eventInterpolateDMXComponents_Parms), Z_Construct_UFunction_ADMXFixtureActorBase_InterpolateDMXComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADMXFixtureActorBase_InterpolateDMXComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADMXFixtureActorBase_InterpolateDMXComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADMXFixtureActorBase_InterpolateDMXComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADMXFixtureActorBase_InterpolateDMXComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADMXFixtureActorBase_InterpolateDMXComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADMXFixtureActorBase_PushNormalizedValuesPerAttribute_Statics
	{
		struct DMXFixtureActorBase_eventPushNormalizedValuesPerAttribute_Parms
		{
			FDMXNormalizedAttributeValueMap ValuePerAttributeMap;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValuePerAttributeMap_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ValuePerAttributeMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADMXFixtureActorBase_PushNormalizedValuesPerAttribute_Statics::NewProp_ValuePerAttributeMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADMXFixtureActorBase_PushNormalizedValuesPerAttribute_Statics::NewProp_ValuePerAttributeMap = { "ValuePerAttributeMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXFixtureActorBase_eventPushNormalizedValuesPerAttribute_Parms, ValuePerAttributeMap), Z_Construct_UScriptStruct_FDMXNormalizedAttributeValueMap, METADATA_PARAMS(Z_Construct_UFunction_ADMXFixtureActorBase_PushNormalizedValuesPerAttribute_Statics::NewProp_ValuePerAttributeMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADMXFixtureActorBase_PushNormalizedValuesPerAttribute_Statics::NewProp_ValuePerAttributeMap_MetaData)) }; // 2558012157
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADMXFixtureActorBase_PushNormalizedValuesPerAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADMXFixtureActorBase_PushNormalizedValuesPerAttribute_Statics::NewProp_ValuePerAttributeMap,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADMXFixtureActorBase_PushNormalizedValuesPerAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX Fixture" },
		{ "Comment", "/** Pushes DMX Values to the Fixture. Expects normalized values in the range of 0.0f - 1.0f */" },
		{ "ModuleRelativePath", "Public/DMXFixtureActorBase.h" },
		{ "ToolTip", "Pushes DMX Values to the Fixture. Expects normalized values in the range of 0.0f - 1.0f" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADMXFixtureActorBase_PushNormalizedValuesPerAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADMXFixtureActorBase, nullptr, "PushNormalizedValuesPerAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADMXFixtureActorBase_PushNormalizedValuesPerAttribute_Statics::DMXFixtureActorBase_eventPushNormalizedValuesPerAttribute_Parms), Z_Construct_UFunction_ADMXFixtureActorBase_PushNormalizedValuesPerAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADMXFixtureActorBase_PushNormalizedValuesPerAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADMXFixtureActorBase_PushNormalizedValuesPerAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADMXFixtureActorBase_PushNormalizedValuesPerAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADMXFixtureActorBase_PushNormalizedValuesPerAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADMXFixtureActorBase_PushNormalizedValuesPerAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADMXFixtureActorBase);
	UClass* Z_Construct_UClass_ADMXFixtureActorBase_NoRegister()
	{
		return ADMXFixtureActorBase::StaticClass();
	}
	struct Z_Construct_UClass_ADMXFixtureActorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DMX_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DMX;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADMXFixtureActorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXFixtures,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADMXFixtureActorBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADMXFixtureActorBase_InterpolateDMXComponents, "InterpolateDMXComponents" }, // 2477021105
		{ &Z_Construct_UFunction_ADMXFixtureActorBase_PushNormalizedValuesPerAttribute, "PushNormalizedValuesPerAttribute" }, // 3675935838
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADMXFixtureActorBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DMXFixtureActorBase.h" },
		{ "ModuleRelativePath", "Public/DMXFixtureActorBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADMXFixtureActorBase_Statics::NewProp_DMX_MetaData[] = {
		{ "Category", "DMX Light Fixture" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DMXFixtureActorBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADMXFixtureActorBase_Statics::NewProp_DMX = { "DMX", nullptr, (EPropertyFlags)0x00140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADMXFixtureActorBase, DMX), Z_Construct_UClass_UDMXComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADMXFixtureActorBase_Statics::NewProp_DMX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADMXFixtureActorBase_Statics::NewProp_DMX_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADMXFixtureActorBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMXFixtureActorBase_Statics::NewProp_DMX,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADMXFixtureActorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADMXFixtureActorBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADMXFixtureActorBase_Statics::ClassParams = {
		&ADMXFixtureActorBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADMXFixtureActorBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADMXFixtureActorBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADMXFixtureActorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADMXFixtureActorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADMXFixtureActorBase()
	{
		if (!Z_Registration_Info_UClass_ADMXFixtureActorBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADMXFixtureActorBase.OuterSingleton, Z_Construct_UClass_ADMXFixtureActorBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADMXFixtureActorBase.OuterSingleton;
	}
	template<> DMXFIXTURES_API UClass* StaticClass<ADMXFixtureActorBase>()
	{
		return ADMXFixtureActorBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADMXFixtureActorBase);
	ADMXFixtureActorBase::~ADMXFixtureActorBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureActorBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureActorBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADMXFixtureActorBase, ADMXFixtureActorBase::StaticClass, TEXT("ADMXFixtureActorBase"), &Z_Registration_Info_UClass_ADMXFixtureActorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADMXFixtureActorBase), 3223867906U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureActorBase_h_116911812(TEXT("/Script/DMXFixtures"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureActorBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureActorBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
