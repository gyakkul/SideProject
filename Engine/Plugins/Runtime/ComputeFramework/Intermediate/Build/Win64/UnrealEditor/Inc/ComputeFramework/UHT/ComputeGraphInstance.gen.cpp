// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComputeFramework/ComputeGraphInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComputeGraphInstance() {}
// Cross Module References
	COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataProvider_NoRegister();
	COMPUTEFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FComputeGraphInstance();
	UPackage* Z_Construct_UPackage__Script_ComputeFramework();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComputeGraphInstance;
class UScriptStruct* FComputeGraphInstance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComputeGraphInstance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComputeGraphInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComputeGraphInstance, (UObject*)Z_Construct_UPackage__Script_ComputeFramework(), TEXT("ComputeGraphInstance"));
	}
	return Z_Registration_Info_UScriptStruct_ComputeGraphInstance.OuterSingleton;
}
template<> COMPUTEFRAMEWORK_API UScriptStruct* StaticStruct<FComputeGraphInstance>()
{
	return FComputeGraphInstance::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComputeGraphInstance_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DataProviders_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataProviders_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataProviders;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeGraphInstance_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * Class to store a set of data provider bindings for UComputeGraph and to\n * enqueue work to the ComputeFramework's compute system.\n */" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeGraphInstance.h" },
		{ "ToolTip", "Class to store a set of data provider bindings for UComputeGraph and to\nenqueue work to the ComputeFramework's compute system." },
	};
#endif
	void* Z_Construct_UScriptStruct_FComputeGraphInstance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComputeGraphInstance>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FComputeGraphInstance_Statics::NewProp_DataProviders_Inner = { "DataProviders", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UComputeDataProvider_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeGraphInstance_Statics::NewProp_DataProviders_MetaData[] = {
		{ "Comment", "/** The currently bound Data Provider objects. */" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeGraphInstance.h" },
		{ "ToolTip", "The currently bound Data Provider objects." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FComputeGraphInstance_Statics::NewProp_DataProviders = { "DataProviders", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComputeGraphInstance, DataProviders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeGraphInstance_Statics::NewProp_DataProviders_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeGraphInstance_Statics::NewProp_DataProviders_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComputeGraphInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeGraphInstance_Statics::NewProp_DataProviders_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeGraphInstance_Statics::NewProp_DataProviders,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComputeGraphInstance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ComputeFramework,
		nullptr,
		&NewStructOps,
		"ComputeGraphInstance",
		sizeof(FComputeGraphInstance),
		alignof(FComputeGraphInstance),
		Z_Construct_UScriptStruct_FComputeGraphInstance_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeGraphInstance_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeGraphInstance_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeGraphInstance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComputeGraphInstance()
	{
		if (!Z_Registration_Info_UScriptStruct_ComputeGraphInstance.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComputeGraphInstance.InnerSingleton, Z_Construct_UScriptStruct_FComputeGraphInstance_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComputeGraphInstance.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraphInstance_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraphInstance_h_Statics::ScriptStructInfo[] = {
		{ FComputeGraphInstance::StaticStruct, Z_Construct_UScriptStruct_FComputeGraphInstance_Statics::NewStructOps, TEXT("ComputeGraphInstance"), &Z_Registration_Info_UScriptStruct_ComputeGraphInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComputeGraphInstance), 1452545955U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraphInstance_h_1273616167(TEXT("/Script/ComputeFramework"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraphInstance_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraphInstance_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
