// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Animation/ActiveStateMachineScope.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActiveStateMachineScope() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEncounteredStateMachineStack();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EncounteredStateMachineStack;
class UScriptStruct* FEncounteredStateMachineStack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EncounteredStateMachineStack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EncounteredStateMachineStack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEncounteredStateMachineStack, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EncounteredStateMachineStack"));
	}
	return Z_Registration_Info_UScriptStruct_EncounteredStateMachineStack.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FEncounteredStateMachineStack>()
{
	return FEncounteredStateMachineStack::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEncounteredStateMachineStack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncounteredStateMachineStack_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/ActiveStateMachineScope.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEncounteredStateMachineStack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEncounteredStateMachineStack>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEncounteredStateMachineStack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"EncounteredStateMachineStack",
		sizeof(FEncounteredStateMachineStack),
		alignof(FEncounteredStateMachineStack),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEncounteredStateMachineStack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncounteredStateMachineStack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEncounteredStateMachineStack()
	{
		if (!Z_Registration_Info_UScriptStruct_EncounteredStateMachineStack.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EncounteredStateMachineStack.InnerSingleton, Z_Construct_UScriptStruct_FEncounteredStateMachineStack_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EncounteredStateMachineStack.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_ActiveStateMachineScope_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_ActiveStateMachineScope_h_Statics::ScriptStructInfo[] = {
		{ FEncounteredStateMachineStack::StaticStruct, Z_Construct_UScriptStruct_FEncounteredStateMachineStack_Statics::NewStructOps, TEXT("EncounteredStateMachineStack"), &Z_Registration_Info_UScriptStruct_EncounteredStateMachineStack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEncounteredStateMachineStack), 1419544169U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_ActiveStateMachineScope_h_2454956061(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_ActiveStateMachineScope_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_ActiveStateMachineScope_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
