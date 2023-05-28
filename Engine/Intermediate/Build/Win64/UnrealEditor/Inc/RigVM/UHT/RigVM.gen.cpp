// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMCore/RigVM.h"
#include "RigVMCore/RigVMByteCode.h"
#include "RigVMCore/RigVMExecuteContext.h"
#include "RigVMCore/RigVMStatistics.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVM() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	RIGVM_API UClass* Z_Construct_UClass_URigVM();
	RIGVM_API UClass* Z_Construct_UClass_URigVM_NoRegister();
	RIGVM_API UClass* Z_Construct_UClass_URigVMMemoryStorage_NoRegister();
	RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMBreakpointAction();
	RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMParameterType();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMByteCode();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMExtendedExecuteContext();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMInstructionArray();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMParameter();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMStatistics();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigVMBreakpointAction;
	static UEnum* ERigVMBreakpointAction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERigVMBreakpointAction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERigVMBreakpointAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigVM_ERigVMBreakpointAction, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("ERigVMBreakpointAction"));
		}
		return Z_Registration_Info_UEnum_ERigVMBreakpointAction.OuterSingleton;
	}
	template<> RIGVM_API UEnum* StaticEnum<ERigVMBreakpointAction>()
	{
		return ERigVMBreakpointAction_StaticEnum();
	}
	struct Z_Construct_UEnum_RigVM_ERigVMBreakpointAction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RigVM_ERigVMBreakpointAction_Statics::Enumerators[] = {
		{ "ERigVMBreakpointAction::None", (int64)ERigVMBreakpointAction::None },
		{ "ERigVMBreakpointAction::Resume", (int64)ERigVMBreakpointAction::Resume },
		{ "ERigVMBreakpointAction::StepOver", (int64)ERigVMBreakpointAction::StepOver },
		{ "ERigVMBreakpointAction::StepInto", (int64)ERigVMBreakpointAction::StepInto },
		{ "ERigVMBreakpointAction::StepOut", (int64)ERigVMBreakpointAction::StepOut },
		{ "ERigVMBreakpointAction::Max", (int64)ERigVMBreakpointAction::Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RigVM_ERigVMBreakpointAction_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// Possible actions when the VM is halted at a breakpoint\n" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "ERigVMBreakpointAction::Max" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
		{ "None.Name", "ERigVMBreakpointAction::None" },
		{ "Resume.Name", "ERigVMBreakpointAction::Resume" },
		{ "StepInto.Name", "ERigVMBreakpointAction::StepInto" },
		{ "StepOut.Name", "ERigVMBreakpointAction::StepOut" },
		{ "StepOver.Name", "ERigVMBreakpointAction::StepOver" },
		{ "ToolTip", "Possible actions when the VM is halted at a breakpoint" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigVM_ERigVMBreakpointAction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		"ERigVMBreakpointAction",
		"ERigVMBreakpointAction",
		Z_Construct_UEnum_RigVM_ERigVMBreakpointAction_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERigVMBreakpointAction_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RigVM_ERigVMBreakpointAction_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERigVMBreakpointAction_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RigVM_ERigVMBreakpointAction()
	{
		if (!Z_Registration_Info_UEnum_ERigVMBreakpointAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigVMBreakpointAction.InnerSingleton, Z_Construct_UEnum_RigVM_ERigVMBreakpointAction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERigVMBreakpointAction.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigVMParameterType;
	static UEnum* ERigVMParameterType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERigVMParameterType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERigVMParameterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigVM_ERigVMParameterType, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("ERigVMParameterType"));
		}
		return Z_Registration_Info_UEnum_ERigVMParameterType.OuterSingleton;
	}
	template<> RIGVM_API UEnum* StaticEnum<ERigVMParameterType>()
	{
		return ERigVMParameterType_StaticEnum();
	}
	struct Z_Construct_UEnum_RigVM_ERigVMParameterType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RigVM_ERigVMParameterType_Statics::Enumerators[] = {
		{ "ERigVMParameterType::Input", (int64)ERigVMParameterType::Input },
		{ "ERigVMParameterType::Output", (int64)ERigVMParameterType::Output },
		{ "ERigVMParameterType::Invalid", (int64)ERigVMParameterType::Invalid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RigVM_ERigVMParameterType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// The type of parameter for a VM\n" },
		{ "Input.Name", "ERigVMParameterType::Input" },
		{ "Invalid.Name", "ERigVMParameterType::Invalid" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
		{ "Output.Name", "ERigVMParameterType::Output" },
		{ "ToolTip", "The type of parameter for a VM" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigVM_ERigVMParameterType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		"ERigVMParameterType",
		"ERigVMParameterType",
		Z_Construct_UEnum_RigVM_ERigVMParameterType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERigVMParameterType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RigVM_ERigVMParameterType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERigVMParameterType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RigVM_ERigVMParameterType()
	{
		if (!Z_Registration_Info_UEnum_ERigVMParameterType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigVMParameterType.InnerSingleton, Z_Construct_UEnum_RigVM_ERigVMParameterType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERigVMParameterType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMParameter;
class UScriptStruct* FRigVMParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMParameter, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMParameter"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMParameter.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMParameter>()
{
	return FRigVMParameter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMParameter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegisterIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RegisterIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CPPType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CPPType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScriptStruct_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ScriptStruct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScriptStructPath_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ScriptStructPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMParameter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The RigVMParameter define an input or output of the RigVM.\n * Parameters are mapped to work state memory registers and can be\n * used to set input parameters as well as retrieve output parameters.\n */" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
		{ "ToolTip", "The RigVMParameter define an input or output of the RigVM.\nParameters are mapped to work state memory registers and can be\nused to set input parameters as well as retrieve output parameters." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMParameter>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMParameter_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMParameter_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigVMParameter_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMParameter, Type), Z_Construct_UEnum_RigVM_ERigVMParameterType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMParameter_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMParameter_Statics::NewProp_Type_MetaData)) }; // 1729048552
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMParameter_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMParameter, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMParameter_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMParameter_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMParameter_Statics::NewProp_RegisterIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMParameter_Statics::NewProp_RegisterIndex = { "RegisterIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMParameter, RegisterIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMParameter_Statics::NewProp_RegisterIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMParameter_Statics::NewProp_RegisterIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMParameter_Statics::NewProp_CPPType_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMParameter_Statics::NewProp_CPPType = { "CPPType", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMParameter, CPPType), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMParameter_Statics::NewProp_CPPType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMParameter_Statics::NewProp_CPPType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMParameter_Statics::NewProp_ScriptStruct_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FRigVMParameter_Statics::NewProp_ScriptStruct = { "ScriptStruct", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMParameter, ScriptStruct), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMParameter_Statics::NewProp_ScriptStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMParameter_Statics::NewProp_ScriptStruct_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMParameter_Statics::NewProp_ScriptStructPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMParameter_Statics::NewProp_ScriptStructPath = { "ScriptStructPath", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMParameter, ScriptStructPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMParameter_Statics::NewProp_ScriptStructPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMParameter_Statics::NewProp_ScriptStructPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMParameter_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMParameter_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMParameter_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMParameter_Statics::NewProp_RegisterIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMParameter_Statics::NewProp_CPPType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMParameter_Statics::NewProp_ScriptStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMParameter_Statics::NewProp_ScriptStructPath,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		&NewStructOps,
		"RigVMParameter",
		sizeof(FRigVMParameter),
		alignof(FRigVMParameter),
		Z_Construct_UScriptStruct_FRigVMParameter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMParameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMParameter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMParameter()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMParameter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMParameter.InnerSingleton, Z_Construct_UScriptStruct_FRigVMParameter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMParameter.InnerSingleton;
	}
	DEFINE_FUNCTION(URigVM::execGetStatistics)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRigVMStatistics*)Z_Param__Result=P_THIS->GetStatistics();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVM::execSetParameterValueTransform)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InParameterName);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_InArrayIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetParameterValueTransform(Z_Param_Out_InParameterName,Z_Param_Out_InValue,Z_Param_InArrayIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVM::execSetParameterValueQuat)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InParameterName);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_InValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_InArrayIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetParameterValueQuat(Z_Param_Out_InParameterName,Z_Param_Out_InValue,Z_Param_InArrayIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVM::execSetParameterValueVector)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InParameterName);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_InArrayIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetParameterValueVector(Z_Param_Out_InParameterName,Z_Param_Out_InValue,Z_Param_InArrayIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVM::execSetParameterValueVector2D)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InParameterName);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_InArrayIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetParameterValueVector2D(Z_Param_Out_InParameterName,Z_Param_Out_InValue,Z_Param_InArrayIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVM::execSetParameterValueString)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InParameterName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_InArrayIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetParameterValueString(Z_Param_Out_InParameterName,Z_Param_InValue,Z_Param_InArrayIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVM::execSetParameterValueName)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InParameterName);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_InArrayIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetParameterValueName(Z_Param_Out_InParameterName,Z_Param_Out_InValue,Z_Param_InArrayIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVM::execSetParameterValueInt)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InParameterName);
		P_GET_PROPERTY(FIntProperty,Z_Param_InValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_InArrayIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetParameterValueInt(Z_Param_Out_InParameterName,Z_Param_InValue,Z_Param_InArrayIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVM::execSetParameterValueDouble)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InParameterName);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_InValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_InArrayIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetParameterValueDouble(Z_Param_Out_InParameterName,Z_Param_InValue,Z_Param_InArrayIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVM::execSetParameterValueFloat)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InParameterName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_InArrayIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetParameterValueFloat(Z_Param_Out_InParameterName,Z_Param_InValue,Z_Param_InArrayIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVM::execSetParameterValueBool)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InParameterName);
		P_GET_UBOOL(Z_Param_InValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_InArrayIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetParameterValueBool(Z_Param_Out_InParameterName,Z_Param_InValue,Z_Param_InArrayIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVM::execGetParameterValueTransform)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InParameterName);
		P_GET_PROPERTY(FIntProperty,Z_Param_InArrayIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetParameterValueTransform(Z_Param_Out_InParameterName,Z_Param_InArrayIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVM::execGetParameterValueQuat)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InParameterName);
		P_GET_PROPERTY(FIntProperty,Z_Param_InArrayIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=P_THIS->GetParameterValueQuat(Z_Param_Out_InParameterName,Z_Param_InArrayIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVM::execGetParameterValueVector)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InParameterName);
		P_GET_PROPERTY(FIntProperty,Z_Param_InArrayIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetParameterValueVector(Z_Param_Out_InParameterName,Z_Param_InArrayIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVM::execGetParameterValueVector2D)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InParameterName);
		P_GET_PROPERTY(FIntProperty,Z_Param_InArrayIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetParameterValueVector2D(Z_Param_Out_InParameterName,Z_Param_InArrayIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVM::execGetParameterValueString)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InParameterName);
		P_GET_PROPERTY(FIntProperty,Z_Param_InArrayIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetParameterValueString(Z_Param_Out_InParameterName,Z_Param_InArrayIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVM::execGetParameterValueName)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InParameterName);
		P_GET_PROPERTY(FIntProperty,Z_Param_InArrayIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetParameterValueName(Z_Param_Out_InParameterName,Z_Param_InArrayIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVM::execGetParameterValueInt)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InParameterName);
		P_GET_PROPERTY(FIntProperty,Z_Param_InArrayIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetParameterValueInt(Z_Param_Out_InParameterName,Z_Param_InArrayIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVM::execGetParameterValueDouble)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InParameterName);
		P_GET_PROPERTY(FIntProperty,Z_Param_InArrayIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=P_THIS->GetParameterValueDouble(Z_Param_Out_InParameterName,Z_Param_InArrayIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVM::execGetParameterValueFloat)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InParameterName);
		P_GET_PROPERTY(FIntProperty,Z_Param_InArrayIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetParameterValueFloat(Z_Param_Out_InParameterName,Z_Param_InArrayIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVM::execGetParameterValueBool)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InParameterName);
		P_GET_PROPERTY(FIntProperty,Z_Param_InArrayIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetParameterValueBool(Z_Param_Out_InParameterName,Z_Param_InArrayIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVM::execGetRigVMFunctionName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InFunctionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetRigVMFunctionName(Z_Param_InFunctionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVM::execAddRigVMFunction)
	{
		P_GET_OBJECT(UScriptStruct,Z_Param_InRigVMStruct);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InMethodName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AddRigVMFunction(Z_Param_InRigVMStruct,Z_Param_Out_InMethodName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVM::execExecute)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InEntryName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Execute(Z_Param_Out_InEntryName);
		P_NATIVE_END;
	}
	void URigVM::StaticRegisterNativesURigVM()
	{
		UClass* Class = URigVM::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddRigVMFunction", &URigVM::execAddRigVMFunction },
			{ "Execute", &URigVM::execExecute },
			{ "GetParameterValueBool", &URigVM::execGetParameterValueBool },
			{ "GetParameterValueDouble", &URigVM::execGetParameterValueDouble },
			{ "GetParameterValueFloat", &URigVM::execGetParameterValueFloat },
			{ "GetParameterValueInt", &URigVM::execGetParameterValueInt },
			{ "GetParameterValueName", &URigVM::execGetParameterValueName },
			{ "GetParameterValueQuat", &URigVM::execGetParameterValueQuat },
			{ "GetParameterValueString", &URigVM::execGetParameterValueString },
			{ "GetParameterValueTransform", &URigVM::execGetParameterValueTransform },
			{ "GetParameterValueVector", &URigVM::execGetParameterValueVector },
			{ "GetParameterValueVector2D", &URigVM::execGetParameterValueVector2D },
			{ "GetRigVMFunctionName", &URigVM::execGetRigVMFunctionName },
			{ "GetStatistics", &URigVM::execGetStatistics },
			{ "SetParameterValueBool", &URigVM::execSetParameterValueBool },
			{ "SetParameterValueDouble", &URigVM::execSetParameterValueDouble },
			{ "SetParameterValueFloat", &URigVM::execSetParameterValueFloat },
			{ "SetParameterValueInt", &URigVM::execSetParameterValueInt },
			{ "SetParameterValueName", &URigVM::execSetParameterValueName },
			{ "SetParameterValueQuat", &URigVM::execSetParameterValueQuat },
			{ "SetParameterValueString", &URigVM::execSetParameterValueString },
			{ "SetParameterValueTransform", &URigVM::execSetParameterValueTransform },
			{ "SetParameterValueVector", &URigVM::execSetParameterValueVector },
			{ "SetParameterValueVector2D", &URigVM::execSetParameterValueVector2D },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URigVM_AddRigVMFunction_Statics
	{
		struct RigVM_eventAddRigVMFunction_Parms
		{
			UScriptStruct* InRigVMStruct;
			FName InMethodName;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InRigVMStruct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMethodName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InMethodName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVM_AddRigVMFunction_Statics::NewProp_InRigVMStruct = { "InRigVMStruct", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventAddRigVMFunction_Parms, InRigVMStruct), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_AddRigVMFunction_Statics::NewProp_InMethodName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVM_AddRigVMFunction_Statics::NewProp_InMethodName = { "InMethodName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventAddRigVMFunction_Parms, InMethodName), METADATA_PARAMS(Z_Construct_UFunction_URigVM_AddRigVMFunction_Statics::NewProp_InMethodName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_AddRigVMFunction_Statics::NewProp_InMethodName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVM_AddRigVMFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventAddRigVMFunction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVM_AddRigVMFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_AddRigVMFunction_Statics::NewProp_InRigVMStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_AddRigVMFunction_Statics::NewProp_InMethodName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_AddRigVMFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_AddRigVMFunction_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Add a function for execute instructions to this VM.\n// Execute instructions can then refer to the function by index.\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
		{ "ToolTip", "Add a function for execute instructions to this VM.\nExecute instructions can then refer to the function by index." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVM_AddRigVMFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVM, nullptr, "AddRigVMFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVM_AddRigVMFunction_Statics::RigVM_eventAddRigVMFunction_Parms), Z_Construct_UFunction_URigVM_AddRigVMFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_AddRigVMFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVM_AddRigVMFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_AddRigVMFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVM_AddRigVMFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVM_AddRigVMFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVM_Execute_Statics
	{
		struct RigVM_eventExecute_Parms
		{
			FName InEntryName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InEntryName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InEntryName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_Execute_Statics::NewProp_InEntryName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVM_Execute_Statics::NewProp_InEntryName = { "InEntryName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventExecute_Parms, InEntryName), METADATA_PARAMS(Z_Construct_UFunction_URigVM_Execute_Statics::NewProp_InEntryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_Execute_Statics::NewProp_InEntryName_MetaData)) };
	void Z_Construct_UFunction_URigVM_Execute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVM_eventExecute_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVM_Execute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVM_eventExecute_Parms), &Z_Construct_UFunction_URigVM_Execute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVM_Execute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_Execute_Statics::NewProp_InEntryName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_Execute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_Execute_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "Comment", "// Executes the VM.\n// You can optionally provide external memory to the execution\n// and provide optional additional operands.\n" },
		{ "CPP_Default_InEntryName", "None" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
		{ "ToolTip", "Executes the VM.\nYou can optionally provide external memory to the execution\nand provide optional additional operands." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVM_Execute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVM, nullptr, "Execute", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVM_Execute_Statics::RigVM_eventExecute_Parms), Z_Construct_UFunction_URigVM_Execute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_Execute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVM_Execute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_Execute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVM_Execute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVM_Execute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVM_GetParameterValueBool_Statics
	{
		struct RigVM_eventGetParameterValueBool_Parms
		{
			FName InParameterName;
			int32 InArrayIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InArrayIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_GetParameterValueBool_Statics::NewProp_InParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVM_GetParameterValueBool_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventGetParameterValueBool_Parms, InParameterName), METADATA_PARAMS(Z_Construct_UFunction_URigVM_GetParameterValueBool_Statics::NewProp_InParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueBool_Statics::NewProp_InParameterName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVM_GetParameterValueBool_Statics::NewProp_InArrayIndex = { "InArrayIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventGetParameterValueBool_Parms, InArrayIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigVM_GetParameterValueBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVM_eventGetParameterValueBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVM_GetParameterValueBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVM_eventGetParameterValueBool_Parms), &Z_Construct_UFunction_URigVM_GetParameterValueBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVM_GetParameterValueBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueBool_Statics::NewProp_InParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueBool_Statics::NewProp_InArrayIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_GetParameterValueBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "CPP_Default_InArrayIndex", "0" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVM_GetParameterValueBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVM, nullptr, "GetParameterValueBool", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVM_GetParameterValueBool_Statics::RigVM_eventGetParameterValueBool_Parms), Z_Construct_UFunction_URigVM_GetParameterValueBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVM_GetParameterValueBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVM_GetParameterValueBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVM_GetParameterValueBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVM_GetParameterValueDouble_Statics
	{
		struct RigVM_eventGetParameterValueDouble_Parms
		{
			FName InParameterName;
			int32 InArrayIndex;
			double ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InArrayIndex;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_GetParameterValueDouble_Statics::NewProp_InParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVM_GetParameterValueDouble_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventGetParameterValueDouble_Parms, InParameterName), METADATA_PARAMS(Z_Construct_UFunction_URigVM_GetParameterValueDouble_Statics::NewProp_InParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueDouble_Statics::NewProp_InParameterName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVM_GetParameterValueDouble_Statics::NewProp_InArrayIndex = { "InArrayIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventGetParameterValueDouble_Parms, InArrayIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URigVM_GetParameterValueDouble_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventGetParameterValueDouble_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVM_GetParameterValueDouble_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueDouble_Statics::NewProp_InParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueDouble_Statics::NewProp_InArrayIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueDouble_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_GetParameterValueDouble_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "CPP_Default_InArrayIndex", "0" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVM_GetParameterValueDouble_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVM, nullptr, "GetParameterValueDouble", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVM_GetParameterValueDouble_Statics::RigVM_eventGetParameterValueDouble_Parms), Z_Construct_UFunction_URigVM_GetParameterValueDouble_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueDouble_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVM_GetParameterValueDouble_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueDouble_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVM_GetParameterValueDouble()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVM_GetParameterValueDouble_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVM_GetParameterValueFloat_Statics
	{
		struct RigVM_eventGetParameterValueFloat_Parms
		{
			FName InParameterName;
			int32 InArrayIndex;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InArrayIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_GetParameterValueFloat_Statics::NewProp_InParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVM_GetParameterValueFloat_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventGetParameterValueFloat_Parms, InParameterName), METADATA_PARAMS(Z_Construct_UFunction_URigVM_GetParameterValueFloat_Statics::NewProp_InParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueFloat_Statics::NewProp_InParameterName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVM_GetParameterValueFloat_Statics::NewProp_InArrayIndex = { "InArrayIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventGetParameterValueFloat_Parms, InArrayIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URigVM_GetParameterValueFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventGetParameterValueFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVM_GetParameterValueFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueFloat_Statics::NewProp_InParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueFloat_Statics::NewProp_InArrayIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_GetParameterValueFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "CPP_Default_InArrayIndex", "0" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVM_GetParameterValueFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVM, nullptr, "GetParameterValueFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVM_GetParameterValueFloat_Statics::RigVM_eventGetParameterValueFloat_Parms), Z_Construct_UFunction_URigVM_GetParameterValueFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVM_GetParameterValueFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVM_GetParameterValueFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVM_GetParameterValueFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVM_GetParameterValueInt_Statics
	{
		struct RigVM_eventGetParameterValueInt_Parms
		{
			FName InParameterName;
			int32 InArrayIndex;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InArrayIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_GetParameterValueInt_Statics::NewProp_InParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVM_GetParameterValueInt_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventGetParameterValueInt_Parms, InParameterName), METADATA_PARAMS(Z_Construct_UFunction_URigVM_GetParameterValueInt_Statics::NewProp_InParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueInt_Statics::NewProp_InParameterName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVM_GetParameterValueInt_Statics::NewProp_InArrayIndex = { "InArrayIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventGetParameterValueInt_Parms, InArrayIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVM_GetParameterValueInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventGetParameterValueInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVM_GetParameterValueInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueInt_Statics::NewProp_InParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueInt_Statics::NewProp_InArrayIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_GetParameterValueInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "CPP_Default_InArrayIndex", "0" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVM_GetParameterValueInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVM, nullptr, "GetParameterValueInt", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVM_GetParameterValueInt_Statics::RigVM_eventGetParameterValueInt_Parms), Z_Construct_UFunction_URigVM_GetParameterValueInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVM_GetParameterValueInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVM_GetParameterValueInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVM_GetParameterValueInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVM_GetParameterValueName_Statics
	{
		struct RigVM_eventGetParameterValueName_Parms
		{
			FName InParameterName;
			int32 InArrayIndex;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InArrayIndex;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_GetParameterValueName_Statics::NewProp_InParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVM_GetParameterValueName_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventGetParameterValueName_Parms, InParameterName), METADATA_PARAMS(Z_Construct_UFunction_URigVM_GetParameterValueName_Statics::NewProp_InParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueName_Statics::NewProp_InParameterName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVM_GetParameterValueName_Statics::NewProp_InArrayIndex = { "InArrayIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventGetParameterValueName_Parms, InArrayIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVM_GetParameterValueName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventGetParameterValueName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVM_GetParameterValueName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueName_Statics::NewProp_InParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueName_Statics::NewProp_InArrayIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_GetParameterValueName_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "CPP_Default_InArrayIndex", "0" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVM_GetParameterValueName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVM, nullptr, "GetParameterValueName", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVM_GetParameterValueName_Statics::RigVM_eventGetParameterValueName_Parms), Z_Construct_UFunction_URigVM_GetParameterValueName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVM_GetParameterValueName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVM_GetParameterValueName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVM_GetParameterValueName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVM_GetParameterValueQuat_Statics
	{
		struct RigVM_eventGetParameterValueQuat_Parms
		{
			FName InParameterName;
			int32 InArrayIndex;
			FQuat ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InArrayIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_GetParameterValueQuat_Statics::NewProp_InParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVM_GetParameterValueQuat_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventGetParameterValueQuat_Parms, InParameterName), METADATA_PARAMS(Z_Construct_UFunction_URigVM_GetParameterValueQuat_Statics::NewProp_InParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueQuat_Statics::NewProp_InParameterName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVM_GetParameterValueQuat_Statics::NewProp_InArrayIndex = { "InArrayIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventGetParameterValueQuat_Parms, InArrayIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigVM_GetParameterValueQuat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventGetParameterValueQuat_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVM_GetParameterValueQuat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueQuat_Statics::NewProp_InParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueQuat_Statics::NewProp_InArrayIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueQuat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_GetParameterValueQuat_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "CPP_Default_InArrayIndex", "0" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVM_GetParameterValueQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVM, nullptr, "GetParameterValueQuat", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVM_GetParameterValueQuat_Statics::RigVM_eventGetParameterValueQuat_Parms), Z_Construct_UFunction_URigVM_GetParameterValueQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueQuat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVM_GetParameterValueQuat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueQuat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVM_GetParameterValueQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVM_GetParameterValueQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVM_GetParameterValueString_Statics
	{
		struct RigVM_eventGetParameterValueString_Parms
		{
			FName InParameterName;
			int32 InArrayIndex;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InArrayIndex;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_GetParameterValueString_Statics::NewProp_InParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVM_GetParameterValueString_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventGetParameterValueString_Parms, InParameterName), METADATA_PARAMS(Z_Construct_UFunction_URigVM_GetParameterValueString_Statics::NewProp_InParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueString_Statics::NewProp_InParameterName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVM_GetParameterValueString_Statics::NewProp_InArrayIndex = { "InArrayIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventGetParameterValueString_Parms, InArrayIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigVM_GetParameterValueString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventGetParameterValueString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVM_GetParameterValueString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueString_Statics::NewProp_InParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueString_Statics::NewProp_InArrayIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_GetParameterValueString_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "CPP_Default_InArrayIndex", "0" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVM_GetParameterValueString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVM, nullptr, "GetParameterValueString", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVM_GetParameterValueString_Statics::RigVM_eventGetParameterValueString_Parms), Z_Construct_UFunction_URigVM_GetParameterValueString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVM_GetParameterValueString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVM_GetParameterValueString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVM_GetParameterValueString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVM_GetParameterValueTransform_Statics
	{
		struct RigVM_eventGetParameterValueTransform_Parms
		{
			FName InParameterName;
			int32 InArrayIndex;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InArrayIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_GetParameterValueTransform_Statics::NewProp_InParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVM_GetParameterValueTransform_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventGetParameterValueTransform_Parms, InParameterName), METADATA_PARAMS(Z_Construct_UFunction_URigVM_GetParameterValueTransform_Statics::NewProp_InParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueTransform_Statics::NewProp_InParameterName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVM_GetParameterValueTransform_Statics::NewProp_InArrayIndex = { "InArrayIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventGetParameterValueTransform_Parms, InArrayIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigVM_GetParameterValueTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventGetParameterValueTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVM_GetParameterValueTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueTransform_Statics::NewProp_InParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueTransform_Statics::NewProp_InArrayIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_GetParameterValueTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "CPP_Default_InArrayIndex", "0" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVM_GetParameterValueTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVM, nullptr, "GetParameterValueTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVM_GetParameterValueTransform_Statics::RigVM_eventGetParameterValueTransform_Parms), Z_Construct_UFunction_URigVM_GetParameterValueTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVM_GetParameterValueTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVM_GetParameterValueTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVM_GetParameterValueTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVM_GetParameterValueVector_Statics
	{
		struct RigVM_eventGetParameterValueVector_Parms
		{
			FName InParameterName;
			int32 InArrayIndex;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InArrayIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_GetParameterValueVector_Statics::NewProp_InParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVM_GetParameterValueVector_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventGetParameterValueVector_Parms, InParameterName), METADATA_PARAMS(Z_Construct_UFunction_URigVM_GetParameterValueVector_Statics::NewProp_InParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueVector_Statics::NewProp_InParameterName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVM_GetParameterValueVector_Statics::NewProp_InArrayIndex = { "InArrayIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventGetParameterValueVector_Parms, InArrayIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigVM_GetParameterValueVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventGetParameterValueVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVM_GetParameterValueVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueVector_Statics::NewProp_InParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueVector_Statics::NewProp_InArrayIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_GetParameterValueVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "CPP_Default_InArrayIndex", "0" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVM_GetParameterValueVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVM, nullptr, "GetParameterValueVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVM_GetParameterValueVector_Statics::RigVM_eventGetParameterValueVector_Parms), Z_Construct_UFunction_URigVM_GetParameterValueVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVM_GetParameterValueVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVM_GetParameterValueVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVM_GetParameterValueVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVM_GetParameterValueVector2D_Statics
	{
		struct RigVM_eventGetParameterValueVector2D_Parms
		{
			FName InParameterName;
			int32 InArrayIndex;
			FVector2D ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InArrayIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_GetParameterValueVector2D_Statics::NewProp_InParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVM_GetParameterValueVector2D_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventGetParameterValueVector2D_Parms, InParameterName), METADATA_PARAMS(Z_Construct_UFunction_URigVM_GetParameterValueVector2D_Statics::NewProp_InParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueVector2D_Statics::NewProp_InParameterName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVM_GetParameterValueVector2D_Statics::NewProp_InArrayIndex = { "InArrayIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventGetParameterValueVector2D_Parms, InArrayIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigVM_GetParameterValueVector2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventGetParameterValueVector2D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVM_GetParameterValueVector2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueVector2D_Statics::NewProp_InParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueVector2D_Statics::NewProp_InArrayIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetParameterValueVector2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_GetParameterValueVector2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "CPP_Default_InArrayIndex", "0" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVM_GetParameterValueVector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVM, nullptr, "GetParameterValueVector2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVM_GetParameterValueVector2D_Statics::RigVM_eventGetParameterValueVector2D_Parms), Z_Construct_UFunction_URigVM_GetParameterValueVector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueVector2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVM_GetParameterValueVector2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetParameterValueVector2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVM_GetParameterValueVector2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVM_GetParameterValueVector2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVM_GetRigVMFunctionName_Statics
	{
		struct RigVM_eventGetRigVMFunctionName_Parms
		{
			int32 InFunctionIndex;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InFunctionIndex;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVM_GetRigVMFunctionName_Statics::NewProp_InFunctionIndex = { "InFunctionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventGetRigVMFunctionName_Parms, InFunctionIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigVM_GetRigVMFunctionName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventGetRigVMFunctionName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVM_GetRigVMFunctionName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetRigVMFunctionName_Statics::NewProp_InFunctionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetRigVMFunctionName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_GetRigVMFunctionName_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Returns the name of a function given its index\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
		{ "ToolTip", "Returns the name of a function given its index" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVM_GetRigVMFunctionName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVM, nullptr, "GetRigVMFunctionName", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVM_GetRigVMFunctionName_Statics::RigVM_eventGetRigVMFunctionName_Parms), Z_Construct_UFunction_URigVM_GetRigVMFunctionName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetRigVMFunctionName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVM_GetRigVMFunctionName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetRigVMFunctionName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVM_GetRigVMFunctionName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVM_GetRigVMFunctionName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVM_GetStatistics_Statics
	{
		struct RigVM_eventGetStatistics_Parms
		{
			FRigVMStatistics ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigVM_GetStatistics_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventGetStatistics_Parms, ReturnValue), Z_Construct_UScriptStruct_FRigVMStatistics, METADATA_PARAMS(nullptr, 0) }; // 1821124700
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVM_GetStatistics_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_GetStatistics_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_GetStatistics_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "Comment", "// returns the statistics information\n" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
		{ "ToolTip", "returns the statistics information" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVM_GetStatistics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVM, nullptr, "GetStatistics", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVM_GetStatistics_Statics::RigVM_eventGetStatistics_Parms), Z_Construct_UFunction_URigVM_GetStatistics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetStatistics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVM_GetStatistics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_GetStatistics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVM_GetStatistics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVM_GetStatistics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVM_SetParameterValueBool_Statics
	{
		struct RigVM_eventSetParameterValueBool_Parms
		{
			FName InParameterName;
			bool InValue;
			int32 InArrayIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
		static void NewProp_InValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InArrayIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_SetParameterValueBool_Statics::NewProp_InParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVM_SetParameterValueBool_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventSetParameterValueBool_Parms, InParameterName), METADATA_PARAMS(Z_Construct_UFunction_URigVM_SetParameterValueBool_Statics::NewProp_InParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueBool_Statics::NewProp_InParameterName_MetaData)) };
	void Z_Construct_UFunction_URigVM_SetParameterValueBool_Statics::NewProp_InValue_SetBit(void* Obj)
	{
		((RigVM_eventSetParameterValueBool_Parms*)Obj)->InValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVM_SetParameterValueBool_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVM_eventSetParameterValueBool_Parms), &Z_Construct_UFunction_URigVM_SetParameterValueBool_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVM_SetParameterValueBool_Statics::NewProp_InArrayIndex = { "InArrayIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventSetParameterValueBool_Parms, InArrayIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVM_SetParameterValueBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueBool_Statics::NewProp_InParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueBool_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueBool_Statics::NewProp_InArrayIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_SetParameterValueBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "CPP_Default_InArrayIndex", "0" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVM_SetParameterValueBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVM, nullptr, "SetParameterValueBool", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVM_SetParameterValueBool_Statics::RigVM_eventSetParameterValueBool_Parms), Z_Construct_UFunction_URigVM_SetParameterValueBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVM_SetParameterValueBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVM_SetParameterValueBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVM_SetParameterValueBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVM_SetParameterValueDouble_Statics
	{
		struct RigVM_eventSetParameterValueDouble_Parms
		{
			FName InParameterName;
			double InValue;
			int32 InArrayIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_InValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InArrayIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_SetParameterValueDouble_Statics::NewProp_InParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVM_SetParameterValueDouble_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventSetParameterValueDouble_Parms, InParameterName), METADATA_PARAMS(Z_Construct_UFunction_URigVM_SetParameterValueDouble_Statics::NewProp_InParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueDouble_Statics::NewProp_InParameterName_MetaData)) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URigVM_SetParameterValueDouble_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventSetParameterValueDouble_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVM_SetParameterValueDouble_Statics::NewProp_InArrayIndex = { "InArrayIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventSetParameterValueDouble_Parms, InArrayIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVM_SetParameterValueDouble_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueDouble_Statics::NewProp_InParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueDouble_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueDouble_Statics::NewProp_InArrayIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_SetParameterValueDouble_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "CPP_Default_InArrayIndex", "0" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVM_SetParameterValueDouble_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVM, nullptr, "SetParameterValueDouble", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVM_SetParameterValueDouble_Statics::RigVM_eventSetParameterValueDouble_Parms), Z_Construct_UFunction_URigVM_SetParameterValueDouble_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueDouble_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVM_SetParameterValueDouble_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueDouble_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVM_SetParameterValueDouble()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVM_SetParameterValueDouble_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVM_SetParameterValueFloat_Statics
	{
		struct RigVM_eventSetParameterValueFloat_Parms
		{
			FName InParameterName;
			float InValue;
			int32 InArrayIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InArrayIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_SetParameterValueFloat_Statics::NewProp_InParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVM_SetParameterValueFloat_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventSetParameterValueFloat_Parms, InParameterName), METADATA_PARAMS(Z_Construct_UFunction_URigVM_SetParameterValueFloat_Statics::NewProp_InParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueFloat_Statics::NewProp_InParameterName_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URigVM_SetParameterValueFloat_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventSetParameterValueFloat_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVM_SetParameterValueFloat_Statics::NewProp_InArrayIndex = { "InArrayIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventSetParameterValueFloat_Parms, InArrayIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVM_SetParameterValueFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueFloat_Statics::NewProp_InParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueFloat_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueFloat_Statics::NewProp_InArrayIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_SetParameterValueFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "CPP_Default_InArrayIndex", "0" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVM_SetParameterValueFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVM, nullptr, "SetParameterValueFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVM_SetParameterValueFloat_Statics::RigVM_eventSetParameterValueFloat_Parms), Z_Construct_UFunction_URigVM_SetParameterValueFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVM_SetParameterValueFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVM_SetParameterValueFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVM_SetParameterValueFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVM_SetParameterValueInt_Statics
	{
		struct RigVM_eventSetParameterValueInt_Parms
		{
			FName InParameterName;
			int32 InValue;
			int32 InArrayIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InArrayIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_SetParameterValueInt_Statics::NewProp_InParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVM_SetParameterValueInt_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventSetParameterValueInt_Parms, InParameterName), METADATA_PARAMS(Z_Construct_UFunction_URigVM_SetParameterValueInt_Statics::NewProp_InParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueInt_Statics::NewProp_InParameterName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVM_SetParameterValueInt_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventSetParameterValueInt_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVM_SetParameterValueInt_Statics::NewProp_InArrayIndex = { "InArrayIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventSetParameterValueInt_Parms, InArrayIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVM_SetParameterValueInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueInt_Statics::NewProp_InParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueInt_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueInt_Statics::NewProp_InArrayIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_SetParameterValueInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "CPP_Default_InArrayIndex", "0" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVM_SetParameterValueInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVM, nullptr, "SetParameterValueInt", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVM_SetParameterValueInt_Statics::RigVM_eventSetParameterValueInt_Parms), Z_Construct_UFunction_URigVM_SetParameterValueInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVM_SetParameterValueInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVM_SetParameterValueInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVM_SetParameterValueInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVM_SetParameterValueName_Statics
	{
		struct RigVM_eventSetParameterValueName_Parms
		{
			FName InParameterName;
			FName InValue;
			int32 InArrayIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InArrayIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_SetParameterValueName_Statics::NewProp_InParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVM_SetParameterValueName_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventSetParameterValueName_Parms, InParameterName), METADATA_PARAMS(Z_Construct_UFunction_URigVM_SetParameterValueName_Statics::NewProp_InParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueName_Statics::NewProp_InParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_SetParameterValueName_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVM_SetParameterValueName_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventSetParameterValueName_Parms, InValue), METADATA_PARAMS(Z_Construct_UFunction_URigVM_SetParameterValueName_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueName_Statics::NewProp_InValue_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVM_SetParameterValueName_Statics::NewProp_InArrayIndex = { "InArrayIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventSetParameterValueName_Parms, InArrayIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVM_SetParameterValueName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueName_Statics::NewProp_InParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueName_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueName_Statics::NewProp_InArrayIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_SetParameterValueName_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "CPP_Default_InArrayIndex", "0" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVM_SetParameterValueName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVM, nullptr, "SetParameterValueName", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVM_SetParameterValueName_Statics::RigVM_eventSetParameterValueName_Parms), Z_Construct_UFunction_URigVM_SetParameterValueName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVM_SetParameterValueName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVM_SetParameterValueName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVM_SetParameterValueName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVM_SetParameterValueQuat_Statics
	{
		struct RigVM_eventSetParameterValueQuat_Parms
		{
			FName InParameterName;
			FQuat InValue;
			int32 InArrayIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InArrayIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_SetParameterValueQuat_Statics::NewProp_InParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVM_SetParameterValueQuat_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventSetParameterValueQuat_Parms, InParameterName), METADATA_PARAMS(Z_Construct_UFunction_URigVM_SetParameterValueQuat_Statics::NewProp_InParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueQuat_Statics::NewProp_InParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_SetParameterValueQuat_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigVM_SetParameterValueQuat_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventSetParameterValueQuat_Parms, InValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_URigVM_SetParameterValueQuat_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueQuat_Statics::NewProp_InValue_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVM_SetParameterValueQuat_Statics::NewProp_InArrayIndex = { "InArrayIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventSetParameterValueQuat_Parms, InArrayIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVM_SetParameterValueQuat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueQuat_Statics::NewProp_InParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueQuat_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueQuat_Statics::NewProp_InArrayIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_SetParameterValueQuat_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "CPP_Default_InArrayIndex", "0" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVM_SetParameterValueQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVM, nullptr, "SetParameterValueQuat", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVM_SetParameterValueQuat_Statics::RigVM_eventSetParameterValueQuat_Parms), Z_Construct_UFunction_URigVM_SetParameterValueQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueQuat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVM_SetParameterValueQuat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueQuat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVM_SetParameterValueQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVM_SetParameterValueQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVM_SetParameterValueString_Statics
	{
		struct RigVM_eventSetParameterValueString_Parms
		{
			FName InParameterName;
			FString InValue;
			int32 InArrayIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InArrayIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_SetParameterValueString_Statics::NewProp_InParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVM_SetParameterValueString_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventSetParameterValueString_Parms, InParameterName), METADATA_PARAMS(Z_Construct_UFunction_URigVM_SetParameterValueString_Statics::NewProp_InParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueString_Statics::NewProp_InParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_SetParameterValueString_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigVM_SetParameterValueString_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventSetParameterValueString_Parms, InValue), METADATA_PARAMS(Z_Construct_UFunction_URigVM_SetParameterValueString_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueString_Statics::NewProp_InValue_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVM_SetParameterValueString_Statics::NewProp_InArrayIndex = { "InArrayIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventSetParameterValueString_Parms, InArrayIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVM_SetParameterValueString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueString_Statics::NewProp_InParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueString_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueString_Statics::NewProp_InArrayIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_SetParameterValueString_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "CPP_Default_InArrayIndex", "0" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVM_SetParameterValueString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVM, nullptr, "SetParameterValueString", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVM_SetParameterValueString_Statics::RigVM_eventSetParameterValueString_Parms), Z_Construct_UFunction_URigVM_SetParameterValueString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVM_SetParameterValueString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVM_SetParameterValueString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVM_SetParameterValueString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVM_SetParameterValueTransform_Statics
	{
		struct RigVM_eventSetParameterValueTransform_Parms
		{
			FName InParameterName;
			FTransform InValue;
			int32 InArrayIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InArrayIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_SetParameterValueTransform_Statics::NewProp_InParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVM_SetParameterValueTransform_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventSetParameterValueTransform_Parms, InParameterName), METADATA_PARAMS(Z_Construct_UFunction_URigVM_SetParameterValueTransform_Statics::NewProp_InParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueTransform_Statics::NewProp_InParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_SetParameterValueTransform_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigVM_SetParameterValueTransform_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventSetParameterValueTransform_Parms, InValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_URigVM_SetParameterValueTransform_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueTransform_Statics::NewProp_InValue_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVM_SetParameterValueTransform_Statics::NewProp_InArrayIndex = { "InArrayIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventSetParameterValueTransform_Parms, InArrayIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVM_SetParameterValueTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueTransform_Statics::NewProp_InParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueTransform_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueTransform_Statics::NewProp_InArrayIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_SetParameterValueTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "CPP_Default_InArrayIndex", "0" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVM_SetParameterValueTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVM, nullptr, "SetParameterValueTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVM_SetParameterValueTransform_Statics::RigVM_eventSetParameterValueTransform_Parms), Z_Construct_UFunction_URigVM_SetParameterValueTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVM_SetParameterValueTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVM_SetParameterValueTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVM_SetParameterValueTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVM_SetParameterValueVector_Statics
	{
		struct RigVM_eventSetParameterValueVector_Parms
		{
			FName InParameterName;
			FVector InValue;
			int32 InArrayIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InArrayIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_SetParameterValueVector_Statics::NewProp_InParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVM_SetParameterValueVector_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventSetParameterValueVector_Parms, InParameterName), METADATA_PARAMS(Z_Construct_UFunction_URigVM_SetParameterValueVector_Statics::NewProp_InParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueVector_Statics::NewProp_InParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_SetParameterValueVector_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigVM_SetParameterValueVector_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventSetParameterValueVector_Parms, InValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_URigVM_SetParameterValueVector_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueVector_Statics::NewProp_InValue_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVM_SetParameterValueVector_Statics::NewProp_InArrayIndex = { "InArrayIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventSetParameterValueVector_Parms, InArrayIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVM_SetParameterValueVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueVector_Statics::NewProp_InParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueVector_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueVector_Statics::NewProp_InArrayIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_SetParameterValueVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "CPP_Default_InArrayIndex", "0" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVM_SetParameterValueVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVM, nullptr, "SetParameterValueVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVM_SetParameterValueVector_Statics::RigVM_eventSetParameterValueVector_Parms), Z_Construct_UFunction_URigVM_SetParameterValueVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVM_SetParameterValueVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVM_SetParameterValueVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVM_SetParameterValueVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVM_SetParameterValueVector2D_Statics
	{
		struct RigVM_eventSetParameterValueVector2D_Parms
		{
			FName InParameterName;
			FVector2D InValue;
			int32 InArrayIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InArrayIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_SetParameterValueVector2D_Statics::NewProp_InParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVM_SetParameterValueVector2D_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventSetParameterValueVector2D_Parms, InParameterName), METADATA_PARAMS(Z_Construct_UFunction_URigVM_SetParameterValueVector2D_Statics::NewProp_InParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueVector2D_Statics::NewProp_InParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_SetParameterValueVector2D_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigVM_SetParameterValueVector2D_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventSetParameterValueVector2D_Parms, InValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_URigVM_SetParameterValueVector2D_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueVector2D_Statics::NewProp_InValue_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVM_SetParameterValueVector2D_Statics::NewProp_InArrayIndex = { "InArrayIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVM_eventSetParameterValueVector2D_Parms, InArrayIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVM_SetParameterValueVector2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueVector2D_Statics::NewProp_InParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueVector2D_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVM_SetParameterValueVector2D_Statics::NewProp_InArrayIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVM_SetParameterValueVector2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "CPP_Default_InArrayIndex", "0" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVM_SetParameterValueVector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVM, nullptr, "SetParameterValueVector2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVM_SetParameterValueVector2D_Statics::RigVM_eventSetParameterValueVector2D_Parms), Z_Construct_UFunction_URigVM_SetParameterValueVector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueVector2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVM_SetParameterValueVector2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVM_SetParameterValueVector2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVM_SetParameterValueVector2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVM_SetParameterValueVector2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVM);
	UClass* Z_Construct_UClass_URigVM_NoRegister()
	{
		return URigVM::StaticClass();
	}
	struct Z_Construct_UClass_URigVM_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkMemoryStorageObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WorkMemoryStorageObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LiteralMemoryStorageObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LiteralMemoryStorageObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugMemoryStorageObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DebugMemoryStorageObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ByteCodeStorage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ByteCodeStorage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instructions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Instructions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumExecutions_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumExecutions;
		static const UECodeGen_Private::FNamePropertyParams NewProp_FunctionNamesStorage_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionNamesStorage_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FunctionNamesStorage;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Parameters;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ParametersNameMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParametersNameMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParametersNameMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ParametersNameMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeferredVMToCopy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DeferredVMToCopy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URigVM_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URigVM_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URigVM_AddRigVMFunction, "AddRigVMFunction" }, // 2564547080
		{ &Z_Construct_UFunction_URigVM_Execute, "Execute" }, // 2636847151
		{ &Z_Construct_UFunction_URigVM_GetParameterValueBool, "GetParameterValueBool" }, // 3497587814
		{ &Z_Construct_UFunction_URigVM_GetParameterValueDouble, "GetParameterValueDouble" }, // 3753188286
		{ &Z_Construct_UFunction_URigVM_GetParameterValueFloat, "GetParameterValueFloat" }, // 1972788517
		{ &Z_Construct_UFunction_URigVM_GetParameterValueInt, "GetParameterValueInt" }, // 3046157740
		{ &Z_Construct_UFunction_URigVM_GetParameterValueName, "GetParameterValueName" }, // 4103262947
		{ &Z_Construct_UFunction_URigVM_GetParameterValueQuat, "GetParameterValueQuat" }, // 2841477729
		{ &Z_Construct_UFunction_URigVM_GetParameterValueString, "GetParameterValueString" }, // 1073471573
		{ &Z_Construct_UFunction_URigVM_GetParameterValueTransform, "GetParameterValueTransform" }, // 1471715161
		{ &Z_Construct_UFunction_URigVM_GetParameterValueVector, "GetParameterValueVector" }, // 4157363390
		{ &Z_Construct_UFunction_URigVM_GetParameterValueVector2D, "GetParameterValueVector2D" }, // 2988947591
		{ &Z_Construct_UFunction_URigVM_GetRigVMFunctionName, "GetRigVMFunctionName" }, // 2159886378
		{ &Z_Construct_UFunction_URigVM_GetStatistics, "GetStatistics" }, // 2385661576
		{ &Z_Construct_UFunction_URigVM_SetParameterValueBool, "SetParameterValueBool" }, // 4102308460
		{ &Z_Construct_UFunction_URigVM_SetParameterValueDouble, "SetParameterValueDouble" }, // 2046202358
		{ &Z_Construct_UFunction_URigVM_SetParameterValueFloat, "SetParameterValueFloat" }, // 2764334733
		{ &Z_Construct_UFunction_URigVM_SetParameterValueInt, "SetParameterValueInt" }, // 3641781979
		{ &Z_Construct_UFunction_URigVM_SetParameterValueName, "SetParameterValueName" }, // 3419064217
		{ &Z_Construct_UFunction_URigVM_SetParameterValueQuat, "SetParameterValueQuat" }, // 1174792765
		{ &Z_Construct_UFunction_URigVM_SetParameterValueString, "SetParameterValueString" }, // 113229074
		{ &Z_Construct_UFunction_URigVM_SetParameterValueTransform, "SetParameterValueTransform" }, // 3673828686
		{ &Z_Construct_UFunction_URigVM_SetParameterValueVector, "SetParameterValueVector" }, // 2317054014
		{ &Z_Construct_UFunction_URigVM_SetParameterValueVector2D, "SetParameterValueVector2D" }, // 371065161
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVM_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The RigVM is the main object for evaluating FRigVMByteCode instructions.\n * It combines the byte code, a list of required function pointers for \n * execute instructions and required memory in one class.\n */" },
		{ "IncludePath", "RigVMCore/RigVM.h" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
		{ "ToolTip", "The RigVM is the main object for evaluating FRigVMByteCode instructions.\nIt combines the byte code, a list of required function pointers for\nexecute instructions and required memory in one class." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVM_Statics::NewProp_WorkMemoryStorageObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URigVM_Statics::NewProp_WorkMemoryStorageObject = { "WorkMemoryStorageObject", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVM, WorkMemoryStorageObject), Z_Construct_UClass_URigVMMemoryStorage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URigVM_Statics::NewProp_WorkMemoryStorageObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVM_Statics::NewProp_WorkMemoryStorageObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVM_Statics::NewProp_LiteralMemoryStorageObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URigVM_Statics::NewProp_LiteralMemoryStorageObject = { "LiteralMemoryStorageObject", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVM, LiteralMemoryStorageObject), Z_Construct_UClass_URigVMMemoryStorage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URigVM_Statics::NewProp_LiteralMemoryStorageObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVM_Statics::NewProp_LiteralMemoryStorageObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVM_Statics::NewProp_DebugMemoryStorageObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URigVM_Statics::NewProp_DebugMemoryStorageObject = { "DebugMemoryStorageObject", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVM, DebugMemoryStorageObject), Z_Construct_UClass_URigVMMemoryStorage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URigVM_Statics::NewProp_DebugMemoryStorageObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVM_Statics::NewProp_DebugMemoryStorageObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVM_Statics::NewProp_ByteCodeStorage_MetaData[] = {
		{ "Comment", "// The byte code of the VM\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
		{ "ToolTip", "The byte code of the VM" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URigVM_Statics::NewProp_ByteCodeStorage = { "ByteCodeStorage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVM, ByteCodeStorage), Z_Construct_UScriptStruct_FRigVMByteCode, METADATA_PARAMS(Z_Construct_UClass_URigVM_Statics::NewProp_ByteCodeStorage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVM_Statics::NewProp_ByteCodeStorage_MetaData)) }; // 2857673729
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVM_Statics::NewProp_Instructions_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URigVM_Statics::NewProp_Instructions = { "Instructions", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVM, Instructions), Z_Construct_UScriptStruct_FRigVMInstructionArray, METADATA_PARAMS(Z_Construct_UClass_URigVM_Statics::NewProp_Instructions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVM_Statics::NewProp_Instructions_MetaData)) }; // 2794654496
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVM_Statics::NewProp_Context_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URigVM_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVM, Context), Z_Construct_UScriptStruct_FRigVMExtendedExecuteContext, METADATA_PARAMS(Z_Construct_UClass_URigVM_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVM_Statics::NewProp_Context_MetaData)) }; // 1462714042
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVM_Statics::NewProp_NumExecutions_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_URigVM_Statics::NewProp_NumExecutions = { "NumExecutions", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVM, NumExecutions), METADATA_PARAMS(Z_Construct_UClass_URigVM_Statics::NewProp_NumExecutions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVM_Statics::NewProp_NumExecutions_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URigVM_Statics::NewProp_FunctionNamesStorage_Inner = { "FunctionNamesStorage", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVM_Statics::NewProp_FunctionNamesStorage_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URigVM_Statics::NewProp_FunctionNamesStorage = { "FunctionNamesStorage", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVM, FunctionNamesStorage), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URigVM_Statics::NewProp_FunctionNamesStorage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVM_Statics::NewProp_FunctionNamesStorage_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URigVM_Statics::NewProp_Parameters_Inner = { "Parameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigVMParameter, METADATA_PARAMS(nullptr, 0) }; // 2220281575
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVM_Statics::NewProp_Parameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URigVM_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVM, Parameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URigVM_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVM_Statics::NewProp_Parameters_MetaData)) }; // 2220281575
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URigVM_Statics::NewProp_ParametersNameMap_ValueProp = { "ParametersNameMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URigVM_Statics::NewProp_ParametersNameMap_Key_KeyProp = { "ParametersNameMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVM_Statics::NewProp_ParametersNameMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URigVM_Statics::NewProp_ParametersNameMap = { "ParametersNameMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVM, ParametersNameMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URigVM_Statics::NewProp_ParametersNameMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVM_Statics::NewProp_ParametersNameMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVM_Statics::NewProp_DeferredVMToCopy_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVM.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URigVM_Statics::NewProp_DeferredVMToCopy = { "DeferredVMToCopy", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVM, DeferredVMToCopy), Z_Construct_UClass_URigVM_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URigVM_Statics::NewProp_DeferredVMToCopy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVM_Statics::NewProp_DeferredVMToCopy_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URigVM_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVM_Statics::NewProp_WorkMemoryStorageObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVM_Statics::NewProp_LiteralMemoryStorageObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVM_Statics::NewProp_DebugMemoryStorageObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVM_Statics::NewProp_ByteCodeStorage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVM_Statics::NewProp_Instructions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVM_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVM_Statics::NewProp_NumExecutions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVM_Statics::NewProp_FunctionNamesStorage_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVM_Statics::NewProp_FunctionNamesStorage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVM_Statics::NewProp_Parameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVM_Statics::NewProp_Parameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVM_Statics::NewProp_ParametersNameMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVM_Statics::NewProp_ParametersNameMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVM_Statics::NewProp_ParametersNameMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVM_Statics::NewProp_DeferredVMToCopy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URigVM_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVM>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVM_Statics::ClassParams = {
		&URigVM::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URigVM_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URigVM_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URigVM_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URigVM_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URigVM()
	{
		if (!Z_Registration_Info_UClass_URigVM.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVM.OuterSingleton, Z_Construct_UClass_URigVM_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URigVM.OuterSingleton;
	}
	template<> RIGVM_API UClass* StaticClass<URigVM>()
	{
		return URigVM::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URigVM);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(URigVM)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVM_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVM_h_Statics::EnumInfo[] = {
		{ ERigVMBreakpointAction_StaticEnum, TEXT("ERigVMBreakpointAction"), &Z_Registration_Info_UEnum_ERigVMBreakpointAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2789134806U) },
		{ ERigVMParameterType_StaticEnum, TEXT("ERigVMParameterType"), &Z_Registration_Info_UEnum_ERigVMParameterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1729048552U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVM_h_Statics::ScriptStructInfo[] = {
		{ FRigVMParameter::StaticStruct, Z_Construct_UScriptStruct_FRigVMParameter_Statics::NewStructOps, TEXT("RigVMParameter"), &Z_Registration_Info_UScriptStruct_RigVMParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMParameter), 2220281575U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVM_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URigVM, URigVM::StaticClass, TEXT("URigVM"), &Z_Registration_Info_UClass_URigVM, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVM), 2270481589U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVM_h_3885188100(TEXT("/Script/RigVM"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVM_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVM_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVM_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVM_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVM_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVM_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
