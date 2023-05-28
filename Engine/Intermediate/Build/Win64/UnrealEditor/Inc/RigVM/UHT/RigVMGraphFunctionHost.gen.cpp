// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMCore/RigVMGraphFunctionHost.h"
#include "RigVMCore/RigVMGraphFunctionDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMGraphFunctionHost() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	RIGVM_API UClass* Z_Construct_UClass_URigVMGraphFunctionHost();
	RIGVM_API UClass* Z_Construct_UClass_URigVMGraphFunctionHost_NoRegister();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMGraphFunctionData();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMGraphFunctionStore();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References
	void URigVMGraphFunctionHost::StaticRegisterNativesURigVMGraphFunctionHost()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMGraphFunctionHost);
	UClass* Z_Construct_UClass_URigVMGraphFunctionHost_NoRegister()
	{
		return URigVMGraphFunctionHost::StaticClass();
	}
	struct Z_Construct_UClass_URigVMGraphFunctionHost_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URigVMGraphFunctionHost_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMGraphFunctionHost_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionHost.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URigVMGraphFunctionHost_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IRigVMGraphFunctionHost>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMGraphFunctionHost_Statics::ClassParams = {
		&URigVMGraphFunctionHost::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_URigVMGraphFunctionHost_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMGraphFunctionHost_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URigVMGraphFunctionHost()
	{
		if (!Z_Registration_Info_UClass_URigVMGraphFunctionHost.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMGraphFunctionHost.OuterSingleton, Z_Construct_UClass_URigVMGraphFunctionHost_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URigVMGraphFunctionHost.OuterSingleton;
	}
	template<> RIGVM_API UClass* StaticClass<URigVMGraphFunctionHost>()
	{
		return URigVMGraphFunctionHost::StaticClass();
	}
	URigVMGraphFunctionHost::URigVMGraphFunctionHost(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMGraphFunctionHost);
	URigVMGraphFunctionHost::~URigVMGraphFunctionHost() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMGraphFunctionStore;
class UScriptStruct* FRigVMGraphFunctionStore::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMGraphFunctionStore.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMGraphFunctionStore.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMGraphFunctionStore, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMGraphFunctionStore"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMGraphFunctionStore.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMGraphFunctionStore>()
{
	return FRigVMGraphFunctionStore::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMGraphFunctionStore_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_PublicFunctions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PublicFunctions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PublicFunctions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrivateFunctions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrivateFunctions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PrivateFunctions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMGraphFunctionStore_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// A management struct containing graph functions\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionHost.h" },
		{ "ToolTip", "A management struct containing graph functions" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMGraphFunctionStore_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMGraphFunctionStore>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionStore_Statics::NewProp_PublicFunctions_Inner = { "PublicFunctions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigVMGraphFunctionData, METADATA_PARAMS(nullptr, 0) }; // 3558297336
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMGraphFunctionStore_Statics::NewProp_PublicFunctions_MetaData[] = {
		{ "Comment", "/** Exposed public functions on this rig */" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionHost.h" },
		{ "ToolTip", "Exposed public functions on this rig" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionStore_Statics::NewProp_PublicFunctions = { "PublicFunctions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMGraphFunctionStore, PublicFunctions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMGraphFunctionStore_Statics::NewProp_PublicFunctions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionStore_Statics::NewProp_PublicFunctions_MetaData)) }; // 3558297336
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionStore_Statics::NewProp_PrivateFunctions_Inner = { "PrivateFunctions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigVMGraphFunctionData, METADATA_PARAMS(nullptr, 0) }; // 3558297336
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMGraphFunctionStore_Statics::NewProp_PrivateFunctions_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionHost.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionStore_Statics::NewProp_PrivateFunctions = { "PrivateFunctions", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMGraphFunctionStore, PrivateFunctions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMGraphFunctionStore_Statics::NewProp_PrivateFunctions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionStore_Statics::NewProp_PrivateFunctions_MetaData)) }; // 3558297336
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMGraphFunctionStore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionStore_Statics::NewProp_PublicFunctions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionStore_Statics::NewProp_PublicFunctions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionStore_Statics::NewProp_PrivateFunctions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionStore_Statics::NewProp_PrivateFunctions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMGraphFunctionStore_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		&NewStructOps,
		"RigVMGraphFunctionStore",
		sizeof(FRigVMGraphFunctionStore),
		alignof(FRigVMGraphFunctionStore),
		Z_Construct_UScriptStruct_FRigVMGraphFunctionStore_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionStore_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMGraphFunctionStore_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionStore_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMGraphFunctionStore()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMGraphFunctionStore.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMGraphFunctionStore.InnerSingleton, Z_Construct_UScriptStruct_FRigVMGraphFunctionStore_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMGraphFunctionStore.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h_Statics::ScriptStructInfo[] = {
		{ FRigVMGraphFunctionStore::StaticStruct, Z_Construct_UScriptStruct_FRigVMGraphFunctionStore_Statics::NewStructOps, TEXT("RigVMGraphFunctionStore"), &Z_Registration_Info_UScriptStruct_RigVMGraphFunctionStore, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMGraphFunctionStore), 2229006788U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URigVMGraphFunctionHost, URigVMGraphFunctionHost::StaticClass, TEXT("URigVMGraphFunctionHost"), &Z_Registration_Info_UClass_URigVMGraphFunctionHost, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMGraphFunctionHost), 3482932937U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h_75346833(TEXT("/Script/RigVM"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
