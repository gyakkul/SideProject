// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/VCamConnectionStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVCamConnectionStructs() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UEnum* Z_Construct_UEnum_EnhancedInput_EInputActionValueType();
	UPackage* Z_Construct_UPackage__Script_VCamCore();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamModifier_NoRegister();
	VCAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FVCamConnection();
	VCAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FVCamConnectionTargetSettings();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VCamConnectionTargetSettings;
class UScriptStruct* FVCamConnectionTargetSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VCamConnectionTargetSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VCamConnectionTargetSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVCamConnectionTargetSettings, (UObject*)Z_Construct_UPackage__Script_VCamCore(), TEXT("VCamConnectionTargetSettings"));
	}
	return Z_Registration_Info_UScriptStruct_VCamConnectionTargetSettings.OuterSingleton;
}
template<> VCAMCORE_API UScriptStruct* StaticStruct<FVCamConnectionTargetSettings>()
{
	return FVCamConnectionTargetSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVCamConnectionTargetSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetModifierName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetModifierName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetConnectionPoint_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetConnectionPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVCamConnectionTargetSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * This stores information about the target for a given VCam Widget Connection\n * Ideally this is controlled externally via a configurator system but can be set explicitly if required\n */" },
		{ "ModuleRelativePath", "Public/UI/VCamConnectionStructs.h" },
		{ "ToolTip", "* This stores information about the target for a given VCam Widget Connection\n* Ideally this is controlled externally via a configurator system but can be set explicitly if required" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVCamConnectionTargetSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVCamConnectionTargetSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVCamConnectionTargetSettings_Statics::NewProp_TargetModifierName_MetaData[] = {
		{ "Category", "ConnectionBinding" },
		{ "Comment", "/*\n\x09 * The name of the Modifier to search for in a given VCam Component's Modifier Stack\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/VCamConnectionStructs.h" },
		{ "ToolTip", "* The name of the Modifier to search for in a given VCam Component's Modifier Stack" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVCamConnectionTargetSettings_Statics::NewProp_TargetModifierName = { "TargetModifierName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVCamConnectionTargetSettings, TargetModifierName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVCamConnectionTargetSettings_Statics::NewProp_TargetModifierName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVCamConnectionTargetSettings_Statics::NewProp_TargetModifierName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVCamConnectionTargetSettings_Statics::NewProp_TargetConnectionPoint_MetaData[] = {
		{ "Category", "ConnectionBinding" },
		{ "Comment", "/*\n\x09 * The name of the Connection Point to search for in a given VCam Modifier\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/VCamConnectionStructs.h" },
		{ "ToolTip", "* The name of the Connection Point to search for in a given VCam Modifier" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVCamConnectionTargetSettings_Statics::NewProp_TargetConnectionPoint = { "TargetConnectionPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVCamConnectionTargetSettings, TargetConnectionPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FVCamConnectionTargetSettings_Statics::NewProp_TargetConnectionPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVCamConnectionTargetSettings_Statics::NewProp_TargetConnectionPoint_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVCamConnectionTargetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVCamConnectionTargetSettings_Statics::NewProp_TargetModifierName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVCamConnectionTargetSettings_Statics::NewProp_TargetConnectionPoint,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVCamConnectionTargetSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VCamCore,
		nullptr,
		&NewStructOps,
		"VCamConnectionTargetSettings",
		sizeof(FVCamConnectionTargetSettings),
		alignof(FVCamConnectionTargetSettings),
		Z_Construct_UScriptStruct_FVCamConnectionTargetSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVCamConnectionTargetSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVCamConnectionTargetSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVCamConnectionTargetSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVCamConnectionTargetSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_VCamConnectionTargetSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VCamConnectionTargetSettings.InnerSingleton, Z_Construct_UScriptStruct_FVCamConnectionTargetSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VCamConnectionTargetSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VCamConnection;
class UScriptStruct* FVCamConnection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VCamConnection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VCamConnection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVCamConnection, (UObject*)Z_Construct_UPackage__Script_VCamCore(), TEXT("VCamConnection"));
	}
	return Z_Registration_Info_UScriptStruct_VCamConnection.OuterSingleton;
}
template<> VCAMCORE_API UScriptStruct* StaticStruct<FVCamConnection>()
{
	return FVCamConnection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVCamConnection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FClassPropertyParams NewProp_RequiredInterfaces_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequiredInterfaces_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RequiredInterfaces;
		static const UECodeGen_Private::FClassPropertyParams NewProp_OptionalInterfaces_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionalInterfaces_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OptionalInterfaces;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresInputAction_MetaData[];
#endif
		static void NewProp_bRequiresInputAction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresInputAction;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bManuallyConfigureConnection_MetaData[];
#endif
		static void NewProp_bManuallyConfigureConnection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bManuallyConfigureConnection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionTargetSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConnectionTargetSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectedAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ConnectedAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectedModifier_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ConnectedModifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVCamConnection_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * A VCam Connection allows an external object (primarily widgets) to communicate with VCam Modifiers through Connection Points that have known properties.\n * The connection allows you to specify a set of requirements that a connection point on a modifier must implement\n * for it to be considered a valid thing to connect to and then a function \"AttemptConnection\" that will try to resolve\n * a given VCam Component to a specific Modifier along with an optional associated Input Action\n */" },
		{ "ModuleRelativePath", "Public/UI/VCamConnectionStructs.h" },
		{ "ToolTip", "* A VCam Connection allows an external object (primarily widgets) to communicate with VCam Modifiers through Connection Points that have known properties.\n* The connection allows you to specify a set of requirements that a connection point on a modifier must implement\n* for it to be considered a valid thing to connect to and then a function \"AttemptConnection\" that will try to resolve\n* a given VCam Component to a specific Modifier along with an optional associated Input Action" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVCamConnection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVCamConnection>();
	}
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FVCamConnection_Statics::NewProp_RequiredInterfaces_Inner = { "RequiredInterfaces", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UInterface, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVCamConnection_Statics::NewProp_RequiredInterfaces_MetaData[] = {
		{ "Category", "Connection" },
		{ "Comment", "/*\n\x09 * A list of interfaces that a modifier must implement to be considered a valid connection\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/VCamConnectionStructs.h" },
		{ "ToolTip", "* A list of interfaces that a modifier must implement to be considered a valid connection" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVCamConnection_Statics::NewProp_RequiredInterfaces = { "RequiredInterfaces", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVCamConnection, RequiredInterfaces), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVCamConnection_Statics::NewProp_RequiredInterfaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVCamConnection_Statics::NewProp_RequiredInterfaces_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FVCamConnection_Statics::NewProp_OptionalInterfaces_Inner = { "OptionalInterfaces", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UInterface, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVCamConnection_Statics::NewProp_OptionalInterfaces_MetaData[] = {
		{ "Category", "Connection" },
		{ "Comment", "/*\n\x09 * A list of interfaces that a modifier may optionally implement that this connection can use\n\x09 *\n\x09 * These interfaces are not tested for when attempting a connection but are stored so that\n\x09 * a Configurator system can provide extra information a user when they are configuring connections\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/VCamConnectionStructs.h" },
		{ "ToolTip", "* A list of interfaces that a modifier may optionally implement that this connection can use\n*\n* These interfaces are not tested for when attempting a connection but are stored so that\n* a Configurator system can provide extra information a user when they are configuring connections" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVCamConnection_Statics::NewProp_OptionalInterfaces = { "OptionalInterfaces", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVCamConnection, OptionalInterfaces), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVCamConnection_Statics::NewProp_OptionalInterfaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVCamConnection_Statics::NewProp_OptionalInterfaces_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVCamConnection_Statics::NewProp_bRequiresInputAction_MetaData[] = {
		{ "Category", "Connection" },
		{ "Comment", "/*\n\x09 * Whether this connection requires a target Connection Point to have an associated Input Action to be considered a valid connection\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/VCamConnectionStructs.h" },
		{ "ToolTip", "* Whether this connection requires a target Connection Point to have an associated Input Action to be considered a valid connection" },
	};
#endif
	void Z_Construct_UScriptStruct_FVCamConnection_Statics::NewProp_bRequiresInputAction_SetBit(void* Obj)
	{
		((FVCamConnection*)Obj)->bRequiresInputAction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVCamConnection_Statics::NewProp_bRequiresInputAction = { "bRequiresInputAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FVCamConnection), &Z_Construct_UScriptStruct_FVCamConnection_Statics::NewProp_bRequiresInputAction_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVCamConnection_Statics::NewProp_bRequiresInputAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVCamConnection_Statics::NewProp_bRequiresInputAction_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVCamConnection_Statics::NewProp_ActionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVCamConnection_Statics::NewProp_ActionType_MetaData[] = {
		{ "Category", "Connection" },
		{ "Comment", "/*\n\x09 * If this connection requires an Input Action then this property specifies what Input Action Type the Connection Point must provide to be considered a valid connection\n\x09 */" },
		{ "EditCondition", "bRequiresInputAction" },
		{ "ModuleRelativePath", "Public/UI/VCamConnectionStructs.h" },
		{ "ToolTip", "* If this connection requires an Input Action then this property specifies what Input Action Type the Connection Point must provide to be considered a valid connection" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVCamConnection_Statics::NewProp_ActionType = { "ActionType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVCamConnection, ActionType), Z_Construct_UEnum_EnhancedInput_EInputActionValueType, METADATA_PARAMS(Z_Construct_UScriptStruct_FVCamConnection_Statics::NewProp_ActionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVCamConnection_Statics::NewProp_ActionType_MetaData)) }; // 554781252
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVCamConnection_Statics::NewProp_bManuallyConfigureConnection_MetaData[] = {
		{ "Category", "Connection" },
		{ "Comment", "/*\n\x09 * If you are not using an external system to configure the connection then you can enable this to have\n\x09 * explicit control over which Modifier and Connection Point to look for when attempting a connection\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/VCamConnectionStructs.h" },
		{ "ToolTip", "* If you are not using an external system to configure the connection then you can enable this to have\n* explicit control over which Modifier and Connection Point to look for when attempting a connection" },
	};
#endif
	void Z_Construct_UScriptStruct_FVCamConnection_Statics::NewProp_bManuallyConfigureConnection_SetBit(void* Obj)
	{
		((FVCamConnection*)Obj)->bManuallyConfigureConnection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVCamConnection_Statics::NewProp_bManuallyConfigureConnection = { "bManuallyConfigureConnection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FVCamConnection), &Z_Construct_UScriptStruct_FVCamConnection_Statics::NewProp_bManuallyConfigureConnection_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVCamConnection_Statics::NewProp_bManuallyConfigureConnection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVCamConnection_Statics::NewProp_bManuallyConfigureConnection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVCamConnection_Statics::NewProp_ConnectionTargetSettings_MetaData[] = {
		{ "Category", "Connection" },
		{ "Comment", "/*\n\x09 * A struct containing information about which Modifier and Connection Point to look for when attempting a connection\n\x09 */" },
		{ "EditCondition", "bManuallyConfigureConnection" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/UI/VCamConnectionStructs.h" },
		{ "ToolTip", "* A struct containing information about which Modifier and Connection Point to look for when attempting a connection" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVCamConnection_Statics::NewProp_ConnectionTargetSettings = { "ConnectionTargetSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVCamConnection, ConnectionTargetSettings), Z_Construct_UScriptStruct_FVCamConnectionTargetSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FVCamConnection_Statics::NewProp_ConnectionTargetSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVCamConnection_Statics::NewProp_ConnectionTargetSettings_MetaData)) }; // 259595779
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVCamConnection_Statics::NewProp_ConnectedAction_MetaData[] = {
		{ "Comment", "/*\n\x09 * The Input Action that we are currently connected to\n\x09 *\n\x09 * This could be empty even if we have a valid connection\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/VCamConnectionStructs.h" },
		{ "ToolTip", "* The Input Action that we are currently connected to\n*\n* This could be empty even if we have a valid connection" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FVCamConnection_Statics::NewProp_ConnectedAction = { "ConnectedAction", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVCamConnection, ConnectedAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVCamConnection_Statics::NewProp_ConnectedAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVCamConnection_Statics::NewProp_ConnectedAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVCamConnection_Statics::NewProp_ConnectedModifier_MetaData[] = {
		{ "Comment", "/*\n\x09 * The VCam Modifier that we are currently connected to\n\x09 *\n\x09 * Guaranteed to be valid if IsConnected() is true\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/VCamConnectionStructs.h" },
		{ "ToolTip", "* The VCam Modifier that we are currently connected to\n*\n* Guaranteed to be valid if IsConnected() is true" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FVCamConnection_Statics::NewProp_ConnectedModifier = { "ConnectedModifier", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVCamConnection, ConnectedModifier), Z_Construct_UClass_UVCamModifier_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVCamConnection_Statics::NewProp_ConnectedModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVCamConnection_Statics::NewProp_ConnectedModifier_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVCamConnection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVCamConnection_Statics::NewProp_RequiredInterfaces_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVCamConnection_Statics::NewProp_RequiredInterfaces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVCamConnection_Statics::NewProp_OptionalInterfaces_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVCamConnection_Statics::NewProp_OptionalInterfaces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVCamConnection_Statics::NewProp_bRequiresInputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVCamConnection_Statics::NewProp_ActionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVCamConnection_Statics::NewProp_ActionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVCamConnection_Statics::NewProp_bManuallyConfigureConnection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVCamConnection_Statics::NewProp_ConnectionTargetSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVCamConnection_Statics::NewProp_ConnectedAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVCamConnection_Statics::NewProp_ConnectedModifier,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVCamConnection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VCamCore,
		nullptr,
		&NewStructOps,
		"VCamConnection",
		sizeof(FVCamConnection),
		alignof(FVCamConnection),
		Z_Construct_UScriptStruct_FVCamConnection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVCamConnection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVCamConnection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVCamConnection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVCamConnection()
	{
		if (!Z_Registration_Info_UScriptStruct_VCamConnection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VCamConnection.InnerSingleton, Z_Construct_UScriptStruct_FVCamConnection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VCamConnection.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamConnectionStructs_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamConnectionStructs_h_Statics::ScriptStructInfo[] = {
		{ FVCamConnectionTargetSettings::StaticStruct, Z_Construct_UScriptStruct_FVCamConnectionTargetSettings_Statics::NewStructOps, TEXT("VCamConnectionTargetSettings"), &Z_Registration_Info_UScriptStruct_VCamConnectionTargetSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVCamConnectionTargetSettings), 259595779U) },
		{ FVCamConnection::StaticStruct, Z_Construct_UScriptStruct_FVCamConnection_Statics::NewStructOps, TEXT("VCamConnection"), &Z_Registration_Info_UScriptStruct_VCamConnection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVCamConnection), 1271561758U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamConnectionStructs_h_1491192423(TEXT("/Script/VCamCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamConnectionStructs_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamConnectionStructs_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
