// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/IntSerialization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIntSerialization() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UIntSerialization();
	ENGINE_API UClass* Z_Construct_UClass_UIntSerialization_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UIntSerialization::StaticRegisterNativesUIntSerialization()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIntSerialization);
	UClass* Z_Construct_UClass_UIntSerialization_NoRegister()
	{
		return UIntSerialization::StaticClass();
	}
	struct Z_Construct_UClass_UIntSerialization_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnsignedInt16Variable_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_UnsignedInt16Variable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnsignedInt32Variable_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_UnsignedInt32Variable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnsignedInt64Variable_MetaData[];
#endif
		static const UECodeGen_Private::FFInt64PropertyParams NewProp_UnsignedInt64Variable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SignedInt8Variable_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_SignedInt8Variable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SignedInt16Variable_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_SignedInt16Variable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SignedInt64Variable_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_SignedInt64Variable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnsignedInt8Variable_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_UnsignedInt8Variable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SignedInt32Variable_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SignedInt32Variable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIntSerialization_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIntSerialization_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/IntSerialization.h" },
		{ "ModuleRelativePath", "Classes/Engine/IntSerialization.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIntSerialization_Statics::NewProp_UnsignedInt16Variable_MetaData[] = {
		{ "Comment", "//New types\n" },
		{ "ModuleRelativePath", "Classes/Engine/IntSerialization.h" },
		{ "ToolTip", "New types" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_UIntSerialization_Statics::NewProp_UnsignedInt16Variable = { "UnsignedInt16Variable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIntSerialization, UnsignedInt16Variable), METADATA_PARAMS(Z_Construct_UClass_UIntSerialization_Statics::NewProp_UnsignedInt16Variable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIntSerialization_Statics::NewProp_UnsignedInt16Variable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIntSerialization_Statics::NewProp_UnsignedInt32Variable_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/IntSerialization.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UIntSerialization_Statics::NewProp_UnsignedInt32Variable = { "UnsignedInt32Variable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIntSerialization, UnsignedInt32Variable), METADATA_PARAMS(Z_Construct_UClass_UIntSerialization_Statics::NewProp_UnsignedInt32Variable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIntSerialization_Statics::NewProp_UnsignedInt32Variable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIntSerialization_Statics::NewProp_UnsignedInt64Variable_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/IntSerialization.h" },
	};
#endif
	const UECodeGen_Private::FFInt64PropertyParams Z_Construct_UClass_UIntSerialization_Statics::NewProp_UnsignedInt64Variable = { "UnsignedInt64Variable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIntSerialization, UnsignedInt64Variable), METADATA_PARAMS(Z_Construct_UClass_UIntSerialization_Statics::NewProp_UnsignedInt64Variable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIntSerialization_Statics::NewProp_UnsignedInt64Variable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIntSerialization_Statics::NewProp_SignedInt8Variable_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/IntSerialization.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UIntSerialization_Statics::NewProp_SignedInt8Variable = { "SignedInt8Variable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIntSerialization, SignedInt8Variable), METADATA_PARAMS(Z_Construct_UClass_UIntSerialization_Statics::NewProp_SignedInt8Variable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIntSerialization_Statics::NewProp_SignedInt8Variable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIntSerialization_Statics::NewProp_SignedInt16Variable_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/IntSerialization.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UClass_UIntSerialization_Statics::NewProp_SignedInt16Variable = { "SignedInt16Variable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIntSerialization, SignedInt16Variable), METADATA_PARAMS(Z_Construct_UClass_UIntSerialization_Statics::NewProp_SignedInt16Variable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIntSerialization_Statics::NewProp_SignedInt16Variable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIntSerialization_Statics::NewProp_SignedInt64Variable_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/IntSerialization.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UIntSerialization_Statics::NewProp_SignedInt64Variable = { "SignedInt64Variable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIntSerialization, SignedInt64Variable), METADATA_PARAMS(Z_Construct_UClass_UIntSerialization_Statics::NewProp_SignedInt64Variable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIntSerialization_Statics::NewProp_SignedInt64Variable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIntSerialization_Statics::NewProp_UnsignedInt8Variable_MetaData[] = {
		{ "Comment", "//Existing types\n" },
		{ "ModuleRelativePath", "Classes/Engine/IntSerialization.h" },
		{ "ToolTip", "Existing types" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIntSerialization_Statics::NewProp_UnsignedInt8Variable = { "UnsignedInt8Variable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIntSerialization, UnsignedInt8Variable), nullptr, METADATA_PARAMS(Z_Construct_UClass_UIntSerialization_Statics::NewProp_UnsignedInt8Variable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIntSerialization_Statics::NewProp_UnsignedInt8Variable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIntSerialization_Statics::NewProp_SignedInt32Variable_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/IntSerialization.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIntSerialization_Statics::NewProp_SignedInt32Variable = { "SignedInt32Variable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIntSerialization, SignedInt32Variable), METADATA_PARAMS(Z_Construct_UClass_UIntSerialization_Statics::NewProp_SignedInt32Variable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIntSerialization_Statics::NewProp_SignedInt32Variable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIntSerialization_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIntSerialization_Statics::NewProp_UnsignedInt16Variable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIntSerialization_Statics::NewProp_UnsignedInt32Variable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIntSerialization_Statics::NewProp_UnsignedInt64Variable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIntSerialization_Statics::NewProp_SignedInt8Variable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIntSerialization_Statics::NewProp_SignedInt16Variable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIntSerialization_Statics::NewProp_SignedInt64Variable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIntSerialization_Statics::NewProp_UnsignedInt8Variable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIntSerialization_Statics::NewProp_SignedInt32Variable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIntSerialization_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIntSerialization>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIntSerialization_Statics::ClassParams = {
		&UIntSerialization::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIntSerialization_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIntSerialization_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIntSerialization_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIntSerialization_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIntSerialization()
	{
		if (!Z_Registration_Info_UClass_UIntSerialization.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIntSerialization.OuterSingleton, Z_Construct_UClass_UIntSerialization_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIntSerialization.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UIntSerialization>()
	{
		return UIntSerialization::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIntSerialization);
	UIntSerialization::~UIntSerialization() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_IntSerialization_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_IntSerialization_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIntSerialization, UIntSerialization::StaticClass, TEXT("UIntSerialization"), &Z_Registration_Info_UClass_UIntSerialization, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIntSerialization), 4137654698U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_IntSerialization_h_574233916(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_IntSerialization_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_IntSerialization_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
