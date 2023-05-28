// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/LODSyncInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLODSyncInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_ULODSyncInterface();
	ENGINE_API UClass* Z_Construct_UClass_ULODSyncInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ULODSyncInterface::StaticRegisterNativesULODSyncInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULODSyncInterface);
	UClass* Z_Construct_UClass_ULODSyncInterface_NoRegister()
	{
		return ULODSyncInterface::StaticClass();
	}
	struct Z_Construct_UClass_ULODSyncInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULODSyncInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULODSyncInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/LODSyncInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULODSyncInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILODSyncInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULODSyncInterface_Statics::ClassParams = {
		&ULODSyncInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULODSyncInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULODSyncInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULODSyncInterface()
	{
		if (!Z_Registration_Info_UClass_ULODSyncInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULODSyncInterface.OuterSingleton, Z_Construct_UClass_ULODSyncInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULODSyncInterface.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ULODSyncInterface>()
	{
		return ULODSyncInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULODSyncInterface);
	ULODSyncInterface::~ULODSyncInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULODSyncInterface, ULODSyncInterface::StaticClass, TEXT("ULODSyncInterface"), &Z_Registration_Info_UClass_ULODSyncInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULODSyncInterface), 2871425250U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_1294954157(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
