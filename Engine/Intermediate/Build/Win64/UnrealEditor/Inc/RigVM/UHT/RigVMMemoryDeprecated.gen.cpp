// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMCore/RigVMMemoryDeprecated.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMMemoryDeprecated() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
	RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMMemoryType();
	RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMRegisterType();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMMemoryContainer();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMRegister();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMRegisterOffset();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigVMRegisterType;
	static UEnum* ERigVMRegisterType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERigVMRegisterType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERigVMRegisterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigVM_ERigVMRegisterType, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("ERigVMRegisterType"));
		}
		return Z_Registration_Info_UEnum_ERigVMRegisterType.OuterSingleton;
	}
	template<> RIGVM_API UEnum* StaticEnum<ERigVMRegisterType>()
	{
		return ERigVMRegisterType_StaticEnum();
	}
	struct Z_Construct_UEnum_RigVM_ERigVMRegisterType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RigVM_ERigVMRegisterType_Statics::Enumerators[] = {
		{ "ERigVMRegisterType::Plain", (int64)ERigVMRegisterType::Plain },
		{ "ERigVMRegisterType::String", (int64)ERigVMRegisterType::String },
		{ "ERigVMRegisterType::Name", (int64)ERigVMRegisterType::Name },
		{ "ERigVMRegisterType::Struct", (int64)ERigVMRegisterType::Struct },
		{ "ERigVMRegisterType::Invalid", (int64)ERigVMRegisterType::Invalid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RigVM_ERigVMRegisterType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * The type of register within the memory.\n */" },
		{ "Invalid.Comment", "// Any USTRUCT (structs which require a constructor / destructor to be valid. structs which have indirection (arrays or strings in them, for example).\n" },
		{ "Invalid.Name", "ERigVMRegisterType::Invalid" },
		{ "Invalid.ToolTip", "Any USTRUCT (structs which require a constructor / destructor to be valid. structs which have indirection (arrays or strings in them, for example)." },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryDeprecated.h" },
		{ "Name.Comment", "// FString\n" },
		{ "Name.Name", "ERigVMRegisterType::Name" },
		{ "Name.ToolTip", "FString" },
		{ "Plain.Name", "ERigVMRegisterType::Plain" },
		{ "String.Comment", "// bool, int32, float, FVector etc. (also structs that do NOT require a constructor / destructor to be valid)\n" },
		{ "String.Name", "ERigVMRegisterType::String" },
		{ "String.ToolTip", "bool, int32, float, FVector etc. (also structs that do NOT require a constructor / destructor to be valid)" },
		{ "Struct.Comment", "// FName\n" },
		{ "Struct.Name", "ERigVMRegisterType::Struct" },
		{ "Struct.ToolTip", "FName" },
		{ "ToolTip", "The type of register within the memory." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigVM_ERigVMRegisterType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		"ERigVMRegisterType",
		"ERigVMRegisterType",
		Z_Construct_UEnum_RigVM_ERigVMRegisterType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERigVMRegisterType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RigVM_ERigVMRegisterType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERigVMRegisterType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RigVM_ERigVMRegisterType()
	{
		if (!Z_Registration_Info_UEnum_ERigVMRegisterType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigVMRegisterType.InnerSingleton, Z_Construct_UEnum_RigVM_ERigVMRegisterType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERigVMRegisterType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMRegister;
class UScriptStruct* FRigVMRegister::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMRegister.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMRegister.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMRegister, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMRegister"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMRegister.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMRegister>()
{
	return FRigVMRegister::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMRegister_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ByteIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ByteIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementSize_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_ElementSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementCount_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_ElementCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SliceCount_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_SliceCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlignmentBytes_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AlignmentBytes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrailingBytes_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_TrailingBytes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScriptStructIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ScriptStructIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsArray_MetaData[];
#endif
		static void NewProp_bIsArray_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDynamic_MetaData[];
#endif
		static void NewProp_bIsDynamic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDynamic;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseCPPType_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BaseCPPType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseCPPTypeObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BaseCPPTypeObject;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMRegister_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// The register represents an address with the VM's memory. Within a register\n// we can store arbitrary data, so it provides a series of properties to\n// describe the memory location.\n// Registers also support the notion of slices. A slice is a complete copy of\n// the memory - so for example if your register stores 4 Vectors, then a slice \n// would contain 48 bytes (4 * 3 * 4). The register can however store multiple\n// slices / copies of that if needed. Slices can be used to provide \n// per-invocation memory to functions within the same register.\n// An integrator for example that needs to store a simulated position\n// might want access to a separate memory per loop iteration.\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryDeprecated.h" },
		{ "ToolTip", "The register represents an address with the VM's memory. Within a register\nwe can store arbitrary data, so it provides a series of properties to\ndescribe the memory location.\nRegisters also support the notion of slices. A slice is a complete copy of\nthe memory - so for example if your register stores 4 Vectors, then a slice\nwould contain 48 bytes (4 * 3 * 4). The register can however store multiple\nslices / copies of that if needed. Slices can be used to provide\nper-invocation memory to functions within the same register.\nAn integrator for example that needs to store a simulated position\nmight want access to a separate memory per loop iteration." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMRegister>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_Type_MetaData[] = {
		{ "Comment", "// The type of register (plain, name, string, etc.)\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryDeprecated.h" },
		{ "ToolTip", "The type of register (plain, name, string, etc.)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMRegister, Type), Z_Construct_UEnum_RigVM_ERigVMRegisterType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_Type_MetaData)) }; // 1035021727
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_ByteIndex_MetaData[] = {
		{ "Comment", "// The index of the first work byte\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryDeprecated.h" },
		{ "ToolTip", "The index of the first work byte" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_ByteIndex = { "ByteIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMRegister, ByteIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_ByteIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_ByteIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_ElementSize_MetaData[] = {
		{ "Comment", "// The size of each store element (for example 4 for a float)\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryDeprecated.h" },
		{ "ToolTip", "The size of each store element (for example 4 for a float)" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_ElementSize = { "ElementSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMRegister, ElementSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_ElementSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_ElementSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_ElementCount_MetaData[] = {
		{ "Comment", "// The number of elements in this register (for example the number of elements in an array)\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryDeprecated.h" },
		{ "ToolTip", "The number of elements in this register (for example the number of elements in an array)" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_ElementCount = { "ElementCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMRegister, ElementCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_ElementCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_ElementCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_SliceCount_MetaData[] = {
		{ "Comment", "// The number of slices (complete copies) (for example the number of iterations on a fixed loop)\n// Potentially redundant state - can be removed.\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryDeprecated.h" },
		{ "ToolTip", "The number of slices (complete copies) (for example the number of iterations on a fixed loop)\nPotentially redundant state - can be removed." },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_SliceCount = { "SliceCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMRegister, SliceCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_SliceCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_SliceCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_AlignmentBytes_MetaData[] = {
		{ "Comment", "// The number of leading bytes for alignment.\n// Bytes that had to be introduced before the register\n// to align the registers memory as per platform specification.\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryDeprecated.h" },
		{ "ToolTip", "The number of leading bytes for alignment.\nBytes that had to be introduced before the register\nto align the registers memory as per platform specification." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_AlignmentBytes = { "AlignmentBytes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMRegister, AlignmentBytes), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_AlignmentBytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_AlignmentBytes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_TrailingBytes_MetaData[] = {
		{ "Comment", "// The number of trailing bytes.\n// These originate after shrinking a register.\n// Potentially unused state - can be removed.\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryDeprecated.h" },
		{ "ToolTip", "The number of trailing bytes.\nThese originate after shrinking a register.\nPotentially unused state - can be removed." },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_TrailingBytes = { "TrailingBytes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMRegister, TrailingBytes), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_TrailingBytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_TrailingBytes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "// The name of the register (can be None)\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryDeprecated.h" },
		{ "ToolTip", "The name of the register (can be None)" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMRegister, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_ScriptStructIndex_MetaData[] = {
		{ "Comment", "// For struct registers this is the index of the\n// struct used - otherwise INDEX_NONE\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryDeprecated.h" },
		{ "ToolTip", "For struct registers this is the index of the\nstruct used - otherwise INDEX_NONE" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_ScriptStructIndex = { "ScriptStructIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMRegister, ScriptStructIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_ScriptStructIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_ScriptStructIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_bIsArray_MetaData[] = {
		{ "Comment", "// If true defines this register as an array\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryDeprecated.h" },
		{ "ToolTip", "If true defines this register as an array" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_bIsArray_SetBit(void* Obj)
	{
		((FRigVMRegister*)Obj)->bIsArray = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_bIsArray = { "bIsArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMRegister), &Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_bIsArray_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_bIsArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_bIsArray_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_bIsDynamic_MetaData[] = {
		{ "Comment", "// If true defines this register to use dynamic storage.\n// Is this an array or singleton value with multiple slices\n// which potentially requires changing count at runtime. \n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryDeprecated.h" },
		{ "ToolTip", "If true defines this register to use dynamic storage.\nIs this an array or singleton value with multiple slices\nwhich potentially requires changing count at runtime." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_bIsDynamic_SetBit(void* Obj)
	{
		((FRigVMRegister*)Obj)->bIsDynamic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_bIsDynamic = { "bIsDynamic", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMRegister), &Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_bIsDynamic_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_bIsDynamic_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_bIsDynamic_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_BaseCPPType_MetaData[] = {
		{ "Comment", "// Defines the CPP type used for the register\n// This is only used for debugging purposes in editor.\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryDeprecated.h" },
		{ "ToolTip", "Defines the CPP type used for the register\nThis is only used for debugging purposes in editor." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_BaseCPPType = { "BaseCPPType", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMRegister, BaseCPPType), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_BaseCPPType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_BaseCPPType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_BaseCPPTypeObject_MetaData[] = {
		{ "Comment", "// The resolved UScriptStruct / UObject (in the future)\n// used for debugging.\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryDeprecated.h" },
		{ "ToolTip", "The resolved UScriptStruct / UObject (in the future)\nused for debugging." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_BaseCPPTypeObject = { "BaseCPPTypeObject", nullptr, (EPropertyFlags)0x0014000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMRegister, BaseCPPTypeObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_BaseCPPTypeObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_BaseCPPTypeObject_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMRegister_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_ByteIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_ElementSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_ElementCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_SliceCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_AlignmentBytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_TrailingBytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_ScriptStructIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_bIsArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_bIsDynamic,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_BaseCPPType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewProp_BaseCPPTypeObject,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMRegister_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		&NewStructOps,
		"RigVMRegister",
		sizeof(FRigVMRegister),
		alignof(FRigVMRegister),
		Z_Construct_UScriptStruct_FRigVMRegister_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMRegister_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMRegister_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMRegister_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMRegister()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMRegister.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMRegister.InnerSingleton, Z_Construct_UScriptStruct_FRigVMRegister_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMRegister.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMRegisterOffset;
class UScriptStruct* FRigVMRegisterOffset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMRegisterOffset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMRegisterOffset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMRegisterOffset, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMRegisterOffset"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMRegisterOffset.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMRegisterOffset>()
{
	return FRigVMRegisterOffset::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_Segments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Segments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Segments;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CPPType_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CPPType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScriptStruct_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ScriptStruct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentScriptStruct_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParentScriptStruct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrayIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ArrayIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementSize_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_ElementSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedSegmentPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CachedSegmentPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// The register offset represents a memory offset within a register's memory.\n// This can be used to represent memory addresses of array elements within\n// a struct, for example.\n// A register offset's path can look like MyTransformStruct.Transforms[3].Translation.X\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryDeprecated.h" },
		{ "ToolTip", "The register offset represents a memory offset within a register's memory.\nThis can be used to represent memory addresses of array elements within\na struct, for example.\nA register offset's path can look like MyTransformStruct.Transforms[3].Translation.X" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMRegisterOffset>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::NewProp_Segments_Inner = { "Segments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::NewProp_Segments_MetaData[] = {
		{ "Comment", "// Segments represent the memory offset(s) to use when accessing the target memory.\n// In case of indirection in the source memory each memory offset / jump is stored.\n// So for example: If you are accessing the third Rotation.X of an array of transforms,\n// the segments would read as: [-2, 12] (second array element, and the fourth float)\n// Segment indices less than zero represent array element offsets, while positive numbers\n// represents jumps within a struct.\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryDeprecated.h" },
		{ "ToolTip", "Segments represent the memory offset(s) to use when accessing the target memory.\nIn case of indirection in the source memory each memory offset / jump is stored.\nSo for example: If you are accessing the third Rotation.X of an array of transforms,\nthe segments would read as: [-2, 12] (second array element, and the fourth float)\nSegment indices less than zero represent array element offsets, while positive numbers\nrepresents jumps within a struct." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::NewProp_Segments = { "Segments", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMRegisterOffset, Segments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::NewProp_Segments_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::NewProp_Segments_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::NewProp_Type_MetaData[] = {
		{ "Comment", "// Type of resulting register (for example Plain for Transform.Translation.X)\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryDeprecated.h" },
		{ "ToolTip", "Type of resulting register (for example Plain for Transform.Translation.X)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMRegisterOffset, Type), Z_Construct_UEnum_RigVM_ERigVMRegisterType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::NewProp_Type_MetaData)) }; // 1035021727
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::NewProp_CPPType_MetaData[] = {
		{ "Comment", "// The c++ type of the resulting memory (for example float for Transform.Translation.X)\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryDeprecated.h" },
		{ "ToolTip", "The c++ type of the resulting memory (for example float for Transform.Translation.X)" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::NewProp_CPPType = { "CPPType", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMRegisterOffset, CPPType), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::NewProp_CPPType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::NewProp_CPPType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::NewProp_ScriptStruct_MetaData[] = {
		{ "Comment", "// The c++ script struct of the resulting memory (for example FVector for Transform.Translation)\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryDeprecated.h" },
		{ "ToolTip", "The c++ script struct of the resulting memory (for example FVector for Transform.Translation)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::NewProp_ScriptStruct = { "ScriptStruct", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMRegisterOffset, ScriptStruct), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::NewProp_ScriptStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::NewProp_ScriptStruct_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::NewProp_ParentScriptStruct_MetaData[] = {
		{ "Comment", "// The c++ script struct of the source memory (for example FTransform for Transform.Translation)\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryDeprecated.h" },
		{ "ToolTip", "The c++ script struct of the source memory (for example FTransform for Transform.Translation)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::NewProp_ParentScriptStruct = { "ParentScriptStruct", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMRegisterOffset, ParentScriptStruct), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::NewProp_ParentScriptStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::NewProp_ParentScriptStruct_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::NewProp_ArrayIndex_MetaData[] = {
		{ "Comment", "// The index of the element within an array (for example 3 for Transform[3])\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryDeprecated.h" },
		{ "ToolTip", "The index of the element within an array (for example 3 for Transform[3])" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::NewProp_ArrayIndex = { "ArrayIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMRegisterOffset, ArrayIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::NewProp_ArrayIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::NewProp_ArrayIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::NewProp_ElementSize_MetaData[] = {
		{ "Comment", "// The number of bytes of the resulting memory (for example 4 (float) for Transform.Translation.X)\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryDeprecated.h" },
		{ "ToolTip", "The number of bytes of the resulting memory (for example 4 (float) for Transform.Translation.X)" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::NewProp_ElementSize = { "ElementSize", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMRegisterOffset, ElementSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::NewProp_ElementSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::NewProp_ElementSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::NewProp_CachedSegmentPath_MetaData[] = {
		{ "Comment", "// The cached path of the segments within this register, for example FTransform.Translation.X\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryDeprecated.h" },
		{ "ToolTip", "The cached path of the segments within this register, for example FTransform.Translation.X" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::NewProp_CachedSegmentPath = { "CachedSegmentPath", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMRegisterOffset, CachedSegmentPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::NewProp_CachedSegmentPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::NewProp_CachedSegmentPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::NewProp_Segments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::NewProp_Segments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::NewProp_CPPType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::NewProp_ScriptStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::NewProp_ParentScriptStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::NewProp_ArrayIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::NewProp_ElementSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::NewProp_CachedSegmentPath,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		&NewStructOps,
		"RigVMRegisterOffset",
		sizeof(FRigVMRegisterOffset),
		alignof(FRigVMRegisterOffset),
		Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMRegisterOffset()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMRegisterOffset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMRegisterOffset.InnerSingleton, Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMRegisterOffset.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMMemoryContainer;
class UScriptStruct* FRigVMMemoryContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMMemoryContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMMemoryContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMMemoryContainer, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMMemoryContainer"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMMemoryContainer.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMMemoryContainer>()
{
	return FRigVMMemoryContainer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseNameMap_MetaData[];
#endif
		static void NewProp_bUseNameMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseNameMap;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MemoryType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MemoryType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MemoryType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Registers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Registers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Registers;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RegisterOffsets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegisterOffsets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RegisterOffsets;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ScriptStructs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScriptStructs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ScriptStructs;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NameMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NameMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_NameMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEncounteredErrorDuringLoad_MetaData[];
#endif
		static void NewProp_bEncounteredErrorDuringLoad_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEncounteredErrorDuringLoad;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * The FRigVMMemoryContainer provides a heterogeneous memory container to store arbitrary\n * data. Each element stored can be referred to using a FRigVMRegister.\n * Elements can be accessed by index (index of the register), FRigVMOperand or by name.\n * Name access is optional and is specified upon construction of the container.\n * The memory container provides a series of templated functions to add and get data.\n *\n * For example:\n * \x09\x09int32 Index = Container.Add<float>(4.f);\n *      float& ValueRef = Container.GetRef<float>(Index);\n *\n * This can also be done with arrays:\n *      TArray<float> MyArray = {3.f, 4.f, 5.f};\n * \x09\x09int32 Index = Container.AddFixedArray<float>(MyArray);\n *      FRigVMFixedArray<float> ArrayView = Container.GetFixedArray<float>(Index);\n *\n *\n * Registers can store dynamically resizable memory as well by reyling on indirection.\n * \n * Arrays with a single slice are going to be stored as a FRigVMByteArray, [unit8], so for example for a float array in C++ it would be (TArray<float> Param).\n * Single values with multiple slices are also going to be stored as a FRigVMByteArray, [unit8], so for example for a float array in C++ it would be (float Param). \n * Arrays with multiple slices are going to be stored as a FRigVMNestedByteArray, [[unit8]], so for example for a float array in C++ it would be (TArray<float> Param).\n */" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryDeprecated.h" },
		{ "ToolTip", "The FRigVMMemoryContainer provides a heterogeneous memory container to store arbitrary\ndata. Each element stored can be referred to using a FRigVMRegister.\nElements can be accessed by index (index of the register), FRigVMOperand or by name.\nName access is optional and is specified upon construction of the container.\nThe memory container provides a series of templated functions to add and get data.\n\nFor example:\n            int32 Index = Container.Add<float>(4.f);\n     float& ValueRef = Container.GetRef<float>(Index);\n\nThis can also be done with arrays:\n     TArray<float> MyArray = {3.f, 4.f, 5.f};\n            int32 Index = Container.AddFixedArray<float>(MyArray);\n     FRigVMFixedArray<float> ArrayView = Container.GetFixedArray<float>(Index);\n\n\nRegisters can store dynamically resizable memory as well by reyling on indirection.\n\nArrays with a single slice are going to be stored as a FRigVMByteArray, [unit8], so for example for a float array in C++ it would be (TArray<float> Param).\nSingle values with multiple slices are also going to be stored as a FRigVMByteArray, [unit8], so for example for a float array in C++ it would be (float Param).\nArrays with multiple slices are going to be stored as a FRigVMNestedByteArray, [[unit8]], so for example for a float array in C++ it would be (TArray<float> Param)." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMMemoryContainer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_bUseNameMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryDeprecated.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_bUseNameMap_SetBit(void* Obj)
	{
		((FRigVMMemoryContainer*)Obj)->bUseNameMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_bUseNameMap = { "bUseNameMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMMemoryContainer), &Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_bUseNameMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_bUseNameMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_bUseNameMap_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_MemoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_MemoryType_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryDeprecated.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_MemoryType = { "MemoryType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMMemoryContainer, MemoryType), Z_Construct_UEnum_RigVM_ERigVMMemoryType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_MemoryType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_MemoryType_MetaData)) }; // 3202734936
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_Registers_Inner = { "Registers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigVMRegister, METADATA_PARAMS(nullptr, 0) }; // 3932296757
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_Registers_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryDeprecated.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_Registers = { "Registers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMMemoryContainer, Registers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_Registers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_Registers_MetaData)) }; // 3932296757
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_RegisterOffsets_Inner = { "RegisterOffsets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigVMRegisterOffset, METADATA_PARAMS(nullptr, 0) }; // 39034335
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_RegisterOffsets_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryDeprecated.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_RegisterOffsets = { "RegisterOffsets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMMemoryContainer, RegisterOffsets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_RegisterOffsets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_RegisterOffsets_MetaData)) }; // 39034335
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_Data_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryDeprecated.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMMemoryContainer, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_Data_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_ScriptStructs_Inner = { "ScriptStructs", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_ScriptStructs_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryDeprecated.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_ScriptStructs = { "ScriptStructs", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMMemoryContainer, ScriptStructs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_ScriptStructs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_ScriptStructs_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_NameMap_ValueProp = { "NameMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_NameMap_Key_KeyProp = { "NameMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_NameMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryDeprecated.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_NameMap = { "NameMap", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMMemoryContainer, NameMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_NameMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_NameMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_bEncounteredErrorDuringLoad_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryDeprecated.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_bEncounteredErrorDuringLoad_SetBit(void* Obj)
	{
		((FRigVMMemoryContainer*)Obj)->bEncounteredErrorDuringLoad = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_bEncounteredErrorDuringLoad = { "bEncounteredErrorDuringLoad", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMMemoryContainer), &Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_bEncounteredErrorDuringLoad_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_bEncounteredErrorDuringLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_bEncounteredErrorDuringLoad_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_bUseNameMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_MemoryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_MemoryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_Registers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_Registers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_RegisterOffsets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_RegisterOffsets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_ScriptStructs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_ScriptStructs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_NameMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_NameMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_NameMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewProp_bEncounteredErrorDuringLoad,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		&NewStructOps,
		"RigVMMemoryContainer",
		sizeof(FRigVMMemoryContainer),
		alignof(FRigVMMemoryContainer),
		Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMMemoryContainer()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMMemoryContainer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMMemoryContainer.InnerSingleton, Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMMemoryContainer.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMMemoryDeprecated_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMMemoryDeprecated_h_Statics::EnumInfo[] = {
		{ ERigVMRegisterType_StaticEnum, TEXT("ERigVMRegisterType"), &Z_Registration_Info_UEnum_ERigVMRegisterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1035021727U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMMemoryDeprecated_h_Statics::ScriptStructInfo[] = {
		{ FRigVMRegister::StaticStruct, Z_Construct_UScriptStruct_FRigVMRegister_Statics::NewStructOps, TEXT("RigVMRegister"), &Z_Registration_Info_UScriptStruct_RigVMRegister, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMRegister), 3932296757U) },
		{ FRigVMRegisterOffset::StaticStruct, Z_Construct_UScriptStruct_FRigVMRegisterOffset_Statics::NewStructOps, TEXT("RigVMRegisterOffset"), &Z_Registration_Info_UScriptStruct_RigVMRegisterOffset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMRegisterOffset), 39034335U) },
		{ FRigVMMemoryContainer::StaticStruct, Z_Construct_UScriptStruct_FRigVMMemoryContainer_Statics::NewStructOps, TEXT("RigVMMemoryContainer"), &Z_Registration_Info_UScriptStruct_RigVMMemoryContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMMemoryContainer), 1083218453U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMMemoryDeprecated_h_3053212093(TEXT("/Script/RigVM"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMMemoryDeprecated_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMMemoryDeprecated_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMMemoryDeprecated_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMMemoryDeprecated_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
