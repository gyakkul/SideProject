// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToggleCommand.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToggleCommand() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_UserToolBoxBasicCommand();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UBaseCompositeCommand();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UToggleCommand();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UToggleCommand_NoRegister();
// End Cross Module References
	void UToggleCommand::StaticRegisterNativesUToggleCommand()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UToggleCommand);
	UClass* Z_Construct_UClass_UToggleCommand_NoRegister()
	{
		return UToggleCommand::StaticClass();
	}
	struct Z_Construct_UClass_UToggleCommand_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UToggleCommand_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseCompositeCommand,
		(UObject* (*)())Z_Construct_UPackage__Script_UserToolBoxBasicCommand,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToggleCommand_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ToggleCommand.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ToggleCommand.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UToggleCommand_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToggleCommand>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UToggleCommand_Statics::ClassParams = {
		&UToggleCommand::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UToggleCommand_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UToggleCommand_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UToggleCommand()
	{
		if (!Z_Registration_Info_UClass_UToggleCommand.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToggleCommand.OuterSingleton, Z_Construct_UClass_UToggleCommand_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UToggleCommand.OuterSingleton;
	}
	template<> USERTOOLBOXBASICCOMMAND_API UClass* StaticClass<UToggleCommand>()
	{
		return UToggleCommand::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UToggleCommand);
	UToggleCommand::~UToggleCommand() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ToggleCommand_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ToggleCommand_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UToggleCommand, UToggleCommand::StaticClass, TEXT("UToggleCommand"), &Z_Registration_Info_UClass_UToggleCommand, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToggleCommand), 456063687U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ToggleCommand_h_1732168564(TEXT("/Script/UserToolBoxBasicCommand"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ToggleCommand_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ToggleCommand_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
