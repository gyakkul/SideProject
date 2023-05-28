// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MergeCommand.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMergeCommand() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_UserToolBoxBasicCommand();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UMerge();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UMerge_NoRegister();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUTBBaseCommand();
// End Cross Module References
	void UMerge::StaticRegisterNativesUMerge()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMerge);
	UClass* Z_Construct_UClass_UMerge_NoRegister()
	{
		return UMerge::StaticClass();
	}
	struct Z_Construct_UClass_UMerge_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Advanced_MetaData[];
#endif
		static void NewProp_Advanced_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Advanced;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMerge_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUTBBaseCommand,
		(UObject* (*)())Z_Construct_UPackage__Script_UserToolBoxBasicCommand,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMerge_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MergeCommand.h" },
		{ "ModuleRelativePath", "Public/MergeCommand.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMerge_Statics::NewProp_Advanced_MetaData[] = {
		{ "Category", "Merge Command" },
		{ "ModuleRelativePath", "Public/MergeCommand.h" },
	};
#endif
	void Z_Construct_UClass_UMerge_Statics::NewProp_Advanced_SetBit(void* Obj)
	{
		((UMerge*)Obj)->Advanced = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMerge_Statics::NewProp_Advanced = { "Advanced", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMerge), &Z_Construct_UClass_UMerge_Statics::NewProp_Advanced_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMerge_Statics::NewProp_Advanced_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMerge_Statics::NewProp_Advanced_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMerge_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMerge_Statics::NewProp_Advanced,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMerge_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMerge>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMerge_Statics::ClassParams = {
		&UMerge::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMerge_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMerge_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMerge_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMerge_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMerge()
	{
		if (!Z_Registration_Info_UClass_UMerge.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMerge.OuterSingleton, Z_Construct_UClass_UMerge_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMerge.OuterSingleton;
	}
	template<> USERTOOLBOXBASICCOMMAND_API UClass* StaticClass<UMerge>()
	{
		return UMerge::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMerge);
	UMerge::~UMerge() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_MergeCommand_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_MergeCommand_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMerge, UMerge::StaticClass, TEXT("UMerge"), &Z_Registration_Info_UClass_UMerge, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMerge), 3642768230U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_MergeCommand_h_398842451(TEXT("/Script/UserToolBoxBasicCommand"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_MergeCommand_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_MergeCommand_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
