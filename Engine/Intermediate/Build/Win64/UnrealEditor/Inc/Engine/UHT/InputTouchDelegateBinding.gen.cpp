// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/InputTouchDelegateBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputTouchDelegateBinding() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInputDelegateBinding();
	ENGINE_API UClass* Z_Construct_UClass_UInputTouchDelegateBinding();
	ENGINE_API UClass* Z_Construct_UClass_UInputTouchDelegateBinding_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

static_assert(std::is_polymorphic<FBlueprintInputTouchDelegateBinding>() == std::is_polymorphic<FBlueprintInputDelegateBinding>(), "USTRUCT FBlueprintInputTouchDelegateBinding cannot be polymorphic unless super FBlueprintInputDelegateBinding is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlueprintInputTouchDelegateBinding;
class UScriptStruct* FBlueprintInputTouchDelegateBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintInputTouchDelegateBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlueprintInputTouchDelegateBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BlueprintInputTouchDelegateBinding"));
	}
	return Z_Registration_Info_UScriptStruct_BlueprintInputTouchDelegateBinding.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBlueprintInputTouchDelegateBinding>()
{
	return FBlueprintInputTouchDelegateBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputKeyEvent_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputKeyEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionNameToBind_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FunctionNameToBind;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputTouchDelegateBinding.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintInputTouchDelegateBinding>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::NewProp_InputKeyEvent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputTouchDelegateBinding.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::NewProp_InputKeyEvent = { "InputKeyEvent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlueprintInputTouchDelegateBinding, InputKeyEvent), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::NewProp_InputKeyEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::NewProp_InputKeyEvent_MetaData)) }; // 1054153585
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::NewProp_FunctionNameToBind_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputTouchDelegateBinding.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::NewProp_FunctionNameToBind = { "FunctionNameToBind", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlueprintInputTouchDelegateBinding, FunctionNameToBind), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::NewProp_FunctionNameToBind_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::NewProp_FunctionNameToBind_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::NewProp_InputKeyEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::NewProp_FunctionNameToBind,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding,
		&NewStructOps,
		"BlueprintInputTouchDelegateBinding",
		sizeof(FBlueprintInputTouchDelegateBinding),
		alignof(FBlueprintInputTouchDelegateBinding),
		Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_BlueprintInputTouchDelegateBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlueprintInputTouchDelegateBinding.InnerSingleton, Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BlueprintInputTouchDelegateBinding.InnerSingleton;
	}
	void UInputTouchDelegateBinding::StaticRegisterNativesUInputTouchDelegateBinding()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputTouchDelegateBinding);
	UClass* Z_Construct_UClass_UInputTouchDelegateBinding_NoRegister()
	{
		return UInputTouchDelegateBinding::StaticClass();
	}
	struct Z_Construct_UClass_UInputTouchDelegateBinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputTouchDelegateBindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputTouchDelegateBindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputTouchDelegateBindings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputTouchDelegateBinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputDelegateBinding,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputTouchDelegateBinding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/InputTouchDelegateBinding.h" },
		{ "ModuleRelativePath", "Classes/Engine/InputTouchDelegateBinding.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputTouchDelegateBinding_Statics::NewProp_InputTouchDelegateBindings_Inner = { "InputTouchDelegateBindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding, METADATA_PARAMS(nullptr, 0) }; // 1599611122
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputTouchDelegateBinding_Statics::NewProp_InputTouchDelegateBindings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputTouchDelegateBinding.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputTouchDelegateBinding_Statics::NewProp_InputTouchDelegateBindings = { "InputTouchDelegateBindings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputTouchDelegateBinding, InputTouchDelegateBindings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInputTouchDelegateBinding_Statics::NewProp_InputTouchDelegateBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputTouchDelegateBinding_Statics::NewProp_InputTouchDelegateBindings_MetaData)) }; // 1599611122
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputTouchDelegateBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputTouchDelegateBinding_Statics::NewProp_InputTouchDelegateBindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputTouchDelegateBinding_Statics::NewProp_InputTouchDelegateBindings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputTouchDelegateBinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputTouchDelegateBinding>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputTouchDelegateBinding_Statics::ClassParams = {
		&UInputTouchDelegateBinding::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInputTouchDelegateBinding_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputTouchDelegateBinding_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInputTouchDelegateBinding_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputTouchDelegateBinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputTouchDelegateBinding()
	{
		if (!Z_Registration_Info_UClass_UInputTouchDelegateBinding.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputTouchDelegateBinding.OuterSingleton, Z_Construct_UClass_UInputTouchDelegateBinding_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputTouchDelegateBinding.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInputTouchDelegateBinding>()
	{
		return UInputTouchDelegateBinding::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputTouchDelegateBinding);
	UInputTouchDelegateBinding::~UInputTouchDelegateBinding() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputTouchDelegateBinding_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputTouchDelegateBinding_h_Statics::ScriptStructInfo[] = {
		{ FBlueprintInputTouchDelegateBinding::StaticStruct, Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::NewStructOps, TEXT("BlueprintInputTouchDelegateBinding"), &Z_Registration_Info_UScriptStruct_BlueprintInputTouchDelegateBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlueprintInputTouchDelegateBinding), 1599611122U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputTouchDelegateBinding_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInputTouchDelegateBinding, UInputTouchDelegateBinding::StaticClass, TEXT("UInputTouchDelegateBinding"), &Z_Registration_Info_UClass_UInputTouchDelegateBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputTouchDelegateBinding), 3711243169U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputTouchDelegateBinding_h_3827219693(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputTouchDelegateBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputTouchDelegateBinding_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputTouchDelegateBinding_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputTouchDelegateBinding_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
