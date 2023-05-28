// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Animation/ExposedValueHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExposedValueHandler() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UFunction();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPostCopyOperation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExposedValueCopyRecord();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExposedValueHandler();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPostCopyOperation;
	static UEnum* EPostCopyOperation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPostCopyOperation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPostCopyOperation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EPostCopyOperation, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EPostCopyOperation"));
		}
		return Z_Registration_Info_UEnum_EPostCopyOperation.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EPostCopyOperation>()
	{
		return EPostCopyOperation_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EPostCopyOperation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EPostCopyOperation_Statics::Enumerators[] = {
		{ "EPostCopyOperation::None", (int64)EPostCopyOperation::None },
		{ "EPostCopyOperation::LogicalNegateBool", (int64)EPostCopyOperation::LogicalNegateBool },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EPostCopyOperation_Statics::Enum_MetaDataParams[] = {
		{ "LogicalNegateBool.Name", "EPostCopyOperation::LogicalNegateBool" },
		{ "ModuleRelativePath", "Public/Animation/ExposedValueHandler.h" },
		{ "None.Name", "EPostCopyOperation::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EPostCopyOperation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EPostCopyOperation",
		"EPostCopyOperation",
		Z_Construct_UEnum_Engine_EPostCopyOperation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPostCopyOperation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EPostCopyOperation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPostCopyOperation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EPostCopyOperation()
	{
		if (!Z_Registration_Info_UEnum_EPostCopyOperation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPostCopyOperation.InnerSingleton, Z_Construct_UEnum_Engine_EPostCopyOperation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPostCopyOperation.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExposedValueCopyRecord;
class UScriptStruct* FExposedValueCopyRecord::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExposedValueCopyRecord.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExposedValueCopyRecord.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExposedValueCopyRecord, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ExposedValueCopyRecord"));
	}
	return Z_Registration_Info_UScriptStruct_ExposedValueCopyRecord.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FExposedValueCopyRecord>()
{
	return FExposedValueCopyRecord::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FExposedValueCopyRecord_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CopyIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CopyIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PostCopyOperation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostCopyOperation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PostCopyOperation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExposedValueCopyRecord_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/ExposedValueHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExposedValueCopyRecord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExposedValueCopyRecord>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExposedValueCopyRecord_Statics::NewProp_CopyIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/ExposedValueHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExposedValueCopyRecord_Statics::NewProp_CopyIndex = { "CopyIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExposedValueCopyRecord, CopyIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FExposedValueCopyRecord_Statics::NewProp_CopyIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExposedValueCopyRecord_Statics::NewProp_CopyIndex_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FExposedValueCopyRecord_Statics::NewProp_PostCopyOperation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExposedValueCopyRecord_Statics::NewProp_PostCopyOperation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/ExposedValueHandler.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FExposedValueCopyRecord_Statics::NewProp_PostCopyOperation = { "PostCopyOperation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExposedValueCopyRecord, PostCopyOperation), Z_Construct_UEnum_Engine_EPostCopyOperation, METADATA_PARAMS(Z_Construct_UScriptStruct_FExposedValueCopyRecord_Statics::NewProp_PostCopyOperation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExposedValueCopyRecord_Statics::NewProp_PostCopyOperation_MetaData)) }; // 872811142
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExposedValueCopyRecord_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExposedValueCopyRecord_Statics::NewProp_CopyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExposedValueCopyRecord_Statics::NewProp_PostCopyOperation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExposedValueCopyRecord_Statics::NewProp_PostCopyOperation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExposedValueCopyRecord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ExposedValueCopyRecord",
		sizeof(FExposedValueCopyRecord),
		alignof(FExposedValueCopyRecord),
		Z_Construct_UScriptStruct_FExposedValueCopyRecord_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExposedValueCopyRecord_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExposedValueCopyRecord_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExposedValueCopyRecord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExposedValueCopyRecord()
	{
		if (!Z_Registration_Info_UScriptStruct_ExposedValueCopyRecord.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExposedValueCopyRecord.InnerSingleton, Z_Construct_UScriptStruct_FExposedValueCopyRecord_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ExposedValueCopyRecord.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExposedValueHandler;
class UScriptStruct* FExposedValueHandler::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExposedValueHandler.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExposedValueHandler.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExposedValueHandler, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ExposedValueHandler"));
	}
	return Z_Registration_Info_UScriptStruct_ExposedValueHandler.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FExposedValueHandler>()
{
	return FExposedValueHandler::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FExposedValueHandler_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_CopyRecords_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CopyRecords_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CopyRecords;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Function;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundFunction_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoundFunction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExposedValueHandler_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// An exposed value updater\n" },
		{ "ModuleRelativePath", "Public/Animation/ExposedValueHandler.h" },
		{ "ToolTip", "An exposed value updater" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExposedValueHandler_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExposedValueHandler>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FExposedValueHandler_Statics::NewProp_CopyRecords_Inner = { "CopyRecords", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FExposedValueCopyRecord, METADATA_PARAMS(nullptr, 0) }; // 3242831088
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExposedValueHandler_Statics::NewProp_CopyRecords_MetaData[] = {
		{ "Comment", "// Direct data access to property in anim instance\n" },
		{ "ModuleRelativePath", "Public/Animation/ExposedValueHandler.h" },
		{ "ToolTip", "Direct data access to property in anim instance" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FExposedValueHandler_Statics::NewProp_CopyRecords = { "CopyRecords", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExposedValueHandler, CopyRecords), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FExposedValueHandler_Statics::NewProp_CopyRecords_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExposedValueHandler_Statics::NewProp_CopyRecords_MetaData)) }; // 3242831088
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExposedValueHandler_Statics::NewProp_Function_MetaData[] = {
		{ "Comment", "// function pointer if BoundFunction != NAME_None\n" },
		{ "ModuleRelativePath", "Public/Animation/ExposedValueHandler.h" },
		{ "ToolTip", "function pointer if BoundFunction != NAME_None" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FExposedValueHandler_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExposedValueHandler, Function), Z_Construct_UClass_UFunction, METADATA_PARAMS(Z_Construct_UScriptStruct_FExposedValueHandler_Statics::NewProp_Function_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExposedValueHandler_Statics::NewProp_Function_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExposedValueHandler_Statics::NewProp_BoundFunction_MetaData[] = {
		{ "Comment", "// The function to call to update associated properties (can be NAME_None)\n" },
		{ "ModuleRelativePath", "Public/Animation/ExposedValueHandler.h" },
		{ "ToolTip", "The function to call to update associated properties (can be NAME_None)" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FExposedValueHandler_Statics::NewProp_BoundFunction = { "BoundFunction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExposedValueHandler, BoundFunction), METADATA_PARAMS(Z_Construct_UScriptStruct_FExposedValueHandler_Statics::NewProp_BoundFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExposedValueHandler_Statics::NewProp_BoundFunction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExposedValueHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExposedValueHandler_Statics::NewProp_CopyRecords_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExposedValueHandler_Statics::NewProp_CopyRecords,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExposedValueHandler_Statics::NewProp_Function,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExposedValueHandler_Statics::NewProp_BoundFunction,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExposedValueHandler_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ExposedValueHandler",
		sizeof(FExposedValueHandler),
		alignof(FExposedValueHandler),
		Z_Construct_UScriptStruct_FExposedValueHandler_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExposedValueHandler_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExposedValueHandler_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExposedValueHandler_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExposedValueHandler()
	{
		if (!Z_Registration_Info_UScriptStruct_ExposedValueHandler.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExposedValueHandler.InnerSingleton, Z_Construct_UScriptStruct_FExposedValueHandler_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ExposedValueHandler.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_ExposedValueHandler_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_ExposedValueHandler_h_Statics::EnumInfo[] = {
		{ EPostCopyOperation_StaticEnum, TEXT("EPostCopyOperation"), &Z_Registration_Info_UEnum_EPostCopyOperation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 872811142U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_ExposedValueHandler_h_Statics::ScriptStructInfo[] = {
		{ FExposedValueCopyRecord::StaticStruct, Z_Construct_UScriptStruct_FExposedValueCopyRecord_Statics::NewStructOps, TEXT("ExposedValueCopyRecord"), &Z_Registration_Info_UScriptStruct_ExposedValueCopyRecord, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExposedValueCopyRecord), 3242831088U) },
		{ FExposedValueHandler::StaticStruct, Z_Construct_UScriptStruct_FExposedValueHandler_Statics::NewStructOps, TEXT("ExposedValueHandler"), &Z_Registration_Info_UScriptStruct_ExposedValueHandler, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExposedValueHandler), 1648690771U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_ExposedValueHandler_h_1232261123(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_ExposedValueHandler_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_ExposedValueHandler_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_ExposedValueHandler_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_ExposedValueHandler_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
