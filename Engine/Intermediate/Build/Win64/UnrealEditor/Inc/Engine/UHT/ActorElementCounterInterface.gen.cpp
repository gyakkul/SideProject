// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Elements/Actor/ActorElementCounterInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorElementCounterInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UActorElementCounterInterface();
	ENGINE_API UClass* Z_Construct_UClass_UActorElementCounterInterface_NoRegister();
	TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementCounterInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UActorElementCounterInterface::StaticRegisterNativesUActorElementCounterInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorElementCounterInterface);
	UClass* Z_Construct_UClass_UActorElementCounterInterface_NoRegister()
	{
		return UActorElementCounterInterface::StaticClass();
	}
	struct Z_Construct_UClass_UActorElementCounterInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorElementCounterInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorElementCounterInterface_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Elements/Actor/ActorElementCounterInterface.h" },
		{ "ModuleRelativePath", "Public/Elements/Actor/ActorElementCounterInterface.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UActorElementCounterInterface_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTypedElementCounterInterface_NoRegister, (int32)VTABLE_OFFSET(UActorElementCounterInterface, ITypedElementCounterInterface), false },  // 776443441
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorElementCounterInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorElementCounterInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorElementCounterInterface_Statics::ClassParams = {
		&UActorElementCounterInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorElementCounterInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorElementCounterInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorElementCounterInterface()
	{
		if (!Z_Registration_Info_UClass_UActorElementCounterInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorElementCounterInterface.OuterSingleton, Z_Construct_UClass_UActorElementCounterInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorElementCounterInterface.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UActorElementCounterInterface>()
	{
		return UActorElementCounterInterface::StaticClass();
	}
	UActorElementCounterInterface::UActorElementCounterInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorElementCounterInterface);
	UActorElementCounterInterface::~UActorElementCounterInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementCounterInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementCounterInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorElementCounterInterface, UActorElementCounterInterface::StaticClass, TEXT("UActorElementCounterInterface"), &Z_Registration_Info_UClass_UActorElementCounterInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorElementCounterInterface), 1652929069U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementCounterInterface_h_2798371715(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementCounterInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementCounterInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
