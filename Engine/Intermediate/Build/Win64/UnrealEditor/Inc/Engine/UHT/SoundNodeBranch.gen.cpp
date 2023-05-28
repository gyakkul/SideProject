// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundNodeBranch.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeBranch() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeBranch();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeBranch_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundNodeBranch::StaticRegisterNativesUSoundNodeBranch()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundNodeBranch);
	UClass* Z_Construct_UClass_USoundNodeBranch_NoRegister()
	{
		return USoundNodeBranch::StaticClass();
	}
	struct Z_Construct_UClass_USoundNodeBranch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoolParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoolParameterName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundNodeBranch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeBranch_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Selects a child node based on the value of a boolean parameter\n */" },
		{ "DisplayName", "Branch" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundNodeBranch.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeBranch.h" },
		{ "ToolTip", "Selects a child node based on the value of a boolean parameter" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeBranch_Statics::NewProp_BoolParameterName_MetaData[] = {
		{ "Category", "Branch" },
		{ "Comment", "/** The name of the boolean parameter to use to determine which branch we should take */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeBranch.h" },
		{ "ToolTip", "The name of the boolean parameter to use to determine which branch we should take" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USoundNodeBranch_Statics::NewProp_BoolParameterName = { "BoolParameterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundNodeBranch, BoolParameterName), METADATA_PARAMS(Z_Construct_UClass_USoundNodeBranch_Statics::NewProp_BoolParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeBranch_Statics::NewProp_BoolParameterName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNodeBranch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeBranch_Statics::NewProp_BoolParameterName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundNodeBranch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeBranch>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeBranch_Statics::ClassParams = {
		&USoundNodeBranch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundNodeBranch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeBranch_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundNodeBranch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeBranch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundNodeBranch()
	{
		if (!Z_Registration_Info_UClass_USoundNodeBranch.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundNodeBranch.OuterSingleton, Z_Construct_UClass_USoundNodeBranch_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundNodeBranch.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USoundNodeBranch>()
	{
		return USoundNodeBranch::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeBranch);
	USoundNodeBranch::~USoundNodeBranch() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeBranch_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeBranch_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundNodeBranch, USoundNodeBranch::StaticClass, TEXT("USoundNodeBranch"), &Z_Registration_Info_UClass_USoundNodeBranch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundNodeBranch), 3404977503U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeBranch_h_425523658(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeBranch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeBranch_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
