// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Elements/Actor/ActorElementHierarchyInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorElementHierarchyInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UActorElementHierarchyInterface();
	ENGINE_API UClass* Z_Construct_UClass_UActorElementHierarchyInterface_NoRegister();
	TYPEDELEMENTRUNTIME_API UClass* Z_Construct_UClass_UTypedElementHierarchyInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UActorElementHierarchyInterface::StaticRegisterNativesUActorElementHierarchyInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorElementHierarchyInterface);
	UClass* Z_Construct_UClass_UActorElementHierarchyInterface_NoRegister()
	{
		return UActorElementHierarchyInterface::StaticClass();
	}
	struct Z_Construct_UClass_UActorElementHierarchyInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorElementHierarchyInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorElementHierarchyInterface_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Elements/Actor/ActorElementHierarchyInterface.h" },
		{ "ModuleRelativePath", "Public/Elements/Actor/ActorElementHierarchyInterface.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UActorElementHierarchyInterface_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTypedElementHierarchyInterface_NoRegister, (int32)VTABLE_OFFSET(UActorElementHierarchyInterface, ITypedElementHierarchyInterface), false },  // 1481080909
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorElementHierarchyInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorElementHierarchyInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorElementHierarchyInterface_Statics::ClassParams = {
		&UActorElementHierarchyInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorElementHierarchyInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorElementHierarchyInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorElementHierarchyInterface()
	{
		if (!Z_Registration_Info_UClass_UActorElementHierarchyInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorElementHierarchyInterface.OuterSingleton, Z_Construct_UClass_UActorElementHierarchyInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorElementHierarchyInterface.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UActorElementHierarchyInterface>()
	{
		return UActorElementHierarchyInterface::StaticClass();
	}
	UActorElementHierarchyInterface::UActorElementHierarchyInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorElementHierarchyInterface);
	UActorElementHierarchyInterface::~UActorElementHierarchyInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementHierarchyInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementHierarchyInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorElementHierarchyInterface, UActorElementHierarchyInterface::StaticClass, TEXT("UActorElementHierarchyInterface"), &Z_Registration_Info_UClass_UActorElementHierarchyInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorElementHierarchyInterface), 1138245036U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementHierarchyInterface_h_1559633829(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementHierarchyInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementHierarchyInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
