// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DataInterfaces/OptimusDataInterfaceGraph.h"
#include "ComputeFramework/ShaderParamTypeDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusDataInterfaceGraph() {}
// Cross Module References
	COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataInterface();
	COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataProvider();
	COMPUTEFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FShaderValueTypeHandle();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDeformerInstance_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusGraphDataInterface();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusGraphDataInterface_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusGraphDataProvider();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusGraphDataProvider_NoRegister();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusGraphVariableDescription();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusGraphVariableDescription;
class UScriptStruct* FOptimusGraphVariableDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusGraphVariableDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusGraphVariableDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusGraphVariableDescription, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusGraphVariableDescription"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusGraphVariableDescription.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusGraphVariableDescription>()
{
	return FOptimusGraphVariableDescription::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ValueType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Value_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceGraph.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusGraphVariableDescription>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceGraph.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusGraphVariableDescription, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::NewProp_ValueType_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceGraph.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::NewProp_ValueType = { "ValueType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusGraphVariableDescription, ValueType), Z_Construct_UScriptStruct_FShaderValueTypeHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::NewProp_ValueType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::NewProp_ValueType_MetaData)) }; // 2213153179
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceGraph.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusGraphVariableDescription, Value), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::NewProp_Offset_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceGraph.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusGraphVariableDescription, Offset), METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::NewProp_Offset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::NewProp_ValueType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::NewProp_Value_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::NewProp_Offset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		nullptr,
		&NewStructOps,
		"OptimusGraphVariableDescription",
		sizeof(FOptimusGraphVariableDescription),
		alignof(FOptimusGraphVariableDescription),
		Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusGraphVariableDescription()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusGraphVariableDescription.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusGraphVariableDescription.InnerSingleton, Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusGraphVariableDescription.InnerSingleton;
	}
	void UOptimusGraphDataInterface::StaticRegisterNativesUOptimusGraphDataInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusGraphDataInterface);
	UClass* Z_Construct_UClass_UOptimusGraphDataInterface_NoRegister()
	{
		return UOptimusGraphDataInterface::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusGraphDataInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Variables_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variables_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Variables;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterBufferSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ParameterBufferSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusGraphDataInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UComputeDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusGraphDataInterface_Statics::Class_MetaDataParams[] = {
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Interface used for marshaling compute graph parameters and variables. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceGraph.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceGraph.h" },
		{ "ToolTip", "Compute Framework Data Interface used for marshaling compute graph parameters and variables." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusGraphDataInterface_Statics::NewProp_Variables_Inner = { "Variables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FOptimusGraphVariableDescription, METADATA_PARAMS(nullptr, 0) }; // 1775700148
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusGraphDataInterface_Statics::NewProp_Variables_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceGraph.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptimusGraphDataInterface_Statics::NewProp_Variables = { "Variables", nullptr, (EPropertyFlags)0x0040000000000010, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusGraphDataInterface, Variables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOptimusGraphDataInterface_Statics::NewProp_Variables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGraphDataInterface_Statics::NewProp_Variables_MetaData)) }; // 1775700148
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusGraphDataInterface_Statics::NewProp_ParameterBufferSize_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceGraph.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOptimusGraphDataInterface_Statics::NewProp_ParameterBufferSize = { "ParameterBufferSize", nullptr, (EPropertyFlags)0x0040000000000010, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusGraphDataInterface, ParameterBufferSize), METADATA_PARAMS(Z_Construct_UClass_UOptimusGraphDataInterface_Statics::NewProp_ParameterBufferSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGraphDataInterface_Statics::NewProp_ParameterBufferSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusGraphDataInterface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusGraphDataInterface_Statics::NewProp_Variables_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusGraphDataInterface_Statics::NewProp_Variables,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusGraphDataInterface_Statics::NewProp_ParameterBufferSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusGraphDataInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusGraphDataInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusGraphDataInterface_Statics::ClassParams = {
		&UOptimusGraphDataInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOptimusGraphDataInterface_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGraphDataInterface_Statics::PropPointers),
		0,
		0x000100A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusGraphDataInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGraphDataInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusGraphDataInterface()
	{
		if (!Z_Registration_Info_UClass_UOptimusGraphDataInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusGraphDataInterface.OuterSingleton, Z_Construct_UClass_UOptimusGraphDataInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusGraphDataInterface.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusGraphDataInterface>()
	{
		return UOptimusGraphDataInterface::StaticClass();
	}
	UOptimusGraphDataInterface::UOptimusGraphDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusGraphDataInterface);
	UOptimusGraphDataInterface::~UOptimusGraphDataInterface() {}
	void UOptimusGraphDataProvider::StaticRegisterNativesUOptimusGraphDataProvider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusGraphDataProvider);
	UClass* Z_Construct_UClass_UOptimusGraphDataProvider_NoRegister()
	{
		return UOptimusGraphDataProvider::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusGraphDataProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeformerInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DeformerInstance;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Variables_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variables_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Variables;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusGraphDataProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UComputeDataProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusGraphDataProvider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Provider for marshaling compute graph parameters and variables. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceGraph.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceGraph.h" },
		{ "ToolTip", "Compute Framework Data Provider for marshaling compute graph parameters and variables." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusGraphDataProvider_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Binding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceGraph.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOptimusGraphDataProvider_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusGraphDataProvider, MeshComponent), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOptimusGraphDataProvider_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGraphDataProvider_Statics::NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusGraphDataProvider_Statics::NewProp_DeformerInstance_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceGraph.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOptimusGraphDataProvider_Statics::NewProp_DeformerInstance = { "DeformerInstance", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusGraphDataProvider, DeformerInstance), Z_Construct_UClass_UOptimusDeformerInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOptimusGraphDataProvider_Statics::NewProp_DeformerInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGraphDataProvider_Statics::NewProp_DeformerInstance_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusGraphDataProvider_Statics::NewProp_Variables_Inner = { "Variables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FOptimusGraphVariableDescription, METADATA_PARAMS(nullptr, 0) }; // 1775700148
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusGraphDataProvider_Statics::NewProp_Variables_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceGraph.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptimusGraphDataProvider_Statics::NewProp_Variables = { "Variables", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusGraphDataProvider, Variables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOptimusGraphDataProvider_Statics::NewProp_Variables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGraphDataProvider_Statics::NewProp_Variables_MetaData)) }; // 1775700148
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusGraphDataProvider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusGraphDataProvider_Statics::NewProp_MeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusGraphDataProvider_Statics::NewProp_DeformerInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusGraphDataProvider_Statics::NewProp_Variables_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusGraphDataProvider_Statics::NewProp_Variables,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusGraphDataProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusGraphDataProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusGraphDataProvider_Statics::ClassParams = {
		&UOptimusGraphDataProvider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOptimusGraphDataProvider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGraphDataProvider_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusGraphDataProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGraphDataProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusGraphDataProvider()
	{
		if (!Z_Registration_Info_UClass_UOptimusGraphDataProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusGraphDataProvider.OuterSingleton, Z_Construct_UClass_UOptimusGraphDataProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusGraphDataProvider.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusGraphDataProvider>()
	{
		return UOptimusGraphDataProvider::StaticClass();
	}
	UOptimusGraphDataProvider::UOptimusGraphDataProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusGraphDataProvider);
	UOptimusGraphDataProvider::~UOptimusGraphDataProvider() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceGraph_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceGraph_h_Statics::ScriptStructInfo[] = {
		{ FOptimusGraphVariableDescription::StaticStruct, Z_Construct_UScriptStruct_FOptimusGraphVariableDescription_Statics::NewStructOps, TEXT("OptimusGraphVariableDescription"), &Z_Registration_Info_UScriptStruct_OptimusGraphVariableDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusGraphVariableDescription), 1775700148U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusGraphDataInterface, UOptimusGraphDataInterface::StaticClass, TEXT("UOptimusGraphDataInterface"), &Z_Registration_Info_UClass_UOptimusGraphDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusGraphDataInterface), 3554337908U) },
		{ Z_Construct_UClass_UOptimusGraphDataProvider, UOptimusGraphDataProvider::StaticClass, TEXT("UOptimusGraphDataProvider"), &Z_Registration_Info_UClass_UOptimusGraphDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusGraphDataProvider), 168980477U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceGraph_h_2588209415(TEXT("/Script/OptimusCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceGraph_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceGraph_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceGraph_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
