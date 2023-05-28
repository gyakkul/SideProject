// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/DestructibleInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDestructibleInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_UDestructibleInterface();
	ENGINE_API UClass* Z_Construct_UClass_UDestructibleInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UDestructibleInterface::StaticRegisterNativesUDestructibleInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDestructibleInterface);
	UClass* Z_Construct_UClass_UDestructibleInterface_NoRegister()
	{
		return UDestructibleInterface::StaticClass();
	}
	struct Z_Construct_UClass_UDestructibleInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDestructibleInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDestructibleInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DestructibleInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDestructibleInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDestructibleInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDestructibleInterface_Statics::ClassParams = {
		&UDestructibleInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDestructibleInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDestructibleInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDestructibleInterface()
	{
		if (!Z_Registration_Info_UClass_UDestructibleInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDestructibleInterface.OuterSingleton, Z_Construct_UClass_UDestructibleInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDestructibleInterface.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UDestructibleInterface>()
	{
		return UDestructibleInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDestructibleInterface);
	UDestructibleInterface::~UDestructibleInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDestructibleInterface, UDestructibleInterface::StaticClass, TEXT("UDestructibleInterface"), &Z_Registration_Info_UClass_UDestructibleInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDestructibleInterface), 4143378890U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_3731117816(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
