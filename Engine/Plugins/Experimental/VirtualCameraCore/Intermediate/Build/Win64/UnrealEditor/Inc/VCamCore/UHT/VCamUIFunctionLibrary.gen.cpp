// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/VCamUIFunctionLibrary.h"
#include "UI/VCamConnectionStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVCamUIFunctionLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VCamCore();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamModifier_NoRegister();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamUIFunctionLibrary();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamUIFunctionLibrary_NoRegister();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamWidget_NoRegister();
	VCAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FVCamConnection();
// End Cross Module References
	DEFINE_FUNCTION(UVCamUIFunctionLibrary::execGetConnectedInputAction_VCamWidget)
	{
		P_GET_OBJECT(UVCamWidget,Z_Param_Widget);
		P_GET_PROPERTY(FNameProperty,Z_Param_ConnectionId);
		P_GET_OBJECT_REF(UInputAction,Z_Param_Out_OutInputAction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVCamUIFunctionLibrary::GetConnectedInputAction_VCamWidget(Z_Param_Widget,Z_Param_ConnectionId,Z_Param_Out_OutInputAction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamUIFunctionLibrary::execGetConnectedModifier_VCamWidget)
	{
		P_GET_OBJECT(UVCamWidget,Z_Param_Widget);
		P_GET_PROPERTY(FNameProperty,Z_Param_ConnectionId);
		P_GET_OBJECT_REF(UVCamModifier,Z_Param_Out_OutModifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVCamUIFunctionLibrary::GetConnectedModifier_VCamWidget(Z_Param_Widget,Z_Param_ConnectionId,Z_Param_Out_OutModifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamUIFunctionLibrary::execGetConnectionPointName_VCamWidget)
	{
		P_GET_OBJECT(UVCamWidget,Z_Param_Widget);
		P_GET_PROPERTY(FNameProperty,Z_Param_ConnectionId);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_OutConnectionPointName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVCamUIFunctionLibrary::GetConnectionPointName_VCamWidget(Z_Param_Widget,Z_Param_ConnectionId,Z_Param_Out_OutConnectionPointName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamUIFunctionLibrary::execIsConnected_VCamWidget)
	{
		P_GET_OBJECT(UVCamWidget,Z_Param_Widget);
		P_GET_PROPERTY(FNameProperty,Z_Param_ConnectionId);
		P_GET_UBOOL_REF(Z_Param_Out_bOutIsConnected);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVCamUIFunctionLibrary::IsConnected_VCamWidget(Z_Param_Widget,Z_Param_ConnectionId,Z_Param_Out_bOutIsConnected);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamUIFunctionLibrary::execGetConnectionByName_VCamWidget)
	{
		P_GET_OBJECT(UVCamWidget,Z_Param_Widget);
		P_GET_PROPERTY(FNameProperty,Z_Param_ConnectionId);
		P_GET_STRUCT_REF(FVCamConnection,Z_Param_Out_OutConnection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVCamUIFunctionLibrary::GetConnectionByName_VCamWidget(Z_Param_Widget,Z_Param_ConnectionId,Z_Param_Out_OutConnection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamUIFunctionLibrary::execGetConnectedInputAction_VCamConnection)
	{
		P_GET_STRUCT_REF(FVCamConnection,Z_Param_Out_Connection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInputAction**)Z_Param__Result=UVCamUIFunctionLibrary::GetConnectedInputAction_VCamConnection(Z_Param_Out_Connection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamUIFunctionLibrary::execGetConnectedModifier_VCamConnection)
	{
		P_GET_STRUCT_REF(FVCamConnection,Z_Param_Out_Connection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVCamModifier**)Z_Param__Result=UVCamUIFunctionLibrary::GetConnectedModifier_VCamConnection(Z_Param_Out_Connection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamUIFunctionLibrary::execGetConnectionPointName_VCamConnection)
	{
		P_GET_STRUCT_REF(FVCamConnection,Z_Param_Out_Connection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UVCamUIFunctionLibrary::GetConnectionPointName_VCamConnection(Z_Param_Out_Connection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamUIFunctionLibrary::execIsConnected_VCamConnection)
	{
		P_GET_STRUCT_REF(FVCamConnection,Z_Param_Out_Connection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVCamUIFunctionLibrary::IsConnected_VCamConnection(Z_Param_Out_Connection);
		P_NATIVE_END;
	}
	void UVCamUIFunctionLibrary::StaticRegisterNativesUVCamUIFunctionLibrary()
	{
		UClass* Class = UVCamUIFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetConnectedInputAction_VCamConnection", &UVCamUIFunctionLibrary::execGetConnectedInputAction_VCamConnection },
			{ "GetConnectedInputAction_VCamWidget", &UVCamUIFunctionLibrary::execGetConnectedInputAction_VCamWidget },
			{ "GetConnectedModifier_VCamConnection", &UVCamUIFunctionLibrary::execGetConnectedModifier_VCamConnection },
			{ "GetConnectedModifier_VCamWidget", &UVCamUIFunctionLibrary::execGetConnectedModifier_VCamWidget },
			{ "GetConnectionByName_VCamWidget", &UVCamUIFunctionLibrary::execGetConnectionByName_VCamWidget },
			{ "GetConnectionPointName_VCamConnection", &UVCamUIFunctionLibrary::execGetConnectionPointName_VCamConnection },
			{ "GetConnectionPointName_VCamWidget", &UVCamUIFunctionLibrary::execGetConnectionPointName_VCamWidget },
			{ "IsConnected_VCamConnection", &UVCamUIFunctionLibrary::execIsConnected_VCamConnection },
			{ "IsConnected_VCamWidget", &UVCamUIFunctionLibrary::execIsConnected_VCamWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedInputAction_VCamConnection_Statics
	{
		struct VCamUIFunctionLibrary_eventGetConnectedInputAction_VCamConnection_Parms
		{
			FVCamConnection Connection;
			UInputAction* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Connection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Connection;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedInputAction_VCamConnection_Statics::NewProp_Connection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedInputAction_VCamConnection_Statics::NewProp_Connection = { "Connection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamUIFunctionLibrary_eventGetConnectedInputAction_VCamConnection_Parms, Connection), Z_Construct_UScriptStruct_FVCamConnection, METADATA_PARAMS(Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedInputAction_VCamConnection_Statics::NewProp_Connection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedInputAction_VCamConnection_Statics::NewProp_Connection_MetaData)) }; // 1271561758
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedInputAction_VCamConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamUIFunctionLibrary_eventGetConnectedInputAction_VCamConnection_Parms, ReturnValue), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedInputAction_VCamConnection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedInputAction_VCamConnection_Statics::NewProp_Connection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedInputAction_VCamConnection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedInputAction_VCamConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "VCam Connections" },
		{ "Comment", "/*\n\x09 * Gets the Connected Input Action for the given VCam Connection\n\x09 * The returned Input Action is only guaranteed to be valid if both IsConnected() is true AND the VCam Connection is set to require an Input Action\n\x09 * If the VCam Connection doesn't require an Input Action then this may still return a valid Action if the Connection Point\n\x09 * had an associated Input Action however you will need to test for this manually\n\x09 */" },
		{ "DisplayName", "Get Connected Input Action" },
		{ "ModuleRelativePath", "Public/UI/VCamUIFunctionLibrary.h" },
		{ "ToolTip", "* Gets the Connected Input Action for the given VCam Connection\n* The returned Input Action is only guaranteed to be valid if both IsConnected() is true AND the VCam Connection is set to require an Input Action\n* If the VCam Connection doesn't require an Input Action then this may still return a valid Action if the Connection Point\n* had an associated Input Action however you will need to test for this manually" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedInputAction_VCamConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamUIFunctionLibrary, nullptr, "GetConnectedInputAction_VCamConnection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedInputAction_VCamConnection_Statics::VCamUIFunctionLibrary_eventGetConnectedInputAction_VCamConnection_Parms), Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedInputAction_VCamConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedInputAction_VCamConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedInputAction_VCamConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedInputAction_VCamConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedInputAction_VCamConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedInputAction_VCamConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedInputAction_VCamWidget_Statics
	{
		struct VCamUIFunctionLibrary_eventGetConnectedInputAction_VCamWidget_Parms
		{
			UVCamWidget* Widget;
			FName ConnectionId;
			UInputAction* OutInputAction;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ConnectionId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutInputAction;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedInputAction_VCamWidget_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedInputAction_VCamWidget_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamUIFunctionLibrary_eventGetConnectedInputAction_VCamWidget_Parms, Widget), Z_Construct_UClass_UVCamWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedInputAction_VCamWidget_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedInputAction_VCamWidget_Statics::NewProp_Widget_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedInputAction_VCamWidget_Statics::NewProp_ConnectionId = { "ConnectionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamUIFunctionLibrary_eventGetConnectedInputAction_VCamWidget_Parms, ConnectionId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedInputAction_VCamWidget_Statics::NewProp_OutInputAction = { "OutInputAction", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamUIFunctionLibrary_eventGetConnectedInputAction_VCamWidget_Parms, OutInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedInputAction_VCamWidget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VCamUIFunctionLibrary_eventGetConnectedInputAction_VCamWidget_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedInputAction_VCamWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VCamUIFunctionLibrary_eventGetConnectedInputAction_VCamWidget_Parms), &Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedInputAction_VCamWidget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedInputAction_VCamWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedInputAction_VCamWidget_Statics::NewProp_Widget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedInputAction_VCamWidget_Statics::NewProp_ConnectionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedInputAction_VCamWidget_Statics::NewProp_OutInputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedInputAction_VCamWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedInputAction_VCamWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "VCam Connections" },
		{ "Comment", "/** Gets the input action mapped to ConnectionId on the widget. */" },
		{ "DefaultToSelf", "Widget" },
		{ "DisplayName", "Get Connected Input Action By Name" },
		{ "ModuleRelativePath", "Public/UI/VCamUIFunctionLibrary.h" },
		{ "ToolTip", "Gets the input action mapped to ConnectionId on the widget." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedInputAction_VCamWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamUIFunctionLibrary, nullptr, "GetConnectedInputAction_VCamWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedInputAction_VCamWidget_Statics::VCamUIFunctionLibrary_eventGetConnectedInputAction_VCamWidget_Parms), Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedInputAction_VCamWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedInputAction_VCamWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedInputAction_VCamWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedInputAction_VCamWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedInputAction_VCamWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedInputAction_VCamWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedModifier_VCamConnection_Statics
	{
		struct VCamUIFunctionLibrary_eventGetConnectedModifier_VCamConnection_Parms
		{
			FVCamConnection Connection;
			UVCamModifier* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Connection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Connection;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedModifier_VCamConnection_Statics::NewProp_Connection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedModifier_VCamConnection_Statics::NewProp_Connection = { "Connection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamUIFunctionLibrary_eventGetConnectedModifier_VCamConnection_Parms, Connection), Z_Construct_UScriptStruct_FVCamConnection, METADATA_PARAMS(Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedModifier_VCamConnection_Statics::NewProp_Connection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedModifier_VCamConnection_Statics::NewProp_Connection_MetaData)) }; // 1271561758
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedModifier_VCamConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamUIFunctionLibrary_eventGetConnectedModifier_VCamConnection_Parms, ReturnValue), Z_Construct_UClass_UVCamModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedModifier_VCamConnection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedModifier_VCamConnection_Statics::NewProp_Connection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedModifier_VCamConnection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedModifier_VCamConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "VCam Connections" },
		{ "Comment", "/*\n\x09 * Gets the Connected Modifier for the given VCam Connection\n\x09 * The returned Modifier is guaranteed to be valid if IsConnected() is true\n\x09 */" },
		{ "DisplayName", "Get Connected Modifier" },
		{ "ModuleRelativePath", "Public/UI/VCamUIFunctionLibrary.h" },
		{ "ToolTip", "* Gets the Connected Modifier for the given VCam Connection\n* The returned Modifier is guaranteed to be valid if IsConnected() is true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedModifier_VCamConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamUIFunctionLibrary, nullptr, "GetConnectedModifier_VCamConnection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedModifier_VCamConnection_Statics::VCamUIFunctionLibrary_eventGetConnectedModifier_VCamConnection_Parms), Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedModifier_VCamConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedModifier_VCamConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedModifier_VCamConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedModifier_VCamConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedModifier_VCamConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedModifier_VCamConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedModifier_VCamWidget_Statics
	{
		struct VCamUIFunctionLibrary_eventGetConnectedModifier_VCamWidget_Parms
		{
			UVCamWidget* Widget;
			FName ConnectionId;
			UVCamModifier* OutModifier;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ConnectionId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutModifier;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedModifier_VCamWidget_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedModifier_VCamWidget_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamUIFunctionLibrary_eventGetConnectedModifier_VCamWidget_Parms, Widget), Z_Construct_UClass_UVCamWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedModifier_VCamWidget_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedModifier_VCamWidget_Statics::NewProp_Widget_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedModifier_VCamWidget_Statics::NewProp_ConnectionId = { "ConnectionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamUIFunctionLibrary_eventGetConnectedModifier_VCamWidget_Parms, ConnectionId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedModifier_VCamWidget_Statics::NewProp_OutModifier = { "OutModifier", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamUIFunctionLibrary_eventGetConnectedModifier_VCamWidget_Parms, OutModifier), Z_Construct_UClass_UVCamModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedModifier_VCamWidget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VCamUIFunctionLibrary_eventGetConnectedModifier_VCamWidget_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedModifier_VCamWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VCamUIFunctionLibrary_eventGetConnectedModifier_VCamWidget_Parms), &Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedModifier_VCamWidget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedModifier_VCamWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedModifier_VCamWidget_Statics::NewProp_Widget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedModifier_VCamWidget_Statics::NewProp_ConnectionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedModifier_VCamWidget_Statics::NewProp_OutModifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedModifier_VCamWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedModifier_VCamWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "VCam Connections" },
		{ "Comment", "/** Gets the modifier connected to ConnectionId on the widget. */" },
		{ "DefaultToSelf", "Widget" },
		{ "DisplayName", "Get Connected Modifier By Name" },
		{ "ModuleRelativePath", "Public/UI/VCamUIFunctionLibrary.h" },
		{ "ToolTip", "Gets the modifier connected to ConnectionId on the widget." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedModifier_VCamWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamUIFunctionLibrary, nullptr, "GetConnectedModifier_VCamWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedModifier_VCamWidget_Statics::VCamUIFunctionLibrary_eventGetConnectedModifier_VCamWidget_Parms), Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedModifier_VCamWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedModifier_VCamWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedModifier_VCamWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedModifier_VCamWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedModifier_VCamWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedModifier_VCamWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionByName_VCamWidget_Statics
	{
		struct VCamUIFunctionLibrary_eventGetConnectionByName_VCamWidget_Parms
		{
			UVCamWidget* Widget;
			FName ConnectionId;
			FVCamConnection OutConnection;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ConnectionId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutConnection;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionByName_VCamWidget_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionByName_VCamWidget_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamUIFunctionLibrary_eventGetConnectionByName_VCamWidget_Parms, Widget), Z_Construct_UClass_UVCamWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionByName_VCamWidget_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionByName_VCamWidget_Statics::NewProp_Widget_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionByName_VCamWidget_Statics::NewProp_ConnectionId = { "ConnectionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamUIFunctionLibrary_eventGetConnectionByName_VCamWidget_Parms, ConnectionId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionByName_VCamWidget_Statics::NewProp_OutConnection = { "OutConnection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamUIFunctionLibrary_eventGetConnectionByName_VCamWidget_Parms, OutConnection), Z_Construct_UScriptStruct_FVCamConnection, METADATA_PARAMS(nullptr, 0) }; // 1271561758
	void Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionByName_VCamWidget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VCamUIFunctionLibrary_eventGetConnectionByName_VCamWidget_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionByName_VCamWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VCamUIFunctionLibrary_eventGetConnectionByName_VCamWidget_Parms), &Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionByName_VCamWidget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionByName_VCamWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionByName_VCamWidget_Statics::NewProp_Widget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionByName_VCamWidget_Statics::NewProp_ConnectionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionByName_VCamWidget_Statics::NewProp_OutConnection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionByName_VCamWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionByName_VCamWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "VCam Connections" },
		{ "Comment", "/** Gets a connection by its ID.  */" },
		{ "DefaultToSelf", "Widget" },
		{ "DisplayName", "Get Connection By Name" },
		{ "ModuleRelativePath", "Public/UI/VCamUIFunctionLibrary.h" },
		{ "ToolTip", "Gets a connection by its ID." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionByName_VCamWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamUIFunctionLibrary, nullptr, "GetConnectionByName_VCamWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionByName_VCamWidget_Statics::VCamUIFunctionLibrary_eventGetConnectionByName_VCamWidget_Parms), Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionByName_VCamWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionByName_VCamWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionByName_VCamWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionByName_VCamWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionByName_VCamWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionByName_VCamWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionPointName_VCamConnection_Statics
	{
		struct VCamUIFunctionLibrary_eventGetConnectionPointName_VCamConnection_Parms
		{
			FVCamConnection Connection;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Connection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Connection;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionPointName_VCamConnection_Statics::NewProp_Connection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionPointName_VCamConnection_Statics::NewProp_Connection = { "Connection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamUIFunctionLibrary_eventGetConnectionPointName_VCamConnection_Parms, Connection), Z_Construct_UScriptStruct_FVCamConnection, METADATA_PARAMS(Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionPointName_VCamConnection_Statics::NewProp_Connection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionPointName_VCamConnection_Statics::NewProp_Connection_MetaData)) }; // 1271561758
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionPointName_VCamConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamUIFunctionLibrary_eventGetConnectionPointName_VCamConnection_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionPointName_VCamConnection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionPointName_VCamConnection_Statics::NewProp_Connection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionPointName_VCamConnection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionPointName_VCamConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "VCam Connections" },
		{ "Comment", "/*\n\x09 * Gets the name of the associated Connection Point for a given VCam Connection.\n\x09 * This will return \"None\" if the IsConnected() is false\n\x09 */" },
		{ "DisplayName", "Get Connection Point Name" },
		{ "ModuleRelativePath", "Public/UI/VCamUIFunctionLibrary.h" },
		{ "ToolTip", "* Gets the name of the associated Connection Point for a given VCam Connection.\n* This will return \"None\" if the IsConnected() is false" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionPointName_VCamConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamUIFunctionLibrary, nullptr, "GetConnectionPointName_VCamConnection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionPointName_VCamConnection_Statics::VCamUIFunctionLibrary_eventGetConnectionPointName_VCamConnection_Parms), Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionPointName_VCamConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionPointName_VCamConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionPointName_VCamConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionPointName_VCamConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionPointName_VCamConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionPointName_VCamConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionPointName_VCamWidget_Statics
	{
		struct VCamUIFunctionLibrary_eventGetConnectionPointName_VCamWidget_Parms
		{
			UVCamWidget* Widget;
			FName ConnectionId;
			FName OutConnectionPointName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ConnectionId;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutConnectionPointName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionPointName_VCamWidget_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionPointName_VCamWidget_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamUIFunctionLibrary_eventGetConnectionPointName_VCamWidget_Parms, Widget), Z_Construct_UClass_UVCamWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionPointName_VCamWidget_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionPointName_VCamWidget_Statics::NewProp_Widget_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionPointName_VCamWidget_Statics::NewProp_ConnectionId = { "ConnectionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamUIFunctionLibrary_eventGetConnectionPointName_VCamWidget_Parms, ConnectionId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionPointName_VCamWidget_Statics::NewProp_OutConnectionPointName = { "OutConnectionPointName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamUIFunctionLibrary_eventGetConnectionPointName_VCamWidget_Parms, OutConnectionPointName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionPointName_VCamWidget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VCamUIFunctionLibrary_eventGetConnectionPointName_VCamWidget_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionPointName_VCamWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VCamUIFunctionLibrary_eventGetConnectionPointName_VCamWidget_Parms), &Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionPointName_VCamWidget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionPointName_VCamWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionPointName_VCamWidget_Statics::NewProp_Widget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionPointName_VCamWidget_Statics::NewProp_ConnectionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionPointName_VCamWidget_Statics::NewProp_OutConnectionPointName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionPointName_VCamWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionPointName_VCamWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "VCam Connections" },
		{ "Comment", "/** Gets the connection point the connection ConnectionId attempts to connect to on the widget. */" },
		{ "DefaultToSelf", "Widget" },
		{ "DisplayName", "Get Connection Point Name By Name" },
		{ "ModuleRelativePath", "Public/UI/VCamUIFunctionLibrary.h" },
		{ "ToolTip", "Gets the connection point the connection ConnectionId attempts to connect to on the widget." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionPointName_VCamWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamUIFunctionLibrary, nullptr, "GetConnectionPointName_VCamWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionPointName_VCamWidget_Statics::VCamUIFunctionLibrary_eventGetConnectionPointName_VCamWidget_Parms), Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionPointName_VCamWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionPointName_VCamWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionPointName_VCamWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionPointName_VCamWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionPointName_VCamWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionPointName_VCamWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamUIFunctionLibrary_IsConnected_VCamConnection_Statics
	{
		struct VCamUIFunctionLibrary_eventIsConnected_VCamConnection_Parms
		{
			FVCamConnection Connection;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Connection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Connection;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamUIFunctionLibrary_IsConnected_VCamConnection_Statics::NewProp_Connection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVCamUIFunctionLibrary_IsConnected_VCamConnection_Statics::NewProp_Connection = { "Connection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamUIFunctionLibrary_eventIsConnected_VCamConnection_Parms, Connection), Z_Construct_UScriptStruct_FVCamConnection, METADATA_PARAMS(Z_Construct_UFunction_UVCamUIFunctionLibrary_IsConnected_VCamConnection_Statics::NewProp_Connection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamUIFunctionLibrary_IsConnected_VCamConnection_Statics::NewProp_Connection_MetaData)) }; // 1271561758
	void Z_Construct_UFunction_UVCamUIFunctionLibrary_IsConnected_VCamConnection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VCamUIFunctionLibrary_eventIsConnected_VCamConnection_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVCamUIFunctionLibrary_IsConnected_VCamConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VCamUIFunctionLibrary_eventIsConnected_VCamConnection_Parms), &Z_Construct_UFunction_UVCamUIFunctionLibrary_IsConnected_VCamConnection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamUIFunctionLibrary_IsConnected_VCamConnection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamUIFunctionLibrary_IsConnected_VCamConnection_Statics::NewProp_Connection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamUIFunctionLibrary_IsConnected_VCamConnection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamUIFunctionLibrary_IsConnected_VCamConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "VCam Connections" },
		{ "Comment", "/*\n\x09 * Checks whether a given VCam Connection is successfully connected.\n\x09 * If this returns true then it is safe to assume that the Connected Modifier for the Connection is valid to use\n\x09 */" },
		{ "DisplayName", "Is Connected" },
		{ "ModuleRelativePath", "Public/UI/VCamUIFunctionLibrary.h" },
		{ "ToolTip", "* Checks whether a given VCam Connection is successfully connected.\n* If this returns true then it is safe to assume that the Connected Modifier for the Connection is valid to use" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamUIFunctionLibrary_IsConnected_VCamConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamUIFunctionLibrary, nullptr, "IsConnected_VCamConnection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamUIFunctionLibrary_IsConnected_VCamConnection_Statics::VCamUIFunctionLibrary_eventIsConnected_VCamConnection_Parms), Z_Construct_UFunction_UVCamUIFunctionLibrary_IsConnected_VCamConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamUIFunctionLibrary_IsConnected_VCamConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamUIFunctionLibrary_IsConnected_VCamConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamUIFunctionLibrary_IsConnected_VCamConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamUIFunctionLibrary_IsConnected_VCamConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamUIFunctionLibrary_IsConnected_VCamConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamUIFunctionLibrary_IsConnected_VCamWidget_Statics
	{
		struct VCamUIFunctionLibrary_eventIsConnected_VCamWidget_Parms
		{
			UVCamWidget* Widget;
			FName ConnectionId;
			bool bOutIsConnected;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ConnectionId;
		static void NewProp_bOutIsConnected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutIsConnected;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamUIFunctionLibrary_IsConnected_VCamWidget_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVCamUIFunctionLibrary_IsConnected_VCamWidget_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamUIFunctionLibrary_eventIsConnected_VCamWidget_Parms, Widget), Z_Construct_UClass_UVCamWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVCamUIFunctionLibrary_IsConnected_VCamWidget_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamUIFunctionLibrary_IsConnected_VCamWidget_Statics::NewProp_Widget_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVCamUIFunctionLibrary_IsConnected_VCamWidget_Statics::NewProp_ConnectionId = { "ConnectionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamUIFunctionLibrary_eventIsConnected_VCamWidget_Parms, ConnectionId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVCamUIFunctionLibrary_IsConnected_VCamWidget_Statics::NewProp_bOutIsConnected_SetBit(void* Obj)
	{
		((VCamUIFunctionLibrary_eventIsConnected_VCamWidget_Parms*)Obj)->bOutIsConnected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVCamUIFunctionLibrary_IsConnected_VCamWidget_Statics::NewProp_bOutIsConnected = { "bOutIsConnected", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VCamUIFunctionLibrary_eventIsConnected_VCamWidget_Parms), &Z_Construct_UFunction_UVCamUIFunctionLibrary_IsConnected_VCamWidget_Statics::NewProp_bOutIsConnected_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVCamUIFunctionLibrary_IsConnected_VCamWidget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VCamUIFunctionLibrary_eventIsConnected_VCamWidget_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVCamUIFunctionLibrary_IsConnected_VCamWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VCamUIFunctionLibrary_eventIsConnected_VCamWidget_Parms), &Z_Construct_UFunction_UVCamUIFunctionLibrary_IsConnected_VCamWidget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamUIFunctionLibrary_IsConnected_VCamWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamUIFunctionLibrary_IsConnected_VCamWidget_Statics::NewProp_Widget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamUIFunctionLibrary_IsConnected_VCamWidget_Statics::NewProp_ConnectionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamUIFunctionLibrary_IsConnected_VCamWidget_Statics::NewProp_bOutIsConnected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamUIFunctionLibrary_IsConnected_VCamWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamUIFunctionLibrary_IsConnected_VCamWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "VCam Connections" },
		{ "Comment", "/** Gets whether the ConnectionId is connected on the widget. */" },
		{ "DefaultToSelf", "Widget" },
		{ "DisplayName", "Is Connected By Name" },
		{ "ModuleRelativePath", "Public/UI/VCamUIFunctionLibrary.h" },
		{ "ToolTip", "Gets whether the ConnectionId is connected on the widget." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamUIFunctionLibrary_IsConnected_VCamWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamUIFunctionLibrary, nullptr, "IsConnected_VCamWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamUIFunctionLibrary_IsConnected_VCamWidget_Statics::VCamUIFunctionLibrary_eventIsConnected_VCamWidget_Parms), Z_Construct_UFunction_UVCamUIFunctionLibrary_IsConnected_VCamWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamUIFunctionLibrary_IsConnected_VCamWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamUIFunctionLibrary_IsConnected_VCamWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamUIFunctionLibrary_IsConnected_VCamWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamUIFunctionLibrary_IsConnected_VCamWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamUIFunctionLibrary_IsConnected_VCamWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVCamUIFunctionLibrary);
	UClass* Z_Construct_UClass_UVCamUIFunctionLibrary_NoRegister()
	{
		return UVCamUIFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVCamUIFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVCamUIFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VCamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVCamUIFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedInputAction_VCamConnection, "GetConnectedInputAction_VCamConnection" }, // 1028924209
		{ &Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedInputAction_VCamWidget, "GetConnectedInputAction_VCamWidget" }, // 1309359257
		{ &Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedModifier_VCamConnection, "GetConnectedModifier_VCamConnection" }, // 2036438271
		{ &Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectedModifier_VCamWidget, "GetConnectedModifier_VCamWidget" }, // 2901320348
		{ &Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionByName_VCamWidget, "GetConnectionByName_VCamWidget" }, // 1023037224
		{ &Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionPointName_VCamConnection, "GetConnectionPointName_VCamConnection" }, // 839571366
		{ &Z_Construct_UFunction_UVCamUIFunctionLibrary_GetConnectionPointName_VCamWidget, "GetConnectionPointName_VCamWidget" }, // 2465945844
		{ &Z_Construct_UFunction_UVCamUIFunctionLibrary_IsConnected_VCamConnection, "IsConnected_VCamConnection" }, // 2816142103
		{ &Z_Construct_UFunction_UVCamUIFunctionLibrary_IsConnected_VCamWidget, "IsConnected_VCamWidget" }, // 12836660
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamUIFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * Function Library primarily used for exposing functionality of UI related structs to Blueprints \n */" },
		{ "IncludePath", "UI/VCamUIFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/UI/VCamUIFunctionLibrary.h" },
		{ "ToolTip", "* Function Library primarily used for exposing functionality of UI related structs to Blueprints" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVCamUIFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVCamUIFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVCamUIFunctionLibrary_Statics::ClassParams = {
		&UVCamUIFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVCamUIFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamUIFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVCamUIFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UVCamUIFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVCamUIFunctionLibrary.OuterSingleton, Z_Construct_UClass_UVCamUIFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVCamUIFunctionLibrary.OuterSingleton;
	}
	template<> VCAMCORE_API UClass* StaticClass<UVCamUIFunctionLibrary>()
	{
		return UVCamUIFunctionLibrary::StaticClass();
	}
	UVCamUIFunctionLibrary::UVCamUIFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVCamUIFunctionLibrary);
	UVCamUIFunctionLibrary::~UVCamUIFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamUIFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamUIFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVCamUIFunctionLibrary, UVCamUIFunctionLibrary::StaticClass, TEXT("UVCamUIFunctionLibrary"), &Z_Registration_Info_UClass_UVCamUIFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVCamUIFunctionLibrary), 4273312641U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamUIFunctionLibrary_h_2434406273(TEXT("/Script/VCamCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamUIFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamUIFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
