// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Nodes/OptimusNode_ConstantValue.h"
#include "OptimusDataType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusNode_ConstantValue() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusGeneratedClassDefiner_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_ConstantValue();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_ConstantValue_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_ConstantValueGeneratorClass();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_ConstantValueGeneratorClass_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusValueProvider_NoRegister();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusDataTypeRef();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	void UOptimusNode_ConstantValueGeneratorClass::StaticRegisterNativesUOptimusNode_ConstantValueGeneratorClass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusNode_ConstantValueGeneratorClass);
	UClass* Z_Construct_UClass_UOptimusNode_ConstantValueGeneratorClass_NoRegister()
	{
		return UOptimusNode_ConstantValueGeneratorClass::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusNode_ConstantValueGeneratorClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusNode_ConstantValueGeneratorClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UClass,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNode_ConstantValueGeneratorClass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Nodes/OptimusNode_ConstantValue.h" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_ConstantValue.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNode_ConstantValueGeneratorClass_Statics::NewProp_DataType_MetaData[] = {
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_ConstantValue.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusNode_ConstantValueGeneratorClass_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusNode_ConstantValueGeneratorClass, DataType), Z_Construct_UScriptStruct_FOptimusDataTypeRef, METADATA_PARAMS(Z_Construct_UClass_UOptimusNode_ConstantValueGeneratorClass_Statics::NewProp_DataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_ConstantValueGeneratorClass_Statics::NewProp_DataType_MetaData)) }; // 2733180919
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusNode_ConstantValueGeneratorClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_ConstantValueGeneratorClass_Statics::NewProp_DataType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusNode_ConstantValueGeneratorClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusNode_ConstantValueGeneratorClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusNode_ConstantValueGeneratorClass_Statics::ClassParams = {
		&UOptimusNode_ConstantValueGeneratorClass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOptimusNode_ConstantValueGeneratorClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_ConstantValueGeneratorClass_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusNode_ConstantValueGeneratorClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_ConstantValueGeneratorClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusNode_ConstantValueGeneratorClass()
	{
		if (!Z_Registration_Info_UClass_UOptimusNode_ConstantValueGeneratorClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusNode_ConstantValueGeneratorClass.OuterSingleton, Z_Construct_UClass_UOptimusNode_ConstantValueGeneratorClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusNode_ConstantValueGeneratorClass.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusNode_ConstantValueGeneratorClass>()
	{
		return UOptimusNode_ConstantValueGeneratorClass::StaticClass();
	}
	UOptimusNode_ConstantValueGeneratorClass::UOptimusNode_ConstantValueGeneratorClass(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusNode_ConstantValueGeneratorClass);
	UOptimusNode_ConstantValueGeneratorClass::~UOptimusNode_ConstantValueGeneratorClass() {}
	void UOptimusNode_ConstantValue::StaticRegisterNativesUOptimusNode_ConstantValue()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusNode_ConstantValue);
	UClass* Z_Construct_UClass_UOptimusNode_ConstantValue_NoRegister()
	{
		return UOptimusNode_ConstantValue::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusNode_ConstantValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusNode_ConstantValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOptimusNode,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNode_ConstantValue_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Nodes/OptimusNode_ConstantValue.h" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_ConstantValue.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOptimusNode_ConstantValue_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UOptimusValueProvider_NoRegister, (int32)VTABLE_OFFSET(UOptimusNode_ConstantValue, IOptimusValueProvider), false },  // 2326769200
			{ Z_Construct_UClass_UOptimusGeneratedClassDefiner_NoRegister, (int32)VTABLE_OFFSET(UOptimusNode_ConstantValue, IOptimusGeneratedClassDefiner), false },  // 1377883780
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusNode_ConstantValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusNode_ConstantValue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusNode_ConstantValue_Statics::ClassParams = {
		&UOptimusNode_ConstantValue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x010000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusNode_ConstantValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_ConstantValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusNode_ConstantValue()
	{
		if (!Z_Registration_Info_UClass_UOptimusNode_ConstantValue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusNode_ConstantValue.OuterSingleton, Z_Construct_UClass_UOptimusNode_ConstantValue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusNode_ConstantValue.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusNode_ConstantValue>()
	{
		return UOptimusNode_ConstantValue::StaticClass();
	}
	UOptimusNode_ConstantValue::UOptimusNode_ConstantValue() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusNode_ConstantValue);
	UOptimusNode_ConstantValue::~UOptimusNode_ConstantValue() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ConstantValue_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ConstantValue_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusNode_ConstantValueGeneratorClass, UOptimusNode_ConstantValueGeneratorClass::StaticClass, TEXT("UOptimusNode_ConstantValueGeneratorClass"), &Z_Registration_Info_UClass_UOptimusNode_ConstantValueGeneratorClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusNode_ConstantValueGeneratorClass), 1686973989U) },
		{ Z_Construct_UClass_UOptimusNode_ConstantValue, UOptimusNode_ConstantValue::StaticClass, TEXT("UOptimusNode_ConstantValue"), &Z_Registration_Info_UClass_UOptimusNode_ConstantValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusNode_ConstantValue), 322762902U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ConstantValue_h_2885342848(TEXT("/Script/OptimusCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ConstantValue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ConstantValue_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
