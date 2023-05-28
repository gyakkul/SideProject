// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/ActorDescContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorDescContainer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UActorDescContainer();
	ENGINE_API UClass* Z_Construct_UClass_UActorDescContainer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UActorDescContainer::StaticRegisterNativesUActorDescContainer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorDescContainer);
	UClass* Z_Construct_UClass_UActorDescContainer_NoRegister()
	{
		return UActorDescContainer::StaticClass();
	}
	struct Z_Construct_UClass_UActorDescContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_World;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorDescContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorDescContainer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/ActorDescContainer.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/ActorDescContainer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorDescContainer_Statics::NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/ActorDescContainer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UActorDescContainer_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorDescContainer, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActorDescContainer_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorDescContainer_Statics::NewProp_World_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorDescContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorDescContainer_Statics::NewProp_World,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorDescContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorDescContainer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorDescContainer_Statics::ClassParams = {
		&UActorDescContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UActorDescContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UActorDescContainer_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UActorDescContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorDescContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorDescContainer()
	{
		if (!Z_Registration_Info_UClass_UActorDescContainer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorDescContainer.OuterSingleton, Z_Construct_UClass_UActorDescContainer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorDescContainer.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UActorDescContainer>()
	{
		return UActorDescContainer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorDescContainer);
	UActorDescContainer::~UActorDescContainer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorDescContainer, UActorDescContainer::StaticClass, TEXT("UActorDescContainer"), &Z_Registration_Info_UClass_UActorDescContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorDescContainer), 1589763482U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainer_h_3202793608(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
