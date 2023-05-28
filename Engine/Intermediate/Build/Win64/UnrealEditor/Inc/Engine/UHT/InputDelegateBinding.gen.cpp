// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/InputDelegateBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputDelegateBinding() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDynamicBlueprintBinding();
	ENGINE_API UClass* Z_Construct_UClass_UInputDelegateBinding();
	ENGINE_API UClass* Z_Construct_UClass_UInputDelegateBinding_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlueprintInputDelegateBinding;
class UScriptStruct* FBlueprintInputDelegateBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintInputDelegateBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlueprintInputDelegateBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BlueprintInputDelegateBinding"));
	}
	return Z_Registration_Info_UScriptStruct_BlueprintInputDelegateBinding.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBlueprintInputDelegateBinding>()
{
	return FBlueprintInputDelegateBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConsumeInput_MetaData[];
#endif
		static void NewProp_bConsumeInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConsumeInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExecuteWhenPaused_MetaData[];
#endif
		static void NewProp_bExecuteWhenPaused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExecuteWhenPaused;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideParentBinding_MetaData[];
#endif
		static void NewProp_bOverrideParentBinding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideParentBinding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputDelegateBinding.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintInputDelegateBinding>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bConsumeInput_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputDelegateBinding.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bConsumeInput_SetBit(void* Obj)
	{
		((FBlueprintInputDelegateBinding*)Obj)->bConsumeInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bConsumeInput = { "bConsumeInput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FBlueprintInputDelegateBinding), &Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bConsumeInput_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bConsumeInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bConsumeInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bExecuteWhenPaused_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputDelegateBinding.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bExecuteWhenPaused_SetBit(void* Obj)
	{
		((FBlueprintInputDelegateBinding*)Obj)->bExecuteWhenPaused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bExecuteWhenPaused = { "bExecuteWhenPaused", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FBlueprintInputDelegateBinding), &Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bExecuteWhenPaused_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bExecuteWhenPaused_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bExecuteWhenPaused_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bOverrideParentBinding_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputDelegateBinding.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bOverrideParentBinding_SetBit(void* Obj)
	{
		((FBlueprintInputDelegateBinding*)Obj)->bOverrideParentBinding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bOverrideParentBinding = { "bOverrideParentBinding", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FBlueprintInputDelegateBinding), &Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bOverrideParentBinding_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bOverrideParentBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bOverrideParentBinding_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bConsumeInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bExecuteWhenPaused,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bOverrideParentBinding,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BlueprintInputDelegateBinding",
		sizeof(FBlueprintInputDelegateBinding),
		alignof(FBlueprintInputDelegateBinding),
		Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_BlueprintInputDelegateBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlueprintInputDelegateBinding.InnerSingleton, Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BlueprintInputDelegateBinding.InnerSingleton;
	}
	void UInputDelegateBinding::StaticRegisterNativesUInputDelegateBinding()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputDelegateBinding);
	UClass* Z_Construct_UClass_UInputDelegateBinding_NoRegister()
	{
		return UInputDelegateBinding::StaticClass();
	}
	struct Z_Construct_UClass_UInputDelegateBinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputDelegateBinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDynamicBlueprintBinding,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputDelegateBinding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/InputDelegateBinding.h" },
		{ "ModuleRelativePath", "Classes/Engine/InputDelegateBinding.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputDelegateBinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputDelegateBinding>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputDelegateBinding_Statics::ClassParams = {
		&UInputDelegateBinding::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInputDelegateBinding_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputDelegateBinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputDelegateBinding()
	{
		if (!Z_Registration_Info_UClass_UInputDelegateBinding.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputDelegateBinding.OuterSingleton, Z_Construct_UClass_UInputDelegateBinding_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputDelegateBinding.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInputDelegateBinding>()
	{
		return UInputDelegateBinding::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputDelegateBinding);
	UInputDelegateBinding::~UInputDelegateBinding() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputDelegateBinding_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputDelegateBinding_h_Statics::ScriptStructInfo[] = {
		{ FBlueprintInputDelegateBinding::StaticStruct, Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewStructOps, TEXT("BlueprintInputDelegateBinding"), &Z_Registration_Info_UScriptStruct_BlueprintInputDelegateBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlueprintInputDelegateBinding), 407143652U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputDelegateBinding_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInputDelegateBinding, UInputDelegateBinding::StaticClass, TEXT("UInputDelegateBinding"), &Z_Registration_Info_UClass_UInputDelegateBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputDelegateBinding), 2805896939U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputDelegateBinding_h_3304152418(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputDelegateBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputDelegateBinding_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputDelegateBinding_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputDelegateBinding_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
