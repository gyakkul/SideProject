// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenlockedTimecodeProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenlockedTimecodeProvider() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTimecodeProvider();
	TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UGenlockedTimecodeProvider();
	TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UGenlockedTimecodeProvider_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TimeManagement();
// End Cross Module References
	void UGenlockedTimecodeProvider::StaticRegisterNativesUGenlockedTimecodeProvider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGenlockedTimecodeProvider);
	UClass* Z_Construct_UClass_UGenlockedTimecodeProvider_NoRegister()
	{
		return UGenlockedTimecodeProvider::StaticClass();
	}
	struct Z_Construct_UClass_UGenlockedTimecodeProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseGenlockToCount_MetaData[];
#endif
		static void NewProp_bUseGenlockToCount_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGenlockToCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGenlockedTimecodeProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTimecodeProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_TimeManagement,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenlockedTimecodeProvider_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This timecode provider base class will try to use the engine genlock sync to adjust its count.\n */" },
		{ "IncludePath", "GenlockedTimecodeProvider.h" },
		{ "ModuleRelativePath", "Public/GenlockedTimecodeProvider.h" },
		{ "ToolTip", "This timecode provider base class will try to use the engine genlock sync to adjust its count." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenlockedTimecodeProvider_Statics::NewProp_bUseGenlockToCount_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Use Genlock Sync to update Timecode count */" },
		{ "ModuleRelativePath", "Public/GenlockedTimecodeProvider.h" },
		{ "ToolTip", "Use Genlock Sync to update Timecode count" },
	};
#endif
	void Z_Construct_UClass_UGenlockedTimecodeProvider_Statics::NewProp_bUseGenlockToCount_SetBit(void* Obj)
	{
		((UGenlockedTimecodeProvider*)Obj)->bUseGenlockToCount = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGenlockedTimecodeProvider_Statics::NewProp_bUseGenlockToCount = { "bUseGenlockToCount", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGenlockedTimecodeProvider), &Z_Construct_UClass_UGenlockedTimecodeProvider_Statics::NewProp_bUseGenlockToCount_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGenlockedTimecodeProvider_Statics::NewProp_bUseGenlockToCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenlockedTimecodeProvider_Statics::NewProp_bUseGenlockToCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGenlockedTimecodeProvider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenlockedTimecodeProvider_Statics::NewProp_bUseGenlockToCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGenlockedTimecodeProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenlockedTimecodeProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenlockedTimecodeProvider_Statics::ClassParams = {
		&UGenlockedTimecodeProvider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGenlockedTimecodeProvider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGenlockedTimecodeProvider_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGenlockedTimecodeProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGenlockedTimecodeProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGenlockedTimecodeProvider()
	{
		if (!Z_Registration_Info_UClass_UGenlockedTimecodeProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenlockedTimecodeProvider.OuterSingleton, Z_Construct_UClass_UGenlockedTimecodeProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGenlockedTimecodeProvider.OuterSingleton;
	}
	template<> TIMEMANAGEMENT_API UClass* StaticClass<UGenlockedTimecodeProvider>()
	{
		return UGenlockedTimecodeProvider::StaticClass();
	}
	UGenlockedTimecodeProvider::UGenlockedTimecodeProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGenlockedTimecodeProvider);
	UGenlockedTimecodeProvider::~UGenlockedTimecodeProvider() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedTimecodeProvider_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedTimecodeProvider_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGenlockedTimecodeProvider, UGenlockedTimecodeProvider::StaticClass, TEXT("UGenlockedTimecodeProvider"), &Z_Registration_Info_UClass_UGenlockedTimecodeProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenlockedTimecodeProvider), 2296885295U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedTimecodeProvider_h_1128112331(TEXT("/Script/TimeManagement"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedTimecodeProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedTimecodeProvider_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
