// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DataInterfaces/OptimusDataInterfaceAnimAttribute.h"
#include "OptimusDataType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusDataInterfaceAnimAttribute() {}
// Cross Module References
	COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataProvider();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusAnimAttributeDataInterface();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusAnimAttributeDataInterface_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusAnimAttributeDataProvider();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusAnimAttributeDataProvider_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeDataInterface();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusValueContainer_NoRegister();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusAnimAttributeArray();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusDataTypeRef();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusAnimAttributeDescription;
class UScriptStruct* FOptimusAnimAttributeDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusAnimAttributeDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusAnimAttributeDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusAnimAttributeDescription"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusAnimAttributeDescription.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusAnimAttributeDescription>()
{
	return FOptimusAnimAttributeDescription::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HlslId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HlslId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PinName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceAnimAttribute.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusAnimAttributeDescription>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Data Interface" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceAnimAttribute.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusAnimAttributeDescription, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "Data Interface" },
		{ "Comment", "// Used to look for attributes associated with a specific bone. Default to use the root bone\n" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceAnimAttribute.h" },
		{ "ToolTip", "Used to look for attributes associated with a specific bone. Default to use the root bone" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusAnimAttributeDescription, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::NewProp_DataType_MetaData[] = {
		{ "Category", "Data Interface" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceAnimAttribute.h" },
		{ "UseInAnimAttribute", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusAnimAttributeDescription, DataType), Z_Construct_UScriptStruct_FOptimusDataTypeRef, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::NewProp_DataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::NewProp_DataType_MetaData)) }; // 2733180919
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Data Interface" },
		{ "EditInLine", "" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceAnimAttribute.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusAnimAttributeDescription, DefaultValue), Z_Construct_UClass_UOptimusValueContainer_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::NewProp_DefaultValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::NewProp_HlslId_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceAnimAttribute.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::NewProp_HlslId = { "HlslId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusAnimAttributeDescription, HlslId), METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::NewProp_HlslId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::NewProp_HlslId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::NewProp_PinName_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceAnimAttribute.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::NewProp_PinName = { "PinName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusAnimAttributeDescription, PinName), METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::NewProp_PinName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::NewProp_PinName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::NewProp_DataType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::NewProp_HlslId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::NewProp_PinName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		nullptr,
		&NewStructOps,
		"OptimusAnimAttributeDescription",
		sizeof(FOptimusAnimAttributeDescription),
		alignof(FOptimusAnimAttributeDescription),
		Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusAnimAttributeDescription.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusAnimAttributeDescription.InnerSingleton, Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusAnimAttributeDescription.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusAnimAttributeArray;
class UScriptStruct* FOptimusAnimAttributeArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusAnimAttributeArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusAnimAttributeArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusAnimAttributeArray, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusAnimAttributeArray"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusAnimAttributeArray.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusAnimAttributeArray>()
{
	return FOptimusAnimAttributeArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusAnimAttributeArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_InnerArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InnerArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InnerArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusAnimAttributeArray_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceAnimAttribute.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusAnimAttributeArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusAnimAttributeArray>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOptimusAnimAttributeArray_Statics::NewProp_InnerArray_Inner = { "InnerArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription, METADATA_PARAMS(nullptr, 0) }; // 1641306366
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusAnimAttributeArray_Statics::NewProp_InnerArray_MetaData[] = {
		{ "Category", "Data Interface" },
		{ "DisplayName", "Animation Attributes" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceAnimAttribute.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOptimusAnimAttributeArray_Statics::NewProp_InnerArray = { "InnerArray", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusAnimAttributeArray, InnerArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusAnimAttributeArray_Statics::NewProp_InnerArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusAnimAttributeArray_Statics::NewProp_InnerArray_MetaData)) }; // 1641306366
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusAnimAttributeArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusAnimAttributeArray_Statics::NewProp_InnerArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusAnimAttributeArray_Statics::NewProp_InnerArray,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusAnimAttributeArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		nullptr,
		&NewStructOps,
		"OptimusAnimAttributeArray",
		sizeof(FOptimusAnimAttributeArray),
		alignof(FOptimusAnimAttributeArray),
		Z_Construct_UScriptStruct_FOptimusAnimAttributeArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusAnimAttributeArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusAnimAttributeArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusAnimAttributeArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusAnimAttributeArray()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusAnimAttributeArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusAnimAttributeArray.InnerSingleton, Z_Construct_UScriptStruct_FOptimusAnimAttributeArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusAnimAttributeArray.InnerSingleton;
	}
	void UOptimusAnimAttributeDataInterface::StaticRegisterNativesUOptimusAnimAttributeDataInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusAnimAttributeDataInterface);
	UClass* Z_Construct_UClass_UOptimusAnimAttributeDataInterface_NoRegister()
	{
		return UOptimusAnimAttributeDataInterface::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusAnimAttributeDataInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeArray_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusAnimAttributeDataInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOptimusComputeDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusAnimAttributeDataInterface_Statics::Class_MetaDataParams[] = {
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Interface for reading animation attributes on skeletal mesh. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceAnimAttribute.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceAnimAttribute.h" },
		{ "ToolTip", "Compute Framework Data Interface for reading animation attributes on skeletal mesh." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusAnimAttributeDataInterface_Statics::NewProp_AttributeArray_MetaData[] = {
		{ "Category", "Animation Attribute" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceAnimAttribute.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusAnimAttributeDataInterface_Statics::NewProp_AttributeArray = { "AttributeArray", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusAnimAttributeDataInterface, AttributeArray), Z_Construct_UScriptStruct_FOptimusAnimAttributeArray, METADATA_PARAMS(Z_Construct_UClass_UOptimusAnimAttributeDataInterface_Statics::NewProp_AttributeArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusAnimAttributeDataInterface_Statics::NewProp_AttributeArray_MetaData)) }; // 1376940406
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusAnimAttributeDataInterface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusAnimAttributeDataInterface_Statics::NewProp_AttributeArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusAnimAttributeDataInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusAnimAttributeDataInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusAnimAttributeDataInterface_Statics::ClassParams = {
		&UOptimusAnimAttributeDataInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOptimusAnimAttributeDataInterface_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusAnimAttributeDataInterface_Statics::PropPointers),
		0,
		0x001100A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusAnimAttributeDataInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusAnimAttributeDataInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusAnimAttributeDataInterface()
	{
		if (!Z_Registration_Info_UClass_UOptimusAnimAttributeDataInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusAnimAttributeDataInterface.OuterSingleton, Z_Construct_UClass_UOptimusAnimAttributeDataInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusAnimAttributeDataInterface.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusAnimAttributeDataInterface>()
	{
		return UOptimusAnimAttributeDataInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusAnimAttributeDataInterface);
	UOptimusAnimAttributeDataInterface::~UOptimusAnimAttributeDataInterface() {}
	void UOptimusAnimAttributeDataProvider::StaticRegisterNativesUOptimusAnimAttributeDataProvider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusAnimAttributeDataProvider);
	UClass* Z_Construct_UClass_UOptimusAnimAttributeDataProvider_NoRegister()
	{
		return UOptimusAnimAttributeDataProvider::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusAnimAttributeDataProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SkeletalMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusAnimAttributeDataProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UComputeDataProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusAnimAttributeDataProvider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Provider for reading animation attributes on skeletal mesh. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceAnimAttribute.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceAnimAttribute.h" },
		{ "ToolTip", "Compute Framework Data Provider for reading animation attributes on skeletal mesh." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusAnimAttributeDataProvider_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Binding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceAnimAttribute.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOptimusAnimAttributeDataProvider_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusAnimAttributeDataProvider, SkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOptimusAnimAttributeDataProvider_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusAnimAttributeDataProvider_Statics::NewProp_SkeletalMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusAnimAttributeDataProvider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusAnimAttributeDataProvider_Statics::NewProp_SkeletalMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusAnimAttributeDataProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusAnimAttributeDataProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusAnimAttributeDataProvider_Statics::ClassParams = {
		&UOptimusAnimAttributeDataProvider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOptimusAnimAttributeDataProvider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusAnimAttributeDataProvider_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusAnimAttributeDataProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusAnimAttributeDataProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusAnimAttributeDataProvider()
	{
		if (!Z_Registration_Info_UClass_UOptimusAnimAttributeDataProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusAnimAttributeDataProvider.OuterSingleton, Z_Construct_UClass_UOptimusAnimAttributeDataProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusAnimAttributeDataProvider.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusAnimAttributeDataProvider>()
	{
		return UOptimusAnimAttributeDataProvider::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusAnimAttributeDataProvider);
	UOptimusAnimAttributeDataProvider::~UOptimusAnimAttributeDataProvider() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceAnimAttribute_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceAnimAttribute_h_Statics::ScriptStructInfo[] = {
		{ FOptimusAnimAttributeDescription::StaticStruct, Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics::NewStructOps, TEXT("OptimusAnimAttributeDescription"), &Z_Registration_Info_UScriptStruct_OptimusAnimAttributeDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusAnimAttributeDescription), 1641306366U) },
		{ FOptimusAnimAttributeArray::StaticStruct, Z_Construct_UScriptStruct_FOptimusAnimAttributeArray_Statics::NewStructOps, TEXT("OptimusAnimAttributeArray"), &Z_Registration_Info_UScriptStruct_OptimusAnimAttributeArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusAnimAttributeArray), 1376940406U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceAnimAttribute_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusAnimAttributeDataInterface, UOptimusAnimAttributeDataInterface::StaticClass, TEXT("UOptimusAnimAttributeDataInterface"), &Z_Registration_Info_UClass_UOptimusAnimAttributeDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusAnimAttributeDataInterface), 72300921U) },
		{ Z_Construct_UClass_UOptimusAnimAttributeDataProvider, UOptimusAnimAttributeDataProvider::StaticClass, TEXT("UOptimusAnimAttributeDataProvider"), &Z_Registration_Info_UClass_UOptimusAnimAttributeDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusAnimAttributeDataProvider), 2359142043U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceAnimAttribute_h_752419712(TEXT("/Script/OptimusCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceAnimAttribute_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceAnimAttribute_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceAnimAttribute_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceAnimAttribute_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
