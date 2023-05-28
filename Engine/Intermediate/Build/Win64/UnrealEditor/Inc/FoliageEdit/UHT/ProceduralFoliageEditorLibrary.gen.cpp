// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralFoliageEditorLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralFoliageEditorLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	FOLIAGE_API UClass* Z_Construct_UClass_AProceduralFoliageVolume_NoRegister();
	FOLIAGE_API UClass* Z_Construct_UClass_UProceduralFoliageComponent_NoRegister();
	FOLIAGEEDIT_API UClass* Z_Construct_UClass_UProceduralFoliageEditorLibrary();
	FOLIAGEEDIT_API UClass* Z_Construct_UClass_UProceduralFoliageEditorLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FoliageEdit();
// End Cross Module References
	DEFINE_FUNCTION(UProceduralFoliageEditorLibrary::execClearProceduralFoliageComponents)
	{
		P_GET_TARRAY_REF(UProceduralFoliageComponent*,Z_Param_Out_ProceduralFoliageComponents);
		P_FINISH;
		P_NATIVE_BEGIN;
		UProceduralFoliageEditorLibrary::ClearProceduralFoliageComponents(Z_Param_Out_ProceduralFoliageComponents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProceduralFoliageEditorLibrary::execClearProceduralFoliageVolumes)
	{
		P_GET_TARRAY_REF(AProceduralFoliageVolume*,Z_Param_Out_ProceduralFoliageVolumes);
		P_FINISH;
		P_NATIVE_BEGIN;
		UProceduralFoliageEditorLibrary::ClearProceduralFoliageVolumes(Z_Param_Out_ProceduralFoliageVolumes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProceduralFoliageEditorLibrary::execResimulateProceduralFoliageComponents)
	{
		P_GET_TARRAY_REF(UProceduralFoliageComponent*,Z_Param_Out_ProceduralFoliageComponents);
		P_FINISH;
		P_NATIVE_BEGIN;
		UProceduralFoliageEditorLibrary::ResimulateProceduralFoliageComponents(Z_Param_Out_ProceduralFoliageComponents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProceduralFoliageEditorLibrary::execResimulateProceduralFoliageVolumes)
	{
		P_GET_TARRAY_REF(AProceduralFoliageVolume*,Z_Param_Out_ProceduralFoliageVolumes);
		P_FINISH;
		P_NATIVE_BEGIN;
		UProceduralFoliageEditorLibrary::ResimulateProceduralFoliageVolumes(Z_Param_Out_ProceduralFoliageVolumes);
		P_NATIVE_END;
	}
	void UProceduralFoliageEditorLibrary::StaticRegisterNativesUProceduralFoliageEditorLibrary()
	{
		UClass* Class = UProceduralFoliageEditorLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearProceduralFoliageComponents", &UProceduralFoliageEditorLibrary::execClearProceduralFoliageComponents },
			{ "ClearProceduralFoliageVolumes", &UProceduralFoliageEditorLibrary::execClearProceduralFoliageVolumes },
			{ "ResimulateProceduralFoliageComponents", &UProceduralFoliageEditorLibrary::execResimulateProceduralFoliageComponents },
			{ "ResimulateProceduralFoliageVolumes", &UProceduralFoliageEditorLibrary::execResimulateProceduralFoliageVolumes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ClearProceduralFoliageComponents_Statics
	{
		struct ProceduralFoliageEditorLibrary_eventClearProceduralFoliageComponents_Parms
		{
			TArray<UProceduralFoliageComponent*> ProceduralFoliageComponents;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProceduralFoliageComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralFoliageComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ProceduralFoliageComponents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ClearProceduralFoliageComponents_Statics::NewProp_ProceduralFoliageComponents_Inner = { "ProceduralFoliageComponents", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UProceduralFoliageComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ClearProceduralFoliageComponents_Statics::NewProp_ProceduralFoliageComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ClearProceduralFoliageComponents_Statics::NewProp_ProceduralFoliageComponents = { "ProceduralFoliageComponents", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProceduralFoliageEditorLibrary_eventClearProceduralFoliageComponents_Parms, ProceduralFoliageComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ClearProceduralFoliageComponents_Statics::NewProp_ProceduralFoliageComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ClearProceduralFoliageComponents_Statics::NewProp_ProceduralFoliageComponents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ClearProceduralFoliageComponents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ClearProceduralFoliageComponents_Statics::NewProp_ProceduralFoliageComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ClearProceduralFoliageComponents_Statics::NewProp_ProceduralFoliageComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ClearProceduralFoliageComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Foliage" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageEditorLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ClearProceduralFoliageComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralFoliageEditorLibrary, nullptr, "ClearProceduralFoliageComponents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ClearProceduralFoliageComponents_Statics::ProceduralFoliageEditorLibrary_eventClearProceduralFoliageComponents_Parms), Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ClearProceduralFoliageComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ClearProceduralFoliageComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ClearProceduralFoliageComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ClearProceduralFoliageComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ClearProceduralFoliageComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ClearProceduralFoliageComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ClearProceduralFoliageVolumes_Statics
	{
		struct ProceduralFoliageEditorLibrary_eventClearProceduralFoliageVolumes_Parms
		{
			TArray<AProceduralFoliageVolume*> ProceduralFoliageVolumes;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProceduralFoliageVolumes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralFoliageVolumes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ProceduralFoliageVolumes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ClearProceduralFoliageVolumes_Statics::NewProp_ProceduralFoliageVolumes_Inner = { "ProceduralFoliageVolumes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AProceduralFoliageVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ClearProceduralFoliageVolumes_Statics::NewProp_ProceduralFoliageVolumes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ClearProceduralFoliageVolumes_Statics::NewProp_ProceduralFoliageVolumes = { "ProceduralFoliageVolumes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProceduralFoliageEditorLibrary_eventClearProceduralFoliageVolumes_Parms, ProceduralFoliageVolumes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ClearProceduralFoliageVolumes_Statics::NewProp_ProceduralFoliageVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ClearProceduralFoliageVolumes_Statics::NewProp_ProceduralFoliageVolumes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ClearProceduralFoliageVolumes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ClearProceduralFoliageVolumes_Statics::NewProp_ProceduralFoliageVolumes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ClearProceduralFoliageVolumes_Statics::NewProp_ProceduralFoliageVolumes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ClearProceduralFoliageVolumes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Foliage" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageEditorLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ClearProceduralFoliageVolumes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralFoliageEditorLibrary, nullptr, "ClearProceduralFoliageVolumes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ClearProceduralFoliageVolumes_Statics::ProceduralFoliageEditorLibrary_eventClearProceduralFoliageVolumes_Parms), Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ClearProceduralFoliageVolumes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ClearProceduralFoliageVolumes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ClearProceduralFoliageVolumes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ClearProceduralFoliageVolumes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ClearProceduralFoliageVolumes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ClearProceduralFoliageVolumes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ResimulateProceduralFoliageComponents_Statics
	{
		struct ProceduralFoliageEditorLibrary_eventResimulateProceduralFoliageComponents_Parms
		{
			TArray<UProceduralFoliageComponent*> ProceduralFoliageComponents;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProceduralFoliageComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralFoliageComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ProceduralFoliageComponents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ResimulateProceduralFoliageComponents_Statics::NewProp_ProceduralFoliageComponents_Inner = { "ProceduralFoliageComponents", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UProceduralFoliageComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ResimulateProceduralFoliageComponents_Statics::NewProp_ProceduralFoliageComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ResimulateProceduralFoliageComponents_Statics::NewProp_ProceduralFoliageComponents = { "ProceduralFoliageComponents", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProceduralFoliageEditorLibrary_eventResimulateProceduralFoliageComponents_Parms, ProceduralFoliageComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ResimulateProceduralFoliageComponents_Statics::NewProp_ProceduralFoliageComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ResimulateProceduralFoliageComponents_Statics::NewProp_ProceduralFoliageComponents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ResimulateProceduralFoliageComponents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ResimulateProceduralFoliageComponents_Statics::NewProp_ProceduralFoliageComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ResimulateProceduralFoliageComponents_Statics::NewProp_ProceduralFoliageComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ResimulateProceduralFoliageComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Foliage" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageEditorLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ResimulateProceduralFoliageComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralFoliageEditorLibrary, nullptr, "ResimulateProceduralFoliageComponents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ResimulateProceduralFoliageComponents_Statics::ProceduralFoliageEditorLibrary_eventResimulateProceduralFoliageComponents_Parms), Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ResimulateProceduralFoliageComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ResimulateProceduralFoliageComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ResimulateProceduralFoliageComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ResimulateProceduralFoliageComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ResimulateProceduralFoliageComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ResimulateProceduralFoliageComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ResimulateProceduralFoliageVolumes_Statics
	{
		struct ProceduralFoliageEditorLibrary_eventResimulateProceduralFoliageVolumes_Parms
		{
			TArray<AProceduralFoliageVolume*> ProceduralFoliageVolumes;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProceduralFoliageVolumes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralFoliageVolumes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ProceduralFoliageVolumes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ResimulateProceduralFoliageVolumes_Statics::NewProp_ProceduralFoliageVolumes_Inner = { "ProceduralFoliageVolumes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AProceduralFoliageVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ResimulateProceduralFoliageVolumes_Statics::NewProp_ProceduralFoliageVolumes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ResimulateProceduralFoliageVolumes_Statics::NewProp_ProceduralFoliageVolumes = { "ProceduralFoliageVolumes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProceduralFoliageEditorLibrary_eventResimulateProceduralFoliageVolumes_Parms, ProceduralFoliageVolumes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ResimulateProceduralFoliageVolumes_Statics::NewProp_ProceduralFoliageVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ResimulateProceduralFoliageVolumes_Statics::NewProp_ProceduralFoliageVolumes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ResimulateProceduralFoliageVolumes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ResimulateProceduralFoliageVolumes_Statics::NewProp_ProceduralFoliageVolumes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ResimulateProceduralFoliageVolumes_Statics::NewProp_ProceduralFoliageVolumes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ResimulateProceduralFoliageVolumes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Foliage" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageEditorLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ResimulateProceduralFoliageVolumes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralFoliageEditorLibrary, nullptr, "ResimulateProceduralFoliageVolumes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ResimulateProceduralFoliageVolumes_Statics::ProceduralFoliageEditorLibrary_eventResimulateProceduralFoliageVolumes_Parms), Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ResimulateProceduralFoliageVolumes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ResimulateProceduralFoliageVolumes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ResimulateProceduralFoliageVolumes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ResimulateProceduralFoliageVolumes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ResimulateProceduralFoliageVolumes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ResimulateProceduralFoliageVolumes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProceduralFoliageEditorLibrary);
	UClass* Z_Construct_UClass_UProceduralFoliageEditorLibrary_NoRegister()
	{
		return UProceduralFoliageEditorLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UProceduralFoliageEditorLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProceduralFoliageEditorLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FoliageEdit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UProceduralFoliageEditorLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ClearProceduralFoliageComponents, "ClearProceduralFoliageComponents" }, // 2137692843
		{ &Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ClearProceduralFoliageVolumes, "ClearProceduralFoliageVolumes" }, // 3968537356
		{ &Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ResimulateProceduralFoliageComponents, "ResimulateProceduralFoliageComponents" }, // 1332006624
		{ &Z_Construct_UFunction_UProceduralFoliageEditorLibrary_ResimulateProceduralFoliageVolumes, "ResimulateProceduralFoliageVolumes" }, // 2696651534
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFoliageEditorLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProceduralFoliageEditorLibrary.h" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageEditorLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProceduralFoliageEditorLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProceduralFoliageEditorLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UProceduralFoliageEditorLibrary_Statics::ClassParams = {
		&UProceduralFoliageEditorLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UProceduralFoliageEditorLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageEditorLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProceduralFoliageEditorLibrary()
	{
		if (!Z_Registration_Info_UClass_UProceduralFoliageEditorLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProceduralFoliageEditorLibrary.OuterSingleton, Z_Construct_UClass_UProceduralFoliageEditorLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UProceduralFoliageEditorLibrary.OuterSingleton;
	}
	template<> FOLIAGEEDIT_API UClass* StaticClass<UProceduralFoliageEditorLibrary>()
	{
		return UProceduralFoliageEditorLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProceduralFoliageEditorLibrary);
	UProceduralFoliageEditorLibrary::~UProceduralFoliageEditorLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_FoliageEdit_Public_ProceduralFoliageEditorLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_FoliageEdit_Public_ProceduralFoliageEditorLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UProceduralFoliageEditorLibrary, UProceduralFoliageEditorLibrary::StaticClass, TEXT("UProceduralFoliageEditorLibrary"), &Z_Registration_Info_UClass_UProceduralFoliageEditorLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProceduralFoliageEditorLibrary), 1399013241U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_FoliageEdit_Public_ProceduralFoliageEditorLibrary_h_4016840565(TEXT("/Script/FoliageEdit"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_FoliageEdit_Public_ProceduralFoliageEditorLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_FoliageEdit_Public_ProceduralFoliageEditorLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
