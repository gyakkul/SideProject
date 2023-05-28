// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/PropertyAccess.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePropertyAccess() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UFunction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UStruct();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPropertyAccessCopyBatch();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPropertyAccessCopyType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPropertyAccessIndirectionType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPropertyAccessObjectType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyAccessCopy();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyAccessCopyBatch();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyAccessIndirection();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyAccessLibrary();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyAccessPath();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyAccessSegment();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPropertyAccessCopyBatch;
	static UEnum* EPropertyAccessCopyBatch_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPropertyAccessCopyBatch.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPropertyAccessCopyBatch.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EPropertyAccessCopyBatch, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EPropertyAccessCopyBatch"));
		}
		return Z_Registration_Info_UEnum_EPropertyAccessCopyBatch.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EPropertyAccessCopyBatch>()
	{
		return EPropertyAccessCopyBatch_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EPropertyAccessCopyBatch_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EPropertyAccessCopyBatch_Statics::Enumerators[] = {
		{ "EPropertyAccessCopyBatch::InternalUnbatched", (int64)EPropertyAccessCopyBatch::InternalUnbatched },
		{ "EPropertyAccessCopyBatch::ExternalUnbatched", (int64)EPropertyAccessCopyBatch::ExternalUnbatched },
		{ "EPropertyAccessCopyBatch::InternalBatched", (int64)EPropertyAccessCopyBatch::InternalBatched },
		{ "EPropertyAccessCopyBatch::ExternalBatched", (int64)EPropertyAccessCopyBatch::ExternalBatched },
		{ "EPropertyAccessCopyBatch::Count", (int64)EPropertyAccessCopyBatch::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EPropertyAccessCopyBatch_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// The various types of property copy\n" },
		{ "Count.Name", "EPropertyAccessCopyBatch::Count" },
		{ "ExternalBatched.Comment", "// A copy of external->internal data, batched\n" },
		{ "ExternalBatched.Name", "EPropertyAccessCopyBatch::ExternalBatched" },
		{ "ExternalBatched.ToolTip", "A copy of external->internal data, batched" },
		{ "ExternalUnbatched.Comment", "// A copy of external->internal data, unbatched\n" },
		{ "ExternalUnbatched.Name", "EPropertyAccessCopyBatch::ExternalUnbatched" },
		{ "ExternalUnbatched.ToolTip", "A copy of external->internal data, unbatched" },
		{ "InternalBatched.Comment", "// A copy of internal->internal data, batched\n" },
		{ "InternalBatched.Name", "EPropertyAccessCopyBatch::InternalBatched" },
		{ "InternalBatched.ToolTip", "A copy of internal->internal data, batched" },
		{ "InternalUnbatched.Comment", "// A copy of internal->internal data, unbatched\n" },
		{ "InternalUnbatched.Name", "EPropertyAccessCopyBatch::InternalUnbatched" },
		{ "InternalUnbatched.ToolTip", "A copy of internal->internal data, unbatched" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "The various types of property copy" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EPropertyAccessCopyBatch_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EPropertyAccessCopyBatch",
		"EPropertyAccessCopyBatch",
		Z_Construct_UEnum_Engine_EPropertyAccessCopyBatch_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPropertyAccessCopyBatch_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EPropertyAccessCopyBatch_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPropertyAccessCopyBatch_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EPropertyAccessCopyBatch()
	{
		if (!Z_Registration_Info_UEnum_EPropertyAccessCopyBatch.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPropertyAccessCopyBatch.InnerSingleton, Z_Construct_UEnum_Engine_EPropertyAccessCopyBatch_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPropertyAccessCopyBatch.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPropertyAccessIndirectionType;
	static UEnum* EPropertyAccessIndirectionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPropertyAccessIndirectionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPropertyAccessIndirectionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EPropertyAccessIndirectionType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EPropertyAccessIndirectionType"));
		}
		return Z_Registration_Info_UEnum_EPropertyAccessIndirectionType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EPropertyAccessIndirectionType>()
	{
		return EPropertyAccessIndirectionType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EPropertyAccessIndirectionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EPropertyAccessIndirectionType_Statics::Enumerators[] = {
		{ "EPropertyAccessIndirectionType::Offset", (int64)EPropertyAccessIndirectionType::Offset },
		{ "EPropertyAccessIndirectionType::Object", (int64)EPropertyAccessIndirectionType::Object },
		{ "EPropertyAccessIndirectionType::Array", (int64)EPropertyAccessIndirectionType::Array },
		{ "EPropertyAccessIndirectionType::ScriptFunction", (int64)EPropertyAccessIndirectionType::ScriptFunction },
		{ "EPropertyAccessIndirectionType::NativeFunction", (int64)EPropertyAccessIndirectionType::NativeFunction },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EPropertyAccessIndirectionType_Statics::Enum_MetaDataParams[] = {
		{ "Array.Comment", "// Access node indexes a dynamic array\n" },
		{ "Array.Name", "EPropertyAccessIndirectionType::Array" },
		{ "Array.ToolTip", "Access node indexes a dynamic array" },
		{ "Comment", "// The type of an indirection\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "NativeFunction.Comment", "// Access node calls a native function to get a value\n" },
		{ "NativeFunction.Name", "EPropertyAccessIndirectionType::NativeFunction" },
		{ "NativeFunction.ToolTip", "Access node calls a native function to get a value" },
		{ "Object.Comment", "// Access node needs to dereference an object at its current address\n" },
		{ "Object.Name", "EPropertyAccessIndirectionType::Object" },
		{ "Object.ToolTip", "Access node needs to dereference an object at its current address" },
		{ "Offset.Comment", "// Access node is a simple basePtr + offset\n" },
		{ "Offset.Name", "EPropertyAccessIndirectionType::Offset" },
		{ "Offset.ToolTip", "Access node is a simple basePtr + offset" },
		{ "ScriptFunction.Comment", "// Access node calls a script function to get a value\n" },
		{ "ScriptFunction.Name", "EPropertyAccessIndirectionType::ScriptFunction" },
		{ "ScriptFunction.ToolTip", "Access node calls a script function to get a value" },
		{ "ToolTip", "The type of an indirection" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EPropertyAccessIndirectionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EPropertyAccessIndirectionType",
		"EPropertyAccessIndirectionType",
		Z_Construct_UEnum_Engine_EPropertyAccessIndirectionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPropertyAccessIndirectionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EPropertyAccessIndirectionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPropertyAccessIndirectionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EPropertyAccessIndirectionType()
	{
		if (!Z_Registration_Info_UEnum_EPropertyAccessIndirectionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPropertyAccessIndirectionType.InnerSingleton, Z_Construct_UEnum_Engine_EPropertyAccessIndirectionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPropertyAccessIndirectionType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPropertyAccessObjectType;
	static UEnum* EPropertyAccessObjectType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPropertyAccessObjectType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPropertyAccessObjectType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EPropertyAccessObjectType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EPropertyAccessObjectType"));
		}
		return Z_Registration_Info_UEnum_EPropertyAccessObjectType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EPropertyAccessObjectType>()
	{
		return EPropertyAccessObjectType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EPropertyAccessObjectType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EPropertyAccessObjectType_Statics::Enumerators[] = {
		{ "EPropertyAccessObjectType::None", (int64)EPropertyAccessObjectType::None },
		{ "EPropertyAccessObjectType::Object", (int64)EPropertyAccessObjectType::Object },
		{ "EPropertyAccessObjectType::WeakObject", (int64)EPropertyAccessObjectType::WeakObject },
		{ "EPropertyAccessObjectType::SoftObject", (int64)EPropertyAccessObjectType::SoftObject },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EPropertyAccessObjectType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// For object nodes, we need to know what type of object we are looking at so we can cast appropriately\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "None.Comment", "// Access is not an object\n" },
		{ "None.Name", "EPropertyAccessObjectType::None" },
		{ "None.ToolTip", "Access is not an object" },
		{ "Object.Comment", "// Access is an object\n" },
		{ "Object.Name", "EPropertyAccessObjectType::Object" },
		{ "Object.ToolTip", "Access is an object" },
		{ "SoftObject.Comment", "// Access is a soft object\n" },
		{ "SoftObject.Name", "EPropertyAccessObjectType::SoftObject" },
		{ "SoftObject.ToolTip", "Access is a soft object" },
		{ "ToolTip", "For object nodes, we need to know what type of object we are looking at so we can cast appropriately" },
		{ "WeakObject.Comment", "// Access is a weak object\n" },
		{ "WeakObject.Name", "EPropertyAccessObjectType::WeakObject" },
		{ "WeakObject.ToolTip", "Access is a weak object" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EPropertyAccessObjectType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EPropertyAccessObjectType",
		"EPropertyAccessObjectType",
		Z_Construct_UEnum_Engine_EPropertyAccessObjectType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPropertyAccessObjectType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EPropertyAccessObjectType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPropertyAccessObjectType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EPropertyAccessObjectType()
	{
		if (!Z_Registration_Info_UEnum_EPropertyAccessObjectType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPropertyAccessObjectType.InnerSingleton, Z_Construct_UEnum_Engine_EPropertyAccessObjectType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPropertyAccessObjectType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PropertyAccessIndirection;
class UScriptStruct* FPropertyAccessIndirection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PropertyAccessIndirection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PropertyAccessIndirection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropertyAccessIndirection, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PropertyAccessIndirection"));
	}
	return Z_Registration_Info_UScriptStruct_PropertyAccessIndirection.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPropertyAccessIndirection>()
{
	return FPropertyAccessIndirection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Property_MetaData[];
#endif
		static const UECodeGen_Private::FFieldPathPropertyParams NewProp_Property;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Function;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnBufferSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnBufferSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnBufferAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnBufferAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrayIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ArrayIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Offset;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ObjectType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Runtime-generated access node.\n// Represents:\n// - An offset within an object \n// - An indirection to follow (object, array, function)\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "Runtime-generated access node.\nRepresents:\n- An offset within an object\n- An indirection to follow (object, array, function)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropertyAccessIndirection>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_Property_MetaData[] = {
		{ "Comment", "// Property of this indirection. Used for arrays and functions (holds the return value property for functions)\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "Property of this indirection. Used for arrays and functions (holds the return value property for functions)" },
	};
#endif
	const UECodeGen_Private::FFieldPathPropertyParams Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyAccessIndirection, Property), &FProperty::StaticClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_Property_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_Property_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_Function_MetaData[] = {
		{ "Comment", "// Function if this is a script of native function indirection\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "Function if this is a script of native function indirection" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyAccessIndirection, Function), Z_Construct_UClass_UFunction, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_Function_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_Function_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_ReturnBufferSize_MetaData[] = {
		{ "Comment", "// Return buffer size if this is a script of native function indirection\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "Return buffer size if this is a script of native function indirection" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_ReturnBufferSize = { "ReturnBufferSize", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyAccessIndirection, ReturnBufferSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_ReturnBufferSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_ReturnBufferSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_ReturnBufferAlignment_MetaData[] = {
		{ "Comment", "// Return buffer alignment if this is a script of native function indirection\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "Return buffer alignment if this is a script of native function indirection" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_ReturnBufferAlignment = { "ReturnBufferAlignment", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyAccessIndirection, ReturnBufferAlignment), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_ReturnBufferAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_ReturnBufferAlignment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_ArrayIndex_MetaData[] = {
		{ "Comment", "// Array index if this is an array indirection\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "Array index if this is an array indirection" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_ArrayIndex = { "ArrayIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyAccessIndirection, ArrayIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_ArrayIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_ArrayIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_Offset_MetaData[] = {
		{ "Comment", "// Offset of this indirection within its containing object\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "Offset of this indirection within its containing object" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyAccessIndirection, Offset), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_Offset_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_ObjectType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_ObjectType_MetaData[] = {
		{ "Comment", "// Object type if this is an object indirection\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "Object type if this is an object indirection" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_ObjectType = { "ObjectType", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyAccessIndirection, ObjectType), Z_Construct_UEnum_Engine_EPropertyAccessObjectType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_ObjectType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_ObjectType_MetaData)) }; // 430548676
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_Type_MetaData[] = {
		{ "Comment", "// The type of this indirection\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "The type of this indirection" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyAccessIndirection, Type), Z_Construct_UEnum_Engine_EPropertyAccessIndirectionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_Type_MetaData)) }; // 2072398783
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_Function,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_ReturnBufferSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_ReturnBufferAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_ArrayIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_ObjectType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_ObjectType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewProp_Type,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PropertyAccessIndirection",
		sizeof(FPropertyAccessIndirection),
		alignof(FPropertyAccessIndirection),
		Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPropertyAccessIndirection()
	{
		if (!Z_Registration_Info_UScriptStruct_PropertyAccessIndirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PropertyAccessIndirection.InnerSingleton, Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PropertyAccessIndirection.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PropertyAccessIndirectionChain;
class UScriptStruct* FPropertyAccessIndirectionChain::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PropertyAccessIndirectionChain.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PropertyAccessIndirectionChain.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PropertyAccessIndirectionChain"));
	}
	return Z_Registration_Info_UScriptStruct_PropertyAccessIndirectionChain.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPropertyAccessIndirectionChain>()
{
	return FPropertyAccessIndirectionChain::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Property_MetaData[];
#endif
		static const UECodeGen_Private::FFieldPathPropertyParams NewProp_Property;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndirectionStartIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IndirectionStartIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndirectionEndIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IndirectionEndIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// A single property access list. This is a list of FPropertyAccessIndirection\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "A single property access list. This is a list of FPropertyAccessIndirection" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropertyAccessIndirectionChain>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::NewProp_Property_MetaData[] = {
		{ "Comment", "// Leaf property\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "Leaf property" },
	};
#endif
	const UECodeGen_Private::FFieldPathPropertyParams Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyAccessIndirectionChain, Property), &FProperty::StaticClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::NewProp_Property_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::NewProp_Property_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::NewProp_IndirectionStartIndex_MetaData[] = {
		{ "Comment", "// Index of the first indirection of a property access\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "Index of the first indirection of a property access" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::NewProp_IndirectionStartIndex = { "IndirectionStartIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyAccessIndirectionChain, IndirectionStartIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::NewProp_IndirectionStartIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::NewProp_IndirectionStartIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::NewProp_IndirectionEndIndex_MetaData[] = {
		{ "Comment", "// Index of the last indirection of a property access\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "Index of the last indirection of a property access" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::NewProp_IndirectionEndIndex = { "IndirectionEndIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyAccessIndirectionChain, IndirectionEndIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::NewProp_IndirectionEndIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::NewProp_IndirectionEndIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::NewProp_Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::NewProp_IndirectionStartIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::NewProp_IndirectionEndIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PropertyAccessIndirectionChain",
		sizeof(FPropertyAccessIndirectionChain),
		alignof(FPropertyAccessIndirectionChain),
		Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain()
	{
		if (!Z_Registration_Info_UScriptStruct_PropertyAccessIndirectionChain.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PropertyAccessIndirectionChain.InnerSingleton, Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PropertyAccessIndirectionChain.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PropertyAccessSegment;
class UScriptStruct* FPropertyAccessSegment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PropertyAccessSegment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PropertyAccessSegment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropertyAccessSegment, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PropertyAccessSegment"));
	}
	return Z_Registration_Info_UScriptStruct_PropertyAccessSegment.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPropertyAccessSegment>()
{
	return FPropertyAccessSegment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Struct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Property_MetaData[];
#endif
		static const UECodeGen_Private::FFieldPathPropertyParams NewProp_Property;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Function;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrayIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ArrayIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_Flags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// A segment of a 'property path' used to access an object's properties from another location\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "A segment of a 'property path' used to access an object's properties from another location" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropertyAccessSegment>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/** The sub-component of the property path, a single value between .'s of the path */" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "The sub-component of the property path, a single value between .'s of the path" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyAccessSegment, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_Struct_MetaData[] = {
		{ "Comment", "/** The Class or ScriptStruct that was used last to resolve Name to a property. */" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "The Class or ScriptStruct that was used last to resolve Name to a property." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyAccessSegment, Struct), Z_Construct_UClass_UStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_Struct_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_Struct_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_Property_MetaData[] = {
		{ "Comment", "/** The cached property on the Struct that this Name resolved to at compile time. If this is a Function segment, then this is the return property of the function. */" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "The cached property on the Struct that this Name resolved to at compile time. If this is a Function segment, then this is the return property of the function." },
	};
#endif
	const UECodeGen_Private::FFieldPathPropertyParams Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyAccessSegment, Property), &FProperty::StaticClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_Property_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_Property_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_Function_MetaData[] = {
		{ "Comment", "/** If this segment is a function, EPropertyAccessSegmentFlags::Function flag will be present and this value will be valid */" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "If this segment is a function, EPropertyAccessSegmentFlags::Function flag will be present and this value will be valid" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyAccessSegment, Function), Z_Construct_UClass_UFunction, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_Function_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_Function_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_ArrayIndex_MetaData[] = {
		{ "Comment", "/** The optional array index. */" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "The optional array index." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_ArrayIndex = { "ArrayIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyAccessSegment, ArrayIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_ArrayIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_ArrayIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_Flags_MetaData[] = {
		{ "Comment", "/** @see EPropertyAccessSegmentFlags */" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "@see EPropertyAccessSegmentFlags" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyAccessSegment, Flags), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_Flags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_Flags_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_Struct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_Function,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_ArrayIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewProp_Flags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PropertyAccessSegment",
		sizeof(FPropertyAccessSegment),
		alignof(FPropertyAccessSegment),
		Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPropertyAccessSegment()
	{
		if (!Z_Registration_Info_UScriptStruct_PropertyAccessSegment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PropertyAccessSegment.InnerSingleton, Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PropertyAccessSegment.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PropertyAccessPath;
class UScriptStruct* FPropertyAccessPath::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PropertyAccessPath.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PropertyAccessPath.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropertyAccessPath, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PropertyAccessPath"));
	}
	return Z_Registration_Info_UScriptStruct_PropertyAccessPath.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPropertyAccessPath>()
{
	return FPropertyAccessPath::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPropertyAccessPath_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathSegmentStartIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PathSegmentStartIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathSegmentCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PathSegmentCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessPath_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// A property access path. References a string of property access segments.\n// These are resolved at load time to create corresponding FPropertyAccess entries\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "A property access path. References a string of property access segments.\nThese are resolved at load time to create corresponding FPropertyAccess entries" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPropertyAccessPath_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropertyAccessPath>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessPath_Statics::NewProp_PathSegmentStartIndex_MetaData[] = {
		{ "Comment", "// Index into the library's path segments. Used to provide a starting point for a path resolve\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "Index into the library's path segments. Used to provide a starting point for a path resolve" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPropertyAccessPath_Statics::NewProp_PathSegmentStartIndex = { "PathSegmentStartIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyAccessPath, PathSegmentStartIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessPath_Statics::NewProp_PathSegmentStartIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessPath_Statics::NewProp_PathSegmentStartIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessPath_Statics::NewProp_PathSegmentCount_MetaData[] = {
		{ "Comment", "// The count of the path segments.\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "The count of the path segments." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPropertyAccessPath_Statics::NewProp_PathSegmentCount = { "PathSegmentCount", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyAccessPath, PathSegmentCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessPath_Statics::NewProp_PathSegmentCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessPath_Statics::NewProp_PathSegmentCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPropertyAccessPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessPath_Statics::NewProp_PathSegmentStartIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessPath_Statics::NewProp_PathSegmentCount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertyAccessPath_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PropertyAccessPath",
		sizeof(FPropertyAccessPath),
		alignof(FPropertyAccessPath),
		Z_Construct_UScriptStruct_FPropertyAccessPath_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessPath_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessPath_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessPath_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPropertyAccessPath()
	{
		if (!Z_Registration_Info_UScriptStruct_PropertyAccessPath.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PropertyAccessPath.InnerSingleton, Z_Construct_UScriptStruct_FPropertyAccessPath_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PropertyAccessPath.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPropertyAccessCopyType;
	static UEnum* EPropertyAccessCopyType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPropertyAccessCopyType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPropertyAccessCopyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EPropertyAccessCopyType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EPropertyAccessCopyType"));
		}
		return Z_Registration_Info_UEnum_EPropertyAccessCopyType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EPropertyAccessCopyType>()
	{
		return EPropertyAccessCopyType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EPropertyAccessCopyType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EPropertyAccessCopyType_Statics::Enumerators[] = {
		{ "EPropertyAccessCopyType::None", (int64)EPropertyAccessCopyType::None },
		{ "EPropertyAccessCopyType::Plain", (int64)EPropertyAccessCopyType::Plain },
		{ "EPropertyAccessCopyType::Complex", (int64)EPropertyAccessCopyType::Complex },
		{ "EPropertyAccessCopyType::Bool", (int64)EPropertyAccessCopyType::Bool },
		{ "EPropertyAccessCopyType::Struct", (int64)EPropertyAccessCopyType::Struct },
		{ "EPropertyAccessCopyType::Object", (int64)EPropertyAccessCopyType::Object },
		{ "EPropertyAccessCopyType::Name", (int64)EPropertyAccessCopyType::Name },
		{ "EPropertyAccessCopyType::Array", (int64)EPropertyAccessCopyType::Array },
		{ "EPropertyAccessCopyType::PromoteBoolToByte", (int64)EPropertyAccessCopyType::PromoteBoolToByte },
		{ "EPropertyAccessCopyType::PromoteBoolToInt32", (int64)EPropertyAccessCopyType::PromoteBoolToInt32 },
		{ "EPropertyAccessCopyType::PromoteBoolToInt64", (int64)EPropertyAccessCopyType::PromoteBoolToInt64 },
		{ "EPropertyAccessCopyType::PromoteBoolToFloat", (int64)EPropertyAccessCopyType::PromoteBoolToFloat },
		{ "EPropertyAccessCopyType::PromoteBoolToDouble", (int64)EPropertyAccessCopyType::PromoteBoolToDouble },
		{ "EPropertyAccessCopyType::PromoteByteToInt32", (int64)EPropertyAccessCopyType::PromoteByteToInt32 },
		{ "EPropertyAccessCopyType::PromoteByteToInt64", (int64)EPropertyAccessCopyType::PromoteByteToInt64 },
		{ "EPropertyAccessCopyType::PromoteByteToFloat", (int64)EPropertyAccessCopyType::PromoteByteToFloat },
		{ "EPropertyAccessCopyType::PromoteByteToDouble", (int64)EPropertyAccessCopyType::PromoteByteToDouble },
		{ "EPropertyAccessCopyType::PromoteInt32ToInt64", (int64)EPropertyAccessCopyType::PromoteInt32ToInt64 },
		{ "EPropertyAccessCopyType::PromoteInt32ToFloat", (int64)EPropertyAccessCopyType::PromoteInt32ToFloat },
		{ "EPropertyAccessCopyType::PromoteInt32ToDouble", (int64)EPropertyAccessCopyType::PromoteInt32ToDouble },
		{ "EPropertyAccessCopyType::PromoteFloatToDouble", (int64)EPropertyAccessCopyType::PromoteFloatToDouble },
		{ "EPropertyAccessCopyType::DemoteDoubleToFloat", (int64)EPropertyAccessCopyType::DemoteDoubleToFloat },
		{ "EPropertyAccessCopyType::PromoteArrayFloatToDouble", (int64)EPropertyAccessCopyType::PromoteArrayFloatToDouble },
		{ "EPropertyAccessCopyType::DemoteArrayDoubleToFloat", (int64)EPropertyAccessCopyType::DemoteArrayDoubleToFloat },
		{ "EPropertyAccessCopyType::PromoteMapValueFloatToDouble", (int64)EPropertyAccessCopyType::PromoteMapValueFloatToDouble },
		{ "EPropertyAccessCopyType::DemoteMapValueDoubleToFloat", (int64)EPropertyAccessCopyType::DemoteMapValueDoubleToFloat },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EPropertyAccessCopyType_Statics::Enum_MetaDataParams[] = {
		{ "Array.Comment", "// Array needs special handling for fixed size arrays\n" },
		{ "Array.Name", "EPropertyAccessCopyType::Array" },
		{ "Array.ToolTip", "Array needs special handling for fixed size arrays" },
		{ "Bool.Comment", "// Read and write properties using bool property helpers, as source/dest could be bitfield or boolean\n" },
		{ "Bool.Name", "EPropertyAccessCopyType::Bool" },
		{ "Bool.ToolTip", "Read and write properties using bool property helpers, as source/dest could be bitfield or boolean" },
		{ "Complex.Comment", "// For more complex data types, we need to call the properties copy function\n" },
		{ "Complex.Name", "EPropertyAccessCopyType::Complex" },
		{ "Complex.ToolTip", "For more complex data types, we need to call the properties copy function" },
		{ "DemoteArrayDoubleToFloat.Name", "EPropertyAccessCopyType::DemoteArrayDoubleToFloat" },
		{ "DemoteDoubleToFloat.Name", "EPropertyAccessCopyType::DemoteDoubleToFloat" },
		{ "DemoteMapValueDoubleToFloat.Name", "EPropertyAccessCopyType::DemoteMapValueDoubleToFloat" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "Name.Comment", "// FName needs special case because its size changes between editor/compiler and runtime.\n" },
		{ "Name.Name", "EPropertyAccessCopyType::Name" },
		{ "Name.ToolTip", "FName needs special case because its size changes between editor/compiler and runtime." },
		{ "None.Comment", "// No copying\n" },
		{ "None.Name", "EPropertyAccessCopyType::None" },
		{ "None.ToolTip", "No copying" },
		{ "Object.Comment", "// Read and write properties using object property helpers, as source/dest could be regular/weak/soft etc.\n" },
		{ "Object.Name", "EPropertyAccessCopyType::Object" },
		{ "Object.ToolTip", "Read and write properties using object property helpers, as source/dest could be regular/weak/soft etc." },
		{ "Plain.Comment", "// For plain old data types, we do a simple memcpy.\n" },
		{ "Plain.Name", "EPropertyAccessCopyType::Plain" },
		{ "Plain.ToolTip", "For plain old data types, we do a simple memcpy." },
		{ "PromoteArrayFloatToDouble.Comment", "// LWC_TODO: This should not ship!\n" },
		{ "PromoteArrayFloatToDouble.Name", "EPropertyAccessCopyType::PromoteArrayFloatToDouble" },
		{ "PromoteArrayFloatToDouble.ToolTip", "LWC_TODO: This should not ship!" },
		{ "PromoteBoolToByte.Comment", "// Promote the type during the copy\n// Bool promotions\n" },
		{ "PromoteBoolToByte.Name", "EPropertyAccessCopyType::PromoteBoolToByte" },
		{ "PromoteBoolToByte.ToolTip", "Promote the type during the copy\nBool promotions" },
		{ "PromoteBoolToDouble.Name", "EPropertyAccessCopyType::PromoteBoolToDouble" },
		{ "PromoteBoolToFloat.Name", "EPropertyAccessCopyType::PromoteBoolToFloat" },
		{ "PromoteBoolToInt32.Name", "EPropertyAccessCopyType::PromoteBoolToInt32" },
		{ "PromoteBoolToInt64.Name", "EPropertyAccessCopyType::PromoteBoolToInt64" },
		{ "PromoteByteToDouble.Name", "EPropertyAccessCopyType::PromoteByteToDouble" },
		{ "PromoteByteToFloat.Name", "EPropertyAccessCopyType::PromoteByteToFloat" },
		{ "PromoteByteToInt32.Comment", "// Byte promotions\n" },
		{ "PromoteByteToInt32.Name", "EPropertyAccessCopyType::PromoteByteToInt32" },
		{ "PromoteByteToInt32.ToolTip", "Byte promotions" },
		{ "PromoteByteToInt64.Name", "EPropertyAccessCopyType::PromoteByteToInt64" },
		{ "PromoteFloatToDouble.Comment", "// Float promotions\x09\x09// LWC_TODO: Float/double should become synonyms?\n" },
		{ "PromoteFloatToDouble.Name", "EPropertyAccessCopyType::PromoteFloatToDouble" },
		{ "PromoteFloatToDouble.ToolTip", "Float promotions                LWC_TODO: Float/double should become synonyms?" },
		{ "PromoteInt32ToDouble.Comment", "// This is strictly sketchy because of potential data loss, but it is usually OK in the general case\n" },
		{ "PromoteInt32ToDouble.Name", "EPropertyAccessCopyType::PromoteInt32ToDouble" },
		{ "PromoteInt32ToDouble.ToolTip", "This is strictly sketchy because of potential data loss, but it is usually OK in the general case" },
		{ "PromoteInt32ToFloat.Name", "EPropertyAccessCopyType::PromoteInt32ToFloat" },
		{ "PromoteInt32ToInt64.Comment", "// Int32 promotions\n" },
		{ "PromoteInt32ToInt64.Name", "EPropertyAccessCopyType::PromoteInt32ToInt64" },
		{ "PromoteInt32ToInt64.ToolTip", "Int32 promotions" },
		{ "PromoteMapValueFloatToDouble.Name", "EPropertyAccessCopyType::PromoteMapValueFloatToDouble" },
		{ "Struct.Comment", "// Use struct copy operation, as this needs to correctly handle CPP struct ops\n" },
		{ "Struct.Name", "EPropertyAccessCopyType::Struct" },
		{ "Struct.ToolTip", "Use struct copy operation, as this needs to correctly handle CPP struct ops" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EPropertyAccessCopyType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EPropertyAccessCopyType",
		"EPropertyAccessCopyType",
		Z_Construct_UEnum_Engine_EPropertyAccessCopyType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPropertyAccessCopyType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EPropertyAccessCopyType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPropertyAccessCopyType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EPropertyAccessCopyType()
	{
		if (!Z_Registration_Info_UEnum_EPropertyAccessCopyType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPropertyAccessCopyType.InnerSingleton, Z_Construct_UEnum_Engine_EPropertyAccessCopyType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPropertyAccessCopyType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PropertyAccessCopy;
class UScriptStruct* FPropertyAccessCopy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PropertyAccessCopy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PropertyAccessCopy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropertyAccessCopy, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PropertyAccessCopy"));
	}
	return Z_Registration_Info_UScriptStruct_PropertyAccessCopy.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPropertyAccessCopy>()
{
	return FPropertyAccessCopy::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccessIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AccessIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestAccessStartIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DestAccessStartIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestAccessEndIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DestAccessEndIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// A property copy, represents a one-to-many copy operation\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "A property copy, represents a one-to-many copy operation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropertyAccessCopy>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::NewProp_AccessIndex_MetaData[] = {
		{ "Comment", "// Index into the library's Accesses\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "Index into the library's Accesses" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::NewProp_AccessIndex = { "AccessIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyAccessCopy, AccessIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::NewProp_AccessIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::NewProp_AccessIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::NewProp_DestAccessStartIndex_MetaData[] = {
		{ "Comment", "// Index of the first of the library's DescAccesses\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "Index of the first of the library's DescAccesses" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::NewProp_DestAccessStartIndex = { "DestAccessStartIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyAccessCopy, DestAccessStartIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::NewProp_DestAccessStartIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::NewProp_DestAccessStartIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::NewProp_DestAccessEndIndex_MetaData[] = {
		{ "Comment", "// Index of the last of the library's DescAccesses\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "Index of the last of the library's DescAccesses" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::NewProp_DestAccessEndIndex = { "DestAccessEndIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyAccessCopy, DestAccessEndIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::NewProp_DestAccessEndIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::NewProp_DestAccessEndIndex_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyAccessCopy, Type), Z_Construct_UEnum_Engine_EPropertyAccessCopyType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::NewProp_Type_MetaData)) }; // 3478275798
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::NewProp_AccessIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::NewProp_DestAccessStartIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::NewProp_DestAccessEndIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::NewProp_Type,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PropertyAccessCopy",
		sizeof(FPropertyAccessCopy),
		alignof(FPropertyAccessCopy),
		Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPropertyAccessCopy()
	{
		if (!Z_Registration_Info_UScriptStruct_PropertyAccessCopy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PropertyAccessCopy.InnerSingleton, Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PropertyAccessCopy.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PropertyAccessCopyBatch;
class UScriptStruct* FPropertyAccessCopyBatch::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PropertyAccessCopyBatch.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PropertyAccessCopyBatch.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropertyAccessCopyBatch, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PropertyAccessCopyBatch"));
	}
	return Z_Registration_Info_UScriptStruct_PropertyAccessCopyBatch.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPropertyAccessCopyBatch>()
{
	return FPropertyAccessCopyBatch::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPropertyAccessCopyBatch_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Copies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Copies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Copies;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessCopyBatch_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPropertyAccessCopyBatch_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropertyAccessCopyBatch>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPropertyAccessCopyBatch_Statics::NewProp_Copies_Inner = { "Copies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPropertyAccessCopy, METADATA_PARAMS(nullptr, 0) }; // 357092383
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessCopyBatch_Statics::NewProp_Copies_MetaData[] = {
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPropertyAccessCopyBatch_Statics::NewProp_Copies = { "Copies", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyAccessCopyBatch, Copies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessCopyBatch_Statics::NewProp_Copies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessCopyBatch_Statics::NewProp_Copies_MetaData)) }; // 357092383
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPropertyAccessCopyBatch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessCopyBatch_Statics::NewProp_Copies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessCopyBatch_Statics::NewProp_Copies,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertyAccessCopyBatch_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PropertyAccessCopyBatch",
		sizeof(FPropertyAccessCopyBatch),
		alignof(FPropertyAccessCopyBatch),
		Z_Construct_UScriptStruct_FPropertyAccessCopyBatch_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessCopyBatch_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessCopyBatch_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessCopyBatch_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPropertyAccessCopyBatch()
	{
		if (!Z_Registration_Info_UScriptStruct_PropertyAccessCopyBatch.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PropertyAccessCopyBatch.InnerSingleton, Z_Construct_UScriptStruct_FPropertyAccessCopyBatch_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PropertyAccessCopyBatch.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PropertyAccessLibrary;
class UScriptStruct* FPropertyAccessLibrary::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PropertyAccessLibrary.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PropertyAccessLibrary.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropertyAccessLibrary, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PropertyAccessLibrary"));
	}
	return Z_Registration_Info_UScriptStruct_PropertyAccessLibrary.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPropertyAccessLibrary>()
{
	return FPropertyAccessLibrary::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_PathSegments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathSegments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PathSegments;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SrcPaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SrcPaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SrcPaths;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DestPaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestPaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DestPaths;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CopyBatches_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CopyBatches;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_CopyBatchArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CopyBatchArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CopyBatchArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A library of property paths used within a specific context (e.g. a class) */" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "A library of property paths used within a specific context (e.g. a class)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropertyAccessLibrary>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_PathSegments_Inner = { "PathSegments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPropertyAccessSegment, METADATA_PARAMS(nullptr, 0) }; // 740805248
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_PathSegments_MetaData[] = {
		{ "Comment", "// All path segments in this library.\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "All path segments in this library." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_PathSegments = { "PathSegments", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyAccessLibrary, PathSegments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_PathSegments_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_PathSegments_MetaData)) }; // 740805248
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_SrcPaths_Inner = { "SrcPaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPropertyAccessPath, METADATA_PARAMS(nullptr, 0) }; // 3707312270
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_SrcPaths_MetaData[] = {
		{ "Comment", "// All source paths\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "All source paths" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_SrcPaths = { "SrcPaths", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyAccessLibrary, SrcPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_SrcPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_SrcPaths_MetaData)) }; // 3707312270
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_DestPaths_Inner = { "DestPaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPropertyAccessPath, METADATA_PARAMS(nullptr, 0) }; // 3707312270
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_DestPaths_MetaData[] = {
		{ "Comment", "// All destination paths\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "All destination paths" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_DestPaths = { "DestPaths", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyAccessLibrary, DestPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_DestPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_DestPaths_MetaData)) }; // 3707312270
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_CopyBatches_MetaData[] = {
		{ "ArraySizeEnum", "/Script/Engine.EPropertyAccessCopyBatch" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_CopyBatches = { "CopyBatches", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(CopyBatches_DEPRECATED, FPropertyAccessLibrary), nullptr, nullptr, STRUCT_OFFSET(FPropertyAccessLibrary, CopyBatches_DEPRECATED), Z_Construct_UScriptStruct_FPropertyAccessCopyBatch, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_CopyBatches_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_CopyBatches_MetaData)) }; // 2863717580
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_CopyBatchArray_Inner = { "CopyBatchArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPropertyAccessCopyBatch, METADATA_PARAMS(nullptr, 0) }; // 2863717580
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_CopyBatchArray_MetaData[] = {
		{ "Comment", "// All copy operations\n" },
		{ "ModuleRelativePath", "Public/PropertyAccess.h" },
		{ "ToolTip", "All copy operations" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_CopyBatchArray = { "CopyBatchArray", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyAccessLibrary, CopyBatchArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_CopyBatchArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_CopyBatchArray_MetaData)) }; // 2863717580
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_PathSegments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_PathSegments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_SrcPaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_SrcPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_DestPaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_DestPaths,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_CopyBatches,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_CopyBatchArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewProp_CopyBatchArray,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PropertyAccessLibrary",
		sizeof(FPropertyAccessLibrary),
		alignof(FPropertyAccessLibrary),
		Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPropertyAccessLibrary()
	{
		if (!Z_Registration_Info_UScriptStruct_PropertyAccessLibrary.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PropertyAccessLibrary.InnerSingleton, Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PropertyAccessLibrary.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PropertyAccess_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PropertyAccess_h_Statics::EnumInfo[] = {
		{ EPropertyAccessCopyBatch_StaticEnum, TEXT("EPropertyAccessCopyBatch"), &Z_Registration_Info_UEnum_EPropertyAccessCopyBatch, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2691780900U) },
		{ EPropertyAccessIndirectionType_StaticEnum, TEXT("EPropertyAccessIndirectionType"), &Z_Registration_Info_UEnum_EPropertyAccessIndirectionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2072398783U) },
		{ EPropertyAccessObjectType_StaticEnum, TEXT("EPropertyAccessObjectType"), &Z_Registration_Info_UEnum_EPropertyAccessObjectType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 430548676U) },
		{ EPropertyAccessCopyType_StaticEnum, TEXT("EPropertyAccessCopyType"), &Z_Registration_Info_UEnum_EPropertyAccessCopyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3478275798U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PropertyAccess_h_Statics::ScriptStructInfo[] = {
		{ FPropertyAccessIndirection::StaticStruct, Z_Construct_UScriptStruct_FPropertyAccessIndirection_Statics::NewStructOps, TEXT("PropertyAccessIndirection"), &Z_Registration_Info_UScriptStruct_PropertyAccessIndirection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPropertyAccessIndirection), 1231970985U) },
		{ FPropertyAccessIndirectionChain::StaticStruct, Z_Construct_UScriptStruct_FPropertyAccessIndirectionChain_Statics::NewStructOps, TEXT("PropertyAccessIndirectionChain"), &Z_Registration_Info_UScriptStruct_PropertyAccessIndirectionChain, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPropertyAccessIndirectionChain), 2906513397U) },
		{ FPropertyAccessSegment::StaticStruct, Z_Construct_UScriptStruct_FPropertyAccessSegment_Statics::NewStructOps, TEXT("PropertyAccessSegment"), &Z_Registration_Info_UScriptStruct_PropertyAccessSegment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPropertyAccessSegment), 740805248U) },
		{ FPropertyAccessPath::StaticStruct, Z_Construct_UScriptStruct_FPropertyAccessPath_Statics::NewStructOps, TEXT("PropertyAccessPath"), &Z_Registration_Info_UScriptStruct_PropertyAccessPath, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPropertyAccessPath), 3707312270U) },
		{ FPropertyAccessCopy::StaticStruct, Z_Construct_UScriptStruct_FPropertyAccessCopy_Statics::NewStructOps, TEXT("PropertyAccessCopy"), &Z_Registration_Info_UScriptStruct_PropertyAccessCopy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPropertyAccessCopy), 357092383U) },
		{ FPropertyAccessCopyBatch::StaticStruct, Z_Construct_UScriptStruct_FPropertyAccessCopyBatch_Statics::NewStructOps, TEXT("PropertyAccessCopyBatch"), &Z_Registration_Info_UScriptStruct_PropertyAccessCopyBatch, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPropertyAccessCopyBatch), 2863717580U) },
		{ FPropertyAccessLibrary::StaticStruct, Z_Construct_UScriptStruct_FPropertyAccessLibrary_Statics::NewStructOps, TEXT("PropertyAccessLibrary"), &Z_Registration_Info_UScriptStruct_PropertyAccessLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPropertyAccessLibrary), 512637008U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PropertyAccess_h_2436822549(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PropertyAccess_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PropertyAccess_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PropertyAccess_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PropertyAccess_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
