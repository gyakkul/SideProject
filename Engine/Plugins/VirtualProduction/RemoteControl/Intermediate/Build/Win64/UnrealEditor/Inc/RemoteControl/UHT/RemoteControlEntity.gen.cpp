// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RemoteControlEntity.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteControlEntity() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	REMOTECONTROL_API UClass* Z_Construct_UClass_URemoteControlBinding_NoRegister();
	REMOTECONTROL_API UClass* Z_Construct_UClass_URemoteControlPreset_NoRegister();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlEntity();
	UPackage* Z_Construct_UPackage__Script_RemoteControl();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoteControlEntity;
class UScriptStruct* FRemoteControlEntity::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteControlEntity.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoteControlEntity.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteControlEntity, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("RemoteControlEntity"));
	}
	return Z_Registration_Info_UScriptStruct_RemoteControlEntity.OuterSingleton;
}
template<> REMOTECONTROL_API UScriptStruct* StaticStruct<FRemoteControlEntity>()
{
	return FRemoteControlEntity::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRemoteControlEntity_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserMetadata_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_UserMetadata_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserMetadata_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_UserMetadata;
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Bindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bindings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Owner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Label;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlEntity_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for exposed objects, properties, functions etc...\n */" },
		{ "ModuleRelativePath", "Public/RemoteControlEntity.h" },
		{ "ToolTip", "Base class for exposed objects, properties, functions etc..." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteControlEntity_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteControlEntity>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRemoteControlEntity_Statics::NewProp_UserMetadata_ValueProp = { "UserMetadata", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRemoteControlEntity_Statics::NewProp_UserMetadata_Key_KeyProp = { "UserMetadata_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlEntity_Statics::NewProp_UserMetadata_MetaData[] = {
		{ "Comment", "/**\n\x09 * User specified metadata for this entity.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RemoteControlEntity.h" },
		{ "ToolTip", "User specified metadata for this entity." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRemoteControlEntity_Statics::NewProp_UserMetadata = { "UserMetadata", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlEntity, UserMetadata), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlEntity_Statics::NewProp_UserMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlEntity_Statics::NewProp_UserMetadata_MetaData)) };
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FRemoteControlEntity_Statics::NewProp_Bindings_Inner = { "Bindings", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URemoteControlBinding_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlEntity_Statics::NewProp_Bindings_MetaData[] = {
		{ "Comment", "/**\n\x09 * The bound objects that are exposed or that hold the exposed entity.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RemoteControlEntity.h" },
		{ "ToolTip", "The bound objects that are exposed or that hold the exposed entity." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRemoteControlEntity_Statics::NewProp_Bindings = { "Bindings", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlEntity, Bindings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlEntity_Statics::NewProp_Bindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlEntity_Statics::NewProp_Bindings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlEntity_Statics::NewProp_Owner_MetaData[] = {
		{ "Category", "RemoteControlEntity" },
		{ "Comment", "/** The preset that owns this entity. */" },
		{ "ModuleRelativePath", "Public/RemoteControlEntity.h" },
		{ "ToolTip", "The preset that owns this entity." },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FRemoteControlEntity_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlEntity, Owner), Z_Construct_UClass_URemoteControlPreset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlEntity_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlEntity_Statics::NewProp_Owner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlEntity_Statics::NewProp_Label_MetaData[] = {
		{ "Category", "RemoteControlEntity" },
		{ "Comment", "/**\n\x09 * This exposed entity's alias.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RemoteControlEntity.h" },
		{ "ToolTip", "This exposed entity's alias." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRemoteControlEntity_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlEntity, Label), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlEntity_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlEntity_Statics::NewProp_Label_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlEntity_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "RemoteControlEntity" },
		{ "Comment", "/**\n\x09 * Unique identifier for this entity\n\x09 */" },
		{ "ModuleRelativePath", "Public/RemoteControlEntity.h" },
		{ "ToolTip", "Unique identifier for this entity" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteControlEntity_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlEntity, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlEntity_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlEntity_Statics::NewProp_Id_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteControlEntity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlEntity_Statics::NewProp_UserMetadata_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlEntity_Statics::NewProp_UserMetadata_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlEntity_Statics::NewProp_UserMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlEntity_Statics::NewProp_Bindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlEntity_Statics::NewProp_Bindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlEntity_Statics::NewProp_Owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlEntity_Statics::NewProp_Label,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlEntity_Statics::NewProp_Id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteControlEntity_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
		nullptr,
		&NewStructOps,
		"RemoteControlEntity",
		sizeof(FRemoteControlEntity),
		alignof(FRemoteControlEntity),
		Z_Construct_UScriptStruct_FRemoteControlEntity_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlEntity_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlEntity_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlEntity_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlEntity()
	{
		if (!Z_Registration_Info_UScriptStruct_RemoteControlEntity.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoteControlEntity.InnerSingleton, Z_Construct_UScriptStruct_FRemoteControlEntity_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RemoteControlEntity.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlEntity_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlEntity_h_Statics::ScriptStructInfo[] = {
		{ FRemoteControlEntity::StaticStruct, Z_Construct_UScriptStruct_FRemoteControlEntity_Statics::NewStructOps, TEXT("RemoteControlEntity"), &Z_Registration_Info_UScriptStruct_RemoteControlEntity, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoteControlEntity), 3607134825U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlEntity_h_3446695492(TEXT("/Script/RemoteControl"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlEntity_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlEntity_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
