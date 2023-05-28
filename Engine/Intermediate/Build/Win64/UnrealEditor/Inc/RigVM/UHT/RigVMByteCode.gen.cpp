// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMCore/RigVMByteCode.h"
#include "RigVMCore/RigVMMemoryStorage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMByteCode() {}
// Cross Module References
	RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMCopyType();
	RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMOpCode();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMBaseOp();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMBinaryOp();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMBranchInfo();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMByteCode();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMByteCodeEntry();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMChangeTypeOp();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMComparisonOp();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMCopyOp();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMExecuteOp();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMInstruction();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMInstructionArray();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMInvokeEntryOp();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMJumpIfOp();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMJumpOp();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMJumpToBranchOp();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMQuaternaryOp();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMQuinaryOp();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMSenaryOp();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMTernaryOp();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMUnaryOp();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigVMOpCode;
	static UEnum* ERigVMOpCode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERigVMOpCode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERigVMOpCode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigVM_ERigVMOpCode, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("ERigVMOpCode"));
		}
		return Z_Registration_Info_UEnum_ERigVMOpCode.OuterSingleton;
	}
	template<> RIGVM_API UEnum* StaticEnum<ERigVMOpCode>()
	{
		return ERigVMOpCode_StaticEnum();
	}
	struct Z_Construct_UEnum_RigVM_ERigVMOpCode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RigVM_ERigVMOpCode_Statics::Enumerators[] = {
		{ "ERigVMOpCode::Execute_0_Operands", (int64)ERigVMOpCode::Execute_0_Operands },
		{ "ERigVMOpCode::Execute_1_Operands", (int64)ERigVMOpCode::Execute_1_Operands },
		{ "ERigVMOpCode::Execute_2_Operands", (int64)ERigVMOpCode::Execute_2_Operands },
		{ "ERigVMOpCode::Execute_3_Operands", (int64)ERigVMOpCode::Execute_3_Operands },
		{ "ERigVMOpCode::Execute_4_Operands", (int64)ERigVMOpCode::Execute_4_Operands },
		{ "ERigVMOpCode::Execute_5_Operands", (int64)ERigVMOpCode::Execute_5_Operands },
		{ "ERigVMOpCode::Execute_6_Operands", (int64)ERigVMOpCode::Execute_6_Operands },
		{ "ERigVMOpCode::Execute_7_Operands", (int64)ERigVMOpCode::Execute_7_Operands },
		{ "ERigVMOpCode::Execute_8_Operands", (int64)ERigVMOpCode::Execute_8_Operands },
		{ "ERigVMOpCode::Execute_9_Operands", (int64)ERigVMOpCode::Execute_9_Operands },
		{ "ERigVMOpCode::Execute_10_Operands", (int64)ERigVMOpCode::Execute_10_Operands },
		{ "ERigVMOpCode::Execute_11_Operands", (int64)ERigVMOpCode::Execute_11_Operands },
		{ "ERigVMOpCode::Execute_12_Operands", (int64)ERigVMOpCode::Execute_12_Operands },
		{ "ERigVMOpCode::Execute_13_Operands", (int64)ERigVMOpCode::Execute_13_Operands },
		{ "ERigVMOpCode::Execute_14_Operands", (int64)ERigVMOpCode::Execute_14_Operands },
		{ "ERigVMOpCode::Execute_15_Operands", (int64)ERigVMOpCode::Execute_15_Operands },
		{ "ERigVMOpCode::Execute_16_Operands", (int64)ERigVMOpCode::Execute_16_Operands },
		{ "ERigVMOpCode::Execute_17_Operands", (int64)ERigVMOpCode::Execute_17_Operands },
		{ "ERigVMOpCode::Execute_18_Operands", (int64)ERigVMOpCode::Execute_18_Operands },
		{ "ERigVMOpCode::Execute_19_Operands", (int64)ERigVMOpCode::Execute_19_Operands },
		{ "ERigVMOpCode::Execute_20_Operands", (int64)ERigVMOpCode::Execute_20_Operands },
		{ "ERigVMOpCode::Execute_21_Operands", (int64)ERigVMOpCode::Execute_21_Operands },
		{ "ERigVMOpCode::Execute_22_Operands", (int64)ERigVMOpCode::Execute_22_Operands },
		{ "ERigVMOpCode::Execute_23_Operands", (int64)ERigVMOpCode::Execute_23_Operands },
		{ "ERigVMOpCode::Execute_24_Operands", (int64)ERigVMOpCode::Execute_24_Operands },
		{ "ERigVMOpCode::Execute_25_Operands", (int64)ERigVMOpCode::Execute_25_Operands },
		{ "ERigVMOpCode::Execute_26_Operands", (int64)ERigVMOpCode::Execute_26_Operands },
		{ "ERigVMOpCode::Execute_27_Operands", (int64)ERigVMOpCode::Execute_27_Operands },
		{ "ERigVMOpCode::Execute_28_Operands", (int64)ERigVMOpCode::Execute_28_Operands },
		{ "ERigVMOpCode::Execute_29_Operands", (int64)ERigVMOpCode::Execute_29_Operands },
		{ "ERigVMOpCode::Execute_30_Operands", (int64)ERigVMOpCode::Execute_30_Operands },
		{ "ERigVMOpCode::Execute_31_Operands", (int64)ERigVMOpCode::Execute_31_Operands },
		{ "ERigVMOpCode::Execute_32_Operands", (int64)ERigVMOpCode::Execute_32_Operands },
		{ "ERigVMOpCode::Execute_33_Operands", (int64)ERigVMOpCode::Execute_33_Operands },
		{ "ERigVMOpCode::Execute_34_Operands", (int64)ERigVMOpCode::Execute_34_Operands },
		{ "ERigVMOpCode::Execute_35_Operands", (int64)ERigVMOpCode::Execute_35_Operands },
		{ "ERigVMOpCode::Execute_36_Operands", (int64)ERigVMOpCode::Execute_36_Operands },
		{ "ERigVMOpCode::Execute_37_Operands", (int64)ERigVMOpCode::Execute_37_Operands },
		{ "ERigVMOpCode::Execute_38_Operands", (int64)ERigVMOpCode::Execute_38_Operands },
		{ "ERigVMOpCode::Execute_39_Operands", (int64)ERigVMOpCode::Execute_39_Operands },
		{ "ERigVMOpCode::Execute_40_Operands", (int64)ERigVMOpCode::Execute_40_Operands },
		{ "ERigVMOpCode::Execute_41_Operands", (int64)ERigVMOpCode::Execute_41_Operands },
		{ "ERigVMOpCode::Execute_42_Operands", (int64)ERigVMOpCode::Execute_42_Operands },
		{ "ERigVMOpCode::Execute_43_Operands", (int64)ERigVMOpCode::Execute_43_Operands },
		{ "ERigVMOpCode::Execute_44_Operands", (int64)ERigVMOpCode::Execute_44_Operands },
		{ "ERigVMOpCode::Execute_45_Operands", (int64)ERigVMOpCode::Execute_45_Operands },
		{ "ERigVMOpCode::Execute_46_Operands", (int64)ERigVMOpCode::Execute_46_Operands },
		{ "ERigVMOpCode::Execute_47_Operands", (int64)ERigVMOpCode::Execute_47_Operands },
		{ "ERigVMOpCode::Execute_48_Operands", (int64)ERigVMOpCode::Execute_48_Operands },
		{ "ERigVMOpCode::Execute_49_Operands", (int64)ERigVMOpCode::Execute_49_Operands },
		{ "ERigVMOpCode::Execute_50_Operands", (int64)ERigVMOpCode::Execute_50_Operands },
		{ "ERigVMOpCode::Execute_51_Operands", (int64)ERigVMOpCode::Execute_51_Operands },
		{ "ERigVMOpCode::Execute_52_Operands", (int64)ERigVMOpCode::Execute_52_Operands },
		{ "ERigVMOpCode::Execute_53_Operands", (int64)ERigVMOpCode::Execute_53_Operands },
		{ "ERigVMOpCode::Execute_54_Operands", (int64)ERigVMOpCode::Execute_54_Operands },
		{ "ERigVMOpCode::Execute_55_Operands", (int64)ERigVMOpCode::Execute_55_Operands },
		{ "ERigVMOpCode::Execute_56_Operands", (int64)ERigVMOpCode::Execute_56_Operands },
		{ "ERigVMOpCode::Execute_57_Operands", (int64)ERigVMOpCode::Execute_57_Operands },
		{ "ERigVMOpCode::Execute_58_Operands", (int64)ERigVMOpCode::Execute_58_Operands },
		{ "ERigVMOpCode::Execute_59_Operands", (int64)ERigVMOpCode::Execute_59_Operands },
		{ "ERigVMOpCode::Execute_60_Operands", (int64)ERigVMOpCode::Execute_60_Operands },
		{ "ERigVMOpCode::Execute_61_Operands", (int64)ERigVMOpCode::Execute_61_Operands },
		{ "ERigVMOpCode::Execute_62_Operands", (int64)ERigVMOpCode::Execute_62_Operands },
		{ "ERigVMOpCode::Execute_63_Operands", (int64)ERigVMOpCode::Execute_63_Operands },
		{ "ERigVMOpCode::Execute_64_Operands", (int64)ERigVMOpCode::Execute_64_Operands },
		{ "ERigVMOpCode::Zero", (int64)ERigVMOpCode::Zero },
		{ "ERigVMOpCode::BoolFalse", (int64)ERigVMOpCode::BoolFalse },
		{ "ERigVMOpCode::BoolTrue", (int64)ERigVMOpCode::BoolTrue },
		{ "ERigVMOpCode::Copy", (int64)ERigVMOpCode::Copy },
		{ "ERigVMOpCode::Increment", (int64)ERigVMOpCode::Increment },
		{ "ERigVMOpCode::Decrement", (int64)ERigVMOpCode::Decrement },
		{ "ERigVMOpCode::Equals", (int64)ERigVMOpCode::Equals },
		{ "ERigVMOpCode::NotEquals", (int64)ERigVMOpCode::NotEquals },
		{ "ERigVMOpCode::JumpAbsolute", (int64)ERigVMOpCode::JumpAbsolute },
		{ "ERigVMOpCode::JumpForward", (int64)ERigVMOpCode::JumpForward },
		{ "ERigVMOpCode::JumpBackward", (int64)ERigVMOpCode::JumpBackward },
		{ "ERigVMOpCode::JumpAbsoluteIf", (int64)ERigVMOpCode::JumpAbsoluteIf },
		{ "ERigVMOpCode::JumpForwardIf", (int64)ERigVMOpCode::JumpForwardIf },
		{ "ERigVMOpCode::JumpBackwardIf", (int64)ERigVMOpCode::JumpBackwardIf },
		{ "ERigVMOpCode::ChangeType", (int64)ERigVMOpCode::ChangeType },
		{ "ERigVMOpCode::Exit", (int64)ERigVMOpCode::Exit },
		{ "ERigVMOpCode::BeginBlock", (int64)ERigVMOpCode::BeginBlock },
		{ "ERigVMOpCode::EndBlock", (int64)ERigVMOpCode::EndBlock },
		{ "ERigVMOpCode::ArrayReset", (int64)ERigVMOpCode::ArrayReset },
		{ "ERigVMOpCode::ArrayGetNum", (int64)ERigVMOpCode::ArrayGetNum },
		{ "ERigVMOpCode::ArraySetNum", (int64)ERigVMOpCode::ArraySetNum },
		{ "ERigVMOpCode::ArrayGetAtIndex", (int64)ERigVMOpCode::ArrayGetAtIndex },
		{ "ERigVMOpCode::ArraySetAtIndex", (int64)ERigVMOpCode::ArraySetAtIndex },
		{ "ERigVMOpCode::ArrayAdd", (int64)ERigVMOpCode::ArrayAdd },
		{ "ERigVMOpCode::ArrayInsert", (int64)ERigVMOpCode::ArrayInsert },
		{ "ERigVMOpCode::ArrayRemove", (int64)ERigVMOpCode::ArrayRemove },
		{ "ERigVMOpCode::ArrayFind", (int64)ERigVMOpCode::ArrayFind },
		{ "ERigVMOpCode::ArrayAppend", (int64)ERigVMOpCode::ArrayAppend },
		{ "ERigVMOpCode::ArrayClone", (int64)ERigVMOpCode::ArrayClone },
		{ "ERigVMOpCode::ArrayIterator", (int64)ERigVMOpCode::ArrayIterator },
		{ "ERigVMOpCode::ArrayUnion", (int64)ERigVMOpCode::ArrayUnion },
		{ "ERigVMOpCode::ArrayDifference", (int64)ERigVMOpCode::ArrayDifference },
		{ "ERigVMOpCode::ArrayIntersection", (int64)ERigVMOpCode::ArrayIntersection },
		{ "ERigVMOpCode::ArrayReverse", (int64)ERigVMOpCode::ArrayReverse },
		{ "ERigVMOpCode::InvokeEntry", (int64)ERigVMOpCode::InvokeEntry },
		{ "ERigVMOpCode::JumpToBranch", (int64)ERigVMOpCode::JumpToBranch },
		{ "ERigVMOpCode::Invalid", (int64)ERigVMOpCode::Invalid },
		{ "ERigVMOpCode::FirstArrayOpCode", (int64)ERigVMOpCode::FirstArrayOpCode },
		{ "ERigVMOpCode::LastArrayOpCode", (int64)ERigVMOpCode::LastArrayOpCode },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RigVM_ERigVMOpCode_Statics::Enum_MetaDataParams[] = {
		{ "ArrayAdd.Comment", "// (DEPRECATED) sets an array element by index (ternary op, in out array, in int32, in element)\n" },
		{ "ArrayAdd.Name", "ERigVMOpCode::ArrayAdd" },
		{ "ArrayAdd.ToolTip", "(DEPRECATED) sets an array element by index (ternary op, in out array, in int32, in element)" },
		{ "ArrayAppend.Comment", "// (DEPRECATED) finds and returns the index of an element (quaternery op, in array, in element, out int32 index, out bool success)\n" },
		{ "ArrayAppend.Name", "ERigVMOpCode::ArrayAppend" },
		{ "ArrayAppend.ToolTip", "(DEPRECATED) finds and returns the index of an element (quaternery op, in array, in element, out int32 index, out bool success)" },
		{ "ArrayClone.Comment", "// (DEPRECATED) appends an array to another (binary op, in out array, in array)\n" },
		{ "ArrayClone.Name", "ERigVMOpCode::ArrayClone" },
		{ "ArrayClone.ToolTip", "(DEPRECATED) appends an array to another (binary op, in out array, in array)" },
		{ "ArrayDifference.Comment", "// (DEPRECATED) merges two arrays while avoiding duplicates (binary op, in out array, in other array)\n" },
		{ "ArrayDifference.Name", "ERigVMOpCode::ArrayDifference" },
		{ "ArrayDifference.ToolTip", "(DEPRECATED) merges two arrays while avoiding duplicates (binary op, in out array, in other array)" },
		{ "ArrayFind.Comment", "// (DEPRECATED) removes an element from an array (binary op, in out array, in inindex)\n" },
		{ "ArrayFind.Name", "ERigVMOpCode::ArrayFind" },
		{ "ArrayFind.ToolTip", "(DEPRECATED) removes an element from an array (binary op, in out array, in inindex)" },
		{ "ArrayGetAtIndex.Comment", "// (DEPRECATED) resizes an array (binary op, in out array, in int32)\n" },
		{ "ArrayGetAtIndex.Name", "ERigVMOpCode::ArrayGetAtIndex" },
		{ "ArrayGetAtIndex.ToolTip", "(DEPRECATED) resizes an array (binary op, in out array, in int32)" },
		{ "ArrayGetNum.Comment", "// (DEPRECATED) clears an array and resets its content\n" },
		{ "ArrayGetNum.Name", "ERigVMOpCode::ArrayGetNum" },
		{ "ArrayGetNum.ToolTip", "(DEPRECATED) clears an array and resets its content" },
		{ "ArrayInsert.Comment", "// (DEPRECATED) adds an element to an array (ternary op, in out array, in element, out int32 index)\n" },
		{ "ArrayInsert.Name", "ERigVMOpCode::ArrayInsert" },
		{ "ArrayInsert.ToolTip", "(DEPRECATED) adds an element to an array (ternary op, in out array, in element, out int32 index)" },
		{ "ArrayIntersection.Comment", "// (DEPRECATED) returns a new array containing elements only found in one array (ternary op, in array, in array, out result)\n" },
		{ "ArrayIntersection.Name", "ERigVMOpCode::ArrayIntersection" },
		{ "ArrayIntersection.ToolTip", "(DEPRECATED) returns a new array containing elements only found in one array (ternary op, in array, in array, out result)" },
		{ "ArrayIterator.Comment", "// (DEPRECATED) clones an array (binary op, in array, out array)\n" },
		{ "ArrayIterator.Name", "ERigVMOpCode::ArrayIterator" },
		{ "ArrayIterator.ToolTip", "(DEPRECATED) clones an array (binary op, in array, out array)" },
		{ "ArrayRemove.Comment", "// (DEPRECATED) inserts an element to an array (ternary op, in out array, in int32, in element)\n" },
		{ "ArrayRemove.Name", "ERigVMOpCode::ArrayRemove" },
		{ "ArrayRemove.ToolTip", "(DEPRECATED) inserts an element to an array (ternary op, in out array, in int32, in element)" },
		{ "ArrayReset.Comment", "// ends the last memory slice / block\n" },
		{ "ArrayReset.Name", "ERigVMOpCode::ArrayReset" },
		{ "ArrayReset.ToolTip", "ends the last memory slice / block" },
		{ "ArrayReverse.Comment", "// (DEPRECATED) returns a new array containing elements found in both of the input arrays (ternary op, in array, in array, out result)\n" },
		{ "ArrayReverse.Name", "ERigVMOpCode::ArrayReverse" },
		{ "ArrayReverse.ToolTip", "(DEPRECATED) returns a new array containing elements found in both of the input arrays (ternary op, in array, in array, out result)" },
		{ "ArraySetAtIndex.Comment", "// (DEPRECATED) returns an array element by index (ternary op, in array, in int32, out element)  \n" },
		{ "ArraySetAtIndex.Name", "ERigVMOpCode::ArraySetAtIndex" },
		{ "ArraySetAtIndex.ToolTip", "(DEPRECATED) returns an array element by index (ternary op, in array, in int32, out element)" },
		{ "ArraySetNum.Comment", "// (DEPRECATED) reads and returns the size of an array (binary op, in array, out int32) \n" },
		{ "ArraySetNum.Name", "ERigVMOpCode::ArraySetNum" },
		{ "ArraySetNum.ToolTip", "(DEPRECATED) reads and returns the size of an array (binary op, in array, out int32)" },
		{ "ArrayUnion.Comment", "// (DEPRECATED) iterates over an array (senary op, in array, out element, out index, out count, out ratio, out continue)\n" },
		{ "ArrayUnion.Name", "ERigVMOpCode::ArrayUnion" },
		{ "ArrayUnion.ToolTip", "(DEPRECATED) iterates over an array (senary op, in array, out element, out index, out count, out ratio, out continue)" },
		{ "BeginBlock.Comment", "// exit the execution loop\n" },
		{ "BeginBlock.Name", "ERigVMOpCode::BeginBlock" },
		{ "BeginBlock.ToolTip", "exit the execution loop" },
		{ "BoolFalse.Comment", "// zero the memory of a given register\n" },
		{ "BoolFalse.Name", "ERigVMOpCode::BoolFalse" },
		{ "BoolFalse.ToolTip", "zero the memory of a given register" },
		{ "BoolTrue.Comment", "// set a given register to false\n" },
		{ "BoolTrue.Name", "ERigVMOpCode::BoolTrue" },
		{ "BoolTrue.ToolTip", "set a given register to false" },
		{ "ChangeType.Comment", "// jump backwards given a relative instruction index offset based on a condition register\n" },
		{ "ChangeType.Name", "ERigVMOpCode::ChangeType" },
		{ "ChangeType.ToolTip", "jump backwards given a relative instruction index offset based on a condition register" },
		{ "Comment", "// The code for a single operation within the RigVM\n" },
		{ "Copy.Comment", "// set a given register to true\n" },
		{ "Copy.Name", "ERigVMOpCode::Copy" },
		{ "Copy.ToolTip", "set a given register to true" },
		{ "Decrement.Comment", "// increment a int32 register\n" },
		{ "Decrement.Name", "ERigVMOpCode::Decrement" },
		{ "Decrement.ToolTip", "increment a int32 register" },
		{ "EndBlock.Comment", "// begins a new memory slice / block\n" },
		{ "EndBlock.Name", "ERigVMOpCode::EndBlock" },
		{ "EndBlock.ToolTip", "begins a new memory slice / block" },
		{ "Equals.Comment", "// decrement a int32 register\n" },
		{ "Equals.Name", "ERigVMOpCode::Equals" },
		{ "Equals.ToolTip", "decrement a int32 register" },
		{ "Execute_0_Operands.Name", "ERigVMOpCode::Execute_0_Operands" },
		{ "Execute_10_Operands.Comment", "// execute a rig function with 9 operands\n" },
		{ "Execute_10_Operands.Name", "ERigVMOpCode::Execute_10_Operands" },
		{ "Execute_10_Operands.ToolTip", "execute a rig function with 9 operands" },
		{ "Execute_11_Operands.Comment", "// execute a rig function with 10 operands\n" },
		{ "Execute_11_Operands.Name", "ERigVMOpCode::Execute_11_Operands" },
		{ "Execute_11_Operands.ToolTip", "execute a rig function with 10 operands" },
		{ "Execute_12_Operands.Comment", "// execute a rig function with 11 operands\n" },
		{ "Execute_12_Operands.Name", "ERigVMOpCode::Execute_12_Operands" },
		{ "Execute_12_Operands.ToolTip", "execute a rig function with 11 operands" },
		{ "Execute_13_Operands.Comment", "// execute a rig function with 12 operands\n" },
		{ "Execute_13_Operands.Name", "ERigVMOpCode::Execute_13_Operands" },
		{ "Execute_13_Operands.ToolTip", "execute a rig function with 12 operands" },
		{ "Execute_14_Operands.Comment", "// execute a rig function with 13 operands\n" },
		{ "Execute_14_Operands.Name", "ERigVMOpCode::Execute_14_Operands" },
		{ "Execute_14_Operands.ToolTip", "execute a rig function with 13 operands" },
		{ "Execute_15_Operands.Comment", "// execute a rig function with 14 operands\n" },
		{ "Execute_15_Operands.Name", "ERigVMOpCode::Execute_15_Operands" },
		{ "Execute_15_Operands.ToolTip", "execute a rig function with 14 operands" },
		{ "Execute_16_Operands.Comment", "// execute a rig function with 15 operands\n" },
		{ "Execute_16_Operands.Name", "ERigVMOpCode::Execute_16_Operands" },
		{ "Execute_16_Operands.ToolTip", "execute a rig function with 15 operands" },
		{ "Execute_17_Operands.Comment", "// execute a rig function with 16 operands\n" },
		{ "Execute_17_Operands.Name", "ERigVMOpCode::Execute_17_Operands" },
		{ "Execute_17_Operands.ToolTip", "execute a rig function with 16 operands" },
		{ "Execute_18_Operands.Comment", "// execute a rig function with 17 operands\n" },
		{ "Execute_18_Operands.Name", "ERigVMOpCode::Execute_18_Operands" },
		{ "Execute_18_Operands.ToolTip", "execute a rig function with 17 operands" },
		{ "Execute_19_Operands.Comment", "// execute a rig function with 18 operands\n" },
		{ "Execute_19_Operands.Name", "ERigVMOpCode::Execute_19_Operands" },
		{ "Execute_19_Operands.ToolTip", "execute a rig function with 18 operands" },
		{ "Execute_1_Operands.Comment", "// execute a rig function with 0 operands\n" },
		{ "Execute_1_Operands.Name", "ERigVMOpCode::Execute_1_Operands" },
		{ "Execute_1_Operands.ToolTip", "execute a rig function with 0 operands" },
		{ "Execute_20_Operands.Comment", "// execute a rig function with 19 operands\n" },
		{ "Execute_20_Operands.Name", "ERigVMOpCode::Execute_20_Operands" },
		{ "Execute_20_Operands.ToolTip", "execute a rig function with 19 operands" },
		{ "Execute_21_Operands.Comment", "// execute a rig function with 20 operands\n" },
		{ "Execute_21_Operands.Name", "ERigVMOpCode::Execute_21_Operands" },
		{ "Execute_21_Operands.ToolTip", "execute a rig function with 20 operands" },
		{ "Execute_22_Operands.Comment", "// execute a rig function with 21 operands\n" },
		{ "Execute_22_Operands.Name", "ERigVMOpCode::Execute_22_Operands" },
		{ "Execute_22_Operands.ToolTip", "execute a rig function with 21 operands" },
		{ "Execute_23_Operands.Comment", "// execute a rig function with 22 operands\n" },
		{ "Execute_23_Operands.Name", "ERigVMOpCode::Execute_23_Operands" },
		{ "Execute_23_Operands.ToolTip", "execute a rig function with 22 operands" },
		{ "Execute_24_Operands.Comment", "// execute a rig function with 23 operands\n" },
		{ "Execute_24_Operands.Name", "ERigVMOpCode::Execute_24_Operands" },
		{ "Execute_24_Operands.ToolTip", "execute a rig function with 23 operands" },
		{ "Execute_25_Operands.Comment", "// execute a rig function with 24 operands\n" },
		{ "Execute_25_Operands.Name", "ERigVMOpCode::Execute_25_Operands" },
		{ "Execute_25_Operands.ToolTip", "execute a rig function with 24 operands" },
		{ "Execute_26_Operands.Comment", "// execute a rig function with 25 operands\n" },
		{ "Execute_26_Operands.Name", "ERigVMOpCode::Execute_26_Operands" },
		{ "Execute_26_Operands.ToolTip", "execute a rig function with 25 operands" },
		{ "Execute_27_Operands.Comment", "// execute a rig function with 26 operands\n" },
		{ "Execute_27_Operands.Name", "ERigVMOpCode::Execute_27_Operands" },
		{ "Execute_27_Operands.ToolTip", "execute a rig function with 26 operands" },
		{ "Execute_28_Operands.Comment", "// execute a rig function with 27 operands\n" },
		{ "Execute_28_Operands.Name", "ERigVMOpCode::Execute_28_Operands" },
		{ "Execute_28_Operands.ToolTip", "execute a rig function with 27 operands" },
		{ "Execute_29_Operands.Comment", "// execute a rig function with 28 operands\n" },
		{ "Execute_29_Operands.Name", "ERigVMOpCode::Execute_29_Operands" },
		{ "Execute_29_Operands.ToolTip", "execute a rig function with 28 operands" },
		{ "Execute_2_Operands.Comment", "// execute a rig function with 1 operands\n" },
		{ "Execute_2_Operands.Name", "ERigVMOpCode::Execute_2_Operands" },
		{ "Execute_2_Operands.ToolTip", "execute a rig function with 1 operands" },
		{ "Execute_30_Operands.Comment", "// execute a rig function with 29 operands\n" },
		{ "Execute_30_Operands.Name", "ERigVMOpCode::Execute_30_Operands" },
		{ "Execute_30_Operands.ToolTip", "execute a rig function with 29 operands" },
		{ "Execute_31_Operands.Comment", "// execute a rig function with 30 operands\n" },
		{ "Execute_31_Operands.Name", "ERigVMOpCode::Execute_31_Operands" },
		{ "Execute_31_Operands.ToolTip", "execute a rig function with 30 operands" },
		{ "Execute_32_Operands.Comment", "// execute a rig function with 31 operands\n" },
		{ "Execute_32_Operands.Name", "ERigVMOpCode::Execute_32_Operands" },
		{ "Execute_32_Operands.ToolTip", "execute a rig function with 31 operands" },
		{ "Execute_33_Operands.Comment", "// execute a rig function with 32 operands\n" },
		{ "Execute_33_Operands.Name", "ERigVMOpCode::Execute_33_Operands" },
		{ "Execute_33_Operands.ToolTip", "execute a rig function with 32 operands" },
		{ "Execute_34_Operands.Comment", "// execute a rig function with 33 operands\n" },
		{ "Execute_34_Operands.Name", "ERigVMOpCode::Execute_34_Operands" },
		{ "Execute_34_Operands.ToolTip", "execute a rig function with 33 operands" },
		{ "Execute_35_Operands.Comment", "// execute a rig function with 34 operands\n" },
		{ "Execute_35_Operands.Name", "ERigVMOpCode::Execute_35_Operands" },
		{ "Execute_35_Operands.ToolTip", "execute a rig function with 34 operands" },
		{ "Execute_36_Operands.Comment", "// execute a rig function with 35 operands\n" },
		{ "Execute_36_Operands.Name", "ERigVMOpCode::Execute_36_Operands" },
		{ "Execute_36_Operands.ToolTip", "execute a rig function with 35 operands" },
		{ "Execute_37_Operands.Comment", "// execute a rig function with 36 operands\n" },
		{ "Execute_37_Operands.Name", "ERigVMOpCode::Execute_37_Operands" },
		{ "Execute_37_Operands.ToolTip", "execute a rig function with 36 operands" },
		{ "Execute_38_Operands.Comment", "// execute a rig function with 37 operands\n" },
		{ "Execute_38_Operands.Name", "ERigVMOpCode::Execute_38_Operands" },
		{ "Execute_38_Operands.ToolTip", "execute a rig function with 37 operands" },
		{ "Execute_39_Operands.Comment", "// execute a rig function with 38 operands\n" },
		{ "Execute_39_Operands.Name", "ERigVMOpCode::Execute_39_Operands" },
		{ "Execute_39_Operands.ToolTip", "execute a rig function with 38 operands" },
		{ "Execute_3_Operands.Comment", "// execute a rig function with 2 operands\n" },
		{ "Execute_3_Operands.Name", "ERigVMOpCode::Execute_3_Operands" },
		{ "Execute_3_Operands.ToolTip", "execute a rig function with 2 operands" },
		{ "Execute_40_Operands.Comment", "// execute a rig function with 39 operands\n" },
		{ "Execute_40_Operands.Name", "ERigVMOpCode::Execute_40_Operands" },
		{ "Execute_40_Operands.ToolTip", "execute a rig function with 39 operands" },
		{ "Execute_41_Operands.Comment", "// execute a rig function with 40 operands\n" },
		{ "Execute_41_Operands.Name", "ERigVMOpCode::Execute_41_Operands" },
		{ "Execute_41_Operands.ToolTip", "execute a rig function with 40 operands" },
		{ "Execute_42_Operands.Comment", "// execute a rig function with 41 operands\n" },
		{ "Execute_42_Operands.Name", "ERigVMOpCode::Execute_42_Operands" },
		{ "Execute_42_Operands.ToolTip", "execute a rig function with 41 operands" },
		{ "Execute_43_Operands.Comment", "// execute a rig function with 42 operands\n" },
		{ "Execute_43_Operands.Name", "ERigVMOpCode::Execute_43_Operands" },
		{ "Execute_43_Operands.ToolTip", "execute a rig function with 42 operands" },
		{ "Execute_44_Operands.Comment", "// execute a rig function with 43 operands\n" },
		{ "Execute_44_Operands.Name", "ERigVMOpCode::Execute_44_Operands" },
		{ "Execute_44_Operands.ToolTip", "execute a rig function with 43 operands" },
		{ "Execute_45_Operands.Comment", "// execute a rig function with 44 operands\n" },
		{ "Execute_45_Operands.Name", "ERigVMOpCode::Execute_45_Operands" },
		{ "Execute_45_Operands.ToolTip", "execute a rig function with 44 operands" },
		{ "Execute_46_Operands.Comment", "// execute a rig function with 45 operands\n" },
		{ "Execute_46_Operands.Name", "ERigVMOpCode::Execute_46_Operands" },
		{ "Execute_46_Operands.ToolTip", "execute a rig function with 45 operands" },
		{ "Execute_47_Operands.Comment", "// execute a rig function with 46 operands\n" },
		{ "Execute_47_Operands.Name", "ERigVMOpCode::Execute_47_Operands" },
		{ "Execute_47_Operands.ToolTip", "execute a rig function with 46 operands" },
		{ "Execute_48_Operands.Comment", "// execute a rig function with 47 operands\n" },
		{ "Execute_48_Operands.Name", "ERigVMOpCode::Execute_48_Operands" },
		{ "Execute_48_Operands.ToolTip", "execute a rig function with 47 operands" },
		{ "Execute_49_Operands.Comment", "// execute a rig function with 48 operands\n" },
		{ "Execute_49_Operands.Name", "ERigVMOpCode::Execute_49_Operands" },
		{ "Execute_49_Operands.ToolTip", "execute a rig function with 48 operands" },
		{ "Execute_4_Operands.Comment", "// execute a rig function with 3 operands\n" },
		{ "Execute_4_Operands.Name", "ERigVMOpCode::Execute_4_Operands" },
		{ "Execute_4_Operands.ToolTip", "execute a rig function with 3 operands" },
		{ "Execute_50_Operands.Comment", "// execute a rig function with 49 operands\n" },
		{ "Execute_50_Operands.Name", "ERigVMOpCode::Execute_50_Operands" },
		{ "Execute_50_Operands.ToolTip", "execute a rig function with 49 operands" },
		{ "Execute_51_Operands.Comment", "// execute a rig function with 50 operands\n" },
		{ "Execute_51_Operands.Name", "ERigVMOpCode::Execute_51_Operands" },
		{ "Execute_51_Operands.ToolTip", "execute a rig function with 50 operands" },
		{ "Execute_52_Operands.Comment", "// execute a rig function with 51 operands\n" },
		{ "Execute_52_Operands.Name", "ERigVMOpCode::Execute_52_Operands" },
		{ "Execute_52_Operands.ToolTip", "execute a rig function with 51 operands" },
		{ "Execute_53_Operands.Comment", "// execute a rig function with 52 operands\n" },
		{ "Execute_53_Operands.Name", "ERigVMOpCode::Execute_53_Operands" },
		{ "Execute_53_Operands.ToolTip", "execute a rig function with 52 operands" },
		{ "Execute_54_Operands.Comment", "// execute a rig function with 53 operands\n" },
		{ "Execute_54_Operands.Name", "ERigVMOpCode::Execute_54_Operands" },
		{ "Execute_54_Operands.ToolTip", "execute a rig function with 53 operands" },
		{ "Execute_55_Operands.Comment", "// execute a rig function with 54 operands\n" },
		{ "Execute_55_Operands.Name", "ERigVMOpCode::Execute_55_Operands" },
		{ "Execute_55_Operands.ToolTip", "execute a rig function with 54 operands" },
		{ "Execute_56_Operands.Comment", "// execute a rig function with 55 operands\n" },
		{ "Execute_56_Operands.Name", "ERigVMOpCode::Execute_56_Operands" },
		{ "Execute_56_Operands.ToolTip", "execute a rig function with 55 operands" },
		{ "Execute_57_Operands.Comment", "// execute a rig function with 56 operands\n" },
		{ "Execute_57_Operands.Name", "ERigVMOpCode::Execute_57_Operands" },
		{ "Execute_57_Operands.ToolTip", "execute a rig function with 56 operands" },
		{ "Execute_58_Operands.Comment", "// execute a rig function with 57 operands\n" },
		{ "Execute_58_Operands.Name", "ERigVMOpCode::Execute_58_Operands" },
		{ "Execute_58_Operands.ToolTip", "execute a rig function with 57 operands" },
		{ "Execute_59_Operands.Comment", "// execute a rig function with 58 operands\n" },
		{ "Execute_59_Operands.Name", "ERigVMOpCode::Execute_59_Operands" },
		{ "Execute_59_Operands.ToolTip", "execute a rig function with 58 operands" },
		{ "Execute_5_Operands.Comment", "// execute a rig function with 4 operands\n" },
		{ "Execute_5_Operands.Name", "ERigVMOpCode::Execute_5_Operands" },
		{ "Execute_5_Operands.ToolTip", "execute a rig function with 4 operands" },
		{ "Execute_60_Operands.Comment", "// execute a rig function with 59 operands\n" },
		{ "Execute_60_Operands.Name", "ERigVMOpCode::Execute_60_Operands" },
		{ "Execute_60_Operands.ToolTip", "execute a rig function with 59 operands" },
		{ "Execute_61_Operands.Comment", "// execute a rig function with 60 operands\n" },
		{ "Execute_61_Operands.Name", "ERigVMOpCode::Execute_61_Operands" },
		{ "Execute_61_Operands.ToolTip", "execute a rig function with 60 operands" },
		{ "Execute_62_Operands.Comment", "// execute a rig function with 61 operands\n" },
		{ "Execute_62_Operands.Name", "ERigVMOpCode::Execute_62_Operands" },
		{ "Execute_62_Operands.ToolTip", "execute a rig function with 61 operands" },
		{ "Execute_63_Operands.Comment", "// execute a rig function with 62 operands\n" },
		{ "Execute_63_Operands.Name", "ERigVMOpCode::Execute_63_Operands" },
		{ "Execute_63_Operands.ToolTip", "execute a rig function with 62 operands" },
		{ "Execute_64_Operands.Comment", "// execute a rig function with 63 operands\n" },
		{ "Execute_64_Operands.Name", "ERigVMOpCode::Execute_64_Operands" },
		{ "Execute_64_Operands.ToolTip", "execute a rig function with 63 operands" },
		{ "Execute_6_Operands.Comment", "// execute a rig function with 5 operands\n" },
		{ "Execute_6_Operands.Name", "ERigVMOpCode::Execute_6_Operands" },
		{ "Execute_6_Operands.ToolTip", "execute a rig function with 5 operands" },
		{ "Execute_7_Operands.Comment", "// execute a rig function with 6 operands\n" },
		{ "Execute_7_Operands.Name", "ERigVMOpCode::Execute_7_Operands" },
		{ "Execute_7_Operands.ToolTip", "execute a rig function with 6 operands" },
		{ "Execute_8_Operands.Comment", "// execute a rig function with 7 operands\n" },
		{ "Execute_8_Operands.Name", "ERigVMOpCode::Execute_8_Operands" },
		{ "Execute_8_Operands.ToolTip", "execute a rig function with 7 operands" },
		{ "Execute_9_Operands.Comment", "// execute a rig function with 8 operands\n" },
		{ "Execute_9_Operands.Name", "ERigVMOpCode::Execute_9_Operands" },
		{ "Execute_9_Operands.ToolTip", "execute a rig function with 8 operands" },
		{ "Exit.Comment", "// change the type of a register (deprecated)\n" },
		{ "Exit.Name", "ERigVMOpCode::Exit" },
		{ "Exit.ToolTip", "change the type of a register (deprecated)" },
		{ "FirstArrayOpCode.Name", "ERigVMOpCode::FirstArrayOpCode" },
		{ "Increment.Comment", "// copy the content of one register to another\n" },
		{ "Increment.Name", "ERigVMOpCode::Increment" },
		{ "Increment.ToolTip", "copy the content of one register to another" },
		{ "Invalid.Comment", "// jumps to a branch based on a name operand\n" },
		{ "Invalid.Name", "ERigVMOpCode::Invalid" },
		{ "Invalid.ToolTip", "jumps to a branch based on a name operand" },
		{ "InvokeEntry.Comment", "// (DEPRECATED) returns the reverse of the input array (unary op, in out array)\n" },
		{ "InvokeEntry.Name", "ERigVMOpCode::InvokeEntry" },
		{ "InvokeEntry.ToolTip", "(DEPRECATED) returns the reverse of the input array (unary op, in out array)" },
		{ "JumpAbsolute.Comment", "// fill a bool register with the result of (A != B)\n" },
		{ "JumpAbsolute.Name", "ERigVMOpCode::JumpAbsolute" },
		{ "JumpAbsolute.ToolTip", "fill a bool register with the result of (A != B)" },
		{ "JumpAbsoluteIf.Comment", "// jump backwards given a relative instruction index offset\n" },
		{ "JumpAbsoluteIf.Name", "ERigVMOpCode::JumpAbsoluteIf" },
		{ "JumpAbsoluteIf.ToolTip", "jump backwards given a relative instruction index offset" },
		{ "JumpBackward.Comment", "// jump forwards given a relative instruction index offset\n" },
		{ "JumpBackward.Name", "ERigVMOpCode::JumpBackward" },
		{ "JumpBackward.ToolTip", "jump forwards given a relative instruction index offset" },
		{ "JumpBackwardIf.Comment", "// jump forwards given a relative instruction index offset based on a condition register\n" },
		{ "JumpBackwardIf.Name", "ERigVMOpCode::JumpBackwardIf" },
		{ "JumpBackwardIf.ToolTip", "jump forwards given a relative instruction index offset based on a condition register" },
		{ "JumpForward.Comment", "// jump to an absolute instruction index\n" },
		{ "JumpForward.Name", "ERigVMOpCode::JumpForward" },
		{ "JumpForward.ToolTip", "jump to an absolute instruction index" },
		{ "JumpForwardIf.Comment", "// jump to an absolute instruction index based on a condition register\n" },
		{ "JumpForwardIf.Name", "ERigVMOpCode::JumpForwardIf" },
		{ "JumpForwardIf.ToolTip", "jump to an absolute instruction index based on a condition register" },
		{ "JumpToBranch.Comment", "// invokes an entry from the entry list\n" },
		{ "JumpToBranch.Name", "ERigVMOpCode::JumpToBranch" },
		{ "JumpToBranch.ToolTip", "invokes an entry from the entry list" },
		{ "LastArrayOpCode.Name", "ERigVMOpCode::LastArrayOpCode" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMByteCode.h" },
		{ "NotEquals.Comment", "// fill a bool register with the result of (A == B)\n" },
		{ "NotEquals.Name", "ERigVMOpCode::NotEquals" },
		{ "NotEquals.ToolTip", "fill a bool register with the result of (A == B)" },
		{ "ToolTip", "The code for a single operation within the RigVM" },
		{ "Zero.Comment", "// execute a rig function with 64 operands\n" },
		{ "Zero.Name", "ERigVMOpCode::Zero" },
		{ "Zero.ToolTip", "execute a rig function with 64 operands" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigVM_ERigVMOpCode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		"ERigVMOpCode",
		"ERigVMOpCode",
		Z_Construct_UEnum_RigVM_ERigVMOpCode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERigVMOpCode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RigVM_ERigVMOpCode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERigVMOpCode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RigVM_ERigVMOpCode()
	{
		if (!Z_Registration_Info_UEnum_ERigVMOpCode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigVMOpCode.InnerSingleton, Z_Construct_UEnum_RigVM_ERigVMOpCode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERigVMOpCode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMBaseOp;
class UScriptStruct* FRigVMBaseOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMBaseOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMBaseOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMBaseOp, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMBaseOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMBaseOp.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMBaseOp>()
{
	return FRigVMBaseOp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMBaseOp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMBaseOp_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Base class for all VM operations\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMByteCode.h" },
		{ "ToolTip", "Base class for all VM operations" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMBaseOp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMBaseOp>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMBaseOp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		&NewStructOps,
		"RigVMBaseOp",
		sizeof(FRigVMBaseOp),
		alignof(FRigVMBaseOp),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMBaseOp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMBaseOp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMBaseOp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMBaseOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMBaseOp.InnerSingleton, Z_Construct_UScriptStruct_FRigVMBaseOp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMBaseOp.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMExecuteOp>() == std::is_polymorphic<FRigVMBaseOp>(), "USTRUCT FRigVMExecuteOp cannot be polymorphic unless super FRigVMBaseOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMExecuteOp;
class UScriptStruct* FRigVMExecuteOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMExecuteOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMExecuteOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMExecuteOp, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMExecuteOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMExecuteOp.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMExecuteOp>()
{
	return FRigVMExecuteOp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMExecuteOp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMExecuteOp_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// execute a function\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMByteCode.h" },
		{ "ToolTip", "execute a function" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMExecuteOp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMExecuteOp>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMExecuteOp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMBaseOp,
		&NewStructOps,
		"RigVMExecuteOp",
		sizeof(FRigVMExecuteOp),
		alignof(FRigVMExecuteOp),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMExecuteOp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMExecuteOp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMExecuteOp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMExecuteOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMExecuteOp.InnerSingleton, Z_Construct_UScriptStruct_FRigVMExecuteOp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMExecuteOp.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMUnaryOp>() == std::is_polymorphic<FRigVMBaseOp>(), "USTRUCT FRigVMUnaryOp cannot be polymorphic unless super FRigVMBaseOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMUnaryOp;
class UScriptStruct* FRigVMUnaryOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMUnaryOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMUnaryOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMUnaryOp, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMUnaryOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMUnaryOp.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMUnaryOp>()
{
	return FRigVMUnaryOp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMUnaryOp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMUnaryOp_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// operator used for zero, false, true, increment, decrement\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMByteCode.h" },
		{ "ToolTip", "operator used for zero, false, true, increment, decrement" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMUnaryOp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMUnaryOp>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMUnaryOp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMBaseOp,
		&NewStructOps,
		"RigVMUnaryOp",
		sizeof(FRigVMUnaryOp),
		alignof(FRigVMUnaryOp),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMUnaryOp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMUnaryOp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMUnaryOp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMUnaryOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMUnaryOp.InnerSingleton, Z_Construct_UScriptStruct_FRigVMUnaryOp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMUnaryOp.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMBinaryOp>() == std::is_polymorphic<FRigVMBaseOp>(), "USTRUCT FRigVMBinaryOp cannot be polymorphic unless super FRigVMBaseOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMBinaryOp;
class UScriptStruct* FRigVMBinaryOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMBinaryOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMBinaryOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMBinaryOp, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMBinaryOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMBinaryOp.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMBinaryOp>()
{
	return FRigVMBinaryOp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMBinaryOp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMBinaryOp_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// operator used for beginblock and array reset\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMByteCode.h" },
		{ "ToolTip", "operator used for beginblock and array reset" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMBinaryOp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMBinaryOp>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMBinaryOp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMBaseOp,
		&NewStructOps,
		"RigVMBinaryOp",
		sizeof(FRigVMBinaryOp),
		alignof(FRigVMBinaryOp),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMBinaryOp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMBinaryOp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMBinaryOp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMBinaryOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMBinaryOp.InnerSingleton, Z_Construct_UScriptStruct_FRigVMBinaryOp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMBinaryOp.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMTernaryOp>() == std::is_polymorphic<FRigVMBaseOp>(), "USTRUCT FRigVMTernaryOp cannot be polymorphic unless super FRigVMBaseOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMTernaryOp;
class UScriptStruct* FRigVMTernaryOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMTernaryOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMTernaryOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMTernaryOp, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMTernaryOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMTernaryOp.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMTernaryOp>()
{
	return FRigVMTernaryOp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMTernaryOp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMTernaryOp_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// operator used for some array operations\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMByteCode.h" },
		{ "ToolTip", "operator used for some array operations" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMTernaryOp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMTernaryOp>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMTernaryOp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMBaseOp,
		&NewStructOps,
		"RigVMTernaryOp",
		sizeof(FRigVMTernaryOp),
		alignof(FRigVMTernaryOp),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMTernaryOp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMTernaryOp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMTernaryOp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMTernaryOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMTernaryOp.InnerSingleton, Z_Construct_UScriptStruct_FRigVMTernaryOp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMTernaryOp.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMQuaternaryOp>() == std::is_polymorphic<FRigVMBaseOp>(), "USTRUCT FRigVMQuaternaryOp cannot be polymorphic unless super FRigVMBaseOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMQuaternaryOp;
class UScriptStruct* FRigVMQuaternaryOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMQuaternaryOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMQuaternaryOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMQuaternaryOp, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMQuaternaryOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMQuaternaryOp.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMQuaternaryOp>()
{
	return FRigVMQuaternaryOp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMQuaternaryOp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMQuaternaryOp_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// operator used for some array operations\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMByteCode.h" },
		{ "ToolTip", "operator used for some array operations" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMQuaternaryOp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMQuaternaryOp>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMQuaternaryOp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMBaseOp,
		&NewStructOps,
		"RigVMQuaternaryOp",
		sizeof(FRigVMQuaternaryOp),
		alignof(FRigVMQuaternaryOp),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMQuaternaryOp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMQuaternaryOp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMQuaternaryOp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMQuaternaryOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMQuaternaryOp.InnerSingleton, Z_Construct_UScriptStruct_FRigVMQuaternaryOp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMQuaternaryOp.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMQuinaryOp>() == std::is_polymorphic<FRigVMBaseOp>(), "USTRUCT FRigVMQuinaryOp cannot be polymorphic unless super FRigVMBaseOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMQuinaryOp;
class UScriptStruct* FRigVMQuinaryOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMQuinaryOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMQuinaryOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMQuinaryOp, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMQuinaryOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMQuinaryOp.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMQuinaryOp>()
{
	return FRigVMQuinaryOp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMQuinaryOp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMQuinaryOp_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// operator used for some array operations\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMByteCode.h" },
		{ "ToolTip", "operator used for some array operations" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMQuinaryOp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMQuinaryOp>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMQuinaryOp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMBaseOp,
		&NewStructOps,
		"RigVMQuinaryOp",
		sizeof(FRigVMQuinaryOp),
		alignof(FRigVMQuinaryOp),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMQuinaryOp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMQuinaryOp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMQuinaryOp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMQuinaryOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMQuinaryOp.InnerSingleton, Z_Construct_UScriptStruct_FRigVMQuinaryOp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMQuinaryOp.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMSenaryOp>() == std::is_polymorphic<FRigVMBaseOp>(), "USTRUCT FRigVMSenaryOp cannot be polymorphic unless super FRigVMBaseOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMSenaryOp;
class UScriptStruct* FRigVMSenaryOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMSenaryOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMSenaryOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMSenaryOp, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMSenaryOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMSenaryOp.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMSenaryOp>()
{
	return FRigVMSenaryOp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMSenaryOp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMSenaryOp_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// operator used for some array operations\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMByteCode.h" },
		{ "ToolTip", "operator used for some array operations" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMSenaryOp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMSenaryOp>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMSenaryOp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMBaseOp,
		&NewStructOps,
		"RigVMSenaryOp",
		sizeof(FRigVMSenaryOp),
		alignof(FRigVMSenaryOp),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMSenaryOp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMSenaryOp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMSenaryOp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMSenaryOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMSenaryOp.InnerSingleton, Z_Construct_UScriptStruct_FRigVMSenaryOp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMSenaryOp.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigVMCopyType;
	static UEnum* ERigVMCopyType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERigVMCopyType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERigVMCopyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigVM_ERigVMCopyType, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("ERigVMCopyType"));
		}
		return Z_Registration_Info_UEnum_ERigVMCopyType.OuterSingleton;
	}
	template<> RIGVM_API UEnum* StaticEnum<ERigVMCopyType>()
	{
		return ERigVMCopyType_StaticEnum();
	}
	struct Z_Construct_UEnum_RigVM_ERigVMCopyType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RigVM_ERigVMCopyType_Statics::Enumerators[] = {
		{ "ERigVMCopyType::Default", (int64)ERigVMCopyType::Default },
		{ "ERigVMCopyType::FloatToDouble", (int64)ERigVMCopyType::FloatToDouble },
		{ "ERigVMCopyType::DoubleToFloat", (int64)ERigVMCopyType::DoubleToFloat },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RigVM_ERigVMCopyType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// The kind of copy operation to perform\n" },
		{ "Default.Name", "ERigVMCopyType::Default" },
		{ "DoubleToFloat.Name", "ERigVMCopyType::DoubleToFloat" },
		{ "FloatToDouble.Name", "ERigVMCopyType::FloatToDouble" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMByteCode.h" },
		{ "ToolTip", "The kind of copy operation to perform" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigVM_ERigVMCopyType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		"ERigVMCopyType",
		"ERigVMCopyType",
		Z_Construct_UEnum_RigVM_ERigVMCopyType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERigVMCopyType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RigVM_ERigVMCopyType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERigVMCopyType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RigVM_ERigVMCopyType()
	{
		if (!Z_Registration_Info_UEnum_ERigVMCopyType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigVMCopyType.InnerSingleton, Z_Construct_UEnum_RigVM_ERigVMCopyType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERigVMCopyType.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMCopyOp>() == std::is_polymorphic<FRigVMBaseOp>(), "USTRUCT FRigVMCopyOp cannot be polymorphic unless super FRigVMBaseOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMCopyOp;
class UScriptStruct* FRigVMCopyOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMCopyOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMCopyOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMCopyOp, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMCopyOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMCopyOp.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMCopyOp>()
{
	return FRigVMCopyOp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMCopyOp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMCopyOp_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// copy the content of one register to another\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMByteCode.h" },
		{ "ToolTip", "copy the content of one register to another" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMCopyOp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMCopyOp>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMCopyOp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMBaseOp,
		&NewStructOps,
		"RigVMCopyOp",
		sizeof(FRigVMCopyOp),
		alignof(FRigVMCopyOp),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMCopyOp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMCopyOp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMCopyOp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMCopyOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMCopyOp.InnerSingleton, Z_Construct_UScriptStruct_FRigVMCopyOp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMCopyOp.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMComparisonOp>() == std::is_polymorphic<FRigVMBaseOp>(), "USTRUCT FRigVMComparisonOp cannot be polymorphic unless super FRigVMBaseOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMComparisonOp;
class UScriptStruct* FRigVMComparisonOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMComparisonOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMComparisonOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMComparisonOp, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMComparisonOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMComparisonOp.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMComparisonOp>()
{
	return FRigVMComparisonOp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMComparisonOp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMComparisonOp_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// used for equals and not equals comparisons\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMByteCode.h" },
		{ "ToolTip", "used for equals and not equals comparisons" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMComparisonOp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMComparisonOp>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMComparisonOp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMBaseOp,
		&NewStructOps,
		"RigVMComparisonOp",
		sizeof(FRigVMComparisonOp),
		alignof(FRigVMComparisonOp),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMComparisonOp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMComparisonOp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMComparisonOp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMComparisonOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMComparisonOp.InnerSingleton, Z_Construct_UScriptStruct_FRigVMComparisonOp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMComparisonOp.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMJumpOp>() == std::is_polymorphic<FRigVMBaseOp>(), "USTRUCT FRigVMJumpOp cannot be polymorphic unless super FRigVMBaseOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMJumpOp;
class UScriptStruct* FRigVMJumpOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMJumpOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMJumpOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMJumpOp, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMJumpOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMJumpOp.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMJumpOp>()
{
	return FRigVMJumpOp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMJumpOp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMJumpOp_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// jump to a new instruction index.\n// the instruction can be absolute, relative forward or relative backward\n// based on the opcode \n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMByteCode.h" },
		{ "ToolTip", "jump to a new instruction index.\nthe instruction can be absolute, relative forward or relative backward\nbased on the opcode" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMJumpOp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMJumpOp>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMJumpOp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMBaseOp,
		&NewStructOps,
		"RigVMJumpOp",
		sizeof(FRigVMJumpOp),
		alignof(FRigVMJumpOp),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMJumpOp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMJumpOp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMJumpOp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMJumpOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMJumpOp.InnerSingleton, Z_Construct_UScriptStruct_FRigVMJumpOp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMJumpOp.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMJumpIfOp>() == std::is_polymorphic<FRigVMUnaryOp>(), "USTRUCT FRigVMJumpIfOp cannot be polymorphic unless super FRigVMUnaryOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMJumpIfOp;
class UScriptStruct* FRigVMJumpIfOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMJumpIfOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMJumpIfOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMJumpIfOp, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMJumpIfOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMJumpIfOp.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMJumpIfOp>()
{
	return FRigVMJumpIfOp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMJumpIfOp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMJumpIfOp_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// jump to a new instruction index based on a condition.\n// the instruction can be absolute, relative forward or relative backward\n// based on the opcode \n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMByteCode.h" },
		{ "ToolTip", "jump to a new instruction index based on a condition.\nthe instruction can be absolute, relative forward or relative backward\nbased on the opcode" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMJumpIfOp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMJumpIfOp>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMJumpIfOp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMUnaryOp,
		&NewStructOps,
		"RigVMJumpIfOp",
		sizeof(FRigVMJumpIfOp),
		alignof(FRigVMJumpIfOp),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMJumpIfOp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMJumpIfOp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMJumpIfOp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMJumpIfOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMJumpIfOp.InnerSingleton, Z_Construct_UScriptStruct_FRigVMJumpIfOp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMJumpIfOp.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMChangeTypeOp>() == std::is_polymorphic<FRigVMUnaryOp>(), "USTRUCT FRigVMChangeTypeOp cannot be polymorphic unless super FRigVMUnaryOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMChangeTypeOp;
class UScriptStruct* FRigVMChangeTypeOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMChangeTypeOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMChangeTypeOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMChangeTypeOp, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMChangeTypeOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMChangeTypeOp.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMChangeTypeOp>()
{
	return FRigVMChangeTypeOp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMChangeTypeOp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMChangeTypeOp_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// change the type of a register\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMByteCode.h" },
		{ "ToolTip", "change the type of a register" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMChangeTypeOp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMChangeTypeOp>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMChangeTypeOp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMUnaryOp,
		&NewStructOps,
		"RigVMChangeTypeOp",
		sizeof(FRigVMChangeTypeOp),
		alignof(FRigVMChangeTypeOp),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMChangeTypeOp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMChangeTypeOp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMChangeTypeOp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMChangeTypeOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMChangeTypeOp.InnerSingleton, Z_Construct_UScriptStruct_FRigVMChangeTypeOp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMChangeTypeOp.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMInvokeEntryOp>() == std::is_polymorphic<FRigVMBaseOp>(), "USTRUCT FRigVMInvokeEntryOp cannot be polymorphic unless super FRigVMBaseOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMInvokeEntryOp;
class UScriptStruct* FRigVMInvokeEntryOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMInvokeEntryOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMInvokeEntryOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMInvokeEntryOp, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMInvokeEntryOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMInvokeEntryOp.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMInvokeEntryOp>()
{
	return FRigVMInvokeEntryOp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMInvokeEntryOp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMInvokeEntryOp_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// invoke another entry\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMByteCode.h" },
		{ "ToolTip", "invoke another entry" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMInvokeEntryOp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMInvokeEntryOp>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMInvokeEntryOp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMBaseOp,
		&NewStructOps,
		"RigVMInvokeEntryOp",
		sizeof(FRigVMInvokeEntryOp),
		alignof(FRigVMInvokeEntryOp),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMInvokeEntryOp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMInvokeEntryOp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMInvokeEntryOp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMInvokeEntryOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMInvokeEntryOp.InnerSingleton, Z_Construct_UScriptStruct_FRigVMInvokeEntryOp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMInvokeEntryOp.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMJumpToBranchOp>() == std::is_polymorphic<FRigVMUnaryOp>(), "USTRUCT FRigVMJumpToBranchOp cannot be polymorphic unless super FRigVMUnaryOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMJumpToBranchOp;
class UScriptStruct* FRigVMJumpToBranchOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMJumpToBranchOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMJumpToBranchOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMJumpToBranchOp, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMJumpToBranchOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMJumpToBranchOp.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMJumpToBranchOp>()
{
	return FRigVMJumpToBranchOp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMJumpToBranchOp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMJumpToBranchOp_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// jump into a branch based on a name argument\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMByteCode.h" },
		{ "ToolTip", "jump into a branch based on a name argument" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMJumpToBranchOp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMJumpToBranchOp>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMJumpToBranchOp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMUnaryOp,
		&NewStructOps,
		"RigVMJumpToBranchOp",
		sizeof(FRigVMJumpToBranchOp),
		alignof(FRigVMJumpToBranchOp),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMJumpToBranchOp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMJumpToBranchOp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMJumpToBranchOp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMJumpToBranchOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMJumpToBranchOp.InnerSingleton, Z_Construct_UScriptStruct_FRigVMJumpToBranchOp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMJumpToBranchOp.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMInstruction;
class UScriptStruct* FRigVMInstruction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMInstruction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMInstruction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMInstruction, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMInstruction"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMInstruction.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMInstruction>()
{
	return FRigVMInstruction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMInstruction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ByteCodeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FFInt64PropertyParams NewProp_ByteCodeIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OpCode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpCode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OpCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OperandAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_OperandAlignment;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMInstruction_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * The FRigVMInstruction represents\n * a single instruction within the VM.\n */" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMByteCode.h" },
		{ "ToolTip", "The FRigVMInstruction represents\na single instruction within the VM." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMInstruction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMInstruction>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMInstruction_Statics::NewProp_ByteCodeIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMByteCode.h" },
	};
#endif
	const UECodeGen_Private::FFInt64PropertyParams Z_Construct_UScriptStruct_FRigVMInstruction_Statics::NewProp_ByteCodeIndex = { "ByteCodeIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMInstruction, ByteCodeIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMInstruction_Statics::NewProp_ByteCodeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMInstruction_Statics::NewProp_ByteCodeIndex_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMInstruction_Statics::NewProp_OpCode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMInstruction_Statics::NewProp_OpCode_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMByteCode.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigVMInstruction_Statics::NewProp_OpCode = { "OpCode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMInstruction, OpCode), Z_Construct_UEnum_RigVM_ERigVMOpCode, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMInstruction_Statics::NewProp_OpCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMInstruction_Statics::NewProp_OpCode_MetaData)) }; // 1510016481
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMInstruction_Statics::NewProp_OperandAlignment_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMByteCode.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMInstruction_Statics::NewProp_OperandAlignment = { "OperandAlignment", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMInstruction, OperandAlignment), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMInstruction_Statics::NewProp_OperandAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMInstruction_Statics::NewProp_OperandAlignment_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMInstruction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMInstruction_Statics::NewProp_ByteCodeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMInstruction_Statics::NewProp_OpCode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMInstruction_Statics::NewProp_OpCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMInstruction_Statics::NewProp_OperandAlignment,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMInstruction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		&NewStructOps,
		"RigVMInstruction",
		sizeof(FRigVMInstruction),
		alignof(FRigVMInstruction),
		Z_Construct_UScriptStruct_FRigVMInstruction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMInstruction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMInstruction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMInstruction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMInstruction()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMInstruction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMInstruction.InnerSingleton, Z_Construct_UScriptStruct_FRigVMInstruction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMInstruction.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMInstructionArray;
class UScriptStruct* FRigVMInstructionArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMInstructionArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMInstructionArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMInstructionArray, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMInstructionArray"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMInstructionArray.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMInstructionArray>()
{
	return FRigVMInstructionArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMInstructionArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Instructions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instructions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Instructions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMInstructionArray_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * The FRigVMInstructionArray represents all current instructions\n * within a RigVM and can be used to iterate over all operators and retrieve\n * each instruction's data.\n */" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMByteCode.h" },
		{ "ToolTip", "The FRigVMInstructionArray represents all current instructions\nwithin a RigVM and can be used to iterate over all operators and retrieve\neach instruction's data." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMInstructionArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMInstructionArray>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMInstructionArray_Statics::NewProp_Instructions_Inner = { "Instructions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigVMInstruction, METADATA_PARAMS(nullptr, 0) }; // 914828298
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMInstructionArray_Statics::NewProp_Instructions_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMByteCode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMInstructionArray_Statics::NewProp_Instructions = { "Instructions", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMInstructionArray, Instructions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMInstructionArray_Statics::NewProp_Instructions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMInstructionArray_Statics::NewProp_Instructions_MetaData)) }; // 914828298
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMInstructionArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMInstructionArray_Statics::NewProp_Instructions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMInstructionArray_Statics::NewProp_Instructions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMInstructionArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		&NewStructOps,
		"RigVMInstructionArray",
		sizeof(FRigVMInstructionArray),
		alignof(FRigVMInstructionArray),
		Z_Construct_UScriptStruct_FRigVMInstructionArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMInstructionArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMInstructionArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMInstructionArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMInstructionArray()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMInstructionArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMInstructionArray.InnerSingleton, Z_Construct_UScriptStruct_FRigVMInstructionArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMInstructionArray.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMByteCodeEntry;
class UScriptStruct* FRigVMByteCodeEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMByteCodeEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMByteCodeEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMByteCodeEntry, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMByteCodeEntry"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMByteCodeEntry.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMByteCodeEntry>()
{
	return FRigVMByteCodeEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMByteCodeEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstructionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InstructionIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMByteCodeEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMByteCode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMByteCodeEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMByteCodeEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMByteCodeEntry_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMByteCode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMByteCodeEntry_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMByteCodeEntry, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMByteCodeEntry_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMByteCodeEntry_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMByteCodeEntry_Statics::NewProp_InstructionIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMByteCode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMByteCodeEntry_Statics::NewProp_InstructionIndex = { "InstructionIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMByteCodeEntry, InstructionIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMByteCodeEntry_Statics::NewProp_InstructionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMByteCodeEntry_Statics::NewProp_InstructionIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMByteCodeEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMByteCodeEntry_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMByteCodeEntry_Statics::NewProp_InstructionIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMByteCodeEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		&NewStructOps,
		"RigVMByteCodeEntry",
		sizeof(FRigVMByteCodeEntry),
		alignof(FRigVMByteCodeEntry),
		Z_Construct_UScriptStruct_FRigVMByteCodeEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMByteCodeEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMByteCodeEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMByteCodeEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMByteCodeEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMByteCodeEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMByteCodeEntry.InnerSingleton, Z_Construct_UScriptStruct_FRigVMByteCodeEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMByteCodeEntry.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMByteCode;
class UScriptStruct* FRigVMByteCode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMByteCode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMByteCode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMByteCode, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMByteCode"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMByteCode.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMByteCode>()
{
	return FRigVMByteCode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMByteCode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_ByteCode_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ByteCode_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ByteCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumInstructions_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumInstructions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BranchInfos_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BranchInfos_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BranchInfos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMByteCode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * The FRigVMByteCode is a container to store a list of instructions with\n * their corresponding data. The byte code is then used within a VM to \n * execute. To iterate over the instructions within the byte code you can \n * use GetInstructions() to retrieve a FRigVMInstructionArray.\n */" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMByteCode.h" },
		{ "ToolTip", "The FRigVMByteCode is a container to store a list of instructions with\ntheir corresponding data. The byte code is then used within a VM to\nexecute. To iterate over the instructions within the byte code you can\nuse GetInstructions() to retrieve a FRigVMInstructionArray." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMByteCode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMByteCode>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMByteCode_Statics::NewProp_ByteCode_Inner = { "ByteCode", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMByteCode_Statics::NewProp_ByteCode_MetaData[] = {
		{ "Comment", "// memory for all instructions\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMByteCode.h" },
		{ "ToolTip", "memory for all instructions" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMByteCode_Statics::NewProp_ByteCode = { "ByteCode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMByteCode, ByteCode), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMByteCode_Statics::NewProp_ByteCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMByteCode_Statics::NewProp_ByteCode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMByteCode_Statics::NewProp_NumInstructions_MetaData[] = {
		{ "Comment", "// number of instructions stored here\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMByteCode.h" },
		{ "ToolTip", "number of instructions stored here" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMByteCode_Statics::NewProp_NumInstructions = { "NumInstructions", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMByteCode, NumInstructions), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMByteCode_Statics::NewProp_NumInstructions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMByteCode_Statics::NewProp_NumInstructions_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMByteCode_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigVMByteCodeEntry, METADATA_PARAMS(nullptr, 0) }; // 1243806099
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMByteCode_Statics::NewProp_Entries_MetaData[] = {
		{ "Comment", "// a look up table from entry name to instruction index\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMByteCode.h" },
		{ "ToolTip", "a look up table from entry name to instruction index" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMByteCode_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMByteCode, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMByteCode_Statics::NewProp_Entries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMByteCode_Statics::NewProp_Entries_MetaData)) }; // 1243806099
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMByteCode_Statics::NewProp_BranchInfos_Inner = { "BranchInfos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigVMBranchInfo, METADATA_PARAMS(nullptr, 0) }; // 1011398864
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMByteCode_Statics::NewProp_BranchInfos_MetaData[] = {
		{ "Comment", "// a list of all lazily evaluation branches\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMByteCode.h" },
		{ "ToolTip", "a list of all lazily evaluation branches" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMByteCode_Statics::NewProp_BranchInfos = { "BranchInfos", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMByteCode, BranchInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMByteCode_Statics::NewProp_BranchInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMByteCode_Statics::NewProp_BranchInfos_MetaData)) }; // 1011398864
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMByteCode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMByteCode_Statics::NewProp_ByteCode_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMByteCode_Statics::NewProp_ByteCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMByteCode_Statics::NewProp_NumInstructions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMByteCode_Statics::NewProp_Entries_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMByteCode_Statics::NewProp_Entries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMByteCode_Statics::NewProp_BranchInfos_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMByteCode_Statics::NewProp_BranchInfos,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMByteCode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		&NewStructOps,
		"RigVMByteCode",
		sizeof(FRigVMByteCode),
		alignof(FRigVMByteCode),
		Z_Construct_UScriptStruct_FRigVMByteCode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMByteCode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMByteCode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMByteCode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMByteCode()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMByteCode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMByteCode.InnerSingleton, Z_Construct_UScriptStruct_FRigVMByteCode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMByteCode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMByteCode_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMByteCode_h_Statics::EnumInfo[] = {
		{ ERigVMOpCode_StaticEnum, TEXT("ERigVMOpCode"), &Z_Registration_Info_UEnum_ERigVMOpCode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1510016481U) },
		{ ERigVMCopyType_StaticEnum, TEXT("ERigVMCopyType"), &Z_Registration_Info_UEnum_ERigVMCopyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2934675708U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMByteCode_h_Statics::ScriptStructInfo[] = {
		{ FRigVMBaseOp::StaticStruct, Z_Construct_UScriptStruct_FRigVMBaseOp_Statics::NewStructOps, TEXT("RigVMBaseOp"), &Z_Registration_Info_UScriptStruct_RigVMBaseOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMBaseOp), 1000059786U) },
		{ FRigVMExecuteOp::StaticStruct, Z_Construct_UScriptStruct_FRigVMExecuteOp_Statics::NewStructOps, TEXT("RigVMExecuteOp"), &Z_Registration_Info_UScriptStruct_RigVMExecuteOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMExecuteOp), 1516781059U) },
		{ FRigVMUnaryOp::StaticStruct, Z_Construct_UScriptStruct_FRigVMUnaryOp_Statics::NewStructOps, TEXT("RigVMUnaryOp"), &Z_Registration_Info_UScriptStruct_RigVMUnaryOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMUnaryOp), 325088462U) },
		{ FRigVMBinaryOp::StaticStruct, Z_Construct_UScriptStruct_FRigVMBinaryOp_Statics::NewStructOps, TEXT("RigVMBinaryOp"), &Z_Registration_Info_UScriptStruct_RigVMBinaryOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMBinaryOp), 458647674U) },
		{ FRigVMTernaryOp::StaticStruct, Z_Construct_UScriptStruct_FRigVMTernaryOp_Statics::NewStructOps, TEXT("RigVMTernaryOp"), &Z_Registration_Info_UScriptStruct_RigVMTernaryOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMTernaryOp), 2802637760U) },
		{ FRigVMQuaternaryOp::StaticStruct, Z_Construct_UScriptStruct_FRigVMQuaternaryOp_Statics::NewStructOps, TEXT("RigVMQuaternaryOp"), &Z_Registration_Info_UScriptStruct_RigVMQuaternaryOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMQuaternaryOp), 1884108045U) },
		{ FRigVMQuinaryOp::StaticStruct, Z_Construct_UScriptStruct_FRigVMQuinaryOp_Statics::NewStructOps, TEXT("RigVMQuinaryOp"), &Z_Registration_Info_UScriptStruct_RigVMQuinaryOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMQuinaryOp), 2485175699U) },
		{ FRigVMSenaryOp::StaticStruct, Z_Construct_UScriptStruct_FRigVMSenaryOp_Statics::NewStructOps, TEXT("RigVMSenaryOp"), &Z_Registration_Info_UScriptStruct_RigVMSenaryOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMSenaryOp), 2441722637U) },
		{ FRigVMCopyOp::StaticStruct, Z_Construct_UScriptStruct_FRigVMCopyOp_Statics::NewStructOps, TEXT("RigVMCopyOp"), &Z_Registration_Info_UScriptStruct_RigVMCopyOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMCopyOp), 1019339212U) },
		{ FRigVMComparisonOp::StaticStruct, Z_Construct_UScriptStruct_FRigVMComparisonOp_Statics::NewStructOps, TEXT("RigVMComparisonOp"), &Z_Registration_Info_UScriptStruct_RigVMComparisonOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMComparisonOp), 3464118103U) },
		{ FRigVMJumpOp::StaticStruct, Z_Construct_UScriptStruct_FRigVMJumpOp_Statics::NewStructOps, TEXT("RigVMJumpOp"), &Z_Registration_Info_UScriptStruct_RigVMJumpOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMJumpOp), 2140819905U) },
		{ FRigVMJumpIfOp::StaticStruct, Z_Construct_UScriptStruct_FRigVMJumpIfOp_Statics::NewStructOps, TEXT("RigVMJumpIfOp"), &Z_Registration_Info_UScriptStruct_RigVMJumpIfOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMJumpIfOp), 3121872861U) },
		{ FRigVMChangeTypeOp::StaticStruct, Z_Construct_UScriptStruct_FRigVMChangeTypeOp_Statics::NewStructOps, TEXT("RigVMChangeTypeOp"), &Z_Registration_Info_UScriptStruct_RigVMChangeTypeOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMChangeTypeOp), 1169116866U) },
		{ FRigVMInvokeEntryOp::StaticStruct, Z_Construct_UScriptStruct_FRigVMInvokeEntryOp_Statics::NewStructOps, TEXT("RigVMInvokeEntryOp"), &Z_Registration_Info_UScriptStruct_RigVMInvokeEntryOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMInvokeEntryOp), 928149633U) },
		{ FRigVMJumpToBranchOp::StaticStruct, Z_Construct_UScriptStruct_FRigVMJumpToBranchOp_Statics::NewStructOps, TEXT("RigVMJumpToBranchOp"), &Z_Registration_Info_UScriptStruct_RigVMJumpToBranchOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMJumpToBranchOp), 2272241475U) },
		{ FRigVMInstruction::StaticStruct, Z_Construct_UScriptStruct_FRigVMInstruction_Statics::NewStructOps, TEXT("RigVMInstruction"), &Z_Registration_Info_UScriptStruct_RigVMInstruction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMInstruction), 914828298U) },
		{ FRigVMInstructionArray::StaticStruct, Z_Construct_UScriptStruct_FRigVMInstructionArray_Statics::NewStructOps, TEXT("RigVMInstructionArray"), &Z_Registration_Info_UScriptStruct_RigVMInstructionArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMInstructionArray), 2794654496U) },
		{ FRigVMByteCodeEntry::StaticStruct, Z_Construct_UScriptStruct_FRigVMByteCodeEntry_Statics::NewStructOps, TEXT("RigVMByteCodeEntry"), &Z_Registration_Info_UScriptStruct_RigVMByteCodeEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMByteCodeEntry), 1243806099U) },
		{ FRigVMByteCode::StaticStruct, Z_Construct_UScriptStruct_FRigVMByteCode_Statics::NewStructOps, TEXT("RigVMByteCode"), &Z_Registration_Info_UScriptStruct_RigVMByteCode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMByteCode), 2857673729U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMByteCode_h_2490787692(TEXT("/Script/RigVM"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMByteCode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMByteCode_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMByteCode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMByteCode_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
