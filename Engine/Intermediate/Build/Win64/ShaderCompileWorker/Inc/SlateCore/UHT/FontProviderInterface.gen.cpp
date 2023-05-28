// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fonts/FontProviderInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFontProviderInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	SLATECORE_API UClass* Z_Construct_UClass_UFontProviderInterface();
	SLATECORE_API UClass* Z_Construct_UClass_UFontProviderInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References
	void UFontProviderInterface::StaticRegisterNativesUFontProviderInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFontProviderInterface);
	UClass* Z_Construct_UClass_UFontProviderInterface_NoRegister()
	{
		return UFontProviderInterface::StaticClass();
	}
	struct Z_Construct_UClass_UFontProviderInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFontProviderInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFontProviderInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Fonts/FontProviderInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFontProviderInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFontProviderInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFontProviderInterface_Statics::ClassParams = {
		&UFontProviderInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFontProviderInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFontProviderInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFontProviderInterface()
	{
		if (!Z_Registration_Info_UClass_UFontProviderInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFontProviderInterface.OuterSingleton, Z_Construct_UClass_UFontProviderInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFontProviderInterface.OuterSingleton;
	}
	template<> SLATECORE_API UClass* StaticClass<UFontProviderInterface>()
	{
		return UFontProviderInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFontProviderInterface);
	UFontProviderInterface::~UFontProviderInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFontProviderInterface, UFontProviderInterface::StaticClass, TEXT("UFontProviderInterface"), &Z_Registration_Info_UClass_UFontProviderInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFontProviderInterface), 2375322940U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_3372517436(TEXT("/Script/SlateCore"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
