// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/AI/Navigation/NavPathObserverInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavPathObserverInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_UNavPathObserverInterface();
	ENGINE_API UClass* Z_Construct_UClass_UNavPathObserverInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UNavPathObserverInterface::StaticRegisterNativesUNavPathObserverInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavPathObserverInterface);
	UClass* Z_Construct_UClass_UNavPathObserverInterface_NoRegister()
	{
		return UNavPathObserverInterface::StaticClass();
	}
	struct Z_Construct_UClass_UNavPathObserverInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavPathObserverInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavPathObserverInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavPathObserverInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavPathObserverInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INavPathObserverInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavPathObserverInterface_Statics::ClassParams = {
		&UNavPathObserverInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNavPathObserverInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNavPathObserverInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavPathObserverInterface()
	{
		if (!Z_Registration_Info_UClass_UNavPathObserverInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavPathObserverInterface.OuterSingleton, Z_Construct_UClass_UNavPathObserverInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNavPathObserverInterface.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UNavPathObserverInterface>()
	{
		return UNavPathObserverInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavPathObserverInterface);
	UNavPathObserverInterface::~UNavPathObserverInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNavPathObserverInterface, UNavPathObserverInterface::StaticClass, TEXT("UNavPathObserverInterface"), &Z_Registration_Info_UClass_UNavPathObserverInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavPathObserverInterface), 1846612219U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_1480188737(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
