// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Elements/Actor/ActorElementAssetDataInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorElementAssetDataInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UActorElementAssetDataInterface();
	ENGINE_API UClass* Z_Construct_UClass_UActorElementAssetDataInterface_NoRegister();
	TYPEDELEMENTRUNTIME_API UClass* Z_Construct_UClass_UTypedElementAssetDataInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UActorElementAssetDataInterface::StaticRegisterNativesUActorElementAssetDataInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorElementAssetDataInterface);
	UClass* Z_Construct_UClass_UActorElementAssetDataInterface_NoRegister()
	{
		return UActorElementAssetDataInterface::StaticClass();
	}
	struct Z_Construct_UClass_UActorElementAssetDataInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorElementAssetDataInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorElementAssetDataInterface_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Elements/Actor/ActorElementAssetDataInterface.h" },
		{ "ModuleRelativePath", "Public/Elements/Actor/ActorElementAssetDataInterface.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UActorElementAssetDataInterface_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTypedElementAssetDataInterface_NoRegister, (int32)VTABLE_OFFSET(UActorElementAssetDataInterface, ITypedElementAssetDataInterface), false },  // 1064511925
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorElementAssetDataInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorElementAssetDataInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorElementAssetDataInterface_Statics::ClassParams = {
		&UActorElementAssetDataInterface::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UActorElementAssetDataInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorElementAssetDataInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorElementAssetDataInterface()
	{
		if (!Z_Registration_Info_UClass_UActorElementAssetDataInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorElementAssetDataInterface.OuterSingleton, Z_Construct_UClass_UActorElementAssetDataInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorElementAssetDataInterface.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UActorElementAssetDataInterface>()
	{
		return UActorElementAssetDataInterface::StaticClass();
	}
	UActorElementAssetDataInterface::UActorElementAssetDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorElementAssetDataInterface);
	UActorElementAssetDataInterface::~UActorElementAssetDataInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementAssetDataInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementAssetDataInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorElementAssetDataInterface, UActorElementAssetDataInterface::StaticClass, TEXT("UActorElementAssetDataInterface"), &Z_Registration_Info_UClass_UActorElementAssetDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorElementAssetDataInterface), 2799017002U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementAssetDataInterface_h_526930884(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementAssetDataInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementAssetDataInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
