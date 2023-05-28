// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fonts/FontFaceInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFontFaceInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	SLATECORE_API UClass* Z_Construct_UClass_UFontFaceInterface();
	SLATECORE_API UClass* Z_Construct_UClass_UFontFaceInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References
	void UFontFaceInterface::StaticRegisterNativesUFontFaceInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFontFaceInterface);
	UClass* Z_Construct_UClass_UFontFaceInterface_NoRegister()
	{
		return UFontFaceInterface::StaticClass();
	}
	struct Z_Construct_UClass_UFontFaceInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFontFaceInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFontFaceInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Fonts/FontFaceInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFontFaceInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFontFaceInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFontFaceInterface_Statics::ClassParams = {
		&UFontFaceInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFontFaceInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFontFaceInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFontFaceInterface()
	{
		if (!Z_Registration_Info_UClass_UFontFaceInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFontFaceInterface.OuterSingleton, Z_Construct_UClass_UFontFaceInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFontFaceInterface.OuterSingleton;
	}
	template<> SLATECORE_API UClass* StaticClass<UFontFaceInterface>()
	{
		return UFontFaceInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFontFaceInterface);
	UFontFaceInterface::~UFontFaceInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontFaceInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontFaceInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFontFaceInterface, UFontFaceInterface::StaticClass, TEXT("UFontFaceInterface"), &Z_Registration_Info_UClass_UFontFaceInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFontFaceInterface), 3832912682U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontFaceInterface_h_3573492267(TEXT("/Script/SlateCore"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontFaceInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontFaceInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
