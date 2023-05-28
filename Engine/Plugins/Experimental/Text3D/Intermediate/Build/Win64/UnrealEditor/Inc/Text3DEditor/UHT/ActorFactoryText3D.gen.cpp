// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorFactoryText3D.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryText3D() {}
// Cross Module References
	TEXT3DEDITOR_API UClass* Z_Construct_UClass_UActorFactoryText3D();
	TEXT3DEDITOR_API UClass* Z_Construct_UClass_UActorFactoryText3D_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_Text3DEditor();
// End Cross Module References
	void UActorFactoryText3D::StaticRegisterNativesUActorFactoryText3D()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorFactoryText3D);
	UClass* Z_Construct_UClass_UActorFactoryText3D_NoRegister()
	{
		return UActorFactoryText3D::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryText3D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryText3D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_Text3DEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryText3D_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "ActorFactoryText3D.h" },
		{ "ModuleRelativePath", "Public/ActorFactoryText3D.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryText3D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryText3D>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryText3D_Statics::ClassParams = {
		&UActorFactoryText3D::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000830ACu,
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryText3D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryText3D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryText3D()
	{
		if (!Z_Registration_Info_UClass_UActorFactoryText3D.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactoryText3D.OuterSingleton, Z_Construct_UClass_UActorFactoryText3D_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorFactoryText3D.OuterSingleton;
	}
	template<> TEXT3DEDITOR_API UClass* StaticClass<UActorFactoryText3D>()
	{
		return UActorFactoryText3D::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryText3D);
	UActorFactoryText3D::~UActorFactoryText3D() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Text3D_Source_Text3DEditor_Public_ActorFactoryText3D_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Text3D_Source_Text3DEditor_Public_ActorFactoryText3D_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactoryText3D, UActorFactoryText3D::StaticClass, TEXT("UActorFactoryText3D"), &Z_Registration_Info_UClass_UActorFactoryText3D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactoryText3D), 3207206613U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Text3D_Source_Text3DEditor_Public_ActorFactoryText3D_h_3412414018(TEXT("/Script/Text3DEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Text3D_Source_Text3DEditor_Public_ActorFactoryText3D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Text3D_Source_Text3DEditor_Public_ActorFactoryText3D_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
