// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Commandlets/ReplaceActorCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplaceActorCommandlet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UReplaceActorCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UReplaceActorCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UReplaceActorCommandlet::StaticRegisterNativesUReplaceActorCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReplaceActorCommandlet);
	UClass* Z_Construct_UClass_UReplaceActorCommandlet_NoRegister()
	{
		return UReplaceActorCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UReplaceActorCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReplaceActorCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplaceActorCommandlet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Commandlet for replacing one kind of actor with another kind of actor, copying changed properties from the most-derived common superclass */" },
		{ "IncludePath", "Commandlets/ReplaceActorCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/ReplaceActorCommandlet.h" },
		{ "ToolTip", "Commandlet for replacing one kind of actor with another kind of actor, copying changed properties from the most-derived common superclass" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReplaceActorCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReplaceActorCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReplaceActorCommandlet_Statics::ClassParams = {
		&UReplaceActorCommandlet::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UReplaceActorCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReplaceActorCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReplaceActorCommandlet()
	{
		if (!Z_Registration_Info_UClass_UReplaceActorCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReplaceActorCommandlet.OuterSingleton, Z_Construct_UClass_UReplaceActorCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReplaceActorCommandlet.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UReplaceActorCommandlet>()
	{
		return UReplaceActorCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReplaceActorCommandlet);
	UReplaceActorCommandlet::~UReplaceActorCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ReplaceActorCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ReplaceActorCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReplaceActorCommandlet, UReplaceActorCommandlet::StaticClass, TEXT("UReplaceActorCommandlet"), &Z_Registration_Info_UClass_UReplaceActorCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReplaceActorCommandlet), 1936862663U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ReplaceActorCommandlet_h_2872010309(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ReplaceActorCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ReplaceActorCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
