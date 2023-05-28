// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMCore/RigVMMemoryCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMMemoryCommon() {}
// Cross Module References
	RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMMemoryType();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMOperand();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigVMMemoryType;
	static UEnum* ERigVMMemoryType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERigVMMemoryType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERigVMMemoryType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigVM_ERigVMMemoryType, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("ERigVMMemoryType"));
		}
		return Z_Registration_Info_UEnum_ERigVMMemoryType.OuterSingleton;
	}
	template<> RIGVM_API UEnum* StaticEnum<ERigVMMemoryType>()
	{
		return ERigVMMemoryType_StaticEnum();
	}
	struct Z_Construct_UEnum_RigVM_ERigVMMemoryType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RigVM_ERigVMMemoryType_Statics::Enumerators[] = {
		{ "ERigVMMemoryType::Work", (int64)ERigVMMemoryType::Work },
		{ "ERigVMMemoryType::Literal", (int64)ERigVMMemoryType::Literal },
		{ "ERigVMMemoryType::External", (int64)ERigVMMemoryType::External },
		{ "ERigVMMemoryType::Debug", (int64)ERigVMMemoryType::Debug },
		{ "ERigVMMemoryType::Invalid", (int64)ERigVMMemoryType::Invalid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RigVM_ERigVMMemoryType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * The type of memory used. Typically we differentiate between\n * Work (Mutable) and Literal (Constant) memory.\n */" },
		{ "Debug.Comment", "// Unowned external memory\n" },
		{ "Debug.Name", "ERigVMMemoryType::Debug" },
		{ "Debug.ToolTip", "Unowned external memory" },
		{ "External.Comment", "// Const / fixed state\n" },
		{ "External.Name", "ERigVMMemoryType::External" },
		{ "External.ToolTip", "Const / fixed state" },
		{ "Invalid.Comment", "// Owned memory used for debug watches\n" },
		{ "Invalid.Name", "ERigVMMemoryType::Invalid" },
		{ "Invalid.ToolTip", "Owned memory used for debug watches" },
		{ "Literal.Comment", "// Mutable state\n" },
		{ "Literal.Name", "ERigVMMemoryType::Literal" },
		{ "Literal.ToolTip", "Mutable state" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryCommon.h" },
		{ "ToolTip", "The type of memory used. Typically we differentiate between\nWork (Mutable) and Literal (Constant) memory." },
		{ "Work.Name", "ERigVMMemoryType::Work" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigVM_ERigVMMemoryType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		"ERigVMMemoryType",
		"ERigVMMemoryType",
		Z_Construct_UEnum_RigVM_ERigVMMemoryType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERigVMMemoryType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RigVM_ERigVMMemoryType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERigVMMemoryType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RigVM_ERigVMMemoryType()
	{
		if (!Z_Registration_Info_UEnum_ERigVMMemoryType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigVMMemoryType.InnerSingleton, Z_Construct_UEnum_RigVM_ERigVMMemoryType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERigVMMemoryType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMOperand;
class UScriptStruct* FRigVMOperand::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMOperand.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMOperand.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMOperand, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMOperand"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMOperand.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMOperand>()
{
	return FRigVMOperand::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMOperand_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_MemoryType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MemoryType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MemoryType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegisterIndex_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_RegisterIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegisterOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_RegisterOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMOperand_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * The FRigVMOperand represents an argument used for an operator\n * within the virtual machine. Operands provide information about\n * which memory needs to be referred to, which register within the\n * memory all the way to the actual byte address in memory.\n * The FRigVMOperand is a light weight address for a register in\n * a FRigVMMemoryContainer.\n * For external variables the register index represents the\n * index of the external variable within the running VM.\n */" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryCommon.h" },
		{ "ToolTip", "The FRigVMOperand represents an argument used for an operator\nwithin the virtual machine. Operands provide information about\nwhich memory needs to be referred to, which register within the\nmemory all the way to the actual byte address in memory.\nThe FRigVMOperand is a light weight address for a register in\na FRigVMMemoryContainer.\nFor external variables the register index represents the\nindex of the external variable within the running VM." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMOperand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMOperand>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMOperand_Statics::NewProp_MemoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMOperand_Statics::NewProp_MemoryType_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryCommon.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigVMOperand_Statics::NewProp_MemoryType = { "MemoryType", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMOperand, MemoryType), Z_Construct_UEnum_RigVM_ERigVMMemoryType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMOperand_Statics::NewProp_MemoryType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMOperand_Statics::NewProp_MemoryType_MetaData)) }; // 3202734936
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMOperand_Statics::NewProp_RegisterIndex_MetaData[] = {
		{ "Comment", "/**\n\x09 * The index of the register inside of the specific type of memory (work, literal etc).\n\x09 * For external variables the register index represents the index of the external variable within the running VM.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryCommon.h" },
		{ "ToolTip", "The index of the register inside of the specific type of memory (work, literal etc).\nFor external variables the register index represents the index of the external variable within the running VM." },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FRigVMOperand_Statics::NewProp_RegisterIndex = { "RegisterIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMOperand, RegisterIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMOperand_Statics::NewProp_RegisterIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMOperand_Statics::NewProp_RegisterIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMOperand_Statics::NewProp_RegisterOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryCommon.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FRigVMOperand_Statics::NewProp_RegisterOffset = { "RegisterOffset", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMOperand, RegisterOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMOperand_Statics::NewProp_RegisterOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMOperand_Statics::NewProp_RegisterOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMOperand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMOperand_Statics::NewProp_MemoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMOperand_Statics::NewProp_MemoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMOperand_Statics::NewProp_RegisterIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMOperand_Statics::NewProp_RegisterOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMOperand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		&NewStructOps,
		"RigVMOperand",
		sizeof(FRigVMOperand),
		alignof(FRigVMOperand),
		Z_Construct_UScriptStruct_FRigVMOperand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMOperand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMOperand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMOperand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMOperand()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMOperand.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMOperand.InnerSingleton, Z_Construct_UScriptStruct_FRigVMOperand_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMOperand.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMMemoryCommon_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMMemoryCommon_h_Statics::EnumInfo[] = {
		{ ERigVMMemoryType_StaticEnum, TEXT("ERigVMMemoryType"), &Z_Registration_Info_UEnum_ERigVMMemoryType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3202734936U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMMemoryCommon_h_Statics::ScriptStructInfo[] = {
		{ FRigVMOperand::StaticStruct, Z_Construct_UScriptStruct_FRigVMOperand_Statics::NewStructOps, TEXT("RigVMOperand"), &Z_Registration_Info_UScriptStruct_RigVMOperand, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMOperand), 1902833667U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMMemoryCommon_h_454397802(TEXT("/Script/RigVM"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMMemoryCommon_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMMemoryCommon_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMMemoryCommon_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMMemoryCommon_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
