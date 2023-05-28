// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/ZoneGraph/Source/ZoneGraph/Public/ZoneShapeComponent.h"
#include "../../../../Plugins/Runtime/ZoneGraph/Source/ZoneGraph/Public/ZoneGraphTypes.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZoneShapeComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_ZoneGraph();
	ZONEGRAPH_API UClass* Z_Construct_UClass_UZoneShapeComponent();
	ZONEGRAPH_API UClass* Z_Construct_UClass_UZoneShapeComponent_NoRegister();
	ZONEGRAPH_API UEnum* Z_Construct_UEnum_ZoneGraph_EZoneShapePolygonRoutingType();
	ZONEGRAPH_API UEnum* Z_Construct_UEnum_ZoneGraph_FZoneShapeType();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTagMask();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneLaneProfileRef();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneShapeConnection();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneShapeConnector();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneShapePoint();
// End Cross Module References
	DEFINE_FUNCTION(UZoneShapeComponent::execSetPolygonRoutingType)
	{
		P_GET_ENUM(EZoneShapePolygonRoutingType,Z_Param_NewType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPolygonRoutingType(EZoneShapePolygonRoutingType(Z_Param_NewType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoneShapeComponent::execSetReverseLaneProfile)
	{
		P_GET_UBOOL(Z_Param_bReverse);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetReverseLaneProfile(Z_Param_bReverse);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoneShapeComponent::execIsLaneProfileReversed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLaneProfileReversed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoneShapeComponent::execSetTags)
	{
		P_GET_STRUCT(FZoneGraphTagMask,Z_Param_NewTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTags(Z_Param_NewTags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoneShapeComponent::execGetTags)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FZoneGraphTagMask*)Z_Param__Result=P_THIS->GetTags();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoneShapeComponent::execSetShapeType)
	{
		P_GET_ENUM(FZoneShapeType,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShapeType(FZoneShapeType(Z_Param_Type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoneShapeComponent::execGetShapeType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FZoneShapeType*)Z_Param__Result=P_THIS->GetShapeType();
		P_NATIVE_END;
	}
	void UZoneShapeComponent::StaticRegisterNativesUZoneShapeComponent()
	{
		UClass* Class = UZoneShapeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetShapeType", &UZoneShapeComponent::execGetShapeType },
			{ "GetTags", &UZoneShapeComponent::execGetTags },
			{ "IsLaneProfileReversed", &UZoneShapeComponent::execIsLaneProfileReversed },
			{ "SetPolygonRoutingType", &UZoneShapeComponent::execSetPolygonRoutingType },
			{ "SetReverseLaneProfile", &UZoneShapeComponent::execSetReverseLaneProfile },
			{ "SetShapeType", &UZoneShapeComponent::execSetShapeType },
			{ "SetTags", &UZoneShapeComponent::execSetTags },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UZoneShapeComponent_GetShapeType_Statics
	{
		struct ZoneShapeComponent_eventGetShapeType_Parms
		{
			FZoneShapeType ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UZoneShapeComponent_GetShapeType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UZoneShapeComponent_GetShapeType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ZoneShapeComponent_eventGetShapeType_Parms, ReturnValue), Z_Construct_UEnum_ZoneGraph_FZoneShapeType, METADATA_PARAMS(nullptr, 0) }; // 1851379342
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoneShapeComponent_GetShapeType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoneShapeComponent_GetShapeType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoneShapeComponent_GetShapeType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoneShapeComponent_GetShapeType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zone" },
		{ "Comment", "/** @return Shape type. */" },
		{ "ModuleRelativePath", "Public/ZoneShapeComponent.h" },
		{ "ToolTip", "@return Shape type." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoneShapeComponent_GetShapeType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoneShapeComponent, nullptr, "GetShapeType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UZoneShapeComponent_GetShapeType_Statics::ZoneShapeComponent_eventGetShapeType_Parms), Z_Construct_UFunction_UZoneShapeComponent_GetShapeType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoneShapeComponent_GetShapeType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZoneShapeComponent_GetShapeType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoneShapeComponent_GetShapeType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZoneShapeComponent_GetShapeType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoneShapeComponent_GetShapeType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoneShapeComponent_GetTags_Statics
	{
		struct ZoneShapeComponent_eventGetTags_Parms
		{
			FZoneGraphTagMask ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UZoneShapeComponent_GetTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ZoneShapeComponent_eventGetTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FZoneGraphTagMask, METADATA_PARAMS(nullptr, 0) }; // 1781901322
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoneShapeComponent_GetTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoneShapeComponent_GetTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoneShapeComponent_GetTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zone" },
		{ "Comment", "/** @return Shape's tags. */" },
		{ "ModuleRelativePath", "Public/ZoneShapeComponent.h" },
		{ "ToolTip", "@return Shape's tags." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoneShapeComponent_GetTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoneShapeComponent, nullptr, "GetTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_UZoneShapeComponent_GetTags_Statics::ZoneShapeComponent_eventGetTags_Parms), Z_Construct_UFunction_UZoneShapeComponent_GetTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoneShapeComponent_GetTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZoneShapeComponent_GetTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoneShapeComponent_GetTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZoneShapeComponent_GetTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoneShapeComponent_GetTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoneShapeComponent_IsLaneProfileReversed_Statics
	{
		struct ZoneShapeComponent_eventIsLaneProfileReversed_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoneShapeComponent_IsLaneProfileReversed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoneShapeComponent_eventIsLaneProfileReversed_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoneShapeComponent_IsLaneProfileReversed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ZoneShapeComponent_eventIsLaneProfileReversed_Parms), &Z_Construct_UFunction_UZoneShapeComponent_IsLaneProfileReversed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoneShapeComponent_IsLaneProfileReversed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoneShapeComponent_IsLaneProfileReversed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoneShapeComponent_IsLaneProfileReversed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zone" },
		{ "Comment", "/** @return True if common lane profile is reversed. */" },
		{ "ModuleRelativePath", "Public/ZoneShapeComponent.h" },
		{ "ToolTip", "@return True if common lane profile is reversed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoneShapeComponent_IsLaneProfileReversed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoneShapeComponent, nullptr, "IsLaneProfileReversed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UZoneShapeComponent_IsLaneProfileReversed_Statics::ZoneShapeComponent_eventIsLaneProfileReversed_Parms), Z_Construct_UFunction_UZoneShapeComponent_IsLaneProfileReversed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoneShapeComponent_IsLaneProfileReversed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZoneShapeComponent_IsLaneProfileReversed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoneShapeComponent_IsLaneProfileReversed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZoneShapeComponent_IsLaneProfileReversed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoneShapeComponent_IsLaneProfileReversed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoneShapeComponent_SetPolygonRoutingType_Statics
	{
		struct ZoneShapeComponent_eventSetPolygonRoutingType_Parms
		{
			EZoneShapePolygonRoutingType NewType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UZoneShapeComponent_SetPolygonRoutingType_Statics::NewProp_NewType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoneShapeComponent_SetPolygonRoutingType_Statics::NewProp_NewType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UZoneShapeComponent_SetPolygonRoutingType_Statics::NewProp_NewType = { "NewType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ZoneShapeComponent_eventSetPolygonRoutingType_Parms, NewType), Z_Construct_UEnum_ZoneGraph_EZoneShapePolygonRoutingType, METADATA_PARAMS(Z_Construct_UFunction_UZoneShapeComponent_SetPolygonRoutingType_Statics::NewProp_NewType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoneShapeComponent_SetPolygonRoutingType_Statics::NewProp_NewType_MetaData)) }; // 1984748963
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoneShapeComponent_SetPolygonRoutingType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoneShapeComponent_SetPolygonRoutingType_Statics::NewProp_NewType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoneShapeComponent_SetPolygonRoutingType_Statics::NewProp_NewType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoneShapeComponent_SetPolygonRoutingType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zone" },
		{ "Comment", "/** Sets the polygon routing type. */" },
		{ "ModuleRelativePath", "Public/ZoneShapeComponent.h" },
		{ "ToolTip", "Sets the polygon routing type." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoneShapeComponent_SetPolygonRoutingType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoneShapeComponent, nullptr, "SetPolygonRoutingType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UZoneShapeComponent_SetPolygonRoutingType_Statics::ZoneShapeComponent_eventSetPolygonRoutingType_Parms), Z_Construct_UFunction_UZoneShapeComponent_SetPolygonRoutingType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoneShapeComponent_SetPolygonRoutingType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZoneShapeComponent_SetPolygonRoutingType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoneShapeComponent_SetPolygonRoutingType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZoneShapeComponent_SetPolygonRoutingType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoneShapeComponent_SetPolygonRoutingType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoneShapeComponent_SetReverseLaneProfile_Statics
	{
		struct ZoneShapeComponent_eventSetReverseLaneProfile_Parms
		{
			bool bReverse;
			bool ReturnValue;
		};
		static void NewProp_bReverse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverse;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoneShapeComponent_SetReverseLaneProfile_Statics::NewProp_bReverse_SetBit(void* Obj)
	{
		((ZoneShapeComponent_eventSetReverseLaneProfile_Parms*)Obj)->bReverse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoneShapeComponent_SetReverseLaneProfile_Statics::NewProp_bReverse = { "bReverse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ZoneShapeComponent_eventSetReverseLaneProfile_Parms), &Z_Construct_UFunction_UZoneShapeComponent_SetReverseLaneProfile_Statics::NewProp_bReverse_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UZoneShapeComponent_SetReverseLaneProfile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoneShapeComponent_eventSetReverseLaneProfile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoneShapeComponent_SetReverseLaneProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ZoneShapeComponent_eventSetReverseLaneProfile_Parms), &Z_Construct_UFunction_UZoneShapeComponent_SetReverseLaneProfile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoneShapeComponent_SetReverseLaneProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoneShapeComponent_SetReverseLaneProfile_Statics::NewProp_bReverse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoneShapeComponent_SetReverseLaneProfile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoneShapeComponent_SetReverseLaneProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zone" },
		{ "Comment", "/** Set whether common lane profile should be reversed.\n\x09 * @param bReverse Reverse state\n\x09 * @return Newly set reversed state.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ZoneShapeComponent.h" },
		{ "ToolTip", "Set whether common lane profile should be reversed.\n@param bReverse Reverse state\n@return Newly set reversed state." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoneShapeComponent_SetReverseLaneProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoneShapeComponent, nullptr, "SetReverseLaneProfile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UZoneShapeComponent_SetReverseLaneProfile_Statics::ZoneShapeComponent_eventSetReverseLaneProfile_Parms), Z_Construct_UFunction_UZoneShapeComponent_SetReverseLaneProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoneShapeComponent_SetReverseLaneProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZoneShapeComponent_SetReverseLaneProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoneShapeComponent_SetReverseLaneProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZoneShapeComponent_SetReverseLaneProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoneShapeComponent_SetReverseLaneProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoneShapeComponent_SetShapeType_Statics
	{
		struct ZoneShapeComponent_eventSetShapeType_Parms
		{
			FZoneShapeType Type;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UZoneShapeComponent_SetShapeType_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UZoneShapeComponent_SetShapeType_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ZoneShapeComponent_eventSetShapeType_Parms, Type), Z_Construct_UEnum_ZoneGraph_FZoneShapeType, METADATA_PARAMS(nullptr, 0) }; // 1851379342
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoneShapeComponent_SetShapeType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoneShapeComponent_SetShapeType_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoneShapeComponent_SetShapeType_Statics::NewProp_Type,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoneShapeComponent_SetShapeType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zone" },
		{ "Comment", "/** Sets shape type.\n\x09 * @param Type New shape type.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ZoneShapeComponent.h" },
		{ "ToolTip", "Sets shape type.\n@param Type New shape type." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoneShapeComponent_SetShapeType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoneShapeComponent, nullptr, "SetShapeType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UZoneShapeComponent_SetShapeType_Statics::ZoneShapeComponent_eventSetShapeType_Parms), Z_Construct_UFunction_UZoneShapeComponent_SetShapeType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoneShapeComponent_SetShapeType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZoneShapeComponent_SetShapeType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoneShapeComponent_SetShapeType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZoneShapeComponent_SetShapeType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoneShapeComponent_SetShapeType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoneShapeComponent_SetTags_Statics
	{
		struct ZoneShapeComponent_eventSetTags_Parms
		{
			FZoneGraphTagMask NewTags;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoneShapeComponent_SetTags_Statics::NewProp_NewTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UZoneShapeComponent_SetTags_Statics::NewProp_NewTags = { "NewTags", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ZoneShapeComponent_eventSetTags_Parms, NewTags), Z_Construct_UScriptStruct_FZoneGraphTagMask, METADATA_PARAMS(Z_Construct_UFunction_UZoneShapeComponent_SetTags_Statics::NewProp_NewTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoneShapeComponent_SetTags_Statics::NewProp_NewTags_MetaData)) }; // 1781901322
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoneShapeComponent_SetTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoneShapeComponent_SetTags_Statics::NewProp_NewTags,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoneShapeComponent_SetTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zone" },
		{ "Comment", "/** Sets shape tags.\n\x09 * @param NewTags New tags to set.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ZoneShapeComponent.h" },
		{ "ToolTip", "Sets shape tags.\n@param NewTags New tags to set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoneShapeComponent_SetTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoneShapeComponent, nullptr, "SetTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_UZoneShapeComponent_SetTags_Statics::ZoneShapeComponent_eventSetTags_Parms), Z_Construct_UFunction_UZoneShapeComponent_SetTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoneShapeComponent_SetTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZoneShapeComponent_SetTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoneShapeComponent_SetTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZoneShapeComponent_SetTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoneShapeComponent_SetTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UZoneShapeComponent);
	UClass* Z_Construct_UClass_UZoneShapeComponent_NoRegister()
	{
		return UZoneShapeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UZoneShapeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaneProfile_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LaneProfile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReverseLaneProfile_MetaData[];
#endif
		static void NewProp_bReverseLaneProfile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverseLaneProfile;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PerPointLaneProfiles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerPointLaneProfiles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PerPointLaneProfiles;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ShapeType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShapeType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ShapeType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PolygonRoutingType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolygonRoutingType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PolygonRoutingType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShapeConnectors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShapeConnectors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ShapeConnectors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConnectedShapes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectedShapes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ConnectedShapes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZoneShapeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraph,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UZoneShapeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UZoneShapeComponent_GetShapeType, "GetShapeType" }, // 320016364
		{ &Z_Construct_UFunction_UZoneShapeComponent_GetTags, "GetTags" }, // 1291429320
		{ &Z_Construct_UFunction_UZoneShapeComponent_IsLaneProfileReversed, "IsLaneProfileReversed" }, // 4221508590
		{ &Z_Construct_UFunction_UZoneShapeComponent_SetPolygonRoutingType, "SetPolygonRoutingType" }, // 2898345747
		{ &Z_Construct_UFunction_UZoneShapeComponent_SetReverseLaneProfile, "SetReverseLaneProfile" }, // 70628370
		{ &Z_Construct_UFunction_UZoneShapeComponent_SetShapeType, "SetShapeType" }, // 2793810427
		{ &Z_Construct_UFunction_UZoneShapeComponent_SetTags, "SetTags" }, // 2996226355
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneShapeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Physics Collision Lighting Rendering Mobile Trigger VirtualTexture" },
		{ "IncludePath", "ZoneShapeComponent.h" },
		{ "ModuleRelativePath", "Public/ZoneShapeComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_LaneProfile_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Zone" },
		{ "Comment", "/** Common lane template for whole shape */" },
		{ "IncludeInHash", "" },
		{ "ModuleRelativePath", "Public/ZoneShapeComponent.h" },
		{ "ToolTip", "Common lane template for whole shape" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_LaneProfile = { "LaneProfile", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneShapeComponent, LaneProfile), Z_Construct_UScriptStruct_FZoneLaneProfileRef, METADATA_PARAMS(Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_LaneProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_LaneProfile_MetaData)) }; // 3800636170
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_bReverseLaneProfile_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Zone" },
		{ "Comment", "/** True if lane profile should be reversed */" },
		{ "IncludeInHash", "" },
		{ "ModuleRelativePath", "Public/ZoneShapeComponent.h" },
		{ "ToolTip", "True if lane profile should be reversed" },
	};
#endif
	void Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_bReverseLaneProfile_SetBit(void* Obj)
	{
		((UZoneShapeComponent*)Obj)->bReverseLaneProfile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_bReverseLaneProfile = { "bReverseLaneProfile", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UZoneShapeComponent), &Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_bReverseLaneProfile_SetBit, METADATA_PARAMS(Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_bReverseLaneProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_bReverseLaneProfile_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_PerPointLaneProfiles_Inner = { "PerPointLaneProfiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FZoneLaneProfileRef, METADATA_PARAMS(nullptr, 0) }; // 3800636170
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_PerPointLaneProfiles_MetaData[] = {
		{ "Comment", "/** Array of lane templates indexed by the points when the shape is polygon. */" },
		{ "IncludeInHash", "" },
		{ "ModuleRelativePath", "Public/ZoneShapeComponent.h" },
		{ "ToolTip", "Array of lane templates indexed by the points when the shape is polygon." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_PerPointLaneProfiles = { "PerPointLaneProfiles", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneShapeComponent, PerPointLaneProfiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_PerPointLaneProfiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_PerPointLaneProfiles_MetaData)) }; // 3800636170
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FZoneShapePoint, METADATA_PARAMS(nullptr, 0) }; // 4185255987
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_Points_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Zone" },
		{ "Comment", "/** Shape points */" },
		{ "IncludeInHash", "" },
		{ "ModuleRelativePath", "Public/ZoneShapeComponent.h" },
		{ "ToolTip", "Shape points" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneShapeComponent, Points), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_Points_MetaData)) }; // 4185255987
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_ShapeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_ShapeType_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Zone" },
		{ "Comment", "/** Shape type, spline or polygon */" },
		{ "IncludeInHash", "" },
		{ "ModuleRelativePath", "Public/ZoneShapeComponent.h" },
		{ "ToolTip", "Shape type, spline or polygon" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_ShapeType = { "ShapeType", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneShapeComponent, ShapeType), Z_Construct_UEnum_ZoneGraph_FZoneShapeType, METADATA_PARAMS(Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_ShapeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_ShapeType_MetaData)) }; // 1851379342
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_PolygonRoutingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_PolygonRoutingType_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Zone" },
		{ "Comment", "/** Polygon shape routing type */" },
		{ "EditCondition", "ShapeType == FZoneShapeType::Polygon" },
		{ "IncludeInHash", "" },
		{ "ModuleRelativePath", "Public/ZoneShapeComponent.h" },
		{ "ToolTip", "Polygon shape routing type" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_PolygonRoutingType = { "PolygonRoutingType", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneShapeComponent, PolygonRoutingType), Z_Construct_UEnum_ZoneGraph_EZoneShapePolygonRoutingType, METADATA_PARAMS(Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_PolygonRoutingType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_PolygonRoutingType_MetaData)) }; // 1984748963
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_Tags_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Zone" },
		{ "Comment", "/** Zone tags, the lanes inherit zone tags. */" },
		{ "IncludeInHash", "" },
		{ "ModuleRelativePath", "Public/ZoneShapeComponent.h" },
		{ "ToolTip", "Zone tags, the lanes inherit zone tags." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneShapeComponent, Tags), Z_Construct_UScriptStruct_FZoneGraphTagMask, METADATA_PARAMS(Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_Tags_MetaData)) }; // 1781901322
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_ShapeConnectors_Inner = { "ShapeConnectors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FZoneShapeConnector, METADATA_PARAMS(nullptr, 0) }; // 1635603375
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_ShapeConnectors_MetaData[] = {
		{ "Comment", "/** Connectors for other shapes (not stored, these are refreshed from points). */" },
		{ "ModuleRelativePath", "Public/ZoneShapeComponent.h" },
		{ "ToolTip", "Connectors for other shapes (not stored, these are refreshed from points)." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_ShapeConnectors = { "ShapeConnectors", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneShapeComponent, ShapeConnectors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_ShapeConnectors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_ShapeConnectors_MetaData)) }; // 1635603375
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_ConnectedShapes_Inner = { "ConnectedShapes", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FZoneShapeConnection, METADATA_PARAMS(nullptr, 0) }; // 2799536232
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_ConnectedShapes_MetaData[] = {
		{ "Comment", "/** Array of connections matching ShapeConnectors (not stored, these are refreshed from connectors). */" },
		{ "ModuleRelativePath", "Public/ZoneShapeComponent.h" },
		{ "ToolTip", "Array of connections matching ShapeConnectors (not stored, these are refreshed from connectors)." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_ConnectedShapes = { "ConnectedShapes", nullptr, (EPropertyFlags)0x0040008000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneShapeComponent, ConnectedShapes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_ConnectedShapes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_ConnectedShapes_MetaData)) }; // 2799536232
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZoneShapeComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_LaneProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_bReverseLaneProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_PerPointLaneProfiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_PerPointLaneProfiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_Points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_Points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_ShapeType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_ShapeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_PolygonRoutingType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_PolygonRoutingType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_Tags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_ShapeConnectors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_ShapeConnectors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_ConnectedShapes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneShapeComponent_Statics::NewProp_ConnectedShapes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZoneShapeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZoneShapeComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UZoneShapeComponent_Statics::ClassParams = {
		&UZoneShapeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UZoneShapeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UZoneShapeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UZoneShapeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneShapeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UZoneShapeComponent()
	{
		if (!Z_Registration_Info_UClass_UZoneShapeComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZoneShapeComponent.OuterSingleton, Z_Construct_UClass_UZoneShapeComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UZoneShapeComponent.OuterSingleton;
	}
	template<> ZONEGRAPH_API UClass* StaticClass<UZoneShapeComponent>()
	{
		return UZoneShapeComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZoneShapeComponent);
	UZoneShapeComponent::~UZoneShapeComponent() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UZoneShapeComponent)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UZoneShapeComponent, UZoneShapeComponent::StaticClass, TEXT("UZoneShapeComponent"), &Z_Registration_Info_UClass_UZoneShapeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZoneShapeComponent), 1304660805U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeComponent_h_2508609734(TEXT("/Script/ZoneGraph"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
