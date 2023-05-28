// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ILiveLinkSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeILiveLinkSource() {}
// Cross Module References
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSourceHandle();
	UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkSourceHandle;
class UScriptStruct* FLiveLinkSourceHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkSourceHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkSourceHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkSourceHandle, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkSourceHandle"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkSourceHandle.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkSourceHandle>()
{
	return FLiveLinkSourceHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkSourceHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSourceHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// A Blueprint handle to a specific LiveLink Source\n" },
		{ "ModuleRelativePath", "Public/ILiveLinkSource.h" },
		{ "ToolTip", "A Blueprint handle to a specific LiveLink Source" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkSourceHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkSourceHandle>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkSourceHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		nullptr,
		&NewStructOps,
		"LiveLinkSourceHandle",
		sizeof(FLiveLinkSourceHandle),
		alignof(FLiveLinkSourceHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSourceHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSourceHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkSourceHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkSourceHandle.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkSourceHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkSourceHandle.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_ILiveLinkSource_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_ILiveLinkSource_h_Statics::ScriptStructInfo[] = {
		{ FLiveLinkSourceHandle::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkSourceHandle_Statics::NewStructOps, TEXT("LiveLinkSourceHandle"), &Z_Registration_Info_UScriptStruct_LiveLinkSourceHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkSourceHandle), 3793506686U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_ILiveLinkSource_h_2680416799(TEXT("/Script/LiveLinkInterface"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_ILiveLinkSource_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_ILiveLinkSource_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
