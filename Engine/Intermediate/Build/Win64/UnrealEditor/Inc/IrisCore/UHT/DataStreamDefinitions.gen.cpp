// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Iris/DataStream/DataStreamDefinitions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataStreamDefinitions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	IRISCORE_API UClass* Z_Construct_UClass_UDataStreamDefinitions();
	IRISCORE_API UClass* Z_Construct_UClass_UDataStreamDefinitions_NoRegister();
	IRISCORE_API UEnum* Z_Construct_UEnum_IrisCore_EDataStreamSendStatus();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataStreamDefinition();
	UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataStreamDefinition;
class UScriptStruct* FDataStreamDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataStreamDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataStreamDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataStreamDefinition, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("DataStreamDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_DataStreamDefinition.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FDataStreamDefinition>()
{
	return FDataStreamDefinition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataStreamDefinition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataStreamName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DataStreamName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ClassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_Class;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultSendStatus_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSendStatus_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultSendStatus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoCreate_MetaData[];
#endif
		static void NewProp_bAutoCreate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoCreate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Iris/DataStream/DataStreamDefinitions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataStreamDefinition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::NewProp_DataStreamName_MetaData[] = {
		{ "Comment", "// Data stream identifier\n" },
		{ "ModuleRelativePath", "Private/Iris/DataStream/DataStreamDefinitions.h" },
		{ "ToolTip", "Data stream identifier" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::NewProp_DataStreamName = { "DataStreamName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataStreamDefinition, DataStreamName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::NewProp_DataStreamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::NewProp_DataStreamName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::NewProp_ClassName_MetaData[] = {
		{ "Comment", "// UClass name used to create the UDataStream\n" },
		{ "ModuleRelativePath", "Private/Iris/DataStream/DataStreamDefinitions.h" },
		{ "ToolTip", "UClass name used to create the UDataStream" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataStreamDefinition, ClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::NewProp_ClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::NewProp_ClassName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::NewProp_Class_MetaData[] = {
		{ "Comment", "// UClass used to create the UDataStream\n" },
		{ "ModuleRelativePath", "Private/Iris/DataStream/DataStreamDefinitions.h" },
		{ "ToolTip", "UClass used to create the UDataStream" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataStreamDefinition, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::NewProp_Class_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::NewProp_DefaultSendStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::NewProp_DefaultSendStatus_MetaData[] = {
		{ "Comment", "// Default send status when created.\n" },
		{ "ModuleRelativePath", "Private/Iris/DataStream/DataStreamDefinitions.h" },
		{ "ToolTip", "Default send status when created." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::NewProp_DefaultSendStatus = { "DefaultSendStatus", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataStreamDefinition, DefaultSendStatus), Z_Construct_UEnum_IrisCore_EDataStreamSendStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::NewProp_DefaultSendStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::NewProp_DefaultSendStatus_MetaData)) }; // 2394160147
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::NewProp_bAutoCreate_MetaData[] = {
		{ "Comment", "// Whether the DataStream should be auto created for each connection. If not then CreateStream need be called manually.\n" },
		{ "ModuleRelativePath", "Private/Iris/DataStream/DataStreamDefinitions.h" },
		{ "ToolTip", "Whether the DataStream should be auto created for each connection. If not then CreateStream need be called manually." },
	};
#endif
	void Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::NewProp_bAutoCreate_SetBit(void* Obj)
	{
		((FDataStreamDefinition*)Obj)->bAutoCreate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::NewProp_bAutoCreate = { "bAutoCreate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDataStreamDefinition), &Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::NewProp_bAutoCreate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::NewProp_bAutoCreate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::NewProp_bAutoCreate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::NewProp_DataStreamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::NewProp_ClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::NewProp_DefaultSendStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::NewProp_DefaultSendStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::NewProp_bAutoCreate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
		nullptr,
		&NewStructOps,
		"DataStreamDefinition",
		sizeof(FDataStreamDefinition),
		alignof(FDataStreamDefinition),
		Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataStreamDefinition()
	{
		if (!Z_Registration_Info_UScriptStruct_DataStreamDefinition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataStreamDefinition.InnerSingleton, Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataStreamDefinition.InnerSingleton;
	}
	void UDataStreamDefinitions::StaticRegisterNativesUDataStreamDefinitions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataStreamDefinitions);
	UClass* Z_Construct_UClass_UDataStreamDefinitions_NoRegister()
	{
		return UDataStreamDefinitions::StaticClass();
	}
	struct Z_Construct_UClass_UDataStreamDefinitions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataStreamDefinitions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataStreamDefinitions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataStreamDefinitions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataStreamDefinitions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataStreamDefinitions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Iris/DataStream/DataStreamDefinitions.h" },
		{ "ModuleRelativePath", "Private/Iris/DataStream/DataStreamDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataStreamDefinitions_Statics::NewProp_DataStreamDefinitions_Inner = { "DataStreamDefinitions", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDataStreamDefinition, METADATA_PARAMS(nullptr, 0) }; // 2220144483
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataStreamDefinitions_Statics::NewProp_DataStreamDefinitions_MetaData[] = {
		{ "ModuleRelativePath", "Private/Iris/DataStream/DataStreamDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataStreamDefinitions_Statics::NewProp_DataStreamDefinitions = { "DataStreamDefinitions", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataStreamDefinitions, DataStreamDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDataStreamDefinitions_Statics::NewProp_DataStreamDefinitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataStreamDefinitions_Statics::NewProp_DataStreamDefinitions_MetaData)) }; // 2220144483
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataStreamDefinitions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataStreamDefinitions_Statics::NewProp_DataStreamDefinitions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataStreamDefinitions_Statics::NewProp_DataStreamDefinitions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataStreamDefinitions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataStreamDefinitions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataStreamDefinitions_Statics::ClassParams = {
		&UDataStreamDefinitions::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataStreamDefinitions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataStreamDefinitions_Statics::PropPointers),
		0,
		0x000000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UDataStreamDefinitions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataStreamDefinitions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataStreamDefinitions()
	{
		if (!Z_Registration_Info_UClass_UDataStreamDefinitions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataStreamDefinitions.OuterSingleton, Z_Construct_UClass_UDataStreamDefinitions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataStreamDefinitions.OuterSingleton;
	}
	template<> IRISCORE_API UClass* StaticClass<UDataStreamDefinitions>()
	{
		return UDataStreamDefinitions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataStreamDefinitions);
	UDataStreamDefinitions::~UDataStreamDefinitions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_DataStream_DataStreamDefinitions_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_DataStream_DataStreamDefinitions_h_Statics::ScriptStructInfo[] = {
		{ FDataStreamDefinition::StaticStruct, Z_Construct_UScriptStruct_FDataStreamDefinition_Statics::NewStructOps, TEXT("DataStreamDefinition"), &Z_Registration_Info_UScriptStruct_DataStreamDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataStreamDefinition), 2220144483U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_DataStream_DataStreamDefinitions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataStreamDefinitions, UDataStreamDefinitions::StaticClass, TEXT("UDataStreamDefinitions"), &Z_Registration_Info_UClass_UDataStreamDefinitions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataStreamDefinitions), 3044206288U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_DataStream_DataStreamDefinitions_h_3021046073(TEXT("/Script/IrisCore"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_DataStream_DataStreamDefinitions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_DataStream_DataStreamDefinitions_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_DataStream_DataStreamDefinitions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_DataStream_DataStreamDefinitions_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
