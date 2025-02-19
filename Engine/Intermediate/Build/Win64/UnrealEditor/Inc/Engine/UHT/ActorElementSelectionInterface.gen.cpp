// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Elements/Actor/ActorElementSelectionInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorElementSelectionInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UActorElementSelectionInterface();
	ENGINE_API UClass* Z_Construct_UClass_UActorElementSelectionInterface_NoRegister();
	TYPEDELEMENTRUNTIME_API UClass* Z_Construct_UClass_UTypedElementSelectionInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UActorElementSelectionInterface::StaticRegisterNativesUActorElementSelectionInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorElementSelectionInterface);
	UClass* Z_Construct_UClass_UActorElementSelectionInterface_NoRegister()
	{
		return UActorElementSelectionInterface::StaticClass();
	}
	struct Z_Construct_UClass_UActorElementSelectionInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorElementSelectionInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorElementSelectionInterface_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Elements/Actor/ActorElementSelectionInterface.h" },
		{ "ModuleRelativePath", "Public/Elements/Actor/ActorElementSelectionInterface.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UActorElementSelectionInterface_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTypedElementSelectionInterface_NoRegister, (int32)VTABLE_OFFSET(UActorElementSelectionInterface, ITypedElementSelectionInterface), false },  // 1929621398
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorElementSelectionInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorElementSelectionInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorElementSelectionInterface_Statics::ClassParams = {
		&UActorElementSelectionInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorElementSelectionInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorElementSelectionInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorElementSelectionInterface()
	{
		if (!Z_Registration_Info_UClass_UActorElementSelectionInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorElementSelectionInterface.OuterSingleton, Z_Construct_UClass_UActorElementSelectionInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorElementSelectionInterface.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UActorElementSelectionInterface>()
	{
		return UActorElementSelectionInterface::StaticClass();
	}
	UActorElementSelectionInterface::UActorElementSelectionInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorElementSelectionInterface);
	UActorElementSelectionInterface::~UActorElementSelectionInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementSelectionInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementSelectionInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorElementSelectionInterface, UActorElementSelectionInterface::StaticClass, TEXT("UActorElementSelectionInterface"), &Z_Registration_Info_UClass_UActorElementSelectionInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorElementSelectionInterface), 846643116U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementSelectionInterface_h_1959318809(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementSelectionInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementSelectionInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
