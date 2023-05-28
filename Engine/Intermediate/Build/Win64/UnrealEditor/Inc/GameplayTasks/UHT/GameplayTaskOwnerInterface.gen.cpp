// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayTaskOwnerInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTaskOwnerInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTaskOwnerInterface();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameplayTasks();
// End Cross Module References
	void UGameplayTaskOwnerInterface::StaticRegisterNativesUGameplayTaskOwnerInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayTaskOwnerInterface);
	UClass* Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister()
	{
		return UGameplayTaskOwnerInterface::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayTaskOwnerInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayTaskOwnerInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTasks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTaskOwnerInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Classes/GameplayTaskOwnerInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayTaskOwnerInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGameplayTaskOwnerInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayTaskOwnerInterface_Statics::ClassParams = {
		&UGameplayTaskOwnerInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGameplayTaskOwnerInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTaskOwnerInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayTaskOwnerInterface()
	{
		if (!Z_Registration_Info_UClass_UGameplayTaskOwnerInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayTaskOwnerInterface.OuterSingleton, Z_Construct_UClass_UGameplayTaskOwnerInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayTaskOwnerInterface.OuterSingleton;
	}
	template<> GAMEPLAYTASKS_API UClass* StaticClass<UGameplayTaskOwnerInterface>()
	{
		return UGameplayTaskOwnerInterface::StaticClass();
	}
	UGameplayTaskOwnerInterface::UGameplayTaskOwnerInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTaskOwnerInterface);
	UGameplayTaskOwnerInterface::~UGameplayTaskOwnerInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayTaskOwnerInterface, UGameplayTaskOwnerInterface::StaticClass, TEXT("UGameplayTaskOwnerInterface"), &Z_Registration_Info_UClass_UGameplayTaskOwnerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayTaskOwnerInterface), 2384509100U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_4244758319(TEXT("/Script/GameplayTasks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
