// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChangeViewMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChangeViewMode() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EViewModeIndex();
	UPackage* Z_Construct_UPackage__Script_UserToolBoxBasicCommand();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UChangeViewMode();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UChangeViewMode_NoRegister();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUTBBaseCommand();
// End Cross Module References
	void UChangeViewMode::StaticRegisterNativesUChangeViewMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChangeViewMode);
	UClass* Z_Construct_UClass_UChangeViewMode_NoRegister()
	{
		return UChangeViewMode::StaticClass();
	}
	struct Z_Construct_UClass_UChangeViewMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ViewMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChangeViewMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUTBBaseCommand,
		(UObject* (*)())Z_Construct_UPackage__Script_UserToolBoxBasicCommand,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChangeViewMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ChangeViewMode.h" },
		{ "ModuleRelativePath", "Public/ChangeViewMode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChangeViewMode_Statics::NewProp_ViewMode_MetaData[] = {
		{ "Category", "ChangeViewCommand" },
		{ "ModuleRelativePath", "Public/ChangeViewMode.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UChangeViewMode_Statics::NewProp_ViewMode = { "ViewMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChangeViewMode, ViewMode), Z_Construct_UEnum_Engine_EViewModeIndex, METADATA_PARAMS(Z_Construct_UClass_UChangeViewMode_Statics::NewProp_ViewMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChangeViewMode_Statics::NewProp_ViewMode_MetaData)) }; // 1054163023
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChangeViewMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChangeViewMode_Statics::NewProp_ViewMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChangeViewMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChangeViewMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChangeViewMode_Statics::ClassParams = {
		&UChangeViewMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UChangeViewMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UChangeViewMode_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UChangeViewMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChangeViewMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChangeViewMode()
	{
		if (!Z_Registration_Info_UClass_UChangeViewMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChangeViewMode.OuterSingleton, Z_Construct_UClass_UChangeViewMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChangeViewMode.OuterSingleton;
	}
	template<> USERTOOLBOXBASICCOMMAND_API UClass* StaticClass<UChangeViewMode>()
	{
		return UChangeViewMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChangeViewMode);
	UChangeViewMode::~UChangeViewMode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ChangeViewMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ChangeViewMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChangeViewMode, UChangeViewMode::StaticClass, TEXT("UChangeViewMode"), &Z_Registration_Info_UClass_UChangeViewMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChangeViewMode), 786528656U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ChangeViewMode_h_1259180640(TEXT("/Script/UserToolBoxBasicCommand"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ChangeViewMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ChangeViewMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
