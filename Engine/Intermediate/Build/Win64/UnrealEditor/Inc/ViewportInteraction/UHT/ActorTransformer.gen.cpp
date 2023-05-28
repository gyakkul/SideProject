// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorTransformer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorTransformer() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_ViewportInteraction();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UActorTransformer();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UActorTransformer_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportTransformer();
// End Cross Module References
	void UActorTransformer::StaticRegisterNativesUActorTransformer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorTransformer);
	UClass* Z_Construct_UClass_UActorTransformer_NoRegister()
	{
		return UActorTransformer::StaticClass();
	}
	struct Z_Construct_UClass_UActorTransformer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorTransformer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UViewportTransformer,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorTransformer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ActorTransformer.h" },
		{ "ModuleRelativePath", "Public/ActorTransformer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorTransformer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorTransformer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorTransformer_Statics::ClassParams = {
		&UActorTransformer::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UActorTransformer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorTransformer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorTransformer()
	{
		if (!Z_Registration_Info_UClass_UActorTransformer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorTransformer.OuterSingleton, Z_Construct_UClass_UActorTransformer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorTransformer.OuterSingleton;
	}
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<UActorTransformer>()
	{
		return UActorTransformer::StaticClass();
	}
	UActorTransformer::UActorTransformer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorTransformer);
	UActorTransformer::~UActorTransformer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ActorTransformer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ActorTransformer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorTransformer, UActorTransformer::StaticClass, TEXT("UActorTransformer"), &Z_Registration_Info_UClass_UActorTransformer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorTransformer), 3786673198U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ActorTransformer_h_1988716432(TEXT("/Script/ViewportInteraction"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ActorTransformer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ActorTransformer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
