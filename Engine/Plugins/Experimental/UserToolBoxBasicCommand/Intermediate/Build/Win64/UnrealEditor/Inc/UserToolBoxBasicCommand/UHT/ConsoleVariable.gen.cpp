// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConsoleVariable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConsoleVariable() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_UserToolBoxBasicCommand();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UConsoleVariable();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UConsoleVariable_NoRegister();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUTBBaseCommand();
// End Cross Module References
	void UConsoleVariable::StaticRegisterNativesUConsoleVariable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConsoleVariable);
	UClass* Z_Construct_UClass_UConsoleVariable_NoRegister()
	{
		return UConsoleVariable::StaticClass();
	}
	struct Z_Construct_UClass_UConsoleVariable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ConsoleCommands_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConsoleCommands_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ConsoleCommands;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConsoleVariable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUTBBaseCommand,
		(UObject* (*)())Z_Construct_UPackage__Script_UserToolBoxBasicCommand,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleVariable_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ConsoleVariable.h" },
		{ "ModuleRelativePath", "Public/ConsoleVariable.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UConsoleVariable_Statics::NewProp_ConsoleCommands_Inner = { "ConsoleCommands", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleVariable_Statics::NewProp_ConsoleCommands_MetaData[] = {
		{ "Category", "Console Command" },
		{ "ModuleRelativePath", "Public/ConsoleVariable.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConsoleVariable_Statics::NewProp_ConsoleCommands = { "ConsoleCommands", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConsoleVariable, ConsoleCommands), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UConsoleVariable_Statics::NewProp_ConsoleCommands_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleVariable_Statics::NewProp_ConsoleCommands_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConsoleVariable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleVariable_Statics::NewProp_ConsoleCommands_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleVariable_Statics::NewProp_ConsoleCommands,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConsoleVariable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConsoleVariable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConsoleVariable_Statics::ClassParams = {
		&UConsoleVariable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UConsoleVariable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleVariable_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UConsoleVariable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleVariable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConsoleVariable()
	{
		if (!Z_Registration_Info_UClass_UConsoleVariable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConsoleVariable.OuterSingleton, Z_Construct_UClass_UConsoleVariable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConsoleVariable.OuterSingleton;
	}
	template<> USERTOOLBOXBASICCOMMAND_API UClass* StaticClass<UConsoleVariable>()
	{
		return UConsoleVariable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConsoleVariable);
	UConsoleVariable::~UConsoleVariable() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ConsoleVariable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ConsoleVariable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConsoleVariable, UConsoleVariable::StaticClass, TEXT("UConsoleVariable"), &Z_Registration_Info_UClass_UConsoleVariable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConsoleVariable), 414542154U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ConsoleVariable_h_3116871389(TEXT("/Script/UserToolBoxBasicCommand"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ConsoleVariable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ConsoleVariable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
