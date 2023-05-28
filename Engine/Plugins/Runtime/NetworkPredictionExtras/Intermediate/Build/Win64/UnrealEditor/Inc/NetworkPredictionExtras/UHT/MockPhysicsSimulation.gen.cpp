// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MockPhysicsSimulation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMockPhysicsSimulation() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	NETWORKPREDICTIONEXTRAS_API UScriptStruct* Z_Construct_UScriptStruct_FMockPhysicsInputCmd();
	UPackage* Z_Construct_UPackage__Script_NetworkPredictionExtras();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MockPhysicsInputCmd;
class UScriptStruct* FMockPhysicsInputCmd::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MockPhysicsInputCmd.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MockPhysicsInputCmd.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMockPhysicsInputCmd, (UObject*)Z_Construct_UPackage__Script_NetworkPredictionExtras(), TEXT("MockPhysicsInputCmd"));
	}
	return Z_Registration_Info_UScriptStruct_MockPhysicsInputCmd.OuterSingleton;
}
template<> NETWORKPREDICTIONEXTRAS_API UScriptStruct* StaticStruct<FMockPhysicsInputCmd>()
{
	return FMockPhysicsInputCmd::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMockPhysicsInputCmd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementInput_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MovementInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bJumpedPressed_MetaData[];
#endif
		static void NewProp_bJumpedPressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bJumpedPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bChargePressed_MetaData[];
#endif
		static void NewProp_bChargePressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bChargePressed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMockPhysicsInputCmd_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Making this a blueprint type to that it can be filled out by BPs.\n" },
		{ "ModuleRelativePath", "Public/MockPhysicsSimulation.h" },
		{ "ToolTip", "Making this a blueprint type to that it can be filled out by BPs." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMockPhysicsInputCmd_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMockPhysicsInputCmd>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMockPhysicsInputCmd_Statics::NewProp_MovementInput_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/MockPhysicsSimulation.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMockPhysicsInputCmd_Statics::NewProp_MovementInput = { "MovementInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMockPhysicsInputCmd, MovementInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMockPhysicsInputCmd_Statics::NewProp_MovementInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMockPhysicsInputCmd_Statics::NewProp_MovementInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMockPhysicsInputCmd_Statics::NewProp_bJumpedPressed_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/MockPhysicsSimulation.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMockPhysicsInputCmd_Statics::NewProp_bJumpedPressed_SetBit(void* Obj)
	{
		((FMockPhysicsInputCmd*)Obj)->bJumpedPressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMockPhysicsInputCmd_Statics::NewProp_bJumpedPressed = { "bJumpedPressed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMockPhysicsInputCmd), &Z_Construct_UScriptStruct_FMockPhysicsInputCmd_Statics::NewProp_bJumpedPressed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMockPhysicsInputCmd_Statics::NewProp_bJumpedPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMockPhysicsInputCmd_Statics::NewProp_bJumpedPressed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMockPhysicsInputCmd_Statics::NewProp_bChargePressed_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/MockPhysicsSimulation.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMockPhysicsInputCmd_Statics::NewProp_bChargePressed_SetBit(void* Obj)
	{
		((FMockPhysicsInputCmd*)Obj)->bChargePressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMockPhysicsInputCmd_Statics::NewProp_bChargePressed = { "bChargePressed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMockPhysicsInputCmd), &Z_Construct_UScriptStruct_FMockPhysicsInputCmd_Statics::NewProp_bChargePressed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMockPhysicsInputCmd_Statics::NewProp_bChargePressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMockPhysicsInputCmd_Statics::NewProp_bChargePressed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMockPhysicsInputCmd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMockPhysicsInputCmd_Statics::NewProp_MovementInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMockPhysicsInputCmd_Statics::NewProp_bJumpedPressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMockPhysicsInputCmd_Statics::NewProp_bChargePressed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMockPhysicsInputCmd_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkPredictionExtras,
		nullptr,
		&NewStructOps,
		"MockPhysicsInputCmd",
		sizeof(FMockPhysicsInputCmd),
		alignof(FMockPhysicsInputCmd),
		Z_Construct_UScriptStruct_FMockPhysicsInputCmd_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMockPhysicsInputCmd_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMockPhysicsInputCmd_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMockPhysicsInputCmd_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMockPhysicsInputCmd()
	{
		if (!Z_Registration_Info_UScriptStruct_MockPhysicsInputCmd.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MockPhysicsInputCmd.InnerSingleton, Z_Construct_UScriptStruct_FMockPhysicsInputCmd_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MockPhysicsInputCmd.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockPhysicsSimulation_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockPhysicsSimulation_h_Statics::ScriptStructInfo[] = {
		{ FMockPhysicsInputCmd::StaticStruct, Z_Construct_UScriptStruct_FMockPhysicsInputCmd_Statics::NewStructOps, TEXT("MockPhysicsInputCmd"), &Z_Registration_Info_UScriptStruct_MockPhysicsInputCmd, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMockPhysicsInputCmd), 2386299971U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockPhysicsSimulation_h_2708089795(TEXT("/Script/NetworkPredictionExtras"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockPhysicsSimulation_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockPhysicsSimulation_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
