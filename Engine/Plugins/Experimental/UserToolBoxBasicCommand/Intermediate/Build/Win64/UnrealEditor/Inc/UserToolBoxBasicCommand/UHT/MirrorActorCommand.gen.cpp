// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MirrorActorCommand.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMirrorActorCommand() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_UserToolBoxBasicCommand();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UMirrorActorCommand();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UMirrorActorCommand_NoRegister();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUTBBaseCommand();
// End Cross Module References
	void UMirrorActorCommand::StaticRegisterNativesUMirrorActorCommand()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMirrorActorCommand);
	UClass* Z_Construct_UClass_UMirrorActorCommand_NoRegister()
	{
		return UMirrorActorCommand::StaticClass();
	}
	struct Z_Construct_UClass_UMirrorActorCommand_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XAxis_MetaData[];
#endif
		static void NewProp_XAxis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_XAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YAxis_MetaData[];
#endif
		static void NewProp_YAxis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_YAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZAxis_MetaData[];
#endif
		static void NewProp_ZAxis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ZAxis;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMirrorActorCommand_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUTBBaseCommand,
		(UObject* (*)())Z_Construct_UPackage__Script_UserToolBoxBasicCommand,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMirrorActorCommand_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MirrorActorCommand.h" },
		{ "ModuleRelativePath", "Public/MirrorActorCommand.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMirrorActorCommand_Statics::NewProp_XAxis_MetaData[] = {
		{ "Category", "MirrorCommand" },
		{ "ModuleRelativePath", "Public/MirrorActorCommand.h" },
	};
#endif
	void Z_Construct_UClass_UMirrorActorCommand_Statics::NewProp_XAxis_SetBit(void* Obj)
	{
		((UMirrorActorCommand*)Obj)->XAxis = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMirrorActorCommand_Statics::NewProp_XAxis = { "XAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMirrorActorCommand), &Z_Construct_UClass_UMirrorActorCommand_Statics::NewProp_XAxis_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMirrorActorCommand_Statics::NewProp_XAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorActorCommand_Statics::NewProp_XAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMirrorActorCommand_Statics::NewProp_YAxis_MetaData[] = {
		{ "Category", "MirrorCommand" },
		{ "ModuleRelativePath", "Public/MirrorActorCommand.h" },
	};
#endif
	void Z_Construct_UClass_UMirrorActorCommand_Statics::NewProp_YAxis_SetBit(void* Obj)
	{
		((UMirrorActorCommand*)Obj)->YAxis = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMirrorActorCommand_Statics::NewProp_YAxis = { "YAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMirrorActorCommand), &Z_Construct_UClass_UMirrorActorCommand_Statics::NewProp_YAxis_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMirrorActorCommand_Statics::NewProp_YAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorActorCommand_Statics::NewProp_YAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMirrorActorCommand_Statics::NewProp_ZAxis_MetaData[] = {
		{ "Category", "MirrorCommand" },
		{ "ModuleRelativePath", "Public/MirrorActorCommand.h" },
	};
#endif
	void Z_Construct_UClass_UMirrorActorCommand_Statics::NewProp_ZAxis_SetBit(void* Obj)
	{
		((UMirrorActorCommand*)Obj)->ZAxis = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMirrorActorCommand_Statics::NewProp_ZAxis = { "ZAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMirrorActorCommand), &Z_Construct_UClass_UMirrorActorCommand_Statics::NewProp_ZAxis_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMirrorActorCommand_Statics::NewProp_ZAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorActorCommand_Statics::NewProp_ZAxis_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMirrorActorCommand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorActorCommand_Statics::NewProp_XAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorActorCommand_Statics::NewProp_YAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorActorCommand_Statics::NewProp_ZAxis,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMirrorActorCommand_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMirrorActorCommand>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMirrorActorCommand_Statics::ClassParams = {
		&UMirrorActorCommand::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMirrorActorCommand_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorActorCommand_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMirrorActorCommand_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorActorCommand_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMirrorActorCommand()
	{
		if (!Z_Registration_Info_UClass_UMirrorActorCommand.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMirrorActorCommand.OuterSingleton, Z_Construct_UClass_UMirrorActorCommand_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMirrorActorCommand.OuterSingleton;
	}
	template<> USERTOOLBOXBASICCOMMAND_API UClass* StaticClass<UMirrorActorCommand>()
	{
		return UMirrorActorCommand::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMirrorActorCommand);
	UMirrorActorCommand::~UMirrorActorCommand() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_MirrorActorCommand_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_MirrorActorCommand_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMirrorActorCommand, UMirrorActorCommand::StaticClass, TEXT("UMirrorActorCommand"), &Z_Registration_Info_UClass_UMirrorActorCommand, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMirrorActorCommand), 750457076U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_MirrorActorCommand_h_2947698719(TEXT("/Script/UserToolBoxBasicCommand"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_MirrorActorCommand_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_MirrorActorCommand_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
