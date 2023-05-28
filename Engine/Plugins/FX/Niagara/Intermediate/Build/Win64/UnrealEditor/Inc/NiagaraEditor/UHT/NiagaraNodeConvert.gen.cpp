// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/NiagaraNodeConvert.h"
#include "../Public/NiagaraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraNodeConvert() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraTypeDefinition();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeConvert();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeConvert_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeWithDynamicPins();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraConvertConnection();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraConvertPinRecord();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraConvertPinRecord;
class UScriptStruct* FNiagaraConvertPinRecord::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraConvertPinRecord.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraConvertPinRecord.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraConvertPinRecord, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("NiagaraConvertPinRecord"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraConvertPinRecord.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FNiagaraConvertPinRecord>()
{
	return FNiagaraConvertPinRecord::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraConvertPinRecord_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PinId;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Path_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Path;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraConvertPinRecord_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Helper struct that stores the location of a socket.*/" },
		{ "ModuleRelativePath", "Private/NiagaraNodeConvert.h" },
		{ "ToolTip", "Helper struct that stores the location of a socket." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraConvertPinRecord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraConvertPinRecord>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraConvertPinRecord_Statics::NewProp_PinId_MetaData[] = {
		{ "ModuleRelativePath", "Private/NiagaraNodeConvert.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraConvertPinRecord_Statics::NewProp_PinId = { "PinId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraConvertPinRecord, PinId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraConvertPinRecord_Statics::NewProp_PinId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraConvertPinRecord_Statics::NewProp_PinId_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraConvertPinRecord_Statics::NewProp_Path_Inner = { "Path", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraConvertPinRecord_Statics::NewProp_Path_MetaData[] = {
		{ "ModuleRelativePath", "Private/NiagaraNodeConvert.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraConvertPinRecord_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraConvertPinRecord, Path), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraConvertPinRecord_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraConvertPinRecord_Statics::NewProp_Path_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraConvertPinRecord_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraConvertPinRecord_Statics::NewProp_PinId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraConvertPinRecord_Statics::NewProp_Path_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraConvertPinRecord_Statics::NewProp_Path,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraConvertPinRecord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		&NewStructOps,
		"NiagaraConvertPinRecord",
		sizeof(FNiagaraConvertPinRecord),
		alignof(FNiagaraConvertPinRecord),
		Z_Construct_UScriptStruct_FNiagaraConvertPinRecord_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraConvertPinRecord_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraConvertPinRecord_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraConvertPinRecord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraConvertPinRecord()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraConvertPinRecord.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraConvertPinRecord.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraConvertPinRecord_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraConvertPinRecord.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraConvertConnection;
class UScriptStruct* FNiagaraConvertConnection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraConvertConnection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraConvertConnection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraConvertConnection, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("NiagaraConvertConnection"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraConvertConnection.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FNiagaraConvertConnection>()
{
	return FNiagaraConvertConnection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraConvertConnection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourcePinId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourcePinId;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SourcePath_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourcePath_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SourcePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationPinId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DestinationPinId;
		static const UECodeGen_Private::FNamePropertyParams NewProp_DestinationPath_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationPath_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DestinationPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourcePropertyId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourcePropertyId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationPropertyId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DestinationPropertyId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraConvertConnection_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Helper struct that stores a connection between two sockets.*/" },
		{ "ModuleRelativePath", "Private/NiagaraNodeConvert.h" },
		{ "ToolTip", "Helper struct that stores a connection between two sockets." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraConvertConnection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraConvertConnection>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraConvertConnection_Statics::NewProp_SourcePinId_MetaData[] = {
		{ "ModuleRelativePath", "Private/NiagaraNodeConvert.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraConvertConnection_Statics::NewProp_SourcePinId = { "SourcePinId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraConvertConnection, SourcePinId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraConvertConnection_Statics::NewProp_SourcePinId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraConvertConnection_Statics::NewProp_SourcePinId_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraConvertConnection_Statics::NewProp_SourcePath_Inner = { "SourcePath", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraConvertConnection_Statics::NewProp_SourcePath_MetaData[] = {
		{ "ModuleRelativePath", "Private/NiagaraNodeConvert.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraConvertConnection_Statics::NewProp_SourcePath = { "SourcePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraConvertConnection, SourcePath), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraConvertConnection_Statics::NewProp_SourcePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraConvertConnection_Statics::NewProp_SourcePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraConvertConnection_Statics::NewProp_DestinationPinId_MetaData[] = {
		{ "ModuleRelativePath", "Private/NiagaraNodeConvert.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraConvertConnection_Statics::NewProp_DestinationPinId = { "DestinationPinId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraConvertConnection, DestinationPinId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraConvertConnection_Statics::NewProp_DestinationPinId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraConvertConnection_Statics::NewProp_DestinationPinId_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraConvertConnection_Statics::NewProp_DestinationPath_Inner = { "DestinationPath", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraConvertConnection_Statics::NewProp_DestinationPath_MetaData[] = {
		{ "ModuleRelativePath", "Private/NiagaraNodeConvert.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraConvertConnection_Statics::NewProp_DestinationPath = { "DestinationPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraConvertConnection, DestinationPath), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraConvertConnection_Statics::NewProp_DestinationPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraConvertConnection_Statics::NewProp_DestinationPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraConvertConnection_Statics::NewProp_SourcePropertyId_MetaData[] = {
		{ "Comment", "// Optional Guids for storing the property's Guid within a struct to help with determining if a rename has occurred.\n" },
		{ "ModuleRelativePath", "Private/NiagaraNodeConvert.h" },
		{ "ToolTip", "Optional Guids for storing the property's Guid within a struct to help with determining if a rename has occurred." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraConvertConnection_Statics::NewProp_SourcePropertyId = { "SourcePropertyId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraConvertConnection, SourcePropertyId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraConvertConnection_Statics::NewProp_SourcePropertyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraConvertConnection_Statics::NewProp_SourcePropertyId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraConvertConnection_Statics::NewProp_DestinationPropertyId_MetaData[] = {
		{ "ModuleRelativePath", "Private/NiagaraNodeConvert.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraConvertConnection_Statics::NewProp_DestinationPropertyId = { "DestinationPropertyId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraConvertConnection, DestinationPropertyId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraConvertConnection_Statics::NewProp_DestinationPropertyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraConvertConnection_Statics::NewProp_DestinationPropertyId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraConvertConnection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraConvertConnection_Statics::NewProp_SourcePinId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraConvertConnection_Statics::NewProp_SourcePath_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraConvertConnection_Statics::NewProp_SourcePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraConvertConnection_Statics::NewProp_DestinationPinId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraConvertConnection_Statics::NewProp_DestinationPath_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraConvertConnection_Statics::NewProp_DestinationPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraConvertConnection_Statics::NewProp_SourcePropertyId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraConvertConnection_Statics::NewProp_DestinationPropertyId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraConvertConnection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		&NewStructOps,
		"NiagaraConvertConnection",
		sizeof(FNiagaraConvertConnection),
		alignof(FNiagaraConvertConnection),
		Z_Construct_UScriptStruct_FNiagaraConvertConnection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraConvertConnection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraConvertConnection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraConvertConnection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraConvertConnection()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraConvertConnection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraConvertConnection.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraConvertConnection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraConvertConnection.InnerSingleton;
	}
	void UNiagaraNodeConvert::StaticRegisterNativesUNiagaraNodeConvert()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraNodeConvert);
	UClass* Z_Construct_UClass_UNiagaraNodeConvert_NoRegister()
	{
		return UNiagaraNodeConvert::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraNodeConvert_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutowireSwizzle_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AutowireSwizzle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutowireMakeType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AutowireMakeType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutowireBreakType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AutowireBreakType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Connections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Connections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Connections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsWiringShown_MetaData[];
#endif
		static void NewProp_bIsWiringShown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWiringShown;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExpandedItems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpandedItems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExpandedItems;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraNodeConvert_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraNodeWithDynamicPins,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeConvert_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A node which allows the user to build a set of arbitrary output types from an arbitrary set of input types by connecting their inner components. */" },
		{ "IncludePath", "NiagaraNodeConvert.h" },
		{ "ModuleRelativePath", "Private/NiagaraNodeConvert.h" },
		{ "ToolTip", "A node which allows the user to build a set of arbitrary output types from an arbitrary set of input types by connecting their inner components." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeConvert_Statics::NewProp_AutowireSwizzle_MetaData[] = {
		{ "Comment", "//A swizzle string set externally to instruct the autowiring code.\n" },
		{ "ModuleRelativePath", "Private/NiagaraNodeConvert.h" },
		{ "ToolTip", "A swizzle string set externally to instruct the autowiring code." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraNodeConvert_Statics::NewProp_AutowireSwizzle = { "AutowireSwizzle", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeConvert, AutowireSwizzle), METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeConvert_Statics::NewProp_AutowireSwizzle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeConvert_Statics::NewProp_AutowireSwizzle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeConvert_Statics::NewProp_AutowireMakeType_MetaData[] = {
		{ "Comment", "//A type def used when auto wiring up the convert node.\n" },
		{ "ModuleRelativePath", "Private/NiagaraNodeConvert.h" },
		{ "ToolTip", "A type def used when auto wiring up the convert node." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraNodeConvert_Statics::NewProp_AutowireMakeType = { "AutowireMakeType", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeConvert, AutowireMakeType), Z_Construct_UScriptStruct_FNiagaraTypeDefinition, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeConvert_Statics::NewProp_AutowireMakeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeConvert_Statics::NewProp_AutowireMakeType_MetaData)) }; // 1791563344
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeConvert_Statics::NewProp_AutowireBreakType_MetaData[] = {
		{ "ModuleRelativePath", "Private/NiagaraNodeConvert.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraNodeConvert_Statics::NewProp_AutowireBreakType = { "AutowireBreakType", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeConvert, AutowireBreakType), Z_Construct_UScriptStruct_FNiagaraTypeDefinition, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeConvert_Statics::NewProp_AutowireBreakType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeConvert_Statics::NewProp_AutowireBreakType_MetaData)) }; // 1791563344
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraNodeConvert_Statics::NewProp_Connections_Inner = { "Connections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraConvertConnection, METADATA_PARAMS(nullptr, 0) }; // 2752689917
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeConvert_Statics::NewProp_Connections_MetaData[] = {
		{ "Comment", "/** The internal connections for this node. */" },
		{ "ModuleRelativePath", "Private/NiagaraNodeConvert.h" },
		{ "ToolTip", "The internal connections for this node." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraNodeConvert_Statics::NewProp_Connections = { "Connections", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeConvert, Connections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeConvert_Statics::NewProp_Connections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeConvert_Statics::NewProp_Connections_MetaData)) }; // 2752689917
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeConvert_Statics::NewProp_bIsWiringShown_MetaData[] = {
		{ "Comment", "/** Is the switcboard UI shown?*/" },
		{ "ModuleRelativePath", "Private/NiagaraNodeConvert.h" },
		{ "ToolTip", "Is the switcboard UI shown?" },
	};
#endif
	void Z_Construct_UClass_UNiagaraNodeConvert_Statics::NewProp_bIsWiringShown_SetBit(void* Obj)
	{
		((UNiagaraNodeConvert*)Obj)->bIsWiringShown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraNodeConvert_Statics::NewProp_bIsWiringShown = { "bIsWiringShown", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraNodeConvert), &Z_Construct_UClass_UNiagaraNodeConvert_Statics::NewProp_bIsWiringShown_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeConvert_Statics::NewProp_bIsWiringShown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeConvert_Statics::NewProp_bIsWiringShown_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraNodeConvert_Statics::NewProp_ExpandedItems_Inner = { "ExpandedItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraConvertPinRecord, METADATA_PARAMS(nullptr, 0) }; // 252284655
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeConvert_Statics::NewProp_ExpandedItems_MetaData[] = {
		{ "Comment", "/** Store of all sockets that are expanded.*/" },
		{ "ModuleRelativePath", "Private/NiagaraNodeConvert.h" },
		{ "ToolTip", "Store of all sockets that are expanded." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraNodeConvert_Statics::NewProp_ExpandedItems = { "ExpandedItems", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeConvert, ExpandedItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeConvert_Statics::NewProp_ExpandedItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeConvert_Statics::NewProp_ExpandedItems_MetaData)) }; // 252284655
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraNodeConvert_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeConvert_Statics::NewProp_AutowireSwizzle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeConvert_Statics::NewProp_AutowireMakeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeConvert_Statics::NewProp_AutowireBreakType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeConvert_Statics::NewProp_Connections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeConvert_Statics::NewProp_Connections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeConvert_Statics::NewProp_bIsWiringShown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeConvert_Statics::NewProp_ExpandedItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeConvert_Statics::NewProp_ExpandedItems,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraNodeConvert_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraNodeConvert>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraNodeConvert_Statics::ClassParams = {
		&UNiagaraNodeConvert::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraNodeConvert_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeConvert_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeConvert_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeConvert_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraNodeConvert()
	{
		if (!Z_Registration_Info_UClass_UNiagaraNodeConvert.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraNodeConvert.OuterSingleton, Z_Construct_UClass_UNiagaraNodeConvert_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraNodeConvert.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraNodeConvert>()
	{
		return UNiagaraNodeConvert::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraNodeConvert);
	UNiagaraNodeConvert::~UNiagaraNodeConvert() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeConvert_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeConvert_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraConvertPinRecord::StaticStruct, Z_Construct_UScriptStruct_FNiagaraConvertPinRecord_Statics::NewStructOps, TEXT("NiagaraConvertPinRecord"), &Z_Registration_Info_UScriptStruct_NiagaraConvertPinRecord, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraConvertPinRecord), 252284655U) },
		{ FNiagaraConvertConnection::StaticStruct, Z_Construct_UScriptStruct_FNiagaraConvertConnection_Statics::NewStructOps, TEXT("NiagaraConvertConnection"), &Z_Registration_Info_UScriptStruct_NiagaraConvertConnection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraConvertConnection), 2752689917U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeConvert_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraNodeConvert, UNiagaraNodeConvert::StaticClass, TEXT("UNiagaraNodeConvert"), &Z_Registration_Info_UClass_UNiagaraNodeConvert, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraNodeConvert), 2099776990U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeConvert_h_1683447275(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeConvert_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeConvert_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeConvert_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeConvert_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
