// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	PAPER2D_API UClass* Z_Construct_UClass_APaperCharacter();
	PAPER2D_API UClass* Z_Construct_UClass_APaperCharacter_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Paper2D();
// End Cross Module References
	void APaperCharacter::StaticRegisterNativesAPaperCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APaperCharacter);
	UClass* Z_Construct_UClass_APaperCharacter_NoRegister()
	{
		return APaperCharacter::StaticClass();
	}
	struct Z_Construct_UClass_APaperCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sprite_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sprite;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaperCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaperCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// APaperCharacter behaves like ACharacter, but uses a UPaperFlipbookComponent instead of a USkeletalMeshComponent as a visual representation\n// Note: The variable named Mesh will not be set up on this actor!\n" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PaperCharacter.h" },
		{ "ModuleRelativePath", "Classes/PaperCharacter.h" },
		{ "ToolTip", "APaperCharacter behaves like ACharacter, but uses a UPaperFlipbookComponent instead of a USkeletalMeshComponent as a visual representation\nNote: The variable named Mesh will not be set up on this actor!" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaperCharacter_Statics::NewProp_Sprite_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "Comment", "/** The main skeletal mesh associated with this Character (optional sub-object). */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/PaperCharacter.h" },
		{ "ToolTip", "The main skeletal mesh associated with this Character (optional sub-object)." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APaperCharacter_Statics::NewProp_Sprite = { "Sprite", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APaperCharacter, Sprite), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APaperCharacter_Statics::NewProp_Sprite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APaperCharacter_Statics::NewProp_Sprite_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APaperCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaperCharacter_Statics::NewProp_Sprite,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaperCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaperCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APaperCharacter_Statics::ClassParams = {
		&APaperCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APaperCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APaperCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APaperCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APaperCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaperCharacter()
	{
		if (!Z_Registration_Info_UClass_APaperCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APaperCharacter.OuterSingleton, Z_Construct_UClass_APaperCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APaperCharacter.OuterSingleton;
	}
	template<> PAPER2D_API UClass* StaticClass<APaperCharacter>()
	{
		return APaperCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaperCharacter);
	APaperCharacter::~APaperCharacter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APaperCharacter, APaperCharacter::StaticClass, TEXT("APaperCharacter"), &Z_Registration_Info_UClass_APaperCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APaperCharacter), 810014106U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperCharacter_h_3655359510(TEXT("/Script/Paper2D"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
