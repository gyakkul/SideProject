// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMCore/RigVMMemoryStorage.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMMemoryStorage() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	RIGVM_API UClass* Z_Construct_UClass_URigVMMemoryStorage();
	RIGVM_API UClass* Z_Construct_UClass_URigVMMemoryStorage_NoRegister();
	RIGVM_API UClass* Z_Construct_UClass_URigVMMemoryStorageGeneratorClass();
	RIGVM_API UClass* Z_Construct_UClass_URigVMMemoryStorageGeneratorClass_NoRegister();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMBranchInfo();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMBranchInfo;
class UScriptStruct* FRigVMBranchInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMBranchInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMBranchInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMBranchInfo, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMBranchInfo"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMBranchInfo.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMBranchInfo>()
{
	return FRigVMBranchInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMBranchInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Label;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstructionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InstructionIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArgumentIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ArgumentIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstInstruction_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_FirstInstruction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastInstruction_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_LastInstruction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMBranchInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// A description of a branch in the VM's bytecode\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryStorage.h" },
		{ "ToolTip", "A description of a branch in the VM's bytecode" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMBranchInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMBranchInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMBranchInfo_Statics::NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryStorage.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMBranchInfo_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMBranchInfo, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMBranchInfo_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMBranchInfo_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMBranchInfo_Statics::NewProp_Label_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryStorage.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMBranchInfo_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMBranchInfo, Label), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMBranchInfo_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMBranchInfo_Statics::NewProp_Label_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMBranchInfo_Statics::NewProp_InstructionIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryStorage.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMBranchInfo_Statics::NewProp_InstructionIndex = { "InstructionIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMBranchInfo, InstructionIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMBranchInfo_Statics::NewProp_InstructionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMBranchInfo_Statics::NewProp_InstructionIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMBranchInfo_Statics::NewProp_ArgumentIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryStorage.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMBranchInfo_Statics::NewProp_ArgumentIndex = { "ArgumentIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMBranchInfo, ArgumentIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMBranchInfo_Statics::NewProp_ArgumentIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMBranchInfo_Statics::NewProp_ArgumentIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMBranchInfo_Statics::NewProp_FirstInstruction_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryStorage.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FRigVMBranchInfo_Statics::NewProp_FirstInstruction = { "FirstInstruction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMBranchInfo, FirstInstruction), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMBranchInfo_Statics::NewProp_FirstInstruction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMBranchInfo_Statics::NewProp_FirstInstruction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMBranchInfo_Statics::NewProp_LastInstruction_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryStorage.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FRigVMBranchInfo_Statics::NewProp_LastInstruction = { "LastInstruction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMBranchInfo, LastInstruction), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMBranchInfo_Statics::NewProp_LastInstruction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMBranchInfo_Statics::NewProp_LastInstruction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMBranchInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMBranchInfo_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMBranchInfo_Statics::NewProp_Label,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMBranchInfo_Statics::NewProp_InstructionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMBranchInfo_Statics::NewProp_ArgumentIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMBranchInfo_Statics::NewProp_FirstInstruction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMBranchInfo_Statics::NewProp_LastInstruction,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMBranchInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		&NewStructOps,
		"RigVMBranchInfo",
		sizeof(FRigVMBranchInfo),
		alignof(FRigVMBranchInfo),
		Z_Construct_UScriptStruct_FRigVMBranchInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMBranchInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMBranchInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMBranchInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMBranchInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMBranchInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMBranchInfo.InnerSingleton, Z_Construct_UScriptStruct_FRigVMBranchInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMBranchInfo.InnerSingleton;
	}
	void URigVMMemoryStorageGeneratorClass::StaticRegisterNativesURigVMMemoryStorageGeneratorClass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMMemoryStorageGeneratorClass);
	UClass* Z_Construct_UClass_URigVMMemoryStorageGeneratorClass_NoRegister()
	{
		return URigVMMemoryStorageGeneratorClass::StaticClass();
	}
	struct Z_Construct_UClass_URigVMMemoryStorageGeneratorClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URigVMMemoryStorageGeneratorClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UClass,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMMemoryStorageGeneratorClass_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The URigVMMemoryStorageGeneratorClass is used to create / represent heterogeneous\n * memory storages. The generator can produce a UClass which contains a series of\n * properties. This UClass is then used to instantiate URigVMMemoryStorage objects\n * to be consumed by the RigVM. The memory storage objects can contain the literals\n * / constant values used by the virtual machine or work state.\n */" },
		{ "IncludePath", "RigVMCore/RigVMMemoryStorage.h" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryStorage.h" },
		{ "ToolTip", "The URigVMMemoryStorageGeneratorClass is used to create / represent heterogeneous\nmemory storages. The generator can produce a UClass which contains a series of\nproperties. This UClass is then used to instantiate URigVMMemoryStorage objects\nto be consumed by the RigVM. The memory storage objects can contain the literals\n/ constant values used by the virtual machine or work state." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URigVMMemoryStorageGeneratorClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVMMemoryStorageGeneratorClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMMemoryStorageGeneratorClass_Statics::ClassParams = {
		&URigVMMemoryStorageGeneratorClass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URigVMMemoryStorageGeneratorClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMMemoryStorageGeneratorClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URigVMMemoryStorageGeneratorClass()
	{
		if (!Z_Registration_Info_UClass_URigVMMemoryStorageGeneratorClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMMemoryStorageGeneratorClass.OuterSingleton, Z_Construct_UClass_URigVMMemoryStorageGeneratorClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URigVMMemoryStorageGeneratorClass.OuterSingleton;
	}
	template<> RIGVM_API UClass* StaticClass<URigVMMemoryStorageGeneratorClass>()
	{
		return URigVMMemoryStorageGeneratorClass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMMemoryStorageGeneratorClass);
	URigVMMemoryStorageGeneratorClass::~URigVMMemoryStorageGeneratorClass() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(URigVMMemoryStorageGeneratorClass)
	void URigVMMemoryStorage::StaticRegisterNativesURigVMMemoryStorage()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMMemoryStorage);
	UClass* Z_Construct_UClass_URigVMMemoryStorage_NoRegister()
	{
		return URigVMMemoryStorage::StaticClass();
	}
	struct Z_Construct_UClass_URigVMMemoryStorage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URigVMMemoryStorage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMMemoryStorage_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The URigVMMemoryStorage represents an instance of heterogeneous memory.\n * The memory layout is defined by the URigVMMemoryStorageGeneratorClass.\n */" },
		{ "IncludePath", "RigVMCore/RigVMMemoryStorage.h" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryStorage.h" },
		{ "ToolTip", "The URigVMMemoryStorage represents an instance of heterogeneous memory.\nThe memory layout is defined by the URigVMMemoryStorageGeneratorClass." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URigVMMemoryStorage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVMMemoryStorage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMMemoryStorage_Statics::ClassParams = {
		&URigVMMemoryStorage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URigVMMemoryStorage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMMemoryStorage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URigVMMemoryStorage()
	{
		if (!Z_Registration_Info_UClass_URigVMMemoryStorage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMMemoryStorage.OuterSingleton, Z_Construct_UClass_URigVMMemoryStorage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URigVMMemoryStorage.OuterSingleton;
	}
	template<> RIGVM_API UClass* StaticClass<URigVMMemoryStorage>()
	{
		return URigVMMemoryStorage::StaticClass();
	}
	URigVMMemoryStorage::URigVMMemoryStorage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMMemoryStorage);
	URigVMMemoryStorage::~URigVMMemoryStorage() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMMemoryStorage_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMMemoryStorage_h_Statics::ScriptStructInfo[] = {
		{ FRigVMBranchInfo::StaticStruct, Z_Construct_UScriptStruct_FRigVMBranchInfo_Statics::NewStructOps, TEXT("RigVMBranchInfo"), &Z_Registration_Info_UScriptStruct_RigVMBranchInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMBranchInfo), 1011398864U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMMemoryStorage_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URigVMMemoryStorageGeneratorClass, URigVMMemoryStorageGeneratorClass::StaticClass, TEXT("URigVMMemoryStorageGeneratorClass"), &Z_Registration_Info_UClass_URigVMMemoryStorageGeneratorClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMMemoryStorageGeneratorClass), 957240627U) },
		{ Z_Construct_UClass_URigVMMemoryStorage, URigVMMemoryStorage::StaticClass, TEXT("URigVMMemoryStorage"), &Z_Registration_Info_UClass_URigVMMemoryStorage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMMemoryStorage), 3792651230U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMMemoryStorage_h_1642449591(TEXT("/Script/RigVM"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMMemoryStorage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMMemoryStorage_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMMemoryStorage_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMMemoryStorage_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
