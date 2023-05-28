// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StaticMeshExporterUSD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticMeshExporterUSD() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UExporter();
	UPackage* Z_Construct_UPackage__Script_USDExporter();
	USDEXPORTER_API UClass* Z_Construct_UClass_UStaticMeshExporterUsd();
	USDEXPORTER_API UClass* Z_Construct_UClass_UStaticMeshExporterUsd_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UStaticMeshExporterUsd::execIsUsdAvailable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UStaticMeshExporterUsd::IsUsdAvailable();
		P_NATIVE_END;
	}
	void UStaticMeshExporterUsd::StaticRegisterNativesUStaticMeshExporterUsd()
	{
		UClass* Class = UStaticMeshExporterUsd::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsUsdAvailable", &UStaticMeshExporterUsd::execIsUsdAvailable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStaticMeshExporterUsd_IsUsdAvailable_Statics
	{
		struct StaticMeshExporterUsd_eventIsUsdAvailable_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStaticMeshExporterUsd_IsUsdAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StaticMeshExporterUsd_eventIsUsdAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshExporterUsd_IsUsdAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StaticMeshExporterUsd_eventIsUsdAvailable_Parms), &Z_Construct_UFunction_UStaticMeshExporterUsd_IsUsdAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshExporterUsd_IsUsdAvailable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshExporterUsd_IsUsdAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshExporterUsd_IsUsdAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "USD" },
		{ "ModuleRelativePath", "Public/StaticMeshExporterUSD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshExporterUsd_IsUsdAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshExporterUsd, nullptr, "IsUsdAvailable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshExporterUsd_IsUsdAvailable_Statics::StaticMeshExporterUsd_eventIsUsdAvailable_Parms), Z_Construct_UFunction_UStaticMeshExporterUsd_IsUsdAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshExporterUsd_IsUsdAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshExporterUsd_IsUsdAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshExporterUsd_IsUsdAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshExporterUsd_IsUsdAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshExporterUsd_IsUsdAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStaticMeshExporterUsd);
	UClass* Z_Construct_UClass_UStaticMeshExporterUsd_NoRegister()
	{
		return UStaticMeshExporterUsd::StaticClass();
	}
	struct Z_Construct_UClass_UStaticMeshExporterUsd_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStaticMeshExporterUsd_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UExporter,
		(UObject* (*)())Z_Construct_UPackage__Script_USDExporter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStaticMeshExporterUsd_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStaticMeshExporterUsd_IsUsdAvailable, "IsUsdAvailable" }, // 76259956
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshExporterUsd_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StaticMeshExporterUSD.h" },
		{ "ModuleRelativePath", "Public/StaticMeshExporterUSD.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStaticMeshExporterUsd_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStaticMeshExporterUsd>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStaticMeshExporterUsd_Statics::ClassParams = {
		&UStaticMeshExporterUsd::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UStaticMeshExporterUsd_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshExporterUsd_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStaticMeshExporterUsd()
	{
		if (!Z_Registration_Info_UClass_UStaticMeshExporterUsd.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStaticMeshExporterUsd.OuterSingleton, Z_Construct_UClass_UStaticMeshExporterUsd_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStaticMeshExporterUsd.OuterSingleton;
	}
	template<> USDEXPORTER_API UClass* StaticClass<UStaticMeshExporterUsd>()
	{
		return UStaticMeshExporterUsd::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStaticMeshExporterUsd);
	UStaticMeshExporterUsd::~UStaticMeshExporterUsd() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_StaticMeshExporterUSD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_StaticMeshExporterUSD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStaticMeshExporterUsd, UStaticMeshExporterUsd::StaticClass, TEXT("UStaticMeshExporterUsd"), &Z_Registration_Info_UClass_UStaticMeshExporterUsd, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStaticMeshExporterUsd), 2990230958U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_StaticMeshExporterUSD_h_140231920(TEXT("/Script/USDExporter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_StaticMeshExporterUSD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_StaticMeshExporterUSD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
