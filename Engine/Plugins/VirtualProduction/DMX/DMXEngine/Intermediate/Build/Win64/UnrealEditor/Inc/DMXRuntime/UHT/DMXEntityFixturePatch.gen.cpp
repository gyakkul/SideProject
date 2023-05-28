// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Library/DMXEntityFixturePatch.h"
#include "DMXAttribute.h"
#include "DMXTypes.h"
#include "Library/DMXEntityFixtureType.h"
#include "Library/DMXEntityReference.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXEntityFixturePatch() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	DMXPROTOCOL_API UEnum* Z_Construct_UEnum_DMXProtocol_EDMXFixtureSignalFormat();
	DMXPROTOCOL_API UScriptStruct* Z_Construct_UScriptStruct_FDMXAttributeName();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXEntity();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXEntityController_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXEntityFixturePatch();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXEntityFixtureType_NoRegister();
	DMXRUNTIME_API UFunction* Z_Construct_UDelegateFunction_UDMXEntityFixturePatch_DMXOnFixturePatchReceivedDMXDelegate__DelegateSignature();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXCell();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXEntityFixturePatchConstructionParams();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXEntityFixturePatchRef();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXEntityFixtureTypeRef();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXFixtureFunction();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXFixtureMatrix();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXNormalizedAttributeValueMap();
	UPackage* Z_Construct_UPackage__Script_DMXRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXEntityFixturePatchConstructionParams;
