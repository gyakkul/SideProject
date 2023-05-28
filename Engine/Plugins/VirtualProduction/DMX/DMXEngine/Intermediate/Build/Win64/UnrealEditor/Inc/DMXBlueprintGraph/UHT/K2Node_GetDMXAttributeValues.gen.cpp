// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_GetDMXAttributeValues.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_GetDMXAttributeValues() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_EditablePinBase();
	DMXBLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_GetDMXAttributeValues();
	DMXBLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_GetDMXAttributeValues_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXBlueprintGraph();
// End Cross Module References
	void UK2Node_GetDMXAttributeValues::StaticRegisterNativesUK2Node_GetDMXAttributeValues()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_GetDMXAttributeValues);
	UClass* Z_Construct_UClass_UK2Node_GetDMXAttributeValues_NoRegister()
	{
		return UK2Node_GetDMXAttributeValues::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_GetDMXAttributeValues_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsExposed_MetaData[];
#endif
		static void NewProp_bIsExposed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsExposed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_GetDMXAttributeValues_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_EditablePinBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXBlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_GetDMXAttributeValues_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_GetDMXAttributeValues.h" },
		{ "ModuleRelativePath", "Public/K2Node_GetDMXAttributeValues.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_GetDMXAttributeValues_Statics::NewProp_bIsExposed_MetaData[] = {
		{ "ModuleRelativePath", "Public/K2Node_GetDMXAttributeValues.h" },
	};
#endif
	void Z_Construct_UClass_UK2Node_GetDMXAttributeValues_Statics::NewProp_bIsExposed_SetBit(void* Obj)
	{
		((UK2Node_GetDMXAttributeValues*)Obj)->bIsExposed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_GetDMXAttributeValues_Statics::NewProp_bIsExposed = { "bIsExposed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UK2Node_GetDMXAttributeValues), &Z_Construct_UClass_UK2Node_GetDMXAttributeValues_Statics::NewProp_bIsExposed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_GetDMXAttributeValues_Statics::NewProp_bIsExposed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetDMXAttributeValues_Statics::NewProp_bIsExposed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_GetDMXAttributeValues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_GetDMXAttributeValues_Statics::NewProp_bIsExposed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_GetDMXAttributeValues_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_GetDMXAttributeValues>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_GetDMXAttributeValues_Statics::ClassParams = {
		&UK2Node_GetDMXAttributeValues::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_GetDMXAttributeValues_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetDMXAttributeValues_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_GetDMXAttributeValues_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetDMXAttributeValues_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_GetDMXAttributeValues()
	{
		if (!Z_Registration_Info_UClass_UK2Node_GetDMXAttributeValues.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_GetDMXAttributeValues.OuterSingleton, Z_Construct_UClass_UK2Node_GetDMXAttributeValues_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_GetDMXAttributeValues.OuterSingleton;
	}
	template<> DMXBLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_GetDMXAttributeValues>()
	{
		return UK2Node_GetDMXAttributeValues::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_GetDMXAttributeValues);
	UK2Node_GetDMXAttributeValues::~UK2Node_GetDMXAttributeValues() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXBlueprintGraph_Public_K2Node_GetDMXAttributeValues_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXBlueprintGraph_Public_K2Node_GetDMXAttributeValues_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_GetDMXAttributeValues, UK2Node_GetDMXAttributeValues::StaticClass, TEXT("UK2Node_GetDMXAttributeValues"), &Z_Registration_Info_UClass_UK2Node_GetDMXAttributeValues, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_GetDMXAttributeValues), 2241596365U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXBlueprintGraph_Public_K2Node_GetDMXAttributeValues_h_3737907721(TEXT("/Script/DMXBlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXBlueprintGraph_Public_K2Node_GetDMXAttributeValues_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXBlueprintGraph_Public_K2Node_GetDMXAttributeValues_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
