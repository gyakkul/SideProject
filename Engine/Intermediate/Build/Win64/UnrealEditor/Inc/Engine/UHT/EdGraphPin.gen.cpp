// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "../../Source/Runtime/Engine/Classes/EdGraph/EdGraphNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphPin() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphPin_Deprecated();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphPin_Deprecated_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlueprintPinStyleType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEdGraphPinDirection();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPinContainerType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinReference();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphTerminalType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleMemberReference();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimpleMemberReference;
class UScriptStruct* FSimpleMemberReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleMemberReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimpleMemberReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleMemberReference, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SimpleMemberReference"));
	}
	return Z_Registration_Info_UScriptStruct_SimpleMemberReference.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSimpleMemberReference>()
{
	return FSimpleMemberReference::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSimpleMemberReference_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MemberParent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MemberParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MemberName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MemberName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MemberGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MemberGuid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleMemberReference>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::NewProp_MemberParent_MetaData[] = {
		{ "Comment", "/** \n\x09 * Most often the Class that this member is defined in. Could be a UPackage \n\x09 * if it is a native delegate signature function (declared globally).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Most often the Class that this member is defined in. Could be a UPackage\nif it is a native delegate signature function (declared globally)." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::NewProp_MemberParent = { "MemberParent", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimpleMemberReference, MemberParent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::NewProp_MemberParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::NewProp_MemberParent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::NewProp_MemberName_MetaData[] = {
		{ "Comment", "/** Name of the member */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Name of the member" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::NewProp_MemberName = { "MemberName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimpleMemberReference, MemberName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::NewProp_MemberName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::NewProp_MemberName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::NewProp_MemberGuid_MetaData[] = {
		{ "Comment", "/** The Guid of the member */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "The Guid of the member" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::NewProp_MemberGuid = { "MemberGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimpleMemberReference, MemberGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::NewProp_MemberGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::NewProp_MemberGuid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::NewProp_MemberParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::NewProp_MemberName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::NewProp_MemberGuid,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SimpleMemberReference",
		sizeof(FSimpleMemberReference),
		alignof(FSimpleMemberReference),
		Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSimpleMemberReference()
	{
		if (!Z_Registration_Info_UScriptStruct_SimpleMemberReference.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimpleMemberReference.InnerSingleton, Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SimpleMemberReference.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EdGraphPinType;
class UScriptStruct* FEdGraphPinType::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EdGraphPinType.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EdGraphPinType.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphPinType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EdGraphPinType"));
	}
	return Z_Registration_Info_UScriptStruct_EdGraphPinType.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FEdGraphPinType>()
{
	return FEdGraphPinType::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEdGraphPinType_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinCategory_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PinCategory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinSubCategory_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PinSubCategory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinSubCategoryObject_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_PinSubCategoryObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinSubCategoryMemberReference_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PinSubCategoryMemberReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinValueType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PinValueType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ContainerType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContainerType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ContainerType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsArray_MetaData[];
#endif
		static void NewProp_bIsArray_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsReference_MetaData[];
#endif
		static void NewProp_bIsReference_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsConst_MetaData[];
#endif
		static void NewProp_bIsConst_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsConst;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsWeakPointer_MetaData[];
#endif
		static void NewProp_bIsWeakPointer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWeakPointer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsUObjectWrapper_MetaData[];
#endif
		static void NewProp_bIsUObjectWrapper_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUObjectWrapper;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSerializeAsSinglePrecisionFloat_MetaData[];
#endif
		static void NewProp_bSerializeAsSinglePrecisionFloat_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSerializeAsSinglePrecisionFloat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphPinType_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Struct used to define the type of information carried on this pin */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Struct used to define the type of information carried on this pin" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphPinType>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinCategory_MetaData[] = {
		{ "Comment", "/** Category of pin type */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Category of pin type" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinCategory = { "PinCategory", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEdGraphPinType, PinCategory), METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinCategory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinSubCategory_MetaData[] = {
		{ "Comment", "/** Sub-category of pin type */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Sub-category of pin type" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinSubCategory = { "PinSubCategory", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEdGraphPinType, PinSubCategory), METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinSubCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinSubCategory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinSubCategoryObject_MetaData[] = {
		{ "Comment", "/** Sub-category object */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Sub-category object" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinSubCategoryObject = { "PinSubCategoryObject", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEdGraphPinType, PinSubCategoryObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinSubCategoryObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinSubCategoryObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinSubCategoryMemberReference_MetaData[] = {
		{ "Comment", "/** Sub-category member reference */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Sub-category member reference" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinSubCategoryMemberReference = { "PinSubCategoryMemberReference", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEdGraphPinType, PinSubCategoryMemberReference), Z_Construct_UScriptStruct_FSimpleMemberReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinSubCategoryMemberReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinSubCategoryMemberReference_MetaData)) }; // 3400071855
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinValueType_MetaData[] = {
		{ "Comment", "/** Data used to determine value types when bIsMap is true */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Data used to determine value types when bIsMap is true" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinValueType = { "PinValueType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEdGraphPinType, PinValueType), Z_Construct_UScriptStruct_FEdGraphTerminalType, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinValueType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinValueType_MetaData)) }; // 1385680097
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_ContainerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_ContainerType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_ContainerType = { "ContainerType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEdGraphPinType, ContainerType), Z_Construct_UEnum_Engine_EPinContainerType, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_ContainerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_ContainerType_MetaData)) }; // 3522656534
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsArray_MetaData[] = {
		{ "Comment", "/** UE_DEPRECATED(4.17) Whether or not this pin represents an array of values */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "UE_DEPRECATED(4.17) Whether or not this pin represents an array of values" },
	};
#endif
	void Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsArray_SetBit(void* Obj)
	{
		((FEdGraphPinType*)Obj)->bIsArray_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsArray = { "bIsArray", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FEdGraphPinType), &Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsArray_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsArray_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsReference_MetaData[] = {
		{ "Comment", "/** Whether or not this pin is a value passed by reference or not */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Whether or not this pin is a value passed by reference or not" },
	};
#endif
	void Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsReference_SetBit(void* Obj)
	{
		((FEdGraphPinType*)Obj)->bIsReference = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsReference = { "bIsReference", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FEdGraphPinType), &Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsReference_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsReference_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsConst_MetaData[] = {
		{ "Comment", "/** Whether or not this pin is a immutable const value */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Whether or not this pin is a immutable const value" },
	};
#endif
	void Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsConst_SetBit(void* Obj)
	{
		((FEdGraphPinType*)Obj)->bIsConst = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsConst = { "bIsConst", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FEdGraphPinType), &Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsConst_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsConst_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsConst_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsWeakPointer_MetaData[] = {
		{ "Comment", "/** Whether or not this is a weak reference */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Whether or not this is a weak reference" },
	};
#endif
	void Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsWeakPointer_SetBit(void* Obj)
	{
		((FEdGraphPinType*)Obj)->bIsWeakPointer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsWeakPointer = { "bIsWeakPointer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FEdGraphPinType), &Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsWeakPointer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsWeakPointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsWeakPointer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsUObjectWrapper_MetaData[] = {
		{ "Comment", "/** Whether or not this is a \"wrapped\" Unreal object ptr type (e.g. TSubclassOf<T> instead of UClass*) */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Whether or not this is a \"wrapped\" Unreal object ptr type (e.g. TSubclassOf<T> instead of UClass*)" },
	};
#endif
	void Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsUObjectWrapper_SetBit(void* Obj)
	{
		((FEdGraphPinType*)Obj)->bIsUObjectWrapper = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsUObjectWrapper = { "bIsUObjectWrapper", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FEdGraphPinType), &Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsUObjectWrapper_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsUObjectWrapper_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsUObjectWrapper_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bSerializeAsSinglePrecisionFloat_MetaData[] = {
		{ "Comment", "/** Set to true if the type was serialized prior to BlueprintPinsUseRealNumbers */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Set to true if the type was serialized prior to BlueprintPinsUseRealNumbers" },
	};
#endif
	void Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bSerializeAsSinglePrecisionFloat_SetBit(void* Obj)
	{
		((FEdGraphPinType*)Obj)->bSerializeAsSinglePrecisionFloat = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bSerializeAsSinglePrecisionFloat = { "bSerializeAsSinglePrecisionFloat", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FEdGraphPinType), &Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bSerializeAsSinglePrecisionFloat_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bSerializeAsSinglePrecisionFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bSerializeAsSinglePrecisionFloat_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEdGraphPinType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinCategory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinSubCategory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinSubCategoryObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinSubCategoryMemberReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinValueType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_ContainerType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_ContainerType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsConst,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsWeakPointer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsUObjectWrapper,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bSerializeAsSinglePrecisionFloat,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphPinType_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"EdGraphPinType",
		sizeof(FEdGraphPinType),
		alignof(FEdGraphPinType),
		Z_Construct_UScriptStruct_FEdGraphPinType_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinType()
	{
		if (!Z_Registration_Info_UScriptStruct_EdGraphPinType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EdGraphPinType.InnerSingleton, Z_Construct_UScriptStruct_FEdGraphPinType_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EdGraphPinType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBlueprintPinStyleType;
	static UEnum* EBlueprintPinStyleType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBlueprintPinStyleType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBlueprintPinStyleType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBlueprintPinStyleType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EBlueprintPinStyleType"));
		}
		return Z_Registration_Info_UEnum_EBlueprintPinStyleType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EBlueprintPinStyleType>()
	{
		return EBlueprintPinStyleType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EBlueprintPinStyleType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EBlueprintPinStyleType_Statics::Enumerators[] = {
		{ "BPST_Original", (int64)BPST_Original },
		{ "BPST_VariantA", (int64)BPST_VariantA },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EBlueprintPinStyleType_Statics::Enum_MetaDataParams[] = {
		{ "BPST_Original.DisplayName", "Circles, Grid, Diamond" },
		{ "BPST_Original.Name", "BPST_Original" },
		{ "BPST_VariantA.DisplayName", "Directional Circles" },
		{ "BPST_VariantA.Name", "BPST_VariantA" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EBlueprintPinStyleType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EBlueprintPinStyleType",
		"EBlueprintPinStyleType",
		Z_Construct_UEnum_Engine_EBlueprintPinStyleType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBlueprintPinStyleType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EBlueprintPinStyleType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBlueprintPinStyleType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EBlueprintPinStyleType()
	{
		if (!Z_Registration_Info_UEnum_EBlueprintPinStyleType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBlueprintPinStyleType.InnerSingleton, Z_Construct_UEnum_Engine_EBlueprintPinStyleType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBlueprintPinStyleType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EdGraphPinReference;
class UScriptStruct* FEdGraphPinReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EdGraphPinReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EdGraphPinReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphPinReference, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EdGraphPinReference"));
	}
	return Z_Registration_Info_UScriptStruct_EdGraphPinReference.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FEdGraphPinReference>()
{
	return FEdGraphPinReference::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEdGraphPinReference_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningNode_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_OwningNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PinId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphPinReference>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::NewProp_OwningNode_MetaData[] = {
		{ "Comment", "/** The node that owns the pin referred to by this struct. Updated at Set and Save time. */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "The node that owns the pin referred to by this struct. Updated at Set and Save time." },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::NewProp_OwningNode = { "OwningNode", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEdGraphPinReference, OwningNode), Z_Construct_UClass_UEdGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::NewProp_OwningNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::NewProp_OwningNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::NewProp_PinId_MetaData[] = {
		{ "Comment", "/** The pin's unique ID. Updated at Set and Save time. */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "The pin's unique ID. Updated at Set and Save time." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::NewProp_PinId = { "PinId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEdGraphPinReference, PinId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::NewProp_PinId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::NewProp_PinId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::NewProp_OwningNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::NewProp_PinId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"EdGraphPinReference",
		sizeof(FEdGraphPinReference),
		alignof(FEdGraphPinReference),
		Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinReference()
	{
		if (!Z_Registration_Info_UScriptStruct_EdGraphPinReference.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EdGraphPinReference.InnerSingleton, Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EdGraphPinReference.InnerSingleton;
	}
	void UEdGraphPin_Deprecated::StaticRegisterNativesUEdGraphPin_Deprecated()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdGraphPin_Deprecated);
	UClass* Z_Construct_UClass_UEdGraphPin_Deprecated_NoRegister()
	{
		return UEdGraphPin_Deprecated::StaticClass();
	}
	struct Z_Construct_UClass_UEdGraphPin_Deprecated_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PinName;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinFriendlyName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_PinFriendlyName;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinToolTip_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PinToolTip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PinType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutogeneratedDefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AutogeneratedDefaultValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTextValue_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DefaultTextValue;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LinkedTo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkedTo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LinkedTo;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SubPins_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubPins_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SubPins;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentPin_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParentPin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencePassThroughConnection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReferencePassThroughConnection;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHidden_MetaData[];
#endif
		static void NewProp_bHidden_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHidden;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNotConnectable_MetaData[];
#endif
		static void NewProp_bNotConnectable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotConnectable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultValueIsReadOnly_MetaData[];
#endif
		static void NewProp_bDefaultValueIsReadOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultValueIsReadOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultValueIsIgnored_MetaData[];
#endif
		static void NewProp_bDefaultValueIsIgnored_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultValueIsIgnored;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAdvancedView_MetaData[];
#endif
		static void NewProp_bAdvancedView_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdvancedView;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayAsMutableRef_MetaData[];
#endif
		static void NewProp_bDisplayAsMutableRef_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayAsMutableRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PersistentGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PersistentGuid;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EdGraph/EdGraphPin.h" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PinName_MetaData[] = {
		{ "Comment", "/** Name of this pin */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Name of this pin" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PinName = { "PinName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEdGraphPin_Deprecated, PinName), METADATA_PARAMS(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PinName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PinName_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PinFriendlyName_MetaData[] = {
		{ "Comment", "/** Used as the display name if set */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Used as the display name if set" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PinFriendlyName = { "PinFriendlyName", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEdGraphPin_Deprecated, PinFriendlyName), METADATA_PARAMS(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PinFriendlyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PinFriendlyName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PinToolTip_MetaData[] = {
		{ "Comment", "/** The tool-tip describing this pin's purpose */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "The tool-tip describing this pin's purpose" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PinToolTip = { "PinToolTip", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEdGraphPin_Deprecated, PinToolTip), METADATA_PARAMS(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PinToolTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PinToolTip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_Direction_MetaData[] = {
		{ "Comment", "/** Direction of flow of this pin (input or output) */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Direction of flow of this pin (input or output)" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEdGraphPin_Deprecated, Direction), Z_Construct_UEnum_Engine_EEdGraphPinDirection, METADATA_PARAMS(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_Direction_MetaData)) }; // 1668123198
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PinType_MetaData[] = {
		{ "Comment", "/** The type of information carried on this pin */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "The type of information carried on this pin" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PinType = { "PinType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEdGraphPin_Deprecated, PinType), Z_Construct_UScriptStruct_FEdGraphPinType, METADATA_PARAMS(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PinType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PinType_MetaData)) }; // 3943443458
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Comment", "/** Default value for this pin (used if the pin has no connections), stored as a string */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Default value for this pin (used if the pin has no connections), stored as a string" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEdGraphPin_Deprecated, DefaultValue), METADATA_PARAMS(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_DefaultValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_AutogeneratedDefaultValue_MetaData[] = {
		{ "Comment", "/** Initial default value (the autogenerated value, to identify if the user has modified the value), stored as a string */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Initial default value (the autogenerated value, to identify if the user has modified the value), stored as a string" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_AutogeneratedDefaultValue = { "AutogeneratedDefaultValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEdGraphPin_Deprecated, AutogeneratedDefaultValue), METADATA_PARAMS(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_AutogeneratedDefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_AutogeneratedDefaultValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_DefaultObject_MetaData[] = {
		{ "Comment", "/** If the default value for this pin should be an object, we store a pointer to it */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "If the default value for this pin should be an object, we store a pointer to it" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_DefaultObject = { "DefaultObject", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEdGraphPin_Deprecated, DefaultObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_DefaultObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_DefaultObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_DefaultTextValue_MetaData[] = {
		{ "Comment", "/** If the default value for this pin should be an FText, it is stored here. */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "If the default value for this pin should be an FText, it is stored here." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_DefaultTextValue = { "DefaultTextValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEdGraphPin_Deprecated, DefaultTextValue), METADATA_PARAMS(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_DefaultTextValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_DefaultTextValue_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_LinkedTo_Inner = { "LinkedTo", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UEdGraphPin_Deprecated_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_LinkedTo_MetaData[] = {
		{ "Comment", "/** Set of pins that we are linked to */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Set of pins that we are linked to" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_LinkedTo = { "LinkedTo", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEdGraphPin_Deprecated, LinkedTo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_LinkedTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_LinkedTo_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_SubPins_Inner = { "SubPins", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UEdGraphPin_Deprecated_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_SubPins_MetaData[] = {
		{ "Comment", "/** The pins created when a pin is split and hidden */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "The pins created when a pin is split and hidden" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_SubPins = { "SubPins", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEdGraphPin_Deprecated, SubPins), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_SubPins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_SubPins_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_ParentPin_MetaData[] = {
		{ "Comment", "/** The pin that was split and generated this pin */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "The pin that was split and generated this pin" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_ParentPin = { "ParentPin", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEdGraphPin_Deprecated, ParentPin), Z_Construct_UClass_UEdGraphPin_Deprecated_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_ParentPin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_ParentPin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_ReferencePassThroughConnection_MetaData[] = {
		{ "Comment", "/** Pin that this pin uses for passing through reference connection */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Pin that this pin uses for passing through reference connection" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_ReferencePassThroughConnection = { "ReferencePassThroughConnection", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEdGraphPin_Deprecated, ReferencePassThroughConnection), Z_Construct_UClass_UEdGraphPin_Deprecated_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_ReferencePassThroughConnection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_ReferencePassThroughConnection_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bHidden_MetaData[] = {
		{ "Comment", "/** If true, this connector is currently hidden. */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "If true, this connector is currently hidden." },
	};
#endif
	void Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bHidden_SetBit(void* Obj)
	{
		((UEdGraphPin_Deprecated*)Obj)->bHidden = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bHidden = { "bHidden", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEdGraphPin_Deprecated), &Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bHidden_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bHidden_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bHidden_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bNotConnectable_MetaData[] = {
		{ "Comment", "/** If true, this connector is unconnectable, and present only to allow the editing of the default text. */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "If true, this connector is unconnectable, and present only to allow the editing of the default text." },
	};
#endif
	void Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bNotConnectable_SetBit(void* Obj)
	{
		((UEdGraphPin_Deprecated*)Obj)->bNotConnectable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bNotConnectable = { "bNotConnectable", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEdGraphPin_Deprecated), &Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bNotConnectable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bNotConnectable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bNotConnectable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDefaultValueIsReadOnly_MetaData[] = {
		{ "Comment", "/** If true, the default value of this connector is fixed and cannot be modified by the user (it's visible for reference only) */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "If true, the default value of this connector is fixed and cannot be modified by the user (it's visible for reference only)" },
	};
#endif
	void Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDefaultValueIsReadOnly_SetBit(void* Obj)
	{
		((UEdGraphPin_Deprecated*)Obj)->bDefaultValueIsReadOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDefaultValueIsReadOnly = { "bDefaultValueIsReadOnly", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEdGraphPin_Deprecated), &Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDefaultValueIsReadOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDefaultValueIsReadOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDefaultValueIsReadOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDefaultValueIsIgnored_MetaData[] = {
		{ "Comment", "/** If true, the default value on this pin is ignored and should not be set */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "If true, the default value on this pin is ignored and should not be set" },
	};
#endif
	void Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDefaultValueIsIgnored_SetBit(void* Obj)
	{
		((UEdGraphPin_Deprecated*)Obj)->bDefaultValueIsIgnored = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDefaultValueIsIgnored = { "bDefaultValueIsIgnored", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEdGraphPin_Deprecated), &Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDefaultValueIsIgnored_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDefaultValueIsIgnored_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDefaultValueIsIgnored_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bAdvancedView_MetaData[] = {
		{ "Comment", "/** If true, the pin may be hidden by user */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "If true, the pin may be hidden by user" },
	};
#endif
	void Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bAdvancedView_SetBit(void* Obj)
	{
		((UEdGraphPin_Deprecated*)Obj)->bAdvancedView = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bAdvancedView = { "bAdvancedView", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEdGraphPin_Deprecated), &Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bAdvancedView_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bAdvancedView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bAdvancedView_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDisplayAsMutableRef_MetaData[] = {
		{ "Comment", "/** If true, the pin is displayed as ref */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "If true, the pin is displayed as ref" },
	};
#endif
	void Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDisplayAsMutableRef_SetBit(void* Obj)
	{
		((UEdGraphPin_Deprecated*)Obj)->bDisplayAsMutableRef = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDisplayAsMutableRef = { "bDisplayAsMutableRef", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEdGraphPin_Deprecated), &Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDisplayAsMutableRef_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDisplayAsMutableRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDisplayAsMutableRef_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PersistentGuid_MetaData[] = {
		{ "Comment", "/** Pin name could be changed, so whenever possible it's good to have a persistent GUID identifying Pin to reconstruct Node seamlessly */" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Pin name could be changed, so whenever possible it's good to have a persistent GUID identifying Pin to reconstruct Node seamlessly" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PersistentGuid = { "PersistentGuid", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEdGraphPin_Deprecated, PersistentGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PersistentGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PersistentGuid_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PinName,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PinFriendlyName,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PinToolTip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PinType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_AutogeneratedDefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_DefaultObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_DefaultTextValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_LinkedTo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_LinkedTo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_SubPins_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_SubPins,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_ParentPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_ReferencePassThroughConnection,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bHidden,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bNotConnectable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDefaultValueIsReadOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDefaultValueIsIgnored,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bAdvancedView,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDisplayAsMutableRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PersistentGuid,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraphPin_Deprecated>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::ClassParams = {
		&UEdGraphPin_Deprecated::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEdGraphPin_Deprecated()
	{
		if (!Z_Registration_Info_UClass_UEdGraphPin_Deprecated.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdGraphPin_Deprecated.OuterSingleton, Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEdGraphPin_Deprecated.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UEdGraphPin_Deprecated>()
	{
		return UEdGraphPin_Deprecated::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphPin_Deprecated);
	UEdGraphPin_Deprecated::~UEdGraphPin_Deprecated() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_Statics::EnumInfo[] = {
		{ EBlueprintPinStyleType_StaticEnum, TEXT("EBlueprintPinStyleType"), &Z_Registration_Info_UEnum_EBlueprintPinStyleType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3539252107U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_Statics::ScriptStructInfo[] = {
		{ FSimpleMemberReference::StaticStruct, Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::NewStructOps, TEXT("SimpleMemberReference"), &Z_Registration_Info_UScriptStruct_SimpleMemberReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimpleMemberReference), 3400071855U) },
		{ FEdGraphPinType::StaticStruct, Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewStructOps, TEXT("EdGraphPinType"), &Z_Registration_Info_UScriptStruct_EdGraphPinType, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEdGraphPinType), 3943443458U) },
		{ FEdGraphPinReference::StaticStruct, Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::NewStructOps, TEXT("EdGraphPinReference"), &Z_Registration_Info_UScriptStruct_EdGraphPinReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEdGraphPinReference), 1910659421U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEdGraphPin_Deprecated, UEdGraphPin_Deprecated::StaticClass, TEXT("UEdGraphPin_Deprecated"), &Z_Registration_Info_UClass_UEdGraphPin_Deprecated, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdGraphPin_Deprecated), 2567134497U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_1535191280(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
