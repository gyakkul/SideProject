// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseCompositeCommand.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseCompositeCommand() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_UserToolBoxBasicCommand();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UBaseCompositeCommand();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UBaseCompositeCommand_NoRegister();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUTBBaseCommand();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUTBBaseCommand_NoRegister();
// End Cross Module References
	void UBaseCompositeCommand::StaticRegisterNativesUBaseCompositeCommand()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseCompositeCommand);
	UClass* Z_Construct_UClass_UBaseCompositeCommand_NoRegister()
	{
		return UBaseCompositeCommand::StaticClass();
	}
	struct Z_Construct_UClass_UBaseCompositeCommand_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Commands_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Commands_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Commands;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseCompositeCommand_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUTBBaseCommand,
		(UObject* (*)())Z_Construct_UPackage__Script_UserToolBoxBasicCommand,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseCompositeCommand_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BaseCompositeCommand.h" },
		{ "ModuleRelativePath", "Public/BaseCompositeCommand.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBaseCompositeCommand_Statics::NewProp_Commands_Inner = { "Commands", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UUTBBaseCommand_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseCompositeCommand_Statics::NewProp_Commands_MetaData[] = {
		{ "Category", "Composite Commands" },
		{ "ModuleRelativePath", "Public/BaseCompositeCommand.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBaseCompositeCommand_Statics::NewProp_Commands = { "Commands", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseCompositeCommand, Commands), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBaseCompositeCommand_Statics::NewProp_Commands_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCompositeCommand_Statics::NewProp_Commands_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseCompositeCommand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCompositeCommand_Statics::NewProp_Commands_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCompositeCommand_Statics::NewProp_Commands,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseCompositeCommand_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseCompositeCommand>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseCompositeCommand_Statics::ClassParams = {
		&UBaseCompositeCommand::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBaseCompositeCommand_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCompositeCommand_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseCompositeCommand_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCompositeCommand_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseCompositeCommand()
	{
		if (!Z_Registration_Info_UClass_UBaseCompositeCommand.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseCompositeCommand.OuterSingleton, Z_Construct_UClass_UBaseCompositeCommand_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseCompositeCommand.OuterSingleton;
	}
	template<> USERTOOLBOXBASICCOMMAND_API UClass* StaticClass<UBaseCompositeCommand>()
	{
		return UBaseCompositeCommand::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseCompositeCommand);
	UBaseCompositeCommand::~UBaseCompositeCommand() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_BaseCompositeCommand_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_BaseCompositeCommand_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseCompositeCommand, UBaseCompositeCommand::StaticClass, TEXT("UBaseCompositeCommand"), &Z_Registration_Info_UClass_UBaseCompositeCommand, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseCompositeCommand), 776321314U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_BaseCompositeCommand_h_582257014(TEXT("/Script/UserToolBoxBasicCommand"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_BaseCompositeCommand_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_BaseCompositeCommand_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
