// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/NamedSlotInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNamedSlotInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UMG_API UClass* Z_Construct_UClass_UNamedSlotInterface();
	UMG_API UClass* Z_Construct_UClass_UNamedSlotInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	void UNamedSlotInterface::StaticRegisterNativesUNamedSlotInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNamedSlotInterface);
	UClass* Z_Construct_UClass_UNamedSlotInterface_NoRegister()
	{
		return UNamedSlotInterface::StaticClass();
	}
	struct Z_Construct_UClass_UNamedSlotInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNamedSlotInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNamedSlotInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Components/NamedSlotInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNamedSlotInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INamedSlotInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNamedSlotInterface_Statics::ClassParams = {
		&UNamedSlotInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNamedSlotInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNamedSlotInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNamedSlotInterface()
	{
		if (!Z_Registration_Info_UClass_UNamedSlotInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNamedSlotInterface.OuterSingleton, Z_Construct_UClass_UNamedSlotInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNamedSlotInterface.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UNamedSlotInterface>()
	{
		return UNamedSlotInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNamedSlotInterface);
	UNamedSlotInterface::~UNamedSlotInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_NamedSlotInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_NamedSlotInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNamedSlotInterface, UNamedSlotInterface::StaticClass, TEXT("UNamedSlotInterface"), &Z_Registration_Info_UClass_UNamedSlotInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNamedSlotInterface), 982470384U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_NamedSlotInterface_h_657036550(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_NamedSlotInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_NamedSlotInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
