// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UVTools/UVGenerationFlattenMapping.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUVGenerationFlattenMapping() {}
// Cross Module References
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UUVGenerationFlattenMapping();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UUVGenerationFlattenMapping_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DatasmithImporter();
// End Cross Module References
	DEFINE_FUNCTION(UUVGenerationFlattenMapping::execGenerateFlattenMappingUVs)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_InStaticMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_UVChannel);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AngleThreshold);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUVGenerationFlattenMapping::GenerateFlattenMappingUVs(Z_Param_InStaticMesh,Z_Param_UVChannel,Z_Param_AngleThreshold);
		P_NATIVE_END;
	}
	void UUVGenerationFlattenMapping::StaticRegisterNativesUUVGenerationFlattenMapping()
	{
		UClass* Class = UUVGenerationFlattenMapping::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateFlattenMappingUVs", &UUVGenerationFlattenMapping::execGenerateFlattenMappingUVs },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUVGenerationFlattenMapping_GenerateFlattenMappingUVs_Statics
	{
		struct UVGenerationFlattenMapping_eventGenerateFlattenMappingUVs_Parms
		{
			UStaticMesh* InStaticMesh;
			int32 UVChannel;
			float AngleThreshold;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InStaticMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_UVChannel;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUVGenerationFlattenMapping_GenerateFlattenMappingUVs_Statics::NewProp_InStaticMesh = { "InStaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVGenerationFlattenMapping_eventGenerateFlattenMappingUVs_Parms, InStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUVGenerationFlattenMapping_GenerateFlattenMappingUVs_Statics::NewProp_UVChannel = { "UVChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVGenerationFlattenMapping_eventGenerateFlattenMappingUVs_Parms, UVChannel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUVGenerationFlattenMapping_GenerateFlattenMappingUVs_Statics::NewProp_AngleThreshold = { "AngleThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVGenerationFlattenMapping_eventGenerateFlattenMappingUVs_Parms, AngleThreshold), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUVGenerationFlattenMapping_GenerateFlattenMappingUVs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUVGenerationFlattenMapping_GenerateFlattenMappingUVs_Statics::NewProp_InStaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUVGenerationFlattenMapping_GenerateFlattenMappingUVs_Statics::NewProp_UVChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUVGenerationFlattenMapping_GenerateFlattenMappingUVs_Statics::NewProp_AngleThreshold,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUVGenerationFlattenMapping_GenerateFlattenMappingUVs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "CPP_Default_AngleThreshold", "66.000000" },
		{ "DisplayName", "Generate Unwrapped UVs" },
		{ "ModuleRelativePath", "Public/UVTools/UVGenerationFlattenMapping.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUVGenerationFlattenMapping_GenerateFlattenMappingUVs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUVGenerationFlattenMapping, nullptr, "GenerateFlattenMappingUVs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUVGenerationFlattenMapping_GenerateFlattenMappingUVs_Statics::UVGenerationFlattenMapping_eventGenerateFlattenMappingUVs_Parms), Z_Construct_UFunction_UUVGenerationFlattenMapping_GenerateFlattenMappingUVs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUVGenerationFlattenMapping_GenerateFlattenMappingUVs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUVGenerationFlattenMapping_GenerateFlattenMappingUVs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUVGenerationFlattenMapping_GenerateFlattenMappingUVs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUVGenerationFlattenMapping_GenerateFlattenMappingUVs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUVGenerationFlattenMapping_GenerateFlattenMappingUVs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVGenerationFlattenMapping);
	UClass* Z_Construct_UClass_UUVGenerationFlattenMapping_NoRegister()
	{
		return UUVGenerationFlattenMapping::StaticClass();
	}
	struct Z_Construct_UClass_UUVGenerationFlattenMapping_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVGenerationFlattenMapping_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithImporter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUVGenerationFlattenMapping_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUVGenerationFlattenMapping_GenerateFlattenMappingUVs, "GenerateFlattenMappingUVs" }, // 37320301
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVGenerationFlattenMapping_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UVTools/UVGenerationFlattenMapping.h" },
		{ "ModuleRelativePath", "Public/UVTools/UVGenerationFlattenMapping.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVGenerationFlattenMapping_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVGenerationFlattenMapping>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVGenerationFlattenMapping_Statics::ClassParams = {
		&UUVGenerationFlattenMapping::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUVGenerationFlattenMapping_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVGenerationFlattenMapping_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVGenerationFlattenMapping()
	{
		if (!Z_Registration_Info_UClass_UUVGenerationFlattenMapping.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVGenerationFlattenMapping.OuterSingleton, Z_Construct_UClass_UUVGenerationFlattenMapping_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVGenerationFlattenMapping.OuterSingleton;
	}
	template<> DATASMITHIMPORTER_API UClass* StaticClass<UUVGenerationFlattenMapping>()
	{
		return UUVGenerationFlattenMapping::StaticClass();
	}
	UUVGenerationFlattenMapping::UUVGenerationFlattenMapping(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVGenerationFlattenMapping);
	UUVGenerationFlattenMapping::~UUVGenerationFlattenMapping() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_UVTools_UVGenerationFlattenMapping_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_UVTools_UVGenerationFlattenMapping_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUVGenerationFlattenMapping, UUVGenerationFlattenMapping::StaticClass, TEXT("UUVGenerationFlattenMapping"), &Z_Registration_Info_UClass_UUVGenerationFlattenMapping, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVGenerationFlattenMapping), 33702974U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_UVTools_UVGenerationFlattenMapping_h_2063482142(TEXT("/Script/DatasmithImporter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_UVTools_UVGenerationFlattenMapping_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_UVTools_UVGenerationFlattenMapping_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
