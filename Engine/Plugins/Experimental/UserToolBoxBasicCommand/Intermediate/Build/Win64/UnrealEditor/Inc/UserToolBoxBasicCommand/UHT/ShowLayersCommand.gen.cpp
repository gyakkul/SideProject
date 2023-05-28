// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShowLayersCommand.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShowLayersCommand() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_UserToolBoxBasicCommand();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UShowLayersCommand();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UShowLayersCommand_NoRegister();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUTBBaseCommand();
// End Cross Module References
	void UShowLayersCommand::StaticRegisterNativesUShowLayersCommand()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UShowLayersCommand);
	UClass* Z_Construct_UClass_UShowLayersCommand_NoRegister()
	{
		return UShowLayersCommand::StaticClass();
	}
	struct Z_Construct_UClass_UShowLayersCommand_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Layers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Layers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Layers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsolate_MetaData[];
#endif
		static void NewProp_bIsolate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsolate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShowLayersCommand_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUTBBaseCommand,
		(UObject* (*)())Z_Construct_UPackage__Script_UserToolBoxBasicCommand,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShowLayersCommand_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ShowLayersCommand.h" },
		{ "ModuleRelativePath", "Public/ShowLayersCommand.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UShowLayersCommand_Statics::NewProp_Layers_Inner = { "Layers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShowLayersCommand_Statics::NewProp_Layers_MetaData[] = {
		{ "Category", "LayerCommand" },
		{ "ModuleRelativePath", "Public/ShowLayersCommand.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UShowLayersCommand_Statics::NewProp_Layers = { "Layers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShowLayersCommand, Layers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UShowLayersCommand_Statics::NewProp_Layers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShowLayersCommand_Statics::NewProp_Layers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShowLayersCommand_Statics::NewProp_bIsolate_MetaData[] = {
		{ "Category", "LayerCommand" },
		{ "ModuleRelativePath", "Public/ShowLayersCommand.h" },
	};
#endif
	void Z_Construct_UClass_UShowLayersCommand_Statics::NewProp_bIsolate_SetBit(void* Obj)
	{
		((UShowLayersCommand*)Obj)->bIsolate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShowLayersCommand_Statics::NewProp_bIsolate = { "bIsolate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UShowLayersCommand), &Z_Construct_UClass_UShowLayersCommand_Statics::NewProp_bIsolate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UShowLayersCommand_Statics::NewProp_bIsolate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShowLayersCommand_Statics::NewProp_bIsolate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShowLayersCommand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShowLayersCommand_Statics::NewProp_Layers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShowLayersCommand_Statics::NewProp_Layers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShowLayersCommand_Statics::NewProp_bIsolate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShowLayersCommand_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShowLayersCommand>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UShowLayersCommand_Statics::ClassParams = {
		&UShowLayersCommand::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UShowLayersCommand_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UShowLayersCommand_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UShowLayersCommand_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShowLayersCommand_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShowLayersCommand()
	{
		if (!Z_Registration_Info_UClass_UShowLayersCommand.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShowLayersCommand.OuterSingleton, Z_Construct_UClass_UShowLayersCommand_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UShowLayersCommand.OuterSingleton;
	}
	template<> USERTOOLBOXBASICCOMMAND_API UClass* StaticClass<UShowLayersCommand>()
	{
		return UShowLayersCommand::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShowLayersCommand);
	UShowLayersCommand::~UShowLayersCommand() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ShowLayersCommand_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ShowLayersCommand_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UShowLayersCommand, UShowLayersCommand::StaticClass, TEXT("UShowLayersCommand"), &Z_Registration_Info_UClass_UShowLayersCommand, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShowLayersCommand), 903861287U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ShowLayersCommand_h_2798555100(TEXT("/Script/UserToolBoxBasicCommand"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ShowLayersCommand_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ShowLayersCommand_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
