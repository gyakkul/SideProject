// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DataInterfaces/OptimusDataInterfaceRawBuffer.h"
#include "ComputeFramework/ShaderParamTypeDefinition.h"
#include "OptimusDataDomain.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusDataInterfaceRawBuffer() {}
// Cross Module References
	COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataProvider();
	COMPUTEFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FShaderValueTypeHandle();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComponentSource_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComponentSourceBinding_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeDataInterface();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusPersistentBufferDataInterface();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusPersistentBufferDataInterface_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusPersistentBufferDataProvider();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusPersistentBufferDataProvider_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusRawBufferDataInterface();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusRawBufferDataInterface_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusRawBufferDataProvider();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusRawBufferDataProvider_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusTransientBufferDataInterface();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusTransientBufferDataInterface_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusTransientBufferDataProvider();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusTransientBufferDataProvider_NoRegister();
	OPTIMUSCORE_API UEnum* Z_Construct_UEnum_OptimusCore_EOptimusBufferWriteType();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusDataDomain();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOptimusBufferWriteType;
	static UEnum* EOptimusBufferWriteType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOptimusBufferWriteType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOptimusBufferWriteType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OptimusCore_EOptimusBufferWriteType, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("EOptimusBufferWriteType"));
		}
		return Z_Registration_Info_UEnum_EOptimusBufferWriteType.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UEnum* StaticEnum<EOptimusBufferWriteType>()
	{
		return EOptimusBufferWriteType_StaticEnum();
	}
	struct Z_Construct_UEnum_OptimusCore_EOptimusBufferWriteType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OptimusCore_EOptimusBufferWriteType_Statics::Enumerators[] = {
		{ "EOptimusBufferWriteType::Write", (int64)EOptimusBufferWriteType::Write },
		{ "EOptimusBufferWriteType::WriteAtomicAdd", (int64)EOptimusBufferWriteType::WriteAtomicAdd },
		{ "EOptimusBufferWriteType::WriteAtomicMin", (int64)EOptimusBufferWriteType::WriteAtomicMin },
		{ "EOptimusBufferWriteType::WriteAtomicMax", (int64)EOptimusBufferWriteType::WriteAtomicMax },
		{ "EOptimusBufferWriteType::Count", (int64)EOptimusBufferWriteType::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OptimusCore_EOptimusBufferWriteType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Write to buffer operation types. */" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "EOptimusBufferWriteType::Count" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceRawBuffer.h" },
		{ "ToolTip", "Write to buffer operation types." },
		{ "Write.Name", "EOptimusBufferWriteType::Write" },
		{ "Write.ToolTip", "Write the value to resource buffer." },
		{ "WriteAtomicAdd.Name", "EOptimusBufferWriteType::WriteAtomicAdd" },
		{ "WriteAtomicAdd.ToolTip", "AtomicAdd the value to the value in the resource buffer." },
		{ "WriteAtomicMax.Name", "EOptimusBufferWriteType::WriteAtomicMax" },
		{ "WriteAtomicMax.ToolTip", "AtomicMax the value with the value in the resource buffer." },
		{ "WriteAtomicMin.Name", "EOptimusBufferWriteType::WriteAtomicMin" },
		{ "WriteAtomicMin.ToolTip", "AtomicMin the value with the value in the resource buffer." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OptimusCore_EOptimusBufferWriteType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OptimusCore,
		nullptr,
		"EOptimusBufferWriteType",
		"EOptimusBufferWriteType",
		Z_Construct_UEnum_OptimusCore_EOptimusBufferWriteType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OptimusCore_EOptimusBufferWriteType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OptimusCore_EOptimusBufferWriteType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OptimusCore_EOptimusBufferWriteType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OptimusCore_EOptimusBufferWriteType()
	{
		if (!Z_Registration_Info_UEnum_EOptimusBufferWriteType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOptimusBufferWriteType.InnerSingleton, Z_Construct_UEnum_OptimusCore_EOptimusBufferWriteType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOptimusBufferWriteType.InnerSingleton;
	}
	void UOptimusRawBufferDataInterface::StaticRegisterNativesUOptimusRawBufferDataInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusRawBufferDataInterface);
	UClass* Z_Construct_UClass_UOptimusRawBufferDataInterface_NoRegister()
	{
		return UOptimusRawBufferDataInterface::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusRawBufferDataInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ValueType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataDomain_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataDomain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentSourceBinding_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ComponentSourceBinding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusRawBufferDataInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOptimusComputeDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusRawBufferDataInterface_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceRawBuffer.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceRawBuffer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusRawBufferDataInterface_Statics::NewProp_ValueType_MetaData[] = {
		{ "Comment", "/** The value type we should be allocating elements for */" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceRawBuffer.h" },
		{ "ToolTip", "The value type we should be allocating elements for" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusRawBufferDataInterface_Statics::NewProp_ValueType = { "ValueType", nullptr, (EPropertyFlags)0x0010000000000010, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusRawBufferDataInterface, ValueType), Z_Construct_UScriptStruct_FShaderValueTypeHandle, METADATA_PARAMS(Z_Construct_UClass_UOptimusRawBufferDataInterface_Statics::NewProp_ValueType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusRawBufferDataInterface_Statics::NewProp_ValueType_MetaData)) }; // 2213153179
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusRawBufferDataInterface_Statics::NewProp_DataDomain_MetaData[] = {
		{ "Comment", "/** The data domain this buffer covers */" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceRawBuffer.h" },
		{ "ToolTip", "The data domain this buffer covers" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusRawBufferDataInterface_Statics::NewProp_DataDomain = { "DataDomain", nullptr, (EPropertyFlags)0x0010000000000010, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusRawBufferDataInterface, DataDomain), Z_Construct_UScriptStruct_FOptimusDataDomain, METADATA_PARAMS(Z_Construct_UClass_UOptimusRawBufferDataInterface_Statics::NewProp_DataDomain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusRawBufferDataInterface_Statics::NewProp_DataDomain_MetaData)) }; // 413683696
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusRawBufferDataInterface_Statics::NewProp_ComponentSourceBinding_MetaData[] = {
		{ "Comment", "/** The component source to query component domain validity and sizing */" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceRawBuffer.h" },
		{ "ToolTip", "The component source to query component domain validity and sizing" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOptimusRawBufferDataInterface_Statics::NewProp_ComponentSourceBinding = { "ComponentSourceBinding", nullptr, (EPropertyFlags)0x0014000000000010, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusRawBufferDataInterface, ComponentSourceBinding), Z_Construct_UClass_UOptimusComponentSourceBinding_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOptimusRawBufferDataInterface_Statics::NewProp_ComponentSourceBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusRawBufferDataInterface_Statics::NewProp_ComponentSourceBinding_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusRawBufferDataInterface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusRawBufferDataInterface_Statics::NewProp_ValueType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusRawBufferDataInterface_Statics::NewProp_DataDomain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusRawBufferDataInterface_Statics::NewProp_ComponentSourceBinding,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusRawBufferDataInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusRawBufferDataInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusRawBufferDataInterface_Statics::ClassParams = {
		&UOptimusRawBufferDataInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOptimusRawBufferDataInterface_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusRawBufferDataInterface_Statics::PropPointers),
		0,
		0x001100A1u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusRawBufferDataInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusRawBufferDataInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusRawBufferDataInterface()
	{
		if (!Z_Registration_Info_UClass_UOptimusRawBufferDataInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusRawBufferDataInterface.OuterSingleton, Z_Construct_UClass_UOptimusRawBufferDataInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusRawBufferDataInterface.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusRawBufferDataInterface>()
	{
		return UOptimusRawBufferDataInterface::StaticClass();
	}
	UOptimusRawBufferDataInterface::UOptimusRawBufferDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusRawBufferDataInterface);
	UOptimusRawBufferDataInterface::~UOptimusRawBufferDataInterface() {}
	void UOptimusTransientBufferDataInterface::StaticRegisterNativesUOptimusTransientBufferDataInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusTransientBufferDataInterface);
	UClass* Z_Construct_UClass_UOptimusTransientBufferDataInterface_NoRegister()
	{
		return UOptimusTransientBufferDataInterface::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusTransientBufferDataInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusTransientBufferDataInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOptimusRawBufferDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusTransientBufferDataInterface_Statics::Class_MetaDataParams[] = {
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Interface for a transient buffer. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceRawBuffer.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceRawBuffer.h" },
		{ "ToolTip", "Compute Framework Data Interface for a transient buffer." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusTransientBufferDataInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusTransientBufferDataInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusTransientBufferDataInterface_Statics::ClassParams = {
		&UOptimusTransientBufferDataInterface::StaticClass,
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
		0x001100A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusTransientBufferDataInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusTransientBufferDataInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusTransientBufferDataInterface()
	{
		if (!Z_Registration_Info_UClass_UOptimusTransientBufferDataInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusTransientBufferDataInterface.OuterSingleton, Z_Construct_UClass_UOptimusTransientBufferDataInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusTransientBufferDataInterface.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusTransientBufferDataInterface>()
	{
		return UOptimusTransientBufferDataInterface::StaticClass();
	}
	UOptimusTransientBufferDataInterface::UOptimusTransientBufferDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusTransientBufferDataInterface);
	UOptimusTransientBufferDataInterface::~UOptimusTransientBufferDataInterface() {}
	void UOptimusPersistentBufferDataInterface::StaticRegisterNativesUOptimusPersistentBufferDataInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusPersistentBufferDataInterface);
	UClass* Z_Construct_UClass_UOptimusPersistentBufferDataInterface_NoRegister()
	{
		return UOptimusPersistentBufferDataInterface::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusPersistentBufferDataInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResourceName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ResourceName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusPersistentBufferDataInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOptimusRawBufferDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusPersistentBufferDataInterface_Statics::Class_MetaDataParams[] = {
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Interface for a transient buffer. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceRawBuffer.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceRawBuffer.h" },
		{ "ToolTip", "Compute Framework Data Interface for a transient buffer." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusPersistentBufferDataInterface_Statics::NewProp_ResourceName_MetaData[] = {
		{ "Comment", "//~ End UComputeDataInterface Interface\n" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceRawBuffer.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOptimusPersistentBufferDataInterface_Statics::NewProp_ResourceName = { "ResourceName", nullptr, (EPropertyFlags)0x0010000000000010, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusPersistentBufferDataInterface, ResourceName), METADATA_PARAMS(Z_Construct_UClass_UOptimusPersistentBufferDataInterface_Statics::NewProp_ResourceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusPersistentBufferDataInterface_Statics::NewProp_ResourceName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusPersistentBufferDataInterface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusPersistentBufferDataInterface_Statics::NewProp_ResourceName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusPersistentBufferDataInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusPersistentBufferDataInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusPersistentBufferDataInterface_Statics::ClassParams = {
		&UOptimusPersistentBufferDataInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOptimusPersistentBufferDataInterface_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusPersistentBufferDataInterface_Statics::PropPointers),
		0,
		0x001100A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusPersistentBufferDataInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusPersistentBufferDataInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusPersistentBufferDataInterface()
	{
		if (!Z_Registration_Info_UClass_UOptimusPersistentBufferDataInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusPersistentBufferDataInterface.OuterSingleton, Z_Construct_UClass_UOptimusPersistentBufferDataInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusPersistentBufferDataInterface.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusPersistentBufferDataInterface>()
	{
		return UOptimusPersistentBufferDataInterface::StaticClass();
	}
	UOptimusPersistentBufferDataInterface::UOptimusPersistentBufferDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusPersistentBufferDataInterface);
	UOptimusPersistentBufferDataInterface::~UOptimusPersistentBufferDataInterface() {}
	void UOptimusRawBufferDataProvider::StaticRegisterNativesUOptimusRawBufferDataProvider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusRawBufferDataProvider);
	UClass* Z_Construct_UClass_UOptimusRawBufferDataProvider_NoRegister()
	{
		return UOptimusRawBufferDataProvider::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusRawBufferDataProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Component;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentSource_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ComponentSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataDomain_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataDomain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementStride_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ElementStride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RawStride_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RawStride;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusRawBufferDataProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UComputeDataProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusRawBufferDataProvider_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Compute Framework Data Provider for a transient buffer. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceRawBuffer.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceRawBuffer.h" },
		{ "ToolTip", "Compute Framework Data Provider for a transient buffer." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusRawBufferDataProvider_Statics::NewProp_Component_MetaData[] = {
		{ "Comment", "/** The skinned mesh component that governs the sizing and LOD of this buffer */" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceRawBuffer.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The skinned mesh component that governs the sizing and LOD of this buffer" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOptimusRawBufferDataProvider_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusRawBufferDataProvider, Component), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOptimusRawBufferDataProvider_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusRawBufferDataProvider_Statics::NewProp_Component_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusRawBufferDataProvider_Statics::NewProp_ComponentSource_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceRawBuffer.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOptimusRawBufferDataProvider_Statics::NewProp_ComponentSource = { "ComponentSource", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusRawBufferDataProvider, ComponentSource), Z_Construct_UClass_UOptimusComponentSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOptimusRawBufferDataProvider_Statics::NewProp_ComponentSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusRawBufferDataProvider_Statics::NewProp_ComponentSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusRawBufferDataProvider_Statics::NewProp_DataDomain_MetaData[] = {
		{ "Comment", "/** The data domain this buffer covers */" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceRawBuffer.h" },
		{ "ToolTip", "The data domain this buffer covers" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusRawBufferDataProvider_Statics::NewProp_DataDomain = { "DataDomain", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusRawBufferDataProvider, DataDomain), Z_Construct_UScriptStruct_FOptimusDataDomain, METADATA_PARAMS(Z_Construct_UClass_UOptimusRawBufferDataProvider_Statics::NewProp_DataDomain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusRawBufferDataProvider_Statics::NewProp_DataDomain_MetaData)) }; // 413683696
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusRawBufferDataProvider_Statics::NewProp_ElementStride_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceRawBuffer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOptimusRawBufferDataProvider_Statics::NewProp_ElementStride = { "ElementStride", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusRawBufferDataProvider, ElementStride), METADATA_PARAMS(Z_Construct_UClass_UOptimusRawBufferDataProvider_Statics::NewProp_ElementStride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusRawBufferDataProvider_Statics::NewProp_ElementStride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusRawBufferDataProvider_Statics::NewProp_RawStride_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceRawBuffer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOptimusRawBufferDataProvider_Statics::NewProp_RawStride = { "RawStride", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusRawBufferDataProvider, RawStride), METADATA_PARAMS(Z_Construct_UClass_UOptimusRawBufferDataProvider_Statics::NewProp_RawStride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusRawBufferDataProvider_Statics::NewProp_RawStride_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusRawBufferDataProvider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusRawBufferDataProvider_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusRawBufferDataProvider_Statics::NewProp_ComponentSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusRawBufferDataProvider_Statics::NewProp_DataDomain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusRawBufferDataProvider_Statics::NewProp_ElementStride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusRawBufferDataProvider_Statics::NewProp_RawStride,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusRawBufferDataProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusRawBufferDataProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusRawBufferDataProvider_Statics::ClassParams = {
		&UOptimusRawBufferDataProvider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOptimusRawBufferDataProvider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusRawBufferDataProvider_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusRawBufferDataProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusRawBufferDataProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusRawBufferDataProvider()
	{
		if (!Z_Registration_Info_UClass_UOptimusRawBufferDataProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusRawBufferDataProvider.OuterSingleton, Z_Construct_UClass_UOptimusRawBufferDataProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusRawBufferDataProvider.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusRawBufferDataProvider>()
	{
		return UOptimusRawBufferDataProvider::StaticClass();
	}
	UOptimusRawBufferDataProvider::UOptimusRawBufferDataProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusRawBufferDataProvider);
	UOptimusRawBufferDataProvider::~UOptimusRawBufferDataProvider() {}
	void UOptimusTransientBufferDataProvider::StaticRegisterNativesUOptimusTransientBufferDataProvider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusTransientBufferDataProvider);
	UClass* Z_Construct_UClass_UOptimusTransientBufferDataProvider_NoRegister()
	{
		return UOptimusTransientBufferDataProvider::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusTransientBufferDataProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusTransientBufferDataProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOptimusRawBufferDataProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusTransientBufferDataProvider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Provider for a transient buffer. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceRawBuffer.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceRawBuffer.h" },
		{ "ToolTip", "Compute Framework Data Provider for a transient buffer." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusTransientBufferDataProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusTransientBufferDataProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusTransientBufferDataProvider_Statics::ClassParams = {
		&UOptimusTransientBufferDataProvider::StaticClass,
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
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusTransientBufferDataProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusTransientBufferDataProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusTransientBufferDataProvider()
	{
		if (!Z_Registration_Info_UClass_UOptimusTransientBufferDataProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusTransientBufferDataProvider.OuterSingleton, Z_Construct_UClass_UOptimusTransientBufferDataProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusTransientBufferDataProvider.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusTransientBufferDataProvider>()
	{
		return UOptimusTransientBufferDataProvider::StaticClass();
	}
	UOptimusTransientBufferDataProvider::UOptimusTransientBufferDataProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusTransientBufferDataProvider);
	UOptimusTransientBufferDataProvider::~UOptimusTransientBufferDataProvider() {}
	void UOptimusPersistentBufferDataProvider::StaticRegisterNativesUOptimusPersistentBufferDataProvider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusPersistentBufferDataProvider);
	UClass* Z_Construct_UClass_UOptimusPersistentBufferDataProvider_NoRegister()
	{
		return UOptimusPersistentBufferDataProvider::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusPersistentBufferDataProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusPersistentBufferDataProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOptimusRawBufferDataProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusPersistentBufferDataProvider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Provider for a transient buffer. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceRawBuffer.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceRawBuffer.h" },
		{ "ToolTip", "Compute Framework Data Provider for a transient buffer." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusPersistentBufferDataProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusPersistentBufferDataProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusPersistentBufferDataProvider_Statics::ClassParams = {
		&UOptimusPersistentBufferDataProvider::StaticClass,
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
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusPersistentBufferDataProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusPersistentBufferDataProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusPersistentBufferDataProvider()
	{
		if (!Z_Registration_Info_UClass_UOptimusPersistentBufferDataProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusPersistentBufferDataProvider.OuterSingleton, Z_Construct_UClass_UOptimusPersistentBufferDataProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusPersistentBufferDataProvider.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusPersistentBufferDataProvider>()
	{
		return UOptimusPersistentBufferDataProvider::StaticClass();
	}
	UOptimusPersistentBufferDataProvider::UOptimusPersistentBufferDataProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusPersistentBufferDataProvider);
	UOptimusPersistentBufferDataProvider::~UOptimusPersistentBufferDataProvider() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceRawBuffer_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceRawBuffer_h_Statics::EnumInfo[] = {
		{ EOptimusBufferWriteType_StaticEnum, TEXT("EOptimusBufferWriteType"), &Z_Registration_Info_UEnum_EOptimusBufferWriteType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1867539270U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceRawBuffer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusRawBufferDataInterface, UOptimusRawBufferDataInterface::StaticClass, TEXT("UOptimusRawBufferDataInterface"), &Z_Registration_Info_UClass_UOptimusRawBufferDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusRawBufferDataInterface), 2286759714U) },
		{ Z_Construct_UClass_UOptimusTransientBufferDataInterface, UOptimusTransientBufferDataInterface::StaticClass, TEXT("UOptimusTransientBufferDataInterface"), &Z_Registration_Info_UClass_UOptimusTransientBufferDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusTransientBufferDataInterface), 2323173522U) },
		{ Z_Construct_UClass_UOptimusPersistentBufferDataInterface, UOptimusPersistentBufferDataInterface::StaticClass, TEXT("UOptimusPersistentBufferDataInterface"), &Z_Registration_Info_UClass_UOptimusPersistentBufferDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusPersistentBufferDataInterface), 1653252183U) },
		{ Z_Construct_UClass_UOptimusRawBufferDataProvider, UOptimusRawBufferDataProvider::StaticClass, TEXT("UOptimusRawBufferDataProvider"), &Z_Registration_Info_UClass_UOptimusRawBufferDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusRawBufferDataProvider), 1186916120U) },
		{ Z_Construct_UClass_UOptimusTransientBufferDataProvider, UOptimusTransientBufferDataProvider::StaticClass, TEXT("UOptimusTransientBufferDataProvider"), &Z_Registration_Info_UClass_UOptimusTransientBufferDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusTransientBufferDataProvider), 2307200138U) },
		{ Z_Construct_UClass_UOptimusPersistentBufferDataProvider, UOptimusPersistentBufferDataProvider::StaticClass, TEXT("UOptimusPersistentBufferDataProvider"), &Z_Registration_Info_UClass_UOptimusPersistentBufferDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusPersistentBufferDataProvider), 558682191U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceRawBuffer_h_4251984201(TEXT("/Script/OptimusCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceRawBuffer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceRawBuffer_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceRawBuffer_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceRawBuffer_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
