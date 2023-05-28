// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/InputKeyDelegateBinding.h"
#include "Framework/Commands/InputChord.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputKeyDelegateBinding() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInputDelegateBinding();
	ENGINE_API UClass* Z_Construct_UClass_UInputKeyDelegateBinding();
	ENGINE_API UClass* Z_Construct_UClass_UInputKeyDelegateBinding_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FInputChord();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

static_assert(std::is_polymorphic<FBlueprintInputKeyDelegateBinding>() == std::is_polymorphic<FBlueprintInputDelegateBinding>(), "USTRUCT FBlueprintInputKeyDelegateBinding cannot be polymorphic unless super FBlueprintInputDelegateBinding is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlueprintInputKeyDelegateBinding;
class UScriptStruct* FBlueprintInputKeyDelegateBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintInputKeyDelegateBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlueprintInputKeyDelegateBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BlueprintInputKeyDelegateBinding"));
	}
	return Z_Registration_Info_UScriptStruct_BlueprintInputKeyDelegateBinding.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBlueprintInputKeyDelegateBinding>()
{
	return FBlueprintInputKeyDelegateBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputChord_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputChord;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputKeyDelegateBinding.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintInputKeyDelegateBinding>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::NewProp_InputChord_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputKeyDelegateBinding.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::NewProp_InputChord = { "InputChord", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlueprintInputKeyDelegateBinding, InputChord), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::NewProp_InputChord_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::NewProp_InputChord_MetaData)) }; // 2392822822
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::NewProp_InputKeyEvent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputKeyDelegateBinding.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::NewProp_InputKeyEvent = { "InputKeyEvent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlueprintInputKeyDelegateBinding, InputKeyEvent), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::NewProp_InputKeyEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::NewProp_InputKeyEvent_MetaData)) }; // 1054153585
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::NewProp_FunctionNameToBind_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputKeyDelegateBinding.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::NewProp_FunctionNameToBind = { "FunctionNameToBind", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlueprintInputKeyDelegateBinding, FunctionNameToBind), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::NewProp_FunctionNameToBind_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::NewProp_FunctionNameToBind_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::NewProp_InputChord,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::NewProp_InputKeyEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::NewProp_FunctionNameToBind,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding,
		&NewStructOps,
		"BlueprintInputKeyDelegateBinding",
		sizeof(FBlueprintInputKeyDelegateBinding),
		alignof(FBlueprintInputKeyDelegateBinding),
		Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_BlueprintInputKeyDelegateBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlueprintInputKeyDelegateBinding.InnerSingleton, Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BlueprintInputKeyDelegateBinding.InnerSingleton;
	}
	void UInputKeyDelegateBinding::StaticRegisterNativesUInputKeyDelegateBinding()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputKeyDelegateBinding);
	UClass* Z_Construct_UClass_UInputKeyDelegateBinding_NoRegister()
	{
		return UInputKeyDelegateBinding::StaticClass();
	}
	struct Z_Construct_UClass_UInputKeyDelegateBinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputKeyDelegateBindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputKeyDelegateBindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputKeyDelegateBindings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputKeyDelegateBinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputDelegateBinding,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputKeyDelegateBinding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/InputKeyDelegateBinding.h" },
		{ "ModuleRelativePath", "Classes/Engine/InputKeyDelegateBinding.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputKeyDelegateBinding_Statics::NewProp_InputKeyDelegateBindings_Inner = { "InputKeyDelegateBindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding, METADATA_PARAMS(nullptr, 0) }; // 3171276430
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputKeyDelegateBinding_Statics::NewProp_InputKeyDelegateBindings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputKeyDelegateBinding.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputKeyDelegateBinding_Statics::NewProp_InputKeyDelegateBindings = { "InputKeyDelegateBindings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputKeyDelegateBinding, InputKeyDelegateBindings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInputKeyDelegateBinding_Statics::NewProp_InputKeyDelegateBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputKeyDelegateBinding_Statics::NewProp_InputKeyDelegateBindings_MetaData)) }; // 3171276430
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputKeyDelegateBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputKeyDelegateBinding_Statics::NewProp_InputKeyDelegateBindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputKeyDelegateBinding_Statics::NewProp_InputKeyDelegateBindings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputKeyDelegateBinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputKeyDelegateBinding>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputKeyDelegateBinding_Statics::ClassParams = {
		&UInputKeyDelegateBinding::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInputKeyDelegateBinding_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputKeyDelegateBinding_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInputKeyDelegateBinding_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputKeyDelegateBinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputKeyDelegateBinding()
	{
		if (!Z_Registration_Info_UClass_UInputKeyDelegateBinding.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputKeyDelegateBinding.OuterSingleton, Z_Construct_UClass_UInputKeyDelegateBinding_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputKeyDelegateBinding.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInputKeyDelegateBinding>()
	{
		return UInputKeyDelegateBinding::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputKeyDelegateBinding);
	UInputKeyDelegateBinding::~UInputKeyDelegateBinding() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputKeyDelegateBinding_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputKeyDelegateBinding_h_Statics::ScriptStructInfo[] = {
		{ FBlueprintInputKeyDelegateBinding::StaticStruct, Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::NewStructOps, TEXT("BlueprintInputKeyDelegateBinding"), &Z_Registration_Info_UScriptStruct_BlueprintInputKeyDelegateBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlueprintInputKeyDelegateBinding), 3171276430U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputKeyDelegateBinding_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInputKeyDelegateBinding, UInputKeyDelegateBinding::StaticClass, TEXT("UInputKeyDelegateBinding"), &Z_Registration_Info_UClass_UInputKeyDelegateBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputKeyDelegateBinding), 3845232330U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputKeyDelegateBinding_h_3655922537(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputKeyDelegateBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputKeyDelegateBinding_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputKeyDelegateBinding_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputKeyDelegateBinding_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
