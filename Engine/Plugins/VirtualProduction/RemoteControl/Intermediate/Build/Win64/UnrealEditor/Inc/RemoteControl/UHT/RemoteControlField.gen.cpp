// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RemoteControlField.h"
#include "RemoteControlFieldPath.h"
#include "RemoteControlProtocolBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteControlField() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UFunction();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	REMOTECONTROL_API UEnum* Z_Construct_UEnum_RemoteControl_EExposedFieldType();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCFieldPathInfo();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlEntity();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlField();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlFunction();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlProperty();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlProtocolBinding();
	UPackage* Z_Construct_UPackage__Script_RemoteControl();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EExposedFieldType;
	static UEnum* EExposedFieldType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EExposedFieldType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EExposedFieldType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RemoteControl_EExposedFieldType, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("EExposedFieldType"));
		}
		return Z_Registration_Info_UEnum_EExposedFieldType.OuterSingleton;
	}
	template<> REMOTECONTROL_API UEnum* StaticEnum<EExposedFieldType>()
	{
		return EExposedFieldType_StaticEnum();
	}
	struct Z_Construct_UEnum_RemoteControl_EExposedFieldType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RemoteControl_EExposedFieldType_Statics::Enumerators[] = {
		{ "EExposedFieldType::Invalid", (int64)EExposedFieldType::Invalid },
		{ "EExposedFieldType::Property", (int64)EExposedFieldType::Property },
		{ "EExposedFieldType::Function", (int64)EExposedFieldType::Function },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RemoteControl_EExposedFieldType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * The type of the exposed field.\n */" },
		{ "Function.Name", "EExposedFieldType::Function" },
		{ "Invalid.Name", "EExposedFieldType::Invalid" },
		{ "ModuleRelativePath", "Public/RemoteControlField.h" },
		{ "Property.Name", "EExposedFieldType::Property" },
		{ "ToolTip", "The type of the exposed field." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RemoteControl_EExposedFieldType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RemoteControl,
		nullptr,
		"EExposedFieldType",
		"EExposedFieldType",
		Z_Construct_UEnum_RemoteControl_EExposedFieldType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RemoteControl_EExposedFieldType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RemoteControl_EExposedFieldType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RemoteControl_EExposedFieldType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RemoteControl_EExposedFieldType()
	{
		if (!Z_Registration_Info_UEnum_EExposedFieldType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EExposedFieldType.InnerSingleton, Z_Construct_UEnum_RemoteControl_EExposedFieldType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EExposedFieldType.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRemoteControlField>() == std::is_polymorphic<FRemoteControlEntity>(), "USTRUCT FRemoteControlField cannot be polymorphic unless super FRemoteControlEntity is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoteControlField;
class UScriptStruct* FRemoteControlField::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteControlField.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoteControlField.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteControlField, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("RemoteControlField"));
	}
	return Z_Registration_Info_UScriptStruct_RemoteControlField.OuterSingleton;
}
template<> REMOTECONTROL_API UScriptStruct* StaticStruct<FRemoteControlField>()
{
	return FRemoteControlField::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRemoteControlField_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_FieldType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FieldType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldPathInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldPathInfo;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStrPropertyParams NewProp_ComponentHierarchy_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentHierarchy_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentHierarchy;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProtocolBindings_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProtocolBindings_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ProtocolBindings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerClass_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OwnerClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEditorOnly_MetaData[];
#endif
		static void NewProp_bIsEditorOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEditorOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveMasks_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActiveMasks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlField_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents a property or function that has been exposed to remote control.\n */" },
		{ "ModuleRelativePath", "Public/RemoteControlField.h" },
		{ "ToolTip", "Represents a property or function that has been exposed to remote control." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteControlField_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteControlField>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRemoteControlField_Statics::NewProp_FieldType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlField_Statics::NewProp_FieldType_MetaData[] = {
		{ "Category", "RemoteControlEntity" },
		{ "Comment", "/**\n\x09 * The field's type.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RemoteControlField.h" },
		{ "ToolTip", "The field's type." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRemoteControlField_Statics::NewProp_FieldType = { "FieldType", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlField, FieldType), Z_Construct_UEnum_RemoteControl_EExposedFieldType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlField_Statics::NewProp_FieldType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlField_Statics::NewProp_FieldType_MetaData)) }; // 4118473976
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlField_Statics::NewProp_FieldName_MetaData[] = {
		{ "Category", "RemoteControlEntity" },
		{ "Comment", "/**\n\x09 * The exposed field's name.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RemoteControlField.h" },
		{ "ToolTip", "The exposed field's name." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRemoteControlField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlField, FieldName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlField_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlField_Statics::NewProp_FieldPathInfo_MetaData[] = {
		{ "Comment", "/**\n\x09 * Path information pointing to this field\n\x09 */" },
		{ "ModuleRelativePath", "Public/RemoteControlField.h" },
		{ "ToolTip", "Path information pointing to this field" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteControlField_Statics::NewProp_FieldPathInfo = { "FieldPathInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlField, FieldPathInfo), Z_Construct_UScriptStruct_FRCFieldPathInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlField_Statics::NewProp_FieldPathInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlField_Statics::NewProp_FieldPathInfo_MetaData)) }; // 1811249294
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRemoteControlField_Statics::NewProp_ComponentHierarchy_Inner = { "ComponentHierarchy", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlField_Statics::NewProp_ComponentHierarchy_MetaData[] = {
		{ "ModuleRelativePath", "Public/RemoteControlField.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRemoteControlField_Statics::NewProp_ComponentHierarchy = { "ComponentHierarchy", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlField, ComponentHierarchy_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlField_Statics::NewProp_ComponentHierarchy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlField_Statics::NewProp_ComponentHierarchy_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteControlField_Statics::NewProp_ProtocolBindings_ElementProp = { "ProtocolBindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRemoteControlProtocolBinding, METADATA_PARAMS(nullptr, 0) }; // 4158509947
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlField_Statics::NewProp_ProtocolBindings_MetaData[] = {
		{ "Comment", "/**\n\x09 * Stores the bound protocols for this exposed field\n\x09 * It could store any types of the implemented protocols such as DMX, OSC, MIDI, etc\n\x09 * The map holds protocol bindings stores the protocol mapping and protocol-specific mapping\n\x09 */" },
		{ "ModuleRelativePath", "Public/RemoteControlField.h" },
		{ "ToolTip", "Stores the bound protocols for this exposed field\nIt could store any types of the implemented protocols such as DMX, OSC, MIDI, etc\nThe map holds protocol bindings stores the protocol mapping and protocol-specific mapping" },
	};
#endif
	static_assert(TModels<CGetTypeHashable, FRemoteControlProtocolBinding>::Value, "The structure 'FRemoteControlProtocolBinding' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FRemoteControlField_Statics::NewProp_ProtocolBindings = { "ProtocolBindings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlField, ProtocolBindings), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlField_Statics::NewProp_ProtocolBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlField_Statics::NewProp_ProtocolBindings_MetaData)) }; // 4158509947
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlField_Statics::NewProp_OwnerClass_MetaData[] = {
		{ "Comment", "/**\n\x09 * The class of the object that can have this field.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RemoteControlField.h" },
		{ "ToolTip", "The class of the object that can have this field." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteControlField_Statics::NewProp_OwnerClass = { "OwnerClass", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlField, OwnerClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlField_Statics::NewProp_OwnerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlField_Statics::NewProp_OwnerClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlField_Statics::NewProp_bIsEditorOnly_MetaData[] = {
		{ "Comment", "/** Whether the field is only available in editor. */" },
		{ "ModuleRelativePath", "Public/RemoteControlField.h" },
		{ "ToolTip", "Whether the field is only available in editor." },
	};
#endif
	void Z_Construct_UScriptStruct_FRemoteControlField_Statics::NewProp_bIsEditorOnly_SetBit(void* Obj)
	{
		((FRemoteControlField*)Obj)->bIsEditorOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRemoteControlField_Statics::NewProp_bIsEditorOnly = { "bIsEditorOnly", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRemoteControlField), &Z_Construct_UScriptStruct_FRemoteControlField_Statics::NewProp_bIsEditorOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlField_Statics::NewProp_bIsEditorOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlField_Statics::NewProp_bIsEditorOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlField_Statics::NewProp_ActiveMasks_MetaData[] = {
		{ "Comment", "/** Holds the actively enabled masks. */" },
		{ "ModuleRelativePath", "Public/RemoteControlField.h" },
		{ "ToolTip", "Holds the actively enabled masks." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRemoteControlField_Statics::NewProp_ActiveMasks = { "ActiveMasks", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlField, ActiveMasks), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlField_Statics::NewProp_ActiveMasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlField_Statics::NewProp_ActiveMasks_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteControlField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlField_Statics::NewProp_FieldType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlField_Statics::NewProp_FieldType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlField_Statics::NewProp_FieldPathInfo,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlField_Statics::NewProp_ComponentHierarchy_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlField_Statics::NewProp_ComponentHierarchy,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlField_Statics::NewProp_ProtocolBindings_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlField_Statics::NewProp_ProtocolBindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlField_Statics::NewProp_OwnerClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlField_Statics::NewProp_bIsEditorOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlField_Statics::NewProp_ActiveMasks,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteControlField_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
		Z_Construct_UScriptStruct_FRemoteControlEntity,
		&NewStructOps,
		"RemoteControlField",
		sizeof(FRemoteControlField),
		alignof(FRemoteControlField),
		Z_Construct_UScriptStruct_FRemoteControlField_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlField_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlField_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlField_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlField()
	{
		if (!Z_Registration_Info_UScriptStruct_RemoteControlField.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoteControlField.InnerSingleton, Z_Construct_UScriptStruct_FRemoteControlField_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RemoteControlField.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRemoteControlProperty>() == std::is_polymorphic<FRemoteControlField>(), "USTRUCT FRemoteControlProperty cannot be polymorphic unless super FRemoteControlField is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoteControlProperty;
class UScriptStruct* FRemoteControlProperty::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteControlProperty.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoteControlProperty.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteControlProperty, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("RemoteControlProperty"));
	}
	return Z_Registration_Info_UScriptStruct_RemoteControlProperty.OuterSingleton;
}
template<> REMOTECONTROL_API UScriptStruct* StaticStruct<FRemoteControlProperty>()
{
	return FRemoteControlProperty::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRemoteControlProperty_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEditableInPackaged_MetaData[];
#endif
		static void NewProp_bIsEditableInPackaged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEditableInPackaged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlProperty_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents a property exposed to remote control.\n */" },
		{ "ModuleRelativePath", "Public/RemoteControlField.h" },
		{ "ToolTip", "Represents a property exposed to remote control." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteControlProperty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteControlProperty>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlProperty_Statics::NewProp_bIsEditableInPackaged_MetaData[] = {
		{ "Comment", "/** Whether the property is blueprint read only. */" },
		{ "ModuleRelativePath", "Public/RemoteControlField.h" },
		{ "ToolTip", "Whether the property is blueprint read only." },
	};
#endif
	void Z_Construct_UScriptStruct_FRemoteControlProperty_Statics::NewProp_bIsEditableInPackaged_SetBit(void* Obj)
	{
		((FRemoteControlProperty*)Obj)->bIsEditableInPackaged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRemoteControlProperty_Statics::NewProp_bIsEditableInPackaged = { "bIsEditableInPackaged", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRemoteControlProperty), &Z_Construct_UScriptStruct_FRemoteControlProperty_Statics::NewProp_bIsEditableInPackaged_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlProperty_Statics::NewProp_bIsEditableInPackaged_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlProperty_Statics::NewProp_bIsEditableInPackaged_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteControlProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlProperty_Statics::NewProp_bIsEditableInPackaged,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteControlProperty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
		Z_Construct_UScriptStruct_FRemoteControlField,
		&NewStructOps,
		"RemoteControlProperty",
		sizeof(FRemoteControlProperty),
		alignof(FRemoteControlProperty),
		Z_Construct_UScriptStruct_FRemoteControlProperty_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlProperty_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlProperty_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlProperty_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlProperty()
	{
		if (!Z_Registration_Info_UScriptStruct_RemoteControlProperty.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoteControlProperty.InnerSingleton, Z_Construct_UScriptStruct_FRemoteControlProperty_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RemoteControlProperty.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRemoteControlFunction>() == std::is_polymorphic<FRemoteControlField>(), "USTRUCT FRemoteControlFunction cannot be polymorphic unless super FRemoteControlField is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoteControlFunction;
class UScriptStruct* FRemoteControlFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteControlFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoteControlFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteControlFunction, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("RemoteControlFunction"));
	}
	return Z_Registration_Info_UScriptStruct_RemoteControlFunction.OuterSingleton;
}
template<> REMOTECONTROL_API UScriptStruct* StaticStruct<FRemoteControlFunction>()
{
	return FRemoteControlFunction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRemoteControlFunction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Function;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCallableInPackaged_MetaData[];
#endif
		static void NewProp_bIsCallableInPackaged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCallableInPackaged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FunctionPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlFunction_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents a function exposed to remote control.\n */" },
		{ "ModuleRelativePath", "Public/RemoteControlField.h" },
		{ "ToolTip", "Represents a function exposed to remote control." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteControlFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteControlFunction>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlFunction_Statics::NewProp_Function_MetaData[] = {
		{ "ModuleRelativePath", "Public/RemoteControlField.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FRemoteControlFunction_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0014000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlFunction, Function_DEPRECATED), Z_Construct_UClass_UFunction, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlFunction_Statics::NewProp_Function_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlFunction_Statics::NewProp_Function_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlFunction_Statics::NewProp_bIsCallableInPackaged_MetaData[] = {
		{ "Comment", "/** Whether the function is callable in a packaged build. */" },
		{ "ModuleRelativePath", "Public/RemoteControlField.h" },
		{ "ToolTip", "Whether the function is callable in a packaged build." },
	};
#endif
	void Z_Construct_UScriptStruct_FRemoteControlFunction_Statics::NewProp_bIsCallableInPackaged_SetBit(void* Obj)
	{
		((FRemoteControlFunction*)Obj)->bIsCallableInPackaged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRemoteControlFunction_Statics::NewProp_bIsCallableInPackaged = { "bIsCallableInPackaged", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRemoteControlFunction), &Z_Construct_UScriptStruct_FRemoteControlFunction_Statics::NewProp_bIsCallableInPackaged_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlFunction_Statics::NewProp_bIsCallableInPackaged_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlFunction_Statics::NewProp_bIsCallableInPackaged_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlFunction_Statics::NewProp_FunctionPath_MetaData[] = {
		{ "Comment", "/** The exposed function. */" },
		{ "ModuleRelativePath", "Public/RemoteControlField.h" },
		{ "ToolTip", "The exposed function." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteControlFunction_Statics::NewProp_FunctionPath = { "FunctionPath", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlFunction, FunctionPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlFunction_Statics::NewProp_FunctionPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlFunction_Statics::NewProp_FunctionPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteControlFunction_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlFunction_Statics::NewProp_Function,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlFunction_Statics::NewProp_bIsCallableInPackaged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlFunction_Statics::NewProp_FunctionPath,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteControlFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
		Z_Construct_UScriptStruct_FRemoteControlField,
		&NewStructOps,
		"RemoteControlFunction",
		sizeof(FRemoteControlFunction),
		alignof(FRemoteControlFunction),
		Z_Construct_UScriptStruct_FRemoteControlFunction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlFunction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlFunction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlFunction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlFunction()
	{
		if (!Z_Registration_Info_UScriptStruct_RemoteControlFunction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoteControlFunction.InnerSingleton, Z_Construct_UScriptStruct_FRemoteControlFunction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RemoteControlFunction.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlField_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlField_h_Statics::EnumInfo[] = {
		{ EExposedFieldType_StaticEnum, TEXT("EExposedFieldType"), &Z_Registration_Info_UEnum_EExposedFieldType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4118473976U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlField_h_Statics::ScriptStructInfo[] = {
		{ FRemoteControlField::StaticStruct, Z_Construct_UScriptStruct_FRemoteControlField_Statics::NewStructOps, TEXT("RemoteControlField"), &Z_Registration_Info_UScriptStruct_RemoteControlField, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoteControlField), 695647822U) },
		{ FRemoteControlProperty::StaticStruct, Z_Construct_UScriptStruct_FRemoteControlProperty_Statics::NewStructOps, TEXT("RemoteControlProperty"), &Z_Registration_Info_UScriptStruct_RemoteControlProperty, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoteControlProperty), 1846048769U) },
		{ FRemoteControlFunction::StaticStruct, Z_Construct_UScriptStruct_FRemoteControlFunction_Statics::NewStructOps, TEXT("RemoteControlFunction"), &Z_Registration_Info_UScriptStruct_RemoteControlFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoteControlFunction), 161557203U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlField_h_1330711491(TEXT("/Script/RemoteControl"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlField_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlField_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlField_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlField_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
