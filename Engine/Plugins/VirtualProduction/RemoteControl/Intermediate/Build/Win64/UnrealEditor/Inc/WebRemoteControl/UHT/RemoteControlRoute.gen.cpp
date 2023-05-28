// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/RemoteControlRoute.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteControlRoute() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WebRemoteControl();
	WEBREMOTECONTROL_API UEnum* Z_Construct_UEnum_WebRemoteControl_ERemoteControlHttpVerbs();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlRouteDescription();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERemoteControlHttpVerbs;
	static UEnum* ERemoteControlHttpVerbs_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERemoteControlHttpVerbs.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERemoteControlHttpVerbs.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WebRemoteControl_ERemoteControlHttpVerbs, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("ERemoteControlHttpVerbs"));
		}
		return Z_Registration_Info_UEnum_ERemoteControlHttpVerbs.OuterSingleton;
	}
	template<> WEBREMOTECONTROL_API UEnum* StaticEnum<ERemoteControlHttpVerbs>()
	{
		return ERemoteControlHttpVerbs_StaticEnum();
	}
	struct Z_Construct_UEnum_WebRemoteControl_ERemoteControlHttpVerbs_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WebRemoteControl_ERemoteControlHttpVerbs_Statics::Enumerators[] = {
		{ "ERemoteControlHttpVerbs::None", (int64)ERemoteControlHttpVerbs::None },
		{ "ERemoteControlHttpVerbs::Get", (int64)ERemoteControlHttpVerbs::Get },
		{ "ERemoteControlHttpVerbs::Post", (int64)ERemoteControlHttpVerbs::Post },
		{ "ERemoteControlHttpVerbs::Put", (int64)ERemoteControlHttpVerbs::Put },
		{ "ERemoteControlHttpVerbs::Patch", (int64)ERemoteControlHttpVerbs::Patch },
		{ "ERemoteControlHttpVerbs::Delete", (int64)ERemoteControlHttpVerbs::Delete },
		{ "ERemoteControlHttpVerbs::Options", (int64)ERemoteControlHttpVerbs::Options },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WebRemoteControl_ERemoteControlHttpVerbs_Statics::Enum_MetaDataParams[] = {
		{ "Delete.Name", "ERemoteControlHttpVerbs::Delete" },
		{ "Get.Name", "ERemoteControlHttpVerbs::Get" },
		{ "ModuleRelativePath", "Private/RemoteControlRoute.h" },
		{ "None.Name", "ERemoteControlHttpVerbs::None" },
		{ "Options.Name", "ERemoteControlHttpVerbs::Options" },
		{ "Patch.Name", "ERemoteControlHttpVerbs::Patch" },
		{ "Post.Name", "ERemoteControlHttpVerbs::Post" },
		{ "Put.Name", "ERemoteControlHttpVerbs::Put" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WebRemoteControl_ERemoteControlHttpVerbs_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WebRemoteControl,
		nullptr,
		"ERemoteControlHttpVerbs",
		"ERemoteControlHttpVerbs",
		Z_Construct_UEnum_WebRemoteControl_ERemoteControlHttpVerbs_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WebRemoteControl_ERemoteControlHttpVerbs_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WebRemoteControl_ERemoteControlHttpVerbs_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WebRemoteControl_ERemoteControlHttpVerbs_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WebRemoteControl_ERemoteControlHttpVerbs()
	{
		if (!Z_Registration_Info_UEnum_ERemoteControlHttpVerbs.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERemoteControlHttpVerbs.InnerSingleton, Z_Construct_UEnum_WebRemoteControl_ERemoteControlHttpVerbs_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERemoteControlHttpVerbs.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoteControlRouteDescription;
class UScriptStruct* FRemoteControlRouteDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteControlRouteDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoteControlRouteDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteControlRouteDescription, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("RemoteControlRouteDescription"));
	}
	return Z_Registration_Info_UScriptStruct_RemoteControlRouteDescription.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FRemoteControlRouteDescription>()
{
	return FRemoteControlRouteDescription::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRemoteControlRouteDescription_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_Verb_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Verb_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Verb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlRouteDescription_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Utility struct to create a textual representation of an http route.\n */" },
		{ "ModuleRelativePath", "Private/RemoteControlRoute.h" },
		{ "ToolTip", "Utility struct to create a textual representation of an http route." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteControlRouteDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteControlRouteDescription>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlRouteDescription_Statics::NewProp_Path_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/RemoteControlRoute.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRemoteControlRouteDescription_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlRouteDescription, Path), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlRouteDescription_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlRouteDescription_Statics::NewProp_Path_MetaData)) };
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FRemoteControlRouteDescription_Statics::NewProp_Verb_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlRouteDescription_Statics::NewProp_Verb_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlRoute.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRemoteControlRouteDescription_Statics::NewProp_Verb = { "Verb", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlRouteDescription, Verb), Z_Construct_UEnum_WebRemoteControl_ERemoteControlHttpVerbs, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlRouteDescription_Statics::NewProp_Verb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlRouteDescription_Statics::NewProp_Verb_MetaData)) }; // 2451029330
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlRouteDescription_Statics::NewProp_Description_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlRoute.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRemoteControlRouteDescription_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlRouteDescription, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlRouteDescription_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlRouteDescription_Statics::NewProp_Description_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteControlRouteDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlRouteDescription_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlRouteDescription_Statics::NewProp_Verb_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlRouteDescription_Statics::NewProp_Verb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlRouteDescription_Statics::NewProp_Description,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteControlRouteDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		nullptr,
		&NewStructOps,
		"RemoteControlRouteDescription",
		sizeof(FRemoteControlRouteDescription),
		alignof(FRemoteControlRouteDescription),
		Z_Construct_UScriptStruct_FRemoteControlRouteDescription_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlRouteDescription_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlRouteDescription_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlRouteDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlRouteDescription()
	{
		if (!Z_Registration_Info_UScriptStruct_RemoteControlRouteDescription.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoteControlRouteDescription.InnerSingleton, Z_Construct_UScriptStruct_FRemoteControlRouteDescription_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RemoteControlRouteDescription.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_WebRemoteControl_Private_RemoteControlRoute_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_WebRemoteControl_Private_RemoteControlRoute_h_Statics::EnumInfo[] = {
		{ ERemoteControlHttpVerbs_StaticEnum, TEXT("ERemoteControlHttpVerbs"), &Z_Registration_Info_UEnum_ERemoteControlHttpVerbs, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2451029330U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_WebRemoteControl_Private_RemoteControlRoute_h_Statics::ScriptStructInfo[] = {
		{ FRemoteControlRouteDescription::StaticStruct, Z_Construct_UScriptStruct_FRemoteControlRouteDescription_Statics::NewStructOps, TEXT("RemoteControlRouteDescription"), &Z_Registration_Info_UScriptStruct_RemoteControlRouteDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoteControlRouteDescription), 1093688782U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_WebRemoteControl_Private_RemoteControlRoute_h_4283235671(TEXT("/Script/WebRemoteControl"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_WebRemoteControl_Private_RemoteControlRoute_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_WebRemoteControl_Private_RemoteControlRoute_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_WebRemoteControl_Private_RemoteControlRoute_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_WebRemoteControl_Private_RemoteControlRoute_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
