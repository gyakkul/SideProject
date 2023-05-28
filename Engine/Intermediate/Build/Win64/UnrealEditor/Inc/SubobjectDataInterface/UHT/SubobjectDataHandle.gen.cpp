// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubobjectDataHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubobjectDataHandle() {}
// Cross Module References
	SUBOBJECTDATAINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FSubobjectDataHandle();
	UPackage* Z_Construct_UPackage__Script_SubobjectDataInterface();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SubobjectDataHandle;
class UScriptStruct* FSubobjectDataHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SubobjectDataHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SubobjectDataHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubobjectDataHandle, (UObject*)Z_Construct_UPackage__Script_SubobjectDataInterface(), TEXT("SubobjectDataHandle"));
	}
	return Z_Registration_Info_UScriptStruct_SubobjectDataHandle.OuterSingleton;
}
template<> SUBOBJECTDATAINTERFACE_API UScriptStruct* StaticStruct<FSubobjectDataHandle>()
{
	return FSubobjectDataHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSubobjectDataHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubobjectDataHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* A subobject handle is a globally unique identifier for subobjects\n* Upon construction, the handle will be invalid. It is the responsibility\n* of the owning FSubobjectData to set the DataPtr once the subobject\n* data has validated that it has a good context.\n*/" },
		{ "ModuleRelativePath", "Public/SubobjectDataHandle.h" },
		{ "ToolTip", "A subobject handle is a globally unique identifier for subobjects\nUpon construction, the handle will be invalid. It is the responsibility\nof the owning FSubobjectData to set the DataPtr once the subobject\ndata has validated that it has a good context." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubobjectDataHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubobjectDataHandle>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubobjectDataHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SubobjectDataInterface,
		nullptr,
		&NewStructOps,
		"SubobjectDataHandle",
		sizeof(FSubobjectDataHandle),
		alignof(FSubobjectDataHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubobjectDataHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubobjectDataHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubobjectDataHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_SubobjectDataHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SubobjectDataHandle.InnerSingleton, Z_Construct_UScriptStruct_FSubobjectDataHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SubobjectDataHandle.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataHandle_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataHandle_h_Statics::ScriptStructInfo[] = {
		{ FSubobjectDataHandle::StaticStruct, Z_Construct_UScriptStruct_FSubobjectDataHandle_Statics::NewStructOps, TEXT("SubobjectDataHandle"), &Z_Registration_Info_UScriptStruct_SubobjectDataHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubobjectDataHandle), 3209397774U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataHandle_h_1897755818(TEXT("/Script/SubobjectDataInterface"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataHandle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataHandle_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
