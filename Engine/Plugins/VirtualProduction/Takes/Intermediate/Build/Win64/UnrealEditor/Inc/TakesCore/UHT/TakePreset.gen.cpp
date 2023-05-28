// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TakePreset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTakePreset() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	TAKESCORE_API UClass* Z_Construct_UClass_UTakePreset();
	TAKESCORE_API UClass* Z_Construct_UClass_UTakePreset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TakesCore();
// End Cross Module References
	void UTakePreset::StaticRegisterNativesUTakePreset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTakePreset);
	UClass* Z_Construct_UClass_UTakePreset_NoRegister()
	{
		return UTakePreset::StaticClass();
	}
	struct Z_Construct_UClass_UTakePreset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTakePreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TakesCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakePreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Take preset that is stored as an asset comprising a ULevelSequence, and a set of actor recording sources\n */" },
		{ "IncludePath", "TakePreset.h" },
		{ "ModuleRelativePath", "Public/TakePreset.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Take preset that is stored as an asset comprising a ULevelSequence, and a set of actor recording sources" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakePreset_Statics::NewProp_LevelSequence_MetaData[] = {
		{ "Comment", "/** Instanced level sequence template that is used to define a starting point for a new take recording */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TakePreset.h" },
		{ "ToolTip", "Instanced level sequence template that is used to define a starting point for a new take recording" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTakePreset_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0046000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakePreset, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTakePreset_Statics::NewProp_LevelSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakePreset_Statics::NewProp_LevelSequence_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTakePreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakePreset_Statics::NewProp_LevelSequence,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTakePreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTakePreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTakePreset_Statics::ClassParams = {
		&UTakePreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTakePreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTakePreset_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTakePreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTakePreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTakePreset()
	{
		if (!Z_Registration_Info_UClass_UTakePreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTakePreset.OuterSingleton, Z_Construct_UClass_UTakePreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTakePreset.OuterSingleton;
	}
	template<> TAKESCORE_API UClass* StaticClass<UTakePreset>()
	{
		return UTakePreset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTakePreset);
	UTakePreset::~UTakePreset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakePreset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakePreset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTakePreset, UTakePreset::StaticClass, TEXT("UTakePreset"), &Z_Registration_Info_UClass_UTakePreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTakePreset), 93232198U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakePreset_h_4142526993(TEXT("/Script/TakesCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakePreset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakePreset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
