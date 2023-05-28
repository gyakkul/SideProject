// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/ReplicatedState.h"
#include "../../Source/Runtime/Engine/Classes/Engine/NetSerialization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplicatedState() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERotatorQuantization();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVectorQuantization();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRepAttachment();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRepMovement();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRigidBodyState();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize100();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVectorQuantization;
	static UEnum* EVectorQuantization_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVectorQuantization.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVectorQuantization.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EVectorQuantization, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EVectorQuantization"));
		}
		return Z_Registration_Info_UEnum_EVectorQuantization.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EVectorQuantization>()
	{
		return EVectorQuantization_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EVectorQuantization_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EVectorQuantization_Statics::Enumerators[] = {
		{ "EVectorQuantization::RoundWholeNumber", (int64)EVectorQuantization::RoundWholeNumber },
		{ "EVectorQuantization::RoundOneDecimal", (int64)EVectorQuantization::RoundOneDecimal },
		{ "EVectorQuantization::RoundTwoDecimals", (int64)EVectorQuantization::RoundTwoDecimals },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EVectorQuantization_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Describes rules for network replicating a vector efficiently */" },
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
		{ "RoundOneDecimal.Comment", "/** Each vector component will be rounded, preserving one decimal place. */" },
		{ "RoundOneDecimal.Name", "EVectorQuantization::RoundOneDecimal" },
		{ "RoundOneDecimal.ToolTip", "Each vector component will be rounded, preserving one decimal place." },
		{ "RoundTwoDecimals.Comment", "/** Each vector component will be rounded, preserving two decimal places. */" },
		{ "RoundTwoDecimals.Name", "EVectorQuantization::RoundTwoDecimals" },
		{ "RoundTwoDecimals.ToolTip", "Each vector component will be rounded, preserving two decimal places." },
		{ "RoundWholeNumber.Comment", "/** Each vector component will be rounded to the nearest whole number. */" },
		{ "RoundWholeNumber.Name", "EVectorQuantization::RoundWholeNumber" },
		{ "RoundWholeNumber.ToolTip", "Each vector component will be rounded to the nearest whole number." },
		{ "ToolTip", "Describes rules for network replicating a vector efficiently" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EVectorQuantization_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EVectorQuantization",
		"EVectorQuantization",
		Z_Construct_UEnum_Engine_EVectorQuantization_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVectorQuantization_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EVectorQuantization_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVectorQuantization_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EVectorQuantization()
	{
		if (!Z_Registration_Info_UEnum_EVectorQuantization.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVectorQuantization.InnerSingleton, Z_Construct_UEnum_Engine_EVectorQuantization_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVectorQuantization.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERotatorQuantization;
	static UEnum* ERotatorQuantization_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERotatorQuantization.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERotatorQuantization.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERotatorQuantization, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ERotatorQuantization"));
		}
		return Z_Registration_Info_UEnum_ERotatorQuantization.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ERotatorQuantization>()
	{
		return ERotatorQuantization_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ERotatorQuantization_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ERotatorQuantization_Statics::Enumerators[] = {
		{ "ERotatorQuantization::ByteComponents", (int64)ERotatorQuantization::ByteComponents },
		{ "ERotatorQuantization::ShortComponents", (int64)ERotatorQuantization::ShortComponents },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ERotatorQuantization_Statics::Enum_MetaDataParams[] = {
		{ "ByteComponents.Comment", "/** The rotator will be compressed to 8 bits per component. */" },
		{ "ByteComponents.Name", "ERotatorQuantization::ByteComponents" },
		{ "ByteComponents.ToolTip", "The rotator will be compressed to 8 bits per component." },
		{ "Comment", "/** Describes rules for network replicating a vector efficiently */" },
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
		{ "ShortComponents.Comment", "/** The rotator will be compressed to 16 bits per component. */" },
		{ "ShortComponents.Name", "ERotatorQuantization::ShortComponents" },
		{ "ShortComponents.ToolTip", "The rotator will be compressed to 16 bits per component." },
		{ "ToolTip", "Describes rules for network replicating a vector efficiently" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ERotatorQuantization_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ERotatorQuantization",
		"ERotatorQuantization",
		Z_Construct_UEnum_Engine_ERotatorQuantization_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERotatorQuantization_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ERotatorQuantization_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERotatorQuantization_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ERotatorQuantization()
	{
		if (!Z_Registration_Info_UEnum_ERotatorQuantization.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERotatorQuantization.InnerSingleton, Z_Construct_UEnum_Engine_ERotatorQuantization_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERotatorQuantization.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RepAttachment;
class UScriptStruct* FRepAttachment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RepAttachment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RepAttachment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRepAttachment, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RepAttachment"));
	}
	return Z_Registration_Info_UScriptStruct_RepAttachment.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRepAttachment>()
{
	return FRepAttachment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRepAttachment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachParent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttachParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeScale3D_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeScale3D;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachSocket_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttachSocket;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttachComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepAttachment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Handles attachment replication to clients.  */" },
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
		{ "ToolTip", "Handles attachment replication to clients." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRepAttachment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRepAttachment>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepAttachment_Statics::NewProp_AttachParent_MetaData[] = {
		{ "Comment", "/** Actor we are attached to, movement replication will not happen while AttachParent is non-nullptr */" },
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
		{ "ToolTip", "Actor we are attached to, movement replication will not happen while AttachParent is non-nullptr" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FRepAttachment_Statics::NewProp_AttachParent = { "AttachParent", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRepAttachment, AttachParent), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRepAttachment_Statics::NewProp_AttachParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepAttachment_Statics::NewProp_AttachParent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepAttachment_Statics::NewProp_LocationOffset_MetaData[] = {
		{ "Comment", "/** Location offset from attach parent */" },
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
		{ "ToolTip", "Location offset from attach parent" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRepAttachment_Statics::NewProp_LocationOffset = { "LocationOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRepAttachment, LocationOffset), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(Z_Construct_UScriptStruct_FRepAttachment_Statics::NewProp_LocationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepAttachment_Statics::NewProp_LocationOffset_MetaData)) }; // 255231453
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepAttachment_Statics::NewProp_RelativeScale3D_MetaData[] = {
		{ "Comment", "/** Scale relative to attach parent */" },
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
		{ "ToolTip", "Scale relative to attach parent" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRepAttachment_Statics::NewProp_RelativeScale3D = { "RelativeScale3D", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRepAttachment, RelativeScale3D), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(Z_Construct_UScriptStruct_FRepAttachment_Statics::NewProp_RelativeScale3D_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepAttachment_Statics::NewProp_RelativeScale3D_MetaData)) }; // 255231453
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepAttachment_Statics::NewProp_RotationOffset_MetaData[] = {
		{ "Comment", "/** Rotation offset from attach parent */" },
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
		{ "ToolTip", "Rotation offset from attach parent" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRepAttachment_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRepAttachment, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FRepAttachment_Statics::NewProp_RotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepAttachment_Statics::NewProp_RotationOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepAttachment_Statics::NewProp_AttachSocket_MetaData[] = {
		{ "Comment", "/** Specific socket we are attached to */" },
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
		{ "ToolTip", "Specific socket we are attached to" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRepAttachment_Statics::NewProp_AttachSocket = { "AttachSocket", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRepAttachment, AttachSocket), METADATA_PARAMS(Z_Construct_UScriptStruct_FRepAttachment_Statics::NewProp_AttachSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepAttachment_Statics::NewProp_AttachSocket_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepAttachment_Statics::NewProp_AttachComponent_MetaData[] = {
		{ "Comment", "/** Specific component we are attached to */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
		{ "ToolTip", "Specific component we are attached to" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FRepAttachment_Statics::NewProp_AttachComponent = { "AttachComponent", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRepAttachment, AttachComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRepAttachment_Statics::NewProp_AttachComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepAttachment_Statics::NewProp_AttachComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRepAttachment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepAttachment_Statics::NewProp_AttachParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepAttachment_Statics::NewProp_LocationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepAttachment_Statics::NewProp_RelativeScale3D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepAttachment_Statics::NewProp_RotationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepAttachment_Statics::NewProp_AttachSocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepAttachment_Statics::NewProp_AttachComponent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRepAttachment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"RepAttachment",
		sizeof(FRepAttachment),
		alignof(FRepAttachment),
		Z_Construct_UScriptStruct_FRepAttachment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepAttachment_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRepAttachment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepAttachment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRepAttachment()
	{
		if (!Z_Registration_Info_UScriptStruct_RepAttachment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RepAttachment.InnerSingleton, Z_Construct_UScriptStruct_FRepAttachment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RepAttachment.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigidBodyState;
class UScriptStruct* FRigidBodyState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigidBodyState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigidBodyState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigidBodyState, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RigidBodyState"));
	}
	return Z_Registration_Info_UScriptStruct_RigidBodyState.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRigidBodyState>()
{
	return FRigidBodyState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigidBodyState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quaternion_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Quaternion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinVel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinVel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngVel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AngVel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Flags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigidBodyState_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Describes the physical state of a rigid body. */" },
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
		{ "ToolTip", "Describes the physical state of a rigid body." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigidBodyState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigidBodyState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigidBodyState_Statics::NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigidBodyState_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigidBodyState, Position), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigidBodyState_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigidBodyState_Statics::NewProp_Position_MetaData)) }; // 255231453
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigidBodyState_Statics::NewProp_Quaternion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigidBodyState_Statics::NewProp_Quaternion = { "Quaternion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigidBodyState, Quaternion), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigidBodyState_Statics::NewProp_Quaternion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigidBodyState_Statics::NewProp_Quaternion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigidBodyState_Statics::NewProp_LinVel_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigidBodyState_Statics::NewProp_LinVel = { "LinVel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigidBodyState, LinVel), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigidBodyState_Statics::NewProp_LinVel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigidBodyState_Statics::NewProp_LinVel_MetaData)) }; // 255231453
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigidBodyState_Statics::NewProp_AngVel_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigidBodyState_Statics::NewProp_AngVel = { "AngVel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigidBodyState, AngVel), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigidBodyState_Statics::NewProp_AngVel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigidBodyState_Statics::NewProp_AngVel_MetaData)) }; // 255231453
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigidBodyState_Statics::NewProp_Flags_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigidBodyState_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigidBodyState, Flags), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigidBodyState_Statics::NewProp_Flags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigidBodyState_Statics::NewProp_Flags_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigidBodyState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigidBodyState_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigidBodyState_Statics::NewProp_Quaternion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigidBodyState_Statics::NewProp_LinVel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigidBodyState_Statics::NewProp_AngVel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigidBodyState_Statics::NewProp_Flags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigidBodyState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"RigidBodyState",
		sizeof(FRigidBodyState),
		alignof(FRigidBodyState),
		Z_Construct_UScriptStruct_FRigidBodyState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigidBodyState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigidBodyState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigidBodyState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigidBodyState()
	{
		if (!Z_Registration_Info_UScriptStruct_RigidBodyState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigidBodyState.InnerSingleton, Z_Construct_UScriptStruct_FRigidBodyState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigidBodyState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RepMovement;
class UScriptStruct* FRepMovement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RepMovement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RepMovement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRepMovement, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RepMovement"));
	}
	return Z_Registration_Info_UScriptStruct_RepMovement.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRepMovement>()
{
	return FRepMovement::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRepMovement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinearVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSimulatedPhysicSleep_MetaData[];
#endif
		static void NewProp_bSimulatedPhysicSleep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimulatedPhysicSleep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRepPhysics_MetaData[];
#endif
		static void NewProp_bRepPhysics_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRepPhysics;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerFrame_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ServerFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerPhysicsHandle_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ServerPhysicsHandle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LocationQuantizationLevel_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationQuantizationLevel_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LocationQuantizationLevel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_VelocityQuantizationLevel_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelocityQuantizationLevel_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_VelocityQuantizationLevel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationQuantizationLevel_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationQuantizationLevel_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationQuantizationLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepMovement_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Replicated movement data of our RootComponent.\n  * Struct used for efficient replication as velocity and location are generally replicated together (this saves a repindex) \n  * and velocity.Z is commonly zero (most position replications are for walking pawns). \n  */" },
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
		{ "ToolTip", "Replicated movement data of our RootComponent.\nStruct used for efficient replication as velocity and location are generally replicated together (this saves a repindex)\nand velocity.Z is commonly zero (most position replications are for walking pawns)." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRepMovement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRepMovement>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_LinearVelocity_MetaData[] = {
		{ "Comment", "/** Velocity of component in world space */" },
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
		{ "ToolTip", "Velocity of component in world space" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_LinearVelocity = { "LinearVelocity", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRepMovement, LinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_LinearVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_LinearVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_AngularVelocity_MetaData[] = {
		{ "Comment", "/** Velocity of rotation for component */" },
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
		{ "ToolTip", "Velocity of rotation for component" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRepMovement, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_AngularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_AngularVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_Location_MetaData[] = {
		{ "Comment", "/** Location in world space */" },
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
		{ "ToolTip", "Location in world space" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRepMovement, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_Rotation_MetaData[] = {
		{ "Comment", "/** Current rotation */" },
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
		{ "ToolTip", "Current rotation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRepMovement, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_bSimulatedPhysicSleep_MetaData[] = {
		{ "Comment", "/** If set, RootComponent should be sleeping. */" },
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
		{ "ToolTip", "If set, RootComponent should be sleeping." },
	};
#endif
	void Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_bSimulatedPhysicSleep_SetBit(void* Obj)
	{
		((FRepMovement*)Obj)->bSimulatedPhysicSleep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_bSimulatedPhysicSleep = { "bSimulatedPhysicSleep", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FRepMovement), &Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_bSimulatedPhysicSleep_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_bSimulatedPhysicSleep_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_bSimulatedPhysicSleep_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_bRepPhysics_MetaData[] = {
		{ "Comment", "/** If set, additional physic data (angular velocity) will be replicated. */" },
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
		{ "ToolTip", "If set, additional physic data (angular velocity) will be replicated." },
	};
#endif
	void Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_bRepPhysics_SetBit(void* Obj)
	{
		((FRepMovement*)Obj)->bRepPhysics = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_bRepPhysics = { "bRepPhysics", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FRepMovement), &Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_bRepPhysics_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_bRepPhysics_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_bRepPhysics_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_ServerFrame_MetaData[] = {
		{ "Comment", "/** Server physics step */" },
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
		{ "ToolTip", "Server physics step" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_ServerFrame = { "ServerFrame", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRepMovement, ServerFrame), METADATA_PARAMS(Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_ServerFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_ServerFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_ServerPhysicsHandle_MetaData[] = {
		{ "Comment", "/** ID assigned by server used to ensure determinism by physics. */" },
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
		{ "ToolTip", "ID assigned by server used to ensure determinism by physics." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_ServerPhysicsHandle = { "ServerPhysicsHandle", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRepMovement, ServerPhysicsHandle), METADATA_PARAMS(Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_ServerPhysicsHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_ServerPhysicsHandle_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_LocationQuantizationLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_LocationQuantizationLevel_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/** Allows tuning the compression level for the replicated location vector. You should only need to change this from the default if you see visual artifacts. */" },
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
		{ "ToolTip", "Allows tuning the compression level for the replicated location vector. You should only need to change this from the default if you see visual artifacts." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_LocationQuantizationLevel = { "LocationQuantizationLevel", nullptr, (EPropertyFlags)0x0010040000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRepMovement, LocationQuantizationLevel), Z_Construct_UEnum_Engine_EVectorQuantization, METADATA_PARAMS(Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_LocationQuantizationLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_LocationQuantizationLevel_MetaData)) }; // 3389860395
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_VelocityQuantizationLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_VelocityQuantizationLevel_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/** Allows tuning the compression level for the replicated velocity vectors. You should only need to change this from the default if you see visual artifacts. */" },
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
		{ "ToolTip", "Allows tuning the compression level for the replicated velocity vectors. You should only need to change this from the default if you see visual artifacts." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_VelocityQuantizationLevel = { "VelocityQuantizationLevel", nullptr, (EPropertyFlags)0x0010040000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRepMovement, VelocityQuantizationLevel), Z_Construct_UEnum_Engine_EVectorQuantization, METADATA_PARAMS(Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_VelocityQuantizationLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_VelocityQuantizationLevel_MetaData)) }; // 3389860395
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_RotationQuantizationLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_RotationQuantizationLevel_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/** Allows tuning the compression level for replicated rotation. You should only need to change this from the default if you see visual artifacts. */" },
		{ "ModuleRelativePath", "Classes/Engine/ReplicatedState.h" },
		{ "ToolTip", "Allows tuning the compression level for replicated rotation. You should only need to change this from the default if you see visual artifacts." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_RotationQuantizationLevel = { "RotationQuantizationLevel", nullptr, (EPropertyFlags)0x0010040000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRepMovement, RotationQuantizationLevel), Z_Construct_UEnum_Engine_ERotatorQuantization, METADATA_PARAMS(Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_RotationQuantizationLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_RotationQuantizationLevel_MetaData)) }; // 407988748
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRepMovement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_LinearVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_AngularVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_bSimulatedPhysicSleep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_bRepPhysics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_ServerFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_ServerPhysicsHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_LocationQuantizationLevel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_LocationQuantizationLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_VelocityQuantizationLevel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_VelocityQuantizationLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_RotationQuantizationLevel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepMovement_Statics::NewProp_RotationQuantizationLevel,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRepMovement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"RepMovement",
		sizeof(FRepMovement),
		alignof(FRepMovement),
		Z_Construct_UScriptStruct_FRepMovement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepMovement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRepMovement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepMovement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRepMovement()
	{
		if (!Z_Registration_Info_UScriptStruct_RepMovement.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RepMovement.InnerSingleton, Z_Construct_UScriptStruct_FRepMovement_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RepMovement.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicatedState_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicatedState_h_Statics::EnumInfo[] = {
		{ EVectorQuantization_StaticEnum, TEXT("EVectorQuantization"), &Z_Registration_Info_UEnum_EVectorQuantization, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3389860395U) },
		{ ERotatorQuantization_StaticEnum, TEXT("ERotatorQuantization"), &Z_Registration_Info_UEnum_ERotatorQuantization, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 407988748U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicatedState_h_Statics::ScriptStructInfo[] = {
		{ FRepAttachment::StaticStruct, Z_Construct_UScriptStruct_FRepAttachment_Statics::NewStructOps, TEXT("RepAttachment"), &Z_Registration_Info_UScriptStruct_RepAttachment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRepAttachment), 116456523U) },
		{ FRigidBodyState::StaticStruct, Z_Construct_UScriptStruct_FRigidBodyState_Statics::NewStructOps, TEXT("RigidBodyState"), &Z_Registration_Info_UScriptStruct_RigidBodyState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigidBodyState), 3407609098U) },
		{ FRepMovement::StaticStruct, Z_Construct_UScriptStruct_FRepMovement_Statics::NewStructOps, TEXT("RepMovement"), &Z_Registration_Info_UScriptStruct_RepMovement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRepMovement), 2916781816U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicatedState_h_2640231736(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicatedState_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicatedState_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicatedState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicatedState_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
