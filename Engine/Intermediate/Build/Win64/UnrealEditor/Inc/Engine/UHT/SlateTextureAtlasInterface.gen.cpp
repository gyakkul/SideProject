// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Slate/SlateTextureAtlasInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateTextureAtlasInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_USlateTextureAtlasInterface();
	ENGINE_API UClass* Z_Construct_UClass_USlateTextureAtlasInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USlateTextureAtlasInterface::StaticRegisterNativesUSlateTextureAtlasInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USlateTextureAtlasInterface);
	UClass* Z_Construct_UClass_USlateTextureAtlasInterface_NoRegister()
	{
		return USlateTextureAtlasInterface::StaticClass();
	}
	struct Z_Construct_UClass_USlateTextureAtlasInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlateTextureAtlasInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateTextureAtlasInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Slate/SlateTextureAtlasInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlateTextureAtlasInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISlateTextureAtlasInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USlateTextureAtlasInterface_Statics::ClassParams = {
		&USlateTextureAtlasInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USlateTextureAtlasInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlateTextureAtlasInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlateTextureAtlasInterface()
	{
		if (!Z_Registration_Info_UClass_USlateTextureAtlasInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USlateTextureAtlasInterface.OuterSingleton, Z_Construct_UClass_USlateTextureAtlasInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USlateTextureAtlasInterface.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USlateTextureAtlasInterface>()
	{
		return USlateTextureAtlasInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlateTextureAtlasInterface);
	USlateTextureAtlasInterface::~USlateTextureAtlasInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Slate_SlateTextureAtlasInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Slate_SlateTextureAtlasInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USlateTextureAtlasInterface, USlateTextureAtlasInterface::StaticClass, TEXT("USlateTextureAtlasInterface"), &Z_Registration_Info_UClass_USlateTextureAtlasInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USlateTextureAtlasInterface), 2007061772U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Slate_SlateTextureAtlasInterface_h_1496154014(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Slate_SlateTextureAtlasInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Slate_SlateTextureAtlasInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
