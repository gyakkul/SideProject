// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompositeCommand.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompositeCommand() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_UserToolBoxBasicCommand();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UBaseCompositeCommand();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UCompositeCommand();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UCompositeCommand_NoRegister();
// End Cross Module References
	void UCompositeCommand::StaticRegisterNativesUCompositeCommand()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCompositeCommand);
	UClass* Z_Construct_UClass_UCompositeCommand_NoRegister()
	{
		return UCompositeCommand::StaticClass();
	}
	struct Z_Construct_UClass_UCompositeCommand_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCompositeCommand_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseCompositeCommand,
		(UObject* (*)())Z_Construct_UPackage__Script_UserToolBoxBasicCommand,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositeCommand_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CompositeCommand.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CompositeCommand.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCompositeCommand_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompositeCommand>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCompositeCommand_Statics::ClassParams = {
		&UCompositeCommand::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCompositeCommand_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeCommand_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCompositeCommand()
	{
		if (!Z_Registration_Info_UClass_UCompositeCommand.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCompositeCommand.OuterSingleton, Z_Construct_UClass_UCompositeCommand_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCompositeCommand.OuterSingleton;
	}
	template<> USERTOOLBOXBASICCOMMAND_API UClass* StaticClass<UCompositeCommand>()
	{
		return UCompositeCommand::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCompositeCommand);
	UCompositeCommand::~UCompositeCommand() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_CompositeCommand_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_CompositeCommand_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCompositeCommand, UCompositeCommand::StaticClass, TEXT("UCompositeCommand"), &Z_Registration_Info_UClass_UCompositeCommand, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCompositeCommand), 2558379381U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_CompositeCommand_h_3811515869(TEXT("/Script/UserToolBoxBasicCommand"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_CompositeCommand_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_CompositeCommand_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
