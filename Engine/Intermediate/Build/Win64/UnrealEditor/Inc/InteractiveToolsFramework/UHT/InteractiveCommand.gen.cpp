// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveCommand.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractiveCommand() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveCommand();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveCommand_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveCommandArguments();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveCommandArguments_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveCommandResult();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveCommandResult_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void UInteractiveCommandArguments::StaticRegisterNativesUInteractiveCommandArguments()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractiveCommandArguments);
	UClass* Z_Construct_UClass_UInteractiveCommandArguments_NoRegister()
	{
		return UInteractiveCommandArguments::StaticClass();
	}
	struct Z_Construct_UClass_UInteractiveCommandArguments_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractiveCommandArguments_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveCommandArguments_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UInteractiveCommandArguments are arguments passed to a UInteractiveCommand.\n * Subclasses of UInteractiveCommand will generally be paired with subclasses of UInteractiveCommandArguments.\n * \n * The base UInteractiveCommandArguments provides support for transactions via \n * a IToolsContextTransactionsAPI\n */" },
		{ "IncludePath", "InteractiveCommand.h" },
		{ "ModuleRelativePath", "Public/InteractiveCommand.h" },
		{ "ToolTip", "UInteractiveCommandArguments are arguments passed to a UInteractiveCommand.\nSubclasses of UInteractiveCommand will generally be paired with subclasses of UInteractiveCommandArguments.\n\nThe base UInteractiveCommandArguments provides support for transactions via\na IToolsContextTransactionsAPI" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractiveCommandArguments_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractiveCommandArguments>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveCommandArguments_Statics::ClassParams = {
		&UInteractiveCommandArguments::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractiveCommandArguments_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveCommandArguments_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractiveCommandArguments()
	{
		if (!Z_Registration_Info_UClass_UInteractiveCommandArguments.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractiveCommandArguments.OuterSingleton, Z_Construct_UClass_UInteractiveCommandArguments_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractiveCommandArguments.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UInteractiveCommandArguments>()
	{
		return UInteractiveCommandArguments::StaticClass();
	}
	UInteractiveCommandArguments::UInteractiveCommandArguments(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveCommandArguments);
	UInteractiveCommandArguments::~UInteractiveCommandArguments() {}
	void UInteractiveCommandResult::StaticRegisterNativesUInteractiveCommandResult()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractiveCommandResult);
	UClass* Z_Construct_UClass_UInteractiveCommandResult_NoRegister()
	{
		return UInteractiveCommandResult::StaticClass();
	}
	struct Z_Construct_UClass_UInteractiveCommandResult_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractiveCommandResult_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveCommandResult_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UInteractiveCommandResult subclasses are returned from UInteractiveCommands, to allow\n * commands to return custom information.\n */" },
		{ "IncludePath", "InteractiveCommand.h" },
		{ "ModuleRelativePath", "Public/InteractiveCommand.h" },
		{ "ToolTip", "UInteractiveCommandResult subclasses are returned from UInteractiveCommands, to allow\ncommands to return custom information." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractiveCommandResult_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractiveCommandResult>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveCommandResult_Statics::ClassParams = {
		&UInteractiveCommandResult::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractiveCommandResult_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveCommandResult_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractiveCommandResult()
	{
		if (!Z_Registration_Info_UClass_UInteractiveCommandResult.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractiveCommandResult.OuterSingleton, Z_Construct_UClass_UInteractiveCommandResult_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractiveCommandResult.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UInteractiveCommandResult>()
	{
		return UInteractiveCommandResult::StaticClass();
	}
	UInteractiveCommandResult::UInteractiveCommandResult(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveCommandResult);
	UInteractiveCommandResult::~UInteractiveCommandResult() {}
	void UInteractiveCommand::StaticRegisterNativesUInteractiveCommand()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractiveCommand);
	UClass* Z_Construct_UClass_UInteractiveCommand_NoRegister()
	{
		return UInteractiveCommand::StaticClass();
	}
	struct Z_Construct_UClass_UInteractiveCommand_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractiveCommand_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveCommand_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A UInteractiveCommand is an atomic action that can be executed via some user interaction.\n * For example clicking a button that deletes an active selection can be considered an Interactive Command.\n * This differs from an Interactive Tool in that there is no ongoing user interaction once the\n * command has been initiated. \n */" },
		{ "IncludePath", "InteractiveCommand.h" },
		{ "ModuleRelativePath", "Public/InteractiveCommand.h" },
		{ "ToolTip", "A UInteractiveCommand is an atomic action that can be executed via some user interaction.\nFor example clicking a button that deletes an active selection can be considered an Interactive Command.\nThis differs from an Interactive Tool in that there is no ongoing user interaction once the\ncommand has been initiated." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractiveCommand_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractiveCommand>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveCommand_Statics::ClassParams = {
		&UInteractiveCommand::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractiveCommand_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveCommand_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractiveCommand()
	{
		if (!Z_Registration_Info_UClass_UInteractiveCommand.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractiveCommand.OuterSingleton, Z_Construct_UClass_UInteractiveCommand_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractiveCommand.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UInteractiveCommand>()
	{
		return UInteractiveCommand::StaticClass();
	}
	UInteractiveCommand::UInteractiveCommand(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveCommand);
	UInteractiveCommand::~UInteractiveCommand() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveCommand_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveCommand_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInteractiveCommandArguments, UInteractiveCommandArguments::StaticClass, TEXT("UInteractiveCommandArguments"), &Z_Registration_Info_UClass_UInteractiveCommandArguments, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractiveCommandArguments), 1671981950U) },
		{ Z_Construct_UClass_UInteractiveCommandResult, UInteractiveCommandResult::StaticClass, TEXT("UInteractiveCommandResult"), &Z_Registration_Info_UClass_UInteractiveCommandResult, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractiveCommandResult), 197596381U) },
		{ Z_Construct_UClass_UInteractiveCommand, UInteractiveCommand::StaticClass, TEXT("UInteractiveCommand"), &Z_Registration_Info_UClass_UInteractiveCommand, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractiveCommand), 1032662364U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveCommand_h_1431823155(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveCommand_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveCommand_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
