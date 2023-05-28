// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "INodeAndChannelMappings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeINodeAndChannelMappings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	MOVIESCENE_API UClass* Z_Construct_UClass_UNodeAndChannelMappings();
	MOVIESCENE_API UClass* Z_Construct_UClass_UNodeAndChannelMappings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	void UNodeAndChannelMappings::StaticRegisterNativesUNodeAndChannelMappings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNodeAndChannelMappings);
	UClass* Z_Construct_UClass_UNodeAndChannelMappings_NoRegister()
	{
		return UNodeAndChannelMappings::StaticClass();
	}
	struct Z_Construct_UClass_UNodeAndChannelMappings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNodeAndChannelMappings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodeAndChannelMappings_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/INodeAndChannelMappings.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNodeAndChannelMappings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INodeAndChannelMappings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNodeAndChannelMappings_Statics::ClassParams = {
		&UNodeAndChannelMappings::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNodeAndChannelMappings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNodeAndChannelMappings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNodeAndChannelMappings()
	{
		if (!Z_Registration_Info_UClass_UNodeAndChannelMappings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNodeAndChannelMappings.OuterSingleton, Z_Construct_UClass_UNodeAndChannelMappings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNodeAndChannelMappings.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UNodeAndChannelMappings>()
	{
		return UNodeAndChannelMappings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNodeAndChannelMappings);
	UNodeAndChannelMappings::~UNodeAndChannelMappings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_INodeAndChannelMappings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_INodeAndChannelMappings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNodeAndChannelMappings, UNodeAndChannelMappings::StaticClass, TEXT("UNodeAndChannelMappings"), &Z_Registration_Info_UClass_UNodeAndChannelMappings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNodeAndChannelMappings), 1983046986U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_INodeAndChannelMappings_h_783321019(TEXT("/Script/MovieScene"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_INodeAndChannelMappings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_INodeAndChannelMappings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
