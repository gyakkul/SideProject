// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blueprints/IPFMExporterBlueprintAPI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIPFMExporterBlueprintAPI() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	PFMEXPORTER_API UClass* Z_Construct_UClass_UPFMExporterBlueprintAPI();
	PFMEXPORTER_API UClass* Z_Construct_UClass_UPFMExporterBlueprintAPI_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PFMExporter();
// End Cross Module References
	DEFINE_FUNCTION(IPFMExporterBlueprintAPI::execExportPFM)
	{
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_SrcMesh);
		P_GET_OBJECT(USceneComponent,Z_Param_Origin);
		P_GET_PROPERTY(FIntProperty,Z_Param_Width);
		P_GET_PROPERTY(FIntProperty,Z_Param_Height);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ExportPFM(Z_Param_SrcMesh,Z_Param_Origin,Z_Param_Width,Z_Param_Height,Z_Param_FileName);
		P_NATIVE_END;
	}
	void UPFMExporterBlueprintAPI::StaticRegisterNativesUPFMExporterBlueprintAPI()
	{
		UClass* Class = UPFMExporterBlueprintAPI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExportPFM", &IPFMExporterBlueprintAPI::execExportPFM },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPFMExporterBlueprintAPI_ExportPFM_Statics
	{
		struct PFMExporterBlueprintAPI_eventExportPFM_Parms
		{
			UStaticMeshComponent* SrcMesh;
			USceneComponent* Origin;
			int32 Width;
			int32 Height;
			FString FileName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SrcMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SrcMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Origin;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Width;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPFMExporterBlueprintAPI_ExportPFM_Statics::NewProp_SrcMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPFMExporterBlueprintAPI_ExportPFM_Statics::NewProp_SrcMesh = { "SrcMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PFMExporterBlueprintAPI_eventExportPFM_Parms, SrcMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPFMExporterBlueprintAPI_ExportPFM_Statics::NewProp_SrcMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPFMExporterBlueprintAPI_ExportPFM_Statics::NewProp_SrcMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPFMExporterBlueprintAPI_ExportPFM_Statics::NewProp_Origin_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPFMExporterBlueprintAPI_ExportPFM_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PFMExporterBlueprintAPI_eventExportPFM_Parms, Origin), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPFMExporterBlueprintAPI_ExportPFM_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPFMExporterBlueprintAPI_ExportPFM_Statics::NewProp_Origin_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPFMExporterBlueprintAPI_ExportPFM_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PFMExporterBlueprintAPI_eventExportPFM_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPFMExporterBlueprintAPI_ExportPFM_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PFMExporterBlueprintAPI_eventExportPFM_Parms, Height), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPFMExporterBlueprintAPI_ExportPFM_Statics::NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPFMExporterBlueprintAPI_ExportPFM_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PFMExporterBlueprintAPI_eventExportPFM_Parms, FileName), METADATA_PARAMS(Z_Construct_UFunction_UPFMExporterBlueprintAPI_ExportPFM_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPFMExporterBlueprintAPI_ExportPFM_Statics::NewProp_FileName_MetaData)) };
	void Z_Construct_UFunction_UPFMExporterBlueprintAPI_ExportPFM_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PFMExporterBlueprintAPI_eventExportPFM_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPFMExporterBlueprintAPI_ExportPFM_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PFMExporterBlueprintAPI_eventExportPFM_Parms), &Z_Construct_UFunction_UPFMExporterBlueprintAPI_ExportPFM_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPFMExporterBlueprintAPI_ExportPFM_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPFMExporterBlueprintAPI_ExportPFM_Statics::NewProp_SrcMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPFMExporterBlueprintAPI_ExportPFM_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPFMExporterBlueprintAPI_ExportPFM_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPFMExporterBlueprintAPI_ExportPFM_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPFMExporterBlueprintAPI_ExportPFM_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPFMExporterBlueprintAPI_ExportPFM_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPFMExporterBlueprintAPI_ExportPFM_Statics::Function_MetaDataParams[] = {
		{ "Category", "PFMExporter" },
		{ "Comment", "/**\n\x09* Generate PFM file from static mesh.\n\x09* The UV channel must be defined, assigned range 0..1 used as screen surface.\n\x09* Origin assigned by function arg, or by default used mesh parent.\n\x09*\n\x09* @param SrcMesh - Static mesh with assigned UV channel, used as export source of PFM file\n\x09* @param Origin - (Optional) Custom cave origin node, if not defined, used SrcMesh parent\n\x09* @param Width - Output PFM mesh texture width\n\x09* @param Height - Output PFM mesh texture height\n\x09* @param FileName - Output PFM file name\n\x09*\n\x09* @return true, if success\n\x09*/" },
		{ "DisplayName", "Export Static Mesh to PFM file" },
		{ "ModuleRelativePath", "Public/Blueprints/IPFMExporterBlueprintAPI.h" },
		{ "ToolTip", "Generate PFM file from static mesh.\nThe UV channel must be defined, assigned range 0..1 used as screen surface.\nOrigin assigned by function arg, or by default used mesh parent.\n\n@param SrcMesh - Static mesh with assigned UV channel, used as export source of PFM file\n@param Origin - (Optional) Custom cave origin node, if not defined, used SrcMesh parent\n@param Width - Output PFM mesh texture width\n@param Height - Output PFM mesh texture height\n@param FileName - Output PFM file name\n\n@return true, if success" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPFMExporterBlueprintAPI_ExportPFM_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPFMExporterBlueprintAPI, nullptr, "ExportPFM", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPFMExporterBlueprintAPI_ExportPFM_Statics::PFMExporterBlueprintAPI_eventExportPFM_Parms), Z_Construct_UFunction_UPFMExporterBlueprintAPI_ExportPFM_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPFMExporterBlueprintAPI_ExportPFM_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPFMExporterBlueprintAPI_ExportPFM_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPFMExporterBlueprintAPI_ExportPFM_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPFMExporterBlueprintAPI_ExportPFM()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPFMExporterBlueprintAPI_ExportPFM_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPFMExporterBlueprintAPI);
	UClass* Z_Construct_UClass_UPFMExporterBlueprintAPI_NoRegister()
	{
		return UPFMExporterBlueprintAPI::StaticClass();
	}
	struct Z_Construct_UClass_UPFMExporterBlueprintAPI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPFMExporterBlueprintAPI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_PFMExporter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPFMExporterBlueprintAPI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPFMExporterBlueprintAPI_ExportPFM, "ExportPFM" }, // 195009359
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPFMExporterBlueprintAPI_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Blueprints/IPFMExporterBlueprintAPI.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPFMExporterBlueprintAPI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPFMExporterBlueprintAPI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPFMExporterBlueprintAPI_Statics::ClassParams = {
		&UPFMExporterBlueprintAPI::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPFMExporterBlueprintAPI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPFMExporterBlueprintAPI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPFMExporterBlueprintAPI()
	{
		if (!Z_Registration_Info_UClass_UPFMExporterBlueprintAPI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPFMExporterBlueprintAPI.OuterSingleton, Z_Construct_UClass_UPFMExporterBlueprintAPI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPFMExporterBlueprintAPI.OuterSingleton;
	}
	template<> PFMEXPORTER_API UClass* StaticClass<UPFMExporterBlueprintAPI>()
	{
		return UPFMExporterBlueprintAPI::StaticClass();
	}
	UPFMExporterBlueprintAPI::UPFMExporterBlueprintAPI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPFMExporterBlueprintAPI);
	UPFMExporterBlueprintAPI::~UPFMExporterBlueprintAPI() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Public_Blueprints_IPFMExporterBlueprintAPI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Public_Blueprints_IPFMExporterBlueprintAPI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPFMExporterBlueprintAPI, UPFMExporterBlueprintAPI::StaticClass, TEXT("UPFMExporterBlueprintAPI"), &Z_Registration_Info_UClass_UPFMExporterBlueprintAPI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPFMExporterBlueprintAPI), 974623403U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Public_Blueprints_IPFMExporterBlueprintAPI_h_408589131(TEXT("/Script/PFMExporter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Public_Blueprints_IPFMExporterBlueprintAPI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Public_Blueprints_IPFMExporterBlueprintAPI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
