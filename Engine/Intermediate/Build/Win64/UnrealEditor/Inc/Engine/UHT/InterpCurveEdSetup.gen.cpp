// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpCurveEdSetup() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UInterpCurveEdSetup();
	ENGINE_API UClass* Z_Construct_UClass_UInterpCurveEdSetup_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCurveEdEntry();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCurveEdTab();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CurveEdEntry;
class UScriptStruct* FCurveEdEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CurveEdEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CurveEdEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurveEdEntry, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CurveEdEntry"));
	}
	return Z_Registration_Info_UScriptStruct_CurveEdEntry.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCurveEdEntry>()
{
	return FCurveEdEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCurveEdEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CurveObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurveColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CurveName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideCurve_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_bHideCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bColorCurve_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_bColorCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFloatingPointColorCurve_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_bFloatingPointColorCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClamp_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_bClamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClampLow_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClampLow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClampHigh_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClampHigh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveEdEntry_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Information about a particule curve being viewed.\n// Property could be an FInterpCurve, a DistributionFloat or a DistributionVector\n" },
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
		{ "ToolTip", "Information about a particule curve being viewed.\nProperty could be an FInterpCurve, a DistributionFloat or a DistributionVector" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurveEdEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_CurveObject_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_CurveObject = { "CurveObject", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCurveEdEntry, CurveObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_CurveObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_CurveObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_CurveColor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_CurveColor = { "CurveColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCurveEdEntry, CurveColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_CurveColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_CurveColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_CurveName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCurveEdEntry, CurveName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_CurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_CurveName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_bHideCurve_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_bHideCurve = { "bHideCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCurveEdEntry, bHideCurve), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_bHideCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_bHideCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_bColorCurve_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_bColorCurve = { "bColorCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCurveEdEntry, bColorCurve), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_bColorCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_bColorCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_bFloatingPointColorCurve_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_bFloatingPointColorCurve = { "bFloatingPointColorCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCurveEdEntry, bFloatingPointColorCurve), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_bFloatingPointColorCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_bFloatingPointColorCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_bClamp_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_bClamp = { "bClamp", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCurveEdEntry, bClamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_bClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_bClamp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_ClampLow_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_ClampLow = { "ClampLow", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCurveEdEntry, ClampLow), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_ClampLow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_ClampLow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_ClampHigh_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_ClampHigh = { "ClampHigh", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCurveEdEntry, ClampHigh), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_ClampHigh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_ClampHigh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCurveEdEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_CurveObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_CurveColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_CurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_bHideCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_bColorCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_bFloatingPointColorCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_bClamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_ClampLow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_ClampHigh,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCurveEdEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CurveEdEntry",
		sizeof(FCurveEdEntry),
		alignof(FCurveEdEntry),
		Z_Construct_UScriptStruct_FCurveEdEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveEdEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveEdEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveEdEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCurveEdEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_CurveEdEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CurveEdEntry.InnerSingleton, Z_Construct_UScriptStruct_FCurveEdEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CurveEdEntry.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CurveEdTab;
class UScriptStruct* FCurveEdTab::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CurveEdTab.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CurveEdTab.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurveEdTab, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CurveEdTab"));
	}
	return Z_Registration_Info_UScriptStruct_CurveEdTab.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCurveEdTab>()
{
	return FCurveEdTab::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCurveEdTab_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TabName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Curves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Curves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Curves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewStartInput_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewStartInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewEndInput_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewEndInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewStartOutput_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewStartOutput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewEndOutput_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewEndOutput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveEdTab_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurveEdTab>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_TabName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_TabName = { "TabName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCurveEdTab, TabName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_TabName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_TabName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_Curves_Inner = { "Curves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCurveEdEntry, METADATA_PARAMS(nullptr, 0) }; // 2116969733
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_Curves_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_Curves = { "Curves", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCurveEdTab, Curves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_Curves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_Curves_MetaData)) }; // 2116969733
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_ViewStartInput_MetaData[] = {
		{ "Comment", "// Remember the view setting for each tab.\n" },
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
		{ "ToolTip", "Remember the view setting for each tab." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_ViewStartInput = { "ViewStartInput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCurveEdTab, ViewStartInput), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_ViewStartInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_ViewStartInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_ViewEndInput_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_ViewEndInput = { "ViewEndInput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCurveEdTab, ViewEndInput), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_ViewEndInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_ViewEndInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_ViewStartOutput_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_ViewStartOutput = { "ViewStartOutput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCurveEdTab, ViewStartOutput), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_ViewStartOutput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_ViewStartOutput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_ViewEndOutput_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_ViewEndOutput = { "ViewEndOutput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCurveEdTab, ViewEndOutput), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_ViewEndOutput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_ViewEndOutput_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCurveEdTab_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_TabName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_Curves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_Curves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_ViewStartInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_ViewEndInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_ViewStartOutput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_ViewEndOutput,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCurveEdTab_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CurveEdTab",
		sizeof(FCurveEdTab),
		alignof(FCurveEdTab),
		Z_Construct_UScriptStruct_FCurveEdTab_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveEdTab_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveEdTab_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveEdTab_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCurveEdTab()
	{
		if (!Z_Registration_Info_UScriptStruct_CurveEdTab.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CurveEdTab.InnerSingleton, Z_Construct_UScriptStruct_FCurveEdTab_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CurveEdTab.InnerSingleton;
	}
	void UInterpCurveEdSetup::StaticRegisterNativesUInterpCurveEdSetup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterpCurveEdSetup);
	UClass* Z_Construct_UClass_UInterpCurveEdSetup_NoRegister()
	{
		return UInterpCurveEdSetup::StaticClass();
	}
	struct Z_Construct_UClass_UInterpCurveEdSetup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tabs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tabs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tabs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveTab_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ActiveTab;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpCurveEdSetup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpCurveEdSetup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/InterpCurveEdSetup.h" },
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpCurveEdSetup_Statics::NewProp_Tabs_Inner = { "Tabs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCurveEdTab, METADATA_PARAMS(nullptr, 0) }; // 3685721775
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpCurveEdSetup_Statics::NewProp_Tabs_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpCurveEdSetup_Statics::NewProp_Tabs = { "Tabs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterpCurveEdSetup, Tabs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInterpCurveEdSetup_Statics::NewProp_Tabs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpCurveEdSetup_Statics::NewProp_Tabs_MetaData)) }; // 3685721775
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpCurveEdSetup_Statics::NewProp_ActiveTab_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInterpCurveEdSetup_Statics::NewProp_ActiveTab = { "ActiveTab", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterpCurveEdSetup, ActiveTab), METADATA_PARAMS(Z_Construct_UClass_UInterpCurveEdSetup_Statics::NewProp_ActiveTab_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpCurveEdSetup_Statics::NewProp_ActiveTab_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpCurveEdSetup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpCurveEdSetup_Statics::NewProp_Tabs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpCurveEdSetup_Statics::NewProp_Tabs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpCurveEdSetup_Statics::NewProp_ActiveTab,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpCurveEdSetup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpCurveEdSetup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterpCurveEdSetup_Statics::ClassParams = {
		&UInterpCurveEdSetup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpCurveEdSetup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterpCurveEdSetup_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpCurveEdSetup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpCurveEdSetup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpCurveEdSetup()
	{
		if (!Z_Registration_Info_UClass_UInterpCurveEdSetup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterpCurveEdSetup.OuterSingleton, Z_Construct_UClass_UInterpCurveEdSetup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterpCurveEdSetup.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInterpCurveEdSetup>()
	{
		return UInterpCurveEdSetup::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpCurveEdSetup);
	UInterpCurveEdSetup::~UInterpCurveEdSetup() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InterpCurveEdSetup_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InterpCurveEdSetup_h_Statics::ScriptStructInfo[] = {
		{ FCurveEdEntry::StaticStruct, Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewStructOps, TEXT("CurveEdEntry"), &Z_Registration_Info_UScriptStruct_CurveEdEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCurveEdEntry), 2116969733U) },
		{ FCurveEdTab::StaticStruct, Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewStructOps, TEXT("CurveEdTab"), &Z_Registration_Info_UScriptStruct_CurveEdTab, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCurveEdTab), 3685721775U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InterpCurveEdSetup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterpCurveEdSetup, UInterpCurveEdSetup::StaticClass, TEXT("UInterpCurveEdSetup"), &Z_Registration_Info_UClass_UInterpCurveEdSetup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterpCurveEdSetup), 1227538482U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InterpCurveEdSetup_h_3712523604(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InterpCurveEdSetup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InterpCurveEdSetup_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InterpCurveEdSetup_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InterpCurveEdSetup_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
