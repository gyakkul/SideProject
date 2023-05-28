// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DirectLinkMessages.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirectLinkMessages() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	DIRECTLINK_API UScriptStruct* Z_Construct_UScriptStruct_FDirectLinkMsg_CloseStreamRequest();
	DIRECTLINK_API UScriptStruct* Z_Construct_UScriptStruct_FDirectLinkMsg_DeltaMessage();
	DIRECTLINK_API UScriptStruct* Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointLifecycle();
	DIRECTLINK_API UScriptStruct* Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState();
	DIRECTLINK_API UScriptStruct* Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage();
	DIRECTLINK_API UScriptStruct* Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamAnswer();
	DIRECTLINK_API UScriptStruct* Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamRequest();
	DIRECTLINK_API UScriptStruct* Z_Construct_UScriptStruct_FDirectLinkMsg_QueryEndpointState();
	DIRECTLINK_API UScriptStruct* Z_Construct_UScriptStruct_FNamedId();
	UPackage* Z_Construct_UPackage__Script_DirectLink();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DirectLinkMsg_EndpointLifecycle;
class UScriptStruct* FDirectLinkMsg_EndpointLifecycle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DirectLinkMsg_EndpointLifecycle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DirectLinkMsg_EndpointLifecycle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointLifecycle, (UObject*)Z_Construct_UPackage__Script_DirectLink(), TEXT("DirectLinkMsg_EndpointLifecycle"));
	}
	return Z_Registration_Info_UScriptStruct_DirectLinkMsg_EndpointLifecycle.OuterSingleton;
}
template<> DIRECTLINK_API UScriptStruct* StaticStruct<FDirectLinkMsg_EndpointLifecycle>()
{
	return FDirectLinkMsg_EndpointLifecycle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointLifecycle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LifecycleState_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LifecycleState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndpointStateRevision_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_EndpointStateRevision;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointLifecycle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// namespace DirectLink\n" },
		{ "Experimental", "" },
		{ "ModuleRelativePath", "Private/DirectLinkMessages.h" },
		{ "ToolTip", "namespace DirectLink" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointLifecycle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDirectLinkMsg_EndpointLifecycle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointLifecycle_Statics::NewProp_LifecycleState_MetaData[] = {
		{ "ModuleRelativePath", "Private/DirectLinkMessages.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointLifecycle_Statics::NewProp_LifecycleState = { "LifecycleState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDirectLinkMsg_EndpointLifecycle, LifecycleState), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointLifecycle_Statics::NewProp_LifecycleState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointLifecycle_Statics::NewProp_LifecycleState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointLifecycle_Statics::NewProp_EndpointStateRevision_MetaData[] = {
		{ "ModuleRelativePath", "Private/DirectLinkMessages.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointLifecycle_Statics::NewProp_EndpointStateRevision = { "EndpointStateRevision", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDirectLinkMsg_EndpointLifecycle, EndpointStateRevision), METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointLifecycle_Statics::NewProp_EndpointStateRevision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointLifecycle_Statics::NewProp_EndpointStateRevision_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointLifecycle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointLifecycle_Statics::NewProp_LifecycleState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointLifecycle_Statics::NewProp_EndpointStateRevision,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointLifecycle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DirectLink,
		nullptr,
		&NewStructOps,
		"DirectLinkMsg_EndpointLifecycle",
		sizeof(FDirectLinkMsg_EndpointLifecycle),
		alignof(FDirectLinkMsg_EndpointLifecycle),
		Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointLifecycle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointLifecycle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointLifecycle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointLifecycle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointLifecycle()
	{
		if (!Z_Registration_Info_UScriptStruct_DirectLinkMsg_EndpointLifecycle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DirectLinkMsg_EndpointLifecycle.InnerSingleton, Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointLifecycle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DirectLinkMsg_EndpointLifecycle.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NamedId;
class UScriptStruct* FNamedId::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NamedId.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NamedId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedId, (UObject*)Z_Construct_UPackage__Script_DirectLink(), TEXT("NamedId"));
	}
	return Z_Registration_Info_UScriptStruct_NamedId.OuterSingleton;
}
template<> DIRECTLINK_API UScriptStruct* StaticStruct<FNamedId>()
{
	return FNamedId::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNamedId_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPublic_MetaData[];
#endif
		static void NewProp_bIsPublic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPublic;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedId_Statics::Struct_MetaDataParams[] = {
		{ "Experimental", "" },
		{ "ModuleRelativePath", "Private/DirectLinkMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNamedId_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedId>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedId_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Private/DirectLinkMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNamedId_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNamedId, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedId_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedId_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedId_Statics::NewProp_Id_MetaData[] = {
		{ "ModuleRelativePath", "Private/DirectLinkMessages.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNamedId_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNamedId, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedId_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedId_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedId_Statics::NewProp_bIsPublic_MetaData[] = {
		{ "ModuleRelativePath", "Private/DirectLinkMessages.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNamedId_Statics::NewProp_bIsPublic_SetBit(void* Obj)
	{
		((FNamedId*)Obj)->bIsPublic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNamedId_Statics::NewProp_bIsPublic = { "bIsPublic", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNamedId), &Z_Construct_UScriptStruct_FNamedId_Statics::NewProp_bIsPublic_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedId_Statics::NewProp_bIsPublic_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedId_Statics::NewProp_bIsPublic_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNamedId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedId_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedId_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedId_Statics::NewProp_bIsPublic,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNamedId_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DirectLink,
		nullptr,
		&NewStructOps,
		"NamedId",
		sizeof(FNamedId),
		alignof(FNamedId),
		Z_Construct_UScriptStruct_FNamedId_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedId_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedId_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedId_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNamedId()
	{
		if (!Z_Registration_Info_UScriptStruct_NamedId.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NamedId.InnerSingleton, Z_Construct_UScriptStruct_FNamedId_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NamedId.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DirectLinkMsg_EndpointState;
class UScriptStruct* FDirectLinkMsg_EndpointState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DirectLinkMsg_EndpointState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DirectLinkMsg_EndpointState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState, (UObject*)Z_Construct_UPackage__Script_DirectLink(), TEXT("DirectLinkMsg_EndpointState"));
	}
	return Z_Registration_Info_UScriptStruct_DirectLinkMsg_EndpointState.OuterSingleton;
}
template<> DIRECTLINK_API UScriptStruct* StaticStruct<FDirectLinkMsg_EndpointState>()
{
	return FDirectLinkMsg_EndpointState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateRevision_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_StateRevision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinProtocolVersion_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_MinProtocolVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProtocolVersion_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ProtocolVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UEVersion_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UEVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComputerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ComputerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProcessId_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ProcessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecutableName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExecutableName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NiceName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Destinations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Destinations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Destinations;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Sources_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sources_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Sources;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::Struct_MetaDataParams[] = {
		{ "Experimental", "" },
		{ "ModuleRelativePath", "Private/DirectLinkMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDirectLinkMsg_EndpointState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_StateRevision_MetaData[] = {
		{ "ModuleRelativePath", "Private/DirectLinkMessages.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_StateRevision = { "StateRevision", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDirectLinkMsg_EndpointState, StateRevision), METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_StateRevision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_StateRevision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_MinProtocolVersion_MetaData[] = {
		{ "ModuleRelativePath", "Private/DirectLinkMessages.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_MinProtocolVersion = { "MinProtocolVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDirectLinkMsg_EndpointState, MinProtocolVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_MinProtocolVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_MinProtocolVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_ProtocolVersion_MetaData[] = {
		{ "ModuleRelativePath", "Private/DirectLinkMessages.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_ProtocolVersion = { "ProtocolVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDirectLinkMsg_EndpointState, ProtocolVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_ProtocolVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_ProtocolVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_UEVersion_MetaData[] = {
		{ "ModuleRelativePath", "Private/DirectLinkMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_UEVersion = { "UEVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDirectLinkMsg_EndpointState, UEVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_UEVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_UEVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_ComputerName_MetaData[] = {
		{ "ModuleRelativePath", "Private/DirectLinkMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_ComputerName = { "ComputerName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDirectLinkMsg_EndpointState, ComputerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_ComputerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_ComputerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_UserName_MetaData[] = {
		{ "ModuleRelativePath", "Private/DirectLinkMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDirectLinkMsg_EndpointState, UserName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_UserName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_UserName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_ProcessId_MetaData[] = {
		{ "ModuleRelativePath", "Private/DirectLinkMessages.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_ProcessId = { "ProcessId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDirectLinkMsg_EndpointState, ProcessId), METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_ProcessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_ProcessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_ExecutableName_MetaData[] = {
		{ "ModuleRelativePath", "Private/DirectLinkMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_ExecutableName = { "ExecutableName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDirectLinkMsg_EndpointState, ExecutableName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_ExecutableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_ExecutableName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_NiceName_MetaData[] = {
		{ "ModuleRelativePath", "Private/DirectLinkMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_NiceName = { "NiceName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDirectLinkMsg_EndpointState, NiceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_NiceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_NiceName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_Destinations_Inner = { "Destinations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNamedId, METADATA_PARAMS(nullptr, 0) }; // 2646107147
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_Destinations_MetaData[] = {
		{ "ModuleRelativePath", "Private/DirectLinkMessages.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_Destinations = { "Destinations", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDirectLinkMsg_EndpointState, Destinations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_Destinations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_Destinations_MetaData)) }; // 2646107147
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_Sources_Inner = { "Sources", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNamedId, METADATA_PARAMS(nullptr, 0) }; // 2646107147
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_Sources_MetaData[] = {
		{ "ModuleRelativePath", "Private/DirectLinkMessages.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_Sources = { "Sources", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDirectLinkMsg_EndpointState, Sources), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_Sources_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_Sources_MetaData)) }; // 2646107147
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_StateRevision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_MinProtocolVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_ProtocolVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_UEVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_ComputerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_UserName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_ProcessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_ExecutableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_NiceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_Destinations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_Destinations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_Sources_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewProp_Sources,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DirectLink,
		nullptr,
		&NewStructOps,
		"DirectLinkMsg_EndpointState",
		sizeof(FDirectLinkMsg_EndpointState),
		alignof(FDirectLinkMsg_EndpointState),
		Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState()
	{
		if (!Z_Registration_Info_UScriptStruct_DirectLinkMsg_EndpointState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DirectLinkMsg_EndpointState.InnerSingleton, Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DirectLinkMsg_EndpointState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DirectLinkMsg_QueryEndpointState;
class UScriptStruct* FDirectLinkMsg_QueryEndpointState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DirectLinkMsg_QueryEndpointState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DirectLinkMsg_QueryEndpointState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDirectLinkMsg_QueryEndpointState, (UObject*)Z_Construct_UPackage__Script_DirectLink(), TEXT("DirectLinkMsg_QueryEndpointState"));
	}
	return Z_Registration_Info_UScriptStruct_DirectLinkMsg_QueryEndpointState.OuterSingleton;
}
template<> DIRECTLINK_API UScriptStruct* StaticStruct<FDirectLinkMsg_QueryEndpointState>()
{
	return FDirectLinkMsg_QueryEndpointState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDirectLinkMsg_QueryEndpointState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectLinkMsg_QueryEndpointState_Statics::Struct_MetaDataParams[] = {
		{ "Experimental", "" },
		{ "ModuleRelativePath", "Private/DirectLinkMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDirectLinkMsg_QueryEndpointState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDirectLinkMsg_QueryEndpointState>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDirectLinkMsg_QueryEndpointState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DirectLink,
		nullptr,
		&NewStructOps,
		"DirectLinkMsg_QueryEndpointState",
		sizeof(FDirectLinkMsg_QueryEndpointState),
		alignof(FDirectLinkMsg_QueryEndpointState),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectLinkMsg_QueryEndpointState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectLinkMsg_QueryEndpointState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDirectLinkMsg_QueryEndpointState()
	{
		if (!Z_Registration_Info_UScriptStruct_DirectLinkMsg_QueryEndpointState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DirectLinkMsg_QueryEndpointState.InnerSingleton, Z_Construct_UScriptStruct_FDirectLinkMsg_QueryEndpointState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DirectLinkMsg_QueryEndpointState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DirectLinkMsg_OpenStreamRequest;
class UScriptStruct* FDirectLinkMsg_OpenStreamRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DirectLinkMsg_OpenStreamRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DirectLinkMsg_OpenStreamRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamRequest, (UObject*)Z_Construct_UPackage__Script_DirectLink(), TEXT("DirectLinkMsg_OpenStreamRequest"));
	}
	return Z_Registration_Info_UScriptStruct_DirectLinkMsg_OpenStreamRequest.OuterSingleton;
}
template<> DIRECTLINK_API UScriptStruct* StaticStruct<FDirectLinkMsg_OpenStreamRequest>()
{
	return FDirectLinkMsg_OpenStreamRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequestFromSource_MetaData[];
#endif
		static void NewProp_bRequestFromSource_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequestFromSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestFromStreamPort_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RequestFromStreamPort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DestinationGuid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamRequest_Statics::Struct_MetaDataParams[] = {
		{ "Experimental", "" },
		{ "ModuleRelativePath", "Private/DirectLinkMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDirectLinkMsg_OpenStreamRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamRequest_Statics::NewProp_bRequestFromSource_MetaData[] = {
		{ "Comment", "// #ue_directlink_cleanup explicit ctr to force correct init\n" },
		{ "ModuleRelativePath", "Private/DirectLinkMessages.h" },
		{ "ToolTip", "#ue_directlink_cleanup explicit ctr to force correct init" },
	};
#endif
	void Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamRequest_Statics::NewProp_bRequestFromSource_SetBit(void* Obj)
	{
		((FDirectLinkMsg_OpenStreamRequest*)Obj)->bRequestFromSource = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamRequest_Statics::NewProp_bRequestFromSource = { "bRequestFromSource", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDirectLinkMsg_OpenStreamRequest), &Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamRequest_Statics::NewProp_bRequestFromSource_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamRequest_Statics::NewProp_bRequestFromSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamRequest_Statics::NewProp_bRequestFromSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamRequest_Statics::NewProp_RequestFromStreamPort_MetaData[] = {
		{ "ModuleRelativePath", "Private/DirectLinkMessages.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamRequest_Statics::NewProp_RequestFromStreamPort = { "RequestFromStreamPort", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDirectLinkMsg_OpenStreamRequest, RequestFromStreamPort), METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamRequest_Statics::NewProp_RequestFromStreamPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamRequest_Statics::NewProp_RequestFromStreamPort_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamRequest_Statics::NewProp_SourceGuid_MetaData[] = {
		{ "ModuleRelativePath", "Private/DirectLinkMessages.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamRequest_Statics::NewProp_SourceGuid = { "SourceGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDirectLinkMsg_OpenStreamRequest, SourceGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamRequest_Statics::NewProp_SourceGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamRequest_Statics::NewProp_SourceGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamRequest_Statics::NewProp_DestinationGuid_MetaData[] = {
		{ "ModuleRelativePath", "Private/DirectLinkMessages.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamRequest_Statics::NewProp_DestinationGuid = { "DestinationGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDirectLinkMsg_OpenStreamRequest, DestinationGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamRequest_Statics::NewProp_DestinationGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamRequest_Statics::NewProp_DestinationGuid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamRequest_Statics::NewProp_bRequestFromSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamRequest_Statics::NewProp_RequestFromStreamPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamRequest_Statics::NewProp_SourceGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamRequest_Statics::NewProp_DestinationGuid,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DirectLink,
		nullptr,
		&NewStructOps,
		"DirectLinkMsg_OpenStreamRequest",
		sizeof(FDirectLinkMsg_OpenStreamRequest),
		alignof(FDirectLinkMsg_OpenStreamRequest),
		Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_DirectLinkMsg_OpenStreamRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DirectLinkMsg_OpenStreamRequest.InnerSingleton, Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DirectLinkMsg_OpenStreamRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DirectLinkMsg_OpenStreamAnswer;
class UScriptStruct* FDirectLinkMsg_OpenStreamAnswer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DirectLinkMsg_OpenStreamAnswer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DirectLinkMsg_OpenStreamAnswer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamAnswer, (UObject*)Z_Construct_UPackage__Script_DirectLink(), TEXT("DirectLinkMsg_OpenStreamAnswer"));
	}
	return Z_Registration_Info_UScriptStruct_DirectLinkMsg_OpenStreamAnswer.OuterSingleton;
}
template<> DIRECTLINK_API UScriptStruct* StaticStruct<FDirectLinkMsg_OpenStreamAnswer>()
{
	return FDirectLinkMsg_OpenStreamAnswer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamAnswer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecipientStreamPort_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RecipientStreamPort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAccepted_MetaData[];
#endif
		static void NewProp_bAccepted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAccepted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpenedStreamPort_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OpenedStreamPort;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamAnswer_Statics::Struct_MetaDataParams[] = {
		{ "Experimental", "" },
		{ "ModuleRelativePath", "Private/DirectLinkMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamAnswer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDirectLinkMsg_OpenStreamAnswer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamAnswer_Statics::NewProp_RecipientStreamPort_MetaData[] = {
		{ "ModuleRelativePath", "Private/DirectLinkMessages.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamAnswer_Statics::NewProp_RecipientStreamPort = { "RecipientStreamPort", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDirectLinkMsg_OpenStreamAnswer, RecipientStreamPort), METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamAnswer_Statics::NewProp_RecipientStreamPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamAnswer_Statics::NewProp_RecipientStreamPort_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamAnswer_Statics::NewProp_bAccepted_MetaData[] = {
		{ "ModuleRelativePath", "Private/DirectLinkMessages.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamAnswer_Statics::NewProp_bAccepted_SetBit(void* Obj)
	{
		((FDirectLinkMsg_OpenStreamAnswer*)Obj)->bAccepted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamAnswer_Statics::NewProp_bAccepted = { "bAccepted", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDirectLinkMsg_OpenStreamAnswer), &Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamAnswer_Statics::NewProp_bAccepted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamAnswer_Statics::NewProp_bAccepted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamAnswer_Statics::NewProp_bAccepted_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamAnswer_Statics::NewProp_Error_MetaData[] = {
		{ "ModuleRelativePath", "Private/DirectLinkMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamAnswer_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDirectLinkMsg_OpenStreamAnswer, Error), METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamAnswer_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamAnswer_Statics::NewProp_Error_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamAnswer_Statics::NewProp_OpenedStreamPort_MetaData[] = {
		{ "Comment", "// optionnal: may be filled when the request is denied\n" },
		{ "ModuleRelativePath", "Private/DirectLinkMessages.h" },
		{ "ToolTip", "optionnal: may be filled when the request is denied" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamAnswer_Statics::NewProp_OpenedStreamPort = { "OpenedStreamPort", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDirectLinkMsg_OpenStreamAnswer, OpenedStreamPort), METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamAnswer_Statics::NewProp_OpenedStreamPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamAnswer_Statics::NewProp_OpenedStreamPort_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamAnswer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamAnswer_Statics::NewProp_RecipientStreamPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamAnswer_Statics::NewProp_bAccepted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamAnswer_Statics::NewProp_Error,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamAnswer_Statics::NewProp_OpenedStreamPort,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamAnswer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DirectLink,
		nullptr,
		&NewStructOps,
		"DirectLinkMsg_OpenStreamAnswer",
		sizeof(FDirectLinkMsg_OpenStreamAnswer),
		alignof(FDirectLinkMsg_OpenStreamAnswer),
		Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamAnswer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamAnswer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamAnswer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamAnswer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamAnswer()
	{
		if (!Z_Registration_Info_UScriptStruct_DirectLinkMsg_OpenStreamAnswer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DirectLinkMsg_OpenStreamAnswer.InnerSingleton, Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamAnswer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DirectLinkMsg_OpenStreamAnswer.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DirectLinkMsg_CloseStreamRequest;
class UScriptStruct* FDirectLinkMsg_CloseStreamRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DirectLinkMsg_CloseStreamRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DirectLinkMsg_CloseStreamRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDirectLinkMsg_CloseStreamRequest, (UObject*)Z_Construct_UPackage__Script_DirectLink(), TEXT("DirectLinkMsg_CloseStreamRequest"));
	}
	return Z_Registration_Info_UScriptStruct_DirectLinkMsg_CloseStreamRequest.OuterSingleton;
}
template<> DIRECTLINK_API UScriptStruct* StaticStruct<FDirectLinkMsg_CloseStreamRequest>()
{
	return FDirectLinkMsg_CloseStreamRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDirectLinkMsg_CloseStreamRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecipientStreamPort_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RecipientStreamPort;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectLinkMsg_CloseStreamRequest_Statics::Struct_MetaDataParams[] = {
		{ "Experimental", "" },
		{ "ModuleRelativePath", "Private/DirectLinkMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDirectLinkMsg_CloseStreamRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDirectLinkMsg_CloseStreamRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectLinkMsg_CloseStreamRequest_Statics::NewProp_RecipientStreamPort_MetaData[] = {
		{ "ModuleRelativePath", "Private/DirectLinkMessages.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDirectLinkMsg_CloseStreamRequest_Statics::NewProp_RecipientStreamPort = { "RecipientStreamPort", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDirectLinkMsg_CloseStreamRequest, RecipientStreamPort), METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectLinkMsg_CloseStreamRequest_Statics::NewProp_RecipientStreamPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectLinkMsg_CloseStreamRequest_Statics::NewProp_RecipientStreamPort_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDirectLinkMsg_CloseStreamRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectLinkMsg_CloseStreamRequest_Statics::NewProp_RecipientStreamPort,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDirectLinkMsg_CloseStreamRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DirectLink,
		nullptr,
		&NewStructOps,
		"DirectLinkMsg_CloseStreamRequest",
		sizeof(FDirectLinkMsg_CloseStreamRequest),
		alignof(FDirectLinkMsg_CloseStreamRequest),
		Z_Construct_UScriptStruct_FDirectLinkMsg_CloseStreamRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectLinkMsg_CloseStreamRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectLinkMsg_CloseStreamRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectLinkMsg_CloseStreamRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDirectLinkMsg_CloseStreamRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_DirectLinkMsg_CloseStreamRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DirectLinkMsg_CloseStreamRequest.InnerSingleton, Z_Construct_UScriptStruct_FDirectLinkMsg_CloseStreamRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DirectLinkMsg_CloseStreamRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DirectLinkMsg_DeltaMessage;
class UScriptStruct* FDirectLinkMsg_DeltaMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DirectLinkMsg_DeltaMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DirectLinkMsg_DeltaMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDirectLinkMsg_DeltaMessage, (UObject*)Z_Construct_UPackage__Script_DirectLink(), TEXT("DirectLinkMsg_DeltaMessage"));
	}
	return Z_Registration_Info_UScriptStruct_DirectLinkMsg_DeltaMessage.OuterSingleton;
}
template<> DIRECTLINK_API UScriptStruct* StaticStruct<FDirectLinkMsg_DeltaMessage>()
{
	return FDirectLinkMsg_DeltaMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDirectLinkMsg_DeltaMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationStreamPort_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DestinationStreamPort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BatchCode_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_BatchCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageCode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MessageCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Kind_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Kind;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressedPayload_MetaData[];
#endif
		static void NewProp_CompressedPayload_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CompressedPayload;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Payload_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Payload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectLinkMsg_DeltaMessage_Statics::Struct_MetaDataParams[] = {
		{ "Experimental", "" },
		{ "ModuleRelativePath", "Private/DirectLinkMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDirectLinkMsg_DeltaMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDirectLinkMsg_DeltaMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectLinkMsg_DeltaMessage_Statics::NewProp_DestinationStreamPort_MetaData[] = {
		{ "ModuleRelativePath", "Private/DirectLinkMessages.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDirectLinkMsg_DeltaMessage_Statics::NewProp_DestinationStreamPort = { "DestinationStreamPort", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDirectLinkMsg_DeltaMessage, DestinationStreamPort), METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectLinkMsg_DeltaMessage_Statics::NewProp_DestinationStreamPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectLinkMsg_DeltaMessage_Statics::NewProp_DestinationStreamPort_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectLinkMsg_DeltaMessage_Statics::NewProp_BatchCode_MetaData[] = {
		{ "ModuleRelativePath", "Private/DirectLinkMessages.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FDirectLinkMsg_DeltaMessage_Statics::NewProp_BatchCode = { "BatchCode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDirectLinkMsg_DeltaMessage, BatchCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectLinkMsg_DeltaMessage_Statics::NewProp_BatchCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectLinkMsg_DeltaMessage_Statics::NewProp_BatchCode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectLinkMsg_DeltaMessage_Statics::NewProp_MessageCode_MetaData[] = {
		{ "ModuleRelativePath", "Private/DirectLinkMessages.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDirectLinkMsg_DeltaMessage_Statics::NewProp_MessageCode = { "MessageCode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDirectLinkMsg_DeltaMessage, MessageCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectLinkMsg_DeltaMessage_Statics::NewProp_MessageCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectLinkMsg_DeltaMessage_Statics::NewProp_MessageCode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectLinkMsg_DeltaMessage_Statics::NewProp_Kind_MetaData[] = {
		{ "ModuleRelativePath", "Private/DirectLinkMessages.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDirectLinkMsg_DeltaMessage_Statics::NewProp_Kind = { "Kind", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDirectLinkMsg_DeltaMessage, Kind), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectLinkMsg_DeltaMessage_Statics::NewProp_Kind_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectLinkMsg_DeltaMessage_Statics::NewProp_Kind_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectLinkMsg_DeltaMessage_Statics::NewProp_CompressedPayload_MetaData[] = {
		{ "ModuleRelativePath", "Private/DirectLinkMessages.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDirectLinkMsg_DeltaMessage_Statics::NewProp_CompressedPayload_SetBit(void* Obj)
	{
		((FDirectLinkMsg_DeltaMessage*)Obj)->CompressedPayload = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDirectLinkMsg_DeltaMessage_Statics::NewProp_CompressedPayload = { "CompressedPayload", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDirectLinkMsg_DeltaMessage), &Z_Construct_UScriptStruct_FDirectLinkMsg_DeltaMessage_Statics::NewProp_CompressedPayload_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectLinkMsg_DeltaMessage_Statics::NewProp_CompressedPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectLinkMsg_DeltaMessage_Statics::NewProp_CompressedPayload_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDirectLinkMsg_DeltaMessage_Statics::NewProp_Payload_Inner = { "Payload", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectLinkMsg_DeltaMessage_Statics::NewProp_Payload_MetaData[] = {
		{ "ModuleRelativePath", "Private/DirectLinkMessages.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDirectLinkMsg_DeltaMessage_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDirectLinkMsg_DeltaMessage, Payload), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectLinkMsg_DeltaMessage_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectLinkMsg_DeltaMessage_Statics::NewProp_Payload_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDirectLinkMsg_DeltaMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectLinkMsg_DeltaMessage_Statics::NewProp_DestinationStreamPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectLinkMsg_DeltaMessage_Statics::NewProp_BatchCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectLinkMsg_DeltaMessage_Statics::NewProp_MessageCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectLinkMsg_DeltaMessage_Statics::NewProp_Kind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectLinkMsg_DeltaMessage_Statics::NewProp_CompressedPayload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectLinkMsg_DeltaMessage_Statics::NewProp_Payload_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectLinkMsg_DeltaMessage_Statics::NewProp_Payload,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDirectLinkMsg_DeltaMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DirectLink,
		nullptr,
		&NewStructOps,
		"DirectLinkMsg_DeltaMessage",
		sizeof(FDirectLinkMsg_DeltaMessage),
		alignof(FDirectLinkMsg_DeltaMessage),
		Z_Construct_UScriptStruct_FDirectLinkMsg_DeltaMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectLinkMsg_DeltaMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectLinkMsg_DeltaMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectLinkMsg_DeltaMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDirectLinkMsg_DeltaMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_DirectLinkMsg_DeltaMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DirectLinkMsg_DeltaMessage.InnerSingleton, Z_Construct_UScriptStruct_FDirectLinkMsg_DeltaMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DirectLinkMsg_DeltaMessage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DirectLinkMsg_HaveListMessage;
class UScriptStruct* FDirectLinkMsg_HaveListMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DirectLinkMsg_HaveListMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DirectLinkMsg_HaveListMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage, (UObject*)Z_Construct_UPackage__Script_DirectLink(), TEXT("DirectLinkMsg_HaveListMessage"));
	}
	return Z_Registration_Info_UScriptStruct_DirectLinkMsg_HaveListMessage.OuterSingleton;
}
template<> DIRECTLINK_API UScriptStruct* StaticStruct<FDirectLinkMsg_HaveListMessage>()
{
	return FDirectLinkMsg_HaveListMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceStreamPort_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SourceStreamPort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SyncCycle_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SyncCycle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageCode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MessageCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Kind_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Kind;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Payload_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Payload;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodeIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NodeIds;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Hashes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hashes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Hashes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics::Struct_MetaDataParams[] = {
		{ "Experimental", "" },
		{ "ModuleRelativePath", "Private/DirectLinkMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDirectLinkMsg_HaveListMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics::NewProp_SourceStreamPort_MetaData[] = {
		{ "ModuleRelativePath", "Private/DirectLinkMessages.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics::NewProp_SourceStreamPort = { "SourceStreamPort", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDirectLinkMsg_HaveListMessage, SourceStreamPort), METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics::NewProp_SourceStreamPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics::NewProp_SourceStreamPort_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics::NewProp_SyncCycle_MetaData[] = {
		{ "Comment", "// FStreamPort\n" },
		{ "ModuleRelativePath", "Private/DirectLinkMessages.h" },
		{ "ToolTip", "FStreamPort" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics::NewProp_SyncCycle = { "SyncCycle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDirectLinkMsg_HaveListMessage, SyncCycle), METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics::NewProp_SyncCycle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics::NewProp_SyncCycle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics::NewProp_MessageCode_MetaData[] = {
		{ "ModuleRelativePath", "Private/DirectLinkMessages.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics::NewProp_MessageCode = { "MessageCode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDirectLinkMsg_HaveListMessage, MessageCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics::NewProp_MessageCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics::NewProp_MessageCode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics::NewProp_Kind_MetaData[] = {
		{ "ModuleRelativePath", "Private/DirectLinkMessages.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics::NewProp_Kind = { "Kind", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDirectLinkMsg_HaveListMessage, Kind), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics::NewProp_Kind_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics::NewProp_Kind_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics::NewProp_Payload_Inner = { "Payload", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics::NewProp_Payload_MetaData[] = {
		{ "ModuleRelativePath", "Private/DirectLinkMessages.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDirectLinkMsg_HaveListMessage, Payload), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics::NewProp_Payload_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics::NewProp_NodeIds_Inner = { "NodeIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics::NewProp_NodeIds_MetaData[] = {
		{ "ModuleRelativePath", "Private/DirectLinkMessages.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics::NewProp_NodeIds = { "NodeIds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDirectLinkMsg_HaveListMessage, NodeIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics::NewProp_NodeIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics::NewProp_NodeIds_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics::NewProp_Hashes_Inner = { "Hashes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics::NewProp_Hashes_MetaData[] = {
		{ "ModuleRelativePath", "Private/DirectLinkMessages.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics::NewProp_Hashes = { "Hashes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDirectLinkMsg_HaveListMessage, Hashes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics::NewProp_Hashes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics::NewProp_Hashes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics::NewProp_SourceStreamPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics::NewProp_SyncCycle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics::NewProp_MessageCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics::NewProp_Kind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics::NewProp_Payload_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics::NewProp_Payload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics::NewProp_NodeIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics::NewProp_NodeIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics::NewProp_Hashes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics::NewProp_Hashes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DirectLink,
		nullptr,
		&NewStructOps,
		"DirectLinkMsg_HaveListMessage",
		sizeof(FDirectLinkMsg_HaveListMessage),
		alignof(FDirectLinkMsg_HaveListMessage),
		Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_DirectLinkMsg_HaveListMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DirectLinkMsg_HaveListMessage.InnerSingleton, Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DirectLinkMsg_HaveListMessage.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Datasmith_DirectLink_Private_DirectLinkMessages_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Datasmith_DirectLink_Private_DirectLinkMessages_h_Statics::ScriptStructInfo[] = {
		{ FDirectLinkMsg_EndpointLifecycle::StaticStruct, Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointLifecycle_Statics::NewStructOps, TEXT("DirectLinkMsg_EndpointLifecycle"), &Z_Registration_Info_UScriptStruct_DirectLinkMsg_EndpointLifecycle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDirectLinkMsg_EndpointLifecycle), 1242351757U) },
		{ FNamedId::StaticStruct, Z_Construct_UScriptStruct_FNamedId_Statics::NewStructOps, TEXT("NamedId"), &Z_Registration_Info_UScriptStruct_NamedId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNamedId), 2646107147U) },
		{ FDirectLinkMsg_EndpointState::StaticStruct, Z_Construct_UScriptStruct_FDirectLinkMsg_EndpointState_Statics::NewStructOps, TEXT("DirectLinkMsg_EndpointState"), &Z_Registration_Info_UScriptStruct_DirectLinkMsg_EndpointState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDirectLinkMsg_EndpointState), 4071219393U) },
		{ FDirectLinkMsg_QueryEndpointState::StaticStruct, Z_Construct_UScriptStruct_FDirectLinkMsg_QueryEndpointState_Statics::NewStructOps, TEXT("DirectLinkMsg_QueryEndpointState"), &Z_Registration_Info_UScriptStruct_DirectLinkMsg_QueryEndpointState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDirectLinkMsg_QueryEndpointState), 3565341377U) },
		{ FDirectLinkMsg_OpenStreamRequest::StaticStruct, Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamRequest_Statics::NewStructOps, TEXT("DirectLinkMsg_OpenStreamRequest"), &Z_Registration_Info_UScriptStruct_DirectLinkMsg_OpenStreamRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDirectLinkMsg_OpenStreamRequest), 1430880609U) },
		{ FDirectLinkMsg_OpenStreamAnswer::StaticStruct, Z_Construct_UScriptStruct_FDirectLinkMsg_OpenStreamAnswer_Statics::NewStructOps, TEXT("DirectLinkMsg_OpenStreamAnswer"), &Z_Registration_Info_UScriptStruct_DirectLinkMsg_OpenStreamAnswer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDirectLinkMsg_OpenStreamAnswer), 3101110494U) },
		{ FDirectLinkMsg_CloseStreamRequest::StaticStruct, Z_Construct_UScriptStruct_FDirectLinkMsg_CloseStreamRequest_Statics::NewStructOps, TEXT("DirectLinkMsg_CloseStreamRequest"), &Z_Registration_Info_UScriptStruct_DirectLinkMsg_CloseStreamRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDirectLinkMsg_CloseStreamRequest), 2086833020U) },
		{ FDirectLinkMsg_DeltaMessage::StaticStruct, Z_Construct_UScriptStruct_FDirectLinkMsg_DeltaMessage_Statics::NewStructOps, TEXT("DirectLinkMsg_DeltaMessage"), &Z_Registration_Info_UScriptStruct_DirectLinkMsg_DeltaMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDirectLinkMsg_DeltaMessage), 2297055416U) },
		{ FDirectLinkMsg_HaveListMessage::StaticStruct, Z_Construct_UScriptStruct_FDirectLinkMsg_HaveListMessage_Statics::NewStructOps, TEXT("DirectLinkMsg_HaveListMessage"), &Z_Registration_Info_UScriptStruct_DirectLinkMsg_HaveListMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDirectLinkMsg_HaveListMessage), 3662971424U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Datasmith_DirectLink_Private_DirectLinkMessages_h_2025780097(TEXT("/Script/DirectLink"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Datasmith_DirectLink_Private_DirectLinkMessages_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Datasmith_DirectLink_Private_DirectLinkMessages_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
