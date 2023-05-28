// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RemoteControlPreset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteControlPreset() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	REMOTECONTROL_API UClass* Z_Construct_UClass_URCVirtualPropertyContainerBase_NoRegister();
	REMOTECONTROL_API UClass* Z_Construct_UClass_URemoteControlBinding_NoRegister();
	REMOTECONTROL_API UClass* Z_Construct_UClass_URemoteControlExposeRegistry_NoRegister();
	REMOTECONTROL_API UClass* Z_Construct_UClass_URemoteControlPreset();
	REMOTECONTROL_API UClass* Z_Construct_UClass_URemoteControlPreset_NoRegister();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCCachedFieldData();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlPresetGroup();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlPresetLayout();
	UPackage* Z_Construct_UPackage__Script_RemoteControl();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCCachedFieldData;
class UScriptStruct* FRCCachedFieldData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCCachedFieldData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCCachedFieldData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCCachedFieldData, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("RCCachedFieldData"));
	}
	return Z_Registration_Info_UScriptStruct_RCCachedFieldData.OuterSingleton;
}
template<> REMOTECONTROL_API UScriptStruct* StaticStruct<FRCCachedFieldData>()
{
	return FRCCachedFieldData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCCachedFieldData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayoutGroupId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LayoutGroupId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerObjectAlias_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OwnerObjectAlias;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCCachedFieldData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Data cached for every exposed field.\n */" },
		{ "ModuleRelativePath", "Public/RemoteControlPreset.h" },
		{ "ToolTip", "Data cached for every exposed field." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCCachedFieldData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCCachedFieldData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCCachedFieldData_Statics::NewProp_LayoutGroupId_MetaData[] = {
		{ "Comment", "/** The group the field is in. */" },
		{ "ModuleRelativePath", "Public/RemoteControlPreset.h" },
		{ "ToolTip", "The group the field is in." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCCachedFieldData_Statics::NewProp_LayoutGroupId = { "LayoutGroupId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCCachedFieldData, LayoutGroupId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCCachedFieldData_Statics::NewProp_LayoutGroupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCCachedFieldData_Statics::NewProp_LayoutGroupId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCCachedFieldData_Statics::NewProp_OwnerObjectAlias_MetaData[] = {
		{ "Comment", "/** The target that owns this field. */" },
		{ "ModuleRelativePath", "Public/RemoteControlPreset.h" },
		{ "ToolTip", "The target that owns this field." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRCCachedFieldData_Statics::NewProp_OwnerObjectAlias = { "OwnerObjectAlias", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCCachedFieldData, OwnerObjectAlias), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCCachedFieldData_Statics::NewProp_OwnerObjectAlias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCCachedFieldData_Statics::NewProp_OwnerObjectAlias_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCCachedFieldData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCCachedFieldData_Statics::NewProp_LayoutGroupId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCCachedFieldData_Statics::NewProp_OwnerObjectAlias,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCCachedFieldData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
		nullptr,
		&NewStructOps,
		"RCCachedFieldData",
		sizeof(FRCCachedFieldData),
		alignof(FRCCachedFieldData),
		Z_Construct_UScriptStruct_FRCCachedFieldData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCCachedFieldData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCCachedFieldData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCCachedFieldData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCCachedFieldData()
	{
		if (!Z_Registration_Info_UScriptStruct_RCCachedFieldData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCCachedFieldData.InnerSingleton, Z_Construct_UScriptStruct_FRCCachedFieldData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCCachedFieldData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoteControlPresetGroup;
class UScriptStruct* FRemoteControlPresetGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteControlPresetGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoteControlPresetGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteControlPresetGroup, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("RemoteControlPresetGroup"));
	}
	return Z_Registration_Info_UScriptStruct_RemoteControlPresetGroup.OuterSingleton;
}
template<> REMOTECONTROL_API UScriptStruct* StaticStruct<FRemoteControlPresetGroup>()
{
	return FRemoteControlPresetGroup::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRemoteControlPresetGroup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagColor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Fields_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Fields_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Fields;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlPresetGroup_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents a group of field and offers operations to operate on the fields inside of that group.\n */" },
		{ "ModuleRelativePath", "Public/RemoteControlPreset.h" },
		{ "ToolTip", "Represents a group of field and offers operations to operate on the fields inside of that group." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteControlPresetGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteControlPresetGroup>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlPresetGroup_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/** Name of this group. */" },
		{ "ModuleRelativePath", "Public/RemoteControlPreset.h" },
		{ "ToolTip", "Name of this group." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRemoteControlPresetGroup_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlPresetGroup, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlPresetGroup_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlPresetGroup_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlPresetGroup_Statics::NewProp_Id_MetaData[] = {
		{ "Comment", "/** This group's ID. */" },
		{ "ModuleRelativePath", "Public/RemoteControlPreset.h" },
		{ "ToolTip", "This group's ID." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteControlPresetGroup_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlPresetGroup, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlPresetGroup_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlPresetGroup_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlPresetGroup_Statics::NewProp_TagColor_MetaData[] = {
		{ "Comment", "/* Color Tag for this group. */" },
		{ "ModuleRelativePath", "Public/RemoteControlPreset.h" },
		{ "ToolTip", "Color Tag for this group." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteControlPresetGroup_Statics::NewProp_TagColor = { "TagColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlPresetGroup, TagColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlPresetGroup_Statics::NewProp_TagColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlPresetGroup_Statics::NewProp_TagColor_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteControlPresetGroup_Statics::NewProp_Fields_Inner = { "Fields", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlPresetGroup_Statics::NewProp_Fields_MetaData[] = {
		{ "Comment", "/** The list of exposed fields under this group. */" },
		{ "ModuleRelativePath", "Public/RemoteControlPreset.h" },
		{ "ToolTip", "The list of exposed fields under this group." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRemoteControlPresetGroup_Statics::NewProp_Fields = { "Fields", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlPresetGroup, Fields), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlPresetGroup_Statics::NewProp_Fields_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlPresetGroup_Statics::NewProp_Fields_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteControlPresetGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlPresetGroup_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlPresetGroup_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlPresetGroup_Statics::NewProp_TagColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlPresetGroup_Statics::NewProp_Fields_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlPresetGroup_Statics::NewProp_Fields,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteControlPresetGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
		nullptr,
		&NewStructOps,
		"RemoteControlPresetGroup",
		sizeof(FRemoteControlPresetGroup),
		alignof(FRemoteControlPresetGroup),
		Z_Construct_UScriptStruct_FRemoteControlPresetGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlPresetGroup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlPresetGroup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlPresetGroup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlPresetGroup()
	{
		if (!Z_Registration_Info_UScriptStruct_RemoteControlPresetGroup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoteControlPresetGroup.InnerSingleton, Z_Construct_UScriptStruct_FRemoteControlPresetGroup_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RemoteControlPresetGroup.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoteControlPresetLayout;
class UScriptStruct* FRemoteControlPresetLayout::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteControlPresetLayout.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoteControlPresetLayout.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteControlPresetLayout, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("RemoteControlPresetLayout"));
	}
	return Z_Registration_Info_UScriptStruct_RemoteControlPresetLayout.OuterSingleton;
}
template<> REMOTECONTROL_API UScriptStruct* StaticStruct<FRemoteControlPresetLayout>()
{
	return FRemoteControlPresetLayout::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRemoteControlPresetLayout_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Groups_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Groups_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Groups;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Owner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlPresetLayout_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Layout that holds groups of fields. */" },
		{ "ModuleRelativePath", "Public/RemoteControlPreset.h" },
		{ "ToolTip", "Layout that holds groups of fields." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteControlPresetLayout_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteControlPresetLayout>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteControlPresetLayout_Statics::NewProp_Groups_Inner = { "Groups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRemoteControlPresetGroup, METADATA_PARAMS(nullptr, 0) }; // 2531970343
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlPresetLayout_Statics::NewProp_Groups_MetaData[] = {
		{ "Comment", "/** The list of groups under this layout. */" },
		{ "ModuleRelativePath", "Public/RemoteControlPreset.h" },
		{ "ToolTip", "The list of groups under this layout." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRemoteControlPresetLayout_Statics::NewProp_Groups = { "Groups", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlPresetLayout, Groups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlPresetLayout_Statics::NewProp_Groups_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlPresetLayout_Statics::NewProp_Groups_MetaData)) }; // 2531970343
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlPresetLayout_Statics::NewProp_Owner_MetaData[] = {
		{ "Comment", "/** The preset that owns this layout. */" },
		{ "ModuleRelativePath", "Public/RemoteControlPreset.h" },
		{ "ToolTip", "The preset that owns this layout." },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FRemoteControlPresetLayout_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlPresetLayout, Owner), Z_Construct_UClass_URemoteControlPreset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlPresetLayout_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlPresetLayout_Statics::NewProp_Owner_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteControlPresetLayout_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlPresetLayout_Statics::NewProp_Groups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlPresetLayout_Statics::NewProp_Groups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlPresetLayout_Statics::NewProp_Owner,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteControlPresetLayout_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
		nullptr,
		&NewStructOps,
		"RemoteControlPresetLayout",
		sizeof(FRemoteControlPresetLayout),
		alignof(FRemoteControlPresetLayout),
		Z_Construct_UScriptStruct_FRemoteControlPresetLayout_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlPresetLayout_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlPresetLayout_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlPresetLayout_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlPresetLayout()
	{
		if (!Z_Registration_Info_UScriptStruct_RemoteControlPresetLayout.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoteControlPresetLayout.InnerSingleton, Z_Construct_UScriptStruct_FRemoteControlPresetLayout_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RemoteControlPresetLayout.InnerSingleton;
	}
	void URemoteControlPreset::StaticRegisterNativesURemoteControlPreset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URemoteControlPreset);
	UClass* Z_Construct_UClass_URemoteControlPreset_NoRegister()
	{
		return URemoteControlPreset::StaticClass();
	}
	struct Z_Construct_UClass_URemoteControlPreset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Layout_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Layout;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Metadata_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Metadata_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Bindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bindings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControllerContainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ControllerContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresetId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PresetId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldCache_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldCache_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldCache_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_FieldCache;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NameToGuidMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NameToGuidMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameToGuidMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_NameToGuidMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Registry_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Registry;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FNamePropertyParams NewProp_DetailsTabIdentifierOverrides_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DetailsTabIdentifierOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DetailsTabIdentifierOverrides;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URemoteControlPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlPreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Holds exposed functions and properties.\n */" },
		{ "IncludePath", "RemoteControlPreset.h" },
		{ "ModuleRelativePath", "Public/RemoteControlPreset.h" },
		{ "ToolTip", "Holds exposed functions and properties." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_Layout_MetaData[] = {
		{ "Comment", "/** The visual layout for this preset. */" },
		{ "ModuleRelativePath", "Public/RemoteControlPreset.h" },
		{ "ToolTip", "The visual layout for this preset." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_Layout = { "Layout", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlPreset, Layout), Z_Construct_UScriptStruct_FRemoteControlPresetLayout, METADATA_PARAMS(Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_Layout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_Layout_MetaData)) }; // 853669599
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_Metadata_ValueProp = { "Metadata", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_Metadata_Key_KeyProp = { "Metadata_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_Metadata_MetaData[] = {
		{ "Comment", "/** This preset's metadata. */" },
		{ "ModuleRelativePath", "Public/RemoteControlPreset.h" },
		{ "ToolTip", "This preset's metadata." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlPreset, Metadata), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_Metadata_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_Bindings_Inner = { "Bindings", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URemoteControlBinding_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_Bindings_MetaData[] = {
		{ "Category", "Remote Control Preset" },
		{ "Comment", "/** This preset's list of objects that are exposed or that have exposed fields. */" },
		{ "ModuleRelativePath", "Public/RemoteControlPreset.h" },
		{ "ToolTip", "This preset's list of objects that are exposed or that have exposed fields." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_Bindings = { "Bindings", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlPreset, Bindings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_Bindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_Bindings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_ControllerContainer_MetaData[] = {
		{ "Comment", "/** Holds virtual controllers properties, behaviours and actions */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RemoteControlPreset.h" },
		{ "ToolTip", "Holds virtual controllers properties, behaviours and actions" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_ControllerContainer = { "ControllerContainer", nullptr, (EPropertyFlags)0x0046000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlPreset, ControllerContainer), Z_Construct_UClass_URCVirtualPropertyContainerBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_ControllerContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_ControllerContainer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_PresetId_MetaData[] = {
		{ "Comment", "/** Preset unique ID */" },
		{ "ModuleRelativePath", "Public/RemoteControlPreset.h" },
		{ "ToolTip", "Preset unique ID" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_PresetId = { "PresetId", nullptr, (EPropertyFlags)0x0040010000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlPreset, PresetId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_PresetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_PresetId_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_FieldCache_ValueProp = { "FieldCache", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FRCCachedFieldData, METADATA_PARAMS(nullptr, 0) }; // 1283143483
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_FieldCache_Key_KeyProp = { "FieldCache_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_FieldCache_MetaData[] = {
		{ "Comment", "/** The cache for information about an exposed field. */" },
		{ "ModuleRelativePath", "Public/RemoteControlPreset.h" },
		{ "ToolTip", "The cache for information about an exposed field." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_FieldCache = { "FieldCache", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlPreset, FieldCache), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_FieldCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_FieldCache_MetaData)) }; // 1283143483
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_NameToGuidMap_ValueProp = { "NameToGuidMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_NameToGuidMap_Key_KeyProp = { "NameToGuidMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_NameToGuidMap_MetaData[] = {
		{ "Comment", "/** Map of Field Name to GUID. */" },
		{ "ModuleRelativePath", "Public/RemoteControlPreset.h" },
		{ "ToolTip", "Map of Field Name to GUID." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_NameToGuidMap = { "NameToGuidMap", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlPreset, NameToGuidMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_NameToGuidMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_NameToGuidMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_Registry_MetaData[] = {
		{ "Comment", "/** Holds exposed entities on the preset. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RemoteControlPreset.h" },
		{ "ToolTip", "Holds exposed entities on the preset." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_Registry = { "Registry", nullptr, (EPropertyFlags)0x0046000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlPreset, Registry), Z_Construct_UClass_URemoteControlExposeRegistry_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_Registry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_Registry_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_DetailsTabIdentifierOverrides_Inner = { "DetailsTabIdentifierOverrides", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_DetailsTabIdentifierOverrides_MetaData[] = {
		{ "ModuleRelativePath", "Public/RemoteControlPreset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_DetailsTabIdentifierOverrides = { "DetailsTabIdentifierOverrides", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlPreset, DetailsTabIdentifierOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_DetailsTabIdentifierOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_DetailsTabIdentifierOverrides_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URemoteControlPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_Layout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_Metadata_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_Metadata_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_Bindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_Bindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_ControllerContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_PresetId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_FieldCache_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_FieldCache_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_FieldCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_NameToGuidMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_NameToGuidMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_NameToGuidMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_Registry,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_DetailsTabIdentifierOverrides_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlPreset_Statics::NewProp_DetailsTabIdentifierOverrides,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URemoteControlPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemoteControlPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URemoteControlPreset_Statics::ClassParams = {
		&URemoteControlPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URemoteControlPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlPreset_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_URemoteControlPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URemoteControlPreset()
	{
		if (!Z_Registration_Info_UClass_URemoteControlPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URemoteControlPreset.OuterSingleton, Z_Construct_UClass_URemoteControlPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URemoteControlPreset.OuterSingleton;
	}
	template<> REMOTECONTROL_API UClass* StaticClass<URemoteControlPreset>()
	{
		return URemoteControlPreset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URemoteControlPreset);
	URemoteControlPreset::~URemoteControlPreset() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(URemoteControlPreset)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlPreset_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlPreset_h_Statics::ScriptStructInfo[] = {
		{ FRCCachedFieldData::StaticStruct, Z_Construct_UScriptStruct_FRCCachedFieldData_Statics::NewStructOps, TEXT("RCCachedFieldData"), &Z_Registration_Info_UScriptStruct_RCCachedFieldData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCCachedFieldData), 1283143483U) },
		{ FRemoteControlPresetGroup::StaticStruct, Z_Construct_UScriptStruct_FRemoteControlPresetGroup_Statics::NewStructOps, TEXT("RemoteControlPresetGroup"), &Z_Registration_Info_UScriptStruct_RemoteControlPresetGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoteControlPresetGroup), 2531970343U) },
		{ FRemoteControlPresetLayout::StaticStruct, Z_Construct_UScriptStruct_FRemoteControlPresetLayout_Statics::NewStructOps, TEXT("RemoteControlPresetLayout"), &Z_Registration_Info_UScriptStruct_RemoteControlPresetLayout, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoteControlPresetLayout), 853669599U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlPreset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URemoteControlPreset, URemoteControlPreset::StaticClass, TEXT("URemoteControlPreset"), &Z_Registration_Info_UClass_URemoteControlPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URemoteControlPreset), 3683474845U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlPreset_h_1317679454(TEXT("/Script/RemoteControl"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlPreset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlPreset_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlPreset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlPreset_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
