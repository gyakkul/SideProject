// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KismetAnimationTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKismetAnimationTypes() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPositionHistory();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PositionHistory;
class UScriptStruct* FPositionHistory::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PositionHistory.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PositionHistory.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPositionHistory, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("PositionHistory"));
	}
	return Z_Registration_Info_UScriptStruct_PositionHistory.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FPositionHistory>()
{
	return FPositionHistory::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPositionHistory_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Positions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Positions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Positions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Range;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPositionHistory_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""An easing type defining how to ease float values.\n *\x09The FPositionHistory is a container to record position changes\n *\x09over time. This is used to calculate velocity of a bone, for example.\n *\x09The FPositionArray also tracks the last index used to allow for \n *\x09reuse of entries (instead of appending to the array all the time).\n */" },
		{ "DocumentationPolicy", "Strict" },
		{ "ModuleRelativePath", "Public/KismetAnimationTypes.h" },
		{ "ToolTip", "An easing type defining how to ease float values.\nThe FPositionHistory is a container to record position changes\nover time. This is used to calculate velocity of a bone, for example.\nThe FPositionArray also tracks the last index used to allow for\nreuse of entries (instead of appending to the array all the time)." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPositionHistory_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPositionHistory>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPositionHistory_Statics::NewProp_Positions_Inner = { "Positions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPositionHistory_Statics::NewProp_Positions_MetaData[] = {
		{ "Category", "FPositionHistory" },
		{ "Comment", "/** The recorded positions */" },
		{ "ModuleRelativePath", "Public/KismetAnimationTypes.h" },
		{ "ToolTip", "The recorded positions" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPositionHistory_Statics::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPositionHistory, Positions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPositionHistory_Statics::NewProp_Positions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPositionHistory_Statics::NewProp_Positions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPositionHistory_Statics::NewProp_Range_MetaData[] = {
		{ "Category", "FPositionHistory" },
		{ "Comment", "/** The range for this particular history */" },
		{ "ModuleRelativePath", "Public/KismetAnimationTypes.h" },
		{ "ToolTip", "The range for this particular history" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPositionHistory_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPositionHistory, Range), METADATA_PARAMS(Z_Construct_UScriptStruct_FPositionHistory_Statics::NewProp_Range_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPositionHistory_Statics::NewProp_Range_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPositionHistory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPositionHistory_Statics::NewProp_Positions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPositionHistory_Statics::NewProp_Positions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPositionHistory_Statics::NewProp_Range,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPositionHistory_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		&NewStructOps,
		"PositionHistory",
		sizeof(FPositionHistory),
		alignof(FPositionHistory),
		Z_Construct_UScriptStruct_FPositionHistory_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPositionHistory_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPositionHistory_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPositionHistory_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPositionHistory()
	{
		if (!Z_Registration_Info_UScriptStruct_PositionHistory.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PositionHistory.InnerSingleton, Z_Construct_UScriptStruct_FPositionHistory_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PositionHistory.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationTypes_h_Statics::ScriptStructInfo[] = {
		{ FPositionHistory::StaticStruct, Z_Construct_UScriptStruct_FPositionHistory_Statics::NewStructOps, TEXT("PositionHistory"), &Z_Registration_Info_UScriptStruct_PositionHistory, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPositionHistory), 1859106238U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationTypes_h_2180757347(TEXT("/Script/AnimGraphRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
