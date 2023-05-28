// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FieldNotification/FieldId.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFieldId() {}
// Cross Module References
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FFieldNotificationId();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FieldNotificationId;
class UScriptStruct* FFieldNotificationId::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FieldNotificationId.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FieldNotificationId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFieldNotificationId, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("FieldNotificationId"));
	}
	return Z_Registration_Info_UScriptStruct_FieldNotificationId.OuterSingleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FFieldNotificationId>()
{
	return FFieldNotificationId::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFieldNotificationId_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FieldName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFieldNotificationId_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//namespace\n" },
		{ "ModuleRelativePath", "Public/FieldNotification/FieldId.h" },
		{ "ToolTip", "namespace" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFieldNotificationId_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFieldNotificationId>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFieldNotificationId_Statics::NewProp_FieldName_MetaData[] = {
		{ "Category", "FieldNotify" },
		{ "ModuleRelativePath", "Public/FieldNotification/FieldId.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFieldNotificationId_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFieldNotificationId, FieldName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFieldNotificationId_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFieldNotificationId_Statics::NewProp_FieldName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFieldNotificationId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFieldNotificationId_Statics::NewProp_FieldName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFieldNotificationId_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
		nullptr,
		&NewStructOps,
		"FieldNotificationId",
		sizeof(FFieldNotificationId),
		alignof(FFieldNotificationId),
		Z_Construct_UScriptStruct_FFieldNotificationId_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFieldNotificationId_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFieldNotificationId_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFieldNotificationId_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFieldNotificationId()
	{
		if (!Z_Registration_Info_UScriptStruct_FieldNotificationId.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FieldNotificationId.InnerSingleton, Z_Construct_UScriptStruct_FFieldNotificationId_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FieldNotificationId.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_FieldNotification_FieldId_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_FieldNotification_FieldId_h_Statics::ScriptStructInfo[] = {
		{ FFieldNotificationId::StaticStruct, Z_Construct_UScriptStruct_FFieldNotificationId_Statics::NewStructOps, TEXT("FieldNotificationId"), &Z_Registration_Info_UScriptStruct_FieldNotificationId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFieldNotificationId), 2908908415U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_FieldNotification_FieldId_h_1724626383(TEXT("/Script/UMG"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_FieldNotification_FieldId_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_FieldNotification_FieldId_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
