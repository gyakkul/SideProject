// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMBlueprintGeneratedClass.h"
#include "RigVMCore/RigVMGraphFunctionHost.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMBlueprintGeneratedClass() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintGeneratedClass();
	RIGVM_API UClass* Z_Construct_UClass_URigVMBlueprintGeneratedClass();
	RIGVM_API UClass* Z_Construct_UClass_URigVMBlueprintGeneratedClass_NoRegister();
	RIGVM_API UClass* Z_Construct_UClass_URigVMGraphFunctionHost_NoRegister();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMGraphFunctionStore();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References
	void URigVMBlueprintGeneratedClass::StaticRegisterNativesURigVMBlueprintGeneratedClass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMBlueprintGeneratedClass);
	UClass* Z_Construct_UClass_URigVMBlueprintGeneratedClass_NoRegister()
	{
		return URigVMBlueprintGeneratedClass::StaticClass();
	}
	struct Z_Construct_UClass_URigVMBlueprintGeneratedClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphFunctionStore_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GraphFunctionStore;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URigVMBlueprintGeneratedClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintGeneratedClass,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMBlueprintGeneratedClass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RigVMBlueprintGeneratedClass.h" },
		{ "ModuleRelativePath", "Public/RigVMBlueprintGeneratedClass.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMBlueprintGeneratedClass_Statics::NewProp_GraphFunctionStore_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMBlueprintGeneratedClass.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URigVMBlueprintGeneratedClass_Statics::NewProp_GraphFunctionStore = { "GraphFunctionStore", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMBlueprintGeneratedClass, GraphFunctionStore), Z_Construct_UScriptStruct_FRigVMGraphFunctionStore, METADATA_PARAMS(Z_Construct_UClass_URigVMBlueprintGeneratedClass_Statics::NewProp_GraphFunctionStore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMBlueprintGeneratedClass_Statics::NewProp_GraphFunctionStore_MetaData)) }; // 2229006788
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URigVMBlueprintGeneratedClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMBlueprintGeneratedClass_Statics::NewProp_GraphFunctionStore,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_URigVMBlueprintGeneratedClass_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_URigVMGraphFunctionHost_NoRegister, (int32)VTABLE_OFFSET(URigVMBlueprintGeneratedClass, IRigVMGraphFunctionHost), false },  // 3482932937
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URigVMBlueprintGeneratedClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVMBlueprintGeneratedClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMBlueprintGeneratedClass_Statics::ClassParams = {
		&URigVMBlueprintGeneratedClass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URigVMBlueprintGeneratedClass_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URigVMBlueprintGeneratedClass_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009200A0u,
		METADATA_PARAMS(Z_Construct_UClass_URigVMBlueprintGeneratedClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMBlueprintGeneratedClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URigVMBlueprintGeneratedClass()
	{
		if (!Z_Registration_Info_UClass_URigVMBlueprintGeneratedClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMBlueprintGeneratedClass.OuterSingleton, Z_Construct_UClass_URigVMBlueprintGeneratedClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URigVMBlueprintGeneratedClass.OuterSingleton;
	}
	template<> RIGVM_API UClass* StaticClass<URigVMBlueprintGeneratedClass>()
	{
		return URigVMBlueprintGeneratedClass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMBlueprintGeneratedClass);
	URigVMBlueprintGeneratedClass::~URigVMBlueprintGeneratedClass() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(URigVMBlueprintGeneratedClass)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMBlueprintGeneratedClass_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMBlueprintGeneratedClass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URigVMBlueprintGeneratedClass, URigVMBlueprintGeneratedClass::StaticClass, TEXT("URigVMBlueprintGeneratedClass"), &Z_Registration_Info_UClass_URigVMBlueprintGeneratedClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMBlueprintGeneratedClass), 1340306819U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMBlueprintGeneratedClass_h_1757590352(TEXT("/Script/RigVM"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMBlueprintGeneratedClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMBlueprintGeneratedClass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
