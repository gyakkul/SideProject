// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Animation/AnimSubsystem_Base.h"
#include "../../Source/Runtime/Engine/Public/Animation/ExposedValueHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimSubsystem_Base() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSubsystem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSubsystem_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExposedValueHandler();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimSubsystem_Base>() == std::is_polymorphic<FAnimSubsystem>(), "USTRUCT FAnimSubsystem_Base cannot be polymorphic unless super FAnimSubsystem is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimSubsystem_Base;
class UScriptStruct* FAnimSubsystem_Base::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimSubsystem_Base.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimSubsystem_Base.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimSubsystem_Base, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimSubsystem_Base"));
	}
	return Z_Registration_Info_UScriptStruct_AnimSubsystem_Base.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimSubsystem_Base>()
{
	return FAnimSubsystem_Base::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimSubsystem_Base_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExposedValueHandlers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExposedValueHandlers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExposedValueHandlers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSubsystem_Base_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Provides common built-in anim node functionality as a subsystem */" },
		{ "ModuleRelativePath", "Public/Animation/AnimSubsystem_Base.h" },
		{ "ToolTip", "Provides common built-in anim node functionality as a subsystem" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimSubsystem_Base_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimSubsystem_Base>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimSubsystem_Base_Statics::NewProp_ExposedValueHandlers_Inner = { "ExposedValueHandlers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FExposedValueHandler, METADATA_PARAMS(nullptr, 0) }; // 1648690771
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSubsystem_Base_Statics::NewProp_ExposedValueHandlers_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimSubsystem_Base.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimSubsystem_Base_Statics::NewProp_ExposedValueHandlers = { "ExposedValueHandlers", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimSubsystem_Base, ExposedValueHandlers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSubsystem_Base_Statics::NewProp_ExposedValueHandlers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSubsystem_Base_Statics::NewProp_ExposedValueHandlers_MetaData)) }; // 1648690771
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimSubsystem_Base_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSubsystem_Base_Statics::NewProp_ExposedValueHandlers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSubsystem_Base_Statics::NewProp_ExposedValueHandlers,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimSubsystem_Base_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimSubsystem,
		&NewStructOps,
		"AnimSubsystem_Base",
		sizeof(FAnimSubsystem_Base),
		alignof(FAnimSubsystem_Base),
		Z_Construct_UScriptStruct_FAnimSubsystem_Base_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSubsystem_Base_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSubsystem_Base_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSubsystem_Base_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimSubsystem_Base()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimSubsystem_Base.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimSubsystem_Base.InnerSingleton, Z_Construct_UScriptStruct_FAnimSubsystem_Base_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimSubsystem_Base.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_Base_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_Base_h_Statics::ScriptStructInfo[] = {
		{ FAnimSubsystem_Base::StaticStruct, Z_Construct_UScriptStruct_FAnimSubsystem_Base_Statics::NewStructOps, TEXT("AnimSubsystem_Base"), &Z_Registration_Info_UScriptStruct_AnimSubsystem_Base, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimSubsystem_Base), 3596925514U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_Base_h_2456985823(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_Base_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_Base_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
