// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimCompress_RemoveEverySecondKey.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCompress_RemoveEverySecondKey() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAnimCompress_RemoveEverySecondKey::StaticRegisterNativesUAnimCompress_RemoveEverySecondKey()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimCompress_RemoveEverySecondKey);
	UClass* Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_NoRegister()
	{
		return UAnimCompress_RemoveEverySecondKey::StaticClass();
	}
	struct Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinKeys_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinKeys;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStartAtSecondKey_MetaData[];
#endif
		static void NewProp_bStartAtSecondKey_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartAtSecondKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimCompress,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Animation/AnimCompress_RemoveEverySecondKey.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveEverySecondKey.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::NewProp_MinKeys_MetaData[] = {
		{ "Category", "AnimationCompressionAlgorithm_RemoveEverySecondKey" },
		{ "Comment", "/** Animations with fewer than MinKeys will not lose any keys. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveEverySecondKey.h" },
		{ "ToolTip", "Animations with fewer than MinKeys will not lose any keys." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::NewProp_MinKeys = { "MinKeys", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimCompress_RemoveEverySecondKey, MinKeys), METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::NewProp_MinKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::NewProp_MinKeys_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::NewProp_bStartAtSecondKey_MetaData[] = {
		{ "Category", "AnimationCompressionAlgorithm_RemoveEverySecondKey" },
		{ "Comment", "/**\n\x09 * If bStartAtSecondKey is true, remove keys 1,3,5,etc.\n\x09 * If bStartAtSecondKey is false, remove keys 0,2,4,etc.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveEverySecondKey.h" },
		{ "ToolTip", "If bStartAtSecondKey is true, remove keys 1,3,5,etc.\nIf bStartAtSecondKey is false, remove keys 0,2,4,etc." },
	};
#endif
	void Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::NewProp_bStartAtSecondKey_SetBit(void* Obj)
	{
		((UAnimCompress_RemoveEverySecondKey*)Obj)->bStartAtSecondKey = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::NewProp_bStartAtSecondKey = { "bStartAtSecondKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAnimCompress_RemoveEverySecondKey), &Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::NewProp_bStartAtSecondKey_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::NewProp_bStartAtSecondKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::NewProp_bStartAtSecondKey_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::NewProp_MinKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::NewProp_bStartAtSecondKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimCompress_RemoveEverySecondKey>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::ClassParams = {
		&UAnimCompress_RemoveEverySecondKey::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey()
	{
		if (!Z_Registration_Info_UClass_UAnimCompress_RemoveEverySecondKey.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimCompress_RemoveEverySecondKey.OuterSingleton, Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimCompress_RemoveEverySecondKey.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAnimCompress_RemoveEverySecondKey>()
	{
		return UAnimCompress_RemoveEverySecondKey::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimCompress_RemoveEverySecondKey);
	UAnimCompress_RemoveEverySecondKey::~UAnimCompress_RemoveEverySecondKey() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_RemoveEverySecondKey_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_RemoveEverySecondKey_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey, UAnimCompress_RemoveEverySecondKey::StaticClass, TEXT("UAnimCompress_RemoveEverySecondKey"), &Z_Registration_Info_UClass_UAnimCompress_RemoveEverySecondKey, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimCompress_RemoveEverySecondKey), 535696696U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_RemoveEverySecondKey_h_385834843(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_RemoveEverySecondKey_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_RemoveEverySecondKey_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
