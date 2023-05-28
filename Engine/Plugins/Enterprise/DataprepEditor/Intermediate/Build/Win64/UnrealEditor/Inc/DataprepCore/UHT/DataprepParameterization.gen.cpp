// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Parameterization/DataprepParameterization.h"
#include "Parameterization/DataprepParameterizationUtils.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataprepParameterization() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepParameterizableObject_NoRegister();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepParameterization();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepParameterization_NoRegister();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepParameterizationBindings();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepParameterizationBindings_NoRegister();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepParameterizationInstance();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepParameterizationInstance_NoRegister();
	DATAPREPCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataprepParameterizationBinding();
	DATAPREPCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataprepPropertyLink();
	UPackage* Z_Construct_UPackage__Script_DataprepCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataprepParameterizationBinding;
class UScriptStruct* FDataprepParameterizationBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataprepParameterizationBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataprepParameterizationBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataprepParameterizationBinding, (UObject*)Z_Construct_UPackage__Script_DataprepCore(), TEXT("DataprepParameterizationBinding"));
	}
	return Z_Registration_Info_UScriptStruct_DataprepParameterizationBinding.OuterSingleton;
}
template<> DATAPREPCORE_API UScriptStruct* StaticStruct<FDataprepParameterizationBinding>()
{
	return FDataprepParameterizationBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataprepParameterizationBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectBinded_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ObjectBinded;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyChain_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyChain_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyChain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataprepParameterizationBinding_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * The parameterization binding is a struct that hold an object and the property path to the parameterized property\n * It also hold a array to validate the that value type of the parameterized property didn't change since it's creation\n */" },
		{ "ModuleRelativePath", "Private/Parameterization/DataprepParameterization.h" },
		{ "ToolTip", "The parameterization binding is a struct that hold an object and the property path to the parameterized property\nIt also hold a array to validate the that value type of the parameterized property didn't change since it's creation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataprepParameterizationBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataprepParameterizationBinding>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataprepParameterizationBinding_Statics::NewProp_ObjectBinded_MetaData[] = {
		{ "ModuleRelativePath", "Private/Parameterization/DataprepParameterization.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDataprepParameterizationBinding_Statics::NewProp_ObjectBinded = { "ObjectBinded", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataprepParameterizationBinding, ObjectBinded), Z_Construct_UClass_UDataprepParameterizableObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataprepParameterizationBinding_Statics::NewProp_ObjectBinded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataprepParameterizationBinding_Statics::NewProp_ObjectBinded_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataprepParameterizationBinding_Statics::NewProp_PropertyChain_Inner = { "PropertyChain", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDataprepPropertyLink, METADATA_PARAMS(nullptr, 0) }; // 2734592473
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataprepParameterizationBinding_Statics::NewProp_PropertyChain_MetaData[] = {
		{ "ModuleRelativePath", "Private/Parameterization/DataprepParameterization.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDataprepParameterizationBinding_Statics::NewProp_PropertyChain = { "PropertyChain", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataprepParameterizationBinding, PropertyChain), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataprepParameterizationBinding_Statics::NewProp_PropertyChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataprepParameterizationBinding_Statics::NewProp_PropertyChain_MetaData)) }; // 2734592473
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataprepParameterizationBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataprepParameterizationBinding_Statics::NewProp_ObjectBinded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataprepParameterizationBinding_Statics::NewProp_PropertyChain_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataprepParameterizationBinding_Statics::NewProp_PropertyChain,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataprepParameterizationBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepCore,
		nullptr,
		&NewStructOps,
		"DataprepParameterizationBinding",
		sizeof(FDataprepParameterizationBinding),
		alignof(FDataprepParameterizationBinding),
		Z_Construct_UScriptStruct_FDataprepParameterizationBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataprepParameterizationBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataprepParameterizationBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataprepParameterizationBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataprepParameterizationBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_DataprepParameterizationBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataprepParameterizationBinding.InnerSingleton, Z_Construct_UScriptStruct_FDataprepParameterizationBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataprepParameterizationBinding.InnerSingleton;
	}
	void UDataprepParameterizationBindings::StaticRegisterNativesUDataprepParameterizationBindings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepParameterizationBindings);
	UClass* Z_Construct_UClass_UDataprepParameterizationBindings_NoRegister()
	{
		return UDataprepParameterizationBindings::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepParameterizationBindings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepParameterizationBindings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepParameterizationBindings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Encapsulate the unidirectionality necessary for a constant cost of access to the data related to the bindings\n */" },
		{ "IncludePath", "Parameterization/DataprepParameterization.h" },
		{ "ModuleRelativePath", "Private/Parameterization/DataprepParameterization.h" },
		{ "ToolTip", "Encapsulate the unidirectionality necessary for a constant cost of access to the data related to the bindings" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepParameterizationBindings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepParameterizationBindings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepParameterizationBindings_Statics::ClassParams = {
		&UDataprepParameterizationBindings::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepParameterizationBindings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepParameterizationBindings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepParameterizationBindings()
	{
		if (!Z_Registration_Info_UClass_UDataprepParameterizationBindings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepParameterizationBindings.OuterSingleton, Z_Construct_UClass_UDataprepParameterizationBindings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepParameterizationBindings.OuterSingleton;
	}
	template<> DATAPREPCORE_API UClass* StaticClass<UDataprepParameterizationBindings>()
	{
		return UDataprepParameterizationBindings::StaticClass();
	}
	UDataprepParameterizationBindings::UDataprepParameterizationBindings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepParameterizationBindings);
	UDataprepParameterizationBindings::~UDataprepParameterizationBindings() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDataprepParameterizationBindings)
	void UDataprepParameterization::StaticRegisterNativesUDataprepParameterization()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepParameterization);
	UClass* Z_Construct_UClass_UDataprepParameterization_NoRegister()
	{
		return UDataprepParameterization::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepParameterization_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingsContainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BindingsContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomContainerClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_CustomContainerClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultParameterisation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultParameterisation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ParameterizationStorage_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterizationStorage_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParameterizationStorage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepParameterization_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepParameterization_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * The DataprepParameterization contains the data for the parameterization of a pipeline\n */" },
		{ "IncludePath", "Parameterization/DataprepParameterization.h" },
		{ "ModuleRelativePath", "Private/Parameterization/DataprepParameterization.h" },
		{ "ToolTip", "The DataprepParameterization contains the data for the parameterization of a pipeline" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepParameterization_Statics::NewProp_BindingsContainer_MetaData[] = {
		{ "Comment", "// The containers for the bindings\n" },
		{ "ModuleRelativePath", "Private/Parameterization/DataprepParameterization.h" },
		{ "ToolTip", "The containers for the bindings" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataprepParameterization_Statics::NewProp_BindingsContainer = { "BindingsContainer", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepParameterization, BindingsContainer), Z_Construct_UClass_UDataprepParameterizationBindings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataprepParameterization_Statics::NewProp_BindingsContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepParameterization_Statics::NewProp_BindingsContainer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepParameterization_Statics::NewProp_CustomContainerClass_MetaData[] = {
		{ "ModuleRelativePath", "Private/Parameterization/DataprepParameterization.h" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_UDataprepParameterization_Statics::NewProp_CustomContainerClass = { "CustomContainerClass", nullptr, (EPropertyFlags)0x0044000400002000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepParameterization, CustomContainerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataprepParameterization_Statics::NewProp_CustomContainerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepParameterization_Statics::NewProp_CustomContainerClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepParameterization_Statics::NewProp_DefaultParameterisation_MetaData[] = {
		{ "ModuleRelativePath", "Private/Parameterization/DataprepParameterization.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataprepParameterization_Statics::NewProp_DefaultParameterisation = { "DefaultParameterisation", nullptr, (EPropertyFlags)0x0044000400002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepParameterization, DefaultParameterisation), Z_Construct_UClass_UDataprepParameterizableObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataprepParameterization_Statics::NewProp_DefaultParameterisation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepParameterization_Statics::NewProp_DefaultParameterisation_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDataprepParameterization_Statics::NewProp_ParameterizationStorage_Inner = { "ParameterizationStorage", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepParameterization_Statics::NewProp_ParameterizationStorage_MetaData[] = {
		{ "Comment", "/** \n\x09 * This is used only to store a serialization of the values of the parameterization since we can't save our custom container class\n\x09 */" },
		{ "ModuleRelativePath", "Private/Parameterization/DataprepParameterization.h" },
		{ "ToolTip", "This is used only to store a serialization of the values of the parameterization since we can't save our custom container class" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataprepParameterization_Statics::NewProp_ParameterizationStorage = { "ParameterizationStorage", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepParameterization, ParameterizationStorage), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDataprepParameterization_Statics::NewProp_ParameterizationStorage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepParameterization_Statics::NewProp_ParameterizationStorage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataprepParameterization_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepParameterization_Statics::NewProp_BindingsContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepParameterization_Statics::NewProp_CustomContainerClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepParameterization_Statics::NewProp_DefaultParameterisation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepParameterization_Statics::NewProp_ParameterizationStorage_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepParameterization_Statics::NewProp_ParameterizationStorage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepParameterization_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepParameterization>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepParameterization_Statics::ClassParams = {
		&UDataprepParameterization::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataprepParameterization_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepParameterization_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepParameterization_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepParameterization_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepParameterization()
	{
		if (!Z_Registration_Info_UClass_UDataprepParameterization.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepParameterization.OuterSingleton, Z_Construct_UClass_UDataprepParameterization_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepParameterization.OuterSingleton;
	}
	template<> DATAPREPCORE_API UClass* StaticClass<UDataprepParameterization>()
	{
		return UDataprepParameterization::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepParameterization);
	UDataprepParameterization::~UDataprepParameterization() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDataprepParameterization)
	void UDataprepParameterizationInstance::StaticRegisterNativesUDataprepParameterizationInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepParameterizationInstance);
	UClass* Z_Construct_UClass_UDataprepParameterizationInstance_NoRegister()
	{
		return UDataprepParameterizationInstance::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepParameterizationInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceParameterization_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceParameterization;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterizationInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParameterizationInstance;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ParameterizationInstanceStorage_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterizationInstanceStorage_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParameterizationInstanceStorage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepParameterizationInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepParameterizationInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Parameterization/DataprepParameterization.h" },
		{ "ModuleRelativePath", "Private/Parameterization/DataprepParameterization.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepParameterizationInstance_Statics::NewProp_SourceParameterization_MetaData[] = {
		{ "Comment", "// The parameterization from which this instance was constructed\n" },
		{ "ModuleRelativePath", "Private/Parameterization/DataprepParameterization.h" },
		{ "ToolTip", "The parameterization from which this instance was constructed" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataprepParameterizationInstance_Statics::NewProp_SourceParameterization = { "SourceParameterization", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepParameterizationInstance, SourceParameterization), Z_Construct_UClass_UDataprepParameterization_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataprepParameterizationInstance_Statics::NewProp_SourceParameterization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepParameterizationInstance_Statics::NewProp_SourceParameterization_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepParameterizationInstance_Statics::NewProp_ParameterizationInstance_MetaData[] = {
		{ "Comment", "// The actual object on which the parameterization data is stored\n" },
		{ "ModuleRelativePath", "Private/Parameterization/DataprepParameterization.h" },
		{ "ToolTip", "The actual object on which the parameterization data is stored" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataprepParameterizationInstance_Statics::NewProp_ParameterizationInstance = { "ParameterizationInstance", nullptr, (EPropertyFlags)0x0044000400002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepParameterizationInstance, ParameterizationInstance), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataprepParameterizationInstance_Statics::NewProp_ParameterizationInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepParameterizationInstance_Statics::NewProp_ParameterizationInstance_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDataprepParameterizationInstance_Statics::NewProp_ParameterizationInstanceStorage_Inner = { "ParameterizationInstanceStorage", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepParameterizationInstance_Statics::NewProp_ParameterizationInstanceStorage_MetaData[] = {
		{ "Comment", "// This is used only to store a serialization of the values of the parameterization since we can't save the custom class\n" },
		{ "ModuleRelativePath", "Private/Parameterization/DataprepParameterization.h" },
		{ "ToolTip", "This is used only to store a serialization of the values of the parameterization since we can't save the custom class" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataprepParameterizationInstance_Statics::NewProp_ParameterizationInstanceStorage = { "ParameterizationInstanceStorage", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepParameterizationInstance, ParameterizationInstanceStorage), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDataprepParameterizationInstance_Statics::NewProp_ParameterizationInstanceStorage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepParameterizationInstance_Statics::NewProp_ParameterizationInstanceStorage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataprepParameterizationInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepParameterizationInstance_Statics::NewProp_SourceParameterization,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepParameterizationInstance_Statics::NewProp_ParameterizationInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepParameterizationInstance_Statics::NewProp_ParameterizationInstanceStorage_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepParameterizationInstance_Statics::NewProp_ParameterizationInstanceStorage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepParameterizationInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepParameterizationInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepParameterizationInstance_Statics::ClassParams = {
		&UDataprepParameterizationInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataprepParameterizationInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepParameterizationInstance_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepParameterizationInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepParameterizationInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepParameterizationInstance()
	{
		if (!Z_Registration_Info_UClass_UDataprepParameterizationInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepParameterizationInstance.OuterSingleton, Z_Construct_UClass_UDataprepParameterizationInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepParameterizationInstance.OuterSingleton;
	}
	template<> DATAPREPCORE_API UClass* StaticClass<UDataprepParameterizationInstance>()
	{
		return UDataprepParameterizationInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepParameterizationInstance);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDataprepParameterizationInstance)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Private_Parameterization_DataprepParameterization_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Private_Parameterization_DataprepParameterization_h_Statics::ScriptStructInfo[] = {
		{ FDataprepParameterizationBinding::StaticStruct, Z_Construct_UScriptStruct_FDataprepParameterizationBinding_Statics::NewStructOps, TEXT("DataprepParameterizationBinding"), &Z_Registration_Info_UScriptStruct_DataprepParameterizationBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataprepParameterizationBinding), 431576682U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Private_Parameterization_DataprepParameterization_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataprepParameterizationBindings, UDataprepParameterizationBindings::StaticClass, TEXT("UDataprepParameterizationBindings"), &Z_Registration_Info_UClass_UDataprepParameterizationBindings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepParameterizationBindings), 3012843706U) },
		{ Z_Construct_UClass_UDataprepParameterization, UDataprepParameterization::StaticClass, TEXT("UDataprepParameterization"), &Z_Registration_Info_UClass_UDataprepParameterization, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepParameterization), 1087939903U) },
		{ Z_Construct_UClass_UDataprepParameterizationInstance, UDataprepParameterizationInstance::StaticClass, TEXT("UDataprepParameterizationInstance"), &Z_Registration_Info_UClass_UDataprepParameterizationInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepParameterizationInstance), 1239795184U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Private_Parameterization_DataprepParameterization_h_2292651349(TEXT("/Script/DataprepCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Private_Parameterization_DataprepParameterization_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Private_Parameterization_DataprepParameterization_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Private_Parameterization_DataprepParameterization_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Private_Parameterization_DataprepParameterization_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
