// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMCore/RigVMGraphFunctionDefinition.h"
#include "RigVMCore/RigVMByteCode.h"
#include "RigVMCore/RigVMExternalVariable.h"
#include "RigVMCore/RigVMMemoryCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMGraphFunctionDefinition() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMPinDirection();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMByteCode();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMExternalVariable();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunctionCompilationData();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMGraphFunctionData();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMOperand();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunctionCompilationPropertyDescription;
class UScriptStruct* FRigVMFunctionCompilationPropertyDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunctionCompilationPropertyDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunctionCompilationPropertyDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunctionCompilationPropertyDescription"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunctionCompilationPropertyDescription.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunctionCompilationPropertyDescription>()
{
	return FRigVMFunctionCompilationPropertyDescription::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CPPType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CPPType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CPPTypeObject_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_CPPTypeObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunctionCompilationPropertyDescription>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "// The name of the property to create\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
		{ "ToolTip", "The name of the property to create" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunctionCompilationPropertyDescription, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription_Statics::NewProp_CPPType_MetaData[] = {
		{ "Comment", "// The complete CPP type to base a new property off of (for ex: 'TArray<TArray<FVector>>')\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
		{ "ToolTip", "The complete CPP type to base a new property off of (for ex: 'TArray<TArray<FVector>>')" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription_Statics::NewProp_CPPType = { "CPPType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunctionCompilationPropertyDescription, CPPType), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription_Statics::NewProp_CPPType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription_Statics::NewProp_CPPType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription_Statics::NewProp_CPPTypeObject_MetaData[] = {
		{ "Comment", "// The tail CPP Type object, for example the UScriptStruct for a struct\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
		{ "ToolTip", "The tail CPP Type object, for example the UScriptStruct for a struct" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription_Statics::NewProp_CPPTypeObject = { "CPPTypeObject", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunctionCompilationPropertyDescription, CPPTypeObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription_Statics::NewProp_CPPTypeObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription_Statics::NewProp_CPPTypeObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Comment", "// The default value to use for this property (for example: '(((X=1.000000, Y=2.000000, Z=3.000000)))')\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
		{ "ToolTip", "The default value to use for this property (for example: '(((X=1.000000, Y=2.000000, Z=3.000000)))')" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunctionCompilationPropertyDescription, DefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription_Statics::NewProp_DefaultValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription_Statics::NewProp_CPPType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription_Statics::NewProp_CPPTypeObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription_Statics::NewProp_DefaultValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		&NewStructOps,
		"RigVMFunctionCompilationPropertyDescription",
		sizeof(FRigVMFunctionCompilationPropertyDescription),
		alignof(FRigVMFunctionCompilationPropertyDescription),
		Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunctionCompilationPropertyDescription.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunctionCompilationPropertyDescription.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunctionCompilationPropertyDescription.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunctionCompilationPropertyPath;
class UScriptStruct* FRigVMFunctionCompilationPropertyPath::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunctionCompilationPropertyPath.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunctionCompilationPropertyPath.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunctionCompilationPropertyPath"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunctionCompilationPropertyPath.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunctionCompilationPropertyPath>()
{
	return FRigVMFunctionCompilationPropertyPath::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PropertyIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadCPPType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HeadCPPType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SegmentPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SegmentPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunctionCompilationPropertyPath>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath_Statics::NewProp_PropertyIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath_Statics::NewProp_PropertyIndex = { "PropertyIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunctionCompilationPropertyPath, PropertyIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath_Statics::NewProp_PropertyIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath_Statics::NewProp_PropertyIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath_Statics::NewProp_HeadCPPType_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath_Statics::NewProp_HeadCPPType = { "HeadCPPType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunctionCompilationPropertyPath, HeadCPPType), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath_Statics::NewProp_HeadCPPType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath_Statics::NewProp_HeadCPPType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath_Statics::NewProp_SegmentPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath_Statics::NewProp_SegmentPath = { "SegmentPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunctionCompilationPropertyPath, SegmentPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath_Statics::NewProp_SegmentPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath_Statics::NewProp_SegmentPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath_Statics::NewProp_PropertyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath_Statics::NewProp_HeadCPPType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath_Statics::NewProp_SegmentPath,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		&NewStructOps,
		"RigVMFunctionCompilationPropertyPath",
		sizeof(FRigVMFunctionCompilationPropertyPath),
		alignof(FRigVMFunctionCompilationPropertyPath),
		Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunctionCompilationPropertyPath.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunctionCompilationPropertyPath.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunctionCompilationPropertyPath.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunctionCompilationData;
class UScriptStruct* FRigVMFunctionCompilationData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunctionCompilationData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunctionCompilationData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunctionCompilationData, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunctionCompilationData"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunctionCompilationData.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunctionCompilationData>()
{
	return FRigVMFunctionCompilationData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ByteCode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ByteCode;
		static const UECodeGen_Private::FNamePropertyParams NewProp_FunctionNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FunctionNames;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorkPropertyDescriptions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkPropertyDescriptions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WorkPropertyDescriptions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorkPropertyPathDescriptions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkPropertyPathDescriptions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WorkPropertyPathDescriptions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LiteralPropertyDescriptions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LiteralPropertyDescriptions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LiteralPropertyDescriptions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LiteralPropertyPathDescriptions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LiteralPropertyPathDescriptions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LiteralPropertyPathDescriptions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugPropertyDescriptions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugPropertyDescriptions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DebugPropertyDescriptions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugPropertyPathDescriptions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugPropertyPathDescriptions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DebugPropertyPathDescriptions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalPropertyDescriptions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalPropertyDescriptions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExternalPropertyDescriptions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalPropertyPathDescriptions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalPropertyPathDescriptions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExternalPropertyPathDescriptions;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ExternalRegisterIndexToVariable_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExternalRegisterIndexToVariable_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalRegisterIndexToVariable_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ExternalRegisterIndexToVariable;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Operands_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Operands_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Operands_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Operands;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hash_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Hash;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunctionCompilationData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_ByteCode_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_ByteCode = { "ByteCode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunctionCompilationData, ByteCode), Z_Construct_UScriptStruct_FRigVMByteCode, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_ByteCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_ByteCode_MetaData)) }; // 2857673729
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_FunctionNames_Inner = { "FunctionNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_FunctionNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_FunctionNames = { "FunctionNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunctionCompilationData, FunctionNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_FunctionNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_FunctionNames_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_WorkPropertyDescriptions_Inner = { "WorkPropertyDescriptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription, METADATA_PARAMS(nullptr, 0) }; // 3296553110
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_WorkPropertyDescriptions_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_WorkPropertyDescriptions = { "WorkPropertyDescriptions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunctionCompilationData, WorkPropertyDescriptions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_WorkPropertyDescriptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_WorkPropertyDescriptions_MetaData)) }; // 3296553110
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_WorkPropertyPathDescriptions_Inner = { "WorkPropertyPathDescriptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath, METADATA_PARAMS(nullptr, 0) }; // 741241363
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_WorkPropertyPathDescriptions_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_WorkPropertyPathDescriptions = { "WorkPropertyPathDescriptions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunctionCompilationData, WorkPropertyPathDescriptions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_WorkPropertyPathDescriptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_WorkPropertyPathDescriptions_MetaData)) }; // 741241363
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_LiteralPropertyDescriptions_Inner = { "LiteralPropertyDescriptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription, METADATA_PARAMS(nullptr, 0) }; // 3296553110
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_LiteralPropertyDescriptions_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_LiteralPropertyDescriptions = { "LiteralPropertyDescriptions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunctionCompilationData, LiteralPropertyDescriptions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_LiteralPropertyDescriptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_LiteralPropertyDescriptions_MetaData)) }; // 3296553110
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_LiteralPropertyPathDescriptions_Inner = { "LiteralPropertyPathDescriptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath, METADATA_PARAMS(nullptr, 0) }; // 741241363
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_LiteralPropertyPathDescriptions_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_LiteralPropertyPathDescriptions = { "LiteralPropertyPathDescriptions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunctionCompilationData, LiteralPropertyPathDescriptions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_LiteralPropertyPathDescriptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_LiteralPropertyPathDescriptions_MetaData)) }; // 741241363
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_DebugPropertyDescriptions_Inner = { "DebugPropertyDescriptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription, METADATA_PARAMS(nullptr, 0) }; // 3296553110
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_DebugPropertyDescriptions_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_DebugPropertyDescriptions = { "DebugPropertyDescriptions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunctionCompilationData, DebugPropertyDescriptions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_DebugPropertyDescriptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_DebugPropertyDescriptions_MetaData)) }; // 3296553110
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_DebugPropertyPathDescriptions_Inner = { "DebugPropertyPathDescriptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath, METADATA_PARAMS(nullptr, 0) }; // 741241363
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_DebugPropertyPathDescriptions_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_DebugPropertyPathDescriptions = { "DebugPropertyPathDescriptions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunctionCompilationData, DebugPropertyPathDescriptions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_DebugPropertyPathDescriptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_DebugPropertyPathDescriptions_MetaData)) }; // 741241363
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_ExternalPropertyDescriptions_Inner = { "ExternalPropertyDescriptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription, METADATA_PARAMS(nullptr, 0) }; // 3296553110
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_ExternalPropertyDescriptions_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_ExternalPropertyDescriptions = { "ExternalPropertyDescriptions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunctionCompilationData, ExternalPropertyDescriptions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_ExternalPropertyDescriptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_ExternalPropertyDescriptions_MetaData)) }; // 3296553110
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_ExternalPropertyPathDescriptions_Inner = { "ExternalPropertyPathDescriptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath, METADATA_PARAMS(nullptr, 0) }; // 741241363
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_ExternalPropertyPathDescriptions_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_ExternalPropertyPathDescriptions = { "ExternalPropertyPathDescriptions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunctionCompilationData, ExternalPropertyPathDescriptions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_ExternalPropertyPathDescriptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_ExternalPropertyPathDescriptions_MetaData)) }; // 741241363
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_ExternalRegisterIndexToVariable_ValueProp = { "ExternalRegisterIndexToVariable", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_ExternalRegisterIndexToVariable_Key_KeyProp = { "ExternalRegisterIndexToVariable_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_ExternalRegisterIndexToVariable_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_ExternalRegisterIndexToVariable = { "ExternalRegisterIndexToVariable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunctionCompilationData, ExternalRegisterIndexToVariable), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_ExternalRegisterIndexToVariable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_ExternalRegisterIndexToVariable_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_Operands_ValueProp = { "Operands", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FRigVMOperand, METADATA_PARAMS(nullptr, 0) }; // 1902833667
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_Operands_Key_KeyProp = { "Operands_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_Operands_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_Operands = { "Operands", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunctionCompilationData, Operands), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_Operands_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_Operands_MetaData)) }; // 1902833667
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_Hash_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_Hash = { "Hash", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunctionCompilationData, Hash), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_Hash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_Hash_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_ByteCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_FunctionNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_FunctionNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_WorkPropertyDescriptions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_WorkPropertyDescriptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_WorkPropertyPathDescriptions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_WorkPropertyPathDescriptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_LiteralPropertyDescriptions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_LiteralPropertyDescriptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_LiteralPropertyPathDescriptions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_LiteralPropertyPathDescriptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_DebugPropertyDescriptions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_DebugPropertyDescriptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_DebugPropertyPathDescriptions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_DebugPropertyPathDescriptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_ExternalPropertyDescriptions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_ExternalPropertyDescriptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_ExternalPropertyPathDescriptions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_ExternalPropertyPathDescriptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_ExternalRegisterIndexToVariable_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_ExternalRegisterIndexToVariable_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_ExternalRegisterIndexToVariable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_Operands_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_Operands_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_Operands,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewProp_Hash,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		&NewStructOps,
		"RigVMFunctionCompilationData",
		sizeof(FRigVMFunctionCompilationData),
		alignof(FRigVMFunctionCompilationData),
		Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunctionCompilationData()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunctionCompilationData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunctionCompilationData.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunctionCompilationData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMGraphFunctionArgument;
class UScriptStruct* FRigVMGraphFunctionArgument::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMGraphFunctionArgument.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMGraphFunctionArgument.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMGraphFunctionArgument"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMGraphFunctionArgument.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMGraphFunctionArgument>()
{
	return FRigVMGraphFunctionArgument::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CPPType_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CPPType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CPPTypeObject_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_CPPTypeObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsArray_MetaData[];
#endif
		static void NewProp_bIsArray_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsArray;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsConst_MetaData[];
#endif
		static void NewProp_bIsConst_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsConst;
		static const UECodeGen_Private::FTextPropertyParams NewProp_PathToTooltip_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PathToTooltip_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathToTooltip_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PathToTooltip;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMGraphFunctionArgument>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMGraphFunctionArgument, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_DisplayName_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMGraphFunctionArgument, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_CPPType_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_CPPType = { "CPPType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMGraphFunctionArgument, CPPType), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_CPPType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_CPPType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_CPPTypeObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_CPPTypeObject = { "CPPTypeObject", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMGraphFunctionArgument, CPPTypeObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_CPPTypeObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_CPPTypeObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_bIsArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_bIsArray_SetBit(void* Obj)
	{
		((FRigVMGraphFunctionArgument*)Obj)->bIsArray = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_bIsArray = { "bIsArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMGraphFunctionArgument), &Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_bIsArray_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_bIsArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_bIsArray_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_Direction_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMGraphFunctionArgument, Direction), Z_Construct_UEnum_RigVM_ERigVMPinDirection, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_Direction_MetaData)) }; // 4092277362
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMGraphFunctionArgument, DefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_DefaultValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_bIsConst_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_bIsConst_SetBit(void* Obj)
	{
		((FRigVMGraphFunctionArgument*)Obj)->bIsConst = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_bIsConst = { "bIsConst", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMGraphFunctionArgument), &Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_bIsConst_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_bIsConst_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_bIsConst_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_PathToTooltip_ValueProp = { "PathToTooltip", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_PathToTooltip_Key_KeyProp = { "PathToTooltip_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_PathToTooltip_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_PathToTooltip = { "PathToTooltip", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMGraphFunctionArgument, PathToTooltip), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_PathToTooltip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_PathToTooltip_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_CPPType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_CPPTypeObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_bIsArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_Direction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_bIsConst,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_PathToTooltip_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_PathToTooltip_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewProp_PathToTooltip,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		&NewStructOps,
		"RigVMGraphFunctionArgument",
		sizeof(FRigVMGraphFunctionArgument),
		alignof(FRigVMGraphFunctionArgument),
		Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMGraphFunctionArgument.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMGraphFunctionArgument.InnerSingleton, Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMGraphFunctionArgument.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMGraphFunctionIdentifier;
class UScriptStruct* FRigVMGraphFunctionIdentifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMGraphFunctionIdentifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMGraphFunctionIdentifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMGraphFunctionIdentifier"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMGraphFunctionIdentifier.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMGraphFunctionIdentifier>()
{
	return FRigVMGraphFunctionIdentifier::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LibraryNode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LibraryNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HostObject_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HostObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMGraphFunctionIdentifier>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier_Statics::NewProp_LibraryNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier_Statics::NewProp_LibraryNode = { "LibraryNode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMGraphFunctionIdentifier, LibraryNode), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier_Statics::NewProp_LibraryNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier_Statics::NewProp_LibraryNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier_Statics::NewProp_HostObject_MetaData[] = {
		{ "Comment", "// A path to the IRigVMGraphFunctionHost that stores the function information, and compilation data (e.g. ControlRigBlueprintGeneratedClass)\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
		{ "ToolTip", "A path to the IRigVMGraphFunctionHost that stores the function information, and compilation data (e.g. ControlRigBlueprintGeneratedClass)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier_Statics::NewProp_HostObject = { "HostObject", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMGraphFunctionIdentifier, HostObject), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier_Statics::NewProp_HostObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier_Statics::NewProp_HostObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier_Statics::NewProp_LibraryNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier_Statics::NewProp_HostObject,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		&NewStructOps,
		"RigVMGraphFunctionIdentifier",
		sizeof(FRigVMGraphFunctionIdentifier),
		alignof(FRigVMGraphFunctionIdentifier),
		Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMGraphFunctionIdentifier.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMGraphFunctionIdentifier.InnerSingleton, Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMGraphFunctionIdentifier.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMGraphFunctionHeader;
class UScriptStruct* FRigVMGraphFunctionHeader::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMGraphFunctionHeader.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMGraphFunctionHeader.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMGraphFunctionHeader"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMGraphFunctionHeader.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMGraphFunctionHeader>()
{
	return FRigVMGraphFunctionHeader::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LibraryPointer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LibraryPointer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeTitle_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NodeTitle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tooltip_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Tooltip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Keywords_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Keywords;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Arguments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Arguments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Arguments;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Dependencies_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Dependencies_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Dependencies_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Dependencies;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalVariables_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalVariables_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExternalVariables;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMGraphFunctionHeader>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_LibraryPointer_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_LibraryPointer = { "LibraryPointer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMGraphFunctionHeader, LibraryPointer), Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_LibraryPointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_LibraryPointer_MetaData)) }; // 4004283791
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMGraphFunctionHeader, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_NodeTitle_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_NodeTitle = { "NodeTitle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMGraphFunctionHeader, NodeTitle), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_NodeTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_NodeTitle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_NodeColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_NodeColor = { "NodeColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMGraphFunctionHeader, NodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_NodeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_NodeColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Tooltip_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Tooltip = { "Tooltip", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMGraphFunctionHeader, Tooltip), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Tooltip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Tooltip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Category_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMGraphFunctionHeader, Category), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Keywords_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Keywords = { "Keywords", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMGraphFunctionHeader, Keywords), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Keywords_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Keywords_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Arguments_Inner = { "Arguments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument, METADATA_PARAMS(nullptr, 0) }; // 1953455082
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Arguments_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Arguments = { "Arguments", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMGraphFunctionHeader, Arguments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Arguments_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Arguments_MetaData)) }; // 1953455082
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Dependencies_ValueProp = { "Dependencies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Dependencies_Key_KeyProp = { "Dependencies_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier, METADATA_PARAMS(nullptr, 0) }; // 4004283791
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Dependencies_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Dependencies = { "Dependencies", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMGraphFunctionHeader, Dependencies), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Dependencies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Dependencies_MetaData)) }; // 4004283791
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_ExternalVariables_Inner = { "ExternalVariables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigVMExternalVariable, METADATA_PARAMS(nullptr, 0) }; // 1628550361
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_ExternalVariables_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_ExternalVariables = { "ExternalVariables", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMGraphFunctionHeader, ExternalVariables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_ExternalVariables_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_ExternalVariables_MetaData)) }; // 1628550361
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_LibraryPointer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_NodeTitle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_NodeColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Tooltip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Keywords,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Arguments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Arguments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Dependencies_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Dependencies_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_Dependencies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_ExternalVariables_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewProp_ExternalVariables,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		&NewStructOps,
		"RigVMGraphFunctionHeader",
		sizeof(FRigVMGraphFunctionHeader),
		alignof(FRigVMGraphFunctionHeader),
		Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMGraphFunctionHeader.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMGraphFunctionHeader.InnerSingleton, Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMGraphFunctionHeader.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMGraphFunctionData;
class UScriptStruct* FRigVMGraphFunctionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMGraphFunctionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMGraphFunctionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMGraphFunctionData, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMGraphFunctionData"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMGraphFunctionData.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMGraphFunctionData>()
{
	return FRigVMGraphFunctionData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMGraphFunctionData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompilationData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompilationData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SerializedCollapsedNode_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SerializedCollapsedNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMGraphFunctionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMGraphFunctionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMGraphFunctionData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMGraphFunctionData_Statics::NewProp_Header_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionData_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMGraphFunctionData, Header), Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMGraphFunctionData_Statics::NewProp_Header_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionData_Statics::NewProp_Header_MetaData)) }; // 767263506
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMGraphFunctionData_Statics::NewProp_CompilationData_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionData_Statics::NewProp_CompilationData = { "CompilationData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMGraphFunctionData, CompilationData), Z_Construct_UScriptStruct_FRigVMFunctionCompilationData, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMGraphFunctionData_Statics::NewProp_CompilationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionData_Statics::NewProp_CompilationData_MetaData)) }; // 1661748266
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMGraphFunctionData_Statics::NewProp_SerializedCollapsedNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionDefinition.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionData_Statics::NewProp_SerializedCollapsedNode = { "SerializedCollapsedNode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMGraphFunctionData, SerializedCollapsedNode), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMGraphFunctionData_Statics::NewProp_SerializedCollapsedNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionData_Statics::NewProp_SerializedCollapsedNode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMGraphFunctionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionData_Statics::NewProp_Header,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionData_Statics::NewProp_CompilationData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionData_Statics::NewProp_SerializedCollapsedNode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMGraphFunctionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		&NewStructOps,
		"RigVMGraphFunctionData",
		sizeof(FRigVMGraphFunctionData),
		alignof(FRigVMGraphFunctionData),
		Z_Construct_UScriptStruct_FRigVMGraphFunctionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMGraphFunctionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMGraphFunctionData()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMGraphFunctionData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMGraphFunctionData.InnerSingleton, Z_Construct_UScriptStruct_FRigVMGraphFunctionData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMGraphFunctionData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMGraphFunctionDefinition_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMGraphFunctionDefinition_h_Statics::ScriptStructInfo[] = {
		{ FRigVMFunctionCompilationPropertyDescription::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyDescription_Statics::NewStructOps, TEXT("RigVMFunctionCompilationPropertyDescription"), &Z_Registration_Info_UScriptStruct_RigVMFunctionCompilationPropertyDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunctionCompilationPropertyDescription), 3296553110U) },
		{ FRigVMFunctionCompilationPropertyPath::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunctionCompilationPropertyPath_Statics::NewStructOps, TEXT("RigVMFunctionCompilationPropertyPath"), &Z_Registration_Info_UScriptStruct_RigVMFunctionCompilationPropertyPath, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunctionCompilationPropertyPath), 741241363U) },
		{ FRigVMFunctionCompilationData::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunctionCompilationData_Statics::NewStructOps, TEXT("RigVMFunctionCompilationData"), &Z_Registration_Info_UScriptStruct_RigVMFunctionCompilationData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunctionCompilationData), 1661748266U) },
		{ FRigVMGraphFunctionArgument::StaticStruct, Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument_Statics::NewStructOps, TEXT("RigVMGraphFunctionArgument"), &Z_Registration_Info_UScriptStruct_RigVMGraphFunctionArgument, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMGraphFunctionArgument), 1953455082U) },
		{ FRigVMGraphFunctionIdentifier::StaticStruct, Z_Construct_UScriptStruct_FRigVMGraphFunctionIdentifier_Statics::NewStructOps, TEXT("RigVMGraphFunctionIdentifier"), &Z_Registration_Info_UScriptStruct_RigVMGraphFunctionIdentifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMGraphFunctionIdentifier), 4004283791U) },
		{ FRigVMGraphFunctionHeader::StaticStruct, Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader_Statics::NewStructOps, TEXT("RigVMGraphFunctionHeader"), &Z_Registration_Info_UScriptStruct_RigVMGraphFunctionHeader, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMGraphFunctionHeader), 767263506U) },
		{ FRigVMGraphFunctionData::StaticStruct, Z_Construct_UScriptStruct_FRigVMGraphFunctionData_Statics::NewStructOps, TEXT("RigVMGraphFunctionData"), &Z_Registration_Info_UScriptStruct_RigVMGraphFunctionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMGraphFunctionData), 3558297336U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMGraphFunctionDefinition_h_4118327226(TEXT("/Script/RigVM"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMGraphFunctionDefinition_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMGraphFunctionDefinition_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
