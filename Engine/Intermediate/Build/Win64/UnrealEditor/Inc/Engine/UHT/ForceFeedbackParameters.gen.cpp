// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/ForceFeedbackParameters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeForceFeedbackParameters() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FForceFeedbackParameters();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ForceFeedbackParameters;
class UScriptStruct* FForceFeedbackParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ForceFeedbackParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ForceFeedbackParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FForceFeedbackParameters, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ForceFeedbackParameters"));
	}
	return Z_Registration_Info_UScriptStruct_ForceFeedbackParameters.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FForceFeedbackParameters>()
{
	return FForceFeedbackParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreTimeDilation_MetaData[];
#endif
		static void NewProp_bIgnoreTimeDilation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreTimeDilation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPlayWhilePaused_MetaData[];
#endif
		static void NewProp_bPlayWhilePaused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayWhilePaused;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** This structure is used to pass arguments to ClientPlayForceFeedback() client RPC function */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackParameters.h" },
		{ "ToolTip", "This structure is used to pass arguments to ClientPlayForceFeedback() client RPC function" },
	};
#endif
	void* Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FForceFeedbackParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_Tag_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackParameters.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FForceFeedbackParameters, Tag), METADATA_PARAMS(Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_Tag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bLooping_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackParameters.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((FForceFeedbackParameters*)Obj)->bLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FForceFeedbackParameters), &Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bLooping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bIgnoreTimeDilation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackParameters.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bIgnoreTimeDilation_SetBit(void* Obj)
	{
		((FForceFeedbackParameters*)Obj)->bIgnoreTimeDilation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bIgnoreTimeDilation = { "bIgnoreTimeDilation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FForceFeedbackParameters), &Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bIgnoreTimeDilation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bIgnoreTimeDilation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bIgnoreTimeDilation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bPlayWhilePaused_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackParameters.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bPlayWhilePaused_SetBit(void* Obj)
	{
		((FForceFeedbackParameters*)Obj)->bPlayWhilePaused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bPlayWhilePaused = { "bPlayWhilePaused", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FForceFeedbackParameters), &Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bPlayWhilePaused_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bPlayWhilePaused_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bPlayWhilePaused_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bLooping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bIgnoreTimeDilation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bPlayWhilePaused,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ForceFeedbackParameters",
		sizeof(FForceFeedbackParameters),
		alignof(FForceFeedbackParameters),
		Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FForceFeedbackParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_ForceFeedbackParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ForceFeedbackParameters.InnerSingleton, Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ForceFeedbackParameters.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackParameters_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackParameters_h_Statics::ScriptStructInfo[] = {
		{ FForceFeedbackParameters::StaticStruct, Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewStructOps, TEXT("ForceFeedbackParameters"), &Z_Registration_Info_UScriptStruct_ForceFeedbackParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FForceFeedbackParameters), 1934393648U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackParameters_h_605349616(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackParameters_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackParameters_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
