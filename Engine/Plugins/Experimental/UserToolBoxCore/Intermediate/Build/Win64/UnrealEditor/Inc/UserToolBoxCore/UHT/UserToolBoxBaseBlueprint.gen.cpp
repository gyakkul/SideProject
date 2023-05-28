// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserToolBoxBaseBlueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserToolBoxBaseBlueprint() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_UserToolBoxCore();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUserToolBoxBaseBlueprint();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUserToolBoxBaseBlueprint_NoRegister();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUTBBaseCommand();
// End Cross Module References
	static FName NAME_UUserToolBoxBaseBlueprint_Command = FName(TEXT("Command"));
	void UUserToolBoxBaseBlueprint::Command()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUserToolBoxBaseBlueprint_Command),NULL);
	}
	void UUserToolBoxBaseBlueprint::StaticRegisterNativesUUserToolBoxBaseBlueprint()
	{
	}
	struct Z_Construct_UFunction_UUserToolBoxBaseBlueprint_Command_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserToolBoxBaseBlueprint_Command_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserToolBoxBaseBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserToolBoxBaseBlueprint_Command_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserToolBoxBaseBlueprint, nullptr, "Command", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserToolBoxBaseBlueprint_Command_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserToolBoxBaseBlueprint_Command_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserToolBoxBaseBlueprint_Command()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserToolBoxBaseBlueprint_Command_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUserToolBoxBaseBlueprint);
	UClass* Z_Construct_UClass_UUserToolBoxBaseBlueprint_NoRegister()
	{
		return UUserToolBoxBaseBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UUserToolBoxBaseBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUserToolBoxBaseBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUTBBaseCommand,
		(UObject* (*)())Z_Construct_UPackage__Script_UserToolBoxCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUserToolBoxBaseBlueprint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUserToolBoxBaseBlueprint_Command, "Command" }, // 4125848667
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserToolBoxBaseBlueprint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "UserToolBoxBaseBlueprint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UserToolBoxBaseBlueprint.h" },
		{ "ShowWorldContextPin", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUserToolBoxBaseBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserToolBoxBaseBlueprint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUserToolBoxBaseBlueprint_Statics::ClassParams = {
		&UUserToolBoxBaseBlueprint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUserToolBoxBaseBlueprint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUserToolBoxBaseBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUserToolBoxBaseBlueprint()
	{
		if (!Z_Registration_Info_UClass_UUserToolBoxBaseBlueprint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUserToolBoxBaseBlueprint.OuterSingleton, Z_Construct_UClass_UUserToolBoxBaseBlueprint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUserToolBoxBaseBlueprint.OuterSingleton;
	}
	template<> USERTOOLBOXCORE_API UClass* StaticClass<UUserToolBoxBaseBlueprint>()
	{
		return UUserToolBoxBaseBlueprint::StaticClass();
	}
	UUserToolBoxBaseBlueprint::UUserToolBoxBaseBlueprint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUserToolBoxBaseBlueprint);
	UUserToolBoxBaseBlueprint::~UUserToolBoxBaseBlueprint() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UserToolBoxBaseBlueprint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UserToolBoxBaseBlueprint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUserToolBoxBaseBlueprint, UUserToolBoxBaseBlueprint::StaticClass, TEXT("UUserToolBoxBaseBlueprint"), &Z_Registration_Info_UClass_UUserToolBoxBaseBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUserToolBoxBaseBlueprint), 415891215U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UserToolBoxBaseBlueprint_h_4087401988(TEXT("/Script/UserToolBoxCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UserToolBoxBaseBlueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UserToolBoxBaseBlueprint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
