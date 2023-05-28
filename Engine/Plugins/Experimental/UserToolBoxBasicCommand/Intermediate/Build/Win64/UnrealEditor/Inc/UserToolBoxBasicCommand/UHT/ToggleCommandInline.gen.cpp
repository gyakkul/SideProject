// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToggleCommandInline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToggleCommandInline() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_UserToolBoxBasicCommand();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UToggleCommandInline();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UToggleCommandInline_NoRegister();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUTBBaseCommand();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUTBBaseCommand_NoRegister();
// End Cross Module References
	void UToggleCommandInline::StaticRegisterNativesUToggleCommandInline()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UToggleCommandInline);
	UClass* Z_Construct_UClass_UToggleCommandInline_NoRegister()
	{
		return UToggleCommandInline::StaticClass();
	}
	struct Z_Construct_UClass_UToggleCommandInline_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Commands_Inner_MetaData[];
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
	UObject* (*const Z_Construct_UClass_UToggleCommandInline_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUTBBaseCommand,
		(UObject* (*)())Z_Construct_UPackage__Script_UserToolBoxBasicCommand,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToggleCommandInline_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ToggleCommandInline.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ToggleCommandInline.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToggleCommandInline_Statics::NewProp_Commands_Inner_MetaData[] = {
		{ "Category", "ToggleCommand" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ToggleCommandInline.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UToggleCommandInline_Statics::NewProp_Commands_Inner = { "Commands", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UUTBBaseCommand_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UToggleCommandInline_Statics::NewProp_Commands_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UToggleCommandInline_Statics::NewProp_Commands_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToggleCommandInline_Statics::NewProp_Commands_MetaData[] = {
		{ "Category", "ToggleCommand" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ToggleCommandInline.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UToggleCommandInline_Statics::NewProp_Commands = { "Commands", nullptr, (EPropertyFlags)0x001400800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UToggleCommandInline, Commands), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UToggleCommandInline_Statics::NewProp_Commands_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UToggleCommandInline_Statics::NewProp_Commands_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UToggleCommandInline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToggleCommandInline_Statics::NewProp_Commands_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToggleCommandInline_Statics::NewProp_Commands,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UToggleCommandInline_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToggleCommandInline>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UToggleCommandInline_Statics::ClassParams = {
		&UToggleCommandInline::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UToggleCommandInline_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UToggleCommandInline_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UToggleCommandInline_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UToggleCommandInline_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UToggleCommandInline()
	{
		if (!Z_Registration_Info_UClass_UToggleCommandInline.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToggleCommandInline.OuterSingleton, Z_Construct_UClass_UToggleCommandInline_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UToggleCommandInline.OuterSingleton;
	}
	template<> USERTOOLBOXBASICCOMMAND_API UClass* StaticClass<UToggleCommandInline>()
	{
		return UToggleCommandInline::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UToggleCommandInline);
	UToggleCommandInline::~UToggleCommandInline() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ToggleCommandInline_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ToggleCommandInline_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UToggleCommandInline, UToggleCommandInline::StaticClass, TEXT("UToggleCommandInline"), &Z_Registration_Info_UClass_UToggleCommandInline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToggleCommandInline), 2292899621U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ToggleCommandInline_h_3020452282(TEXT("/Script/UserToolBoxBasicCommand"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ToggleCommandInline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_ToggleCommandInline_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
