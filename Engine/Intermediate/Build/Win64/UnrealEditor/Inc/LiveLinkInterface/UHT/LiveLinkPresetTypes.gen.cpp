// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkPresetTypes.h"
#include "LiveLinkTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkPresetTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkRole_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceSettings_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSubjectSettings_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkVirtualSubject_NoRegister();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSourcePreset();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectKey();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectPreset();
	UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkSourcePreset;
class UScriptStruct* FLiveLinkSourcePreset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkSourcePreset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkSourcePreset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkSourcePreset, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkSourcePreset"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkSourcePreset.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkSourcePreset>()
{
	return FLiveLinkSourcePreset::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkSourcePreset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceType_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_SourceType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSourcePreset_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkPresetTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkSourcePreset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkSourcePreset>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSourcePreset_Statics::NewProp_Guid_MetaData[] = {
		{ "Category", "LiveLinkSourcePresets" },
		{ "ModuleRelativePath", "Public/LiveLinkPresetTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourcePreset_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkSourcePreset, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSourcePreset_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourcePreset_Statics::NewProp_Guid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSourcePreset_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "LiveLinkSourcePresets" },
		{ "ModuleRelativePath", "Public/LiveLinkPresetTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourcePreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkSourcePreset, Settings), Z_Construct_UClass_ULiveLinkSourceSettings_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSourcePreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourcePreset_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSourcePreset_Statics::NewProp_SourceType_MetaData[] = {
		{ "Category", "LiveLinkSourcePresets" },
		{ "Comment", "/** The SourceType when the source was saved to a Preset. */" },
		{ "ModuleRelativePath", "Public/LiveLinkPresetTypes.h" },
		{ "ToolTip", "The SourceType when the source was saved to a Preset." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourcePreset_Statics::NewProp_SourceType = { "SourceType", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkSourcePreset, SourceType), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSourcePreset_Statics::NewProp_SourceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourcePreset_Statics::NewProp_SourceType_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkSourcePreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourcePreset_Statics::NewProp_Guid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourcePreset_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourcePreset_Statics::NewProp_SourceType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkSourcePreset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		nullptr,
		&NewStructOps,
		"LiveLinkSourcePreset",
		sizeof(FLiveLinkSourcePreset),
		alignof(FLiveLinkSourcePreset),
		Z_Construct_UScriptStruct_FLiveLinkSourcePreset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourcePreset_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSourcePreset_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourcePreset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSourcePreset()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkSourcePreset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkSourcePreset.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkSourcePreset_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkSourcePreset.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkSubjectPreset;
class UScriptStruct* FLiveLinkSubjectPreset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkSubjectPreset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkSubjectPreset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkSubjectPreset, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkSubjectPreset"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkSubjectPreset.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkSubjectPreset>()
{
	return FLiveLinkSubjectPreset::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Role_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Role;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualSubject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VirtualSubject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkPresetTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkSubjectPreset>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "LiveLinkSubjectPresets" },
		{ "ModuleRelativePath", "Public/LiveLinkPresetTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkSubjectPreset, Key), Z_Construct_UScriptStruct_FLiveLinkSubjectKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::NewProp_Key_MetaData)) }; // 1829525393
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::NewProp_Role_MetaData[] = {
		{ "Category", "LiveLinkSubjectPresets" },
		{ "ModuleRelativePath", "Public/LiveLinkPresetTypes.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkSubjectPreset, Role), Z_Construct_UClass_UClass, Z_Construct_UClass_ULiveLinkRole_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::NewProp_Role_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::NewProp_Role_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "LiveLinkSubjectPresets" },
		{ "ModuleRelativePath", "Public/LiveLinkPresetTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkSubjectPreset, Settings), Z_Construct_UClass_ULiveLinkSubjectSettings_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::NewProp_VirtualSubject_MetaData[] = {
		{ "Category", "LiveLinkSubjectPresets" },
		{ "ModuleRelativePath", "Public/LiveLinkPresetTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::NewProp_VirtualSubject = { "VirtualSubject", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkSubjectPreset, VirtualSubject), Z_Construct_UClass_ULiveLinkVirtualSubject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::NewProp_VirtualSubject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::NewProp_VirtualSubject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "LiveLinkSubjectPresets" },
		{ "ModuleRelativePath", "Public/LiveLinkPresetTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FLiveLinkSubjectPreset*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLiveLinkSubjectPreset), &Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::NewProp_Role,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::NewProp_VirtualSubject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::NewProp_bEnabled,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		nullptr,
		&NewStructOps,
		"LiveLinkSubjectPreset",
		sizeof(FLiveLinkSubjectPreset),
		alignof(FLiveLinkSubjectPreset),
		Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectPreset()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkSubjectPreset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkSubjectPreset.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkSubjectPreset.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkPresetTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkPresetTypes_h_Statics::ScriptStructInfo[] = {
		{ FLiveLinkSourcePreset::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkSourcePreset_Statics::NewStructOps, TEXT("LiveLinkSourcePreset"), &Z_Registration_Info_UScriptStruct_LiveLinkSourcePreset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkSourcePreset), 1027253594U) },
		{ FLiveLinkSubjectPreset::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::NewStructOps, TEXT("LiveLinkSubjectPreset"), &Z_Registration_Info_UScriptStruct_LiveLinkSubjectPreset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkSubjectPreset), 855667327U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkPresetTypes_h_1535690736(TEXT("/Script/LiveLinkInterface"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkPresetTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkPresetTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
