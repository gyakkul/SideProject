// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UTBBaseUICommandInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUTBBaseUICommandInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_UserToolBoxCore();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUTBUICommand();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUTBUICommand_NoRegister();
// End Cross Module References
	void UUTBUICommand::StaticRegisterNativesUUTBUICommand()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUTBUICommand);
	UClass* Z_Construct_UClass_UUTBUICommand_NoRegister()
	{
		return UUTBUICommand::StaticClass();
	}
	struct Z_Construct_UClass_UUTBUICommand_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUTBUICommand_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_UserToolBoxCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUTBUICommand_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UTBBaseUICommandInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUTBUICommand_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IUTBUICommand>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUTBUICommand_Statics::ClassParams = {
		&UUTBUICommand::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUTBUICommand_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUTBUICommand_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUTBUICommand()
	{
		if (!Z_Registration_Info_UClass_UUTBUICommand.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUTBUICommand.OuterSingleton, Z_Construct_UClass_UUTBUICommand_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUTBUICommand.OuterSingleton;
	}
	template<> USERTOOLBOXCORE_API UClass* StaticClass<UUTBUICommand>()
	{
		return UUTBUICommand::StaticClass();
	}
	UUTBUICommand::UUTBUICommand(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUTBUICommand);
	UUTBUICommand::~UUTBUICommand() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommandInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommandInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUTBUICommand, UUTBUICommand::StaticClass, TEXT("UUTBUICommand"), &Z_Registration_Info_UClass_UUTBUICommand, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUTBUICommand), 1942423675U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommandInterface_h_4260447785(TEXT("/Script/UserToolBoxCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommandInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommandInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
