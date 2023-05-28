// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IIdentifiableXRDevice.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIIdentifiableXRDevice() {}
// Cross Module References
	HEADMOUNTEDDISPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FXRDeviceId();
	UPackage* Z_Construct_UPackage__Script_HeadMountedDisplay();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_XRDeviceId;
class UScriptStruct* FXRDeviceId::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_XRDeviceId.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_XRDeviceId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FXRDeviceId, (UObject*)Z_Construct_UPackage__Script_HeadMountedDisplay(), TEXT("XRDeviceId"));
	}
	return Z_Registration_Info_UScriptStruct_XRDeviceId.OuterSingleton;
}
template<> HEADMOUNTEDDISPLAY_API UScriptStruct* StaticStruct<FXRDeviceId>()
{
	return FXRDeviceId::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FXRDeviceId_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SystemName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SystemName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRDeviceId_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/IIdentifiableXRDevice.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FXRDeviceId_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FXRDeviceId>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRDeviceId_Statics::NewProp_SystemName_MetaData[] = {
		{ "Category", "XRDevice" },
		{ "ModuleRelativePath", "Public/IIdentifiableXRDevice.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FXRDeviceId_Statics::NewProp_SystemName = { "SystemName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FXRDeviceId, SystemName), METADATA_PARAMS(Z_Construct_UScriptStruct_FXRDeviceId_Statics::NewProp_SystemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRDeviceId_Statics::NewProp_SystemName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRDeviceId_Statics::NewProp_DeviceId_MetaData[] = {
		{ "Category", "XRDevice" },
		{ "ModuleRelativePath", "Public/IIdentifiableXRDevice.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FXRDeviceId_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FXRDeviceId, DeviceId), METADATA_PARAMS(Z_Construct_UScriptStruct_FXRDeviceId_Statics::NewProp_DeviceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRDeviceId_Statics::NewProp_DeviceId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FXRDeviceId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRDeviceId_Statics::NewProp_SystemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRDeviceId_Statics::NewProp_DeviceId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FXRDeviceId_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
		nullptr,
		&NewStructOps,
		"XRDeviceId",
		sizeof(FXRDeviceId),
		alignof(FXRDeviceId),
		Z_Construct_UScriptStruct_FXRDeviceId_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRDeviceId_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FXRDeviceId_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRDeviceId_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FXRDeviceId()
	{
		if (!Z_Registration_Info_UScriptStruct_XRDeviceId.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_XRDeviceId.InnerSingleton, Z_Construct_UScriptStruct_FXRDeviceId_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_XRDeviceId.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_IIdentifiableXRDevice_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_IIdentifiableXRDevice_h_Statics::ScriptStructInfo[] = {
		{ FXRDeviceId::StaticStruct, Z_Construct_UScriptStruct_FXRDeviceId_Statics::NewStructOps, TEXT("XRDeviceId"), &Z_Registration_Info_UScriptStruct_XRDeviceId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FXRDeviceId), 2390384735U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_IIdentifiableXRDevice_h_1055550206(TEXT("/Script/HeadMountedDisplay"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_IIdentifiableXRDevice_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_IIdentifiableXRDevice_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
