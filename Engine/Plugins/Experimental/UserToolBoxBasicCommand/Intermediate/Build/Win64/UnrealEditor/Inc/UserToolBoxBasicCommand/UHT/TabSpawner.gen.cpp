// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TabSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTabSpawner() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_UserToolBoxBasicCommand();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UTabSpawner();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UTabSpawner_NoRegister();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUTBBaseCommand();
// End Cross Module References
	void UTabSpawner::StaticRegisterNativesUTabSpawner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTabSpawner);
	UClass* Z_Construct_UClass_UTabSpawner_NoRegister()
	{
		return UTabSpawner::StaticClass();
	}
	struct Z_Construct_UClass_UTabSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TabName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTabSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUTBBaseCommand,
		(UObject* (*)())Z_Construct_UPackage__Script_UserToolBoxBasicCommand,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTabSpawner_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TabSpawner.h" },
		{ "ModuleRelativePath", "Public/TabSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTabSpawner_Statics::NewProp_TabName_MetaData[] = {
		{ "Category", "TabSpawnerCommand" },
		{ "ModuleRelativePath", "Public/TabSpawner.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTabSpawner_Statics::NewProp_TabName = { "TabName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTabSpawner, TabName), METADATA_PARAMS(Z_Construct_UClass_UTabSpawner_Statics::NewProp_TabName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTabSpawner_Statics::NewProp_TabName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTabSpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTabSpawner_Statics::NewProp_TabName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTabSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTabSpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTabSpawner_Statics::ClassParams = {
		&UTabSpawner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTabSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTabSpawner_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTabSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTabSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTabSpawner()
	{
		if (!Z_Registration_Info_UClass_UTabSpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTabSpawner.OuterSingleton, Z_Construct_UClass_UTabSpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTabSpawner.OuterSingleton;
	}
	template<> USERTOOLBOXBASICCOMMAND_API UClass* StaticClass<UTabSpawner>()
	{
		return UTabSpawner::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTabSpawner);
	UTabSpawner::~UTabSpawner() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_TabSpawner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_TabSpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTabSpawner, UTabSpawner::StaticClass, TEXT("UTabSpawner"), &Z_Registration_Info_UClass_UTabSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTabSpawner), 461176189U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_TabSpawner_h_1211972510(TEXT("/Script/UserToolBoxBasicCommand"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_TabSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_TabSpawner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
