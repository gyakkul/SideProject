// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/BlueprintCompilerExtension.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintCompilerExtension() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	KISMET_API UClass* Z_Construct_UClass_UBlueprintCompilerExtension();
	KISMET_API UClass* Z_Construct_UClass_UBlueprintCompilerExtension_NoRegister();
	KISMET_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintCompiledData();
	UPackage* Z_Construct_UPackage__Script_Kismet();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlueprintCompiledData;
class UScriptStruct* FBlueprintCompiledData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintCompiledData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlueprintCompiledData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintCompiledData, (UObject*)Z_Construct_UPackage__Script_Kismet(), TEXT("BlueprintCompiledData"));
	}
	return Z_Registration_Info_UScriptStruct_BlueprintCompiledData.OuterSingleton;
}
template<> KISMET_API UScriptStruct* StaticStruct<FBlueprintCompiledData>()
{
	return FBlueprintCompiledData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBlueprintCompiledData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_IntermediateGraphs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntermediateGraphs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IntermediateGraphs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintCompiledData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintCompilerExtension.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlueprintCompiledData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintCompiledData>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FBlueprintCompiledData_Statics::NewProp_IntermediateGraphs_Inner = { "IntermediateGraphs", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintCompiledData_Statics::NewProp_IntermediateGraphs_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlueprintCompilerExtension.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBlueprintCompiledData_Statics::NewProp_IntermediateGraphs = { "IntermediateGraphs", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlueprintCompiledData, IntermediateGraphs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintCompiledData_Statics::NewProp_IntermediateGraphs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCompiledData_Statics::NewProp_IntermediateGraphs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintCompiledData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCompiledData_Statics::NewProp_IntermediateGraphs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCompiledData_Statics::NewProp_IntermediateGraphs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintCompiledData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Kismet,
		nullptr,
		&NewStructOps,
		"BlueprintCompiledData",
		sizeof(FBlueprintCompiledData),
		alignof(FBlueprintCompiledData),
		Z_Construct_UScriptStruct_FBlueprintCompiledData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCompiledData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintCompiledData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCompiledData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintCompiledData()
	{
		if (!Z_Registration_Info_UScriptStruct_BlueprintCompiledData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlueprintCompiledData.InnerSingleton, Z_Construct_UScriptStruct_FBlueprintCompiledData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BlueprintCompiledData.InnerSingleton;
	}
	void UBlueprintCompilerExtension::StaticRegisterNativesUBlueprintCompilerExtension()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintCompilerExtension);
	UClass* Z_Construct_UClass_UBlueprintCompilerExtension_NoRegister()
	{
		return UBlueprintCompilerExtension::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintCompilerExtension_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintCompilerExtension_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Kismet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintCompilerExtension_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintCompilerExtension.h" },
		{ "ModuleRelativePath", "Public/BlueprintCompilerExtension.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintCompilerExtension_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintCompilerExtension>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintCompilerExtension_Statics::ClassParams = {
		&UBlueprintCompilerExtension::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintCompilerExtension_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCompilerExtension_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintCompilerExtension()
	{
		if (!Z_Registration_Info_UClass_UBlueprintCompilerExtension.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintCompilerExtension.OuterSingleton, Z_Construct_UClass_UBlueprintCompilerExtension_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlueprintCompilerExtension.OuterSingleton;
	}
	template<> KISMET_API UClass* StaticClass<UBlueprintCompilerExtension>()
	{
		return UBlueprintCompilerExtension::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintCompilerExtension);
	UBlueprintCompilerExtension::~UBlueprintCompilerExtension() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Kismet_Public_BlueprintCompilerExtension_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Kismet_Public_BlueprintCompilerExtension_h_Statics::ScriptStructInfo[] = {
		{ FBlueprintCompiledData::StaticStruct, Z_Construct_UScriptStruct_FBlueprintCompiledData_Statics::NewStructOps, TEXT("BlueprintCompiledData"), &Z_Registration_Info_UScriptStruct_BlueprintCompiledData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlueprintCompiledData), 941600349U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Kismet_Public_BlueprintCompilerExtension_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintCompilerExtension, UBlueprintCompilerExtension::StaticClass, TEXT("UBlueprintCompilerExtension"), &Z_Registration_Info_UClass_UBlueprintCompilerExtension, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintCompilerExtension), 2527043845U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Kismet_Public_BlueprintCompilerExtension_h_3895488108(TEXT("/Script/Kismet"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Kismet_Public_BlueprintCompilerExtension_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Kismet_Public_BlueprintCompilerExtension_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Kismet_Public_BlueprintCompilerExtension_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Kismet_Public_BlueprintCompilerExtension_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
