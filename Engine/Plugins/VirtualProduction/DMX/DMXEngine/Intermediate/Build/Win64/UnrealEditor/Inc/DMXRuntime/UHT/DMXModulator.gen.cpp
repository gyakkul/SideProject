// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modulators/DMXModulator.h"
#include "DMXAttribute.h"
#include "DMXTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXModulator() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DMXPROTOCOL_API UScriptStruct* Z_Construct_UScriptStruct_FDMXAttributeName();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXModulator();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXModulator_NoRegister();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXNormalizedAttributeValueMap();
	UPackage* Z_Construct_UPackage__Script_DMXRuntime();
// End Cross Module References
	DEFINE_FUNCTION(UDMXModulator::execModulateMatrix)
	{
		P_GET_OBJECT(UDMXEntityFixturePatch,Z_Param_FixturePatch);
		P_GET_TARRAY_REF(FDMXNormalizedAttributeValueMap,Z_Param_Out_InNormalizedMatrixAttributeValues);
		P_GET_TARRAY_REF(FDMXNormalizedAttributeValueMap,Z_Param_Out_OutNormalizedMatrixAttributeValues);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ModulateMatrix_Implementation(Z_Param_FixturePatch,Z_Param_Out_InNormalizedMatrixAttributeValues,Z_Param_Out_OutNormalizedMatrixAttributeValues);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXModulator::execModulate)
	{
		P_GET_OBJECT(UDMXEntityFixturePatch,Z_Param_FixturePatch);
		P_GET_TMAP_REF(FDMXAttributeName,float,Z_Param_Out_InNormalizedAttributeValues);
		P_GET_TMAP_REF(FDMXAttributeName,float,Z_Param_Out_OutNormalizedAttributeValues);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Modulate_Implementation(Z_Param_FixturePatch,Z_Param_Out_InNormalizedAttributeValues,Z_Param_Out_OutNormalizedAttributeValues);
		P_NATIVE_END;
	}
	struct DMXModulator_eventModulate_Parms
	{
		UDMXEntityFixturePatch* FixturePatch;
		TMap<FDMXAttributeName,float> InNormalizedAttributeValues;
		TMap<FDMXAttributeName,float> OutNormalizedAttributeValues;
	};
	struct DMXModulator_eventModulateMatrix_Parms
	{
		UDMXEntityFixturePatch* FixturePatch;
		TArray<FDMXNormalizedAttributeValueMap> InNormalizedMatrixAttributeValues;
		TArray<FDMXNormalizedAttributeValueMap> OutNormalizedMatrixAttributeValues;
	};
	static FName NAME_UDMXModulator_Modulate = FName(TEXT("Modulate"));
	void UDMXModulator::Modulate(UDMXEntityFixturePatch* FixturePatch, TMap<FDMXAttributeName,float> const& InNormalizedAttributeValues, TMap<FDMXAttributeName,float>& OutNormalizedAttributeValues)
	{
		DMXModulator_eventModulate_Parms Parms;
		Parms.FixturePatch=FixturePatch;
		Parms.InNormalizedAttributeValues=InNormalizedAttributeValues;
		Parms.OutNormalizedAttributeValues=OutNormalizedAttributeValues;
		ProcessEvent(FindFunctionChecked(NAME_UDMXModulator_Modulate),&Parms);
		OutNormalizedAttributeValues=Parms.OutNormalizedAttributeValues;
	}
	static FName NAME_UDMXModulator_ModulateMatrix = FName(TEXT("ModulateMatrix"));
	void UDMXModulator::ModulateMatrix(UDMXEntityFixturePatch* FixturePatch, TArray<FDMXNormalizedAttributeValueMap> const& InNormalizedMatrixAttributeValues, TArray<FDMXNormalizedAttributeValueMap>& OutNormalizedMatrixAttributeValues)
	{
		DMXModulator_eventModulateMatrix_Parms Parms;
		Parms.FixturePatch=FixturePatch;
		Parms.InNormalizedMatrixAttributeValues=InNormalizedMatrixAttributeValues;
		Parms.OutNormalizedMatrixAttributeValues=OutNormalizedMatrixAttributeValues;
		ProcessEvent(FindFunctionChecked(NAME_UDMXModulator_ModulateMatrix),&Parms);
		OutNormalizedMatrixAttributeValues=Parms.OutNormalizedMatrixAttributeValues;
	}
	void UDMXModulator::StaticRegisterNativesUDMXModulator()
	{
		UClass* Class = UDMXModulator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Modulate", &UDMXModulator::execModulate },
			{ "ModulateMatrix", &UDMXModulator::execModulateMatrix },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDMXModulator_Modulate_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FixturePatch;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InNormalizedAttributeValues_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InNormalizedAttributeValues_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InNormalizedAttributeValues_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InNormalizedAttributeValues;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutNormalizedAttributeValues_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutNormalizedAttributeValues_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_OutNormalizedAttributeValues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXModulator_Modulate_Statics::NewProp_FixturePatch = { "FixturePatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXModulator_eventModulate_Parms, FixturePatch), Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDMXModulator_Modulate_Statics::NewProp_InNormalizedAttributeValues_ValueProp = { "InNormalizedAttributeValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXModulator_Modulate_Statics::NewProp_InNormalizedAttributeValues_Key_KeyProp = { "InNormalizedAttributeValues_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(nullptr, 0) }; // 2246266977
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXModulator_Modulate_Statics::NewProp_InNormalizedAttributeValues_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDMXModulator_Modulate_Statics::NewProp_InNormalizedAttributeValues = { "InNormalizedAttributeValues", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXModulator_eventModulate_Parms, InNormalizedAttributeValues), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDMXModulator_Modulate_Statics::NewProp_InNormalizedAttributeValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXModulator_Modulate_Statics::NewProp_InNormalizedAttributeValues_MetaData)) }; // 2246266977
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDMXModulator_Modulate_Statics::NewProp_OutNormalizedAttributeValues_ValueProp = { "OutNormalizedAttributeValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXModulator_Modulate_Statics::NewProp_OutNormalizedAttributeValues_Key_KeyProp = { "OutNormalizedAttributeValues_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDMXModulator_Modulate_Statics::NewProp_OutNormalizedAttributeValues = { "OutNormalizedAttributeValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXModulator_eventModulate_Parms, OutNormalizedAttributeValues), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXModulator_Modulate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXModulator_Modulate_Statics::NewProp_FixturePatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXModulator_Modulate_Statics::NewProp_InNormalizedAttributeValues_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXModulator_Modulate_Statics::NewProp_InNormalizedAttributeValues_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXModulator_Modulate_Statics::NewProp_InNormalizedAttributeValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXModulator_Modulate_Statics::NewProp_OutNormalizedAttributeValues_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXModulator_Modulate_Statics::NewProp_OutNormalizedAttributeValues_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXModulator_Modulate_Statics::NewProp_OutNormalizedAttributeValues,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXModulator_Modulate_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "ModuleRelativePath", "Public/Modulators/DMXModulator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXModulator_Modulate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXModulator, nullptr, "Modulate", nullptr, nullptr, sizeof(DMXModulator_eventModulate_Parms), Z_Construct_UFunction_UDMXModulator_Modulate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXModulator_Modulate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXModulator_Modulate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXModulator_Modulate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXModulator_Modulate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXModulator_Modulate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXModulator_ModulateMatrix_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FixturePatch;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InNormalizedMatrixAttributeValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InNormalizedMatrixAttributeValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InNormalizedMatrixAttributeValues;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutNormalizedMatrixAttributeValues_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutNormalizedMatrixAttributeValues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXModulator_ModulateMatrix_Statics::NewProp_FixturePatch = { "FixturePatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXModulator_eventModulateMatrix_Parms, FixturePatch), Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXModulator_ModulateMatrix_Statics::NewProp_InNormalizedMatrixAttributeValues_Inner = { "InNormalizedMatrixAttributeValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXNormalizedAttributeValueMap, METADATA_PARAMS(nullptr, 0) }; // 2558012157
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXModulator_ModulateMatrix_Statics::NewProp_InNormalizedMatrixAttributeValues_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDMXModulator_ModulateMatrix_Statics::NewProp_InNormalizedMatrixAttributeValues = { "InNormalizedMatrixAttributeValues", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXModulator_eventModulateMatrix_Parms, InNormalizedMatrixAttributeValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDMXModulator_ModulateMatrix_Statics::NewProp_InNormalizedMatrixAttributeValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXModulator_ModulateMatrix_Statics::NewProp_InNormalizedMatrixAttributeValues_MetaData)) }; // 2558012157
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXModulator_ModulateMatrix_Statics::NewProp_OutNormalizedMatrixAttributeValues_Inner = { "OutNormalizedMatrixAttributeValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXNormalizedAttributeValueMap, METADATA_PARAMS(nullptr, 0) }; // 2558012157
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDMXModulator_ModulateMatrix_Statics::NewProp_OutNormalizedMatrixAttributeValues = { "OutNormalizedMatrixAttributeValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXModulator_eventModulateMatrix_Parms, OutNormalizedMatrixAttributeValues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2558012157
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXModulator_ModulateMatrix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXModulator_ModulateMatrix_Statics::NewProp_FixturePatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXModulator_ModulateMatrix_Statics::NewProp_InNormalizedMatrixAttributeValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXModulator_ModulateMatrix_Statics::NewProp_InNormalizedMatrixAttributeValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXModulator_ModulateMatrix_Statics::NewProp_OutNormalizedMatrixAttributeValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXModulator_ModulateMatrix_Statics::NewProp_OutNormalizedMatrixAttributeValues,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXModulator_ModulateMatrix_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "ModuleRelativePath", "Public/Modulators/DMXModulator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXModulator_ModulateMatrix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXModulator, nullptr, "ModulateMatrix", nullptr, nullptr, sizeof(DMXModulator_eventModulateMatrix_Parms), Z_Construct_UFunction_UDMXModulator_ModulateMatrix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXModulator_ModulateMatrix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXModulator_ModulateMatrix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXModulator_ModulateMatrix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXModulator_ModulateMatrix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXModulator_ModulateMatrix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXModulator);
	UClass* Z_Construct_UClass_UDMXModulator_NoRegister()
	{
		return UDMXModulator::StaticClass();
	}
	struct Z_Construct_UClass_UDMXModulator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXModulator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDMXModulator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDMXModulator_Modulate, "Modulate" }, // 2781358434
		{ &Z_Construct_UFunction_UDMXModulator_ModulateMatrix, "ModulateMatrix" }, // 2727115884
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXModulator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * Base class for custom modulators. Override Modulate and ModulateMatrix functions in the blueprints to implement functionality.\n * Input maps hold all attribute values of the patch. Output Maps can be freely defined, but Attributes not present in the patch will be ignored.\n */" },
		{ "IncludePath", "Modulators/DMXModulator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Modulators/DMXModulator.h" },
		{ "ToolTip", "Base class for custom modulators. Override Modulate and ModulateMatrix functions in the blueprints to implement functionality.\nInput maps hold all attribute values of the patch. Output Maps can be freely defined, but Attributes not present in the patch will be ignored." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXModulator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXModulator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXModulator_Statics::ClassParams = {
		&UDMXModulator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXModulator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXModulator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXModulator()
	{
		if (!Z_Registration_Info_UClass_UDMXModulator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXModulator.OuterSingleton, Z_Construct_UClass_UDMXModulator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXModulator.OuterSingleton;
	}
	template<> DMXRUNTIME_API UClass* StaticClass<UDMXModulator>()
	{
		return UDMXModulator::StaticClass();
	}
	UDMXModulator::UDMXModulator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXModulator);
	UDMXModulator::~UDMXModulator() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Modulators_DMXModulator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Modulators_DMXModulator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXModulator, UDMXModulator::StaticClass, TEXT("UDMXModulator"), &Z_Registration_Info_UClass_UDMXModulator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXModulator), 1923944253U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Modulators_DMXModulator_h_1669105659(TEXT("/Script/DMXRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Modulators_DMXModulator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Modulators_DMXModulator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
