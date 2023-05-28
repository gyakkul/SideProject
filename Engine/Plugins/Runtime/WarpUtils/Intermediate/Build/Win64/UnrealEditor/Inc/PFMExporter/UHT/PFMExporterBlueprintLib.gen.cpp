// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blueprints/PFMExporterBlueprintLib.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePFMExporterBlueprintLib() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	PFMEXPORTER_API UClass* Z_Construct_UClass_UPFMExporterBlueprintAPI_NoRegister();
	PFMEXPORTER_API UClass* Z_Construct_UClass_UPFMExporterBlueprintLib();
	PFMEXPORTER_API UClass* Z_Construct_UClass_UPFMExporterBlueprintLib_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PFMExporter();
// End Cross Module References
	DEFINE_FUNCTION(UPFMExporterBlueprintLib::execGetAPI)
	{
		P_GET_TINTERFACE_REF(IPFMExporterBlueprintAPI,Z_Param_Out_OutAPI);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPFMExporterBlueprintLib::GetAPI(Z_Param_Out_OutAPI);
		P_NATIVE_END;
	}
	void UPFMExporterBlueprintLib::StaticRegisterNativesUPFMExporterBlueprintLib()
	{
		UClass* Class = UPFMExporterBlueprintLib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAPI", &UPFMExporterBlueprintLib::execGetAPI },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPFMExporterBlueprintLib_GetAPI_Statics
	{
		struct PFMExporterBlueprintLib_eventGetAPI_Parms
		{
			TScriptInterface<IPFMExporterBlueprintAPI> OutAPI;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_OutAPI;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UPFMExporterBlueprintLib_GetAPI_Statics::NewProp_OutAPI = { "OutAPI", nullptr, (EPropertyFlags)0x0014000000000180, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PFMExporterBlueprintLib_eventGetAPI_Parms, OutAPI), Z_Construct_UClass_UPFMExporterBlueprintAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPFMExporterBlueprintLib_GetAPI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPFMExporterBlueprintLib_GetAPI_Statics::NewProp_OutAPI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPFMExporterBlueprintLib_GetAPI_Statics::Function_MetaDataParams[] = {
		{ "Category", "nDisplay" },
		{ "Comment", "/** Return Display Cluster API interface. */" },
		{ "DisplayName", "PFMExporter Module API" },
		{ "ModuleRelativePath", "Public/Blueprints/PFMExporterBlueprintLib.h" },
		{ "ToolTip", "Return Display Cluster API interface." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPFMExporterBlueprintLib_GetAPI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPFMExporterBlueprintLib, nullptr, "GetAPI", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPFMExporterBlueprintLib_GetAPI_Statics::PFMExporterBlueprintLib_eventGetAPI_Parms), Z_Construct_UFunction_UPFMExporterBlueprintLib_GetAPI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPFMExporterBlueprintLib_GetAPI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPFMExporterBlueprintLib_GetAPI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPFMExporterBlueprintLib_GetAPI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPFMExporterBlueprintLib_GetAPI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPFMExporterBlueprintLib_GetAPI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPFMExporterBlueprintLib);
	UClass* Z_Construct_UClass_UPFMExporterBlueprintLib_NoRegister()
	{
		return UPFMExporterBlueprintLib::StaticClass();
	}
	struct Z_Construct_UClass_UPFMExporterBlueprintLib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPFMExporterBlueprintLib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PFMExporter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPFMExporterBlueprintLib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPFMExporterBlueprintLib_GetAPI, "GetAPI" }, // 2318612249
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPFMExporterBlueprintLib_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Blueprint API function library\n */" },
		{ "IncludePath", "Blueprints/PFMExporterBlueprintLib.h" },
		{ "ModuleRelativePath", "Public/Blueprints/PFMExporterBlueprintLib.h" },
		{ "ToolTip", "Blueprint API function library" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPFMExporterBlueprintLib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPFMExporterBlueprintLib>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPFMExporterBlueprintLib_Statics::ClassParams = {
		&UPFMExporterBlueprintLib::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPFMExporterBlueprintLib_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPFMExporterBlueprintLib_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPFMExporterBlueprintLib()
	{
		if (!Z_Registration_Info_UClass_UPFMExporterBlueprintLib.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPFMExporterBlueprintLib.OuterSingleton, Z_Construct_UClass_UPFMExporterBlueprintLib_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPFMExporterBlueprintLib.OuterSingleton;
	}
	template<> PFMEXPORTER_API UClass* StaticClass<UPFMExporterBlueprintLib>()
	{
		return UPFMExporterBlueprintLib::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPFMExporterBlueprintLib);
	UPFMExporterBlueprintLib::~UPFMExporterBlueprintLib() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Public_Blueprints_PFMExporterBlueprintLib_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Public_Blueprints_PFMExporterBlueprintLib_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPFMExporterBlueprintLib, UPFMExporterBlueprintLib::StaticClass, TEXT("UPFMExporterBlueprintLib"), &Z_Registration_Info_UClass_UPFMExporterBlueprintLib, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPFMExporterBlueprintLib), 1568012285U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Public_Blueprints_PFMExporterBlueprintLib_h_2788335646(TEXT("/Script/PFMExporter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Public_Blueprints_PFMExporterBlueprintLib_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Public_Blueprints_PFMExporterBlueprintLib_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
