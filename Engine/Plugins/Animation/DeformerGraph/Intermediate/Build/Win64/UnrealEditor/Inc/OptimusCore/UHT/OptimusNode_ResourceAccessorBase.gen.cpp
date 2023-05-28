// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Nodes/OptimusNode_ResourceAccessorBase.h"
#include "OptimusDataDomain.h"
#include "OptimusDataType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusNode_ResourceAccessorBase() {}
// Cross Module References
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComponentBindingProvider_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDataInterfaceProvider_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_ResourceAccessorBase();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusResourceDescription_NoRegister();
	OPTIMUSCORE_API UEnum* Z_Construct_UEnum_OptimusCore_EOptimusBufferWriteType();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusDataDomain();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusDataTypeRef();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusNode_ResourceAccessorBase_DuplicationInfo;
class UScriptStruct* FOptimusNode_ResourceAccessorBase_DuplicationInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNode_ResourceAccessorBase_DuplicationInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusNode_ResourceAccessorBase_DuplicationInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusNode_ResourceAccessorBase_DuplicationInfo"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusNode_ResourceAccessorBase_DuplicationInfo.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusNode_ResourceAccessorBase_DuplicationInfo>()
{
	return FOptimusNode_ResourceAccessorBase_DuplicationInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResourceName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ResourceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataDomain_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataDomain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_ResourceAccessorBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusNode_ResourceAccessorBase_DuplicationInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo_Statics::NewProp_ResourceName_MetaData[] = {
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_ResourceAccessorBase.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo_Statics::NewProp_ResourceName = { "ResourceName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusNode_ResourceAccessorBase_DuplicationInfo, ResourceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo_Statics::NewProp_ResourceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo_Statics::NewProp_ResourceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo_Statics::NewProp_DataType_MetaData[] = {
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_ResourceAccessorBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusNode_ResourceAccessorBase_DuplicationInfo, DataType), Z_Construct_UScriptStruct_FOptimusDataTypeRef, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo_Statics::NewProp_DataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo_Statics::NewProp_DataType_MetaData)) }; // 2733180919
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo_Statics::NewProp_DataDomain_MetaData[] = {
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_ResourceAccessorBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo_Statics::NewProp_DataDomain = { "DataDomain", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusNode_ResourceAccessorBase_DuplicationInfo, DataDomain), Z_Construct_UScriptStruct_FOptimusDataDomain, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo_Statics::NewProp_DataDomain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo_Statics::NewProp_DataDomain_MetaData)) }; // 413683696
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo_Statics::NewProp_ResourceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo_Statics::NewProp_DataType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo_Statics::NewProp_DataDomain,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		nullptr,
		&NewStructOps,
		"OptimusNode_ResourceAccessorBase_DuplicationInfo",
		sizeof(FOptimusNode_ResourceAccessorBase_DuplicationInfo),
		alignof(FOptimusNode_ResourceAccessorBase_DuplicationInfo),
		Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusNode_ResourceAccessorBase_DuplicationInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusNode_ResourceAccessorBase_DuplicationInfo.InnerSingleton, Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusNode_ResourceAccessorBase_DuplicationInfo.InnerSingleton;
	}
	void UOptimusNode_ResourceAccessorBase::StaticRegisterNativesUOptimusNode_ResourceAccessorBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusNode_ResourceAccessorBase);
	UClass* Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_NoRegister()
	{
		return UOptimusNode_ResourceAccessorBase::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResourceDesc_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ResourceDesc;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WriteType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WriteType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WriteType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DuplicationInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DuplicationInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOptimusNode,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Nodes/OptimusNode_ResourceAccessorBase.h" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_ResourceAccessorBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics::NewProp_ResourceDesc_MetaData[] = {
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_ResourceAccessorBase.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics::NewProp_ResourceDesc = { "ResourceDesc", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusNode_ResourceAccessorBase, ResourceDesc), Z_Construct_UClass_UOptimusResourceDescription_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics::NewProp_ResourceDesc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics::NewProp_ResourceDesc_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics::NewProp_WriteType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics::NewProp_WriteType_MetaData[] = {
		{ "Category", "Resource" },
		{ "Comment", "/** Logical operation when writing to the resource. */" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_ResourceAccessorBase.h" },
		{ "ToolTip", "Logical operation when writing to the resource." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics::NewProp_WriteType = { "WriteType", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusNode_ResourceAccessorBase, WriteType), Z_Construct_UEnum_OptimusCore_EOptimusBufferWriteType, METADATA_PARAMS(Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics::NewProp_WriteType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics::NewProp_WriteType_MetaData)) }; // 1867539270
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics::NewProp_DuplicationInfo_MetaData[] = {
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_ResourceAccessorBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics::NewProp_DuplicationInfo = { "DuplicationInfo", nullptr, (EPropertyFlags)0x0020080000200000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusNode_ResourceAccessorBase, DuplicationInfo), Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo, METADATA_PARAMS(Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics::NewProp_DuplicationInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics::NewProp_DuplicationInfo_MetaData)) }; // 948104820
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics::NewProp_ResourceDesc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics::NewProp_WriteType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics::NewProp_WriteType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics::NewProp_DuplicationInfo,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UOptimusDataInterfaceProvider_NoRegister, (int32)VTABLE_OFFSET(UOptimusNode_ResourceAccessorBase, IOptimusDataInterfaceProvider), false },  // 3536699185
			{ Z_Construct_UClass_UOptimusComponentBindingProvider_NoRegister, (int32)VTABLE_OFFSET(UOptimusNode_ResourceAccessorBase, IOptimusComponentBindingProvider), false },  // 524365484
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusNode_ResourceAccessorBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics::ClassParams = {
		&UOptimusNode_ResourceAccessorBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusNode_ResourceAccessorBase()
	{
		if (!Z_Registration_Info_UClass_UOptimusNode_ResourceAccessorBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusNode_ResourceAccessorBase.OuterSingleton, Z_Construct_UClass_UOptimusNode_ResourceAccessorBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusNode_ResourceAccessorBase.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusNode_ResourceAccessorBase>()
	{
		return UOptimusNode_ResourceAccessorBase::StaticClass();
	}
	UOptimusNode_ResourceAccessorBase::UOptimusNode_ResourceAccessorBase() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusNode_ResourceAccessorBase);
	UOptimusNode_ResourceAccessorBase::~UOptimusNode_ResourceAccessorBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ResourceAccessorBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ResourceAccessorBase_h_Statics::ScriptStructInfo[] = {
		{ FOptimusNode_ResourceAccessorBase_DuplicationInfo::StaticStruct, Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo_Statics::NewStructOps, TEXT("OptimusNode_ResourceAccessorBase_DuplicationInfo"), &Z_Registration_Info_UScriptStruct_OptimusNode_ResourceAccessorBase_DuplicationInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusNode_ResourceAccessorBase_DuplicationInfo), 948104820U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ResourceAccessorBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusNode_ResourceAccessorBase, UOptimusNode_ResourceAccessorBase::StaticClass, TEXT("UOptimusNode_ResourceAccessorBase"), &Z_Registration_Info_UClass_UOptimusNode_ResourceAccessorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusNode_ResourceAccessorBase), 1426211255U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ResourceAccessorBase_h_1773983913(TEXT("/Script/OptimusCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ResourceAccessorBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ResourceAccessorBase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ResourceAccessorBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ResourceAccessorBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
