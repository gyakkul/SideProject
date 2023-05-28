// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeWriterBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeWriterBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeWriterBase();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeWriterBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeCore();
// End Cross Module References
	void UInterchangeWriterBase::StaticRegisterNativesUInterchangeWriterBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeWriterBase);
	UClass* Z_Construct_UClass_UInterchangeWriterBase_NoRegister()
	{
		return UInterchangeWriterBase::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeWriterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeWriterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeWriterBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangeWriterBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InterchangeWriterBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeWriterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeWriterBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeWriterBase_Statics::ClassParams = {
		&UInterchangeWriterBase::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeWriterBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeWriterBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeWriterBase()
	{
		if (!Z_Registration_Info_UClass_UInterchangeWriterBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeWriterBase.OuterSingleton, Z_Construct_UClass_UInterchangeWriterBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeWriterBase.OuterSingleton;
	}
	template<> INTERCHANGECORE_API UClass* StaticClass<UInterchangeWriterBase>()
	{
		return UInterchangeWriterBase::StaticClass();
	}
	UInterchangeWriterBase::UInterchangeWriterBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeWriterBase);
	UInterchangeWriterBase::~UInterchangeWriterBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeWriterBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeWriterBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeWriterBase, UInterchangeWriterBase::StaticClass, TEXT("UInterchangeWriterBase"), &Z_Registration_Info_UClass_UInterchangeWriterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeWriterBase), 952603812U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeWriterBase_h_3123512055(TEXT("/Script/InterchangeCore"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeWriterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeWriterBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
