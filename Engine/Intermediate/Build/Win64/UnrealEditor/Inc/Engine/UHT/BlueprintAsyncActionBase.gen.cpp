// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Kismet/BlueprintAsyncActionBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintAsyncActionBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(UBlueprintAsyncActionBase::execActivate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Activate();
		P_NATIVE_END;
	}
	void UBlueprintAsyncActionBase::StaticRegisterNativesUBlueprintAsyncActionBase()
	{
		UClass* Class = UBlueprintAsyncActionBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Activate", &UBlueprintAsyncActionBase::execActivate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlueprintAsyncActionBase_Activate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintAsyncActionBase_Activate_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Comment", "/** Called to trigger the action once the delegates have been bound */" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintAsyncActionBase.h" },
		{ "ToolTip", "Called to trigger the action once the delegates have been bound" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintAsyncActionBase_Activate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintAsyncActionBase, nullptr, "Activate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintAsyncActionBase_Activate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintAsyncActionBase_Activate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintAsyncActionBase_Activate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintAsyncActionBase_Activate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintAsyncActionBase);
	UClass* Z_Construct_UClass_UBlueprintAsyncActionBase_NoRegister()
	{
		return UBlueprintAsyncActionBase::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintAsyncActionBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintAsyncActionBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlueprintAsyncActionBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlueprintAsyncActionBase_Activate, "Activate" }, // 256312250
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintAsyncActionBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* BlueprintCallable factory functions for classes which inherit from UBlueprintAsyncActionBase will have a special blueprint node created for it: UK2Node_AsyncAction\n* You can stop this node spawning and create a more specific one by adding the UCLASS metadata \"HasDedicatedAsyncNode\"\n*/" },
		{ "IncludePath", "Kismet/BlueprintAsyncActionBase.h" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintAsyncActionBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "BlueprintCallable factory functions for classes which inherit from UBlueprintAsyncActionBase will have a special blueprint node created for it: UK2Node_AsyncAction\nYou can stop this node spawning and create a more specific one by adding the UCLASS metadata \"HasDedicatedAsyncNode\"" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintAsyncActionBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintAsyncActionBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintAsyncActionBase_Statics::ClassParams = {
		&UBlueprintAsyncActionBase::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintAsyncActionBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintAsyncActionBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintAsyncActionBase()
	{
		if (!Z_Registration_Info_UClass_UBlueprintAsyncActionBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintAsyncActionBase.OuterSingleton, Z_Construct_UClass_UBlueprintAsyncActionBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlueprintAsyncActionBase.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UBlueprintAsyncActionBase>()
	{
		return UBlueprintAsyncActionBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintAsyncActionBase);
	UBlueprintAsyncActionBase::~UBlueprintAsyncActionBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintAsyncActionBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintAsyncActionBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintAsyncActionBase, UBlueprintAsyncActionBase::StaticClass, TEXT("UBlueprintAsyncActionBase"), &Z_Registration_Info_UClass_UBlueprintAsyncActionBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintAsyncActionBase), 3907345329U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintAsyncActionBase_h_2047935702(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintAsyncActionBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintAsyncActionBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
