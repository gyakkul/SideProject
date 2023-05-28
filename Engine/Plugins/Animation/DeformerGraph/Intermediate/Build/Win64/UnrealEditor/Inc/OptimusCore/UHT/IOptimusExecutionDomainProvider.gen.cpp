// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IOptimusExecutionDomainProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOptimusExecutionDomainProvider() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusExecutionDomainProvider();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusExecutionDomainProvider_NoRegister();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusExecutionDomain();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusExecutionDomain;
class UScriptStruct* FOptimusExecutionDomain::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusExecutionDomain.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusExecutionDomain.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusExecutionDomain, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusExecutionDomain"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusExecutionDomain.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusExecutionDomain>()
{
	return FOptimusExecutionDomain::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusExecutionDomain_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusExecutionDomain_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A struct to hold onto a single-level domain for controlling a kernel's execution domain. \n  * The reason it's in a struct is so that we can apply a property panel customization for it\n  * to make it easier to select from a pre-defined list of execution domains.\n*/" },
		{ "ModuleRelativePath", "Public/IOptimusExecutionDomainProvider.h" },
		{ "ToolTip", "A struct to hold onto a single-level domain for controlling a kernel's execution domain.\nThe reason it's in a struct is so that we can apply a property panel customization for it\nto make it easier to select from a pre-defined list of execution domains." },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusExecutionDomain_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusExecutionDomain>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusExecutionDomain_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Domain" },
		{ "Comment", "// The name of the execution domain that this kernel operates on.\n" },
		{ "ModuleRelativePath", "Public/IOptimusExecutionDomainProvider.h" },
		{ "ToolTip", "The name of the execution domain that this kernel operates on." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOptimusExecutionDomain_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusExecutionDomain, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusExecutionDomain_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusExecutionDomain_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusExecutionDomain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusExecutionDomain_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusExecutionDomain_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		nullptr,
		&NewStructOps,
		"OptimusExecutionDomain",
		sizeof(FOptimusExecutionDomain),
		alignof(FOptimusExecutionDomain),
		Z_Construct_UScriptStruct_FOptimusExecutionDomain_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusExecutionDomain_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusExecutionDomain_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusExecutionDomain_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusExecutionDomain()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusExecutionDomain.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusExecutionDomain.InnerSingleton, Z_Construct_UScriptStruct_FOptimusExecutionDomain_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusExecutionDomain.InnerSingleton;
	}
	void UOptimusExecutionDomainProvider::StaticRegisterNativesUOptimusExecutionDomainProvider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusExecutionDomainProvider);
	UClass* Z_Construct_UClass_UOptimusExecutionDomainProvider_NoRegister()
	{
		return UOptimusExecutionDomainProvider::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusExecutionDomainProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusExecutionDomainProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusExecutionDomainProvider_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IOptimusExecutionDomainProvider.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusExecutionDomainProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOptimusExecutionDomainProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusExecutionDomainProvider_Statics::ClassParams = {
		&UOptimusExecutionDomainProvider::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusExecutionDomainProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusExecutionDomainProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusExecutionDomainProvider()
	{
		if (!Z_Registration_Info_UClass_UOptimusExecutionDomainProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusExecutionDomainProvider.OuterSingleton, Z_Construct_UClass_UOptimusExecutionDomainProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusExecutionDomainProvider.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusExecutionDomainProvider>()
	{
		return UOptimusExecutionDomainProvider::StaticClass();
	}
	UOptimusExecutionDomainProvider::UOptimusExecutionDomainProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusExecutionDomainProvider);
	UOptimusExecutionDomainProvider::~UOptimusExecutionDomainProvider() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusExecutionDomainProvider_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusExecutionDomainProvider_h_Statics::ScriptStructInfo[] = {
		{ FOptimusExecutionDomain::StaticStruct, Z_Construct_UScriptStruct_FOptimusExecutionDomain_Statics::NewStructOps, TEXT("OptimusExecutionDomain"), &Z_Registration_Info_UScriptStruct_OptimusExecutionDomain, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusExecutionDomain), 2028006402U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusExecutionDomainProvider_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusExecutionDomainProvider, UOptimusExecutionDomainProvider::StaticClass, TEXT("UOptimusExecutionDomainProvider"), &Z_Registration_Info_UClass_UOptimusExecutionDomainProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusExecutionDomainProvider), 2059535935U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusExecutionDomainProvider_h_4275867881(TEXT("/Script/OptimusCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusExecutionDomainProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusExecutionDomainProvider_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusExecutionDomainProvider_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusExecutionDomainProvider_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
