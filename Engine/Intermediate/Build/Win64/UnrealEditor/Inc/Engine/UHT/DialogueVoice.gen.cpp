// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Sound/DialogueVoice.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueVoice() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UDialogueVoice();
	ENGINE_API UClass* Z_Construct_UClass_UDialogueVoice_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EGrammaticalGender();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EGrammaticalNumber();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UDialogueVoice::StaticRegisterNativesUDialogueVoice()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueVoice);
	UClass* Z_Construct_UClass_UDialogueVoice_NoRegister()
	{
		return UDialogueVoice::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueVoice_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Gender;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Plurality_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Plurality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalizationGUID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalizationGUID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueVoice_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueVoice_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Sound/DialogueVoice.h" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueVoice.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueVoice_Statics::NewProp_Gender_MetaData[] = {
		{ "Category", "DialogueVoice" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueVoice.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDialogueVoice_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueVoice, Gender), Z_Construct_UEnum_Engine_EGrammaticalGender, METADATA_PARAMS(Z_Construct_UClass_UDialogueVoice_Statics::NewProp_Gender_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueVoice_Statics::NewProp_Gender_MetaData)) }; // 826714519
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueVoice_Statics::NewProp_Plurality_MetaData[] = {
		{ "Category", "DialogueVoice" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueVoice.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDialogueVoice_Statics::NewProp_Plurality = { "Plurality", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueVoice, Plurality), Z_Construct_UEnum_Engine_EGrammaticalNumber, METADATA_PARAMS(Z_Construct_UClass_UDialogueVoice_Statics::NewProp_Plurality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueVoice_Statics::NewProp_Plurality_MetaData)) }; // 1195137937
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueVoice_Statics::NewProp_LocalizationGUID_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/DialogueVoice.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueVoice_Statics::NewProp_LocalizationGUID = { "LocalizationGUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueVoice, LocalizationGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UDialogueVoice_Statics::NewProp_LocalizationGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueVoice_Statics::NewProp_LocalizationGUID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueVoice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueVoice_Statics::NewProp_Gender,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueVoice_Statics::NewProp_Plurality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueVoice_Statics::NewProp_LocalizationGUID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueVoice_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueVoice>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueVoice_Statics::ClassParams = {
		&UDialogueVoice::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDialogueVoice_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueVoice_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueVoice_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueVoice_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueVoice()
	{
		if (!Z_Registration_Info_UClass_UDialogueVoice.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueVoice.OuterSingleton, Z_Construct_UClass_UDialogueVoice_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDialogueVoice.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UDialogueVoice>()
	{
		return UDialogueVoice::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueVoice);
	UDialogueVoice::~UDialogueVoice() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueVoice_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueVoice_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueVoice, UDialogueVoice::StaticClass, TEXT("UDialogueVoice"), &Z_Registration_Info_UClass_UDialogueVoice, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueVoice), 1431121592U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueVoice_h_635021560(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueVoice_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueVoice_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
