// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/InputAxisKeyDelegateBinding.h"
#include "InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputAxisKeyDelegateBinding() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInputAxisKeyDelegateBinding();
	ENGINE_API UClass* Z_Construct_UClass_UInputAxisKeyDelegateBinding_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInputDelegateBinding();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

static_assert(std::is_polymorphic<FBlueprintInputAxisKeyDelegateBinding>() == std::is_polymorphic<FBlueprintInputDelegateBinding>(), "USTRUCT FBlueprintInputAxisKeyDelegateBinding cannot be polymorphic unless super FBlueprintInputDelegateBinding is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlueprintInputAxisKeyDelegateBinding;
class UScriptStruct* FBlueprintInputAxisKeyDelegateBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintInputAxisKeyDelegateBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlueprintInputAxisKeyDelegateBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BlueprintInputAxisKeyDelegateBinding"));
	}
	return Z_Registration_Info_UScriptStruct_BlueprintInputAxisKeyDelegateBinding.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBlueprintInputAxisKeyDelegateBinding>()
{
	return FBlueprintInputAxisKeyDelegateBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AxisKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionNameToBind_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FunctionNameToBind;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputAxisKeyDelegateBinding.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintInputAxisKeyDelegateBinding>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::NewProp_AxisKey_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputAxisKeyDelegateBinding.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::NewProp_AxisKey = { "AxisKey", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlueprintInputAxisKeyDelegateBinding, AxisKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::NewProp_AxisKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::NewProp_AxisKey_MetaData)) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::NewProp_FunctionNameToBind_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputAxisKeyDelegateBinding.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::NewProp_FunctionNameToBind = { "FunctionNameToBind", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlueprintInputAxisKeyDelegateBinding, FunctionNameToBind), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::NewProp_FunctionNameToBind_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::NewProp_FunctionNameToBind_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::NewProp_AxisKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::NewProp_FunctionNameToBind,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding,
		&NewStructOps,
		"BlueprintInputAxisKeyDelegateBinding",
		sizeof(FBlueprintInputAxisKeyDelegateBinding),
		alignof(FBlueprintInputAxisKeyDelegateBinding),
		Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_BlueprintInputAxisKeyDelegateBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlueprintInputAxisKeyDelegateBinding.InnerSingleton, Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BlueprintInputAxisKeyDelegateBinding.InnerSingleton;
	}
	void UInputAxisKeyDelegateBinding::StaticRegisterNativesUInputAxisKeyDelegateBinding()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputAxisKeyDelegateBinding);
	UClass* Z_Construct_UClass_UInputAxisKeyDelegateBinding_NoRegister()
	{
		return UInputAxisKeyDelegateBinding::StaticClass();
	}
	struct Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputAxisKeyDelegateBindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputAxisKeyDelegateBindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputAxisKeyDelegateBindings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputDelegateBinding,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/InputAxisKeyDelegateBinding.h" },
		{ "ModuleRelativePath", "Classes/Engine/InputAxisKeyDelegateBinding.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics::NewProp_InputAxisKeyDelegateBindings_Inner = { "InputAxisKeyDelegateBindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding, METADATA_PARAMS(nullptr, 0) }; // 3437298306
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics::NewProp_InputAxisKeyDelegateBindings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputAxisKeyDelegateBinding.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics::NewProp_InputAxisKeyDelegateBindings = { "InputAxisKeyDelegateBindings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputAxisKeyDelegateBinding, InputAxisKeyDelegateBindings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics::NewProp_InputAxisKeyDelegateBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics::NewProp_InputAxisKeyDelegateBindings_MetaData)) }; // 3437298306
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics::NewProp_InputAxisKeyDelegateBindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics::NewProp_InputAxisKeyDelegateBindings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputAxisKeyDelegateBinding>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics::ClassParams = {
		&UInputAxisKeyDelegateBinding::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputAxisKeyDelegateBinding()
	{
		if (!Z_Registration_Info_UClass_UInputAxisKeyDelegateBinding.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputAxisKeyDelegateBinding.OuterSingleton, Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputAxisKeyDelegateBinding.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInputAxisKeyDelegateBinding>()
	{
		return UInputAxisKeyDelegateBinding::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputAxisKeyDelegateBinding);
	UInputAxisKeyDelegateBinding::~UInputAxisKeyDelegateBinding() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisKeyDelegateBinding_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisKeyDelegateBinding_h_Statics::ScriptStructInfo[] = {
		{ FBlueprintInputAxisKeyDelegateBinding::StaticStruct, Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::NewStructOps, TEXT("BlueprintInputAxisKeyDelegateBinding"), &Z_Registration_Info_UScriptStruct_BlueprintInputAxisKeyDelegateBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlueprintInputAxisKeyDelegateBinding), 3437298306U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisKeyDelegateBinding_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInputAxisKeyDelegateBinding, UInputAxisKeyDelegateBinding::StaticClass, TEXT("UInputAxisKeyDelegateBinding"), &Z_Registration_Info_UClass_UInputAxisKeyDelegateBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputAxisKeyDelegateBinding), 2213850025U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisKeyDelegateBinding_h_3137040702(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisKeyDelegateBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisKeyDelegateBinding_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisKeyDelegateBinding_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisKeyDelegateBinding_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
