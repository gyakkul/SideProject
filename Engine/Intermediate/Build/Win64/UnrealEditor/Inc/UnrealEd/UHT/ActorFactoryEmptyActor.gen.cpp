// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/ActorFactories/ActorFactoryEmptyActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryEmptyActor() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryEmptyActor();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryEmptyActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UActorFactoryEmptyActor::StaticRegisterNativesUActorFactoryEmptyActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorFactoryEmptyActor);
	UClass* Z_Construct_UClass_UActorFactoryEmptyActor_NoRegister()
	{
		return UActorFactoryEmptyActor::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryEmptyActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVisualizeActor_MetaData[];
#endif
		static void NewProp_bVisualizeActor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisualizeActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryEmptyActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryEmptyActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "ActorFactories/ActorFactoryEmptyActor.h" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactoryEmptyActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryEmptyActor_Statics::NewProp_bVisualizeActor_MetaData[] = {
		{ "Comment", "/** If true a sprite will be added to visualize the actor in the world */" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactoryEmptyActor.h" },
		{ "ToolTip", "If true a sprite will be added to visualize the actor in the world" },
	};
#endif
	void Z_Construct_UClass_UActorFactoryEmptyActor_Statics::NewProp_bVisualizeActor_SetBit(void* Obj)
	{
		((UActorFactoryEmptyActor*)Obj)->bVisualizeActor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActorFactoryEmptyActor_Statics::NewProp_bVisualizeActor = { "bVisualizeActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UActorFactoryEmptyActor), &Z_Construct_UClass_UActorFactoryEmptyActor_Statics::NewProp_bVisualizeActor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActorFactoryEmptyActor_Statics::NewProp_bVisualizeActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryEmptyActor_Statics::NewProp_bVisualizeActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorFactoryEmptyActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorFactoryEmptyActor_Statics::NewProp_bVisualizeActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryEmptyActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryEmptyActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryEmptyActor_Statics::ClassParams = {
		&UActorFactoryEmptyActor::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UActorFactoryEmptyActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryEmptyActor_Statics::PropPointers),
		0,
		0x000830ACu,
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryEmptyActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryEmptyActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryEmptyActor()
	{
		if (!Z_Registration_Info_UClass_UActorFactoryEmptyActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactoryEmptyActor.OuterSingleton, Z_Construct_UClass_UActorFactoryEmptyActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorFactoryEmptyActor.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UActorFactoryEmptyActor>()
	{
		return UActorFactoryEmptyActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryEmptyActor);
	UActorFactoryEmptyActor::~UActorFactoryEmptyActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryEmptyActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryEmptyActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactoryEmptyActor, UActorFactoryEmptyActor::StaticClass, TEXT("UActorFactoryEmptyActor"), &Z_Registration_Info_UClass_UActorFactoryEmptyActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactoryEmptyActor), 3790692743U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryEmptyActor_h_3248915206(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryEmptyActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryEmptyActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
