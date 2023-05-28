// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimSequencerInstanceProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimSequencerInstanceProxy() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ESwapRootBone();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSequencerInstanceProxy();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimInstanceProxy();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESwapRootBone;
	static UEnum* ESwapRootBone_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESwapRootBone.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESwapRootBone.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_ESwapRootBone, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("ESwapRootBone"));
		}
		return Z_Registration_Info_UEnum_ESwapRootBone.OuterSingleton;
	}
	template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<ESwapRootBone>()
	{
		return ESwapRootBone_StaticEnum();
	}
	struct Z_Construct_UEnum_AnimGraphRuntime_ESwapRootBone_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnimGraphRuntime_ESwapRootBone_Statics::Enumerators[] = {
		{ "ESwapRootBone::SwapRootBone_Component", (int64)ESwapRootBone::SwapRootBone_Component },
		{ "ESwapRootBone::SwapRootBone_Actor", (int64)ESwapRootBone::SwapRootBone_Actor },
		{ "ESwapRootBone::SwapRootBone_None", (int64)ESwapRootBone::SwapRootBone_None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnimGraphRuntime_ESwapRootBone_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimSequencerInstanceProxy.h" },
		{ "SwapRootBone_Actor.Comment", "/* Swap root bone to the actor root component */" },
		{ "SwapRootBone_Actor.Name", "ESwapRootBone::SwapRootBone_Actor" },
		{ "SwapRootBone_Actor.ToolTip", "Swap root bone to the actor root component" },
		{ "SwapRootBone_Component.Comment", "/* Swap the root bone to the component */" },
		{ "SwapRootBone_Component.Name", "ESwapRootBone::SwapRootBone_Component" },
		{ "SwapRootBone_Component.ToolTip", "Swap the root bone to the component" },
		{ "SwapRootBone_None.Comment", "/* Do not swap the root bone */" },
		{ "SwapRootBone_None.Name", "ESwapRootBone::SwapRootBone_None" },
		{ "SwapRootBone_None.ToolTip", "Do not swap the root bone" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraphRuntime_ESwapRootBone_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		"ESwapRootBone",
		"ESwapRootBone",
		Z_Construct_UEnum_AnimGraphRuntime_ESwapRootBone_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_ESwapRootBone_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AnimGraphRuntime_ESwapRootBone_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_ESwapRootBone_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_ESwapRootBone()
	{
		if (!Z_Registration_Info_UEnum_ESwapRootBone.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESwapRootBone.InnerSingleton, Z_Construct_UEnum_AnimGraphRuntime_ESwapRootBone_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESwapRootBone.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimSequencerInstanceProxy>() == std::is_polymorphic<FAnimInstanceProxy>(), "USTRUCT FAnimSequencerInstanceProxy cannot be polymorphic unless super FAnimInstanceProxy is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimSequencerInstanceProxy;
class UScriptStruct* FAnimSequencerInstanceProxy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimSequencerInstanceProxy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimSequencerInstanceProxy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimSequencerInstanceProxy, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimSequencerInstanceProxy"));
	}
	return Z_Registration_Info_UScriptStruct_AnimSequencerInstanceProxy.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimSequencerInstanceProxy>()
{
	return FAnimSequencerInstanceProxy::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimSequencerInstanceProxy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSequencerInstanceProxy_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Proxy override for this UAnimInstance-derived class */" },
		{ "ModuleRelativePath", "Public/AnimSequencerInstanceProxy.h" },
		{ "ToolTip", "Proxy override for this UAnimInstance-derived class" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimSequencerInstanceProxy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimSequencerInstanceProxy>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimSequencerInstanceProxy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimInstanceProxy,
		&NewStructOps,
		"AnimSequencerInstanceProxy",
		sizeof(FAnimSequencerInstanceProxy),
		alignof(FAnimSequencerInstanceProxy),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSequencerInstanceProxy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSequencerInstanceProxy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimSequencerInstanceProxy()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimSequencerInstanceProxy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimSequencerInstanceProxy.InnerSingleton, Z_Construct_UScriptStruct_FAnimSequencerInstanceProxy_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimSequencerInstanceProxy.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimSequencerInstanceProxy_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimSequencerInstanceProxy_h_Statics::EnumInfo[] = {
		{ ESwapRootBone_StaticEnum, TEXT("ESwapRootBone"), &Z_Registration_Info_UEnum_ESwapRootBone, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2570974762U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimSequencerInstanceProxy_h_Statics::ScriptStructInfo[] = {
		{ FAnimSequencerInstanceProxy::StaticStruct, Z_Construct_UScriptStruct_FAnimSequencerInstanceProxy_Statics::NewStructOps, TEXT("AnimSequencerInstanceProxy"), &Z_Registration_Info_UScriptStruct_AnimSequencerInstanceProxy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimSequencerInstanceProxy), 1368546767U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimSequencerInstanceProxy_h_3515173487(TEXT("/Script/AnimGraphRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimSequencerInstanceProxy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimSequencerInstanceProxy_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimSequencerInstanceProxy_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimSequencerInstanceProxy_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
