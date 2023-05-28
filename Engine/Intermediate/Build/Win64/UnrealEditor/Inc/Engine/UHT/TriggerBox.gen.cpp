// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TriggerBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerBox() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBase();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ATriggerBox::StaticRegisterNativesATriggerBox()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATriggerBox);
	UClass* Z_Construct_UClass_ATriggerBox_NoRegister()
	{
		return ATriggerBox::StaticClass();
	}
	struct Z_Construct_UClass_ATriggerBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATriggerBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBox_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A box shaped trigger, used to generate overlap events in the level */" },
		{ "IncludePath", "Engine/TriggerBox.h" },
		{ "ModuleRelativePath", "Classes/Engine/TriggerBox.h" },
		{ "ToolTip", "A box shaped trigger, used to generate overlap events in the level" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATriggerBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATriggerBox>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATriggerBox_Statics::ClassParams = {
		&ATriggerBox::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATriggerBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATriggerBox()
	{
		if (!Z_Registration_Info_UClass_ATriggerBox.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATriggerBox.OuterSingleton, Z_Construct_UClass_ATriggerBox_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATriggerBox.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ATriggerBox>()
	{
		return ATriggerBox::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATriggerBox);
	ATriggerBox::~ATriggerBox() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerBox_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerBox_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATriggerBox, ATriggerBox::StaticClass, TEXT("ATriggerBox"), &Z_Registration_Info_UClass_ATriggerBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATriggerBox), 65773558U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerBox_h_1811939939(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerBox_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