class UScriptStruct* FDMXEntityFixturePatchConstructionParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXEntityFixturePatchConstructionParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXEntityFixturePatchConstructionParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXEntityFixturePatchConstructionParams, (UObject*)Z_Construct_UPackage__Script_DMXRuntime(), TEXT("DMXEntityFixturePatchConstructionParams"));
	}
	return Z_Registration_Info_UScriptStruct_DMXEntityFixturePatchConstructionParams.OuterSingleton;
}
template<> DMXRUNTIME_API UScriptStruct* StaticStruct<FDMXEntityFixturePatchConstructionParams>()
{
	return FDMXEntityFixturePatchConstructionParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXEntityFixturePatchConstructionParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixtureTypeRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FixtureTypeRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveMode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ActiveMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniverseID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UniverseID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartingAddress_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartingAddress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXEntityFixturePatchConstructionParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Parameters to construct a Fixture Patch. */" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
		{ "ToolTip", "Parameters to construct a Fixture Patch." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXEntityFixturePatchConstructionParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXEntityFixturePatchConstructionParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXEntityFixturePatchConstructionParams_Statics::NewProp_FixtureTypeRef_MetaData[] = {
		{ "Category", "Fixture Patch" },
		{ "Comment", "/** Property to point to the template parent fixture for details panel purposes */" },
		{ "DisplayName", "Fixture Type" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
		{ "ToolTip", "Property to point to the template parent fixture for details panel purposes" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDMXEntityFixturePatchConstructionParams_Statics::NewProp_FixtureTypeRef = { "FixtureTypeRef", nullptr, (EPropertyFlags)0x0010000000030005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXEntityFixturePatchConstructionParams, FixtureTypeRef), Z_Construct_UScriptStruct_FDMXEntityFixtureTypeRef, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXEntityFixturePatchConstructionParams_Statics::NewProp_FixtureTypeRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXEntityFixturePatchConstructionParams_Statics::NewProp_FixtureTypeRef_MetaData)) }; // 3909030762
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXEntityFixturePatchConstructionParams_Statics::NewProp_ActiveMode_MetaData[] = {
		{ "Category", "Fixture Patch" },
		{ "Comment", "/** The Index of the Mode in the Fixture Type the Patch uses */" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
		{ "ToolTip", "The Index of the Mode in the Fixture Type the Patch uses" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDMXEntityFixturePatchConstructionParams_Statics::NewProp_ActiveMode = { "ActiveMode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXEntityFixturePatchConstructionParams, ActiveMode), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXEntityFixturePatchConstructionParams_Statics::NewProp_ActiveMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXEntityFixturePatchConstructionParams_Statics::NewProp_ActiveMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXEntityFixturePatchConstructionParams_Statics::NewProp_UniverseID_MetaData[] = {
		{ "Category", "Fixture Patch" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The local universe of the patch */" },
		{ "DisplayName", "Universe" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
		{ "ToolTip", "The local universe of the patch" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDMXEntityFixturePatchConstructionParams_Statics::NewProp_UniverseID = { "UniverseID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXEntityFixturePatchConstructionParams, UniverseID), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXEntityFixturePatchConstructionParams_Statics::NewProp_UniverseID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXEntityFixturePatchConstructionParams_Statics::NewProp_UniverseID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXEntityFixturePatchConstructionParams_Statics::NewProp_StartingAddress_MetaData[] = {
		{ "Category", "Fixture Patch" },
		{ "ClampMax", "512" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Starting channel for when auto-assign address is false */" },
		{ "DisplayName", "Starting Address" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
		{ "ToolTip", "Starting channel for when auto-assign address is false" },
		{ "UIMax", "512" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDMXEntityFixturePatchConstructionParams_Statics::NewProp_StartingAddress = { "StartingAddress", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXEntityFixturePatchConstructionParams, StartingAddress), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXEntityFixturePatchConstructionParams_Statics::NewProp_StartingAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXEntityFixturePatchConstructionParams_Statics::NewProp_StartingAddress_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDMXEntityFixturePatchConstructionParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXEntityFixturePatchConstructionParams_Statics::NewProp_FixtureTypeRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXEntityFixturePatchConstructionParams_Statics::NewProp_ActiveMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXEntityFixturePatchConstructionParams_Statics::NewProp_UniverseID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXEntityFixturePatchConstructionParams_Statics::NewProp_StartingAddress,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXEntityFixturePatchConstructionParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
		nullptr,
		&NewStructOps,
		"DMXEntityFixturePatchConstructionParams",
		sizeof(FDMXEntityFixturePatchConstructionParams),
		alignof(FDMXEntityFixturePatchConstructionParams),
		Z_Construct_UScriptStruct_FDMXEntityFixturePatchConstructionParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXEntityFixturePatchConstructionParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXEntityFixturePatchConstructionParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXEntityFixturePatchConstructionParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDMXEntityFixturePatchConstructionParams()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXEntityFixturePatchConstructionParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXEntityFixturePatchConstructionParams.InnerSingleton, Z_Construct_UScriptStruct_FDMXEntityFixturePatchConstructionParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXEntityFixturePatchConstructionParams.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_UDMXEntityFixturePatch_DMXOnFixturePatchReceivedDMXDelegate__DelegateSignature_Statics
	{
		struct DMXEntityFixturePatch_eventDMXOnFixturePatchReceivedDMXDelegate_Parms
		{
			UDMXEntityFixturePatch* FixturePatch;
			FDMXNormalizedAttributeValueMap ValuePerAttribute;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FixturePatch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValuePerAttribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ValuePerAttribute;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UDMXEntityFixturePatch_DMXOnFixturePatchReceivedDMXDelegate__DelegateSignature_Statics::NewProp_FixturePatch = { "FixturePatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventDMXOnFixturePatchReceivedDMXDelegate_Parms, FixturePatch), Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UDMXEntityFixturePatch_DMXOnFixturePatchReceivedDMXDelegate__DelegateSignature_Statics::NewProp_ValuePerAttribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UDMXEntityFixturePatch_DMXOnFixturePatchReceivedDMXDelegate__DelegateSignature_Statics::NewProp_ValuePerAttribute = { "ValuePerAttribute", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventDMXOnFixturePatchReceivedDMXDelegate_Parms, ValuePerAttribute), Z_Construct_UScriptStruct_FDMXNormalizedAttributeValueMap, METADATA_PARAMS(Z_Construct_UDelegateFunction_UDMXEntityFixturePatch_DMXOnFixturePatchReceivedDMXDelegate__DelegateSignature_Statics::NewProp_ValuePerAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDMXEntityFixturePatch_DMXOnFixturePatchReceivedDMXDelegate__DelegateSignature_Statics::NewProp_ValuePerAttribute_MetaData)) }; // 2558012157
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UDMXEntityFixturePatch_DMXOnFixturePatchReceivedDMXDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UDMXEntityFixturePatch_DMXOnFixturePatchReceivedDMXDelegate__DelegateSignature_Statics::NewProp_FixturePatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UDMXEntityFixturePatch_DMXOnFixturePatchReceivedDMXDelegate__DelegateSignature_Statics::NewProp_ValuePerAttribute,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UDMXEntityFixturePatch_DMXOnFixturePatchReceivedDMXDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UDMXEntityFixturePatch_DMXOnFixturePatchReceivedDMXDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXEntityFixturePatch, nullptr, "DMXOnFixturePatchReceivedDMXDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UDMXEntityFixturePatch_DMXOnFixturePatchReceivedDMXDelegate__DelegateSignature_Statics::DMXEntityFixturePatch_eventDMXOnFixturePatchReceivedDMXDelegate_Parms), Z_Construct_UDelegateFunction_UDMXEntityFixturePatch_DMXOnFixturePatchReceivedDMXDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDMXEntityFixturePatch_DMXOnFixturePatchReceivedDMXDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UDMXEntityFixturePatch_DMXOnFixturePatchReceivedDMXDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDMXEntityFixturePatch_DMXOnFixturePatchReceivedDMXDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UDMXEntityFixturePatch_DMXOnFixturePatchReceivedDMXDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UDMXEntityFixturePatch_DMXOnFixturePatchReceivedDMXDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UDMXEntityFixturePatch::FDMXOnFixturePatchReceivedDMXDelegate_DelegateWrapper(const FMulticastScriptDelegate& DMXOnFixturePatchReceivedDMXDelegate, UDMXEntityFixturePatch* FixturePatch, FDMXNormalizedAttributeValueMap const& ValuePerAttribute)
{
	struct DMXEntityFixturePatch_eventDMXOnFixturePatchReceivedDMXDelegate_Parms
	{
		UDMXEntityFixturePatch* FixturePatch;
		FDMXNormalizedAttributeValueMap ValuePerAttribute;
	};
	DMXEntityFixturePatch_eventDMXOnFixturePatchReceivedDMXDelegate_Parms Parms;
	Parms.FixturePatch=FixturePatch;
	Parms.ValuePerAttribute=ValuePerAttribute;
	DMXOnFixturePatchReceivedDMXDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UDMXEntityFixturePatch::execGetAllMatrixCells)
	{
		P_GET_TARRAY_REF(FDMXCell,Z_Param_Out_Cells);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAllMatrixCells(Z_Param_Out_Cells);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXEntityFixturePatch::execGetMatrixCell)
	{
		P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_CellCoordinate);
		P_GET_STRUCT_REF(FDMXCell,Z_Param_Out_Cell);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMatrixCell(Z_Param_Out_CellCoordinate,Z_Param_Out_Cell);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXEntityFixturePatch::execGetCellAttributes)
	{
		P_GET_TARRAY_REF(FDMXAttributeName,Z_Param_Out_CellAttributes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCellAttributes(Z_Param_Out_CellAttributes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXEntityFixturePatch::execGetMatrixProperties)
	{
		P_GET_STRUCT_REF(FDMXFixtureMatrix,Z_Param_Out_MatrixProperties);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMatrixProperties(Z_Param_Out_MatrixProperties);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXEntityFixturePatch::execGetMatrixCellChannelsAbsoluteWithValidation)
	{
		P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_InCellCoordinate);
		P_GET_TMAP_REF(FDMXAttributeName,int32,Z_Param_Out_OutAttributeChannelMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMatrixCellChannelsAbsoluteWithValidation(Z_Param_Out_InCellCoordinate,Z_Param_Out_OutAttributeChannelMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXEntityFixturePatch::execGetMatrixCellChannelsAbsolute)
	{
		P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_CellCoordinate);
		P_GET_TMAP_REF(FDMXAttributeName,int32,Z_Param_Out_AttributeChannelMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMatrixCellChannelsAbsolute(Z_Param_Out_CellCoordinate,Z_Param_Out_AttributeChannelMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXEntityFixturePatch::execGetMatrixCellChannelsRelative)
	{
		P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_CellCoordinate);
		P_GET_TMAP_REF(FDMXAttributeName,int32,Z_Param_Out_AttributeChannelMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMatrixCellChannelsRelative(Z_Param_Out_CellCoordinate,Z_Param_Out_AttributeChannelMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXEntityFixturePatch::execGetNormalizedMatrixCellValues)
	{
		P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_CellCoordinate);
		P_GET_TMAP_REF(FDMXAttributeName,float,Z_Param_Out_NormalizedValuePerAttribute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetNormalizedMatrixCellValues(Z_Param_Out_CellCoordinate,Z_Param_Out_NormalizedValuePerAttribute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXEntityFixturePatch::execGetMatrixCellValues)
	{
		P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_CellCoordinate);
		P_GET_TMAP_REF(FDMXAttributeName,int32,Z_Param_Out_ValuePerAttribute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMatrixCellValues(Z_Param_Out_CellCoordinate,Z_Param_Out_ValuePerAttribute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXEntityFixturePatch::execSendNormalizedMatrixCellValue)
	{
		P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_CellCoordinate);
		P_GET_STRUCT_REF(FDMXAttributeName,Z_Param_Out_Attribute);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RelativeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendNormalizedMatrixCellValue(Z_Param_Out_CellCoordinate,Z_Param_Out_Attribute,Z_Param_RelativeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXEntityFixturePatch::execSendMatrixCellValueWithAttributeMap)
	{
		P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_CellCoordinate);
		P_GET_STRUCT_REF(FDMXAttributeName,Z_Param_Out_Attribute);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_GET_TMAP_REF(FDMXAttributeName,int32,Z_Param_Out_InAttributeNameChannelMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendMatrixCellValueWithAttributeMap(Z_Param_Out_CellCoordinate,Z_Param_Out_Attribute,Z_Param_Value,Z_Param_Out_InAttributeNameChannelMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXEntityFixturePatch::execSendMatrixCellValue)
	{
		P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_CellCoordinate);
		P_GET_STRUCT_REF(FDMXAttributeName,Z_Param_Out_Attribute);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendMatrixCellValue(Z_Param_Out_CellCoordinate,Z_Param_Out_Attribute,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXEntityFixturePatch::execGetNormalizedAttributesValues)
	{
		P_GET_STRUCT_REF(FDMXNormalizedAttributeValueMap,Z_Param_Out_NormalizedAttributesValues);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetNormalizedAttributesValues(Z_Param_Out_NormalizedAttributesValues);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXEntityFixturePatch::execGetAttributesValues)
	{
		P_GET_TMAP_REF(FDMXAttributeName,int32,Z_Param_Out_AttributesValues);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAttributesValues(Z_Param_Out_AttributesValues);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXEntityFixturePatch::execGetNormalizedAttributeValue)
	{
		P_GET_STRUCT(FDMXAttributeName,Z_Param_Attribute);
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetNormalizedAttributeValue(Z_Param_Attribute,Z_Param_Out_bSuccess);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXEntityFixturePatch::execGetAttributeValue)
	{
		P_GET_STRUCT(FDMXAttributeName,Z_Param_Attribute);
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAttributeValue(Z_Param_Attribute,Z_Param_Out_bSuccess);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXEntityFixturePatch::execIsInControllersRange)
	{
		P_GET_TARRAY_REF(UDMXEntityController*,Z_Param_Out_InControllers);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInControllersRange(Z_Param_Out_InControllers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXEntityFixturePatch::execIsInControllerRange)
	{
		P_GET_OBJECT(UDMXEntityController,Z_Param_InController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInControllerRange(Z_Param_InController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXEntityFixturePatch::execGetRelevantControllers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UDMXEntityController*>*)Z_Param__Result=P_THIS->GetRelevantControllers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXEntityFixturePatch::execConvertToValidMap)
	{
		P_GET_TMAP_REF(FDMXAttributeName,int32,Z_Param_Out_FunctionMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FDMXAttributeName,int32>*)Z_Param__Result=P_THIS->ConvertToValidMap(Z_Param_Out_FunctionMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXEntityFixturePatch::execContainsAttribute)
	{
		P_GET_STRUCT(FDMXAttributeName,Z_Param_FunctionAttribute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ContainsAttribute(Z_Param_FunctionAttribute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXEntityFixturePatch::execIsMapValid)
	{
		P_GET_TMAP_REF(FDMXAttributeName,int32,Z_Param_Out_FunctionMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMapValid(Z_Param_Out_FunctionMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXEntityFixturePatch::execConvertAttributeMapToRawMap)
	{
		P_GET_TMAP_REF(FDMXAttributeName,int32,Z_Param_Out_FunctionMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<int32,uint8>*)Z_Param__Result=P_THIS->ConvertAttributeMapToRawMap(Z_Param_Out_FunctionMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXEntityFixturePatch::execConvertRawMapToAttributeMap)
	{
		P_GET_TMAP_REF(int32,uint8,Z_Param_Out_RawMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FDMXAttributeName,int32>*)Z_Param__Result=P_THIS->ConvertRawMapToAttributeMap(Z_Param_Out_RawMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXEntityFixturePatch::execGetAttributeSignalFormats)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FDMXAttributeName,EDMXFixtureSignalFormat>*)Z_Param__Result=P_THIS->GetAttributeSignalFormats();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXEntityFixturePatch::execGetAttributeChannelAssignments)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FDMXAttributeName,int32>*)Z_Param__Result=P_THIS->GetAttributeChannelAssignments();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXEntityFixturePatch::execGetAttributeDefaultMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FDMXAttributeName,int32>*)Z_Param__Result=P_THIS->GetAttributeDefaultMap();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXEntityFixturePatch::execGetAttributeFunctionsMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FDMXAttributeName,FDMXFixtureFunction>*)Z_Param__Result=P_THIS->GetAttributeFunctionsMap();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXEntityFixturePatch::execGetAllAttributesInActiveMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FDMXAttributeName>*)Z_Param__Result=P_THIS->GetAllAttributesInActiveMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXEntityFixturePatch::execGetEndingChannel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetEndingChannel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXEntityFixturePatch::execGetChannelSpan)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetChannelSpan();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXEntityFixturePatch::execGetStartingChannel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetStartingChannel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXEntityFixturePatch::execSetStartingChannel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewStartingChannel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStartingChannel(Z_Param_NewStartingChannel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXEntityFixturePatch::execSetFixtureType)
	{
		P_GET_OBJECT(UDMXEntityFixtureType,Z_Param_NewFixtureType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFixtureType(Z_Param_NewFixtureType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXEntityFixturePatch::execSendDMX)
	{
		P_GET_TMAP(FDMXAttributeName,int32,Z_Param_AttributeMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendDMX(Z_Param_AttributeMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXEntityFixturePatch::execRemoveFixturePatchFromLibrary)
	{
		P_GET_STRUCT(FDMXEntityFixturePatchRef,Z_Param_FixturePatchRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDMXEntityFixturePatch::RemoveFixturePatchFromLibrary(Z_Param_FixturePatchRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXEntityFixturePatch::execCreateFixturePatchInLibrary)
	{
		P_GET_STRUCT(FDMXEntityFixturePatchConstructionParams,Z_Param_ConstructionParams);
		P_GET_PROPERTY(FStrProperty,Z_Param_DesiredName);
		P_GET_UBOOL(Z_Param_bMarkDMXLibraryDirty);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDMXEntityFixturePatch**)Z_Param__Result=UDMXEntityFixturePatch::CreateFixturePatchInLibrary(Z_Param_ConstructionParams,Z_Param_DesiredName,Z_Param_bMarkDMXLibraryDirty);
		P_NATIVE_END;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(UDMXEntityFixturePatch::execGetRemoteUniverse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRemoteUniverse();
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UDMXEntityFixturePatch::StaticRegisterNativesUDMXEntityFixturePatch()
	{
		UClass* Class = UDMXEntityFixturePatch::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ContainsAttribute", &UDMXEntityFixturePatch::execContainsAttribute },
			{ "ConvertAttributeMapToRawMap", &UDMXEntityFixturePatch::execConvertAttributeMapToRawMap },
			{ "ConvertRawMapToAttributeMap", &UDMXEntityFixturePatch::execConvertRawMapToAttributeMap },
			{ "ConvertToValidMap", &UDMXEntityFixturePatch::execConvertToValidMap },
			{ "CreateFixturePatchInLibrary", &UDMXEntityFixturePatch::execCreateFixturePatchInLibrary },
			{ "GetAllAttributesInActiveMode", &UDMXEntityFixturePatch::execGetAllAttributesInActiveMode },
			{ "GetAllMatrixCells", &UDMXEntityFixturePatch::execGetAllMatrixCells },
			{ "GetAttributeChannelAssignments", &UDMXEntityFixturePatch::execGetAttributeChannelAssignments },
			{ "GetAttributeDefaultMap", &UDMXEntityFixturePatch::execGetAttributeDefaultMap },
			{ "GetAttributeFunctionsMap", &UDMXEntityFixturePatch::execGetAttributeFunctionsMap },
			{ "GetAttributeSignalFormats", &UDMXEntityFixturePatch::execGetAttributeSignalFormats },
			{ "GetAttributesValues", &UDMXEntityFixturePatch::execGetAttributesValues },
			{ "GetAttributeValue", &UDMXEntityFixturePatch::execGetAttributeValue },
			{ "GetCellAttributes", &UDMXEntityFixturePatch::execGetCellAttributes },
			{ "GetChannelSpan", &UDMXEntityFixturePatch::execGetChannelSpan },
			{ "GetEndingChannel", &UDMXEntityFixturePatch::execGetEndingChannel },
			{ "GetMatrixCell", &UDMXEntityFixturePatch::execGetMatrixCell },
			{ "GetMatrixCellChannelsAbsolute", &UDMXEntityFixturePatch::execGetMatrixCellChannelsAbsolute },
			{ "GetMatrixCellChannelsAbsoluteWithValidation", &UDMXEntityFixturePatch::execGetMatrixCellChannelsAbsoluteWithValidation },
			{ "GetMatrixCellChannelsRelative", &UDMXEntityFixturePatch::execGetMatrixCellChannelsRelative },
			{ "GetMatrixCellValues", &UDMXEntityFixturePatch::execGetMatrixCellValues },
			{ "GetMatrixProperties", &UDMXEntityFixturePatch::execGetMatrixProperties },
			{ "GetNormalizedAttributesValues", &UDMXEntityFixturePatch::execGetNormalizedAttributesValues },
			{ "GetNormalizedAttributeValue", &UDMXEntityFixturePatch::execGetNormalizedAttributeValue },
			{ "GetNormalizedMatrixCellValues", &UDMXEntityFixturePatch::execGetNormalizedMatrixCellValues },
			{ "GetRelevantControllers", &UDMXEntityFixturePatch::execGetRelevantControllers },
#if WITH_EDITOR
			{ "GetRemoteUniverse", &UDMXEntityFixturePatch::execGetRemoteUniverse },
#endif // WITH_EDITOR
			{ "GetStartingChannel", &UDMXEntityFixturePatch::execGetStartingChannel },
			{ "IsInControllerRange", &UDMXEntityFixturePatch::execIsInControllerRange },
			{ "IsInControllersRange", &UDMXEntityFixturePatch::execIsInControllersRange },
			{ "IsMapValid", &UDMXEntityFixturePatch::execIsMapValid },
			{ "RemoveFixturePatchFromLibrary", &UDMXEntityFixturePatch::execRemoveFixturePatchFromLibrary },
			{ "SendDMX", &UDMXEntityFixturePatch::execSendDMX },
			{ "SendMatrixCellValue", &UDMXEntityFixturePatch::execSendMatrixCellValue },
			{ "SendMatrixCellValueWithAttributeMap", &UDMXEntityFixturePatch::execSendMatrixCellValueWithAttributeMap },
			{ "SendNormalizedMatrixCellValue", &UDMXEntityFixturePatch::execSendNormalizedMatrixCellValue },
			{ "SetFixtureType", &UDMXEntityFixturePatch::execSetFixtureType },
			{ "SetStartingChannel", &UDMXEntityFixturePatch::execSetStartingChannel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDMXEntityFixturePatch_ContainsAttribute_Statics
	{
		struct DMXEntityFixturePatch_eventContainsAttribute_Parms
		{
			FDMXAttributeName FunctionAttribute;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_FunctionAttribute;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_ContainsAttribute_Statics::NewProp_FunctionAttribute = { "FunctionAttribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventContainsAttribute_Parms, FunctionAttribute), Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	void Z_Construct_UFunction_UDMXEntityFixturePatch_ContainsAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DMXEntityFixturePatch_eventContainsAttribute_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_ContainsAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DMXEntityFixturePatch_eventContainsAttribute_Parms), &Z_Construct_UFunction_UDMXEntityFixturePatch_ContainsAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXEntityFixturePatch_ContainsAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_ContainsAttribute_Statics::NewProp_FunctionAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_ContainsAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_ContainsAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX|Fixture Patch" },
		{ "Comment", "/**  Returns true if the fixture patch contains the attribute. */" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
		{ "ToolTip", "Returns true if the fixture patch contains the attribute." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXEntityFixturePatch_ContainsAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXEntityFixturePatch, nullptr, "ContainsAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXEntityFixturePatch_ContainsAttribute_Statics::DMXEntityFixturePatch_eventContainsAttribute_Parms), Z_Construct_UFunction_UDMXEntityFixturePatch_ContainsAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_ContainsAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_ContainsAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_ContainsAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXEntityFixturePatch_ContainsAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXEntityFixturePatch_ContainsAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertAttributeMapToRawMap_Statics
	{
		struct DMXEntityFixturePatch_eventConvertAttributeMapToRawMap_Parms
		{
			TMap<FDMXAttributeName,int32> FunctionMap;
			TMap<int32,uint8> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_FunctionMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FunctionMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_FunctionMap;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertAttributeMapToRawMap_Statics::NewProp_FunctionMap_ValueProp = { "FunctionMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertAttributeMapToRawMap_Statics::NewProp_FunctionMap_Key_KeyProp = { "FunctionMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(nullptr, 0) }; // 2246266977
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertAttributeMapToRawMap_Statics::NewProp_FunctionMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertAttributeMapToRawMap_Statics::NewProp_FunctionMap = { "FunctionMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventConvertAttributeMapToRawMap_Parms, FunctionMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertAttributeMapToRawMap_Statics::NewProp_FunctionMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertAttributeMapToRawMap_Statics::NewProp_FunctionMap_MetaData)) }; // 2246266977
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertAttributeMapToRawMap_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertAttributeMapToRawMap_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertAttributeMapToRawMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventConvertAttributeMapToRawMap_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertAttributeMapToRawMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertAttributeMapToRawMap_Statics::NewProp_FunctionMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertAttributeMapToRawMap_Statics::NewProp_FunctionMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertAttributeMapToRawMap_Statics::NewProp_FunctionMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertAttributeMapToRawMap_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertAttributeMapToRawMap_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertAttributeMapToRawMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertAttributeMapToRawMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX|Fixture Patch" },
		{ "Comment", "/**\n\x09 * Returns a map of function channels and their values.\n\x09 * Functions outside the Active Mode's channel span range are ignored.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
		{ "ToolTip", "Returns a map of function channels and their values.\nFunctions outside the Active Mode's channel span range are ignored." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertAttributeMapToRawMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXEntityFixturePatch, nullptr, "ConvertAttributeMapToRawMap", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertAttributeMapToRawMap_Statics::DMXEntityFixturePatch_eventConvertAttributeMapToRawMap_Parms), Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertAttributeMapToRawMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertAttributeMapToRawMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertAttributeMapToRawMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertAttributeMapToRawMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertAttributeMapToRawMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertAttributeMapToRawMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertRawMapToAttributeMap_Statics
	{
		struct DMXEntityFixturePatch_eventConvertRawMapToAttributeMap_Parms
		{
			TMap<int32,uint8> RawMap;
			TMap<FDMXAttributeName,int32> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_RawMap_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RawMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RawMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_RawMap;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertRawMapToAttributeMap_Statics::NewProp_RawMap_ValueProp = { "RawMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertRawMapToAttributeMap_Statics::NewProp_RawMap_Key_KeyProp = { "RawMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertRawMapToAttributeMap_Statics::NewProp_RawMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertRawMapToAttributeMap_Statics::NewProp_RawMap = { "RawMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventConvertRawMapToAttributeMap_Parms, RawMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertRawMapToAttributeMap_Statics::NewProp_RawMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertRawMapToAttributeMap_Statics::NewProp_RawMap_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertRawMapToAttributeMap_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertRawMapToAttributeMap_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertRawMapToAttributeMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventConvertRawMapToAttributeMap_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertRawMapToAttributeMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertRawMapToAttributeMap_Statics::NewProp_RawMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertRawMapToAttributeMap_Statics::NewProp_RawMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertRawMapToAttributeMap_Statics::NewProp_RawMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertRawMapToAttributeMap_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertRawMapToAttributeMap_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertRawMapToAttributeMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertRawMapToAttributeMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX|Fixture Patch" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Deprecated 4.27. Please use DMXSubsystem's Bytes to Int instead, then create a map from that with Attribute Names ." },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertRawMapToAttributeMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXEntityFixturePatch, nullptr, "ConvertRawMapToAttributeMap", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertRawMapToAttributeMap_Statics::DMXEntityFixturePatch_eventConvertRawMapToAttributeMap_Parms), Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertRawMapToAttributeMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertRawMapToAttributeMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertRawMapToAttributeMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertRawMapToAttributeMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertRawMapToAttributeMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertRawMapToAttributeMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertToValidMap_Statics
	{
		struct DMXEntityFixturePatch_eventConvertToValidMap_Parms
		{
			TMap<FDMXAttributeName,int32> FunctionMap;
			TMap<FDMXAttributeName,int32> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_FunctionMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FunctionMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_FunctionMap;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertToValidMap_Statics::NewProp_FunctionMap_ValueProp = { "FunctionMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertToValidMap_Statics::NewProp_FunctionMap_Key_KeyProp = { "FunctionMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(nullptr, 0) }; // 2246266977
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertToValidMap_Statics::NewProp_FunctionMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertToValidMap_Statics::NewProp_FunctionMap = { "FunctionMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventConvertToValidMap_Parms, FunctionMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertToValidMap_Statics::NewProp_FunctionMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertToValidMap_Statics::NewProp_FunctionMap_MetaData)) }; // 2246266977
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertToValidMap_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertToValidMap_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertToValidMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventConvertToValidMap_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertToValidMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertToValidMap_Statics::NewProp_FunctionMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertToValidMap_Statics::NewProp_FunctionMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertToValidMap_Statics::NewProp_FunctionMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertToValidMap_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertToValidMap_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertToValidMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertToValidMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX|Fixture Patch" },
		{ "Comment", "/**  Returns a map that only contains attributes used this patch. */" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
		{ "ToolTip", "Returns a map that only contains attributes used this patch." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertToValidMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXEntityFixturePatch, nullptr, "ConvertToValidMap", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertToValidMap_Statics::DMXEntityFixturePatch_eventConvertToValidMap_Parms), Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertToValidMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertToValidMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertToValidMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertToValidMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertToValidMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertToValidMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXEntityFixturePatch_CreateFixturePatchInLibrary_Statics
	{
		struct DMXEntityFixturePatch_eventCreateFixturePatchInLibrary_Parms
		{
			FDMXEntityFixturePatchConstructionParams ConstructionParams;
			FString DesiredName;
			bool bMarkDMXLibraryDirty;
			UDMXEntityFixturePatch* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConstructionParams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DesiredName;
		static void NewProp_bMarkDMXLibraryDirty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMarkDMXLibraryDirty;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_CreateFixturePatchInLibrary_Statics::NewProp_ConstructionParams = { "ConstructionParams", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventCreateFixturePatchInLibrary_Parms, ConstructionParams), Z_Construct_UScriptStruct_FDMXEntityFixturePatchConstructionParams, METADATA_PARAMS(nullptr, 0) }; // 1493902903
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_CreateFixturePatchInLibrary_Statics::NewProp_DesiredName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_CreateFixturePatchInLibrary_Statics::NewProp_DesiredName = { "DesiredName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventCreateFixturePatchInLibrary_Parms, DesiredName), METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_CreateFixturePatchInLibrary_Statics::NewProp_DesiredName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_CreateFixturePatchInLibrary_Statics::NewProp_DesiredName_MetaData)) };
	void Z_Construct_UFunction_UDMXEntityFixturePatch_CreateFixturePatchInLibrary_Statics::NewProp_bMarkDMXLibraryDirty_SetBit(void* Obj)
	{
		((DMXEntityFixturePatch_eventCreateFixturePatchInLibrary_Parms*)Obj)->bMarkDMXLibraryDirty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_CreateFixturePatchInLibrary_Statics::NewProp_bMarkDMXLibraryDirty = { "bMarkDMXLibraryDirty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DMXEntityFixturePatch_eventCreateFixturePatchInLibrary_Parms), &Z_Construct_UFunction_UDMXEntityFixturePatch_CreateFixturePatchInLibrary_Statics::NewProp_bMarkDMXLibraryDirty_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_CreateFixturePatchInLibrary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventCreateFixturePatchInLibrary_Parms, ReturnValue), Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXEntityFixturePatch_CreateFixturePatchInLibrary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_CreateFixturePatchInLibrary_Statics::NewProp_ConstructionParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_CreateFixturePatchInLibrary_Statics::NewProp_DesiredName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_CreateFixturePatchInLibrary_Statics::NewProp_bMarkDMXLibraryDirty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_CreateFixturePatchInLibrary_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_CreateFixturePatchInLibrary_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/** Creates a new Fixture Patch in the DMX Library using the specified Fixture Type */" },
		{ "CPP_Default_bMarkDMXLibraryDirty", "true" },
		{ "CPP_Default_DesiredName", "" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
		{ "ToolTip", "Creates a new Fixture Patch in the DMX Library using the specified Fixture Type" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXEntityFixturePatch_CreateFixturePatchInLibrary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXEntityFixturePatch, nullptr, "CreateFixturePatchInLibrary", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXEntityFixturePatch_CreateFixturePatchInLibrary_Statics::DMXEntityFixturePatch_eventCreateFixturePatchInLibrary_Parms), Z_Construct_UFunction_UDMXEntityFixturePatch_CreateFixturePatchInLibrary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_CreateFixturePatchInLibrary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_CreateFixturePatchInLibrary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_CreateFixturePatchInLibrary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXEntityFixturePatch_CreateFixturePatchInLibrary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXEntityFixturePatch_CreateFixturePatchInLibrary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXEntityFixturePatch_GetAllAttributesInActiveMode_Statics
	{
		struct DMXEntityFixturePatch_eventGetAllAttributesInActiveMode_Parms
		{
			TArray<FDMXAttributeName> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetAllAttributesInActiveMode_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetAllAttributesInActiveMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventGetAllAttributesInActiveMode_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXEntityFixturePatch_GetAllAttributesInActiveMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetAllAttributesInActiveMode_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetAllAttributesInActiveMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_GetAllAttributesInActiveMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX|Fixture Patch" },
		{ "Comment", "/**\n\x09 * Returns an array of valid attributes for the currently active mode.\n\x09 * Attributes outside the Active Mode's channel span range are ignored.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
		{ "ToolTip", "Returns an array of valid attributes for the currently active mode.\nAttributes outside the Active Mode's channel span range are ignored." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetAllAttributesInActiveMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXEntityFixturePatch, nullptr, "GetAllAttributesInActiveMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXEntityFixturePatch_GetAllAttributesInActiveMode_Statics::DMXEntityFixturePatch_eventGetAllAttributesInActiveMode_Parms), Z_Construct_UFunction_UDMXEntityFixturePatch_GetAllAttributesInActiveMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetAllAttributesInActiveMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_GetAllAttributesInActiveMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetAllAttributesInActiveMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXEntityFixturePatch_GetAllAttributesInActiveMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXEntityFixturePatch_GetAllAttributesInActiveMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXEntityFixturePatch_GetAllMatrixCells_Statics
	{
		struct DMXEntityFixturePatch_eventGetAllMatrixCells_Parms
		{
			TArray<FDMXCell> Cells;
			bool ReturnValue;
		};
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetAllMatrixCells_Statics::NewProp_Cells_Inner = { "Cells", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXCell, METADATA_PARAMS(nullptr, 0) }; // 2201996212
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetAllMatrixCells_Statics::NewProp_Cells = { "Cells", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventGetAllMatrixCells_Parms, Cells), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2201996212
	void Z_Construct_UFunction_UDMXEntityFixturePatch_GetAllMatrixCells_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DMXEntityFixturePatch_eventGetAllMatrixCells_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetAllMatrixCells_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DMXEntityFixturePatch_eventGetAllMatrixCells_Parms), &Z_Construct_UFunction_UDMXEntityFixturePatch_GetAllMatrixCells_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXEntityFixturePatch_GetAllMatrixCells_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetAllMatrixCells_Statics::NewProp_Cells_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetAllMatrixCells_Statics::NewProp_Cells,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetAllMatrixCells_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_GetAllMatrixCells_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX|Fixture Patch" },
		{ "Comment", "/**  Gets all matrix cells */" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
		{ "ToolTip", "Gets all matrix cells" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetAllMatrixCells_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXEntityFixturePatch, nullptr, "GetAllMatrixCells", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXEntityFixturePatch_GetAllMatrixCells_Statics::DMXEntityFixturePatch_eventGetAllMatrixCells_Parms), Z_Construct_UFunction_UDMXEntityFixturePatch_GetAllMatrixCells_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetAllMatrixCells_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_GetAllMatrixCells_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetAllMatrixCells_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXEntityFixturePatch_GetAllMatrixCells()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXEntityFixturePatch_GetAllMatrixCells_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeChannelAssignments_Statics
	{
		struct DMXEntityFixturePatch_eventGetAttributeChannelAssignments_Parms
		{
			TMap<FDMXAttributeName,int32> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeChannelAssignments_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeChannelAssignments_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeChannelAssignments_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventGetAttributeChannelAssignments_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeChannelAssignments_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeChannelAssignments_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeChannelAssignments_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeChannelAssignments_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeChannelAssignments_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX|Fixture Patch" },
		{ "Comment", "/** Returns a map of Attributes and their assigned channels */" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
		{ "ToolTip", "Returns a map of Attributes and their assigned channels" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeChannelAssignments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXEntityFixturePatch, nullptr, "GetAttributeChannelAssignments", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeChannelAssignments_Statics::DMXEntityFixturePatch_eventGetAttributeChannelAssignments_Parms), Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeChannelAssignments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeChannelAssignments_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeChannelAssignments_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeChannelAssignments_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeChannelAssignments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeChannelAssignments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeDefaultMap_Statics
	{
		struct DMXEntityFixturePatch_eventGetAttributeDefaultMap_Parms
		{
			TMap<FDMXAttributeName,int32> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeDefaultMap_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeDefaultMap_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeDefaultMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventGetAttributeDefaultMap_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeDefaultMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeDefaultMap_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeDefaultMap_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeDefaultMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeDefaultMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX|Fixture Patch" },
		{ "Comment", "/**\n\x09 * Returns a map of function names and default values.\n\x09 * Functions outside the Active Mode's channel span range are ignored.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
		{ "ToolTip", "Returns a map of function names and default values.\nFunctions outside the Active Mode's channel span range are ignored." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeDefaultMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXEntityFixturePatch, nullptr, "GetAttributeDefaultMap", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeDefaultMap_Statics::DMXEntityFixturePatch_eventGetAttributeDefaultMap_Parms), Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeDefaultMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeDefaultMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeDefaultMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeDefaultMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeDefaultMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeDefaultMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeFunctionsMap_Statics
	{
		struct DMXEntityFixturePatch_eventGetAttributeFunctionsMap_Parms
		{
			TMap<FDMXAttributeName,FDMXFixtureFunction> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeFunctionsMap_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FDMXFixtureFunction, METADATA_PARAMS(nullptr, 0) }; // 1606425658
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeFunctionsMap_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeFunctionsMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventGetAttributeFunctionsMap_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2246266977 1606425658
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeFunctionsMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeFunctionsMap_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeFunctionsMap_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeFunctionsMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeFunctionsMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX|Fixture Patch" },
		{ "Comment", "/**\n\x09 * Returns a map of attributes and function names.\n\x09 * Attributes outside the Active Mode's channel span range are ignored.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
		{ "ToolTip", "Returns a map of attributes and function names.\nAttributes outside the Active Mode's channel span range are ignored." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeFunctionsMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXEntityFixturePatch, nullptr, "GetAttributeFunctionsMap", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeFunctionsMap_Statics::DMXEntityFixturePatch_eventGetAttributeFunctionsMap_Parms), Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeFunctionsMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeFunctionsMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeFunctionsMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeFunctionsMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeFunctionsMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeFunctionsMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeSignalFormats_Statics
	{
		struct DMXEntityFixturePatch_eventGetAttributeSignalFormats_Parms
		{
			TMap<FDMXAttributeName,EDMXFixtureSignalFormat> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_ValueProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeSignalFormats_Statics::NewProp_ReturnValue_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeSignalFormats_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UEnum_DMXProtocol_EDMXFixtureSignalFormat, METADATA_PARAMS(nullptr, 0) }; // 455975797
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeSignalFormats_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeSignalFormats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventGetAttributeSignalFormats_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2246266977 455975797
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeSignalFormats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeSignalFormats_Statics::NewProp_ReturnValue_ValueProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeSignalFormats_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeSignalFormats_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeSignalFormats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeSignalFormats_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX|Fixture Patch" },
		{ "Comment", "/**\n\x09 * Returns a map of function names and their Data Types.\n\x09 * Functions outside the Active Mode's channel span range are ignored.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
		{ "ToolTip", "Returns a map of function names and their Data Types.\nFunctions outside the Active Mode's channel span range are ignored." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeSignalFormats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXEntityFixturePatch, nullptr, "GetAttributeSignalFormats", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeSignalFormats_Statics::DMXEntityFixturePatch_eventGetAttributeSignalFormats_Parms), Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeSignalFormats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeSignalFormats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeSignalFormats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeSignalFormats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeSignalFormats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeSignalFormats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributesValues_Statics
	{
		struct DMXEntityFixturePatch_eventGetAttributesValues_Parms
		{
			TMap<FDMXAttributeName,int32> AttributesValues;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttributesValues_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributesValues_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_AttributesValues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributesValues_Statics::NewProp_AttributesValues_ValueProp = { "AttributesValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributesValues_Statics::NewProp_AttributesValues_Key_KeyProp = { "AttributesValues_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributesValues_Statics::NewProp_AttributesValues = { "AttributesValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventGetAttributesValues_Parms, AttributesValues), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributesValues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributesValues_Statics::NewProp_AttributesValues_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributesValues_Statics::NewProp_AttributesValues_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributesValues_Statics::NewProp_AttributesValues,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributesValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX|Fixture Patch" },
		{ "Comment", "/**\n\x09 * Returns the value of each attribute, or zero if no value was ever received.\n\x09 *\n\x09 * @param AttributesValues\x09Out: Resulting map of Attributes with their values\n\x09 */" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
		{ "ToolTip", "Returns the value of each attribute, or zero if no value was ever received.\n\n@param AttributesValues      Out: Resulting map of Attributes with their values" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributesValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXEntityFixturePatch, nullptr, "GetAttributesValues", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributesValues_Statics::DMXEntityFixturePatch_eventGetAttributesValues_Parms), Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributesValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributesValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributesValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributesValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributesValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributesValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeValue_Statics
	{
		struct DMXEntityFixturePatch_eventGetAttributeValue_Parms
		{
			FDMXAttributeName Attribute;
			bool bSuccess;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeValue_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventGetAttributeValue_Parms, Attribute), Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	void Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeValue_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((DMXEntityFixturePatch_eventGetAttributeValue_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeValue_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DMXEntityFixturePatch_eventGetAttributeValue_Parms), &Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeValue_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventGetAttributeValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeValue_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeValue_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX|Fixture Patch" },
		{ "Comment", "/**\n\x09 * Retrieves the value of an Attribute. Will fail and return 0 if the Attribute doesn't exist.\n\x09 *\n\x09 * @param Attribute\x09The Attribute to try to get the value from.\n\x09 * @param bSuccess\x09Whether the Attribute was found in this Fixture Patch\n\x09 * @return\x09\x09\x09The value of the Function mapped to the selected Attribute, if found.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
		{ "ToolTip", "Retrieves the value of an Attribute. Will fail and return 0 if the Attribute doesn't exist.\n\n@param Attribute     The Attribute to try to get the value from.\n@param bSuccess      Whether the Attribute was found in this Fixture Patch\n@return                      The value of the Function mapped to the selected Attribute, if found." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXEntityFixturePatch, nullptr, "GetAttributeValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeValue_Statics::DMXEntityFixturePatch_eventGetAttributeValue_Parms), Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXEntityFixturePatch_GetCellAttributes_Statics
	{
		struct DMXEntityFixturePatch_eventGetCellAttributes_Parms
		{
			TArray<FDMXAttributeName> CellAttributes;
			bool ReturnValue;
		};
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetCellAttributes_Statics::NewProp_CellAttributes_Inner = { "CellAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetCellAttributes_Statics::NewProp_CellAttributes = { "CellAttributes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventGetCellAttributes_Parms, CellAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	void Z_Construct_UFunction_UDMXEntityFixturePatch_GetCellAttributes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DMXEntityFixturePatch_eventGetCellAttributes_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetCellAttributes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DMXEntityFixturePatch_eventGetCellAttributes_Parms), &Z_Construct_UFunction_UDMXEntityFixturePatch_GetCellAttributes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXEntityFixturePatch_GetCellAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetCellAttributes_Statics::NewProp_CellAttributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetCellAttributes_Statics::NewProp_CellAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetCellAttributes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_GetCellAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX|Fixture Patch" },
		{ "Comment", "/**  Gets all attributes names of a cell */" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
		{ "ToolTip", "Gets all attributes names of a cell" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetCellAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXEntityFixturePatch, nullptr, "GetCellAttributes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXEntityFixturePatch_GetCellAttributes_Statics::DMXEntityFixturePatch_eventGetCellAttributes_Parms), Z_Construct_UFunction_UDMXEntityFixturePatch_GetCellAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetCellAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_GetCellAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetCellAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXEntityFixturePatch_GetCellAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXEntityFixturePatch_GetCellAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXEntityFixturePatch_GetChannelSpan_Statics
	{
		struct DMXEntityFixturePatch_eventGetChannelSpan_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetChannelSpan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventGetChannelSpan_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXEntityFixturePatch_GetChannelSpan_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetChannelSpan_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_GetChannelSpan_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX|Fixture Patch" },
		{ "Comment", "/** Returns the number of channels this Patch occupies with the Fixture functions from its Active Mode or 0 if the patch has no valid Active Mode */" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
		{ "ToolTip", "Returns the number of channels this Patch occupies with the Fixture functions from its Active Mode or 0 if the patch has no valid Active Mode" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetChannelSpan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXEntityFixturePatch, nullptr, "GetChannelSpan", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXEntityFixturePatch_GetChannelSpan_Statics::DMXEntityFixturePatch_eventGetChannelSpan_Parms), Z_Construct_UFunction_UDMXEntityFixturePatch_GetChannelSpan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetChannelSpan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_GetChannelSpan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetChannelSpan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXEntityFixturePatch_GetChannelSpan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXEntityFixturePatch_GetChannelSpan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXEntityFixturePatch_GetEndingChannel_Statics
	{
		struct DMXEntityFixturePatch_eventGetEndingChannel_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetEndingChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventGetEndingChannel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXEntityFixturePatch_GetEndingChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetEndingChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_GetEndingChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX|Fixture Patch" },
		{ "Comment", "/** Returns the last channel of the patch */" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
		{ "ToolTip", "Returns the last channel of the patch" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetEndingChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXEntityFixturePatch, nullptr, "GetEndingChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXEntityFixturePatch_GetEndingChannel_Statics::DMXEntityFixturePatch_eventGetEndingChannel_Parms), Z_Construct_UFunction_UDMXEntityFixturePatch_GetEndingChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetEndingChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_GetEndingChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetEndingChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXEntityFixturePatch_GetEndingChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXEntityFixturePatch_GetEndingChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCell_Statics
	{
		struct DMXEntityFixturePatch_eventGetMatrixCell_Parms
		{
			FIntPoint CellCoordinate;
			FDMXCell Cell;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CellCoordinate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CellCoordinate;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Cell;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCell_Statics::NewProp_CellCoordinate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCell_Statics::NewProp_CellCoordinate = { "CellCoordinate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventGetMatrixCell_Parms, CellCoordinate), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCell_Statics::NewProp_CellCoordinate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCell_Statics::NewProp_CellCoordinate_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCell_Statics::NewProp_Cell = { "Cell", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventGetMatrixCell_Parms, Cell), Z_Construct_UScriptStruct_FDMXCell, METADATA_PARAMS(nullptr, 0) }; // 2201996212
	void Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCell_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DMXEntityFixturePatch_eventGetMatrixCell_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCell_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DMXEntityFixturePatch_eventGetMatrixCell_Parms), &Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCell_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCell_Statics::NewProp_CellCoordinate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCell_Statics::NewProp_Cell,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCell_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCell_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX|Fixture Patch" },
		{ "Comment", "/* Cell coordinate X/Y */" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
		{ "ToolTip", "Cell coordinate X/Y" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXEntityFixturePatch, nullptr, "GetMatrixCell", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCell_Statics::DMXEntityFixturePatch_eventGetMatrixCell_Parms), Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCell_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCell_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCell_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCell()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCell_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsolute_Statics
	{
		struct DMXEntityFixturePatch_eventGetMatrixCellChannelsAbsolute_Parms
		{
			FIntPoint CellCoordinate;
			TMap<FDMXAttributeName,int32> AttributeChannelMap;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CellCoordinate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CellCoordinate;
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsolute_Statics::NewProp_CellCoordinate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsolute_Statics::NewProp_CellCoordinate = { "CellCoordinate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventGetMatrixCellChannelsAbsolute_Parms, CellCoordinate), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsolute_Statics::NewProp_CellCoordinate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsolute_Statics::NewProp_CellCoordinate_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsolute_Statics::NewProp_AttributeChannelMap_ValueProp = { "AttributeChannelMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsolute_Statics::NewProp_AttributeChannelMap_Key_KeyProp = { "AttributeChannelMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsolute_Statics::NewProp_AttributeChannelMap = { "AttributeChannelMap", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventGetMatrixCellChannelsAbsolute_Parms, AttributeChannelMap), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	void Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsolute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DMXEntityFixturePatch_eventGetMatrixCellChannelsAbsolute_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsolute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DMXEntityFixturePatch_eventGetMatrixCellChannelsAbsolute_Parms), &Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsolute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsolute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsolute_Statics::NewProp_CellCoordinate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsolute_Statics::NewProp_AttributeChannelMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsolute_Statics::NewProp_AttributeChannelMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsolute_Statics::NewProp_AttributeChannelMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsolute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsolute_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX|Fixture Patch" },
		{ "Comment", "/* Cell coordinate X/Y */" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
		{ "ToolTip", "Cell coordinate X/Y" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsolute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXEntityFixturePatch, nullptr, "GetMatrixCellChannelsAbsolute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsolute_Statics::DMXEntityFixturePatch_eventGetMatrixCellChannelsAbsolute_Parms), Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsolute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsolute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsolute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsolute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsolute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsolute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsoluteWithValidation_Statics
	{
		struct DMXEntityFixturePatch_eventGetMatrixCellChannelsAbsoluteWithValidation_Parms
		{
			FIntPoint InCellCoordinate;
			TMap<FDMXAttributeName,int32> OutAttributeChannelMap;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCellCoordinate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InCellCoordinate;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutAttributeChannelMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutAttributeChannelMap_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_OutAttributeChannelMap;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsoluteWithValidation_Statics::NewProp_InCellCoordinate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsoluteWithValidation_Statics::NewProp_InCellCoordinate = { "InCellCoordinate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventGetMatrixCellChannelsAbsoluteWithValidation_Parms, InCellCoordinate), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsoluteWithValidation_Statics::NewProp_InCellCoordinate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsoluteWithValidation_Statics::NewProp_InCellCoordinate_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsoluteWithValidation_Statics::NewProp_OutAttributeChannelMap_ValueProp = { "OutAttributeChannelMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsoluteWithValidation_Statics::NewProp_OutAttributeChannelMap_Key_KeyProp = { "OutAttributeChannelMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsoluteWithValidation_Statics::NewProp_OutAttributeChannelMap = { "OutAttributeChannelMap", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventGetMatrixCellChannelsAbsoluteWithValidation_Parms, OutAttributeChannelMap), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	void Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsoluteWithValidation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DMXEntityFixturePatch_eventGetMatrixCellChannelsAbsoluteWithValidation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsoluteWithValidation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DMXEntityFixturePatch_eventGetMatrixCellChannelsAbsoluteWithValidation_Parms), &Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsoluteWithValidation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsoluteWithValidation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsoluteWithValidation_Statics::NewProp_InCellCoordinate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsoluteWithValidation_Statics::NewProp_OutAttributeChannelMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsoluteWithValidation_Statics::NewProp_OutAttributeChannelMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsoluteWithValidation_Statics::NewProp_OutAttributeChannelMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsoluteWithValidation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsoluteWithValidation_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX|Fixture Patch" },
		{ "Comment", "/* Cell coordinate X/Y */" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
		{ "ToolTip", "Cell coordinate X/Y" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsoluteWithValidation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXEntityFixturePatch, nullptr, "GetMatrixCellChannelsAbsoluteWithValidation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsoluteWithValidation_Statics::DMXEntityFixturePatch_eventGetMatrixCellChannelsAbsoluteWithValidation_Parms), Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsoluteWithValidation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsoluteWithValidation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsoluteWithValidation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsoluteWithValidation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsoluteWithValidation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsoluteWithValidation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsRelative_Statics
	{
		struct DMXEntityFixturePatch_eventGetMatrixCellChannelsRelative_Parms
		{
			FIntPoint CellCoordinate;
			TMap<FDMXAttributeName,int32> AttributeChannelMap;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CellCoordinate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CellCoordinate;
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsRelative_Statics::NewProp_CellCoordinate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsRelative_Statics::NewProp_CellCoordinate = { "CellCoordinate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventGetMatrixCellChannelsRelative_Parms, CellCoordinate), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsRelative_Statics::NewProp_CellCoordinate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsRelative_Statics::NewProp_CellCoordinate_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsRelative_Statics::NewProp_AttributeChannelMap_ValueProp = { "AttributeChannelMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsRelative_Statics::NewProp_AttributeChannelMap_Key_KeyProp = { "AttributeChannelMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsRelative_Statics::NewProp_AttributeChannelMap = { "AttributeChannelMap", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventGetMatrixCellChannelsRelative_Parms, AttributeChannelMap), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	void Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsRelative_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DMXEntityFixturePatch_eventGetMatrixCellChannelsRelative_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsRelative_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DMXEntityFixturePatch_eventGetMatrixCellChannelsRelative_Parms), &Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsRelative_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsRelative_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsRelative_Statics::NewProp_CellCoordinate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsRelative_Statics::NewProp_AttributeChannelMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsRelative_Statics::NewProp_AttributeChannelMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsRelative_Statics::NewProp_AttributeChannelMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsRelative_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsRelative_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX|Fixture Patch" },
		{ "Comment", "/* Cell coordinate X/Y */" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
		{ "ToolTip", "Cell coordinate X/Y" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsRelative_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXEntityFixturePatch, nullptr, "GetMatrixCellChannelsRelative", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsRelative_Statics::DMXEntityFixturePatch_eventGetMatrixCellChannelsRelative_Parms), Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsRelative_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsRelative_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsRelative_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsRelative_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsRelative()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsRelative_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellValues_Statics
	{
		struct DMXEntityFixturePatch_eventGetMatrixCellValues_Parms
		{
			FIntPoint CellCoordinate;
			TMap<FDMXAttributeName,int32> ValuePerAttribute;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CellCoordinate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CellCoordinate;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ValuePerAttribute_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ValuePerAttribute_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ValuePerAttribute;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellValues_Statics::NewProp_CellCoordinate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellValues_Statics::NewProp_CellCoordinate = { "CellCoordinate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventGetMatrixCellValues_Parms, CellCoordinate), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellValues_Statics::NewProp_CellCoordinate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellValues_Statics::NewProp_CellCoordinate_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellValues_Statics::NewProp_ValuePerAttribute_ValueProp = { "ValuePerAttribute", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellValues_Statics::NewProp_ValuePerAttribute_Key_KeyProp = { "ValuePerAttribute_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellValues_Statics::NewProp_ValuePerAttribute = { "ValuePerAttribute", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventGetMatrixCellValues_Parms, ValuePerAttribute), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	void Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellValues_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DMXEntityFixturePatch_eventGetMatrixCellValues_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellValues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DMXEntityFixturePatch_eventGetMatrixCellValues_Parms), &Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellValues_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellValues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellValues_Statics::NewProp_CellCoordinate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellValues_Statics::NewProp_ValuePerAttribute_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellValues_Statics::NewProp_ValuePerAttribute_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellValues_Statics::NewProp_ValuePerAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellValues_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX|Fixture Patch" },
		{ "Comment", "/* Cell coordinate X/Y */" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
		{ "ToolTip", "Cell coordinate X/Y" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXEntityFixturePatch, nullptr, "GetMatrixCellValues", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellValues_Statics::DMXEntityFixturePatch_eventGetMatrixCellValues_Parms), Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixProperties_Statics
	{
		struct DMXEntityFixturePatch_eventGetMatrixProperties_Parms
		{
			FDMXFixtureMatrix MatrixProperties;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_MatrixProperties;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixProperties_Statics::NewProp_MatrixProperties = { "MatrixProperties", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventGetMatrixProperties_Parms, MatrixProperties), Z_Construct_UScriptStruct_FDMXFixtureMatrix, METADATA_PARAMS(nullptr, 0) }; // 1203479243
	void Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixProperties_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DMXEntityFixturePatch_eventGetMatrixProperties_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixProperties_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DMXEntityFixturePatch_eventGetMatrixProperties_Parms), &Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixProperties_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixProperties_Statics::NewProp_MatrixProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixProperties_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX|Fixture Patch" },
		{ "Comment", "/**  Gets the Matrix Fixture properties, returns false if the patch is not using a matrix fixture */" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
		{ "ToolTip", "Gets the Matrix Fixture properties, returns false if the patch is not using a matrix fixture" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXEntityFixturePatch, nullptr, "GetMatrixProperties", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixProperties_Statics::DMXEntityFixturePatch_eventGetMatrixProperties_Parms), Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixProperties_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedAttributesValues_Statics
	{
		struct DMXEntityFixturePatch_eventGetNormalizedAttributesValues_Parms
		{
			FDMXNormalizedAttributeValueMap NormalizedAttributesValues;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalizedAttributesValues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedAttributesValues_Statics::NewProp_NormalizedAttributesValues = { "NormalizedAttributesValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventGetNormalizedAttributesValues_Parms, NormalizedAttributesValues), Z_Construct_UScriptStruct_FDMXNormalizedAttributeValueMap, METADATA_PARAMS(nullptr, 0) }; // 2558012157
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedAttributesValues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedAttributesValues_Statics::NewProp_NormalizedAttributesValues,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedAttributesValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX|Fixture Patch" },
		{ "Comment", "/**\n\x09 * Returns the normalized value of each attribute, or zero if no value was ever received.\n\x09 *\n\x09 * @param AttributesValues\x09Out: Resulting map of Attributes with their normalized values\n\x09 */" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
		{ "ToolTip", "Returns the normalized value of each attribute, or zero if no value was ever received.\n\n@param AttributesValues      Out: Resulting map of Attributes with their normalized values" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedAttributesValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXEntityFixturePatch, nullptr, "GetNormalizedAttributesValues", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedAttributesValues_Statics::DMXEntityFixturePatch_eventGetNormalizedAttributesValues_Parms), Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedAttributesValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedAttributesValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedAttributesValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedAttributesValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedAttributesValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedAttributesValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedAttributeValue_Statics
	{
		struct DMXEntityFixturePatch_eventGetNormalizedAttributeValue_Parms
		{
			FDMXAttributeName Attribute;
			bool bSuccess;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedAttributeValue_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventGetNormalizedAttributeValue_Parms, Attribute), Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	void Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedAttributeValue_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((DMXEntityFixturePatch_eventGetNormalizedAttributeValue_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedAttributeValue_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DMXEntityFixturePatch_eventGetNormalizedAttributeValue_Parms), &Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedAttributeValue_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedAttributeValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventGetNormalizedAttributeValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedAttributeValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedAttributeValue_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedAttributeValue_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedAttributeValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedAttributeValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX|Fixture Patch" },
		{ "Comment", "/**\n\x09 * Retrieves the normalized value of an Attribute. Will fail and return 0 if the Attribute doesn't exist.\n\x09 *\n\x09 * @param Attribute\x09The Attribute to try to get the value from.\n\x09 * @param bSuccess\x09Whether the Attribute was found in this Fixture Patch\n\x09 * @return\x09\x09\x09The value of the Function mapped to the selected Attribute, if found.\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Deprecated 4.26. Use GetNormalizedAttributeValue instead. Note, new method returns normalized values!" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
		{ "ToolTip", "Retrieves the normalized value of an Attribute. Will fail and return 0 if the Attribute doesn't exist.\n\n@param Attribute     The Attribute to try to get the value from.\n@param bSuccess      Whether the Attribute was found in this Fixture Patch\n@return                      The value of the Function mapped to the selected Attribute, if found." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedAttributeValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXEntityFixturePatch, nullptr, "GetNormalizedAttributeValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedAttributeValue_Statics::DMXEntityFixturePatch_eventGetNormalizedAttributeValue_Parms), Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedAttributeValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedAttributeValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedAttributeValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedAttributeValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedAttributeValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedAttributeValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedMatrixCellValues_Statics
	{
		struct DMXEntityFixturePatch_eventGetNormalizedMatrixCellValues_Parms
		{
			FIntPoint CellCoordinate;
			TMap<FDMXAttributeName,float> NormalizedValuePerAttribute;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CellCoordinate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CellCoordinate;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizedValuePerAttribute_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalizedValuePerAttribute_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_NormalizedValuePerAttribute;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedMatrixCellValues_Statics::NewProp_CellCoordinate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedMatrixCellValues_Statics::NewProp_CellCoordinate = { "CellCoordinate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventGetNormalizedMatrixCellValues_Parms, CellCoordinate), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedMatrixCellValues_Statics::NewProp_CellCoordinate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedMatrixCellValues_Statics::NewProp_CellCoordinate_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedMatrixCellValues_Statics::NewProp_NormalizedValuePerAttribute_ValueProp = { "NormalizedValuePerAttribute", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedMatrixCellValues_Statics::NewProp_NormalizedValuePerAttribute_Key_KeyProp = { "NormalizedValuePerAttribute_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedMatrixCellValues_Statics::NewProp_NormalizedValuePerAttribute = { "NormalizedValuePerAttribute", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventGetNormalizedMatrixCellValues_Parms, NormalizedValuePerAttribute), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	void Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedMatrixCellValues_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DMXEntityFixturePatch_eventGetNormalizedMatrixCellValues_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedMatrixCellValues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DMXEntityFixturePatch_eventGetNormalizedMatrixCellValues_Parms), &Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedMatrixCellValues_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedMatrixCellValues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedMatrixCellValues_Statics::NewProp_CellCoordinate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedMatrixCellValues_Statics::NewProp_NormalizedValuePerAttribute_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedMatrixCellValues_Statics::NewProp_NormalizedValuePerAttribute_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedMatrixCellValues_Statics::NewProp_NormalizedValuePerAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedMatrixCellValues_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedMatrixCellValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX|Fixture Patch" },
		{ "Comment", "/* Cell coordinate X/Y */" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
		{ "ToolTip", "Cell coordinate X/Y" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedMatrixCellValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXEntityFixturePatch, nullptr, "GetNormalizedMatrixCellValues", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedMatrixCellValues_Statics::DMXEntityFixturePatch_eventGetNormalizedMatrixCellValues_Parms), Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedMatrixCellValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedMatrixCellValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedMatrixCellValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedMatrixCellValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedMatrixCellValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedMatrixCellValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXEntityFixturePatch_GetRelevantControllers_Statics
	{
		struct DMXEntityFixturePatch_eventGetRelevantControllers_Parms
		{
			TArray<UDMXEntityController*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetRelevantControllers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDMXEntityController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetRelevantControllers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventGetRelevantControllers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXEntityFixturePatch_GetRelevantControllers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetRelevantControllers_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetRelevantControllers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_GetRelevantControllers_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX|Fixture Patch" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Deprecated 4.27. Controllers are replaced with DMX Ports." },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetRelevantControllers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXEntityFixturePatch, nullptr, "GetRelevantControllers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXEntityFixturePatch_GetRelevantControllers_Statics::DMXEntityFixturePatch_eventGetRelevantControllers_Parms), Z_Construct_UFunction_UDMXEntityFixturePatch_GetRelevantControllers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetRelevantControllers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_GetRelevantControllers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetRelevantControllers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXEntityFixturePatch_GetRelevantControllers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXEntityFixturePatch_GetRelevantControllers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UDMXEntityFixturePatch_GetRemoteUniverse_Statics
	{
		struct DMXEntityFixturePatch_eventGetRemoteUniverse_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetRemoteUniverse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventGetRemoteUniverse_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXEntityFixturePatch_GetRemoteUniverse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetRemoteUniverse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_GetRemoteUniverse_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX|Fixture Patch" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Deprecated 4.27. No clear remote universe can be deduced from controllers (before 4.27) or ports (from 4.27 on)." },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetRemoteUniverse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXEntityFixturePatch, nullptr, "GetRemoteUniverse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXEntityFixturePatch_GetRemoteUniverse_Statics::DMXEntityFixturePatch_eventGetRemoteUniverse_Parms), Z_Construct_UFunction_UDMXEntityFixturePatch_GetRemoteUniverse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetRemoteUniverse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x74020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_GetRemoteUniverse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetRemoteUniverse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXEntityFixturePatch_GetRemoteUniverse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXEntityFixturePatch_GetRemoteUniverse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UDMXEntityFixturePatch_GetStartingChannel_Statics
	{
		struct DMXEntityFixturePatch_eventGetStartingChannel_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetStartingChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventGetStartingChannel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXEntityFixturePatch_GetStartingChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_GetStartingChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_GetStartingChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX|Fixture Patch" },
		{ "Comment", "/** Return the starting channel */" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
		{ "ToolTip", "Return the starting channel" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXEntityFixturePatch_GetStartingChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXEntityFixturePatch, nullptr, "GetStartingChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXEntityFixturePatch_GetStartingChannel_Statics::DMXEntityFixturePatch_eventGetStartingChannel_Parms), Z_Construct_UFunction_UDMXEntityFixturePatch_GetStartingChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetStartingChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_GetStartingChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_GetStartingChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXEntityFixturePatch_GetStartingChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXEntityFixturePatch_GetStartingChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXEntityFixturePatch_IsInControllerRange_Statics
	{
		struct DMXEntityFixturePatch_eventIsInControllerRange_Parms
		{
			const UDMXEntityController* InController;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InController;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_IsInControllerRange_Statics::NewProp_InController_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_IsInControllerRange_Statics::NewProp_InController = { "InController", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventIsInControllerRange_Parms, InController), Z_Construct_UClass_UDMXEntityController_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_IsInControllerRange_Statics::NewProp_InController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_IsInControllerRange_Statics::NewProp_InController_MetaData)) };
	void Z_Construct_UFunction_UDMXEntityFixturePatch_IsInControllerRange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DMXEntityFixturePatch_eventIsInControllerRange_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_IsInControllerRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DMXEntityFixturePatch_eventIsInControllerRange_Parms), &Z_Construct_UFunction_UDMXEntityFixturePatch_IsInControllerRange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXEntityFixturePatch_IsInControllerRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_IsInControllerRange_Statics::NewProp_InController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_IsInControllerRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_IsInControllerRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX|Fixture Patch" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Deprecated 4.27. Controllers are replaced with DMX Ports." },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXEntityFixturePatch_IsInControllerRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXEntityFixturePatch, nullptr, "IsInControllerRange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXEntityFixturePatch_IsInControllerRange_Statics::DMXEntityFixturePatch_eventIsInControllerRange_Parms), Z_Construct_UFunction_UDMXEntityFixturePatch_IsInControllerRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_IsInControllerRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_IsInControllerRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_IsInControllerRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXEntityFixturePatch_IsInControllerRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXEntityFixturePatch_IsInControllerRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXEntityFixturePatch_IsInControllersRange_Statics
	{
		struct DMXEntityFixturePatch_eventIsInControllersRange_Parms
		{
			TArray<UDMXEntityController*> InControllers;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InControllers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InControllers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InControllers;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_IsInControllersRange_Statics::NewProp_InControllers_Inner = { "InControllers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDMXEntityController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_IsInControllersRange_Statics::NewProp_InControllers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_IsInControllersRange_Statics::NewProp_InControllers = { "InControllers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventIsInControllersRange_Parms, InControllers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_IsInControllersRange_Statics::NewProp_InControllers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_IsInControllersRange_Statics::NewProp_InControllers_MetaData)) };
	void Z_Construct_UFunction_UDMXEntityFixturePatch_IsInControllersRange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DMXEntityFixturePatch_eventIsInControllersRange_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_IsInControllersRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DMXEntityFixturePatch_eventIsInControllersRange_Parms), &Z_Construct_UFunction_UDMXEntityFixturePatch_IsInControllersRange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXEntityFixturePatch_IsInControllersRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_IsInControllersRange_Statics::NewProp_InControllers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_IsInControllersRange_Statics::NewProp_InControllers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_IsInControllersRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_IsInControllersRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX|Fixture Patch" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Deprecated 4.27. Controllers are replaced with DMX Ports." },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXEntityFixturePatch_IsInControllersRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXEntityFixturePatch, nullptr, "IsInControllersRange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXEntityFixturePatch_IsInControllersRange_Statics::DMXEntityFixturePatch_eventIsInControllersRange_Parms), Z_Construct_UFunction_UDMXEntityFixturePatch_IsInControllersRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_IsInControllersRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_IsInControllersRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_IsInControllersRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXEntityFixturePatch_IsInControllersRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXEntityFixturePatch_IsInControllersRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXEntityFixturePatch_IsMapValid_Statics
	{
		struct DMXEntityFixturePatch_eventIsMapValid_Parms
		{
			TMap<FDMXAttributeName,int32> FunctionMap;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_FunctionMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FunctionMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_FunctionMap;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_IsMapValid_Statics::NewProp_FunctionMap_ValueProp = { "FunctionMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_IsMapValid_Statics::NewProp_FunctionMap_Key_KeyProp = { "FunctionMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(nullptr, 0) }; // 2246266977
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_IsMapValid_Statics::NewProp_FunctionMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_IsMapValid_Statics::NewProp_FunctionMap = { "FunctionMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventIsMapValid_Parms, FunctionMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_IsMapValid_Statics::NewProp_FunctionMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_IsMapValid_Statics::NewProp_FunctionMap_MetaData)) }; // 2246266977
	void Z_Construct_UFunction_UDMXEntityFixturePatch_IsMapValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DMXEntityFixturePatch_eventIsMapValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_IsMapValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DMXEntityFixturePatch_eventIsMapValid_Parms), &Z_Construct_UFunction_UDMXEntityFixturePatch_IsMapValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXEntityFixturePatch_IsMapValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_IsMapValid_Statics::NewProp_FunctionMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_IsMapValid_Statics::NewProp_FunctionMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_IsMapValid_Statics::NewProp_FunctionMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_IsMapValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_IsMapValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX|Fixture Patch" },
		{ "Comment", "/**  Returns true if given function map is valid for this fixture. */" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
		{ "ToolTip", "Returns true if given function map is valid for this fixture." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXEntityFixturePatch_IsMapValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXEntityFixturePatch, nullptr, "IsMapValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXEntityFixturePatch_IsMapValid_Statics::DMXEntityFixturePatch_eventIsMapValid_Parms), Z_Construct_UFunction_UDMXEntityFixturePatch_IsMapValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_IsMapValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_IsMapValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_IsMapValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXEntityFixturePatch_IsMapValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXEntityFixturePatch_IsMapValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXEntityFixturePatch_RemoveFixturePatchFromLibrary_Statics
	{
		struct DMXEntityFixturePatch_eventRemoveFixturePatchFromLibrary_Parms
		{
			FDMXEntityFixturePatchRef FixturePatchRef;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_FixturePatchRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_RemoveFixturePatchFromLibrary_Statics::NewProp_FixturePatchRef = { "FixturePatchRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventRemoveFixturePatchFromLibrary_Parms, FixturePatchRef), Z_Construct_UScriptStruct_FDMXEntityFixturePatchRef, METADATA_PARAMS(nullptr, 0) }; // 1707509301
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXEntityFixturePatch_RemoveFixturePatchFromLibrary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_RemoveFixturePatchFromLibrary_Statics::NewProp_FixturePatchRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_RemoveFixturePatchFromLibrary_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/** Removes a fixture patch from the DMX Library */" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
		{ "ToolTip", "Removes a fixture patch from the DMX Library" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXEntityFixturePatch_RemoveFixturePatchFromLibrary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXEntityFixturePatch, nullptr, "RemoveFixturePatchFromLibrary", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXEntityFixturePatch_RemoveFixturePatchFromLibrary_Statics::DMXEntityFixturePatch_eventRemoveFixturePatchFromLibrary_Parms), Z_Construct_UFunction_UDMXEntityFixturePatch_RemoveFixturePatchFromLibrary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_RemoveFixturePatchFromLibrary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_RemoveFixturePatchFromLibrary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_RemoveFixturePatchFromLibrary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXEntityFixturePatch_RemoveFixturePatchFromLibrary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXEntityFixturePatch_RemoveFixturePatchFromLibrary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXEntityFixturePatch_SendDMX_Statics
	{
		struct DMXEntityFixturePatch_eventSendDMX_Parms
		{
			TMap<FDMXAttributeName,int32> AttributeMap;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeMap_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_AttributeMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_SendDMX_Statics::NewProp_AttributeMap_ValueProp = { "AttributeMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_SendDMX_Statics::NewProp_AttributeMap_Key_KeyProp = { "AttributeMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_SendDMX_Statics::NewProp_AttributeMap = { "AttributeMap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventSendDMX_Parms, AttributeMap), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2246266977
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXEntityFixturePatch_SendDMX_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_SendDMX_Statics::NewProp_AttributeMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_SendDMX_Statics::NewProp_AttributeMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_SendDMX_Statics::NewProp_AttributeMap,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_SendDMX_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/**  Send DMX using attribute names and integer values. */" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
		{ "ToolTip", "Send DMX using attribute names and integer values." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXEntityFixturePatch_SendDMX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXEntityFixturePatch, nullptr, "SendDMX", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXEntityFixturePatch_SendDMX_Statics::DMXEntityFixturePatch_eventSendDMX_Parms), Z_Construct_UFunction_UDMXEntityFixturePatch_SendDMX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_SendDMX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_SendDMX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_SendDMX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXEntityFixturePatch_SendDMX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXEntityFixturePatch_SendDMX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValue_Statics
	{
		struct DMXEntityFixturePatch_eventSendMatrixCellValue_Parms
		{
			FIntPoint CellCoordinate;
			FDMXAttributeName Attribute;
			int32 Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CellCoordinate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CellCoordinate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValue_Statics::NewProp_CellCoordinate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValue_Statics::NewProp_CellCoordinate = { "CellCoordinate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventSendMatrixCellValue_Parms, CellCoordinate), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValue_Statics::NewProp_CellCoordinate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValue_Statics::NewProp_CellCoordinate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValue_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValue_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventSendMatrixCellValue_Parms, Attribute), Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValue_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValue_Statics::NewProp_Attribute_MetaData)) }; // 2246266977
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventSendMatrixCellValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DMXEntityFixturePatch_eventSendMatrixCellValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DMXEntityFixturePatch_eventSendMatrixCellValue_Parms), &Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValue_Statics::NewProp_CellCoordinate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValue_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValue_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX|Fixture Patch" },
		{ "Comment", "/* Cell coordinate X/Y */" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
		{ "ToolTip", "Cell coordinate X/Y" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXEntityFixturePatch, nullptr, "SendMatrixCellValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValue_Statics::DMXEntityFixturePatch_eventSendMatrixCellValue_Parms), Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValueWithAttributeMap_Statics
	{
		struct DMXEntityFixturePatch_eventSendMatrixCellValueWithAttributeMap_Parms
		{
			FIntPoint CellCoordinate;
			FDMXAttributeName Attribute;
			int32 Value;
			TMap<FDMXAttributeName,int32> InAttributeNameChannelMap;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CellCoordinate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CellCoordinate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InAttributeNameChannelMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InAttributeNameChannelMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeNameChannelMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InAttributeNameChannelMap;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValueWithAttributeMap_Statics::NewProp_CellCoordinate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValueWithAttributeMap_Statics::NewProp_CellCoordinate = { "CellCoordinate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventSendMatrixCellValueWithAttributeMap_Parms, CellCoordinate), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValueWithAttributeMap_Statics::NewProp_CellCoordinate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValueWithAttributeMap_Statics::NewProp_CellCoordinate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValueWithAttributeMap_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValueWithAttributeMap_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventSendMatrixCellValueWithAttributeMap_Parms, Attribute), Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValueWithAttributeMap_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValueWithAttributeMap_Statics::NewProp_Attribute_MetaData)) }; // 2246266977
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValueWithAttributeMap_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventSendMatrixCellValueWithAttributeMap_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValueWithAttributeMap_Statics::NewProp_InAttributeNameChannelMap_ValueProp = { "InAttributeNameChannelMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValueWithAttributeMap_Statics::NewProp_InAttributeNameChannelMap_Key_KeyProp = { "InAttributeNameChannelMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(nullptr, 0) }; // 2246266977
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValueWithAttributeMap_Statics::NewProp_InAttributeNameChannelMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValueWithAttributeMap_Statics::NewProp_InAttributeNameChannelMap = { "InAttributeNameChannelMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventSendMatrixCellValueWithAttributeMap_Parms, InAttributeNameChannelMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValueWithAttributeMap_Statics::NewProp_InAttributeNameChannelMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValueWithAttributeMap_Statics::NewProp_InAttributeNameChannelMap_MetaData)) }; // 2246266977
	void Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValueWithAttributeMap_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DMXEntityFixturePatch_eventSendMatrixCellValueWithAttributeMap_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValueWithAttributeMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DMXEntityFixturePatch_eventSendMatrixCellValueWithAttributeMap_Parms), &Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValueWithAttributeMap_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValueWithAttributeMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValueWithAttributeMap_Statics::NewProp_CellCoordinate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValueWithAttributeMap_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValueWithAttributeMap_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValueWithAttributeMap_Statics::NewProp_InAttributeNameChannelMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValueWithAttributeMap_Statics::NewProp_InAttributeNameChannelMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValueWithAttributeMap_Statics::NewProp_InAttributeNameChannelMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValueWithAttributeMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValueWithAttributeMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX|Fixture Patch" },
		{ "Comment", "/* Cell coordinate X/Y */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Deprecated due to ambigous arguments CellCoordinate and InAttributeNameChannelMap. Use SendMatrixCellValue or SendNormalizedMatrixCellValue instead." },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
		{ "ToolTip", "Cell coordinate X/Y" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValueWithAttributeMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXEntityFixturePatch, nullptr, "SendMatrixCellValueWithAttributeMap", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValueWithAttributeMap_Statics::DMXEntityFixturePatch_eventSendMatrixCellValueWithAttributeMap_Parms), Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValueWithAttributeMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValueWithAttributeMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValueWithAttributeMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValueWithAttributeMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValueWithAttributeMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValueWithAttributeMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXEntityFixturePatch_SendNormalizedMatrixCellValue_Statics
	{
		struct DMXEntityFixturePatch_eventSendNormalizedMatrixCellValue_Parms
		{
			FIntPoint CellCoordinate;
			FDMXAttributeName Attribute;
			float RelativeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CellCoordinate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CellCoordinate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RelativeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_SendNormalizedMatrixCellValue_Statics::NewProp_CellCoordinate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_SendNormalizedMatrixCellValue_Statics::NewProp_CellCoordinate = { "CellCoordinate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventSendNormalizedMatrixCellValue_Parms, CellCoordinate), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_SendNormalizedMatrixCellValue_Statics::NewProp_CellCoordinate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_SendNormalizedMatrixCellValue_Statics::NewProp_CellCoordinate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_SendNormalizedMatrixCellValue_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_SendNormalizedMatrixCellValue_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventSendNormalizedMatrixCellValue_Parms, Attribute), Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_SendNormalizedMatrixCellValue_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_SendNormalizedMatrixCellValue_Statics::NewProp_Attribute_MetaData)) }; // 2246266977
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_SendNormalizedMatrixCellValue_Statics::NewProp_RelativeValue = { "RelativeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventSendNormalizedMatrixCellValue_Parms, RelativeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDMXEntityFixturePatch_SendNormalizedMatrixCellValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DMXEntityFixturePatch_eventSendNormalizedMatrixCellValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_SendNormalizedMatrixCellValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DMXEntityFixturePatch_eventSendNormalizedMatrixCellValue_Parms), &Z_Construct_UFunction_UDMXEntityFixturePatch_SendNormalizedMatrixCellValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXEntityFixturePatch_SendNormalizedMatrixCellValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_SendNormalizedMatrixCellValue_Statics::NewProp_CellCoordinate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_SendNormalizedMatrixCellValue_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_SendNormalizedMatrixCellValue_Statics::NewProp_RelativeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_SendNormalizedMatrixCellValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_SendNormalizedMatrixCellValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX|Fixture Patch" },
		{ "Comment", "/* Cell coordinate X/Y */" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
		{ "ToolTip", "Cell coordinate X/Y" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXEntityFixturePatch_SendNormalizedMatrixCellValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXEntityFixturePatch, nullptr, "SendNormalizedMatrixCellValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXEntityFixturePatch_SendNormalizedMatrixCellValue_Statics::DMXEntityFixturePatch_eventSendNormalizedMatrixCellValue_Parms), Z_Construct_UFunction_UDMXEntityFixturePatch_SendNormalizedMatrixCellValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_SendNormalizedMatrixCellValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_SendNormalizedMatrixCellValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_SendNormalizedMatrixCellValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXEntityFixturePatch_SendNormalizedMatrixCellValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXEntityFixturePatch_SendNormalizedMatrixCellValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXEntityFixturePatch_SetFixtureType_Statics
	{
		struct DMXEntityFixturePatch_eventSetFixtureType_Parms
		{
			UDMXEntityFixtureType* NewFixtureType;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewFixtureType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_SetFixtureType_Statics::NewProp_NewFixtureType = { "NewFixtureType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventSetFixtureType_Parms, NewFixtureType), Z_Construct_UClass_UDMXEntityFixtureType_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXEntityFixturePatch_SetFixtureType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_SetFixtureType_Statics::NewProp_NewFixtureType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_SetFixtureType_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX|Fixture Patch" },
		{ "Comment", "/** Sets the fixture type this is using */" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
		{ "ToolTip", "Sets the fixture type this is using" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXEntityFixturePatch_SetFixtureType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXEntityFixturePatch, nullptr, "SetFixtureType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXEntityFixturePatch_SetFixtureType_Statics::DMXEntityFixturePatch_eventSetFixtureType_Parms), Z_Construct_UFunction_UDMXEntityFixturePatch_SetFixtureType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_SetFixtureType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_SetFixtureType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_SetFixtureType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXEntityFixturePatch_SetFixtureType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXEntityFixturePatch_SetFixtureType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXEntityFixturePatch_SetStartingChannel_Statics
	{
		struct DMXEntityFixturePatch_eventSetStartingChannel_Parms
		{
			int32 NewStartingChannel;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewStartingChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXEntityFixturePatch_SetStartingChannel_Statics::NewProp_NewStartingChannel = { "NewStartingChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixturePatch_eventSetStartingChannel_Parms, NewStartingChannel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXEntityFixturePatch_SetStartingChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixturePatch_SetStartingChannel_Statics::NewProp_NewStartingChannel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixturePatch_SetStartingChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX|Fixture Patch" },
		{ "Comment", "/** \n\x09 * Sets the starting channel of the Fixture Patch.\n\x09 * \n\x09 * If Auto Assign Address was set to true, turns off Auto Assign Address.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
		{ "ToolTip", "Sets the starting channel of the Fixture Patch.\n\nIf Auto Assign Address was set to true, turns off Auto Assign Address." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXEntityFixturePatch_SetStartingChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXEntityFixturePatch, nullptr, "SetStartingChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXEntityFixturePatch_SetStartingChannel_Statics::DMXEntityFixturePatch_eventSetStartingChannel_Parms), Z_Construct_UFunction_UDMXEntityFixturePatch_SetStartingChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_SetStartingChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixturePatch_SetStartingChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixturePatch_SetStartingChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXEntityFixturePatch_SetStartingChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXEntityFixturePatch_SetStartingChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXEntityFixturePatch);
	UClass* Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister()
	{
		return UDMXEntityFixturePatch::StaticClass();
	}
	struct Z_Construct_UClass_UDMXEntityFixturePatch_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFixturePatchReceivedDMX_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFixturePatchReceivedDMX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniverseID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UniverseID;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoAssignAddress_MetaData[];
#endif
		static void NewProp_bAutoAssignAddress_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoAssignAddress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManualStartingAddress_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ManualStartingAddress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoStartingAddress_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AutoStartingAddress;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartingChannel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartingChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentFixtureTypeTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParentFixtureTypeTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveMode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ActiveMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MVRFixtureUUID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MVRFixtureUUID;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CustomTags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomTags;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EditorColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReceiveDMXInEditor_MetaData[];
#endif
		static void NewProp_bReceiveDMXInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReceiveDMXInEditor;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXEntityFixturePatch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDMXEntity,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDMXEntityFixturePatch_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDMXEntityFixturePatch_ContainsAttribute, "ContainsAttribute" }, // 922877965
		{ &Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertAttributeMapToRawMap, "ConvertAttributeMapToRawMap" }, // 1517284160
		{ &Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertRawMapToAttributeMap, "ConvertRawMapToAttributeMap" }, // 535897096
		{ &Z_Construct_UFunction_UDMXEntityFixturePatch_ConvertToValidMap, "ConvertToValidMap" }, // 2129222597
		{ &Z_Construct_UFunction_UDMXEntityFixturePatch_CreateFixturePatchInLibrary, "CreateFixturePatchInLibrary" }, // 4217331083
		{ &Z_Construct_UDelegateFunction_UDMXEntityFixturePatch_DMXOnFixturePatchReceivedDMXDelegate__DelegateSignature, "DMXOnFixturePatchReceivedDMXDelegate__DelegateSignature" }, // 1748682332
		{ &Z_Construct_UFunction_UDMXEntityFixturePatch_GetAllAttributesInActiveMode, "GetAllAttributesInActiveMode" }, // 3757243133
		{ &Z_Construct_UFunction_UDMXEntityFixturePatch_GetAllMatrixCells, "GetAllMatrixCells" }, // 1022970192
		{ &Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeChannelAssignments, "GetAttributeChannelAssignments" }, // 723849680
		{ &Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeDefaultMap, "GetAttributeDefaultMap" }, // 1852490228
		{ &Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeFunctionsMap, "GetAttributeFunctionsMap" }, // 1148109423
		{ &Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeSignalFormats, "GetAttributeSignalFormats" }, // 1867170868
		{ &Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributesValues, "GetAttributesValues" }, // 3532316635
		{ &Z_Construct_UFunction_UDMXEntityFixturePatch_GetAttributeValue, "GetAttributeValue" }, // 3058489750
		{ &Z_Construct_UFunction_UDMXEntityFixturePatch_GetCellAttributes, "GetCellAttributes" }, // 497087432
		{ &Z_Construct_UFunction_UDMXEntityFixturePatch_GetChannelSpan, "GetChannelSpan" }, // 1762269616
		{ &Z_Construct_UFunction_UDMXEntityFixturePatch_GetEndingChannel, "GetEndingChannel" }, // 4169008147
		{ &Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCell, "GetMatrixCell" }, // 448086546
		{ &Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsolute, "GetMatrixCellChannelsAbsolute" }, // 1905246952
		{ &Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsAbsoluteWithValidation, "GetMatrixCellChannelsAbsoluteWithValidation" }, // 2178164188
		{ &Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellChannelsRelative, "GetMatrixCellChannelsRelative" }, // 551725497
		{ &Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixCellValues, "GetMatrixCellValues" }, // 1176219635
		{ &Z_Construct_UFunction_UDMXEntityFixturePatch_GetMatrixProperties, "GetMatrixProperties" }, // 1902660293
		{ &Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedAttributesValues, "GetNormalizedAttributesValues" }, // 3252034065
		{ &Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedAttributeValue, "GetNormalizedAttributeValue" }, // 1663622888
		{ &Z_Construct_UFunction_UDMXEntityFixturePatch_GetNormalizedMatrixCellValues, "GetNormalizedMatrixCellValues" }, // 1287432583
		{ &Z_Construct_UFunction_UDMXEntityFixturePatch_GetRelevantControllers, "GetRelevantControllers" }, // 1158624652
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UDMXEntityFixturePatch_GetRemoteUniverse, "GetRemoteUniverse" }, // 591843402
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UDMXEntityFixturePatch_GetStartingChannel, "GetStartingChannel" }, // 2926181969
		{ &Z_Construct_UFunction_UDMXEntityFixturePatch_IsInControllerRange, "IsInControllerRange" }, // 2097838688
		{ &Z_Construct_UFunction_UDMXEntityFixturePatch_IsInControllersRange, "IsInControllersRange" }, // 3001103048
		{ &Z_Construct_UFunction_UDMXEntityFixturePatch_IsMapValid, "IsMapValid" }, // 3238005600
		{ &Z_Construct_UFunction_UDMXEntityFixturePatch_RemoveFixturePatchFromLibrary, "RemoveFixturePatchFromLibrary" }, // 1448146148
		{ &Z_Construct_UFunction_UDMXEntityFixturePatch_SendDMX, "SendDMX" }, // 2675725500
		{ &Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValue, "SendMatrixCellValue" }, // 1351188812
		{ &Z_Construct_UFunction_UDMXEntityFixturePatch_SendMatrixCellValueWithAttributeMap, "SendMatrixCellValueWithAttributeMap" }, // 129041966
		{ &Z_Construct_UFunction_UDMXEntityFixturePatch_SendNormalizedMatrixCellValue, "SendNormalizedMatrixCellValue" }, // 3022870752
		{ &Z_Construct_UFunction_UDMXEntityFixturePatch_SetFixtureType, "SetFixtureType" }, // 3604717783
		{ &Z_Construct_UFunction_UDMXEntityFixturePatch_SetStartingChannel, "SetStartingChannel" }, // 1586603021
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXEntityFixturePatch_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * A DMX fixture patch that can be patch to channels in a DMX Universe via the DMX Library Editor. \n * \n * Use in DMXComponent or call SetReceiveDMXEnabled with 'true' to enable receiving DMX. \n */" },
		{ "DisplayName", "DMX Fixture Patch" },
		{ "IncludePath", "Library/DMXEntityFixturePatch.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
		{ "ToolTip", "A DMX fixture patch that can be patch to channels in a DMX Universe via the DMX Library Editor.\n\nUse in DMXComponent or call SetReceiveDMXEnabled with 'true' to enable receiving DMX." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_OnFixturePatchReceivedDMX_MetaData[] = {
		{ "Category", "DMX" },
		{ "Comment", "/** Broadcasts when the patch received dmx */" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
		{ "ToolTip", "Broadcasts when the patch received dmx" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_OnFixturePatchReceivedDMX = { "OnFixturePatchReceivedDMX", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXEntityFixturePatch, OnFixturePatchReceivedDMX), Z_Construct_UDelegateFunction_UDMXEntityFixturePatch_DMXOnFixturePatchReceivedDMXDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_OnFixturePatchReceivedDMX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_OnFixturePatchReceivedDMX_MetaData)) }; // 1748682332
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_UniverseID_MetaData[] = {
		{ "Category", "Fixture Patch" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The local universe of the patch */" },
		{ "DisplayName", "Universe" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
		{ "ToolTip", "The local universe of the patch" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_UniverseID = { "UniverseID", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXEntityFixturePatch, UniverseID), METADATA_PARAMS(Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_UniverseID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_UniverseID_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_bAutoAssignAddress_MetaData[] = {
		{ "Comment", "/** DEPRECATED 5.1 */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "bAutoAssignAddress and related members are deprecated. Auto assign is now only a method in FDMXEditorUtils and should be applied on demand." },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
		{ "ToolTip", "DEPRECATED 5.1" },
	};
#endif
	void Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_bAutoAssignAddress_SetBit(void* Obj)
	{
		((UDMXEntityFixturePatch*)Obj)->bAutoAssignAddress_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_bAutoAssignAddress = { "bAutoAssignAddress", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDMXEntityFixturePatch), &Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_bAutoAssignAddress_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_bAutoAssignAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_bAutoAssignAddress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_ManualStartingAddress_MetaData[] = {
		{ "Comment", "/** DEPRECATED 5.1 */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "bAutoAssignAddress and related members are deprecated. Auto assign is now only a method in FDMXEditorUtils and should be applied on demand." },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
		{ "ToolTip", "DEPRECATED 5.1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_ManualStartingAddress = { "ManualStartingAddress", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXEntityFixturePatch, ManualStartingAddress_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_ManualStartingAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_ManualStartingAddress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_AutoStartingAddress_MetaData[] = {
		{ "Comment", "/** DEPRECATED 5.1 */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "bAutoAssignAddress and related members are deprecated. Auto assign is now only a method in FDMXEditorUtils and should be applied on demand." },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
		{ "ToolTip", "DEPRECATED 5.1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_AutoStartingAddress = { "AutoStartingAddress", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXEntityFixturePatch, AutoStartingAddress_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_AutoStartingAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_AutoStartingAddress_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_StartingChannel_MetaData[] = {
		{ "Category", "Fixture Patch" },
		{ "ClampMax", "512" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Starting Channel of the Patch */" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
		{ "ToolTip", "Starting Channel of the Patch" },
		{ "UIMax", "512" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_StartingChannel = { "StartingChannel", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXEntityFixturePatch, StartingChannel), METADATA_PARAMS(Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_StartingChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_StartingChannel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_ParentFixtureTypeTemplate_MetaData[] = {
		{ "BlueprintSetter", "SetFixtureType" },
		{ "Category", "Fixture Patch" },
		{ "Comment", "/** Property to point to the template parent fixture for details panel purposes */" },
		{ "DisplayName", "Fixture Type" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
		{ "ToolTip", "Property to point to the template parent fixture for details panel purposes" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_ParentFixtureTypeTemplate = { "ParentFixtureTypeTemplate", nullptr, (EPropertyFlags)0x0024080000030005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXEntityFixturePatch, ParentFixtureTypeTemplate), Z_Construct_UClass_UDMXEntityFixtureType_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_ParentFixtureTypeTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_ParentFixtureTypeTemplate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_ActiveMode_MetaData[] = {
		{ "Category", "Fixture Patch" },
		{ "Comment", "/** The Index of the Mode in the Fixture Type the Patch uses */" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
		{ "ToolTip", "The Index of the Mode in the Fixture Type the Patch uses" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_ActiveMode = { "ActiveMode", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXEntityFixturePatch, ActiveMode), METADATA_PARAMS(Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_ActiveMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_ActiveMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_MVRFixtureUUID_MetaData[] = {
		{ "Category", "Fixture Patch" },
		{ "Comment", "/** The MVR Fixture UUID when used as such */" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
		{ "ToolTip", "The MVR Fixture UUID when used as such" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_MVRFixtureUUID = { "MVRFixtureUUID", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXEntityFixturePatch, MVRFixtureUUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_MVRFixtureUUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_MVRFixtureUUID_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_CustomTags_Inner = { "CustomTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_CustomTags_MetaData[] = {
		{ "Category", "Fixture Patch" },
		{ "Comment", "/** Custom tags for filtering patches  */" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
		{ "ToolTip", "Custom tags for filtering patches" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXEntityFixturePatch, CustomTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_EditorColor_MetaData[] = {
		{ "Category", "Fixture Patch" },
		{ "Comment", "/** Color when displayed in the fixture patch editor */" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
		{ "ToolTip", "Color when displayed in the fixture patch editor" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_EditorColor = { "EditorColor", nullptr, (EPropertyFlags)0x0010000800000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXEntityFixturePatch, EditorColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_EditorColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_EditorColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_bReceiveDMXInEditor_MetaData[] = {
		{ "Category", "Fixture Patch" },
		{ "Comment", "/** \n\x09 * If true, the patch receives dmx and raises the OnFixturePatchReceivedDMX event in editor. \n\x09 * NOTE: If 'All Fixture Patches receive DMX in editor' is set to true in Project Settings -> Plugins -> DMX, this setting here is ignored.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixturePatch.h" },
		{ "ToolTip", "If true, the patch receives dmx and raises the OnFixturePatchReceivedDMX event in editor.\nNOTE: If 'All Fixture Patches receive DMX in editor' is set to true in Project Settings -> Plugins -> DMX, this setting here is ignored." },
	};
#endif
	void Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_bReceiveDMXInEditor_SetBit(void* Obj)
	{
		((UDMXEntityFixturePatch*)Obj)->bReceiveDMXInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_bReceiveDMXInEditor = { "bReceiveDMXInEditor", nullptr, (EPropertyFlags)0x0010000800000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDMXEntityFixturePatch), &Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_bReceiveDMXInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_bReceiveDMXInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_bReceiveDMXInEditor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXEntityFixturePatch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_OnFixturePatchReceivedDMX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_UniverseID,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_bAutoAssignAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_ManualStartingAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_AutoStartingAddress,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_StartingChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_ParentFixtureTypeTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_ActiveMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_MVRFixtureUUID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_CustomTags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_CustomTags,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_EditorColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXEntityFixturePatch_Statics::NewProp_bReceiveDMXInEditor,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXEntityFixturePatch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXEntityFixturePatch>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXEntityFixturePatch_Statics::ClassParams = {
		&UDMXEntityFixturePatch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDMXEntityFixturePatch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEntityFixturePatch_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXEntityFixturePatch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEntityFixturePatch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXEntityFixturePatch()
	{
		if (!Z_Registration_Info_UClass_UDMXEntityFixturePatch.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXEntityFixturePatch.OuterSingleton, Z_Construct_UClass_UDMXEntityFixturePatch_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXEntityFixturePatch.OuterSingleton;
	}
	template<> DMXRUNTIME_API UClass* StaticClass<UDMXEntityFixturePatch>()
	{
		return UDMXEntityFixturePatch::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXEntityFixturePatch);
	UDMXEntityFixturePatch::~UDMXEntityFixturePatch() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDMXEntityFixturePatch)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_Statics::ScriptStructInfo[] = {
		{ FDMXEntityFixturePatchConstructionParams::StaticStruct, Z_Construct_UScriptStruct_FDMXEntityFixturePatchConstructionParams_Statics::NewStructOps, TEXT("DMXEntityFixturePatchConstructionParams"), &Z_Registration_Info_UScriptStruct_DMXEntityFixturePatchConstructionParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXEntityFixturePatchConstructionParams), 1493902903U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXEntityFixturePatch, UDMXEntityFixturePatch::StaticClass, TEXT("UDMXEntityFixturePatch"), &Z_Registration_Info_UClass_UDMXEntityFixturePatch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXEntityFixturePatch), 2088850458U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_2023973056(TEXT("/Script/DMXRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
