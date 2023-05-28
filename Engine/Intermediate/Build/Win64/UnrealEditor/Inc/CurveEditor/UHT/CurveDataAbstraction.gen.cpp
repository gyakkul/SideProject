// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CurveDataAbstraction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveDataAbstraction() {}
// Cross Module References
	CURVEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FKeyAttributes();
	CURVEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FKeyPosition();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveInterpMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveTangentMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode();
	UPackage* Z_Construct_UPackage__Script_CurveEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KeyPosition;
class UScriptStruct* FKeyPosition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KeyPosition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KeyPosition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKeyPosition, (UObject*)Z_Construct_UPackage__Script_CurveEditor(), TEXT("KeyPosition"));
	}
	return Z_Registration_Info_UScriptStruct_KeyPosition.OuterSingleton;
}
template<> CURVEEDITOR_API UScriptStruct* StaticStruct<FKeyPosition>()
{
	return FKeyPosition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FKeyPosition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputValue_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_InputValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputValue_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_OutputValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyPosition_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Generic key position information for a key on a curve\n */" },
		{ "ModuleRelativePath", "Public/CurveDataAbstraction.h" },
		{ "ToolTip", "Generic key position information for a key on a curve" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKeyPosition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKeyPosition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyPosition_Statics::NewProp_InputValue_MetaData[] = {
		{ "Comment", "/** The key's input (x-axis) position (i.e. it's time) */" },
		{ "ModuleRelativePath", "Public/CurveDataAbstraction.h" },
		{ "ToolTip", "The key's input (x-axis) position (i.e. it's time)" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FKeyPosition_Statics::NewProp_InputValue = { "InputValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKeyPosition, InputValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyPosition_Statics::NewProp_InputValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyPosition_Statics::NewProp_InputValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyPosition_Statics::NewProp_OutputValue_MetaData[] = {
		{ "Comment", "/** The key's output (t-axis) position (i.e. it's value) */" },
		{ "ModuleRelativePath", "Public/CurveDataAbstraction.h" },
		{ "ToolTip", "The key's output (t-axis) position (i.e. it's value)" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FKeyPosition_Statics::NewProp_OutputValue = { "OutputValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKeyPosition, OutputValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyPosition_Statics::NewProp_OutputValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyPosition_Statics::NewProp_OutputValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKeyPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyPosition_Statics::NewProp_InputValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyPosition_Statics::NewProp_OutputValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKeyPosition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CurveEditor,
		nullptr,
		&NewStructOps,
		"KeyPosition",
		sizeof(FKeyPosition),
		alignof(FKeyPosition),
		Z_Construct_UScriptStruct_FKeyPosition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyPosition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyPosition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyPosition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKeyPosition()
	{
		if (!Z_Registration_Info_UScriptStruct_KeyPosition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KeyPosition.InnerSingleton, Z_Construct_UScriptStruct_FKeyPosition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_KeyPosition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KeyAttributes;
class UScriptStruct* FKeyAttributes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KeyAttributes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KeyAttributes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKeyAttributes, (UObject*)Z_Construct_UPackage__Script_CurveEditor(), TEXT("KeyAttributes"));
	}
	return Z_Registration_Info_UScriptStruct_KeyAttributes.OuterSingleton;
}
template<> CURVEEDITOR_API UScriptStruct* StaticStruct<FKeyAttributes>()
{
	return FKeyAttributes::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FKeyAttributes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasArriveTangent_MetaData[];
#endif
		static void NewProp_bHasArriveTangent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasArriveTangent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasLeaveTangent_MetaData[];
#endif
		static void NewProp_bHasLeaveTangent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasLeaveTangent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasInterpMode_MetaData[];
#endif
		static void NewProp_bHasInterpMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasInterpMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasTangentMode_MetaData[];
#endif
		static void NewProp_bHasTangentMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasTangentMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasTangentWeightMode_MetaData[];
#endif
		static void NewProp_bHasTangentWeightMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasTangentWeightMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasArriveTangentWeight_MetaData[];
#endif
		static void NewProp_bHasArriveTangentWeight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasArriveTangentWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasLeaveTangentWeight_MetaData[];
#endif
		static void NewProp_bHasLeaveTangentWeight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasLeaveTangentWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArriveTangent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ArriveTangent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeaveTangent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LeaveTangent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_InterpMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TangentMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TangentMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TangentWeightMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TangentWeightMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArriveTangentWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ArriveTangentWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeaveTangentWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LeaveTangentWeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyAttributes_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Extended attributes that the curve editor understands\n */" },
		{ "ModuleRelativePath", "Public/CurveDataAbstraction.h" },
		{ "ToolTip", "Extended attributes that the curve editor understands" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKeyAttributes>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_bHasArriveTangent_MetaData[] = {
		{ "Comment", "/** True if this key supports entry tangents */" },
		{ "ModuleRelativePath", "Public/CurveDataAbstraction.h" },
		{ "ToolTip", "True if this key supports entry tangents" },
	};
#endif
	void Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_bHasArriveTangent_SetBit(void* Obj)
	{
		((FKeyAttributes*)Obj)->bHasArriveTangent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_bHasArriveTangent = { "bHasArriveTangent", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FKeyAttributes), &Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_bHasArriveTangent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_bHasArriveTangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_bHasArriveTangent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_bHasLeaveTangent_MetaData[] = {
		{ "Comment", "/** True if this key supports exit tangents */" },
		{ "ModuleRelativePath", "Public/CurveDataAbstraction.h" },
		{ "ToolTip", "True if this key supports exit tangents" },
	};
#endif
	void Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_bHasLeaveTangent_SetBit(void* Obj)
	{
		((FKeyAttributes*)Obj)->bHasLeaveTangent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_bHasLeaveTangent = { "bHasLeaveTangent", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FKeyAttributes), &Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_bHasLeaveTangent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_bHasLeaveTangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_bHasLeaveTangent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_bHasInterpMode_MetaData[] = {
		{ "Comment", "/** True if this key supports interpolation modes */" },
		{ "ModuleRelativePath", "Public/CurveDataAbstraction.h" },
		{ "ToolTip", "True if this key supports interpolation modes" },
	};
#endif
	void Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_bHasInterpMode_SetBit(void* Obj)
	{
		((FKeyAttributes*)Obj)->bHasInterpMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_bHasInterpMode = { "bHasInterpMode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FKeyAttributes), &Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_bHasInterpMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_bHasInterpMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_bHasInterpMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_bHasTangentMode_MetaData[] = {
		{ "Comment", "/** True if this key supports tangent modes */" },
		{ "ModuleRelativePath", "Public/CurveDataAbstraction.h" },
		{ "ToolTip", "True if this key supports tangent modes" },
	};
#endif
	void Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_bHasTangentMode_SetBit(void* Obj)
	{
		((FKeyAttributes*)Obj)->bHasTangentMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_bHasTangentMode = { "bHasTangentMode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FKeyAttributes), &Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_bHasTangentMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_bHasTangentMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_bHasTangentMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_bHasTangentWeightMode_MetaData[] = {
		{ "Comment", "/** True if this key supports tangent modes */" },
		{ "ModuleRelativePath", "Public/CurveDataAbstraction.h" },
		{ "ToolTip", "True if this key supports tangent modes" },
	};
#endif
	void Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_bHasTangentWeightMode_SetBit(void* Obj)
	{
		((FKeyAttributes*)Obj)->bHasTangentWeightMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_bHasTangentWeightMode = { "bHasTangentWeightMode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FKeyAttributes), &Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_bHasTangentWeightMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_bHasTangentWeightMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_bHasTangentWeightMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_bHasArriveTangentWeight_MetaData[] = {
		{ "Comment", "/** True if this key supports entry tangents weights*/" },
		{ "ModuleRelativePath", "Public/CurveDataAbstraction.h" },
		{ "ToolTip", "True if this key supports entry tangents weights" },
	};
#endif
	void Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_bHasArriveTangentWeight_SetBit(void* Obj)
	{
		((FKeyAttributes*)Obj)->bHasArriveTangentWeight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_bHasArriveTangentWeight = { "bHasArriveTangentWeight", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FKeyAttributes), &Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_bHasArriveTangentWeight_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_bHasArriveTangentWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_bHasArriveTangentWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_bHasLeaveTangentWeight_MetaData[] = {
		{ "Comment", "/** True if this key supports exit tangents weights*/" },
		{ "ModuleRelativePath", "Public/CurveDataAbstraction.h" },
		{ "ToolTip", "True if this key supports exit tangents weights" },
	};
#endif
	void Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_bHasLeaveTangentWeight_SetBit(void* Obj)
	{
		((FKeyAttributes*)Obj)->bHasLeaveTangentWeight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_bHasLeaveTangentWeight = { "bHasLeaveTangentWeight", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FKeyAttributes), &Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_bHasLeaveTangentWeight_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_bHasLeaveTangentWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_bHasLeaveTangentWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_ArriveTangent_MetaData[] = {
		{ "Comment", "/** This key's entry tangent, if bHasArriveTangent */" },
		{ "ModuleRelativePath", "Public/CurveDataAbstraction.h" },
		{ "ToolTip", "This key's entry tangent, if bHasArriveTangent" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_ArriveTangent = { "ArriveTangent", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKeyAttributes, ArriveTangent), METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_ArriveTangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_ArriveTangent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_LeaveTangent_MetaData[] = {
		{ "Comment", "/** This key's exit tangent, if bHasLeaveTangent */" },
		{ "ModuleRelativePath", "Public/CurveDataAbstraction.h" },
		{ "ToolTip", "This key's exit tangent, if bHasLeaveTangent" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_LeaveTangent = { "LeaveTangent", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKeyAttributes, LeaveTangent), METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_LeaveTangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_LeaveTangent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_InterpMode_MetaData[] = {
		{ "Comment", "/** This key's interpolation mode, if bHasInterpMode */" },
		{ "ModuleRelativePath", "Public/CurveDataAbstraction.h" },
		{ "ToolTip", "This key's interpolation mode, if bHasInterpMode" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_InterpMode = { "InterpMode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKeyAttributes, InterpMode), Z_Construct_UEnum_Engine_ERichCurveInterpMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_InterpMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_InterpMode_MetaData)) }; // 931686469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_TangentMode_MetaData[] = {
		{ "Comment", "/** This key's tangent mode, if bHasTangentMode */" },
		{ "ModuleRelativePath", "Public/CurveDataAbstraction.h" },
		{ "ToolTip", "This key's tangent mode, if bHasTangentMode" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_TangentMode = { "TangentMode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKeyAttributes, TangentMode), Z_Construct_UEnum_Engine_ERichCurveTangentMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_TangentMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_TangentMode_MetaData)) }; // 161970341
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_TangentWeightMode_MetaData[] = {
		{ "Comment", "/** This key's tangent weight mode, if bHasTangentWeightMode */" },
		{ "ModuleRelativePath", "Public/CurveDataAbstraction.h" },
		{ "ToolTip", "This key's tangent weight mode, if bHasTangentWeightMode" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_TangentWeightMode = { "TangentWeightMode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKeyAttributes, TangentWeightMode), Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_TangentWeightMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_TangentWeightMode_MetaData)) }; // 3709203772
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_ArriveTangentWeight_MetaData[] = {
		{ "Comment", "/** This key's entry tangent weight, if bHasArriveTangentWeight */" },
		{ "ModuleRelativePath", "Public/CurveDataAbstraction.h" },
		{ "ToolTip", "This key's entry tangent weight, if bHasArriveTangentWeight" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_ArriveTangentWeight = { "ArriveTangentWeight", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKeyAttributes, ArriveTangentWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_ArriveTangentWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_ArriveTangentWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_LeaveTangentWeight_MetaData[] = {
		{ "Comment", "/** This key's exit tangent weight, if bHasLeaveTangentWeight */" },
		{ "ModuleRelativePath", "Public/CurveDataAbstraction.h" },
		{ "ToolTip", "This key's exit tangent weight, if bHasLeaveTangentWeight" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_LeaveTangentWeight = { "LeaveTangentWeight", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKeyAttributes, LeaveTangentWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_LeaveTangentWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_LeaveTangentWeight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKeyAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_bHasArriveTangent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_bHasLeaveTangent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_bHasInterpMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_bHasTangentMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_bHasTangentWeightMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_bHasArriveTangentWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_bHasLeaveTangentWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_ArriveTangent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_LeaveTangent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_InterpMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_TangentMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_TangentWeightMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_ArriveTangentWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewProp_LeaveTangentWeight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKeyAttributes_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CurveEditor,
		nullptr,
		&NewStructOps,
		"KeyAttributes",
		sizeof(FKeyAttributes),
		alignof(FKeyAttributes),
		Z_Construct_UScriptStruct_FKeyAttributes_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyAttributes_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyAttributes_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyAttributes_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKeyAttributes()
	{
		if (!Z_Registration_Info_UScriptStruct_KeyAttributes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KeyAttributes.InnerSingleton, Z_Construct_UScriptStruct_FKeyAttributes_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_KeyAttributes.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_CurveEditor_Public_CurveDataAbstraction_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_CurveEditor_Public_CurveDataAbstraction_h_Statics::ScriptStructInfo[] = {
		{ FKeyPosition::StaticStruct, Z_Construct_UScriptStruct_FKeyPosition_Statics::NewStructOps, TEXT("KeyPosition"), &Z_Registration_Info_UScriptStruct_KeyPosition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKeyPosition), 4065569267U) },
		{ FKeyAttributes::StaticStruct, Z_Construct_UScriptStruct_FKeyAttributes_Statics::NewStructOps, TEXT("KeyAttributes"), &Z_Registration_Info_UScriptStruct_KeyAttributes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKeyAttributes), 3979061704U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_CurveEditor_Public_CurveDataAbstraction_h_2655493706(TEXT("/Script/CurveEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_CurveEditor_Public_CurveDataAbstraction_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_CurveEditor_Public_CurveDataAbstraction_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
