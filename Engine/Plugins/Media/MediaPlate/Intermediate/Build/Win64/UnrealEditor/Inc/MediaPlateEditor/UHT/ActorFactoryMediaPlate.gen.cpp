// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ActorFactoryMediaPlate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryMediaPlate() {}
// Cross Module References
	MEDIAPLATEEDITOR_API UClass* Z_Construct_UClass_UActorFactoryMediaPlate();
	MEDIAPLATEEDITOR_API UClass* Z_Construct_UClass_UActorFactoryMediaPlate_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_MediaPlateEditor();
// End Cross Module References
	void UActorFactoryMediaPlate::StaticRegisterNativesUActorFactoryMediaPlate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorFactoryMediaPlate);
	UClass* Z_Construct_UClass_UActorFactoryMediaPlate_NoRegister()
	{
		return UActorFactoryMediaPlate::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryMediaPlate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryMediaPlate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaPlateEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryMediaPlate_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "ActorFactoryMediaPlate.h" },
		{ "ModuleRelativePath", "Private/ActorFactoryMediaPlate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryMediaPlate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryMediaPlate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryMediaPlate_Statics::ClassParams = {
		&UActorFactoryMediaPlate::StaticClass,
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
		0x000030ACu,
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryMediaPlate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryMediaPlate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryMediaPlate()
	{
		if (!Z_Registration_Info_UClass_UActorFactoryMediaPlate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactoryMediaPlate.OuterSingleton, Z_Construct_UClass_UActorFactoryMediaPlate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorFactoryMediaPlate.OuterSingleton;
	}
	template<> MEDIAPLATEEDITOR_API UClass* StaticClass<UActorFactoryMediaPlate>()
	{
		return UActorFactoryMediaPlate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryMediaPlate);
	UActorFactoryMediaPlate::~UActorFactoryMediaPlate() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlateEditor_Private_ActorFactoryMediaPlate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlateEditor_Private_ActorFactoryMediaPlate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactoryMediaPlate, UActorFactoryMediaPlate::StaticClass, TEXT("UActorFactoryMediaPlate"), &Z_Registration_Info_UClass_UActorFactoryMediaPlate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactoryMediaPlate), 2042210857U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlateEditor_Private_ActorFactoryMediaPlate_h_1082458227(TEXT("/Script/MediaPlateEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlateEditor_Private_ActorFactoryMediaPlate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlateEditor_Private_ActorFactoryMediaPlate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
