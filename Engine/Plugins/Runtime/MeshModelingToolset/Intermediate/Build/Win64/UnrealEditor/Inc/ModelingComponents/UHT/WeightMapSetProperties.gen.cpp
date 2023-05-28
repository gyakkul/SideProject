// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PropertySets/WeightMapSetProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeightMapSetProperties() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UWeightMapSetProperties();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UWeightMapSetProperties_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References
	DEFINE_FUNCTION(UWeightMapSetProperties::execGetWeightMapsFunc)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetWeightMapsFunc();
		P_NATIVE_END;
	}
	void UWeightMapSetProperties::StaticRegisterNativesUWeightMapSetProperties()
	{
		UClass* Class = UWeightMapSetProperties::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetWeightMapsFunc", &UWeightMapSetProperties::execGetWeightMapsFunc },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWeightMapSetProperties_GetWeightMapsFunc_Statics
	{
		struct WeightMapSetProperties_eventGetWeightMapsFunc_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWeightMapSetProperties_GetWeightMapsFunc_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWeightMapSetProperties_GetWeightMapsFunc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WeightMapSetProperties_eventGetWeightMapsFunc_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeightMapSetProperties_GetWeightMapsFunc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeightMapSetProperties_GetWeightMapsFunc_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeightMapSetProperties_GetWeightMapsFunc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeightMapSetProperties_GetWeightMapsFunc_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// this function is called provide set of available weight maps\n" },
		{ "ModuleRelativePath", "Public/PropertySets/WeightMapSetProperties.h" },
		{ "ToolTip", "this function is called provide set of available weight maps" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeightMapSetProperties_GetWeightMapsFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeightMapSetProperties, nullptr, "GetWeightMapsFunc", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWeightMapSetProperties_GetWeightMapsFunc_Statics::WeightMapSetProperties_eventGetWeightMapsFunc_Parms), Z_Construct_UFunction_UWeightMapSetProperties_GetWeightMapsFunc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeightMapSetProperties_GetWeightMapsFunc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeightMapSetProperties_GetWeightMapsFunc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeightMapSetProperties_GetWeightMapsFunc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeightMapSetProperties_GetWeightMapsFunc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeightMapSetProperties_GetWeightMapsFunc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeightMapSetProperties);
	UClass* Z_Construct_UClass_UWeightMapSetProperties_NoRegister()
	{
		return UWeightMapSetProperties::StaticClass();
	}
	struct Z_Construct_UClass_UWeightMapSetProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightMap_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_WeightMap;
		static const UECodeGen_Private::FStrPropertyParams NewProp_WeightMapsList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightMapsList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WeightMapsList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInvertWeightMap_MetaData[];
#endif
		static void NewProp_bInvertWeightMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertWeightMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeightMapSetProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWeightMapSetProperties_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeightMapSetProperties_GetWeightMapsFunc, "GetWeightMapsFunc" }, // 1967970803
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeightMapSetProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Basic Tool Property Set that allows for selecting from a list of FNames (that we assume are Weight Maps)\n */" },
		{ "IncludePath", "PropertySets/WeightMapSetProperties.h" },
		{ "ModuleRelativePath", "Public/PropertySets/WeightMapSetProperties.h" },
		{ "ToolTip", "Basic Tool Property Set that allows for selecting from a list of FNames (that we assume are Weight Maps)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeightMapSetProperties_Statics::NewProp_WeightMap_MetaData[] = {
		{ "Category", "WeightMap" },
		{ "Comment", "/** Select vertex weight map. If configured, the weight map value will be sampled to modulate displacement intensity. */" },
		{ "GetOptions", "GetWeightMapsFunc" },
		{ "ModuleRelativePath", "Public/PropertySets/WeightMapSetProperties.h" },
		{ "ToolTip", "Select vertex weight map. If configured, the weight map value will be sampled to modulate displacement intensity." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWeightMapSetProperties_Statics::NewProp_WeightMap = { "WeightMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWeightMapSetProperties, WeightMap), METADATA_PARAMS(Z_Construct_UClass_UWeightMapSetProperties_Statics::NewProp_WeightMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeightMapSetProperties_Statics::NewProp_WeightMap_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWeightMapSetProperties_Statics::NewProp_WeightMapsList_Inner = { "WeightMapsList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeightMapSetProperties_Statics::NewProp_WeightMapsList_MetaData[] = {
		{ "Comment", "// internal list used to implement above\n" },
		{ "ModuleRelativePath", "Public/PropertySets/WeightMapSetProperties.h" },
		{ "ToolTip", "internal list used to implement above" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWeightMapSetProperties_Statics::NewProp_WeightMapsList = { "WeightMapsList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWeightMapSetProperties, WeightMapsList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWeightMapSetProperties_Statics::NewProp_WeightMapsList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeightMapSetProperties_Statics::NewProp_WeightMapsList_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeightMapSetProperties_Statics::NewProp_bInvertWeightMap_MetaData[] = {
		{ "Category", "WeightMap" },
		{ "ModuleRelativePath", "Public/PropertySets/WeightMapSetProperties.h" },
	};
#endif
	void Z_Construct_UClass_UWeightMapSetProperties_Statics::NewProp_bInvertWeightMap_SetBit(void* Obj)
	{
		((UWeightMapSetProperties*)Obj)->bInvertWeightMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWeightMapSetProperties_Statics::NewProp_bInvertWeightMap = { "bInvertWeightMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWeightMapSetProperties), &Z_Construct_UClass_UWeightMapSetProperties_Statics::NewProp_bInvertWeightMap_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWeightMapSetProperties_Statics::NewProp_bInvertWeightMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeightMapSetProperties_Statics::NewProp_bInvertWeightMap_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeightMapSetProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeightMapSetProperties_Statics::NewProp_WeightMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeightMapSetProperties_Statics::NewProp_WeightMapsList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeightMapSetProperties_Statics::NewProp_WeightMapsList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeightMapSetProperties_Statics::NewProp_bInvertWeightMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWeightMapSetProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeightMapSetProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeightMapSetProperties_Statics::ClassParams = {
		&UWeightMapSetProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWeightMapSetProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWeightMapSetProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UWeightMapSetProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWeightMapSetProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWeightMapSetProperties()
	{
		if (!Z_Registration_Info_UClass_UWeightMapSetProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeightMapSetProperties.OuterSingleton, Z_Construct_UClass_UWeightMapSetProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWeightMapSetProperties.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<UWeightMapSetProperties>()
	{
		return UWeightMapSetProperties::StaticClass();
	}
	UWeightMapSetProperties::UWeightMapSetProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeightMapSetProperties);
	UWeightMapSetProperties::~UWeightMapSetProperties() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_WeightMapSetProperties_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_WeightMapSetProperties_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWeightMapSetProperties, UWeightMapSetProperties::StaticClass, TEXT("UWeightMapSetProperties"), &Z_Registration_Info_UClass_UWeightMapSetProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeightMapSetProperties), 641499276U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_WeightMapSetProperties_h_4156781499(TEXT("/Script/ModelingComponents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_WeightMapSetProperties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_WeightMapSetProperties_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
