// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMCompiler/RigVMCompiler.h"
#include "RigVMCompiler/RigVMAST.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMCompiler() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	RIGVM_API UClass* Z_Construct_UClass_URigVM_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMCompiler();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMCompiler_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMController_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMGraph_NoRegister();
	RIGVMDEVELOPER_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMCompileSettings();
	RIGVMDEVELOPER_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMParserASTSettings();
	UPackage* Z_Construct_UPackage__Script_RigVMDeveloper();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMCompileSettings;
class UScriptStruct* FRigVMCompileSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMCompileSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMCompileSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMCompileSettings, (UObject*)Z_Construct_UPackage__Script_RigVMDeveloper(), TEXT("RigVMCompileSettings"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMCompileSettings.OuterSingleton;
}
template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<FRigVMCompileSettings>()
{
	return FRigVMCompileSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurpressInfoMessages_MetaData[];
#endif
		static void NewProp_SurpressInfoMessages_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SurpressInfoMessages;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurpressWarnings_MetaData[];
#endif
		static void NewProp_SurpressWarnings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SurpressWarnings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurpressErrors_MetaData[];
#endif
		static void NewProp_SurpressErrors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SurpressErrors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnablePinWatches_MetaData[];
#endif
		static void NewProp_EnablePinWatches_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnablePinWatches;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsPreprocessorPhase_MetaData[];
#endif
		static void NewProp_IsPreprocessorPhase_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsPreprocessorPhase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ASTSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ASTSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetupNodeInstructionIndex_MetaData[];
#endif
		static void NewProp_SetupNodeInstructionIndex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SetupNodeInstructionIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMCompiler/RigVMCompiler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMCompileSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::NewProp_SurpressInfoMessages_MetaData[] = {
		{ "Category", "FRigVMCompileSettings" },
		{ "ModuleRelativePath", "Public/RigVMCompiler/RigVMCompiler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::NewProp_SurpressInfoMessages_SetBit(void* Obj)
	{
		((FRigVMCompileSettings*)Obj)->SurpressInfoMessages = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::NewProp_SurpressInfoMessages = { "SurpressInfoMessages", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMCompileSettings), &Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::NewProp_SurpressInfoMessages_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::NewProp_SurpressInfoMessages_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::NewProp_SurpressInfoMessages_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::NewProp_SurpressWarnings_MetaData[] = {
		{ "Category", "FRigVMCompileSettings" },
		{ "ModuleRelativePath", "Public/RigVMCompiler/RigVMCompiler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::NewProp_SurpressWarnings_SetBit(void* Obj)
	{
		((FRigVMCompileSettings*)Obj)->SurpressWarnings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::NewProp_SurpressWarnings = { "SurpressWarnings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMCompileSettings), &Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::NewProp_SurpressWarnings_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::NewProp_SurpressWarnings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::NewProp_SurpressWarnings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::NewProp_SurpressErrors_MetaData[] = {
		{ "Category", "FRigVMCompileSettings" },
		{ "ModuleRelativePath", "Public/RigVMCompiler/RigVMCompiler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::NewProp_SurpressErrors_SetBit(void* Obj)
	{
		((FRigVMCompileSettings*)Obj)->SurpressErrors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::NewProp_SurpressErrors = { "SurpressErrors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMCompileSettings), &Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::NewProp_SurpressErrors_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::NewProp_SurpressErrors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::NewProp_SurpressErrors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::NewProp_EnablePinWatches_MetaData[] = {
		{ "Category", "FRigVMCompileSettings" },
		{ "ModuleRelativePath", "Public/RigVMCompiler/RigVMCompiler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::NewProp_EnablePinWatches_SetBit(void* Obj)
	{
		((FRigVMCompileSettings*)Obj)->EnablePinWatches = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::NewProp_EnablePinWatches = { "EnablePinWatches", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMCompileSettings), &Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::NewProp_EnablePinWatches_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::NewProp_EnablePinWatches_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::NewProp_EnablePinWatches_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::NewProp_IsPreprocessorPhase_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCompiler/RigVMCompiler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::NewProp_IsPreprocessorPhase_SetBit(void* Obj)
	{
		((FRigVMCompileSettings*)Obj)->IsPreprocessorPhase = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::NewProp_IsPreprocessorPhase = { "IsPreprocessorPhase", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMCompileSettings), &Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::NewProp_IsPreprocessorPhase_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::NewProp_IsPreprocessorPhase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::NewProp_IsPreprocessorPhase_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::NewProp_ASTSettings_MetaData[] = {
		{ "Category", "FRigVMCompileSettings" },
		{ "ModuleRelativePath", "Public/RigVMCompiler/RigVMCompiler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::NewProp_ASTSettings = { "ASTSettings", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMCompileSettings, ASTSettings), Z_Construct_UScriptStruct_FRigVMParserASTSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::NewProp_ASTSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::NewProp_ASTSettings_MetaData)) }; // 3727232090
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::NewProp_SetupNodeInstructionIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCompiler/RigVMCompiler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::NewProp_SetupNodeInstructionIndex_SetBit(void* Obj)
	{
		((FRigVMCompileSettings*)Obj)->SetupNodeInstructionIndex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::NewProp_SetupNodeInstructionIndex = { "SetupNodeInstructionIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMCompileSettings), &Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::NewProp_SetupNodeInstructionIndex_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::NewProp_SetupNodeInstructionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::NewProp_SetupNodeInstructionIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::NewProp_SurpressInfoMessages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::NewProp_SurpressWarnings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::NewProp_SurpressErrors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::NewProp_EnablePinWatches,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::NewProp_IsPreprocessorPhase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::NewProp_ASTSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::NewProp_SetupNodeInstructionIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMDeveloper,
		nullptr,
		&NewStructOps,
		"RigVMCompileSettings",
		sizeof(FRigVMCompileSettings),
		alignof(FRigVMCompileSettings),
		Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMCompileSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMCompileSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMCompileSettings.InnerSingleton, Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMCompileSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(URigVMCompiler::execCompile)
	{
		P_GET_TARRAY(URigVMGraph*,Z_Param_InGraphs);
		P_GET_OBJECT(URigVMController,Z_Param_InController);
		P_GET_OBJECT(URigVM,Z_Param_OutVM);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Compile(Z_Param_InGraphs,Z_Param_InController,Z_Param_OutVM);
		P_NATIVE_END;
	}
	void URigVMCompiler::StaticRegisterNativesURigVMCompiler()
	{
		UClass* Class = URigVMCompiler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Compile", &URigVMCompiler::execCompile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URigVMCompiler_Compile_Statics
	{
		struct RigVMCompiler_eventCompile_Parms
		{
			TArray<URigVMGraph*> InGraphs;
			URigVMController* InController;
			URigVM* OutVM;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InGraphs_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InGraphs;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InController;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutVM;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMCompiler_Compile_Statics::NewProp_InGraphs_Inner = { "InGraphs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URigVMGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigVMCompiler_Compile_Statics::NewProp_InGraphs = { "InGraphs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMCompiler_eventCompile_Parms, InGraphs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMCompiler_Compile_Statics::NewProp_InController = { "InController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMCompiler_eventCompile_Parms, InController), Z_Construct_UClass_URigVMController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMCompiler_Compile_Statics::NewProp_OutVM = { "OutVM", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMCompiler_eventCompile_Parms, OutVM), Z_Construct_UClass_URigVM_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigVMCompiler_Compile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMCompiler_eventCompile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMCompiler_Compile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMCompiler_eventCompile_Parms), &Z_Construct_UFunction_URigVMCompiler_Compile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMCompiler_Compile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMCompiler_Compile_Statics::NewProp_InGraphs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMCompiler_Compile_Statics::NewProp_InGraphs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMCompiler_Compile_Statics::NewProp_InController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMCompiler_Compile_Statics::NewProp_OutVM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMCompiler_Compile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMCompiler_Compile_Statics::Function_MetaDataParams[] = {
		{ "Category", "FRigVMCompiler" },
		{ "ModuleRelativePath", "Public/RigVMCompiler/RigVMCompiler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMCompiler_Compile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMCompiler, nullptr, "Compile", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMCompiler_Compile_Statics::RigVMCompiler_eventCompile_Parms), Z_Construct_UFunction_URigVMCompiler_Compile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMCompiler_Compile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMCompiler_Compile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMCompiler_Compile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMCompiler_Compile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMCompiler_Compile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMCompiler);
	UClass* Z_Construct_UClass_URigVMCompiler_NoRegister()
	{
		return URigVMCompiler::StaticClass();
	}
	struct Z_Construct_UClass_URigVMCompiler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URigVMCompiler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMDeveloper,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URigVMCompiler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URigVMCompiler_Compile, "Compile" }, // 1016119468
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMCompiler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RigVMCompiler/RigVMCompiler.h" },
		{ "ModuleRelativePath", "Public/RigVMCompiler/RigVMCompiler.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMCompiler_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "FRigVMCompiler" },
		{ "ModuleRelativePath", "Public/RigVMCompiler/RigVMCompiler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URigVMCompiler_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMCompiler, Settings), Z_Construct_UScriptStruct_FRigVMCompileSettings, METADATA_PARAMS(Z_Construct_UClass_URigVMCompiler_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMCompiler_Statics::NewProp_Settings_MetaData)) }; // 3903670742
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URigVMCompiler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMCompiler_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URigVMCompiler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVMCompiler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMCompiler_Statics::ClassParams = {
		&URigVMCompiler::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URigVMCompiler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URigVMCompiler_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URigVMCompiler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMCompiler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URigVMCompiler()
	{
		if (!Z_Registration_Info_UClass_URigVMCompiler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMCompiler.OuterSingleton, Z_Construct_UClass_URigVMCompiler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URigVMCompiler.OuterSingleton;
	}
	template<> RIGVMDEVELOPER_API UClass* StaticClass<URigVMCompiler>()
	{
		return URigVMCompiler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMCompiler);
	URigVMCompiler::~URigVMCompiler() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMCompiler_RigVMCompiler_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMCompiler_RigVMCompiler_h_Statics::ScriptStructInfo[] = {
		{ FRigVMCompileSettings::StaticStruct, Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics::NewStructOps, TEXT("RigVMCompileSettings"), &Z_Registration_Info_UScriptStruct_RigVMCompileSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMCompileSettings), 3903670742U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMCompiler_RigVMCompiler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URigVMCompiler, URigVMCompiler::StaticClass, TEXT("URigVMCompiler"), &Z_Registration_Info_UClass_URigVMCompiler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMCompiler), 2043617824U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMCompiler_RigVMCompiler_h_3369252362(TEXT("/Script/RigVMDeveloper"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMCompiler_RigVMCompiler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMCompiler_RigVMCompiler_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMCompiler_RigVMCompiler_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMCompiler_RigVMCompiler_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
