// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DMXSubsystem.h"
#include "DMXAttribute.h"
#include "DMXProtocolTypes.h"
#include "IO/DMXInputPortReference.h"
#include "IO/DMXOutputPortReference.h"
#include "Library/DMXEntityFixtureType.h"
#include "Library/DMXEntityReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXSubsystem() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	DMXPROTOCOL_API UEnum* Z_Construct_UEnum_DMXProtocol_EDMXFixtureSignalFormat();
	DMXPROTOCOL_API UEnum* Z_Construct_UEnum_DMXProtocol_EDMXSendResult();
	DMXPROTOCOL_API UScriptStruct* Z_Construct_UScriptStruct_FDMXAttributeName();
	DMXPROTOCOL_API UScriptStruct* Z_Construct_UScriptStruct_FDMXFixtureCategory();
	DMXPROTOCOL_API UScriptStruct* Z_Construct_UScriptStruct_FDMXInputPortReference();
	DMXPROTOCOL_API UScriptStruct* Z_Construct_UScriptStruct_FDMXOutputPortReference();
	DMXPROTOCOL_API UScriptStruct* Z_Construct_UScriptStruct_FDMXProtocolName();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXEntityController_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXEntityFixtureType_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXLibrary_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXSubsystem();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXSubsystem_NoRegister();
	DMXRUNTIME_API UEnum* Z_Construct_UEnum_DMXRuntime_EDMXPixelMappingDistribution();
	DMXRUNTIME_API UFunction* Z_Construct_UDelegateFunction_DMXRuntime_ProtocolReceivedDelegate__DelegateSignature();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXCell();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXEntityFixturePatchRef();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXEntityFixtureTypeRef();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXFixtureMatrix();
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	UPackage* Z_Construct_UPackage__Script_DMXRuntime();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DMXRuntime_ProtocolReceivedDelegate__DelegateSignature_Statics
	{
		struct _Script_DMXRuntime_eventProtocolReceivedDelegate_Parms
		{
			FDMXProtocolName Protocol;
			int32 RemoteUniverse;
			TArray<uint8> DMXBuffer;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Protocol;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RemoteUniverse;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DMXBuffer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DMXBuffer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DMXBuffer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_DMXRuntime_ProtocolReceivedDelegate__DelegateSignature_Statics::NewProp_Protocol = { "Protocol", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_DMXRuntime_eventProtocolReceivedDelegate_Parms, Protocol), Z_Construct_UScriptStruct_FDMXProtocolName, METADATA_PARAMS(nullptr, 0) }; // 127357705
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_DMXRuntime_ProtocolReceivedDelegate__DelegateSignature_Statics::NewProp_RemoteUniverse = { "RemoteUniverse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_DMXRuntime_eventProtocolReceivedDelegate_Parms, RemoteUniverse), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_DMXRuntime_ProtocolReceivedDelegate__DelegateSignature_Statics::NewProp_DMXBuffer_Inner = { "DMXBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DMXRuntime_ProtocolReceivedDelegate__DelegateSignature_Statics::NewProp_DMXBuffer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_DMXRuntime_ProtocolReceivedDelegate__DelegateSignature_Statics::NewProp_DMXBuffer = { "DMXBuffer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_DMXRuntime_eventProtocolReceivedDelegate_Parms, DMXBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_DMXRuntime_ProtocolReceivedDelegate__DelegateSignature_Statics::NewProp_DMXBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DMXRuntime_ProtocolReceivedDelegate__DelegateSignature_Statics::NewProp_DMXBuffer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DMXRuntime_ProtocolReceivedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DMXRuntime_ProtocolReceivedDelegate__DelegateSignature_Statics::NewProp_Protocol,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DMXRuntime_ProtocolReceivedDelegate__DelegateSignature_Statics::NewProp_RemoteUniverse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DMXRuntime_ProtocolReceivedDelegate__DelegateSignature_Statics::NewProp_DMXBuffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DMXRuntime_ProtocolReceivedDelegate__DelegateSignature_Statics::NewProp_DMXBuffer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DMXRuntime_ProtocolReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DMXSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DMXRuntime_ProtocolReceivedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DMXRuntime, nullptr, "ProtocolReceivedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_DMXRuntime_ProtocolReceivedDelegate__DelegateSignature_Statics::_Script_DMXRuntime_eventProtocolReceivedDelegate_Parms), Z_Construct_UDelegateFunction_DMXRuntime_ProtocolReceivedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DMXRuntime_ProtocolReceivedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DMXRuntime_ProtocolReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DMXRuntime_ProtocolReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DMXRuntime_ProtocolReceivedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DMXRuntime_ProtocolReceivedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FProtocolReceivedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ProtocolReceivedDelegate, FDMXProtocolName Protocol, int32 RemoteUniverse, TArray<uint8> const& DMXBuffer)
{
	struct _Script_DMXRuntime_eventProtocolReceivedDelegate_Parms
	{
		FDMXProtocolName Protocol;
		int32 RemoteUniverse;
		TArray<uint8> DMXBuffer;
	};
	_Script_DMXRuntime_eventProtocolReceivedDelegate_Parms Parms;
	Parms.Protocol=Protocol;
	Parms.RemoteUniverse=RemoteUniverse;
	Parms.DMXBuffer=DMXBuffer;
	ProtocolReceivedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UDMXSubsystem::execPixelMappingDistributionSort)
	{
		P_GET_ENUM(EDMXPixelMappingDistribution,Z_Param_InDistribution);
		P_GET_PROPERTY(FIntProperty,Z_Param_InNumXPanels);
		P_GET_PROPERTY(FIntProperty,Z_Param_InNumYPanels);
		P_GET_TARRAY_REF(int32,Z_Param_Out_InUnorderedList);
		P_GET_TARRAY_REF(int32,Z_Param_Out_OutSortedList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PixelMappingDistributionSort(EDMXPixelMappingDistribution(Z_Param_InDistribution),Z_Param_InNumXPanels,Z_Param_InNumYPanels,Z_Param_Out_InUnorderedList,Z_Param_Out_OutSortedList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXSubsystem::execGetAllMatrixCells)
	{
		P_GET_OBJECT(UDMXEntityFixturePatch,Z_Param_FixturePatch);
		P_GET_TARRAY_REF(FDMXCell,Z_Param_Out_Cells);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAllMatrixCells(Z_Param_FixturePatch,Z_Param_Out_Cells);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXSubsystem::execGetMatrixCell)
	{
		P_GET_OBJECT(UDMXEntityFixturePatch,Z_Param_FixturePatch);
		P_GET_STRUCT(FIntPoint,Z_Param_Coordinate);
		P_GET_STRUCT_REF(FDMXCell,Z_Param_Out_Cell);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMatrixCell(Z_Param_FixturePatch,Z_Param_Coordinate,Z_Param_Out_Cell);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXSubsystem::execGetCellAttributes)
	{
		P_GET_OBJECT(UDMXEntityFixturePatch,Z_Param_FixturePatch);
		P_GET_TARRAY_REF(FDMXAttributeName,Z_Param_Out_CellAttributes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCellAttributes(Z_Param_FixturePatch,Z_Param_Out_CellAttributes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXSubsystem::execGetMatrixProperties)
	{
		P_GET_OBJECT(UDMXEntityFixturePatch,Z_Param_FixturePatch);
		P_GET_STRUCT_REF(FDMXFixtureMatrix,Z_Param_Out_MatrixProperties);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMatrixProperties(Z_Param_FixturePatch,Z_Param_Out_MatrixProperties);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXSubsystem::execGetMatrixCellChannelsAbsolute)
	{
		P_GET_OBJECT(UDMXEntityFixturePatch,Z_Param_FixturePatch);
		P_GET_STRUCT(FIntPoint,Z_Param_Coordinate);
		P_GET_TMAP_REF(FDMXAttributeName,int32,Z_Param_Out_AttributeChannelMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMatrixCellChannelsAbsolute(Z_Param_FixturePatch,Z_Param_Coordinate,Z_Param_Out_AttributeChannelMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXSubsystem::execGetMatrixCellChannelsRelative)
	{
		P_GET_OBJECT(UDMXEntityFixturePatch,Z_Param_FixturePatch);
		P_GET_STRUCT(FIntPoint,Z_Param_Coordinate);
		P_GET_TMAP_REF(FDMXAttributeName,int32,Z_Param_Out_AttributeChannelMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMatrixCellChannelsRelative(Z_Param_FixturePatch,Z_Param_Coordinate,Z_Param_Out_AttributeChannelMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXSubsystem::execGetMatrixCellValue)
	{
		P_GET_OBJECT(UDMXEntityFixturePatch,Z_Param_FixturePatch);
		P_GET_STRUCT(FIntPoint,Z_Param_Coordinate);
		P_GET_TMAP_REF(FDMXAttributeName,int32,Z_Param_Out_AttributeValueMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMatrixCellValue(Z_Param_FixturePatch,Z_Param_Coordinate,Z_Param_Out_AttributeValueMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXSubsystem::execSetMatrixCellValue)
	{
		P_GET_OBJECT(UDMXEntityFixturePatch,Z_Param_FixturePatch);
		P_GET_STRUCT(FIntPoint,Z_Param_Coordinate);
		P_GET_STRUCT(FDMXAttributeName,Z_Param_Attribute);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetMatrixCellValue(Z_Param_FixturePatch,Z_Param_Coordinate,Z_Param_Attribute,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXSubsystem::execGetAttributeLabel)
	{
		P_GET_STRUCT(FDMXAttributeName,Z_Param_AttributeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetAttributeLabel(Z_Param_AttributeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXSubsystem::execGetDMXSubsystem_Callable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDMXSubsystem**)Z_Param__Result=UDMXSubsystem::GetDMXSubsystem_Callable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXSubsystem::execGetDMXSubsystem_Pure)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDMXSubsystem**)Z_Param__Result=UDMXSubsystem::GetDMXSubsystem_Pure();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXSubsystem::execPatchIsOfSelectedType)
	{
		P_GET_OBJECT(UDMXEntityFixturePatch,Z_Param_InFixturePatch);
		P_GET_PROPERTY(FStrProperty,Z_Param_RefTypeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PatchIsOfSelectedType(Z_Param_InFixturePatch,Z_Param_RefTypeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXSubsystem::execGetFunctionsValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_FunctionAttributeName);
		P_GET_TMAP_REF(FDMXAttributeName,int32,Z_Param_Out_InAttributesMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetFunctionsValue(Z_Param_FunctionAttributeName,Z_Param_Out_InAttributesMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXSubsystem::execGetFunctionsMapForPatch)
	{
		P_GET_OBJECT(UDMXEntityFixturePatch,Z_Param_InFixturePatch);
		P_GET_TMAP_REF(FDMXAttributeName,int32,Z_Param_Out_OutAttributesMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetFunctionsMapForPatch(Z_Param_InFixturePatch,Z_Param_Out_OutAttributesMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXSubsystem::execGetFunctionsMap)
	{
		P_GET_OBJECT(UDMXEntityFixturePatch,Z_Param_InFixturePatch);
		P_GET_TMAP_REF(FDMXAttributeName,int32,Z_Param_Out_OutAttributesMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetFunctionsMap(Z_Param_InFixturePatch,Z_Param_Out_OutAttributesMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXSubsystem::execGetFixturePatch)
	{
		P_GET_STRUCT(FDMXEntityFixturePatchRef,Z_Param_InFixturePatch);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDMXEntityFixturePatch**)Z_Param__Result=P_THIS->GetFixturePatch(Z_Param_InFixturePatch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXSubsystem::execGetFixtureType)
	{
		P_GET_STRUCT(FDMXEntityFixtureTypeRef,Z_Param_InFixtureType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDMXEntityFixtureType**)Z_Param__Result=P_THIS->GetFixtureType(Z_Param_InFixtureType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXSubsystem::execGetNormalizedAttributeValue)
	{
		P_GET_OBJECT(UDMXEntityFixturePatch,Z_Param_InFixturePatch);
		P_GET_STRUCT(FDMXAttributeName,Z_Param_InFunctionAttribute);
		P_GET_PROPERTY(FIntProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetNormalizedAttributeValue(Z_Param_InFixturePatch,Z_Param_InFunctionAttribute,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXSubsystem::execIntToNormalizedValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InValue);
		P_GET_ENUM(EDMXFixtureSignalFormat,Z_Param_InSignalFormat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->IntToNormalizedValue(Z_Param_InValue,EDMXFixtureSignalFormat(Z_Param_InSignalFormat));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXSubsystem::execIntValueToBytes)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InValue);
		P_GET_ENUM(EDMXFixtureSignalFormat,Z_Param_InSignalFormat);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Bytes);
		P_GET_UBOOL(Z_Param_bUseLSB);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDMXSubsystem::IntValueToBytes(Z_Param_InValue,EDMXFixtureSignalFormat(Z_Param_InSignalFormat),Z_Param_Out_Bytes,Z_Param_bUseLSB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXSubsystem::execNormalizedValueToBytes)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_GET_ENUM(EDMXFixtureSignalFormat,Z_Param_InSignalFormat);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Bytes);
		P_GET_UBOOL(Z_Param_bUseLSB);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NormalizedValueToBytes(Z_Param_InValue,EDMXFixtureSignalFormat(Z_Param_InSignalFormat),Z_Param_Out_Bytes,Z_Param_bUseLSB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXSubsystem::execBytesToNormalizedValue)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Bytes);
		P_GET_UBOOL(Z_Param_bUseLSB);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->BytesToNormalizedValue(Z_Param_Out_Bytes,Z_Param_bUseLSB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXSubsystem::execBytesToInt)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Bytes);
		P_GET_UBOOL(Z_Param_bUseLSB);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->BytesToInt(Z_Param_Out_Bytes,Z_Param_bUseLSB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXSubsystem::execGetAllDMXLibraries)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UDMXLibrary*>*)Z_Param__Result=P_THIS->GetAllDMXLibraries();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXSubsystem::execGetControllerByName)
	{
		P_GET_OBJECT(UDMXLibrary,Z_Param_DMXLibrary);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDMXEntityController**)Z_Param__Result=P_THIS->GetControllerByName(Z_Param_DMXLibrary,Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXSubsystem::execGetAllControllersInLibrary)
	{
		P_GET_OBJECT(UDMXLibrary,Z_Param_DMXLibrary);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UDMXEntityController*>*)Z_Param__Result=P_THIS->GetAllControllersInLibrary(Z_Param_DMXLibrary);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXSubsystem::execGetAllUniversesInController)
	{
		P_GET_OBJECT(UDMXLibrary,Z_Param_DMXLibrary);
		P_GET_PROPERTY(FStrProperty,Z_Param_ControllerName);
		P_GET_TARRAY_REF(int32,Z_Param_Out_OutResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllUniversesInController(Z_Param_DMXLibrary,Z_Param_ControllerName,Z_Param_Out_OutResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXSubsystem::execGetFixtureTypeByName)
	{
		P_GET_OBJECT(UDMXLibrary,Z_Param_DMXLibrary);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDMXEntityFixtureType**)Z_Param__Result=P_THIS->GetFixtureTypeByName(Z_Param_DMXLibrary,Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXSubsystem::execGetAllFixtureTypesInLibrary)
	{
		P_GET_OBJECT(UDMXLibrary,Z_Param_DMXLibrary);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UDMXEntityFixtureType*>*)Z_Param__Result=P_THIS->GetAllFixtureTypesInLibrary(Z_Param_DMXLibrary);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXSubsystem::execGetFixtureByName)
	{
		P_GET_OBJECT(UDMXLibrary,Z_Param_DMXLibrary);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDMXEntityFixturePatch**)Z_Param__Result=P_THIS->GetFixtureByName(Z_Param_DMXLibrary,Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXSubsystem::execGetAllFixturesInLibrary)
	{
		P_GET_OBJECT(UDMXLibrary,Z_Param_DMXLibrary);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UDMXEntityFixturePatch*>*)Z_Param__Result=P_THIS->GetAllFixturesInLibrary(Z_Param_DMXLibrary);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXSubsystem::execGetAllFixturesWithTag)
	{
		P_GET_OBJECT(UDMXLibrary,Z_Param_DMXLibrary);
		P_GET_PROPERTY(FNameProperty,Z_Param_CustomTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UDMXEntityFixturePatch*>*)Z_Param__Result=P_THIS->GetAllFixturesWithTag(Z_Param_DMXLibrary,Z_Param_CustomTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXSubsystem::execGetFixtureAttributes)
	{
		P_GET_OBJECT(UDMXEntityFixturePatch,Z_Param_InFixturePatch);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_DMXBuffer);
		P_GET_TMAP_REF(FDMXAttributeName,int32,Z_Param_Out_OutResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetFixtureAttributes(Z_Param_InFixturePatch,Z_Param_Out_DMXBuffer,Z_Param_Out_OutResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXSubsystem::execGetAllFixturesInUniverse)
	{
		P_GET_OBJECT(UDMXLibrary,Z_Param_DMXLibrary);
		P_GET_PROPERTY(FIntProperty,Z_Param_UniverseId);
		P_GET_TARRAY_REF(UDMXEntityFixturePatch*,Z_Param_Out_OutResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllFixturesInUniverse(Z_Param_DMXLibrary,Z_Param_UniverseId,Z_Param_Out_OutResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXSubsystem::execGetAllFixturesOfCategory)
	{
		P_GET_OBJECT(UDMXLibrary,Z_Param_DMXLibrary);
		P_GET_STRUCT(FDMXFixtureCategory,Z_Param_Category);
		P_GET_TARRAY_REF(UDMXEntityFixturePatch*,Z_Param_Out_OutResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllFixturesOfCategory(Z_Param_DMXLibrary,Z_Param_Category,Z_Param_Out_OutResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXSubsystem::execGetAllFixturesOfType)
	{
		P_GET_STRUCT_REF(FDMXEntityFixtureTypeRef,Z_Param_Out_FixtureType);
		P_GET_TARRAY_REF(UDMXEntityFixturePatch*,Z_Param_Out_OutResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllFixturesOfType(Z_Param_Out_FixtureType,Z_Param_Out_OutResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXSubsystem::execGetDMXDataFromOutputPort)
	{
		P_GET_STRUCT(FDMXOutputPortReference,Z_Param_OutputPortReference);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_DMXData);
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalUniverse);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDMXSubsystem::GetDMXDataFromOutputPort(Z_Param_OutputPortReference,Z_Param_Out_DMXData,Z_Param_LocalUniverse);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXSubsystem::execGetDMXDataFromInputPort)
	{
		P_GET_STRUCT(FDMXInputPortReference,Z_Param_InputPortReference);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_DMXData);
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalUniverse);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDMXSubsystem::GetDMXDataFromInputPort(Z_Param_InputPortReference,Z_Param_Out_DMXData,Z_Param_LocalUniverse);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXSubsystem::execGetRawBuffer)
	{
		P_GET_STRUCT(FDMXProtocolName,Z_Param_SelectedProtocol);
		P_GET_PROPERTY(FIntProperty,Z_Param_RemoteUniverse);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_DMXBuffer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetRawBuffer(Z_Param_SelectedProtocol,Z_Param_RemoteUniverse,Z_Param_Out_DMXBuffer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXSubsystem::execSendDMXToOutputPort)
	{
		P_GET_STRUCT(FDMXOutputPortReference,Z_Param_OutputPortReference);
		P_GET_TMAP(int32,uint8,Z_Param_ChannelToValueMap);
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalUniverse);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDMXSubsystem::SendDMXToOutputPort(Z_Param_OutputPortReference,Z_Param_ChannelToValueMap,Z_Param_LocalUniverse);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXSubsystem::execSendDMXRaw)
	{
		P_GET_STRUCT(FDMXProtocolName,Z_Param_SelectedProtocol);
		P_GET_PROPERTY(FIntProperty,Z_Param_RemoteUniverse);
		P_GET_TMAP(int32,uint8,Z_Param_AddressValueMap);
		P_GET_ENUM_REF(EDMXSendResult,Z_Param_Out_OutResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendDMXRaw(Z_Param_SelectedProtocol,Z_Param_RemoteUniverse,Z_Param_AddressValueMap,(EDMXSendResult&)(Z_Param_Out_OutResult));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXSubsystem::execSendDMX)
	{
		P_GET_OBJECT(UDMXEntityFixturePatch,Z_Param_FixturePatch);
		P_GET_TMAP(FDMXAttributeName,int32,Z_Param_AttributeMap);
		P_GET_ENUM_REF(EDMXSendResult,Z_Param_Out_OutResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendDMX(Z_Param_FixturePatch,Z_Param_AttributeMap,(EDMXSendResult&)(Z_Param_Out_OutResult));
		P_NATIVE_END;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(UDMXSubsystem::execOnAssetRegistryRemovedAsset)
	{
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_Asset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAssetRegistryRemovedAsset(Z_Param_Out_Asset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXSubsystem::execOnAssetRegistryAddedAsset)
	{
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_Asset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAssetRegistryAddedAsset(Z_Param_Out_Asset);
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UDMXSubsystem::StaticRegisterNativesUDMXSubsystem()
	{
		UClass* Class = UDMXSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BytesToInt", &UDMXSubsystem::execBytesToInt },
			{ "BytesToNormalizedValue", &UDMXSubsystem::execBytesToNormalizedValue },
			{ "GetAllControllersInLibrary", &UDMXSubsystem::execGetAllControllersInLibrary },
			{ "GetAllDMXLibraries", &UDMXSubsystem::execGetAllDMXLibraries },
			{ "GetAllFixturesInLibrary", &UDMXSubsystem::execGetAllFixturesInLibrary },
			{ "GetAllFixturesInUniverse", &UDMXSubsystem::execGetAllFixturesInUniverse },
			{ "GetAllFixturesOfCategory", &UDMXSubsystem::execGetAllFixturesOfCategory },
			{ "GetAllFixturesOfType", &UDMXSubsystem::execGetAllFixturesOfType },
			{ "GetAllFixturesWithTag", &UDMXSubsystem::execGetAllFixturesWithTag },
			{ "GetAllFixtureTypesInLibrary", &UDMXSubsystem::execGetAllFixtureTypesInLibrary },
			{ "GetAllMatrixCells", &UDMXSubsystem::execGetAllMatrixCells },
			{ "GetAllUniversesInController", &UDMXSubsystem::execGetAllUniversesInController },
			{ "GetAttributeLabel", &UDMXSubsystem::execGetAttributeLabel },
			{ "GetCellAttributes", &UDMXSubsystem::execGetCellAttributes },
			{ "GetControllerByName", &UDMXSubsystem::execGetControllerByName },
			{ "GetDMXDataFromInputPort", &UDMXSubsystem::execGetDMXDataFromInputPort },
			{ "GetDMXDataFromOutputPort", &UDMXSubsystem::execGetDMXDataFromOutputPort },
			{ "GetDMXSubsystem_Callable", &UDMXSubsystem::execGetDMXSubsystem_Callable },
			{ "GetDMXSubsystem_Pure", &UDMXSubsystem::execGetDMXSubsystem_Pure },
			{ "GetFixtureAttributes", &UDMXSubsystem::execGetFixtureAttributes },
			{ "GetFixtureByName", &UDMXSubsystem::execGetFixtureByName },
			{ "GetFixturePatch", &UDMXSubsystem::execGetFixturePatch },
			{ "GetFixtureType", &UDMXSubsystem::execGetFixtureType },
			{ "GetFixtureTypeByName", &UDMXSubsystem::execGetFixtureTypeByName },
			{ "GetFunctionsMap", &UDMXSubsystem::execGetFunctionsMap },
			{ "GetFunctionsMapForPatch", &UDMXSubsystem::execGetFunctionsMapForPatch },
			{ "GetFunctionsValue", &UDMXSubsystem::execGetFunctionsValue },
			{ "GetMatrixCell", &UDMXSubsystem::execGetMatrixCell },
			{ "GetMatrixCellChannelsAbsolute", &UDMXSubsystem::execGetMatrixCellChannelsAbsolute },
			{ "GetMatrixCellChannelsRelative", &UDMXSubsystem::execGetMatrixCellChannelsRelative },
			{ "GetMatrixCellValue", &UDMXSubsystem::execGetMatrixCellValue },
			{ "GetMatrixProperties", &UDMXSubsystem::execGetMatrixProperties },
			{ "GetNormalizedAttributeValue", &UDMXSubsystem::execGetNormalizedAttributeValue },
			{ "GetRawBuffer", &UDMXSubsystem::execGetRawBuffer },
			{ "IntToNormalizedValue", &UDMXSubsystem::execIntToNormalizedValue },
			{ "IntValueToBytes", &UDMXSubsystem::execIntValueToBytes },
			{ "NormalizedValueToBytes", &UDMXSubsystem::execNormalizedValueToBytes },
#if WITH_EDITOR
			{ "OnAssetRegistryAddedAsset", &UDMXSubsystem::execOnAssetRegistryAddedAsset },
			{ "OnAssetRegistryRemovedAsset", &UDMXSubsystem::execOnAssetRegistryRemovedAsset },
#endif // WITH_EDITOR
			{ "PatchIsOfSelectedType", &UDMXSubsystem::execPatchIsOfSelectedType },
			{ "PixelMappingDistributionSort", &UDMXSubsystem::execPixelMappingDistributionSort },
			{ "SendDMX", &UDMXSubsystem::execSendDMX },
			{ "SendDMXRaw", &UDMXSubsystem::execSendDMXRaw },
			{ "SendDMXToOutputPort", &UDMXSubsystem::execSendDMXToOutputPort },
			{ "SetMatrixCellValue", &UDMXSubsystem::execSetMatrixCellValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDMXSubsystem_BytesToInt_Statics
	{
		struct DMXSubsystem_eventBytesToInt_Parms
		{
			TArray<uint8> Bytes;
			bool bUseLSB;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bytes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bytes;
		static void NewProp_bUseLSB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLSB;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDMXSubsystem_BytesToInt_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_BytesToInt_Statics::NewProp_Bytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDMXSubsystem_BytesToInt_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventBytesToInt_Parms, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_BytesToInt_Statics::NewProp_Bytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_BytesToInt_Statics::NewProp_Bytes_MetaData)) };
	void Z_Construct_UFunction_UDMXSubsystem_BytesToInt_Statics::NewProp_bUseLSB_SetBit(void* Obj)
	{
		((DMXSubsystem_eventBytesToInt_Parms*)Obj)->bUseLSB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMXSubsystem_BytesToInt_Statics::NewProp_bUseLSB = { "bUseLSB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DMXSubsystem_eventBytesToInt_Parms), &Z_Construct_UFunction_UDMXSubsystem_BytesToInt_Statics::NewProp_bUseLSB_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXSubsystem_BytesToInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventBytesToInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXSubsystem_BytesToInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_BytesToInt_Statics::NewProp_Bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_BytesToInt_Statics::NewProp_Bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_BytesToInt_Statics::NewProp_bUseLSB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_BytesToInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_BytesToInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/**\n\x09 * Return integer given an array of bytes. Up to the first 4 bytes in the array will be used for the conversion.\n\x09 * @param bUseLSB\x09Least Significant Byte mode makes the individual bytes (channels) of the function be\n\x09 *\x09\x09\x09\x09\x09interpreted with the first bytes being the lowest part of the number.\n\x09 *\x09\x09\x09\x09\x09Most Fixtures use MSB (Most Significant Byte).\n\x09 */" },
		{ "CPP_Default_bUseLSB", "false" },
		{ "ModuleRelativePath", "Public/DMXSubsystem.h" },
		{ "ToolTip", "Return integer given an array of bytes. Up to the first 4 bytes in the array will be used for the conversion.\n@param bUseLSB       Least Significant Byte mode makes the individual bytes (channels) of the function be\n                                     interpreted with the first bytes being the lowest part of the number.\n                                     Most Fixtures use MSB (Most Significant Byte)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXSubsystem_BytesToInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXSubsystem, nullptr, "BytesToInt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXSubsystem_BytesToInt_Statics::DMXSubsystem_eventBytesToInt_Parms), Z_Construct_UFunction_UDMXSubsystem_BytesToInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_BytesToInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_BytesToInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_BytesToInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXSubsystem_BytesToInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXSubsystem_BytesToInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXSubsystem_BytesToNormalizedValue_Statics
	{
		struct DMXSubsystem_eventBytesToNormalizedValue_Parms
		{
			TArray<uint8> Bytes;
			bool bUseLSB;
			float ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bytes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bytes;
		static void NewProp_bUseLSB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLSB;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDMXSubsystem_BytesToNormalizedValue_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_BytesToNormalizedValue_Statics::NewProp_Bytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDMXSubsystem_BytesToNormalizedValue_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventBytesToNormalizedValue_Parms, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_BytesToNormalizedValue_Statics::NewProp_Bytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_BytesToNormalizedValue_Statics::NewProp_Bytes_MetaData)) };
	void Z_Construct_UFunction_UDMXSubsystem_BytesToNormalizedValue_Statics::NewProp_bUseLSB_SetBit(void* Obj)
	{
		((DMXSubsystem_eventBytesToNormalizedValue_Parms*)Obj)->bUseLSB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMXSubsystem_BytesToNormalizedValue_Statics::NewProp_bUseLSB = { "bUseLSB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DMXSubsystem_eventBytesToNormalizedValue_Parms), &Z_Construct_UFunction_UDMXSubsystem_BytesToNormalizedValue_Statics::NewProp_bUseLSB_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDMXSubsystem_BytesToNormalizedValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventBytesToNormalizedValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXSubsystem_BytesToNormalizedValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_BytesToNormalizedValue_Statics::NewProp_Bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_BytesToNormalizedValue_Statics::NewProp_Bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_BytesToNormalizedValue_Statics::NewProp_bUseLSB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_BytesToNormalizedValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_BytesToNormalizedValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/**\n\x09 * Return normalized value given an array of bytes. Up to the first 4 bytes in the array will be used for the conversion.\n\x09 * @param bUseLSB\x09Least Significant Byte mode makes the individual bytes (channels) of the function be\n\x09 *\x09\x09\x09\x09\x09interpreted with the first bytes being the lowest part of the number.\n\x09 *\x09\x09\x09\x09\x09Most Fixtures use MSB (Most Significant Byte).\n\x09 */" },
		{ "CPP_Default_bUseLSB", "false" },
		{ "Keywords", "float" },
		{ "ModuleRelativePath", "Public/DMXSubsystem.h" },
		{ "ToolTip", "Return normalized value given an array of bytes. Up to the first 4 bytes in the array will be used for the conversion.\n@param bUseLSB       Least Significant Byte mode makes the individual bytes (channels) of the function be\n                                     interpreted with the first bytes being the lowest part of the number.\n                                     Most Fixtures use MSB (Most Significant Byte)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXSubsystem_BytesToNormalizedValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXSubsystem, nullptr, "BytesToNormalizedValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXSubsystem_BytesToNormalizedValue_Statics::DMXSubsystem_eventBytesToNormalizedValue_Parms), Z_Construct_UFunction_UDMXSubsystem_BytesToNormalizedValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_BytesToNormalizedValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_BytesToNormalizedValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_BytesToNormalizedValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXSubsystem_BytesToNormalizedValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXSubsystem_BytesToNormalizedValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXSubsystem_GetAllControllersInLibrary_Statics
	{
		struct DMXSubsystem_eventGetAllControllersInLibrary_Parms
		{
			const UDMXLibrary* DMXLibrary;
			TArray<UDMXEntityController*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DMXLibrary_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DMXLibrary;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_GetAllControllersInLibrary_Statics::NewProp_DMXLibrary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetAllControllersInLibrary_Statics::NewProp_DMXLibrary = { "DMXLibrary", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetAllControllersInLibrary_Parms, DMXLibrary), Z_Construct_UClass_UDMXLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_GetAllControllersInLibrary_Statics::NewProp_DMXLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetAllControllersInLibrary_Statics::NewProp_DMXLibrary_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetAllControllersInLibrary_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDMXEntityController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetAllControllersInLibrary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetAllControllersInLibrary_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXSubsystem_GetAllControllersInLibrary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetAllControllersInLibrary_Statics::NewProp_DMXLibrary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetAllControllersInLibrary_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetAllControllersInLibrary_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_GetAllControllersInLibrary_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/**  DEPRECATED 4.27 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Deprecated 4.27. Controllers are removed in favor of Ports." },
		{ "ModuleRelativePath", "Public/DMXSubsystem.h" },
		{ "ToolTip", "DEPRECATED 4.27" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXSubsystem_GetAllControllersInLibrary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXSubsystem, nullptr, "GetAllControllersInLibrary", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXSubsystem_GetAllControllersInLibrary_Statics::DMXSubsystem_eventGetAllControllersInLibrary_Parms), Z_Construct_UFunction_UDMXSubsystem_GetAllControllersInLibrary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetAllControllersInLibrary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_GetAllControllersInLibrary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetAllControllersInLibrary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXSubsystem_GetAllControllersInLibrary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXSubsystem_GetAllControllersInLibrary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXSubsystem_GetAllDMXLibraries_Statics
	{
		struct DMXSubsystem_eventGetAllDMXLibraries_Parms
		{
			TArray<UDMXLibrary*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetAllDMXLibraries_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDMXLibrary_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_GetAllDMXLibraries_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetAllDMXLibraries_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetAllDMXLibraries_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_GetAllDMXLibraries_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetAllDMXLibraries_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXSubsystem_GetAllDMXLibraries_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetAllDMXLibraries_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetAllDMXLibraries_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_GetAllDMXLibraries_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/**  Return reference to array of DMX Library objects. */" },
		{ "ModuleRelativePath", "Public/DMXSubsystem.h" },
		{ "ToolTip", "Return reference to array of DMX Library objects." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXSubsystem_GetAllDMXLibraries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXSubsystem, nullptr, "GetAllDMXLibraries", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXSubsystem_GetAllDMXLibraries_Statics::DMXSubsystem_eventGetAllDMXLibraries_Parms), Z_Construct_UFunction_UDMXSubsystem_GetAllDMXLibraries_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetAllDMXLibraries_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_GetAllDMXLibraries_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetAllDMXLibraries_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXSubsystem_GetAllDMXLibraries()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXSubsystem_GetAllDMXLibraries_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesInLibrary_Statics
	{
		struct DMXSubsystem_eventGetAllFixturesInLibrary_Parms
		{
			const UDMXLibrary* DMXLibrary;
			TArray<UDMXEntityFixturePatch*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DMXLibrary_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DMXLibrary;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesInLibrary_Statics::NewProp_DMXLibrary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesInLibrary_Statics::NewProp_DMXLibrary = { "DMXLibrary", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetAllFixturesInLibrary_Parms, DMXLibrary), Z_Construct_UClass_UDMXLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesInLibrary_Statics::NewProp_DMXLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesInLibrary_Statics::NewProp_DMXLibrary_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesInLibrary_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesInLibrary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetAllFixturesInLibrary_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesInLibrary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesInLibrary_Statics::NewProp_DMXLibrary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesInLibrary_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesInLibrary_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesInLibrary_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/**  Return reference to array of Fixture Patch objects in library. */" },
		{ "ModuleRelativePath", "Public/DMXSubsystem.h" },
		{ "ToolTip", "Return reference to array of Fixture Patch objects in library." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesInLibrary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXSubsystem, nullptr, "GetAllFixturesInLibrary", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesInLibrary_Statics::DMXSubsystem_eventGetAllFixturesInLibrary_Parms), Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesInLibrary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesInLibrary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesInLibrary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesInLibrary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesInLibrary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesInLibrary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesInUniverse_Statics
	{
		struct DMXSubsystem_eventGetAllFixturesInUniverse_Parms
		{
			const UDMXLibrary* DMXLibrary;
			int32 UniverseId;
			TArray<UDMXEntityFixturePatch*> OutResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DMXLibrary_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DMXLibrary;
		static const UECodeGen_Private::FIntPropertyParams NewProp_UniverseId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutResult_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesInUniverse_Statics::NewProp_DMXLibrary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesInUniverse_Statics::NewProp_DMXLibrary = { "DMXLibrary", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetAllFixturesInUniverse_Parms, DMXLibrary), Z_Construct_UClass_UDMXLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesInUniverse_Statics::NewProp_DMXLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesInUniverse_Statics::NewProp_DMXLibrary_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesInUniverse_Statics::NewProp_UniverseId = { "UniverseId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetAllFixturesInUniverse_Parms, UniverseId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesInUniverse_Statics::NewProp_OutResult_Inner = { "OutResult", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesInUniverse_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetAllFixturesInUniverse_Parms, OutResult), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesInUniverse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesInUniverse_Statics::NewProp_DMXLibrary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesInUniverse_Statics::NewProp_UniverseId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesInUniverse_Statics::NewProp_OutResult_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesInUniverse_Statics::NewProp_OutResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesInUniverse_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/**  Return reference to array of Fixture Patch objects in a given universe. */" },
		{ "ModuleRelativePath", "Public/DMXSubsystem.h" },
		{ "ToolTip", "Return reference to array of Fixture Patch objects in a given universe." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesInUniverse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXSubsystem, nullptr, "GetAllFixturesInUniverse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesInUniverse_Statics::DMXSubsystem_eventGetAllFixturesInUniverse_Parms), Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesInUniverse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesInUniverse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesInUniverse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesInUniverse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesInUniverse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesInUniverse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesOfCategory_Statics
	{
		struct DMXSubsystem_eventGetAllFixturesOfCategory_Parms
		{
			const UDMXLibrary* DMXLibrary;
			FDMXFixtureCategory Category;
			TArray<UDMXEntityFixturePatch*> OutResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DMXLibrary_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DMXLibrary;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Category;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutResult_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesOfCategory_Statics::NewProp_DMXLibrary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesOfCategory_Statics::NewProp_DMXLibrary = { "DMXLibrary", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetAllFixturesOfCategory_Parms, DMXLibrary), Z_Construct_UClass_UDMXLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesOfCategory_Statics::NewProp_DMXLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesOfCategory_Statics::NewProp_DMXLibrary_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesOfCategory_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetAllFixturesOfCategory_Parms, Category), Z_Construct_UScriptStruct_FDMXFixtureCategory, METADATA_PARAMS(nullptr, 0) }; // 2459608541
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesOfCategory_Statics::NewProp_OutResult_Inner = { "OutResult", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesOfCategory_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetAllFixturesOfCategory_Parms, OutResult), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesOfCategory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesOfCategory_Statics::NewProp_DMXLibrary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesOfCategory_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesOfCategory_Statics::NewProp_OutResult_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesOfCategory_Statics::NewProp_OutResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesOfCategory_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/**  Return reference to array of Fixture Patch objects of a given category. */" },
		{ "ModuleRelativePath", "Public/DMXSubsystem.h" },
		{ "ToolTip", "Return reference to array of Fixture Patch objects of a given category." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesOfCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXSubsystem, nullptr, "GetAllFixturesOfCategory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesOfCategory_Statics::DMXSubsystem_eventGetAllFixturesOfCategory_Parms), Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesOfCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesOfCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesOfCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesOfCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesOfCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesOfCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesOfType_Statics
	{
		struct DMXSubsystem_eventGetAllFixturesOfType_Parms
		{
			FDMXEntityFixtureTypeRef FixtureType;
			TArray<UDMXEntityFixturePatch*> OutResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixtureType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FixtureType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutResult_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesOfType_Statics::NewProp_FixtureType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesOfType_Statics::NewProp_FixtureType = { "FixtureType", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetAllFixturesOfType_Parms, FixtureType), Z_Construct_UScriptStruct_FDMXEntityFixtureTypeRef, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesOfType_Statics::NewProp_FixtureType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesOfType_Statics::NewProp_FixtureType_MetaData)) }; // 3909030762
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesOfType_Statics::NewProp_OutResult_Inner = { "OutResult", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesOfType_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetAllFixturesOfType_Parms, OutResult), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesOfType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesOfType_Statics::NewProp_FixtureType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesOfType_Statics::NewProp_OutResult_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesOfType_Statics::NewProp_OutResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesOfType_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "FixtureType" },
		{ "Category", "DMX" },
		{ "Comment", "/**  Return reference to array of Fixture Patch objects of a given type. */" },
		{ "ModuleRelativePath", "Public/DMXSubsystem.h" },
		{ "ToolTip", "Return reference to array of Fixture Patch objects of a given type." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXSubsystem, nullptr, "GetAllFixturesOfType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesOfType_Statics::DMXSubsystem_eventGetAllFixturesOfType_Parms), Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesOfType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesOfType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesOfType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesOfType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesOfType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesWithTag_Statics
	{
		struct DMXSubsystem_eventGetAllFixturesWithTag_Parms
		{
			const UDMXLibrary* DMXLibrary;
			FName CustomTag;
			TArray<UDMXEntityFixturePatch*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DMXLibrary_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DMXLibrary;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CustomTag;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesWithTag_Statics::NewProp_DMXLibrary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesWithTag_Statics::NewProp_DMXLibrary = { "DMXLibrary", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetAllFixturesWithTag_Parms, DMXLibrary), Z_Construct_UClass_UDMXLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesWithTag_Statics::NewProp_DMXLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesWithTag_Statics::NewProp_DMXLibrary_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesWithTag_Statics::NewProp_CustomTag = { "CustomTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetAllFixturesWithTag_Parms, CustomTag), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesWithTag_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesWithTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetAllFixturesWithTag_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesWithTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesWithTag_Statics::NewProp_DMXLibrary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesWithTag_Statics::NewProp_CustomTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesWithTag_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesWithTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesWithTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/**  Return reference to array of Fixture Patch objects with a given tag. */" },
		{ "ModuleRelativePath", "Public/DMXSubsystem.h" },
		{ "ToolTip", "Return reference to array of Fixture Patch objects with a given tag." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesWithTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXSubsystem, nullptr, "GetAllFixturesWithTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesWithTag_Statics::DMXSubsystem_eventGetAllFixturesWithTag_Parms), Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesWithTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesWithTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesWithTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesWithTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesWithTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesWithTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXSubsystem_GetAllFixtureTypesInLibrary_Statics
	{
		struct DMXSubsystem_eventGetAllFixtureTypesInLibrary_Parms
		{
			const UDMXLibrary* DMXLibrary;
			TArray<UDMXEntityFixtureType*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DMXLibrary_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DMXLibrary;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_GetAllFixtureTypesInLibrary_Statics::NewProp_DMXLibrary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetAllFixtureTypesInLibrary_Statics::NewProp_DMXLibrary = { "DMXLibrary", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetAllFixtureTypesInLibrary_Parms, DMXLibrary), Z_Construct_UClass_UDMXLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_GetAllFixtureTypesInLibrary_Statics::NewProp_DMXLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetAllFixtureTypesInLibrary_Statics::NewProp_DMXLibrary_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetAllFixtureTypesInLibrary_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDMXEntityFixtureType_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetAllFixtureTypesInLibrary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetAllFixtureTypesInLibrary_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXSubsystem_GetAllFixtureTypesInLibrary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetAllFixtureTypesInLibrary_Statics::NewProp_DMXLibrary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetAllFixtureTypesInLibrary_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetAllFixtureTypesInLibrary_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_GetAllFixtureTypesInLibrary_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/**  Return reference to array of Fixture Types objects in library. */" },
		{ "ModuleRelativePath", "Public/DMXSubsystem.h" },
		{ "ToolTip", "Return reference to array of Fixture Types objects in library." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXSubsystem_GetAllFixtureTypesInLibrary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXSubsystem, nullptr, "GetAllFixtureTypesInLibrary", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXSubsystem_GetAllFixtureTypesInLibrary_Statics::DMXSubsystem_eventGetAllFixtureTypesInLibrary_Parms), Z_Construct_UFunction_UDMXSubsystem_GetAllFixtureTypesInLibrary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetAllFixtureTypesInLibrary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_GetAllFixtureTypesInLibrary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetAllFixtureTypesInLibrary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXSubsystem_GetAllFixtureTypesInLibrary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXSubsystem_GetAllFixtureTypesInLibrary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXSubsystem_GetAllMatrixCells_Statics
	{
		struct DMXSubsystem_eventGetAllMatrixCells_Parms
		{
			UDMXEntityFixturePatch* FixturePatch;
			TArray<FDMXCell> Cells;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FixturePatch;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Cells_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Cells;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetAllMatrixCells_Statics::NewProp_FixturePatch = { "FixturePatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetAllMatrixCells_Parms, FixturePatch), Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetAllMatrixCells_Statics::NewProp_Cells_Inner = { "Cells", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXCell, METADATA_PARAMS(nullptr, 0) }; // 2201996212
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetAllMatrixCells_Statics::NewProp_Cells = { "Cells", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetAllMatrixCells_Parms, Cells), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2201996212
	void Z_Construct_UFunction_UDMXSubsystem_GetAllMatrixCells_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DMXSubsystem_eventGetAllMatrixCells_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetAllMatrixCells_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DMXSubsystem_eventGetAllMatrixCells_Parms), &Z_Construct_UFunction_UDMXSubsystem_GetAllMatrixCells_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXSubsystem_GetAllMatrixCells_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetAllMatrixCells_Statics::NewProp_FixturePatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetAllMatrixCells_Statics::NewProp_Cells_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetAllMatrixCells_Statics::NewProp_Cells,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetAllMatrixCells_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_GetAllMatrixCells_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Deprecated 4.26. DMXEntityFixurePatch::GetAllMatrixCells instead" },
		{ "ModuleRelativePath", "Public/DMXSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXSubsystem_GetAllMatrixCells_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXSubsystem, nullptr, "GetAllMatrixCells", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXSubsystem_GetAllMatrixCells_Statics::DMXSubsystem_eventGetAllMatrixCells_Parms), Z_Construct_UFunction_UDMXSubsystem_GetAllMatrixCells_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetAllMatrixCells_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_GetAllMatrixCells_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetAllMatrixCells_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXSubsystem_GetAllMatrixCells()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXSubsystem_GetAllMatrixCells_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXSubsystem_GetAllUniversesInController_Statics
	{
		struct DMXSubsystem_eventGetAllUniversesInController_Parms
		{
			const UDMXLibrary* DMXLibrary;
			FString ControllerName;
			TArray<int32> OutResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DMXLibrary_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DMXLibrary;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ControllerName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutResult_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_GetAllUniversesInController_Statics::NewProp_DMXLibrary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetAllUniversesInController_Statics::NewProp_DMXLibrary = { "DMXLibrary", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetAllUniversesInController_Parms, DMXLibrary), Z_Construct_UClass_UDMXLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_GetAllUniversesInController_Statics::NewProp_DMXLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetAllUniversesInController_Statics::NewProp_DMXLibrary_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetAllUniversesInController_Statics::NewProp_ControllerName = { "ControllerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetAllUniversesInController_Parms, ControllerName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetAllUniversesInController_Statics::NewProp_OutResult_Inner = { "OutResult", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetAllUniversesInController_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetAllUniversesInController_Parms, OutResult), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXSubsystem_GetAllUniversesInController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetAllUniversesInController_Statics::NewProp_DMXLibrary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetAllUniversesInController_Statics::NewProp_ControllerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetAllUniversesInController_Statics::NewProp_OutResult_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetAllUniversesInController_Statics::NewProp_OutResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_GetAllUniversesInController_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/**  DEPRECATED 4.27 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Deprecated 4.27. Controllers are removed in favor of Ports." },
		{ "ModuleRelativePath", "Public/DMXSubsystem.h" },
		{ "ToolTip", "DEPRECATED 4.27" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXSubsystem_GetAllUniversesInController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXSubsystem, nullptr, "GetAllUniversesInController", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXSubsystem_GetAllUniversesInController_Statics::DMXSubsystem_eventGetAllUniversesInController_Parms), Z_Construct_UFunction_UDMXSubsystem_GetAllUniversesInController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetAllUniversesInController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_GetAllUniversesInController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetAllUniversesInController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXSubsystem_GetAllUniversesInController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXSubsystem_GetAllUniversesInController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXSubsystem_GetAttributeLabel_Statics
	{
		struct DMXSubsystem_eventGetAttributeLabel_Parms
		{
			FDMXAttributeName AttributeName;
			FName ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetAttributeLabel_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetAttributeLabel_Parms, AttributeName), Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDMXSubsystem_GetAttributeLabel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetAttributeLabel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXSubsystem_GetAttributeLabel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetAttributeLabel_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetAttributeLabel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_GetAttributeLabel_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/**\n\x09 * Gets the FName for a FDMXAttributeName, since structs can't have UFUCNTIONS to create a getter\n\x09 * @param\x09""AttributeName the struct we want to grab the name from\n\x09 * @return\x09""FName the name of the AttributeName\n\x09 */" },
		{ "ModuleRelativePath", "Public/DMXSubsystem.h" },
		{ "ToolTip", "Gets the FName for a FDMXAttributeName, since structs can't have UFUCNTIONS to create a getter\n@param       AttributeName the struct we want to grab the name from\n@return      FName the name of the AttributeName" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXSubsystem_GetAttributeLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXSubsystem, nullptr, "GetAttributeLabel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXSubsystem_GetAttributeLabel_Statics::DMXSubsystem_eventGetAttributeLabel_Parms), Z_Construct_UFunction_UDMXSubsystem_GetAttributeLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetAttributeLabel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_GetAttributeLabel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetAttributeLabel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXSubsystem_GetAttributeLabel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXSubsystem_GetAttributeLabel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXSubsystem_GetCellAttributes_Statics
	{
		struct DMXSubsystem_eventGetCellAttributes_Parms
		{
			UDMXEntityFixturePatch* FixturePatch;
			TArray<FDMXAttributeName> CellAttributes;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FixturePatch;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CellAttributes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CellAttributes;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetCellAttributes_Statics::NewProp_FixturePatch = { "FixturePatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetCellAttributes_Parms, FixturePatch), Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetCellAttributes_Statics::NewProp_CellAttributes_Inner = { "CellAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetCellAttributes_Statics::NewProp_CellAttributes = { "CellAttributes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetCellAttributes_Parms, CellAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	void Z_Construct_UFunction_UDMXSubsystem_GetCellAttributes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DMXSubsystem_eventGetCellAttributes_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetCellAttributes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DMXSubsystem_eventGetCellAttributes_Parms), &Z_Construct_UFunction_UDMXSubsystem_GetCellAttributes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXSubsystem_GetCellAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetCellAttributes_Statics::NewProp_FixturePatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetCellAttributes_Statics::NewProp_CellAttributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetCellAttributes_Statics::NewProp_CellAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetCellAttributes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_GetCellAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Deprecated 4.26. DMXEntityFixurePatch::GetCellAttributes instead" },
		{ "ModuleRelativePath", "Public/DMXSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXSubsystem_GetCellAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXSubsystem, nullptr, "GetCellAttributes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXSubsystem_GetCellAttributes_Statics::DMXSubsystem_eventGetCellAttributes_Parms), Z_Construct_UFunction_UDMXSubsystem_GetCellAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetCellAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_GetCellAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetCellAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXSubsystem_GetCellAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXSubsystem_GetCellAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXSubsystem_GetControllerByName_Statics
	{
		struct DMXSubsystem_eventGetControllerByName_Parms
		{
			const UDMXLibrary* DMXLibrary;
			FString Name;
			UDMXEntityController* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DMXLibrary_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DMXLibrary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_GetControllerByName_Statics::NewProp_DMXLibrary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetControllerByName_Statics::NewProp_DMXLibrary = { "DMXLibrary", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetControllerByName_Parms, DMXLibrary), Z_Construct_UClass_UDMXLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_GetControllerByName_Statics::NewProp_DMXLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetControllerByName_Statics::NewProp_DMXLibrary_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_GetControllerByName_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetControllerByName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetControllerByName_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_GetControllerByName_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetControllerByName_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetControllerByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetControllerByName_Parms, ReturnValue), Z_Construct_UClass_UDMXEntityController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXSubsystem_GetControllerByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetControllerByName_Statics::NewProp_DMXLibrary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetControllerByName_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetControllerByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_GetControllerByName_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Name" },
		{ "Category", "DMX" },
		{ "Comment", "/**  DEPRECATED 4.27 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Deprecated 4.27. Controllers are removed in favor of Ports." },
		{ "ModuleRelativePath", "Public/DMXSubsystem.h" },
		{ "ToolTip", "DEPRECATED 4.27" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXSubsystem_GetControllerByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXSubsystem, nullptr, "GetControllerByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXSubsystem_GetControllerByName_Statics::DMXSubsystem_eventGetControllerByName_Parms), Z_Construct_UFunction_UDMXSubsystem_GetControllerByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetControllerByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_GetControllerByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetControllerByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXSubsystem_GetControllerByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXSubsystem_GetControllerByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXSubsystem_GetDMXDataFromInputPort_Statics
	{
		struct DMXSubsystem_eventGetDMXDataFromInputPort_Parms
		{
			FDMXInputPortReference InputPortReference;
			TArray<uint8> DMXData;
			int32 LocalUniverse;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputPortReference;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DMXData_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DMXData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUniverse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetDMXDataFromInputPort_Statics::NewProp_InputPortReference = { "InputPortReference", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetDMXDataFromInputPort_Parms, InputPortReference), Z_Construct_UScriptStruct_FDMXInputPortReference, METADATA_PARAMS(nullptr, 0) }; // 3197363453
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDMXSubsystem_GetDMXDataFromInputPort_Statics::NewProp_DMXData_Inner = { "DMXData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetDMXDataFromInputPort_Statics::NewProp_DMXData = { "DMXData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetDMXDataFromInputPort_Parms, DMXData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetDMXDataFromInputPort_Statics::NewProp_LocalUniverse = { "LocalUniverse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetDMXDataFromInputPort_Parms, LocalUniverse), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXSubsystem_GetDMXDataFromInputPort_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetDMXDataFromInputPort_Statics::NewProp_InputPortReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetDMXDataFromInputPort_Statics::NewProp_DMXData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetDMXDataFromInputPort_Statics::NewProp_DMXData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetDMXDataFromInputPort_Statics::NewProp_LocalUniverse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_GetDMXDataFromInputPort_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/**  Gets accumulated latest DMX Values from the Input Port (all that's been received since Begin Play) */" },
		{ "CPP_Default_LocalUniverse", "1" },
		{ "ModuleRelativePath", "Public/DMXSubsystem.h" },
		{ "ToolTip", "Gets accumulated latest DMX Values from the Input Port (all that's been received since Begin Play)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXSubsystem_GetDMXDataFromInputPort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXSubsystem, nullptr, "GetDMXDataFromInputPort", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXSubsystem_GetDMXDataFromInputPort_Statics::DMXSubsystem_eventGetDMXDataFromInputPort_Parms), Z_Construct_UFunction_UDMXSubsystem_GetDMXDataFromInputPort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetDMXDataFromInputPort_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_GetDMXDataFromInputPort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetDMXDataFromInputPort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXSubsystem_GetDMXDataFromInputPort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXSubsystem_GetDMXDataFromInputPort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXSubsystem_GetDMXDataFromOutputPort_Statics
	{
		struct DMXSubsystem_eventGetDMXDataFromOutputPort_Parms
		{
			FDMXOutputPortReference OutputPortReference;
			TArray<uint8> DMXData;
			int32 LocalUniverse;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputPortReference;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DMXData_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DMXData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUniverse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetDMXDataFromOutputPort_Statics::NewProp_OutputPortReference = { "OutputPortReference", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetDMXDataFromOutputPort_Parms, OutputPortReference), Z_Construct_UScriptStruct_FDMXOutputPortReference, METADATA_PARAMS(nullptr, 0) }; // 3396692900
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDMXSubsystem_GetDMXDataFromOutputPort_Statics::NewProp_DMXData_Inner = { "DMXData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetDMXDataFromOutputPort_Statics::NewProp_DMXData = { "DMXData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetDMXDataFromOutputPort_Parms, DMXData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetDMXDataFromOutputPort_Statics::NewProp_LocalUniverse = { "LocalUniverse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetDMXDataFromOutputPort_Parms, LocalUniverse), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXSubsystem_GetDMXDataFromOutputPort_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetDMXDataFromOutputPort_Statics::NewProp_OutputPortReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetDMXDataFromOutputPort_Statics::NewProp_DMXData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetDMXDataFromOutputPort_Statics::NewProp_DMXData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetDMXDataFromOutputPort_Statics::NewProp_LocalUniverse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_GetDMXDataFromOutputPort_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/**  Gets accumulated latest DMX Values from the Output Port  (all that's been sent since Begin Play)*/" },
		{ "CPP_Default_LocalUniverse", "1" },
		{ "ModuleRelativePath", "Public/DMXSubsystem.h" },
		{ "ToolTip", "Gets accumulated latest DMX Values from the Output Port  (all that's been sent since Begin Play)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXSubsystem_GetDMXDataFromOutputPort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXSubsystem, nullptr, "GetDMXDataFromOutputPort", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXSubsystem_GetDMXDataFromOutputPort_Statics::DMXSubsystem_eventGetDMXDataFromOutputPort_Parms), Z_Construct_UFunction_UDMXSubsystem_GetDMXDataFromOutputPort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetDMXDataFromOutputPort_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_GetDMXDataFromOutputPort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetDMXDataFromOutputPort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXSubsystem_GetDMXDataFromOutputPort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXSubsystem_GetDMXDataFromOutputPort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXSubsystem_GetDMXSubsystem_Callable_Statics
	{
		struct DMXSubsystem_eventGetDMXSubsystem_Callable_Parms
		{
			UDMXSubsystem* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetDMXSubsystem_Callable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetDMXSubsystem_Callable_Parms, ReturnValue), Z_Construct_UClass_UDMXSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXSubsystem_GetDMXSubsystem_Callable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetDMXSubsystem_Callable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_GetDMXSubsystem_Callable_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "DMX Subsystem" },
		{ "Comment", "/** Get a DMX Subsystem, callable version */" },
		{ "ModuleRelativePath", "Public/DMXSubsystem.h" },
		{ "ToolTip", "Get a DMX Subsystem, callable version" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXSubsystem_GetDMXSubsystem_Callable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXSubsystem, nullptr, "GetDMXSubsystem_Callable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXSubsystem_GetDMXSubsystem_Callable_Statics::DMXSubsystem_eventGetDMXSubsystem_Callable_Parms), Z_Construct_UFunction_UDMXSubsystem_GetDMXSubsystem_Callable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetDMXSubsystem_Callable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_GetDMXSubsystem_Callable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetDMXSubsystem_Callable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXSubsystem_GetDMXSubsystem_Callable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXSubsystem_GetDMXSubsystem_Callable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXSubsystem_GetDMXSubsystem_Pure_Statics
	{
		struct DMXSubsystem_eventGetDMXSubsystem_Pure_Parms
		{
			UDMXSubsystem* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetDMXSubsystem_Pure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetDMXSubsystem_Pure_Parms, ReturnValue), Z_Construct_UClass_UDMXSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXSubsystem_GetDMXSubsystem_Pure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetDMXSubsystem_Pure_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_GetDMXSubsystem_Pure_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "DMX Subsystem" },
		{ "Comment", "/** Get a DMX Subsystem, pure version */" },
		{ "ModuleRelativePath", "Public/DMXSubsystem.h" },
		{ "ToolTip", "Get a DMX Subsystem, pure version" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXSubsystem_GetDMXSubsystem_Pure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXSubsystem, nullptr, "GetDMXSubsystem_Pure", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXSubsystem_GetDMXSubsystem_Pure_Statics::DMXSubsystem_eventGetDMXSubsystem_Pure_Parms), Z_Construct_UFunction_UDMXSubsystem_GetDMXSubsystem_Pure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetDMXSubsystem_Pure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_GetDMXSubsystem_Pure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetDMXSubsystem_Pure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXSubsystem_GetDMXSubsystem_Pure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXSubsystem_GetDMXSubsystem_Pure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXSubsystem_GetFixtureAttributes_Statics
	{
		struct DMXSubsystem_eventGetFixtureAttributes_Parms
		{
			const UDMXEntityFixturePatch* InFixturePatch;
			TArray<uint8> DMXBuffer;
			TMap<FDMXAttributeName,int32> OutResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFixturePatch_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InFixturePatch;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DMXBuffer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DMXBuffer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DMXBuffer;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutResult_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutResult_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_OutResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_GetFixtureAttributes_Statics::NewProp_InFixturePatch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetFixtureAttributes_Statics::NewProp_InFixturePatch = { "InFixturePatch", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetFixtureAttributes_Parms, InFixturePatch), Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_GetFixtureAttributes_Statics::NewProp_InFixturePatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetFixtureAttributes_Statics::NewProp_InFixturePatch_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDMXSubsystem_GetFixtureAttributes_Statics::NewProp_DMXBuffer_Inner = { "DMXBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_GetFixtureAttributes_Statics::NewProp_DMXBuffer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetFixtureAttributes_Statics::NewProp_DMXBuffer = { "DMXBuffer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetFixtureAttributes_Parms, DMXBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_GetFixtureAttributes_Statics::NewProp_DMXBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetFixtureAttributes_Statics::NewProp_DMXBuffer_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetFixtureAttributes_Statics::NewProp_OutResult_ValueProp = { "OutResult", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetFixtureAttributes_Statics::NewProp_OutResult_Key_KeyProp = { "OutResult_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetFixtureAttributes_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetFixtureAttributes_Parms, OutResult), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXSubsystem_GetFixtureAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetFixtureAttributes_Statics::NewProp_InFixturePatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetFixtureAttributes_Statics::NewProp_DMXBuffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetFixtureAttributes_Statics::NewProp_DMXBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetFixtureAttributes_Statics::NewProp_OutResult_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetFixtureAttributes_Statics::NewProp_OutResult_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetFixtureAttributes_Statics::NewProp_OutResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_GetFixtureAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/**  Return map with all DMX functions and their associated values given DMX buffer and desired universe. */" },
		{ "DisplayName", "Get Fixture Attributes" },
		{ "ModuleRelativePath", "Public/DMXSubsystem.h" },
		{ "ToolTip", "Return map with all DMX functions and their associated values given DMX buffer and desired universe." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXSubsystem_GetFixtureAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXSubsystem, nullptr, "GetFixtureAttributes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXSubsystem_GetFixtureAttributes_Statics::DMXSubsystem_eventGetFixtureAttributes_Parms), Z_Construct_UFunction_UDMXSubsystem_GetFixtureAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetFixtureAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_GetFixtureAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetFixtureAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXSubsystem_GetFixtureAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXSubsystem_GetFixtureAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXSubsystem_GetFixtureByName_Statics
	{
		struct DMXSubsystem_eventGetFixtureByName_Parms
		{
			const UDMXLibrary* DMXLibrary;
			FString Name;
			UDMXEntityFixturePatch* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DMXLibrary_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DMXLibrary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_GetFixtureByName_Statics::NewProp_DMXLibrary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetFixtureByName_Statics::NewProp_DMXLibrary = { "DMXLibrary", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetFixtureByName_Parms, DMXLibrary), Z_Construct_UClass_UDMXLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_GetFixtureByName_Statics::NewProp_DMXLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetFixtureByName_Statics::NewProp_DMXLibrary_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_GetFixtureByName_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetFixtureByName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetFixtureByName_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_GetFixtureByName_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetFixtureByName_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetFixtureByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetFixtureByName_Parms, ReturnValue), Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXSubsystem_GetFixtureByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetFixtureByName_Statics::NewProp_DMXLibrary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetFixtureByName_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetFixtureByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_GetFixtureByName_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Name" },
		{ "Category", "DMX" },
		{ "Comment", "/**  Return reference to Fixture Patch object with a given name. */" },
		{ "ModuleRelativePath", "Public/DMXSubsystem.h" },
		{ "ToolTip", "Return reference to Fixture Patch object with a given name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXSubsystem_GetFixtureByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXSubsystem, nullptr, "GetFixtureByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXSubsystem_GetFixtureByName_Statics::DMXSubsystem_eventGetFixtureByName_Parms), Z_Construct_UFunction_UDMXSubsystem_GetFixtureByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetFixtureByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_GetFixtureByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetFixtureByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXSubsystem_GetFixtureByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXSubsystem_GetFixtureByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXSubsystem_GetFixturePatch_Statics
	{
		struct DMXSubsystem_eventGetFixturePatch_Parms
		{
			FDMXEntityFixturePatchRef InFixturePatch;
			UDMXEntityFixturePatch* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InFixturePatch;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetFixturePatch_Statics::NewProp_InFixturePatch = { "InFixturePatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetFixturePatch_Parms, InFixturePatch), Z_Construct_UScriptStruct_FDMXEntityFixturePatchRef, METADATA_PARAMS(nullptr, 0) }; // 1707509301
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetFixturePatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetFixturePatch_Parms, ReturnValue), Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXSubsystem_GetFixturePatch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetFixturePatch_Statics::NewProp_InFixturePatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetFixturePatch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_GetFixturePatch_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "DMX" },
		{ "Comment", "/**\n\x09 * Creates a literal UDMXEntityFixturePatch reference\n\x09 * @param\x09InFixturePatch\x09pointer to set the UDMXEntityFixturePatch to\n\x09 * @return\x09The literal UDMXEntityFixturePatch\n\x09 */" },
		{ "ModuleRelativePath", "Public/DMXSubsystem.h" },
		{ "ToolTip", "Creates a literal UDMXEntityFixturePatch reference\n@param       InFixturePatch  pointer to set the UDMXEntityFixturePatch to\n@return      The literal UDMXEntityFixturePatch" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXSubsystem_GetFixturePatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXSubsystem, nullptr, "GetFixturePatch", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXSubsystem_GetFixturePatch_Statics::DMXSubsystem_eventGetFixturePatch_Parms), Z_Construct_UFunction_UDMXSubsystem_GetFixturePatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetFixturePatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_GetFixturePatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetFixturePatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXSubsystem_GetFixturePatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXSubsystem_GetFixturePatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXSubsystem_GetFixtureType_Statics
	{
		struct DMXSubsystem_eventGetFixtureType_Parms
		{
			FDMXEntityFixtureTypeRef InFixtureType;
			UDMXEntityFixtureType* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InFixtureType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetFixtureType_Statics::NewProp_InFixtureType = { "InFixtureType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetFixtureType_Parms, InFixtureType), Z_Construct_UScriptStruct_FDMXEntityFixtureTypeRef, METADATA_PARAMS(nullptr, 0) }; // 3909030762
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetFixtureType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetFixtureType_Parms, ReturnValue), Z_Construct_UClass_UDMXEntityFixtureType_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXSubsystem_GetFixtureType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetFixtureType_Statics::NewProp_InFixtureType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetFixtureType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_GetFixtureType_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "DMX" },
		{ "Comment", "/**\n\x09 * Creates a literal UDMXEntityFixturePatch reference\n\x09 * @param\x09InFixturePatch\x09pointer to set the UDMXEntityFixturePatch to\n\x09 * @return\x09The literal UDMXEntityFixturePatch\n\x09 */" },
		{ "ModuleRelativePath", "Public/DMXSubsystem.h" },
		{ "ToolTip", "Creates a literal UDMXEntityFixturePatch reference\n@param       InFixturePatch  pointer to set the UDMXEntityFixturePatch to\n@return      The literal UDMXEntityFixturePatch" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXSubsystem_GetFixtureType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXSubsystem, nullptr, "GetFixtureType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXSubsystem_GetFixtureType_Statics::DMXSubsystem_eventGetFixtureType_Parms), Z_Construct_UFunction_UDMXSubsystem_GetFixtureType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetFixtureType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_GetFixtureType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetFixtureType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXSubsystem_GetFixtureType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXSubsystem_GetFixtureType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXSubsystem_GetFixtureTypeByName_Statics
	{
		struct DMXSubsystem_eventGetFixtureTypeByName_Parms
		{
			const UDMXLibrary* DMXLibrary;
			FString Name;
			UDMXEntityFixtureType* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DMXLibrary_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DMXLibrary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_GetFixtureTypeByName_Statics::NewProp_DMXLibrary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetFixtureTypeByName_Statics::NewProp_DMXLibrary = { "DMXLibrary", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetFixtureTypeByName_Parms, DMXLibrary), Z_Construct_UClass_UDMXLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_GetFixtureTypeByName_Statics::NewProp_DMXLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetFixtureTypeByName_Statics::NewProp_DMXLibrary_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_GetFixtureTypeByName_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetFixtureTypeByName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetFixtureTypeByName_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_GetFixtureTypeByName_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetFixtureTypeByName_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetFixtureTypeByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetFixtureTypeByName_Parms, ReturnValue), Z_Construct_UClass_UDMXEntityFixtureType_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXSubsystem_GetFixtureTypeByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetFixtureTypeByName_Statics::NewProp_DMXLibrary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetFixtureTypeByName_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetFixtureTypeByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_GetFixtureTypeByName_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Name" },
		{ "Category", "DMX" },
		{ "Comment", "/**  Return reference to Fixture Type object with a given name. */" },
		{ "ModuleRelativePath", "Public/DMXSubsystem.h" },
		{ "ToolTip", "Return reference to Fixture Type object with a given name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXSubsystem_GetFixtureTypeByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXSubsystem, nullptr, "GetFixtureTypeByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXSubsystem_GetFixtureTypeByName_Statics::DMXSubsystem_eventGetFixtureTypeByName_Parms), Z_Construct_UFunction_UDMXSubsystem_GetFixtureTypeByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetFixtureTypeByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_GetFixtureTypeByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetFixtureTypeByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXSubsystem_GetFixtureTypeByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXSubsystem_GetFixtureTypeByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXSubsystem_GetFunctionsMap_Statics
	{
		struct DMXSubsystem_eventGetFunctionsMap_Parms
		{
			UDMXEntityFixturePatch* InFixturePatch;
			TMap<FDMXAttributeName,int32> OutAttributesMap;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InFixturePatch;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutAttributesMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutAttributesMap_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_OutAttributesMap;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetFunctionsMap_Statics::NewProp_InFixturePatch = { "InFixturePatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetFunctionsMap_Parms, InFixturePatch), Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetFunctionsMap_Statics::NewProp_OutAttributesMap_ValueProp = { "OutAttributesMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetFunctionsMap_Statics::NewProp_OutAttributesMap_Key_KeyProp = { "OutAttributesMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetFunctionsMap_Statics::NewProp_OutAttributesMap = { "OutAttributesMap", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetFunctionsMap_Parms, OutAttributesMap), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	void Z_Construct_UFunction_UDMXSubsystem_GetFunctionsMap_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DMXSubsystem_eventGetFunctionsMap_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetFunctionsMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DMXSubsystem_eventGetFunctionsMap_Parms), &Z_Construct_UFunction_UDMXSubsystem_GetFunctionsMap_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXSubsystem_GetFunctionsMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetFunctionsMap_Statics::NewProp_InFixturePatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetFunctionsMap_Statics::NewProp_OutAttributesMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetFunctionsMap_Statics::NewProp_OutAttributesMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetFunctionsMap_Statics::NewProp_OutAttributesMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetFunctionsMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_GetFunctionsMap_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "SelectedProtocol" },
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "DMX" },
		{ "Comment", "/**\n\x09 * Gets a function map based on you active mode from FixturePatch\n\x09 * @param\x09InFixturePatch Selected Patch\n\x09 * @param\x09OutAttributesMap Function and Channel value output map\n\x09 * @return\x09True if outputting was successfully\n\x09 */" },
		{ "ModuleRelativePath", "Public/DMXSubsystem.h" },
		{ "ToolTip", "Gets a function map based on you active mode from FixturePatch\n@param       InFixturePatch Selected Patch\n@param       OutAttributesMap Function and Channel value output map\n@return      True if outputting was successfully" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXSubsystem_GetFunctionsMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXSubsystem, nullptr, "GetFunctionsMap", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXSubsystem_GetFunctionsMap_Statics::DMXSubsystem_eventGetFunctionsMap_Parms), Z_Construct_UFunction_UDMXSubsystem_GetFunctionsMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetFunctionsMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_GetFunctionsMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetFunctionsMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXSubsystem_GetFunctionsMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXSubsystem_GetFunctionsMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXSubsystem_GetFunctionsMapForPatch_Statics
	{
		struct DMXSubsystem_eventGetFunctionsMapForPatch_Parms
		{
			UDMXEntityFixturePatch* InFixturePatch;
			TMap<FDMXAttributeName,int32> OutAttributesMap;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InFixturePatch;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutAttributesMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutAttributesMap_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_OutAttributesMap;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetFunctionsMapForPatch_Statics::NewProp_InFixturePatch = { "InFixturePatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetFunctionsMapForPatch_Parms, InFixturePatch), Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetFunctionsMapForPatch_Statics::NewProp_OutAttributesMap_ValueProp = { "OutAttributesMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetFunctionsMapForPatch_Statics::NewProp_OutAttributesMap_Key_KeyProp = { "OutAttributesMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetFunctionsMapForPatch_Statics::NewProp_OutAttributesMap = { "OutAttributesMap", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetFunctionsMapForPatch_Parms, OutAttributesMap), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	void Z_Construct_UFunction_UDMXSubsystem_GetFunctionsMapForPatch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DMXSubsystem_eventGetFunctionsMapForPatch_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetFunctionsMapForPatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DMXSubsystem_eventGetFunctionsMapForPatch_Parms), &Z_Construct_UFunction_UDMXSubsystem_GetFunctionsMapForPatch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXSubsystem_GetFunctionsMapForPatch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetFunctionsMapForPatch_Statics::NewProp_InFixturePatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetFunctionsMapForPatch_Statics::NewProp_OutAttributesMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetFunctionsMapForPatch_Statics::NewProp_OutAttributesMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetFunctionsMapForPatch_Statics::NewProp_OutAttributesMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetFunctionsMapForPatch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_GetFunctionsMapForPatch_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "SelectedProtocol" },
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "DMX" },
		{ "Comment", "/**\n\x09 * Gets a function map based on you active mode from FixturePatch, but instead of passing a Protocol as parameters, it looks for\n\x09 * the first Protocol found in the Patch's universe and use that one\n\x09 * @param\x09InFixturePatch Selected Patch\n\x09 * @param\x09OutAttributesMap Function and Channel value output map\n\x09 * @return\x09True if outputting was successfully\n\x09 */" },
		{ "ModuleRelativePath", "Public/DMXSubsystem.h" },
		{ "ToolTip", "Gets a function map based on you active mode from FixturePatch, but instead of passing a Protocol as parameters, it looks for\nthe first Protocol found in the Patch's universe and use that one\n@param       InFixturePatch Selected Patch\n@param       OutAttributesMap Function and Channel value output map\n@return      True if outputting was successfully" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXSubsystem_GetFunctionsMapForPatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXSubsystem, nullptr, "GetFunctionsMapForPatch", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXSubsystem_GetFunctionsMapForPatch_Statics::DMXSubsystem_eventGetFunctionsMapForPatch_Parms), Z_Construct_UFunction_UDMXSubsystem_GetFunctionsMapForPatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetFunctionsMapForPatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_GetFunctionsMapForPatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetFunctionsMapForPatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXSubsystem_GetFunctionsMapForPatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXSubsystem_GetFunctionsMapForPatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXSubsystem_GetFunctionsValue_Statics
	{
		struct DMXSubsystem_eventGetFunctionsValue_Parms
		{
			FName FunctionAttributeName;
			TMap<FDMXAttributeName,int32> InAttributesMap;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionAttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FunctionAttributeName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InAttributesMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InAttributesMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAttributesMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InAttributesMap;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_GetFunctionsValue_Statics::NewProp_FunctionAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDMXSubsystem_GetFunctionsValue_Statics::NewProp_FunctionAttributeName = { "FunctionAttributeName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetFunctionsValue_Parms, FunctionAttributeName), METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_GetFunctionsValue_Statics::NewProp_FunctionAttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetFunctionsValue_Statics::NewProp_FunctionAttributeName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetFunctionsValue_Statics::NewProp_InAttributesMap_ValueProp = { "InAttributesMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetFunctionsValue_Statics::NewProp_InAttributesMap_Key_KeyProp = { "InAttributesMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(nullptr, 0) }; // 2246266977
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_GetFunctionsValue_Statics::NewProp_InAttributesMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetFunctionsValue_Statics::NewProp_InAttributesMap = { "InAttributesMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetFunctionsValue_Parms, InAttributesMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_GetFunctionsValue_Statics::NewProp_InAttributesMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetFunctionsValue_Statics::NewProp_InAttributesMap_MetaData)) }; // 2246266977
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetFunctionsValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetFunctionsValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXSubsystem_GetFunctionsValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetFunctionsValue_Statics::NewProp_FunctionAttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetFunctionsValue_Statics::NewProp_InAttributesMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetFunctionsValue_Statics::NewProp_InAttributesMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetFunctionsValue_Statics::NewProp_InAttributesMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetFunctionsValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_GetFunctionsValue_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "InName, InAttributesMap" },
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "DMX" },
		{ "Comment", "/**\n\x09 * Gets function channel value by input function name\n\x09 * @param\x09InName Looking fixture function name\n\x09 * @param\x09InAttributesMap Function and Channel value input map\n\x09 * @return\x09""Function channel value\n\x09 */" },
		{ "ModuleRelativePath", "Public/DMXSubsystem.h" },
		{ "ToolTip", "Gets function channel value by input function name\n@param       InName Looking fixture function name\n@param       InAttributesMap Function and Channel value input map\n@return      Function channel value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXSubsystem_GetFunctionsValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXSubsystem, nullptr, "GetFunctionsValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXSubsystem_GetFunctionsValue_Statics::DMXSubsystem_eventGetFunctionsValue_Parms), Z_Construct_UFunction_UDMXSubsystem_GetFunctionsValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetFunctionsValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_GetFunctionsValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetFunctionsValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXSubsystem_GetFunctionsValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXSubsystem_GetFunctionsValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXSubsystem_GetMatrixCell_Statics
	{
		struct DMXSubsystem_eventGetMatrixCell_Parms
		{
			UDMXEntityFixturePatch* FixturePatch;
			FIntPoint Coordinate;
			FDMXCell Cell;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FixturePatch;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Coordinate;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Cell;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetMatrixCell_Statics::NewProp_FixturePatch = { "FixturePatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetMatrixCell_Parms, FixturePatch), Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetMatrixCell_Statics::NewProp_Coordinate = { "Coordinate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetMatrixCell_Parms, Coordinate), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetMatrixCell_Statics::NewProp_Cell = { "Cell", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetMatrixCell_Parms, Cell), Z_Construct_UScriptStruct_FDMXCell, METADATA_PARAMS(nullptr, 0) }; // 2201996212
	void Z_Construct_UFunction_UDMXSubsystem_GetMatrixCell_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DMXSubsystem_eventGetMatrixCell_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetMatrixCell_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DMXSubsystem_eventGetMatrixCell_Parms), &Z_Construct_UFunction_UDMXSubsystem_GetMatrixCell_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXSubsystem_GetMatrixCell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetMatrixCell_Statics::NewProp_FixturePatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetMatrixCell_Statics::NewProp_Coordinate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetMatrixCell_Statics::NewProp_Cell,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetMatrixCell_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_GetMatrixCell_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/* Cell coordinate X/Y */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Deprecated 4.26. DMXEntityFixurePatch::GetMatrixCell instead" },
		{ "ModuleRelativePath", "Public/DMXSubsystem.h" },
		{ "ToolTip", "Cell coordinate X/Y" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXSubsystem_GetMatrixCell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXSubsystem, nullptr, "GetMatrixCell", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXSubsystem_GetMatrixCell_Statics::DMXSubsystem_eventGetMatrixCell_Parms), Z_Construct_UFunction_UDMXSubsystem_GetMatrixCell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetMatrixCell_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_GetMatrixCell_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetMatrixCell_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXSubsystem_GetMatrixCell()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXSubsystem_GetMatrixCell_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsAbsolute_Statics
	{
		struct DMXSubsystem_eventGetMatrixCellChannelsAbsolute_Parms
		{
			UDMXEntityFixturePatch* FixturePatch;
			FIntPoint Coordinate;
			TMap<FDMXAttributeName,int32> AttributeChannelMap;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FixturePatch;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Coordinate;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeChannelMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeChannelMap_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_AttributeChannelMap;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsAbsolute_Statics::NewProp_FixturePatch = { "FixturePatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetMatrixCellChannelsAbsolute_Parms, FixturePatch), Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsAbsolute_Statics::NewProp_Coordinate = { "Coordinate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetMatrixCellChannelsAbsolute_Parms, Coordinate), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsAbsolute_Statics::NewProp_AttributeChannelMap_ValueProp = { "AttributeChannelMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsAbsolute_Statics::NewProp_AttributeChannelMap_Key_KeyProp = { "AttributeChannelMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsAbsolute_Statics::NewProp_AttributeChannelMap = { "AttributeChannelMap", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetMatrixCellChannelsAbsolute_Parms, AttributeChannelMap), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	void Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsAbsolute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DMXSubsystem_eventGetMatrixCellChannelsAbsolute_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsAbsolute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DMXSubsystem_eventGetMatrixCellChannelsAbsolute_Parms), &Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsAbsolute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsAbsolute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsAbsolute_Statics::NewProp_FixturePatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsAbsolute_Statics::NewProp_Coordinate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsAbsolute_Statics::NewProp_AttributeChannelMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsAbsolute_Statics::NewProp_AttributeChannelMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsAbsolute_Statics::NewProp_AttributeChannelMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsAbsolute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsAbsolute_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/* Cell coordinate X/Y */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Deprecated 4.26. DMXEntityFixurePatch::GetMatrixCellChannelsAbsolute instead" },
		{ "ModuleRelativePath", "Public/DMXSubsystem.h" },
		{ "ToolTip", "Cell coordinate X/Y" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsAbsolute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXSubsystem, nullptr, "GetMatrixCellChannelsAbsolute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsAbsolute_Statics::DMXSubsystem_eventGetMatrixCellChannelsAbsolute_Parms), Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsAbsolute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsAbsolute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsAbsolute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsAbsolute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsAbsolute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsAbsolute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsRelative_Statics
	{
		struct DMXSubsystem_eventGetMatrixCellChannelsRelative_Parms
		{
			UDMXEntityFixturePatch* FixturePatch;
			FIntPoint Coordinate;
			TMap<FDMXAttributeName,int32> AttributeChannelMap;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FixturePatch;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Coordinate;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeChannelMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeChannelMap_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_AttributeChannelMap;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsRelative_Statics::NewProp_FixturePatch = { "FixturePatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetMatrixCellChannelsRelative_Parms, FixturePatch), Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsRelative_Statics::NewProp_Coordinate = { "Coordinate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetMatrixCellChannelsRelative_Parms, Coordinate), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsRelative_Statics::NewProp_AttributeChannelMap_ValueProp = { "AttributeChannelMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsRelative_Statics::NewProp_AttributeChannelMap_Key_KeyProp = { "AttributeChannelMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsRelative_Statics::NewProp_AttributeChannelMap = { "AttributeChannelMap", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetMatrixCellChannelsRelative_Parms, AttributeChannelMap), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	void Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsRelative_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DMXSubsystem_eventGetMatrixCellChannelsRelative_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsRelative_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DMXSubsystem_eventGetMatrixCellChannelsRelative_Parms), &Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsRelative_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsRelative_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsRelative_Statics::NewProp_FixturePatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsRelative_Statics::NewProp_Coordinate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsRelative_Statics::NewProp_AttributeChannelMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsRelative_Statics::NewProp_AttributeChannelMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsRelative_Statics::NewProp_AttributeChannelMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsRelative_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsRelative_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/* Cell coordinate X/Y */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Deprecated 4.26. DMXEntityFixurePatch::GetMatrixCellChannelsRelative instead" },
		{ "ModuleRelativePath", "Public/DMXSubsystem.h" },
		{ "ToolTip", "Cell coordinate X/Y" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsRelative_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXSubsystem, nullptr, "GetMatrixCellChannelsRelative", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsRelative_Statics::DMXSubsystem_eventGetMatrixCellChannelsRelative_Parms), Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsRelative_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsRelative_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsRelative_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsRelative_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsRelative()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsRelative_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellValue_Statics
	{
		struct DMXSubsystem_eventGetMatrixCellValue_Parms
		{
			UDMXEntityFixturePatch* FixturePatch;
			FIntPoint Coordinate;
			TMap<FDMXAttributeName,int32> AttributeValueMap;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FixturePatch;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Coordinate;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValueMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValueMap_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_AttributeValueMap;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellValue_Statics::NewProp_FixturePatch = { "FixturePatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetMatrixCellValue_Parms, FixturePatch), Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellValue_Statics::NewProp_Coordinate = { "Coordinate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetMatrixCellValue_Parms, Coordinate), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellValue_Statics::NewProp_AttributeValueMap_ValueProp = { "AttributeValueMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellValue_Statics::NewProp_AttributeValueMap_Key_KeyProp = { "AttributeValueMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellValue_Statics::NewProp_AttributeValueMap = { "AttributeValueMap", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetMatrixCellValue_Parms, AttributeValueMap), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	void Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DMXSubsystem_eventGetMatrixCellValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DMXSubsystem_eventGetMatrixCellValue_Parms), &Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellValue_Statics::NewProp_FixturePatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellValue_Statics::NewProp_Coordinate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellValue_Statics::NewProp_AttributeValueMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellValue_Statics::NewProp_AttributeValueMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellValue_Statics::NewProp_AttributeValueMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/* Cell coordinate X/Y */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Deprecated 4.26. DMXEntityFixurePatch::GetMatrixCellValues instead" },
		{ "ModuleRelativePath", "Public/DMXSubsystem.h" },
		{ "ToolTip", "Cell coordinate X/Y" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXSubsystem, nullptr, "GetMatrixCellValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellValue_Statics::DMXSubsystem_eventGetMatrixCellValue_Parms), Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXSubsystem_GetMatrixProperties_Statics
	{
		struct DMXSubsystem_eventGetMatrixProperties_Parms
		{
			UDMXEntityFixturePatch* FixturePatch;
			FDMXFixtureMatrix MatrixProperties;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FixturePatch;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MatrixProperties;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetMatrixProperties_Statics::NewProp_FixturePatch = { "FixturePatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetMatrixProperties_Parms, FixturePatch), Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetMatrixProperties_Statics::NewProp_MatrixProperties = { "MatrixProperties", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetMatrixProperties_Parms, MatrixProperties), Z_Construct_UScriptStruct_FDMXFixtureMatrix, METADATA_PARAMS(nullptr, 0) }; // 1203479243
	void Z_Construct_UFunction_UDMXSubsystem_GetMatrixProperties_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DMXSubsystem_eventGetMatrixProperties_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetMatrixProperties_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DMXSubsystem_eventGetMatrixProperties_Parms), &Z_Construct_UFunction_UDMXSubsystem_GetMatrixProperties_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXSubsystem_GetMatrixProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetMatrixProperties_Statics::NewProp_FixturePatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetMatrixProperties_Statics::NewProp_MatrixProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetMatrixProperties_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_GetMatrixProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Deprecated 4.26. DMXEntityFixurePatch::GetMatrixProperties instead" },
		{ "ModuleRelativePath", "Public/DMXSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXSubsystem_GetMatrixProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXSubsystem, nullptr, "GetMatrixProperties", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXSubsystem_GetMatrixProperties_Statics::DMXSubsystem_eventGetMatrixProperties_Parms), Z_Construct_UFunction_UDMXSubsystem_GetMatrixProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetMatrixProperties_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_GetMatrixProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetMatrixProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXSubsystem_GetMatrixProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXSubsystem_GetMatrixProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXSubsystem_GetNormalizedAttributeValue_Statics
	{
		struct DMXSubsystem_eventGetNormalizedAttributeValue_Parms
		{
			UDMXEntityFixturePatch* InFixturePatch;
			FDMXAttributeName InFunctionAttribute;
			int32 InValue;
			float ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InFixturePatch;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InFunctionAttribute;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetNormalizedAttributeValue_Statics::NewProp_InFixturePatch = { "InFixturePatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetNormalizedAttributeValue_Parms, InFixturePatch), Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetNormalizedAttributeValue_Statics::NewProp_InFunctionAttribute = { "InFunctionAttribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetNormalizedAttributeValue_Parms, InFunctionAttribute), Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetNormalizedAttributeValue_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetNormalizedAttributeValue_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetNormalizedAttributeValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetNormalizedAttributeValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXSubsystem_GetNormalizedAttributeValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetNormalizedAttributeValue_Statics::NewProp_InFixturePatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetNormalizedAttributeValue_Statics::NewProp_InFunctionAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetNormalizedAttributeValue_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetNormalizedAttributeValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_GetNormalizedAttributeValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/**\n\x09 * Return the normalized value of an Int value from a Fixture Patch function.\n\x09 * @return\x09The normalized value of the passed in Int using the Function's signal format.\n\x09 *\x09\x09\x09-1.0 if the Function is not found in the Fixture Patch.\n\x09 */" },
		{ "DisplayName", "GetNormalizedAttributeValue" },
		{ "Keywords", "float" },
		{ "ModuleRelativePath", "Public/DMXSubsystem.h" },
		{ "ToolTip", "Return the normalized value of an Int value from a Fixture Patch function.\n@return      The normalized value of the passed in Int using the Function's signal format.\n                     -1.0 if the Function is not found in the Fixture Patch." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXSubsystem_GetNormalizedAttributeValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXSubsystem, nullptr, "GetNormalizedAttributeValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXSubsystem_GetNormalizedAttributeValue_Statics::DMXSubsystem_eventGetNormalizedAttributeValue_Parms), Z_Construct_UFunction_UDMXSubsystem_GetNormalizedAttributeValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetNormalizedAttributeValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_GetNormalizedAttributeValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetNormalizedAttributeValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXSubsystem_GetNormalizedAttributeValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXSubsystem_GetNormalizedAttributeValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXSubsystem_GetRawBuffer_Statics
	{
		struct DMXSubsystem_eventGetRawBuffer_Parms
		{
			FDMXProtocolName SelectedProtocol;
			int32 RemoteUniverse;
			TArray<uint8> DMXBuffer;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedProtocol;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RemoteUniverse;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DMXBuffer_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DMXBuffer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetRawBuffer_Statics::NewProp_SelectedProtocol = { "SelectedProtocol", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetRawBuffer_Parms, SelectedProtocol), Z_Construct_UScriptStruct_FDMXProtocolName, METADATA_PARAMS(nullptr, 0) }; // 127357705
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetRawBuffer_Statics::NewProp_RemoteUniverse = { "RemoteUniverse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetRawBuffer_Parms, RemoteUniverse), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDMXSubsystem_GetRawBuffer_Statics::NewProp_DMXBuffer_Inner = { "DMXBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDMXSubsystem_GetRawBuffer_Statics::NewProp_DMXBuffer = { "DMXBuffer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventGetRawBuffer_Parms, DMXBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXSubsystem_GetRawBuffer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetRawBuffer_Statics::NewProp_SelectedProtocol,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetRawBuffer_Statics::NewProp_RemoteUniverse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetRawBuffer_Statics::NewProp_DMXBuffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_GetRawBuffer_Statics::NewProp_DMXBuffer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_GetRawBuffer_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/**  DEPRECATED 4.27 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Deprecated 4.27. Use GetDMXDataFromInputPort or GetDMXDataFromOutputPort instead." },
		{ "ModuleRelativePath", "Public/DMXSubsystem.h" },
		{ "ToolTip", "DEPRECATED 4.27" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXSubsystem_GetRawBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXSubsystem, nullptr, "GetRawBuffer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXSubsystem_GetRawBuffer_Statics::DMXSubsystem_eventGetRawBuffer_Parms), Z_Construct_UFunction_UDMXSubsystem_GetRawBuffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetRawBuffer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_GetRawBuffer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_GetRawBuffer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXSubsystem_GetRawBuffer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXSubsystem_GetRawBuffer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXSubsystem_IntToNormalizedValue_Statics
	{
		struct DMXSubsystem_eventIntToNormalizedValue_Parms
		{
			int32 InValue;
			EDMXFixtureSignalFormat InSignalFormat;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InSignalFormat_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InSignalFormat;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXSubsystem_IntToNormalizedValue_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventIntToNormalizedValue_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDMXSubsystem_IntToNormalizedValue_Statics::NewProp_InSignalFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDMXSubsystem_IntToNormalizedValue_Statics::NewProp_InSignalFormat = { "InSignalFormat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventIntToNormalizedValue_Parms, InSignalFormat), Z_Construct_UEnum_DMXProtocol_EDMXFixtureSignalFormat, METADATA_PARAMS(nullptr, 0) }; // 455975797
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDMXSubsystem_IntToNormalizedValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventIntToNormalizedValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXSubsystem_IntToNormalizedValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_IntToNormalizedValue_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_IntToNormalizedValue_Statics::NewProp_InSignalFormat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_IntToNormalizedValue_Statics::NewProp_InSignalFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_IntToNormalizedValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_IntToNormalizedValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/**\n\x09 * Return the normalized value of an Int value from the specified Signal Format.\n\x09 * @param bUseLSB\x09Least Significant Byte mode makes the individual bytes (channels) of the function be\n\x09 *\x09\x09\x09\x09\x09interpreted with the first bytes being the lowest part of the number.\n\x09 *\x09\x09\x09\x09\x09Most Fixtures use MSB (Most Significant Byte).\n\x09 */" },
		{ "Keywords", "float" },
		{ "ModuleRelativePath", "Public/DMXSubsystem.h" },
		{ "ToolTip", "Return the normalized value of an Int value from the specified Signal Format.\n@param bUseLSB       Least Significant Byte mode makes the individual bytes (channels) of the function be\n                                     interpreted with the first bytes being the lowest part of the number.\n                                     Most Fixtures use MSB (Most Significant Byte)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXSubsystem_IntToNormalizedValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXSubsystem, nullptr, "IntToNormalizedValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXSubsystem_IntToNormalizedValue_Statics::DMXSubsystem_eventIntToNormalizedValue_Parms), Z_Construct_UFunction_UDMXSubsystem_IntToNormalizedValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_IntToNormalizedValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_IntToNormalizedValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_IntToNormalizedValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXSubsystem_IntToNormalizedValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXSubsystem_IntToNormalizedValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXSubsystem_IntValueToBytes_Statics
	{
		struct DMXSubsystem_eventIntValueToBytes_Parms
		{
			int32 InValue;
			EDMXFixtureSignalFormat InSignalFormat;
			TArray<uint8> Bytes;
			bool bUseLSB;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InSignalFormat_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InSignalFormat;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bytes;
		static void NewProp_bUseLSB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLSB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXSubsystem_IntValueToBytes_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventIntValueToBytes_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDMXSubsystem_IntValueToBytes_Statics::NewProp_InSignalFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDMXSubsystem_IntValueToBytes_Statics::NewProp_InSignalFormat = { "InSignalFormat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventIntValueToBytes_Parms, InSignalFormat), Z_Construct_UEnum_DMXProtocol_EDMXFixtureSignalFormat, METADATA_PARAMS(nullptr, 0) }; // 455975797
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDMXSubsystem_IntValueToBytes_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDMXSubsystem_IntValueToBytes_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventIntValueToBytes_Parms, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDMXSubsystem_IntValueToBytes_Statics::NewProp_bUseLSB_SetBit(void* Obj)
	{
		((DMXSubsystem_eventIntValueToBytes_Parms*)Obj)->bUseLSB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMXSubsystem_IntValueToBytes_Statics::NewProp_bUseLSB = { "bUseLSB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DMXSubsystem_eventIntValueToBytes_Parms), &Z_Construct_UFunction_UDMXSubsystem_IntValueToBytes_Statics::NewProp_bUseLSB_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXSubsystem_IntValueToBytes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_IntValueToBytes_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_IntValueToBytes_Statics::NewProp_InSignalFormat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_IntValueToBytes_Statics::NewProp_InSignalFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_IntValueToBytes_Statics::NewProp_Bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_IntValueToBytes_Statics::NewProp_Bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_IntValueToBytes_Statics::NewProp_bUseLSB,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_IntValueToBytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/**\n\x09 * Return the Bytes format of Value in the desired Signal Format.\n\x09 * @param bUseLSB\x09Least Significant Byte mode makes the individual bytes (channels) of the function be\n\x09 *\x09\x09\x09\x09\x09interpreted with the first bytes being the lowest part of the number.\n\x09 *\x09\x09\x09\x09\x09Most Fixtures use MSB (Most Significant Byte).\n\x09 */" },
		{ "CPP_Default_bUseLSB", "false" },
		{ "ModuleRelativePath", "Public/DMXSubsystem.h" },
		{ "ToolTip", "Return the Bytes format of Value in the desired Signal Format.\n@param bUseLSB       Least Significant Byte mode makes the individual bytes (channels) of the function be\n                                     interpreted with the first bytes being the lowest part of the number.\n                                     Most Fixtures use MSB (Most Significant Byte)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXSubsystem_IntValueToBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXSubsystem, nullptr, "IntValueToBytes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXSubsystem_IntValueToBytes_Statics::DMXSubsystem_eventIntValueToBytes_Parms), Z_Construct_UFunction_UDMXSubsystem_IntValueToBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_IntValueToBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_IntValueToBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_IntValueToBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXSubsystem_IntValueToBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXSubsystem_IntValueToBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXSubsystem_NormalizedValueToBytes_Statics
	{
		struct DMXSubsystem_eventNormalizedValueToBytes_Parms
		{
			float InValue;
			EDMXFixtureSignalFormat InSignalFormat;
			TArray<uint8> Bytes;
			bool bUseLSB;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InSignalFormat_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InSignalFormat;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bytes;
		static void NewProp_bUseLSB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLSB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDMXSubsystem_NormalizedValueToBytes_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventNormalizedValueToBytes_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDMXSubsystem_NormalizedValueToBytes_Statics::NewProp_InSignalFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDMXSubsystem_NormalizedValueToBytes_Statics::NewProp_InSignalFormat = { "InSignalFormat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventNormalizedValueToBytes_Parms, InSignalFormat), Z_Construct_UEnum_DMXProtocol_EDMXFixtureSignalFormat, METADATA_PARAMS(nullptr, 0) }; // 455975797
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDMXSubsystem_NormalizedValueToBytes_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDMXSubsystem_NormalizedValueToBytes_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventNormalizedValueToBytes_Parms, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDMXSubsystem_NormalizedValueToBytes_Statics::NewProp_bUseLSB_SetBit(void* Obj)
	{
		((DMXSubsystem_eventNormalizedValueToBytes_Parms*)Obj)->bUseLSB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMXSubsystem_NormalizedValueToBytes_Statics::NewProp_bUseLSB = { "bUseLSB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DMXSubsystem_eventNormalizedValueToBytes_Parms), &Z_Construct_UFunction_UDMXSubsystem_NormalizedValueToBytes_Statics::NewProp_bUseLSB_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXSubsystem_NormalizedValueToBytes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_NormalizedValueToBytes_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_NormalizedValueToBytes_Statics::NewProp_InSignalFormat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_NormalizedValueToBytes_Statics::NewProp_InSignalFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_NormalizedValueToBytes_Statics::NewProp_Bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_NormalizedValueToBytes_Statics::NewProp_Bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_NormalizedValueToBytes_Statics::NewProp_bUseLSB,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_NormalizedValueToBytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/**\n\x09 * Return the Bytes format of Value in the desired Signal Format.\n\x09 * @param bUseLSB\x09Least Significant Byte mode makes the individual bytes (channels) of the function be\n\x09 *\x09\x09\x09\x09\x09interpreted with the first bytes being the lowest part of the number.\n\x09 *\x09\x09\x09\x09\x09Most Fixtures use MSB (Most Significant Byte).\n\x09 */" },
		{ "CPP_Default_bUseLSB", "false" },
		{ "Keywords", "float" },
		{ "ModuleRelativePath", "Public/DMXSubsystem.h" },
		{ "ToolTip", "Return the Bytes format of Value in the desired Signal Format.\n@param bUseLSB       Least Significant Byte mode makes the individual bytes (channels) of the function be\n                                     interpreted with the first bytes being the lowest part of the number.\n                                     Most Fixtures use MSB (Most Significant Byte)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXSubsystem_NormalizedValueToBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXSubsystem, nullptr, "NormalizedValueToBytes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXSubsystem_NormalizedValueToBytes_Statics::DMXSubsystem_eventNormalizedValueToBytes_Parms), Z_Construct_UFunction_UDMXSubsystem_NormalizedValueToBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_NormalizedValueToBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_NormalizedValueToBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_NormalizedValueToBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXSubsystem_NormalizedValueToBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXSubsystem_NormalizedValueToBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UDMXSubsystem_OnAssetRegistryAddedAsset_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct DMXSubsystem_eventOnAssetRegistryAddedAsset_Parms
		{
			FAssetData Asset;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Asset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_OnAssetRegistryAddedAsset_Statics::NewProp_Asset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXSubsystem_OnAssetRegistryAddedAsset_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventOnAssetRegistryAddedAsset_Parms, Asset), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_OnAssetRegistryAddedAsset_Statics::NewProp_Asset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_OnAssetRegistryAddedAsset_Statics::NewProp_Asset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXSubsystem_OnAssetRegistryAddedAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_OnAssetRegistryAddedAsset_Statics::NewProp_Asset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_OnAssetRegistryAddedAsset_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called when asset registry added an asset */" },
		{ "ModuleRelativePath", "Public/DMXSubsystem.h" },
		{ "ToolTip", "Called when asset registry added an asset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXSubsystem_OnAssetRegistryAddedAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXSubsystem, nullptr, "OnAssetRegistryAddedAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXSubsystem_OnAssetRegistryAddedAsset_Statics::DMXSubsystem_eventOnAssetRegistryAddedAsset_Parms), Z_Construct_UFunction_UDMXSubsystem_OnAssetRegistryAddedAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_OnAssetRegistryAddedAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_OnAssetRegistryAddedAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_OnAssetRegistryAddedAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXSubsystem_OnAssetRegistryAddedAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXSubsystem_OnAssetRegistryAddedAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UDMXSubsystem_OnAssetRegistryRemovedAsset_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct DMXSubsystem_eventOnAssetRegistryRemovedAsset_Parms
		{
			FAssetData Asset;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Asset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_OnAssetRegistryRemovedAsset_Statics::NewProp_Asset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXSubsystem_OnAssetRegistryRemovedAsset_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventOnAssetRegistryRemovedAsset_Parms, Asset), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_OnAssetRegistryRemovedAsset_Statics::NewProp_Asset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_OnAssetRegistryRemovedAsset_Statics::NewProp_Asset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXSubsystem_OnAssetRegistryRemovedAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_OnAssetRegistryRemovedAsset_Statics::NewProp_Asset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_OnAssetRegistryRemovedAsset_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called when asset registry removed an asset */" },
		{ "ModuleRelativePath", "Public/DMXSubsystem.h" },
		{ "ToolTip", "Called when asset registry removed an asset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXSubsystem_OnAssetRegistryRemovedAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXSubsystem, nullptr, "OnAssetRegistryRemovedAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXSubsystem_OnAssetRegistryRemovedAsset_Statics::DMXSubsystem_eventOnAssetRegistryRemovedAsset_Parms), Z_Construct_UFunction_UDMXSubsystem_OnAssetRegistryRemovedAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_OnAssetRegistryRemovedAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_OnAssetRegistryRemovedAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_OnAssetRegistryRemovedAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXSubsystem_OnAssetRegistryRemovedAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXSubsystem_OnAssetRegistryRemovedAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UDMXSubsystem_PatchIsOfSelectedType_Statics
	{
		struct DMXSubsystem_eventPatchIsOfSelectedType_Parms
		{
			UDMXEntityFixturePatch* InFixturePatch;
			FString RefTypeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InFixturePatch;
		static const UECodeGen_Private::FStrPropertyParams NewProp_RefTypeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXSubsystem_PatchIsOfSelectedType_Statics::NewProp_InFixturePatch = { "InFixturePatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventPatchIsOfSelectedType_Parms, InFixturePatch), Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDMXSubsystem_PatchIsOfSelectedType_Statics::NewProp_RefTypeValue = { "RefTypeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventPatchIsOfSelectedType_Parms, RefTypeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDMXSubsystem_PatchIsOfSelectedType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DMXSubsystem_eventPatchIsOfSelectedType_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMXSubsystem_PatchIsOfSelectedType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DMXSubsystem_eventPatchIsOfSelectedType_Parms), &Z_Construct_UFunction_UDMXSubsystem_PatchIsOfSelectedType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXSubsystem_PatchIsOfSelectedType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_PatchIsOfSelectedType_Statics::NewProp_InFixturePatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_PatchIsOfSelectedType_Statics::NewProp_RefTypeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_PatchIsOfSelectedType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_PatchIsOfSelectedType_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "DMX" },
		{ "Comment", "/**\n\x09 * Checks if a FixturePatchs is of a given FixtureType\n\x09 * @param\x09InFixturePatch fixture patch to check\n\x09 * @param\x09RefTypeValue a FixtureTypeRef to check against the fixture patch type\n\x09 * @return\x09""bool result of checking if the patch is of a given type \n\x09 */" },
		{ "ModuleRelativePath", "Public/DMXSubsystem.h" },
		{ "ToolTip", "Checks if a FixturePatchs is of a given FixtureType\n@param       InFixturePatch fixture patch to check\n@param       RefTypeValue a FixtureTypeRef to check against the fixture patch type\n@return      bool result of checking if the patch is of a given type" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXSubsystem_PatchIsOfSelectedType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXSubsystem, nullptr, "PatchIsOfSelectedType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXSubsystem_PatchIsOfSelectedType_Statics::DMXSubsystem_eventPatchIsOfSelectedType_Parms), Z_Construct_UFunction_UDMXSubsystem_PatchIsOfSelectedType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_PatchIsOfSelectedType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_PatchIsOfSelectedType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_PatchIsOfSelectedType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXSubsystem_PatchIsOfSelectedType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXSubsystem_PatchIsOfSelectedType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXSubsystem_PixelMappingDistributionSort_Statics
	{
		struct DMXSubsystem_eventPixelMappingDistributionSort_Parms
		{
			EDMXPixelMappingDistribution InDistribution;
			int32 InNumXPanels;
			int32 InNumYPanels;
			TArray<int32> InUnorderedList;
			TArray<int32> OutSortedList;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InDistribution_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InDistribution;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InNumXPanels;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InNumYPanels;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InUnorderedList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InUnorderedList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InUnorderedList;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutSortedList_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutSortedList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDMXSubsystem_PixelMappingDistributionSort_Statics::NewProp_InDistribution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDMXSubsystem_PixelMappingDistributionSort_Statics::NewProp_InDistribution = { "InDistribution", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventPixelMappingDistributionSort_Parms, InDistribution), Z_Construct_UEnum_DMXRuntime_EDMXPixelMappingDistribution, METADATA_PARAMS(nullptr, 0) }; // 1209359822
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXSubsystem_PixelMappingDistributionSort_Statics::NewProp_InNumXPanels = { "InNumXPanels", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventPixelMappingDistributionSort_Parms, InNumXPanels), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXSubsystem_PixelMappingDistributionSort_Statics::NewProp_InNumYPanels = { "InNumYPanels", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventPixelMappingDistributionSort_Parms, InNumYPanels), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXSubsystem_PixelMappingDistributionSort_Statics::NewProp_InUnorderedList_Inner = { "InUnorderedList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_PixelMappingDistributionSort_Statics::NewProp_InUnorderedList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDMXSubsystem_PixelMappingDistributionSort_Statics::NewProp_InUnorderedList = { "InUnorderedList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventPixelMappingDistributionSort_Parms, InUnorderedList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_PixelMappingDistributionSort_Statics::NewProp_InUnorderedList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_PixelMappingDistributionSort_Statics::NewProp_InUnorderedList_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXSubsystem_PixelMappingDistributionSort_Statics::NewProp_OutSortedList_Inner = { "OutSortedList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDMXSubsystem_PixelMappingDistributionSort_Statics::NewProp_OutSortedList = { "OutSortedList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventPixelMappingDistributionSort_Parms, OutSortedList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXSubsystem_PixelMappingDistributionSort_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_PixelMappingDistributionSort_Statics::NewProp_InDistribution_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_PixelMappingDistributionSort_Statics::NewProp_InDistribution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_PixelMappingDistributionSort_Statics::NewProp_InNumXPanels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_PixelMappingDistributionSort_Statics::NewProp_InNumYPanels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_PixelMappingDistributionSort_Statics::NewProp_InUnorderedList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_PixelMappingDistributionSort_Statics::NewProp_InUnorderedList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_PixelMappingDistributionSort_Statics::NewProp_OutSortedList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_PixelMappingDistributionSort_Statics::NewProp_OutSortedList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_PixelMappingDistributionSort_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/**  Sort an array according to the selected distribution pattern. */" },
		{ "ModuleRelativePath", "Public/DMXSubsystem.h" },
		{ "ToolTip", "Sort an array according to the selected distribution pattern." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXSubsystem_PixelMappingDistributionSort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXSubsystem, nullptr, "PixelMappingDistributionSort", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXSubsystem_PixelMappingDistributionSort_Statics::DMXSubsystem_eventPixelMappingDistributionSort_Parms), Z_Construct_UFunction_UDMXSubsystem_PixelMappingDistributionSort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_PixelMappingDistributionSort_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_PixelMappingDistributionSort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_PixelMappingDistributionSort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXSubsystem_PixelMappingDistributionSort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXSubsystem_PixelMappingDistributionSort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXSubsystem_SendDMX_Statics
	{
		struct DMXSubsystem_eventSendDMX_Parms
		{
			UDMXEntityFixturePatch* FixturePatch;
			TMap<FDMXAttributeName,int32> AttributeMap;
			EDMXSendResult OutResult;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FixturePatch;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeMap_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_AttributeMap;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXSubsystem_SendDMX_Statics::NewProp_FixturePatch = { "FixturePatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventSendDMX_Parms, FixturePatch), Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXSubsystem_SendDMX_Statics::NewProp_AttributeMap_ValueProp = { "AttributeMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXSubsystem_SendDMX_Statics::NewProp_AttributeMap_Key_KeyProp = { "AttributeMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDMXSubsystem_SendDMX_Statics::NewProp_AttributeMap = { "AttributeMap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventSendDMX_Parms, AttributeMap), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDMXSubsystem_SendDMX_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDMXSubsystem_SendDMX_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventSendDMX_Parms, OutResult), Z_Construct_UEnum_DMXProtocol_EDMXSendResult, METADATA_PARAMS(nullptr, 0) }; // 3405712147
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXSubsystem_SendDMX_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_SendDMX_Statics::NewProp_FixturePatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_SendDMX_Statics::NewProp_AttributeMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_SendDMX_Statics::NewProp_AttributeMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_SendDMX_Statics::NewProp_AttributeMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_SendDMX_Statics::NewProp_OutResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_SendDMX_Statics::NewProp_OutResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_SendDMX_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/**  Send DMX using function names and integer values. */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Deprecated 4.27. Use DMXEntityFixurePatch::SendDMX instead" },
		{ "ModuleRelativePath", "Public/DMXSubsystem.h" },
		{ "ToolTip", "Send DMX using function names and integer values." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXSubsystem_SendDMX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXSubsystem, nullptr, "SendDMX", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXSubsystem_SendDMX_Statics::DMXSubsystem_eventSendDMX_Parms), Z_Construct_UFunction_UDMXSubsystem_SendDMX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_SendDMX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_SendDMX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_SendDMX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXSubsystem_SendDMX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXSubsystem_SendDMX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXSubsystem_SendDMXRaw_Statics
	{
		struct DMXSubsystem_eventSendDMXRaw_Parms
		{
			FDMXProtocolName SelectedProtocol;
			int32 RemoteUniverse;
			TMap<int32,uint8> AddressValueMap;
			EDMXSendResult OutResult;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedProtocol;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RemoteUniverse;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AddressValueMap_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AddressValueMap_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_AddressValueMap;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXSubsystem_SendDMXRaw_Statics::NewProp_SelectedProtocol = { "SelectedProtocol", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventSendDMXRaw_Parms, SelectedProtocol), Z_Construct_UScriptStruct_FDMXProtocolName, METADATA_PARAMS(nullptr, 0) }; // 127357705
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXSubsystem_SendDMXRaw_Statics::NewProp_RemoteUniverse = { "RemoteUniverse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventSendDMXRaw_Parms, RemoteUniverse), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDMXSubsystem_SendDMXRaw_Statics::NewProp_AddressValueMap_ValueProp = { "AddressValueMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXSubsystem_SendDMXRaw_Statics::NewProp_AddressValueMap_Key_KeyProp = { "AddressValueMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDMXSubsystem_SendDMXRaw_Statics::NewProp_AddressValueMap = { "AddressValueMap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventSendDMXRaw_Parms, AddressValueMap), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDMXSubsystem_SendDMXRaw_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDMXSubsystem_SendDMXRaw_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventSendDMXRaw_Parms, OutResult), Z_Construct_UEnum_DMXProtocol_EDMXSendResult, METADATA_PARAMS(nullptr, 0) }; // 3405712147
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXSubsystem_SendDMXRaw_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_SendDMXRaw_Statics::NewProp_SelectedProtocol,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_SendDMXRaw_Statics::NewProp_RemoteUniverse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_SendDMXRaw_Statics::NewProp_AddressValueMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_SendDMXRaw_Statics::NewProp_AddressValueMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_SendDMXRaw_Statics::NewProp_AddressValueMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_SendDMXRaw_Statics::NewProp_OutResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_SendDMXRaw_Statics::NewProp_OutResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_SendDMXRaw_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/**  DEPRECATED 4.27 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Deprecated 4.27. Use SendDMXToOutputPort instead." },
		{ "ModuleRelativePath", "Public/DMXSubsystem.h" },
		{ "ToolTip", "DEPRECATED 4.27" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXSubsystem_SendDMXRaw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXSubsystem, nullptr, "SendDMXRaw", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXSubsystem_SendDMXRaw_Statics::DMXSubsystem_eventSendDMXRaw_Parms), Z_Construct_UFunction_UDMXSubsystem_SendDMXRaw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_SendDMXRaw_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_SendDMXRaw_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_SendDMXRaw_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXSubsystem_SendDMXRaw()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXSubsystem_SendDMXRaw_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXSubsystem_SendDMXToOutputPort_Statics
	{
		struct DMXSubsystem_eventSendDMXToOutputPort_Parms
		{
			FDMXOutputPortReference OutputPortReference;
			TMap<int32,uint8> ChannelToValueMap;
			int32 LocalUniverse;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputPortReference;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ChannelToValueMap_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelToValueMap_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ChannelToValueMap;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUniverse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXSubsystem_SendDMXToOutputPort_Statics::NewProp_OutputPortReference = { "OutputPortReference", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventSendDMXToOutputPort_Parms, OutputPortReference), Z_Construct_UScriptStruct_FDMXOutputPortReference, METADATA_PARAMS(nullptr, 0) }; // 3396692900
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDMXSubsystem_SendDMXToOutputPort_Statics::NewProp_ChannelToValueMap_ValueProp = { "ChannelToValueMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXSubsystem_SendDMXToOutputPort_Statics::NewProp_ChannelToValueMap_Key_KeyProp = { "ChannelToValueMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDMXSubsystem_SendDMXToOutputPort_Statics::NewProp_ChannelToValueMap = { "ChannelToValueMap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventSendDMXToOutputPort_Parms, ChannelToValueMap), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXSubsystem_SendDMXToOutputPort_Statics::NewProp_LocalUniverse = { "LocalUniverse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventSendDMXToOutputPort_Parms, LocalUniverse), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXSubsystem_SendDMXToOutputPort_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_SendDMXToOutputPort_Statics::NewProp_OutputPortReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_SendDMXToOutputPort_Statics::NewProp_ChannelToValueMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_SendDMXToOutputPort_Statics::NewProp_ChannelToValueMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_SendDMXToOutputPort_Statics::NewProp_ChannelToValueMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_SendDMXToOutputPort_Statics::NewProp_LocalUniverse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_SendDMXToOutputPort_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/**  Sends DMX Values over the Output Port */" },
		{ "CPP_Default_LocalUniverse", "1" },
		{ "ModuleRelativePath", "Public/DMXSubsystem.h" },
		{ "ToolTip", "Sends DMX Values over the Output Port" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXSubsystem_SendDMXToOutputPort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXSubsystem, nullptr, "SendDMXToOutputPort", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXSubsystem_SendDMXToOutputPort_Statics::DMXSubsystem_eventSendDMXToOutputPort_Parms), Z_Construct_UFunction_UDMXSubsystem_SendDMXToOutputPort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_SendDMXToOutputPort_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_SendDMXToOutputPort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_SendDMXToOutputPort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXSubsystem_SendDMXToOutputPort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXSubsystem_SendDMXToOutputPort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXSubsystem_SetMatrixCellValue_Statics
	{
		struct DMXSubsystem_eventSetMatrixCellValue_Parms
		{
			UDMXEntityFixturePatch* FixturePatch;
			FIntPoint Coordinate;
			FDMXAttributeName Attribute;
			int32 Value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FixturePatch;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Coordinate;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXSubsystem_SetMatrixCellValue_Statics::NewProp_FixturePatch = { "FixturePatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventSetMatrixCellValue_Parms, FixturePatch), Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXSubsystem_SetMatrixCellValue_Statics::NewProp_Coordinate = { "Coordinate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventSetMatrixCellValue_Parms, Coordinate), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXSubsystem_SetMatrixCellValue_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventSetMatrixCellValue_Parms, Attribute), Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXSubsystem_SetMatrixCellValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXSubsystem_eventSetMatrixCellValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDMXSubsystem_SetMatrixCellValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DMXSubsystem_eventSetMatrixCellValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMXSubsystem_SetMatrixCellValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DMXSubsystem_eventSetMatrixCellValue_Parms), &Z_Construct_UFunction_UDMXSubsystem_SetMatrixCellValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXSubsystem_SetMatrixCellValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_SetMatrixCellValue_Statics::NewProp_FixturePatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_SetMatrixCellValue_Statics::NewProp_Coordinate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_SetMatrixCellValue_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_SetMatrixCellValue_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXSubsystem_SetMatrixCellValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXSubsystem_SetMatrixCellValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/* Cell coordinate X/Y */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Deprecated 4.26. DMXEntityFixurePatch::SendMatrixCellValue instead" },
		{ "ModuleRelativePath", "Public/DMXSubsystem.h" },
		{ "ToolTip", "Cell coordinate X/Y" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXSubsystem_SetMatrixCellValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXSubsystem, nullptr, "SetMatrixCellValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXSubsystem_SetMatrixCellValue_Statics::DMXSubsystem_eventSetMatrixCellValue_Parms), Z_Construct_UFunction_UDMXSubsystem_SetMatrixCellValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_SetMatrixCellValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXSubsystem_SetMatrixCellValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXSubsystem_SetMatrixCellValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXSubsystem_SetMatrixCellValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXSubsystem_SetMatrixCellValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXSubsystem);
	UClass* Z_Construct_UClass_UDMXSubsystem_NoRegister()
	{
		return UDMXSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UDMXSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnProtocolReceived_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProtocolReceived;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LoadedDMXLibraries_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadedDMXLibraries_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LoadedDMXLibraries;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDMXSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDMXSubsystem_BytesToInt, "BytesToInt" }, // 1645546191
		{ &Z_Construct_UFunction_UDMXSubsystem_BytesToNormalizedValue, "BytesToNormalizedValue" }, // 1161124656
		{ &Z_Construct_UFunction_UDMXSubsystem_GetAllControllersInLibrary, "GetAllControllersInLibrary" }, // 931278338
		{ &Z_Construct_UFunction_UDMXSubsystem_GetAllDMXLibraries, "GetAllDMXLibraries" }, // 2174240343
		{ &Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesInLibrary, "GetAllFixturesInLibrary" }, // 1643690736
		{ &Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesInUniverse, "GetAllFixturesInUniverse" }, // 2348040810
		{ &Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesOfCategory, "GetAllFixturesOfCategory" }, // 514669105
		{ &Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesOfType, "GetAllFixturesOfType" }, // 781849724
		{ &Z_Construct_UFunction_UDMXSubsystem_GetAllFixturesWithTag, "GetAllFixturesWithTag" }, // 1199298880
		{ &Z_Construct_UFunction_UDMXSubsystem_GetAllFixtureTypesInLibrary, "GetAllFixtureTypesInLibrary" }, // 2126338475
		{ &Z_Construct_UFunction_UDMXSubsystem_GetAllMatrixCells, "GetAllMatrixCells" }, // 1853189647
		{ &Z_Construct_UFunction_UDMXSubsystem_GetAllUniversesInController, "GetAllUniversesInController" }, // 1898846888
		{ &Z_Construct_UFunction_UDMXSubsystem_GetAttributeLabel, "GetAttributeLabel" }, // 1358168585
		{ &Z_Construct_UFunction_UDMXSubsystem_GetCellAttributes, "GetCellAttributes" }, // 1504315718
		{ &Z_Construct_UFunction_UDMXSubsystem_GetControllerByName, "GetControllerByName" }, // 1842451475
		{ &Z_Construct_UFunction_UDMXSubsystem_GetDMXDataFromInputPort, "GetDMXDataFromInputPort" }, // 4579699
		{ &Z_Construct_UFunction_UDMXSubsystem_GetDMXDataFromOutputPort, "GetDMXDataFromOutputPort" }, // 4032597825
		{ &Z_Construct_UFunction_UDMXSubsystem_GetDMXSubsystem_Callable, "GetDMXSubsystem_Callable" }, // 1759338208
		{ &Z_Construct_UFunction_UDMXSubsystem_GetDMXSubsystem_Pure, "GetDMXSubsystem_Pure" }, // 691399995
		{ &Z_Construct_UFunction_UDMXSubsystem_GetFixtureAttributes, "GetFixtureAttributes" }, // 589986505
		{ &Z_Construct_UFunction_UDMXSubsystem_GetFixtureByName, "GetFixtureByName" }, // 3413379242
		{ &Z_Construct_UFunction_UDMXSubsystem_GetFixturePatch, "GetFixturePatch" }, // 2810272040
		{ &Z_Construct_UFunction_UDMXSubsystem_GetFixtureType, "GetFixtureType" }, // 998178396
		{ &Z_Construct_UFunction_UDMXSubsystem_GetFixtureTypeByName, "GetFixtureTypeByName" }, // 2167173551
		{ &Z_Construct_UFunction_UDMXSubsystem_GetFunctionsMap, "GetFunctionsMap" }, // 1640569478
		{ &Z_Construct_UFunction_UDMXSubsystem_GetFunctionsMapForPatch, "GetFunctionsMapForPatch" }, // 3306581588
		{ &Z_Construct_UFunction_UDMXSubsystem_GetFunctionsValue, "GetFunctionsValue" }, // 616734923
		{ &Z_Construct_UFunction_UDMXSubsystem_GetMatrixCell, "GetMatrixCell" }, // 3624286061
		{ &Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsAbsolute, "GetMatrixCellChannelsAbsolute" }, // 3865558164
		{ &Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellChannelsRelative, "GetMatrixCellChannelsRelative" }, // 3480141289
		{ &Z_Construct_UFunction_UDMXSubsystem_GetMatrixCellValue, "GetMatrixCellValue" }, // 3916931447
		{ &Z_Construct_UFunction_UDMXSubsystem_GetMatrixProperties, "GetMatrixProperties" }, // 519687185
		{ &Z_Construct_UFunction_UDMXSubsystem_GetNormalizedAttributeValue, "GetNormalizedAttributeValue" }, // 1893082297
		{ &Z_Construct_UFunction_UDMXSubsystem_GetRawBuffer, "GetRawBuffer" }, // 940642809
		{ &Z_Construct_UFunction_UDMXSubsystem_IntToNormalizedValue, "IntToNormalizedValue" }, // 3743804093
		{ &Z_Construct_UFunction_UDMXSubsystem_IntValueToBytes, "IntValueToBytes" }, // 235381266
		{ &Z_Construct_UFunction_UDMXSubsystem_NormalizedValueToBytes, "NormalizedValueToBytes" }, // 2270422728
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UDMXSubsystem_OnAssetRegistryAddedAsset, "OnAssetRegistryAddedAsset" }, // 709400516
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UDMXSubsystem_OnAssetRegistryRemovedAsset, "OnAssetRegistryRemovedAsset" }, // 1204366272
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UDMXSubsystem_PatchIsOfSelectedType, "PatchIsOfSelectedType" }, // 2079659560
		{ &Z_Construct_UFunction_UDMXSubsystem_PixelMappingDistributionSort, "PixelMappingDistributionSort" }, // 1226434876
		{ &Z_Construct_UFunction_UDMXSubsystem_SendDMX, "SendDMX" }, // 3413762776
		{ &Z_Construct_UFunction_UDMXSubsystem_SendDMXRaw, "SendDMXRaw" }, // 1905255520
		{ &Z_Construct_UFunction_UDMXSubsystem_SendDMXToOutputPort, "SendDMXToOutputPort" }, // 1148801901
		{ &Z_Construct_UFunction_UDMXSubsystem_SetMatrixCellValue, "SetMatrixCellValue" }, // 3954393184
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UDMXSubsystem\n * Collections of DMX context blueprint subsystem functions and internal functions for DMX K2Nodes\n */" },
		{ "IncludePath", "DMXSubsystem.h" },
		{ "ModuleRelativePath", "Public/DMXSubsystem.h" },
		{ "ToolTip", "UDMXSubsystem\nCollections of DMX context blueprint subsystem functions and internal functions for DMX K2Nodes" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXSubsystem_Statics::NewProp_OnProtocolReceived_MetaData[] = {
		{ "Category", "DMX" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "WARNING: This can execute faster than tick leading to possible blueprint performance issues. Use DMXComponent's OnFixturePatchReceived event or GetRawBuffer instead." },
		{ "ModuleRelativePath", "Public/DMXSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDMXSubsystem_Statics::NewProp_OnProtocolReceived = { "OnProtocolReceived", nullptr, (EPropertyFlags)0x0010000030080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXSubsystem, OnProtocolReceived_DEPRECATED), Z_Construct_UDelegateFunction_DMXRuntime_ProtocolReceivedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDMXSubsystem_Statics::NewProp_OnProtocolReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXSubsystem_Statics::NewProp_OnProtocolReceived_MetaData)) }; // 1875483480
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXSubsystem_Statics::NewProp_LoadedDMXLibraries_Inner = { "LoadedDMXLibraries", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDMXLibrary_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXSubsystem_Statics::NewProp_LoadedDMXLibraries_MetaData[] = {
		{ "Comment", "/** Strongly references all libraries at all times */" },
		{ "ModuleRelativePath", "Public/DMXSubsystem.h" },
		{ "ToolTip", "Strongly references all libraries at all times" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDMXSubsystem_Statics::NewProp_LoadedDMXLibraries = { "LoadedDMXLibraries", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXSubsystem, LoadedDMXLibraries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDMXSubsystem_Statics::NewProp_LoadedDMXLibraries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXSubsystem_Statics::NewProp_LoadedDMXLibraries_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXSubsystem_Statics::NewProp_OnProtocolReceived,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXSubsystem_Statics::NewProp_LoadedDMXLibraries_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXSubsystem_Statics::NewProp_LoadedDMXLibraries,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXSubsystem_Statics::ClassParams = {
		&UDMXSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDMXSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXSubsystem()
	{
		if (!Z_Registration_Info_UClass_UDMXSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXSubsystem.OuterSingleton, Z_Construct_UClass_UDMXSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXSubsystem.OuterSingleton;
	}
	template<> DMXRUNTIME_API UClass* StaticClass<UDMXSubsystem>()
	{
		return UDMXSubsystem::StaticClass();
	}
	UDMXSubsystem::UDMXSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXSubsystem);
	UDMXSubsystem::~UDMXSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXSubsystem, UDMXSubsystem::StaticClass, TEXT("UDMXSubsystem"), &Z_Registration_Info_UClass_UDMXSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXSubsystem), 1547574392U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXSubsystem_h_3744766628(TEXT("/Script/DMXRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
