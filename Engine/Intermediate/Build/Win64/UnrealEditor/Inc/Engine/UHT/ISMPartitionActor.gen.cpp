// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/ISMPartition/ISMPartitionActor.h"
#include "../../Source/Runtime/Engine/Public/ISMPartition/ISMComponentData.h"
#include "../../Source/Runtime/Engine/Public/ISMPartition/ISMComponentDescriptor.h"
#include "../../Source/Runtime/Engine/Public/ISMPartition/ISMPartitionInstanceManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeISMPartitionActor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_AISMPartitionActor();
	ENGINE_API UClass* Z_Construct_UClass_AISMPartitionActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APartitionActor();
	ENGINE_API UClass* Z_Construct_UClass_USMInstanceManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USMInstanceManagerProvider_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FISMClientInstanceManagerData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FISMComponentData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FISMComponentDescriptor();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void AISMPartitionActor::StaticRegisterNativesAISMPartitionActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AISMPartitionActor);
	UClass* Z_Construct_UClass_AISMPartitionActor_NoRegister()
	{
		return AISMPartitionActor::StaticClass();
	}
	struct Z_Construct_UClass_AISMPartitionActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_Clients_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Clients_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Clients;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Descriptors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Descriptors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Descriptors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DescriptorComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DescriptorComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DescriptorComponents;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClientInstanceManagers_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClientInstanceManagers_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientInstanceManagers_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ClientInstanceManagers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AISMPartitionActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APartitionActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AISMPartitionActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Actor base class for instance containers placed on a grid.\n\x09See UActorPartitionSubsystem. */" },
		{ "IncludePath", "ISMPartition/ISMPartitionActor.h" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMPartitionActor.h" },
		{ "ToolTip", "Actor base class for instance containers placed on a grid.\n      See UActorPartitionSubsystem." },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AISMPartitionActor_Statics::NewProp_Clients_Inner = { "Clients", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AISMPartitionActor_Statics::NewProp_Clients_MetaData[] = {
		{ "ModuleRelativePath", "Public/ISMPartition/ISMPartitionActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AISMPartitionActor_Statics::NewProp_Clients = { "Clients", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AISMPartitionActor, Clients), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AISMPartitionActor_Statics::NewProp_Clients_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AISMPartitionActor_Statics::NewProp_Clients_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AISMPartitionActor_Statics::NewProp_Descriptors_Inner = { "Descriptors", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FISMComponentDescriptor, METADATA_PARAMS(nullptr, 0) }; // 4080497835
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AISMPartitionActor_Statics::NewProp_Descriptors_MetaData[] = {
		{ "ModuleRelativePath", "Public/ISMPartition/ISMPartitionActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AISMPartitionActor_Statics::NewProp_Descriptors = { "Descriptors", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AISMPartitionActor, Descriptors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AISMPartitionActor_Statics::NewProp_Descriptors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AISMPartitionActor_Statics::NewProp_Descriptors_MetaData)) }; // 4080497835
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AISMPartitionActor_Statics::NewProp_DescriptorComponents_Inner = { "DescriptorComponents", nullptr, (EPropertyFlags)0x0000008800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FISMComponentData, METADATA_PARAMS(nullptr, 0) }; // 1676986488
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AISMPartitionActor_Statics::NewProp_DescriptorComponents_MetaData[] = {
		{ "ModuleRelativePath", "Public/ISMPartition/ISMPartitionActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AISMPartitionActor_Statics::NewProp_DescriptorComponents = { "DescriptorComponents", nullptr, (EPropertyFlags)0x0040008800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AISMPartitionActor, DescriptorComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AISMPartitionActor_Statics::NewProp_DescriptorComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AISMPartitionActor_Statics::NewProp_DescriptorComponents_MetaData)) }; // 1676986488
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AISMPartitionActor_Statics::NewProp_ClientInstanceManagers_ValueProp = { "ClientInstanceManagers", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FISMClientInstanceManagerData, METADATA_PARAMS(nullptr, 0) }; // 612431242
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AISMPartitionActor_Statics::NewProp_ClientInstanceManagers_Key_KeyProp = { "ClientInstanceManagers_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AISMPartitionActor_Statics::NewProp_ClientInstanceManagers_MetaData[] = {
		{ "ModuleRelativePath", "Public/ISMPartition/ISMPartitionActor.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AISMPartitionActor_Statics::NewProp_ClientInstanceManagers = { "ClientInstanceManagers", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AISMPartitionActor, ClientInstanceManagers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AISMPartitionActor_Statics::NewProp_ClientInstanceManagers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AISMPartitionActor_Statics::NewProp_ClientInstanceManagers_MetaData)) }; // 612431242
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AISMPartitionActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AISMPartitionActor_Statics::NewProp_Clients_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AISMPartitionActor_Statics::NewProp_Clients,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AISMPartitionActor_Statics::NewProp_Descriptors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AISMPartitionActor_Statics::NewProp_Descriptors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AISMPartitionActor_Statics::NewProp_DescriptorComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AISMPartitionActor_Statics::NewProp_DescriptorComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AISMPartitionActor_Statics::NewProp_ClientInstanceManagers_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AISMPartitionActor_Statics::NewProp_ClientInstanceManagers_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AISMPartitionActor_Statics::NewProp_ClientInstanceManagers,
	};
#endif // WITH_EDITORONLY_DATA
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AISMPartitionActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USMInstanceManager_NoRegister, (int32)VTABLE_OFFSET(AISMPartitionActor, ISMInstanceManager), false },  // 399041778
			{ Z_Construct_UClass_USMInstanceManagerProvider_NoRegister, (int32)VTABLE_OFFSET(AISMPartitionActor, ISMInstanceManagerProvider), false },  // 1249891206
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AISMPartitionActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AISMPartitionActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AISMPartitionActor_Statics::ClassParams = {
		&AISMPartitionActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_AISMPartitionActor_Statics::PropPointers, nullptr),
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_AISMPartitionActor_Statics::PropPointers), 0),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AISMPartitionActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AISMPartitionActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AISMPartitionActor()
	{
		if (!Z_Registration_Info_UClass_AISMPartitionActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AISMPartitionActor.OuterSingleton, Z_Construct_UClass_AISMPartitionActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AISMPartitionActor.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<AISMPartitionActor>()
	{
		return AISMPartitionActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AISMPartitionActor);
	AISMPartitionActor::~AISMPartitionActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AISMPartitionActor, AISMPartitionActor::StaticClass, TEXT("AISMPartitionActor"), &Z_Registration_Info_UClass_AISMPartitionActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AISMPartitionActor), 786485883U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionActor_h_2648102975(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
