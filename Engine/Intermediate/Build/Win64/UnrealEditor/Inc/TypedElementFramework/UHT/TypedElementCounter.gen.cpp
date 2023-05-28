// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Elements/Framework/TypedElementCounter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementCounter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementCounterInterface();
	TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementCounterInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TypedElementFramework();
// End Cross Module References
	void UTypedElementCounterInterface::StaticRegisterNativesUTypedElementCounterInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementCounterInterface);
	UClass* Z_Construct_UClass_UTypedElementCounterInterface_NoRegister()
	{
		return UTypedElementCounterInterface::StaticClass();
	}
	struct Z_Construct_UClass_UTypedElementCounterInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypedElementCounterInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementCounterInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementCounter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypedElementCounterInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITypedElementCounterInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementCounterInterface_Statics::ClassParams = {
		&UTypedElementCounterInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTypedElementCounterInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementCounterInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTypedElementCounterInterface()
	{
		if (!Z_Registration_Info_UClass_UTypedElementCounterInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementCounterInterface.OuterSingleton, Z_Construct_UClass_UTypedElementCounterInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTypedElementCounterInterface.OuterSingleton;
	}
	template<> TYPEDELEMENTFRAMEWORK_API UClass* StaticClass<UTypedElementCounterInterface>()
	{
		return UTypedElementCounterInterface::StaticClass();
	}
	UTypedElementCounterInterface::UTypedElementCounterInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementCounterInterface);
	UTypedElementCounterInterface::~UTypedElementCounterInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementCounter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementCounter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTypedElementCounterInterface, UTypedElementCounterInterface::StaticClass, TEXT("UTypedElementCounterInterface"), &Z_Registration_Info_UClass_UTypedElementCounterInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementCounterInterface), 776443441U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementCounter_h_3004563627(TEXT("/Script/TypedElementFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementCounter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementCounter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
