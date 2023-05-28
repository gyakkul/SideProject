// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/InputActionDelegateBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputActionDelegateBinding() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInputActionDelegateBinding();
	ENGINE_API UClass* Z_Construct_UClass_UInputActionDelegateBinding_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInputDelegateBinding();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

static_assert(std::is_polymorphic<FBlueprintInputActionDelegateBinding>() == std::is_polymorphic<FBlueprintInputDelegateBinding>(), "USTRUCT FBlueprintInputActionDelegateBinding cannot be polymorphic unless super FBlueprintInputDelegateBinding is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlueprintInputActionDelegateBinding;
class UScriptStruct* FBlueprintInputActionDelegateBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintInputActionDelegateBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlueprintInputActionDelegateBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BlueprintInputActionDelegateBinding"));
	}
	return Z_Registration_Info_UScriptStruct_BlueprintInputActionDelegateBinding.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBlueprintInputActionDelegateBinding>()
{
	return FBlueprintInputActionDelegateBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputActionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InputActionName;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputActionDelegateBinding.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintInputActionDelegateBinding>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_Statics::NewProp_InputActionName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputActionDelegateBinding.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_Statics::NewProp_InputActionName = { "InputActionName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlueprintInputActionDelegateBinding, InputActionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_Statics::NewProp_InputActionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_Statics::NewProp_InputActionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_Statics::NewProp_InputKeyEvent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputActionDelegateBinding.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_Statics::NewProp_InputKeyEvent = { "InputKeyEvent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlueprintInputActionDelegateBinding, InputKeyEvent), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_Statics::NewProp_InputKeyEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_Statics::NewProp_InputKeyEvent_MetaData)) }; // 1054153585
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_Statics::NewProp_FunctionNameToBind_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputActionDelegateBinding.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_Statics::NewProp_FunctionNameToBind = { "FunctionNameToBind", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlueprintInputActionDelegateBinding, FunctionNameToBind), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_Statics::NewProp_FunctionNameToBind_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_Statics::NewProp_FunctionNameToBind_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_Statics::NewProp_InputActionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_Statics::NewProp_InputKeyEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_Statics::NewProp_FunctionNameToBind,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding,
		&NewStructOps,
		"BlueprintInputActionDelegateBinding",
		sizeof(FBlueprintInputActionDelegateBinding),
		alignof(FBlueprintInputActionDelegateBinding),
		Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_BlueprintInputActionDelegateBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlueprintInputActionDelegateBinding.InnerSingleton, Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BlueprintInputActionDelegateBinding.InnerSingleton;
	}
	void UInputActionDelegateBinding::StaticRegisterNativesUInputActionDelegateBinding()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputActionDelegateBinding);
	UClass* Z_Construct_UClass_UInputActionDelegateBinding_NoRegister()
	{
		return UInputActionDelegateBinding::StaticClass();
	}
	struct Z_Construct_UClass_UInputActionDelegateBinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputActionDelegateBindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputActionDelegateBindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputActionDelegateBindings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputActionDelegateBinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputDelegateBinding,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputActionDelegateBinding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/InputActionDelegateBinding.h" },
		{ "ModuleRelativePath", "Classes/Engine/InputActionDelegateBinding.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputActionDelegateBinding_Statics::NewProp_InputActionDelegateBindings_Inner = { "InputActionDelegateBindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding, METADATA_PARAMS(nullptr, 0) }; // 3577856703
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputActionDelegateBinding_Statics::NewProp_InputActionDelegateBindings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputActionDelegateBinding.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputActionDelegateBinding_Statics::NewProp_InputActionDelegateBindings = { "InputActionDelegateBindings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputActionDelegateBinding, InputActionDelegateBindings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInputActionDelegateBinding_Statics::NewProp_InputActionDelegateBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputActionDelegateBinding_Statics::NewProp_InputActionDelegateBindings_MetaData)) }; // 3577856703
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputActionDelegateBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputActionDelegateBinding_Statics::NewProp_InputActionDelegateBindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputActionDelegateBinding_Statics::NewProp_InputActionDelegateBindings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputActionDelegateBinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputActionDelegateBinding>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputActionDelegateBinding_Statics::ClassParams = {
		&UInputActionDelegateBinding::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInputActionDelegateBinding_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputActionDelegateBinding_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInputActionDelegateBinding_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputActionDelegateBinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputActionDelegateBinding()
	{
		if (!Z_Registration_Info_UClass_UInputActionDelegateBinding.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputActionDelegateBinding.OuterSingleton, Z_Construct_UClass_UInputActionDelegateBinding_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputActionDelegateBinding.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInputActionDelegateBinding>()
	{
		return UInputActionDelegateBinding::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputActionDelegateBinding);
	UInputActionDelegateBinding::~UInputActionDelegateBinding() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputActionDelegateBinding_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputActionDelegateBinding_h_Statics::ScriptStructInfo[] = {
		{ FBlueprintInputActionDelegateBinding::StaticStruct, Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_Statics::NewStructOps, TEXT("BlueprintInputActionDelegateBinding"), &Z_Registration_Info_UScriptStruct_BlueprintInputActionDelegateBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlueprintInputActionDelegateBinding), 3577856703U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputActionDelegateBinding_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInputActionDelegateBinding, UInputActionDelegateBinding::StaticClass, TEXT("UInputActionDelegateBinding"), &Z_Registration_Info_UClass_UInputActionDelegateBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputActionDelegateBinding), 2455823295U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputActionDelegateBinding_h_1513129149(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputActionDelegateBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputActionDelegateBinding_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputActionDelegateBinding_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputActionDelegateBinding_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
