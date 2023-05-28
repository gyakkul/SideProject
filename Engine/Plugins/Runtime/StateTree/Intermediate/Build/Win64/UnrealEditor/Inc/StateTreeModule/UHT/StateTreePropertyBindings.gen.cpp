// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreePropertyBindings.h"
#include "StateTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreePropertyBindings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UStruct();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeBindableStructSource();
	STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreePropertyAccessType();
	STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreePropertyCopyType();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeBindableStructDesc();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeIndex16();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropCopy();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropCopyBatch();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyBinding();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyBindings();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyIndirection();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertySegment();
	UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreeBindableStructSource;
	static UEnum* EStateTreeBindableStructSource_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeBindableStructSource.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStateTreeBindableStructSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeBindableStructSource, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreeBindableStructSource"));
		}
		return Z_Registration_Info_UEnum_EStateTreeBindableStructSource.OuterSingleton;
	}
	template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeBindableStructSource>()
	{
		return EStateTreeBindableStructSource_StaticEnum();
	}
	struct Z_Construct_UEnum_StateTreeModule_EStateTreeBindableStructSource_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StateTreeModule_EStateTreeBindableStructSource_Statics::Enumerators[] = {
		{ "EStateTreeBindableStructSource::Context", (int64)EStateTreeBindableStructSource::Context },
		{ "EStateTreeBindableStructSource::Parameter", (int64)EStateTreeBindableStructSource::Parameter },
		{ "EStateTreeBindableStructSource::Evaluator", (int64)EStateTreeBindableStructSource::Evaluator },
		{ "EStateTreeBindableStructSource::GlobalTask", (int64)EStateTreeBindableStructSource::GlobalTask },
		{ "EStateTreeBindableStructSource::State", (int64)EStateTreeBindableStructSource::State },
		{ "EStateTreeBindableStructSource::Task", (int64)EStateTreeBindableStructSource::Task },
		{ "EStateTreeBindableStructSource::Condition", (int64)EStateTreeBindableStructSource::Condition },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StateTreeModule_EStateTreeBindableStructSource_Statics::Enum_MetaDataParams[] = {
		{ "Condition.Comment", "/** Source is State condition */" },
		{ "Condition.Name", "EStateTreeBindableStructSource::Condition" },
		{ "Condition.ToolTip", "Source is State condition" },
		{ "Context.Comment", "/** Source is StateTree context object */" },
		{ "Context.Name", "EStateTreeBindableStructSource::Context" },
		{ "Context.ToolTip", "Source is StateTree context object" },
		{ "Evaluator.Comment", "/** Source is StateTree evaluator */" },
		{ "Evaluator.Name", "EStateTreeBindableStructSource::Evaluator" },
		{ "Evaluator.ToolTip", "Source is StateTree evaluator" },
		{ "GlobalTask.Comment", "/** Source is StateTree global task */" },
		{ "GlobalTask.Name", "EStateTreeBindableStructSource::GlobalTask" },
		{ "GlobalTask.ToolTip", "Source is StateTree global task" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "Parameter.Comment", "/** Source is StateTree parameter */" },
		{ "Parameter.Name", "EStateTreeBindableStructSource::Parameter" },
		{ "Parameter.ToolTip", "Source is StateTree parameter" },
		{ "State.Comment", "/** Source is State parameter */" },
		{ "State.Name", "EStateTreeBindableStructSource::State" },
		{ "State.ToolTip", "Source is State parameter" },
		{ "Task.Comment", "/** Source is State task */" },
		{ "Task.Name", "EStateTreeBindableStructSource::Task" },
		{ "Task.ToolTip", "Source is State task" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreeBindableStructSource_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		"EStateTreeBindableStructSource",
		"EStateTreeBindableStructSource",
		Z_Construct_UEnum_StateTreeModule_EStateTreeBindableStructSource_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeBindableStructSource_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_StateTreeModule_EStateTreeBindableStructSource_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeBindableStructSource_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeBindableStructSource()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeBindableStructSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreeBindableStructSource.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreeBindableStructSource_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStateTreeBindableStructSource.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeBindableStructDesc;
class UScriptStruct* FStateTreeBindableStructDesc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeBindableStructDesc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeBindableStructDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeBindableStructDesc, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeBindableStructDesc"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeBindableStructDesc.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeBindableStructDesc>()
{
	return FStateTreeBindableStructDesc::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Struct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DataSource_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataSource_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DataSource;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ID;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Descriptor for a struct or class that can be a binding source or target.\n * Each struct has unique identifier, which is used to distinguish them, and name that is mostly for debugging and UI.\n */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Descriptor for a struct or class that can be a binding source or target.\nEach struct has unique identifier, which is used to distinguish them, and name that is mostly for debugging and UI." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeBindableStructDesc>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_Struct_MetaData[] = {
		{ "Comment", "/** The type of the struct or class. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The type of the struct or class." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeBindableStructDesc, Struct), Z_Construct_UClass_UStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_Struct_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_Struct_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/** Name of the container (cosmetic). */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Name of the container (cosmetic)." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeBindableStructDesc, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_DataSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_DataSource_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_DataSource = { "DataSource", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeBindableStructDesc, DataSource), Z_Construct_UEnum_StateTreeModule_EStateTreeBindableStructSource, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_DataSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_DataSource_MetaData)) }; // 3608644956
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_ID_MetaData[] = {
		{ "Comment", "/** Unique identifier of the struct. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Unique identifier of the struct." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeBindableStructDesc, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_ID_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_Struct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_DataSource_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_DataSource,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_ID,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreeBindableStructDesc",
		sizeof(FStateTreeBindableStructDesc),
		alignof(FStateTreeBindableStructDesc),
		Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeBindableStructDesc()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeBindableStructDesc.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeBindableStructDesc.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeBindableStructDesc.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreePropertyAccessType;
	static UEnum* EStateTreePropertyAccessType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStateTreePropertyAccessType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStateTreePropertyAccessType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreePropertyAccessType, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreePropertyAccessType"));
		}
		return Z_Registration_Info_UEnum_EStateTreePropertyAccessType.OuterSingleton;
	}
	template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreePropertyAccessType>()
	{
		return EStateTreePropertyAccessType_StaticEnum();
	}
	struct Z_Construct_UEnum_StateTreeModule_EStateTreePropertyAccessType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StateTreeModule_EStateTreePropertyAccessType_Statics::Enumerators[] = {
		{ "EStateTreePropertyAccessType::Offset", (int64)EStateTreePropertyAccessType::Offset },
		{ "EStateTreePropertyAccessType::Object", (int64)EStateTreePropertyAccessType::Object },
		{ "EStateTreePropertyAccessType::WeakObject", (int64)EStateTreePropertyAccessType::WeakObject },
		{ "EStateTreePropertyAccessType::SoftObject", (int64)EStateTreePropertyAccessType::SoftObject },
		{ "EStateTreePropertyAccessType::IndexArray", (int64)EStateTreePropertyAccessType::IndexArray },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StateTreeModule_EStateTreePropertyAccessType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * The type of access a property path describes.\n */" },
		{ "IndexArray.Comment", "// Access is a soft object\n" },
		{ "IndexArray.Name", "EStateTreePropertyAccessType::IndexArray" },
		{ "IndexArray.ToolTip", "Access is a soft object" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "Object.Comment", "// Access node is a simple basePtr + offset\n" },
		{ "Object.Name", "EStateTreePropertyAccessType::Object" },
		{ "Object.ToolTip", "Access node is a simple basePtr + offset" },
		{ "Offset.Name", "EStateTreePropertyAccessType::Offset" },
		{ "SoftObject.Comment", "// Access is a weak object\n" },
		{ "SoftObject.Name", "EStateTreePropertyAccessType::SoftObject" },
		{ "SoftObject.ToolTip", "Access is a weak object" },
		{ "ToolTip", "The type of access a property path describes." },
		{ "WeakObject.Comment", "// Access node needs to dereference an object at its current address\n" },
		{ "WeakObject.Name", "EStateTreePropertyAccessType::WeakObject" },
		{ "WeakObject.ToolTip", "Access node needs to dereference an object at its current address" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreePropertyAccessType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		"EStateTreePropertyAccessType",
		"EStateTreePropertyAccessType",
		Z_Construct_UEnum_StateTreeModule_EStateTreePropertyAccessType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreePropertyAccessType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_StateTreeModule_EStateTreePropertyAccessType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreePropertyAccessType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreePropertyAccessType()
	{
		if (!Z_Registration_Info_UEnum_EStateTreePropertyAccessType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreePropertyAccessType.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreePropertyAccessType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStateTreePropertyAccessType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreePropertyCopyType;
	static UEnum* EStateTreePropertyCopyType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStateTreePropertyCopyType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStateTreePropertyCopyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreePropertyCopyType, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreePropertyCopyType"));
		}
		return Z_Registration_Info_UEnum_EStateTreePropertyCopyType.OuterSingleton;
	}
	template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreePropertyCopyType>()
	{
		return EStateTreePropertyCopyType_StaticEnum();
	}
	struct Z_Construct_UEnum_StateTreeModule_EStateTreePropertyCopyType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StateTreeModule_EStateTreePropertyCopyType_Statics::Enumerators[] = {
		{ "EStateTreePropertyCopyType::None", (int64)EStateTreePropertyCopyType::None },
		{ "EStateTreePropertyCopyType::CopyPlain", (int64)EStateTreePropertyCopyType::CopyPlain },
		{ "EStateTreePropertyCopyType::CopyComplex", (int64)EStateTreePropertyCopyType::CopyComplex },
		{ "EStateTreePropertyCopyType::CopyBool", (int64)EStateTreePropertyCopyType::CopyBool },
		{ "EStateTreePropertyCopyType::CopyStruct", (int64)EStateTreePropertyCopyType::CopyStruct },
		{ "EStateTreePropertyCopyType::CopyObject", (int64)EStateTreePropertyCopyType::CopyObject },
		{ "EStateTreePropertyCopyType::CopyName", (int64)EStateTreePropertyCopyType::CopyName },
		{ "EStateTreePropertyCopyType::CopyFixedArray", (int64)EStateTreePropertyCopyType::CopyFixedArray },
		{ "EStateTreePropertyCopyType::StructReference", (int64)EStateTreePropertyCopyType::StructReference },
		{ "EStateTreePropertyCopyType::PromoteBoolToByte", (int64)EStateTreePropertyCopyType::PromoteBoolToByte },
		{ "EStateTreePropertyCopyType::PromoteBoolToInt32", (int64)EStateTreePropertyCopyType::PromoteBoolToInt32 },
		{ "EStateTreePropertyCopyType::PromoteBoolToUInt32", (int64)EStateTreePropertyCopyType::PromoteBoolToUInt32 },
		{ "EStateTreePropertyCopyType::PromoteBoolToInt64", (int64)EStateTreePropertyCopyType::PromoteBoolToInt64 },
		{ "EStateTreePropertyCopyType::PromoteBoolToFloat", (int64)EStateTreePropertyCopyType::PromoteBoolToFloat },
		{ "EStateTreePropertyCopyType::PromoteBoolToDouble", (int64)EStateTreePropertyCopyType::PromoteBoolToDouble },
		{ "EStateTreePropertyCopyType::PromoteByteToInt32", (int64)EStateTreePropertyCopyType::PromoteByteToInt32 },
		{ "EStateTreePropertyCopyType::PromoteByteToUInt32", (int64)EStateTreePropertyCopyType::PromoteByteToUInt32 },
		{ "EStateTreePropertyCopyType::PromoteByteToInt64", (int64)EStateTreePropertyCopyType::PromoteByteToInt64 },
		{ "EStateTreePropertyCopyType::PromoteByteToFloat", (int64)EStateTreePropertyCopyType::PromoteByteToFloat },
		{ "EStateTreePropertyCopyType::PromoteByteToDouble", (int64)EStateTreePropertyCopyType::PromoteByteToDouble },
		{ "EStateTreePropertyCopyType::PromoteInt32ToInt64", (int64)EStateTreePropertyCopyType::PromoteInt32ToInt64 },
		{ "EStateTreePropertyCopyType::PromoteInt32ToFloat", (int64)EStateTreePropertyCopyType::PromoteInt32ToFloat },
		{ "EStateTreePropertyCopyType::PromoteInt32ToDouble", (int64)EStateTreePropertyCopyType::PromoteInt32ToDouble },
		{ "EStateTreePropertyCopyType::PromoteUInt32ToInt64", (int64)EStateTreePropertyCopyType::PromoteUInt32ToInt64 },
		{ "EStateTreePropertyCopyType::PromoteUInt32ToFloat", (int64)EStateTreePropertyCopyType::PromoteUInt32ToFloat },
		{ "EStateTreePropertyCopyType::PromoteUInt32ToDouble", (int64)EStateTreePropertyCopyType::PromoteUInt32ToDouble },
		{ "EStateTreePropertyCopyType::PromoteFloatToInt32", (int64)EStateTreePropertyCopyType::PromoteFloatToInt32 },
		{ "EStateTreePropertyCopyType::PromoteFloatToInt64", (int64)EStateTreePropertyCopyType::PromoteFloatToInt64 },
		{ "EStateTreePropertyCopyType::PromoteFloatToDouble", (int64)EStateTreePropertyCopyType::PromoteFloatToDouble },
		{ "EStateTreePropertyCopyType::DemoteDoubleToInt32", (int64)EStateTreePropertyCopyType::DemoteDoubleToInt32 },
		{ "EStateTreePropertyCopyType::DemoteDoubleToInt64", (int64)EStateTreePropertyCopyType::DemoteDoubleToInt64 },
		{ "EStateTreePropertyCopyType::DemoteDoubleToFloat", (int64)EStateTreePropertyCopyType::DemoteDoubleToFloat },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StateTreeModule_EStateTreePropertyCopyType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Describes how the copy should be performed.\n */" },
		{ "CopyBool.Comment", "// For more complex data types, we need to call the properties copy function\n" },
		{ "CopyBool.Name", "EStateTreePropertyCopyType::CopyBool" },
		{ "CopyBool.ToolTip", "For more complex data types, we need to call the properties copy function" },
		{ "CopyComplex.Comment", "// For plain old data types, we do a simple memcpy.\n" },
		{ "CopyComplex.Name", "EStateTreePropertyCopyType::CopyComplex" },
		{ "CopyComplex.ToolTip", "For plain old data types, we do a simple memcpy." },
		{ "CopyFixedArray.Comment", "// FName needs special case because its size changes between editor/compiler and runtime.\n" },
		{ "CopyFixedArray.Name", "EStateTreePropertyCopyType::CopyFixedArray" },
		{ "CopyFixedArray.ToolTip", "FName needs special case because its size changes between editor/compiler and runtime." },
		{ "CopyName.Comment", "// Read and write properties using object property helpers, as source/dest could be regular/weak/soft etc.\n" },
		{ "CopyName.Name", "EStateTreePropertyCopyType::CopyName" },
		{ "CopyName.ToolTip", "Read and write properties using object property helpers, as source/dest could be regular/weak/soft etc." },
		{ "CopyObject.Comment", "// Use struct copy operation, as this needs to correctly handle CPP struct ops\n" },
		{ "CopyObject.Name", "EStateTreePropertyCopyType::CopyObject" },
		{ "CopyObject.ToolTip", "Use struct copy operation, as this needs to correctly handle CPP struct ops" },
		{ "CopyPlain.Comment", "// No copying\n" },
		{ "CopyPlain.Name", "EStateTreePropertyCopyType::CopyPlain" },
		{ "CopyPlain.ToolTip", "No copying" },
		{ "CopyStruct.Comment", "// Read and write properties using bool property helpers, as source/dest could be bitfield or boolean\n" },
		{ "CopyStruct.Name", "EStateTreePropertyCopyType::CopyStruct" },
		{ "CopyStruct.ToolTip", "Read and write properties using bool property helpers, as source/dest could be bitfield or boolean" },
		{ "DemoteDoubleToFloat.Name", "EStateTreePropertyCopyType::DemoteDoubleToFloat" },
		{ "DemoteDoubleToInt32.Comment", "/* Double promotions */" },
		{ "DemoteDoubleToInt32.Name", "EStateTreePropertyCopyType::DemoteDoubleToInt32" },
		{ "DemoteDoubleToInt32.ToolTip", "Double promotions" },
		{ "DemoteDoubleToInt64.Name", "EStateTreePropertyCopyType::DemoteDoubleToInt64" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "None.Name", "EStateTreePropertyCopyType::None" },
		{ "PromoteBoolToByte.Comment", "/* Bool promotions */" },
		{ "PromoteBoolToByte.Name", "EStateTreePropertyCopyType::PromoteBoolToByte" },
		{ "PromoteBoolToByte.ToolTip", "Bool promotions" },
		{ "PromoteBoolToDouble.Name", "EStateTreePropertyCopyType::PromoteBoolToDouble" },
		{ "PromoteBoolToFloat.Name", "EStateTreePropertyCopyType::PromoteBoolToFloat" },
		{ "PromoteBoolToInt32.Name", "EStateTreePropertyCopyType::PromoteBoolToInt32" },
		{ "PromoteBoolToInt64.Name", "EStateTreePropertyCopyType::PromoteBoolToInt64" },
		{ "PromoteBoolToUInt32.Name", "EStateTreePropertyCopyType::PromoteBoolToUInt32" },
		{ "PromoteByteToDouble.Name", "EStateTreePropertyCopyType::PromoteByteToDouble" },
		{ "PromoteByteToFloat.Name", "EStateTreePropertyCopyType::PromoteByteToFloat" },
		{ "PromoteByteToInt32.Comment", "/* Byte promotions */" },
		{ "PromoteByteToInt32.Name", "EStateTreePropertyCopyType::PromoteByteToInt32" },
		{ "PromoteByteToInt32.ToolTip", "Byte promotions" },
		{ "PromoteByteToInt64.Name", "EStateTreePropertyCopyType::PromoteByteToInt64" },
		{ "PromoteByteToUInt32.Name", "EStateTreePropertyCopyType::PromoteByteToUInt32" },
		{ "PromoteFloatToDouble.Name", "EStateTreePropertyCopyType::PromoteFloatToDouble" },
		{ "PromoteFloatToInt32.Comment", "/* Float promotions */" },
		{ "PromoteFloatToInt32.Name", "EStateTreePropertyCopyType::PromoteFloatToInt32" },
		{ "PromoteFloatToInt32.ToolTip", "Float promotions" },
		{ "PromoteFloatToInt64.Name", "EStateTreePropertyCopyType::PromoteFloatToInt64" },
		{ "PromoteInt32ToDouble.Comment", "// This is strictly sketchy because of potential data loss, but it is usually OK in the general case\n" },
		{ "PromoteInt32ToDouble.Name", "EStateTreePropertyCopyType::PromoteInt32ToDouble" },
		{ "PromoteInt32ToDouble.ToolTip", "This is strictly sketchy because of potential data loss, but it is usually OK in the general case" },
		{ "PromoteInt32ToFloat.Name", "EStateTreePropertyCopyType::PromoteInt32ToFloat" },
		{ "PromoteInt32ToInt64.Comment", "/* Int32 promotions */" },
		{ "PromoteInt32ToInt64.Name", "EStateTreePropertyCopyType::PromoteInt32ToInt64" },
		{ "PromoteInt32ToInt64.ToolTip", "Int32 promotions" },
		{ "PromoteUInt32ToDouble.Comment", "// This is strictly sketchy because of potential data loss, but it is usually OK in the general case\n" },
		{ "PromoteUInt32ToDouble.Name", "EStateTreePropertyCopyType::PromoteUInt32ToDouble" },
		{ "PromoteUInt32ToDouble.ToolTip", "This is strictly sketchy because of potential data loss, but it is usually OK in the general case" },
		{ "PromoteUInt32ToFloat.Name", "EStateTreePropertyCopyType::PromoteUInt32ToFloat" },
		{ "PromoteUInt32ToInt64.Comment", "/* UInt32 promotions */" },
		{ "PromoteUInt32ToInt64.Name", "EStateTreePropertyCopyType::PromoteUInt32ToInt64" },
		{ "PromoteUInt32ToInt64.ToolTip", "UInt32 promotions" },
		{ "StructReference.Comment", "// Array needs special handling for fixed size TArrays\n" },
		{ "StructReference.Name", "EStateTreePropertyCopyType::StructReference" },
		{ "StructReference.ToolTip", "Array needs special handling for fixed size TArrays" },
		{ "ToolTip", "Describes how the copy should be performed." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreePropertyCopyType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		"EStateTreePropertyCopyType",
		"EStateTreePropertyCopyType",
		Z_Construct_UEnum_StateTreeModule_EStateTreePropertyCopyType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreePropertyCopyType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_StateTreeModule_EStateTreePropertyCopyType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreePropertyCopyType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreePropertyCopyType()
	{
		if (!Z_Registration_Info_UEnum_EStateTreePropertyCopyType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreePropertyCopyType.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreePropertyCopyType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStateTreePropertyCopyType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreePropertySegment;
class UScriptStruct* FStateTreePropertySegment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreePropertySegment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreePropertySegment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreePropertySegment, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreePropertySegment"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreePropertySegment.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreePropertySegment>()
{
	return FStateTreePropertySegment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrayIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ArrayIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NextIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Describes a segment of a property path (see FStateTreePropertyPath). Used for storage only.\n */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Describes a segment of a property path (see FStateTreePropertyPath). Used for storage only." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreePropertySegment>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/** Property name. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Property name." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreePropertySegment, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_ArrayIndex_MetaData[] = {
		{ "Comment", "/** Index in the array the property points at. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Index in the array the property points at." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_ArrayIndex = { "ArrayIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreePropertySegment, ArrayIndex), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_ArrayIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_ArrayIndex_MetaData)) }; // 1228038794
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_NextIndex_MetaData[] = {
		{ "Comment", "/** Index to next segment. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Index to next segment." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_NextIndex = { "NextIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreePropertySegment, NextIndex), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_NextIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_NextIndex_MetaData)) }; // 1228038794
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_Type_MetaData[] = {
		{ "Comment", "/** Type of access/indirection. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Type of access/indirection." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreePropertySegment, Type), Z_Construct_UEnum_StateTreeModule_EStateTreePropertyAccessType, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_Type_MetaData)) }; // 2388690852
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_ArrayIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_NextIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_Type,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreePropertySegment",
		sizeof(FStateTreePropertySegment),
		alignof(FStateTreePropertySegment),
		Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertySegment()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreePropertySegment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreePropertySegment.InnerSingleton, Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreePropertySegment.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreePropertyBinding;
class UScriptStruct* FStateTreePropertyBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreePropertyBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreePropertyBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreePropertyBinding, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreePropertyBinding"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreePropertyBinding.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreePropertyBinding>()
{
	return FStateTreePropertyBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourcePath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourcePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceStructIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceStructIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CopyType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CopyType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CopyType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Describes property binding, the property from source path is copied into the property at the target path.\n */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Describes property binding, the property from source path is copied into the property at the target path." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreePropertyBinding>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_SourcePath_MetaData[] = {
		{ "Comment", "/** Source property path. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Source property path." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_SourcePath = { "SourcePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreePropertyBinding, SourcePath), Z_Construct_UScriptStruct_FStateTreePropertySegment, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_SourcePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_SourcePath_MetaData)) }; // 127185106
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_TargetPath_MetaData[] = {
		{ "Comment", "/** Target property path. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Target property path." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_TargetPath = { "TargetPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreePropertyBinding, TargetPath), Z_Construct_UScriptStruct_FStateTreePropertySegment, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_TargetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_TargetPath_MetaData)) }; // 127185106
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_SourceStructIndex_MetaData[] = {
		{ "Comment", "/** Index to the source struct the source path refers to, sources are stored in FStateTreePropertyBindings. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Index to the source struct the source path refers to, sources are stored in FStateTreePropertyBindings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_SourceStructIndex = { "SourceStructIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreePropertyBinding, SourceStructIndex), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_SourceStructIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_SourceStructIndex_MetaData)) }; // 1228038794
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_CopyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_CopyType_MetaData[] = {
		{ "Comment", "/** The type of copy to use between the properties. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "The type of copy to use between the properties." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_CopyType = { "CopyType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreePropertyBinding, CopyType), Z_Construct_UEnum_StateTreeModule_EStateTreePropertyCopyType, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_CopyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_CopyType_MetaData)) }; // 1043251204
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_SourcePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_TargetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_SourceStructIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_CopyType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_CopyType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreePropertyBinding",
		sizeof(FStateTreePropertyBinding),
		alignof(FStateTreePropertyBinding),
		Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreePropertyBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreePropertyBinding.InnerSingleton, Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreePropertyBinding.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreePropertyIndirection;
class UScriptStruct* FStateTreePropertyIndirection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreePropertyIndirection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreePropertyIndirection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreePropertyIndirection, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreePropertyIndirection"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreePropertyIndirection.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreePropertyIndirection>()
{
	return FStateTreePropertyIndirection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrayIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ArrayIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NextIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Property indirection is a resolved property path segment, used for accessing properties in structs.\n */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Property indirection is a resolved property path segment, used for accessing properties in structs." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreePropertyIndirection>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_ArrayIndex_MetaData[] = {
		{ "Comment", "/** Index in the array the property points at. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Index in the array the property points at." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_ArrayIndex = { "ArrayIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreePropertyIndirection, ArrayIndex), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_ArrayIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_ArrayIndex_MetaData)) }; // 1228038794
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_Offset_MetaData[] = {
		{ "Comment", "/** Cached offset of the property */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Cached offset of the property" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreePropertyIndirection, Offset), METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_NextIndex_MetaData[] = {
		{ "Comment", "/** Cached offset of the property */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Cached offset of the property" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_NextIndex = { "NextIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreePropertyIndirection, NextIndex), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_NextIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_NextIndex_MetaData)) }; // 1228038794
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_Type_MetaData[] = {
		{ "Comment", "/** Type of access/indirection. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Type of access/indirection." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreePropertyIndirection, Type), Z_Construct_UEnum_StateTreeModule_EStateTreePropertyAccessType, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_Type_MetaData)) }; // 2388690852
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_ArrayIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_NextIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_Type,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreePropertyIndirection",
		sizeof(FStateTreePropertyIndirection),
		alignof(FStateTreePropertyIndirection),
		Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyIndirection()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreePropertyIndirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreePropertyIndirection.InnerSingleton, Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreePropertyIndirection.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreePropCopy;
class UScriptStruct* FStateTreePropCopy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreePropCopy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreePropCopy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreePropCopy, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreePropCopy"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreePropCopy.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreePropCopy>()
{
	return FStateTreePropCopy::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreePropCopy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceIndirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceIndirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetIndirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetIndirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CopySize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CopySize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceStructIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceStructIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropCopy_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Describes property copy, the property from source is copied into the property at the target.\n * Copy target struct is described in the property copy batch.\n */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Describes property copy, the property from source is copied into the property at the target.\nCopy target struct is described in the property copy batch." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreePropCopy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreePropCopy>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropCopy_Statics::NewProp_SourceIndirection_MetaData[] = {
		{ "Comment", "/** Source property access. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Source property access." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropCopy_Statics::NewProp_SourceIndirection = { "SourceIndirection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreePropCopy, SourceIndirection), Z_Construct_UScriptStruct_FStateTreePropertyIndirection, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreePropCopy_Statics::NewProp_SourceIndirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropCopy_Statics::NewProp_SourceIndirection_MetaData)) }; // 3642092453
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropCopy_Statics::NewProp_TargetIndirection_MetaData[] = {
		{ "Comment", "/** Target property access. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Target property access." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropCopy_Statics::NewProp_TargetIndirection = { "TargetIndirection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreePropCopy, TargetIndirection), Z_Construct_UScriptStruct_FStateTreePropertyIndirection, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreePropCopy_Statics::NewProp_TargetIndirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropCopy_Statics::NewProp_TargetIndirection_MetaData)) }; // 3642092453
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropCopy_Statics::NewProp_CopySize_MetaData[] = {
		{ "Comment", "/** Cached property element size * dim. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Cached property element size * dim." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStateTreePropCopy_Statics::NewProp_CopySize = { "CopySize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreePropCopy, CopySize), METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreePropCopy_Statics::NewProp_CopySize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropCopy_Statics::NewProp_CopySize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropCopy_Statics::NewProp_SourceStructIndex_MetaData[] = {
		{ "Comment", "/** Index to the struct the source path refers to, sources are stored in FStateTreePropertyBindings. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Index to the struct the source path refers to, sources are stored in FStateTreePropertyBindings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropCopy_Statics::NewProp_SourceStructIndex = { "SourceStructIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreePropCopy, SourceStructIndex), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreePropCopy_Statics::NewProp_SourceStructIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropCopy_Statics::NewProp_SourceStructIndex_MetaData)) }; // 1228038794
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreePropCopy_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropCopy_Statics::NewProp_Type_MetaData[] = {
		{ "Comment", "/** Type of the copy */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Type of the copy" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreePropCopy_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreePropCopy, Type), Z_Construct_UEnum_StateTreeModule_EStateTreePropertyCopyType, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreePropCopy_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropCopy_Statics::NewProp_Type_MetaData)) }; // 1043251204
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreePropCopy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropCopy_Statics::NewProp_SourceIndirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropCopy_Statics::NewProp_TargetIndirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropCopy_Statics::NewProp_CopySize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropCopy_Statics::NewProp_SourceStructIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropCopy_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropCopy_Statics::NewProp_Type,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreePropCopy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreePropCopy",
		sizeof(FStateTreePropCopy),
		alignof(FStateTreePropCopy),
		Z_Construct_UScriptStruct_FStateTreePropCopy_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropCopy_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreePropCopy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropCopy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropCopy()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreePropCopy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreePropCopy.InnerSingleton, Z_Construct_UScriptStruct_FStateTreePropCopy_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreePropCopy.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreePropCopyBatch;
class UScriptStruct* FStateTreePropCopyBatch::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreePropCopyBatch.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreePropCopyBatch.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreePropCopyBatch, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreePropCopyBatch"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreePropCopyBatch.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreePropCopyBatch>()
{
	return FStateTreePropCopyBatch::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreePropCopyBatch_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetStruct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingsBegin_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_BindingsBegin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingsEnd_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_BindingsEnd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropCopyBatch_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Describes a batch of property copies from many sources to one target struct.\n * Note: The batch is used to reference both bindings and copies (a binding turns into copy when resolved).\n */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Describes a batch of property copies from many sources to one target struct.\nNote: The batch is used to reference both bindings and copies (a binding turns into copy when resolved)." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreePropCopyBatch_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreePropCopyBatch>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropCopyBatch_Statics::NewProp_TargetStruct_MetaData[] = {
		{ "Comment", "/** Expected target struct */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Expected target struct" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropCopyBatch_Statics::NewProp_TargetStruct = { "TargetStruct", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreePropCopyBatch, TargetStruct), Z_Construct_UScriptStruct_FStateTreeBindableStructDesc, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreePropCopyBatch_Statics::NewProp_TargetStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropCopyBatch_Statics::NewProp_TargetStruct_MetaData)) }; // 2837895941
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropCopyBatch_Statics::NewProp_BindingsBegin_MetaData[] = {
		{ "Comment", "/** Index to first binding/copy. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Index to first binding/copy." },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FStateTreePropCopyBatch_Statics::NewProp_BindingsBegin = { "BindingsBegin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreePropCopyBatch, BindingsBegin), METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreePropCopyBatch_Statics::NewProp_BindingsBegin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropCopyBatch_Statics::NewProp_BindingsBegin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropCopyBatch_Statics::NewProp_BindingsEnd_MetaData[] = {
		{ "Comment", "/** Index to one past the last binding/copy. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Index to one past the last binding/copy." },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FStateTreePropCopyBatch_Statics::NewProp_BindingsEnd = { "BindingsEnd", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreePropCopyBatch, BindingsEnd), METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreePropCopyBatch_Statics::NewProp_BindingsEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropCopyBatch_Statics::NewProp_BindingsEnd_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreePropCopyBatch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropCopyBatch_Statics::NewProp_TargetStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropCopyBatch_Statics::NewProp_BindingsBegin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropCopyBatch_Statics::NewProp_BindingsEnd,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreePropCopyBatch_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreePropCopyBatch",
		sizeof(FStateTreePropCopyBatch),
		alignof(FStateTreePropCopyBatch),
		Z_Construct_UScriptStruct_FStateTreePropCopyBatch_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropCopyBatch_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreePropCopyBatch_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropCopyBatch_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropCopyBatch()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreePropCopyBatch.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreePropCopyBatch.InnerSingleton, Z_Construct_UScriptStruct_FStateTreePropCopyBatch_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreePropCopyBatch.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreePropertyBindings;
class UScriptStruct* FStateTreePropertyBindings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreePropertyBindings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreePropertyBindings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreePropertyBindings, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreePropertyBindings"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreePropertyBindings.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreePropertyBindings>()
{
	return FStateTreePropertyBindings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceStructs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceStructs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceStructs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CopyBatches_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CopyBatches_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CopyBatches;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyBindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyBindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyBindings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertySegments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertySegments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertySegments;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyCopies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyCopies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyCopies;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyIndirections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyIndirections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyIndirections;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Runtime storage and execution of property bindings.\n */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Runtime storage and execution of property bindings." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreePropertyBindings>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_SourceStructs_Inner = { "SourceStructs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FStateTreeBindableStructDesc, METADATA_PARAMS(nullptr, 0) }; // 2837895941
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_SourceStructs_MetaData[] = {
		{ "Comment", "/** Array of expected source structs. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Array of expected source structs." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_SourceStructs = { "SourceStructs", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreePropertyBindings, SourceStructs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_SourceStructs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_SourceStructs_MetaData)) }; // 2837895941
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_CopyBatches_Inner = { "CopyBatches", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FStateTreePropCopyBatch, METADATA_PARAMS(nullptr, 0) }; // 127340967
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_CopyBatches_MetaData[] = {
		{ "Comment", "/** Array of copy batches. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Array of copy batches." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_CopyBatches = { "CopyBatches", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreePropertyBindings, CopyBatches), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_CopyBatches_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_CopyBatches_MetaData)) }; // 127340967
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyBindings_Inner = { "PropertyBindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FStateTreePropertyBinding, METADATA_PARAMS(nullptr, 0) }; // 2420445320
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyBindings_MetaData[] = {
		{ "Comment", "/** Array of property bindings, resolved into arrays of copies before use. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Array of property bindings, resolved into arrays of copies before use." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyBindings = { "PropertyBindings", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreePropertyBindings, PropertyBindings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyBindings_MetaData)) }; // 2420445320
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertySegments_Inner = { "PropertySegments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FStateTreePropertySegment, METADATA_PARAMS(nullptr, 0) }; // 127185106
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertySegments_MetaData[] = {
		{ "Comment", "/** Array of property segments, indexed by property paths. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Array of property segments, indexed by property paths." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertySegments = { "PropertySegments", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreePropertyBindings, PropertySegments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertySegments_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertySegments_MetaData)) }; // 127185106
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyCopies_Inner = { "PropertyCopies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FStateTreePropCopy, METADATA_PARAMS(nullptr, 0) }; // 2873267493
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyCopies_MetaData[] = {
		{ "Comment", "/** Array of property copies */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Array of property copies" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyCopies = { "PropertyCopies", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreePropertyBindings, PropertyCopies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyCopies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyCopies_MetaData)) }; // 2873267493
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyIndirections_Inner = { "PropertyIndirections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FStateTreePropertyIndirection, METADATA_PARAMS(nullptr, 0) }; // 3642092453
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyIndirections_MetaData[] = {
		{ "Comment", "/** Array of property indirections, indexed by accesses*/" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Array of property indirections, indexed by accesses" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyIndirections = { "PropertyIndirections", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreePropertyBindings, PropertyIndirections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyIndirections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyIndirections_MetaData)) }; // 3642092453
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_SourceStructs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_SourceStructs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_CopyBatches_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_CopyBatches,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyBindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyBindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertySegments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertySegments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyCopies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyCopies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyIndirections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyIndirections,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreePropertyBindings",
		sizeof(FStateTreePropertyBindings),
		alignof(FStateTreePropertyBindings),
		Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyBindings()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreePropertyBindings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreePropertyBindings.InnerSingleton, Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreePropertyBindings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeEditorPropertyPath;
class UScriptStruct* FStateTreeEditorPropertyPath::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeEditorPropertyPath.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeEditorPropertyPath.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeEditorPropertyPath"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeEditorPropertyPath.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeEditorPropertyPath>()
{
	return FStateTreeEditorPropertyPath::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StructID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StructID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Path;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Editor representation of a property path in StateTree.\n * Note: This is defined here for IStateTreeBindingLookup.\n */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Editor representation of a property path in StateTree.\nNote: This is defined here for IStateTreeBindingLookup." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeEditorPropertyPath>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::NewProp_StructID_MetaData[] = {
		{ "Comment", "/** Handle of the struct this property path is relative to. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Handle of the struct this property path is relative to." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::NewProp_StructID = { "StructID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeEditorPropertyPath, StructID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::NewProp_StructID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::NewProp_StructID_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::NewProp_Path_Inner = { "Path", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::NewProp_Path_MetaData[] = {
		{ "Comment", "/** Property path segments */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Property path segments" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeEditorPropertyPath, Path), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::NewProp_Path_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::NewProp_StructID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::NewProp_Path_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::NewProp_Path,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreeEditorPropertyPath",
		sizeof(FStateTreeEditorPropertyPath),
		alignof(FStateTreeEditorPropertyPath),
		Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeEditorPropertyPath.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeEditorPropertyPath.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeEditorPropertyPath.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyBindings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyBindings_h_Statics::EnumInfo[] = {
		{ EStateTreeBindableStructSource_StaticEnum, TEXT("EStateTreeBindableStructSource"), &Z_Registration_Info_UEnum_EStateTreeBindableStructSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3608644956U) },
		{ EStateTreePropertyAccessType_StaticEnum, TEXT("EStateTreePropertyAccessType"), &Z_Registration_Info_UEnum_EStateTreePropertyAccessType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2388690852U) },
		{ EStateTreePropertyCopyType_StaticEnum, TEXT("EStateTreePropertyCopyType"), &Z_Registration_Info_UEnum_EStateTreePropertyCopyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1043251204U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyBindings_h_Statics::ScriptStructInfo[] = {
		{ FStateTreeBindableStructDesc::StaticStruct, Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewStructOps, TEXT("StateTreeBindableStructDesc"), &Z_Registration_Info_UScriptStruct_StateTreeBindableStructDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeBindableStructDesc), 2837895941U) },
		{ FStateTreePropertySegment::StaticStruct, Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewStructOps, TEXT("StateTreePropertySegment"), &Z_Registration_Info_UScriptStruct_StateTreePropertySegment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreePropertySegment), 127185106U) },
		{ FStateTreePropertyBinding::StaticStruct, Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewStructOps, TEXT("StateTreePropertyBinding"), &Z_Registration_Info_UScriptStruct_StateTreePropertyBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreePropertyBinding), 2420445320U) },
		{ FStateTreePropertyIndirection::StaticStruct, Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewStructOps, TEXT("StateTreePropertyIndirection"), &Z_Registration_Info_UScriptStruct_StateTreePropertyIndirection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreePropertyIndirection), 3642092453U) },
		{ FStateTreePropCopy::StaticStruct, Z_Construct_UScriptStruct_FStateTreePropCopy_Statics::NewStructOps, TEXT("StateTreePropCopy"), &Z_Registration_Info_UScriptStruct_StateTreePropCopy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreePropCopy), 2873267493U) },
		{ FStateTreePropCopyBatch::StaticStruct, Z_Construct_UScriptStruct_FStateTreePropCopyBatch_Statics::NewStructOps, TEXT("StateTreePropCopyBatch"), &Z_Registration_Info_UScriptStruct_StateTreePropCopyBatch, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreePropCopyBatch), 127340967U) },
		{ FStateTreePropertyBindings::StaticStruct, Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewStructOps, TEXT("StateTreePropertyBindings"), &Z_Registration_Info_UScriptStruct_StateTreePropertyBindings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreePropertyBindings), 257657452U) },
		{ FStateTreeEditorPropertyPath::StaticStruct, Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::NewStructOps, TEXT("StateTreeEditorPropertyPath"), &Z_Registration_Info_UScriptStruct_StateTreeEditorPropertyPath, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeEditorPropertyPath), 1476620735U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyBindings_h_445572587(TEXT("/Script/StateTreeModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyBindings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyBindings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyBindings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyBindings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
