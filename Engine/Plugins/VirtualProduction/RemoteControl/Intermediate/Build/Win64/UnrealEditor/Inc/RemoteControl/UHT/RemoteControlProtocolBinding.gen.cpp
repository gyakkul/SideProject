// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RemoteControlProtocolBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteControlProtocolBinding() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	REMOTECONTROL_API UClass* Z_Construct_UClass_URemoteControlPreset_NoRegister();
	REMOTECONTROL_API UEnum* Z_Construct_UEnum_RemoteControl_ERCBindingStatus();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlProtocolBinding();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlProtocolEntity();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlProtocolMapping();
	REMOTECONTROLCOMMON_API UEnum* Z_Construct_UEnum_RemoteControlCommon_ERCMask();
	UPackage* Z_Construct_UPackage__Script_RemoteControl();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERCBindingStatus;
	static UEnum* ERCBindingStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERCBindingStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERCBindingStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RemoteControl_ERCBindingStatus, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("ERCBindingStatus"));
		}
		return Z_Registration_Info_UEnum_ERCBindingStatus.OuterSingleton;
	}
	template<> REMOTECONTROL_API UEnum* StaticEnum<ERCBindingStatus>()
	{
		return ERCBindingStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_RemoteControl_ERCBindingStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RemoteControl_ERCBindingStatus_Statics::Enumerators[] = {
		{ "ERCBindingStatus::Unassigned", (int64)ERCBindingStatus::Unassigned },
		{ "ERCBindingStatus::Awaiting", (int64)ERCBindingStatus::Awaiting },
		{ "ERCBindingStatus::Bound", (int64)ERCBindingStatus::Bound },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RemoteControl_ERCBindingStatus_Statics::Enum_MetaDataParams[] = {
		{ "Awaiting.Name", "ERCBindingStatus::Awaiting" },
		{ "Bound.Name", "ERCBindingStatus::Bound" },
		{ "Comment", "/**\n * Status of the binding \n */" },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolBinding.h" },
		{ "ToolTip", "Status of the binding" },
		{ "Unassigned.Name", "ERCBindingStatus::Unassigned" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RemoteControl_ERCBindingStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RemoteControl,
		nullptr,
		"ERCBindingStatus",
		"ERCBindingStatus",
		Z_Construct_UEnum_RemoteControl_ERCBindingStatus_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RemoteControl_ERCBindingStatus_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RemoteControl_ERCBindingStatus_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RemoteControl_ERCBindingStatus_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RemoteControl_ERCBindingStatus()
	{
		if (!Z_Registration_Info_UEnum_ERCBindingStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERCBindingStatus.InnerSingleton, Z_Construct_UEnum_RemoteControl_ERCBindingStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERCBindingStatus.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoteControlProtocolMapping;
class UScriptStruct* FRemoteControlProtocolMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteControlProtocolMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoteControlProtocolMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteControlProtocolMapping, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("RemoteControlProtocolMapping"));
	}
	return Z_Registration_Info_UScriptStruct_RemoteControlProtocolMapping.OuterSingleton;
}
template<> REMOTECONTROL_API UScriptStruct* StaticStruct<FRemoteControlProtocolMapping>()
{
	return FRemoteControlProtocolMapping::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InterpolationRangePropertyData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationRangePropertyData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InterpolationRangePropertyData;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InterpolationMappingPropertyData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationMappingPropertyData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InterpolationMappingPropertyData;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InterpolationRangePropertyDataCache_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationRangePropertyDataCache_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InterpolationRangePropertyDataCache;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InterpolationMappingPropertyDataCache_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationMappingPropertyDataCache_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InterpolationMappingPropertyDataCache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationMappingPropertyElementNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InterpolationMappingPropertyElementNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundPropertyPath_MetaData[];
#endif
		static const UECodeGen_Private::FFieldPathPropertyParams NewProp_BoundPropertyPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/*\n * Mapping of the range of the values for the protocol\n * This class holds a generic range buffer.\n * For example, it could be FFloatProperty 4 bytes\n * Or it could be any UScripStruct, like FVector - 12 bytes\n * Or any custom struct, arrays, maps, sets, or primitive properties\n */" },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolBinding.h" },
		{ "ToolTip", "* Mapping of the range of the values for the protocol\n* This class holds a generic range buffer.\n* For example, it could be FFloatProperty 4 bytes\n* Or it could be any UScripStruct, like FVector - 12 bytes\n* Or any custom struct, arrays, maps, sets, or primitive properties" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteControlProtocolMapping>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::NewProp_Id_MetaData[] = {
		{ "Comment", "/** Unique Id of the current binding */" },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolBinding.h" },
		{ "ToolTip", "Unique Id of the current binding" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlProtocolMapping, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::NewProp_Id_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::NewProp_InterpolationRangePropertyData_Inner = { "InterpolationRangePropertyData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::NewProp_InterpolationRangePropertyData_MetaData[] = {
		{ "Comment", "/**\n\x09 * The current integer value of the mapping range. It could be a float, int32, uint8, etc.\n\x09 * That is based on protocol input data.\n\x09 * \n\x09 *  For example, it could be uint8 in the case of one-byte mapping. In this case, the range value could be from 0 up to 255, which bound to InterpolationMappingPropertyData\n\x09 */" },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolBinding.h" },
		{ "ToolTip", "The current integer value of the mapping range. It could be a float, int32, uint8, etc.\nThat is based on protocol input data.\n\n For example, it could be uint8 in the case of one-byte mapping. In this case, the range value could be from 0 up to 255, which bound to InterpolationMappingPropertyData" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::NewProp_InterpolationRangePropertyData = { "InterpolationRangePropertyData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlProtocolMapping, InterpolationRangePropertyData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::NewProp_InterpolationRangePropertyData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::NewProp_InterpolationRangePropertyData_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::NewProp_InterpolationMappingPropertyData_Inner = { "InterpolationMappingPropertyData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::NewProp_InterpolationMappingPropertyData_MetaData[] = {
		{ "Comment", "/** \n\x09 * Holds the serialized mapped property data. \n\x09 * It could be a primitive value for FNumericProperty, or a text representation for a struct.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolBinding.h" },
		{ "ToolTip", "Holds the serialized mapped property data.\nIt could be a primitive value for FNumericProperty, or a text representation for a struct." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::NewProp_InterpolationMappingPropertyData = { "InterpolationMappingPropertyData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlProtocolMapping, InterpolationMappingPropertyData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::NewProp_InterpolationMappingPropertyData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::NewProp_InterpolationMappingPropertyData_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::NewProp_InterpolationRangePropertyDataCache_Inner = { "InterpolationRangePropertyDataCache", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::NewProp_InterpolationRangePropertyDataCache_MetaData[] = {
		{ "Comment", "/** \n\x09* Holds the range property data buffer. \n\x09* This is the cached raw data as opposed to the serialized data.\n\x09*/" },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolBinding.h" },
		{ "ToolTip", "Holds the range property data buffer.\nThis is the cached raw data as opposed to the serialized data." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::NewProp_InterpolationRangePropertyDataCache = { "InterpolationRangePropertyDataCache", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlProtocolMapping, InterpolationRangePropertyDataCache), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::NewProp_InterpolationRangePropertyDataCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::NewProp_InterpolationRangePropertyDataCache_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::NewProp_InterpolationMappingPropertyDataCache_Inner = { "InterpolationMappingPropertyDataCache", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::NewProp_InterpolationMappingPropertyDataCache_MetaData[] = {
		{ "Comment", "/** \n\x09* Holds the mapped property data buffer. \n\x09* This is the cached raw data as opposed to the serialized data, so it doesn't contain type information.\n\x09*/" },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolBinding.h" },
		{ "ToolTip", "Holds the mapped property data buffer.\nThis is the cached raw data as opposed to the serialized data, so it doesn't contain type information." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::NewProp_InterpolationMappingPropertyDataCache = { "InterpolationMappingPropertyDataCache", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlProtocolMapping, InterpolationMappingPropertyDataCache), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::NewProp_InterpolationMappingPropertyDataCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::NewProp_InterpolationMappingPropertyDataCache_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::NewProp_InterpolationMappingPropertyElementNum_MetaData[] = {
		{ "Comment", "/** The element count if the Mapping is an array. */" },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolBinding.h" },
		{ "ToolTip", "The element count if the Mapping is an array." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::NewProp_InterpolationMappingPropertyElementNum = { "InterpolationMappingPropertyElementNum", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlProtocolMapping, InterpolationMappingPropertyElementNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::NewProp_InterpolationMappingPropertyElementNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::NewProp_InterpolationMappingPropertyElementNum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::NewProp_BoundPropertyPath_MetaData[] = {
		{ "Comment", "/** Holds the bound property path */" },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolBinding.h" },
		{ "ToolTip", "Holds the bound property path" },
	};
#endif
	const UECodeGen_Private::FFieldPathPropertyParams Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::NewProp_BoundPropertyPath = { "BoundPropertyPath", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlProtocolMapping, BoundPropertyPath), &FProperty::StaticClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::NewProp_BoundPropertyPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::NewProp_BoundPropertyPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::NewProp_InterpolationRangePropertyData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::NewProp_InterpolationRangePropertyData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::NewProp_InterpolationMappingPropertyData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::NewProp_InterpolationMappingPropertyData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::NewProp_InterpolationRangePropertyDataCache_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::NewProp_InterpolationRangePropertyDataCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::NewProp_InterpolationMappingPropertyDataCache_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::NewProp_InterpolationMappingPropertyDataCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::NewProp_InterpolationMappingPropertyElementNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::NewProp_BoundPropertyPath,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
		nullptr,
		&NewStructOps,
		"RemoteControlProtocolMapping",
		sizeof(FRemoteControlProtocolMapping),
		alignof(FRemoteControlProtocolMapping),
		Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlProtocolMapping()
	{
		if (!Z_Registration_Info_UScriptStruct_RemoteControlProtocolMapping.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoteControlProtocolMapping.InnerSingleton, Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RemoteControlProtocolMapping.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoteControlProtocolEntity;
class UScriptStruct* FRemoteControlProtocolEntity::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteControlProtocolEntity.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoteControlProtocolEntity.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteControlProtocolEntity, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("RemoteControlProtocolEntity"));
	}
	return Z_Registration_Info_UScriptStruct_RemoteControlProtocolEntity.OuterSingleton;
}
template<> REMOTECONTROL_API UScriptStruct* StaticStruct<FRemoteControlProtocolEntity>()
{
	return FRemoteControlProtocolEntity::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRemoteControlProtocolEntity_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Owner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Mappings_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mappings_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_Mappings;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OverridenMasks_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverridenMasks_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OverridenMasks;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BindingStatus_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingStatus_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BindingStatus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlProtocolEntity_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * These structures serve both as properties mapping as well as UI generation\n * Protocols should implement it based on the parameters they need.\n */" },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolBinding.h" },
		{ "ToolTip", "These structures serve both as properties mapping as well as UI generation\nProtocols should implement it based on the parameters they need." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteControlProtocolEntity_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteControlProtocolEntity>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlProtocolEntity_Statics::NewProp_Owner_MetaData[] = {
		{ "Comment", "/** The preset that owns this entity. */" },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolBinding.h" },
		{ "ToolTip", "The preset that owns this entity." },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FRemoteControlProtocolEntity_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlProtocolEntity, Owner), Z_Construct_UClass_URemoteControlPreset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlProtocolEntity_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlProtocolEntity_Statics::NewProp_Owner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlProtocolEntity_Statics::NewProp_PropertyId_MetaData[] = {
		{ "Comment", "/** Exposed property Id */" },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolBinding.h" },
		{ "ToolTip", "Exposed property Id" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteControlProtocolEntity_Statics::NewProp_PropertyId = { "PropertyId", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlProtocolEntity, PropertyId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlProtocolEntity_Statics::NewProp_PropertyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlProtocolEntity_Statics::NewProp_PropertyId_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteControlProtocolEntity_Statics::NewProp_Mappings_ElementProp = { "Mappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRemoteControlProtocolMapping, METADATA_PARAMS(nullptr, 0) }; // 3640086919
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlProtocolEntity_Statics::NewProp_Mappings_MetaData[] = {
		{ "Comment", "/** \n\x09 * Property mapping ranges set\n\x09 * Stores protocol mapping for this protocol binding entity\n\x09 */" },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolBinding.h" },
		{ "ToolTip", "Property mapping ranges set\nStores protocol mapping for this protocol binding entity" },
	};
#endif
	static_assert(TModels<CGetTypeHashable, FRemoteControlProtocolMapping>::Value, "The structure 'FRemoteControlProtocolMapping' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FRemoteControlProtocolEntity_Statics::NewProp_Mappings = { "Mappings", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlProtocolEntity, Mappings), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlProtocolEntity_Statics::NewProp_Mappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlProtocolEntity_Statics::NewProp_Mappings_MetaData)) }; // 3640086919
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRemoteControlProtocolEntity_Statics::NewProp_OverridenMasks_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlProtocolEntity_Statics::NewProp_OverridenMasks_MetaData[] = {
		{ "Comment", "/** Holds the overriden masks. */" },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolBinding.h" },
		{ "ToolTip", "Holds the overriden masks." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRemoteControlProtocolEntity_Statics::NewProp_OverridenMasks = { "OverridenMasks", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlProtocolEntity, OverridenMasks), Z_Construct_UEnum_RemoteControlCommon_ERCMask, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlProtocolEntity_Statics::NewProp_OverridenMasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlProtocolEntity_Statics::NewProp_OverridenMasks_MetaData)) }; // 271155464
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRemoteControlProtocolEntity_Statics::NewProp_BindingStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlProtocolEntity_Statics::NewProp_BindingStatus_MetaData[] = {
		{ "Comment", "/** Binding status of this protocol entity */" },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolBinding.h" },
		{ "ToolTip", "Binding status of this protocol entity" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRemoteControlProtocolEntity_Statics::NewProp_BindingStatus = { "BindingStatus", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlProtocolEntity, BindingStatus), Z_Construct_UEnum_RemoteControl_ERCBindingStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlProtocolEntity_Statics::NewProp_BindingStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlProtocolEntity_Statics::NewProp_BindingStatus_MetaData)) }; // 1944912660
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteControlProtocolEntity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlProtocolEntity_Statics::NewProp_Owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlProtocolEntity_Statics::NewProp_PropertyId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlProtocolEntity_Statics::NewProp_Mappings_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlProtocolEntity_Statics::NewProp_Mappings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlProtocolEntity_Statics::NewProp_OverridenMasks_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlProtocolEntity_Statics::NewProp_OverridenMasks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlProtocolEntity_Statics::NewProp_BindingStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlProtocolEntity_Statics::NewProp_BindingStatus,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteControlProtocolEntity_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
		nullptr,
		&NewStructOps,
		"RemoteControlProtocolEntity",
		sizeof(FRemoteControlProtocolEntity),
		alignof(FRemoteControlProtocolEntity),
		Z_Construct_UScriptStruct_FRemoteControlProtocolEntity_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlProtocolEntity_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlProtocolEntity_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlProtocolEntity_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlProtocolEntity()
	{
		if (!Z_Registration_Info_UScriptStruct_RemoteControlProtocolEntity.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoteControlProtocolEntity.InnerSingleton, Z_Construct_UScriptStruct_FRemoteControlProtocolEntity_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RemoteControlProtocolEntity.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoteControlProtocolBinding;
class UScriptStruct* FRemoteControlProtocolBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteControlProtocolBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoteControlProtocolBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteControlProtocolBinding, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("RemoteControlProtocolBinding"));
	}
	return Z_Registration_Info_UScriptStruct_RemoteControlProtocolBinding.OuterSingleton;
}
template<> REMOTECONTROL_API UScriptStruct* StaticStruct<FRemoteControlProtocolBinding>()
{
	return FRemoteControlProtocolBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRemoteControlProtocolBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProtocolName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ProtocolName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MappingPropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MappingPropertyName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlProtocolBinding_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Struct which holds the bound struct and serialized struct archive\n */" },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolBinding.h" },
		{ "ToolTip", "Struct which holds the bound struct and serialized struct archive" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteControlProtocolBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteControlProtocolBinding>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlProtocolBinding_Statics::NewProp_Id_MetaData[] = {
		{ "Comment", "/** Binding Id */" },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolBinding.h" },
		{ "ToolTip", "Binding Id" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteControlProtocolBinding_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlProtocolBinding, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlProtocolBinding_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlProtocolBinding_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlProtocolBinding_Statics::NewProp_ProtocolName_MetaData[] = {
		{ "Comment", "/** Protocol name which we using for binding */" },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolBinding.h" },
		{ "ToolTip", "Protocol name which we using for binding" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRemoteControlProtocolBinding_Statics::NewProp_ProtocolName = { "ProtocolName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlProtocolBinding, ProtocolName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlProtocolBinding_Statics::NewProp_ProtocolName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlProtocolBinding_Statics::NewProp_ProtocolName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlProtocolBinding_Statics::NewProp_PropertyId_MetaData[] = {
		{ "Comment", "/** Property Unique ID */" },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolBinding.h" },
		{ "ToolTip", "Property Unique ID" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteControlProtocolBinding_Statics::NewProp_PropertyId = { "PropertyId", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlProtocolBinding, PropertyId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlProtocolBinding_Statics::NewProp_PropertyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlProtocolBinding_Statics::NewProp_PropertyId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlProtocolBinding_Statics::NewProp_MappingPropertyName_MetaData[] = {
		{ "Comment", "/** Property name which we using for protocol range mapping */" },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolBinding.h" },
		{ "ToolTip", "Property name which we using for protocol range mapping" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRemoteControlProtocolBinding_Statics::NewProp_MappingPropertyName = { "MappingPropertyName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlProtocolBinding, MappingPropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlProtocolBinding_Statics::NewProp_MappingPropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlProtocolBinding_Statics::NewProp_MappingPropertyName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteControlProtocolBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlProtocolBinding_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlProtocolBinding_Statics::NewProp_ProtocolName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlProtocolBinding_Statics::NewProp_PropertyId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlProtocolBinding_Statics::NewProp_MappingPropertyName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteControlProtocolBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
		nullptr,
		&NewStructOps,
		"RemoteControlProtocolBinding",
		sizeof(FRemoteControlProtocolBinding),
		alignof(FRemoteControlProtocolBinding),
		Z_Construct_UScriptStruct_FRemoteControlProtocolBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlProtocolBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlProtocolBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlProtocolBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlProtocolBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_RemoteControlProtocolBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoteControlProtocolBinding.InnerSingleton, Z_Construct_UScriptStruct_FRemoteControlProtocolBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RemoteControlProtocolBinding.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlProtocolBinding_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlProtocolBinding_h_Statics::EnumInfo[] = {
		{ ERCBindingStatus_StaticEnum, TEXT("ERCBindingStatus"), &Z_Registration_Info_UEnum_ERCBindingStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1944912660U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlProtocolBinding_h_Statics::ScriptStructInfo[] = {
		{ FRemoteControlProtocolMapping::StaticStruct, Z_Construct_UScriptStruct_FRemoteControlProtocolMapping_Statics::NewStructOps, TEXT("RemoteControlProtocolMapping"), &Z_Registration_Info_UScriptStruct_RemoteControlProtocolMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoteControlProtocolMapping), 3640086919U) },
		{ FRemoteControlProtocolEntity::StaticStruct, Z_Construct_UScriptStruct_FRemoteControlProtocolEntity_Statics::NewStructOps, TEXT("RemoteControlProtocolEntity"), &Z_Registration_Info_UScriptStruct_RemoteControlProtocolEntity, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoteControlProtocolEntity), 3193498446U) },
		{ FRemoteControlProtocolBinding::StaticStruct, Z_Construct_UScriptStruct_FRemoteControlProtocolBinding_Statics::NewStructOps, TEXT("RemoteControlProtocolBinding"), &Z_Registration_Info_UScriptStruct_RemoteControlProtocolBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoteControlProtocolBinding), 4158509947U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlProtocolBinding_h_753957824(TEXT("/Script/RemoteControl"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlProtocolBinding_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlProtocolBinding_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlProtocolBinding_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlProtocolBinding_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
