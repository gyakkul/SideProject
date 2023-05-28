// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponentDelegateBinding() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UComponentDelegateBinding();
	ENGINE_API UClass* Z_Construct_UClass_UComponentDelegateBinding_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDynamicBlueprintBinding();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlueprintComponentDelegateBinding;
class UScriptStruct* FBlueprintComponentDelegateBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintComponentDelegateBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlueprintComponentDelegateBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BlueprintComponentDelegateBinding"));
	}
	return Z_Registration_Info_UScriptStruct_BlueprintComponentDelegateBinding.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBlueprintComponentDelegateBinding>()
{
	return FBlueprintComponentDelegateBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentPropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ComponentPropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DelegatePropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DelegatePropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionNameToBind_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FunctionNameToBind;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Entry for a delegate to assign after a blueprint has been instanced */" },
		{ "ModuleRelativePath", "Classes/Engine/ComponentDelegateBinding.h" },
		{ "ToolTip", "Entry for a delegate to assign after a blueprint has been instanced" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintComponentDelegateBinding>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::NewProp_ComponentPropertyName_MetaData[] = {
		{ "Comment", "/** Name of component property that contains delegate we want to assign to. */" },
		{ "ModuleRelativePath", "Classes/Engine/ComponentDelegateBinding.h" },
		{ "ToolTip", "Name of component property that contains delegate we want to assign to." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::NewProp_ComponentPropertyName = { "ComponentPropertyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlueprintComponentDelegateBinding, ComponentPropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::NewProp_ComponentPropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::NewProp_ComponentPropertyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::NewProp_DelegatePropertyName_MetaData[] = {
		{ "Comment", "/** Name of property on the component that we want to assign to. */" },
		{ "ModuleRelativePath", "Classes/Engine/ComponentDelegateBinding.h" },
		{ "ToolTip", "Name of property on the component that we want to assign to." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::NewProp_DelegatePropertyName = { "DelegatePropertyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlueprintComponentDelegateBinding, DelegatePropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::NewProp_DelegatePropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::NewProp_DelegatePropertyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::NewProp_FunctionNameToBind_MetaData[] = {
		{ "Comment", "/** Name of function that we want to bind to the delegate. */" },
		{ "ModuleRelativePath", "Classes/Engine/ComponentDelegateBinding.h" },
		{ "ToolTip", "Name of function that we want to bind to the delegate." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::NewProp_FunctionNameToBind = { "FunctionNameToBind", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlueprintComponentDelegateBinding, FunctionNameToBind), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::NewProp_FunctionNameToBind_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::NewProp_FunctionNameToBind_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::NewProp_ComponentPropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::NewProp_DelegatePropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::NewProp_FunctionNameToBind,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BlueprintComponentDelegateBinding",
		sizeof(FBlueprintComponentDelegateBinding),
		alignof(FBlueprintComponentDelegateBinding),
		Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_BlueprintComponentDelegateBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlueprintComponentDelegateBinding.InnerSingleton, Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BlueprintComponentDelegateBinding.InnerSingleton;
	}
	void UComponentDelegateBinding::StaticRegisterNativesUComponentDelegateBinding()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComponentDelegateBinding);
	UClass* Z_Construct_UClass_UComponentDelegateBinding_NoRegister()
	{
		return UComponentDelegateBinding::StaticClass();
	}
	struct Z_Construct_UClass_UComponentDelegateBinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentDelegateBindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentDelegateBindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentDelegateBindings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComponentDelegateBinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDynamicBlueprintBinding,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponentDelegateBinding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/ComponentDelegateBinding.h" },
		{ "ModuleRelativePath", "Classes/Engine/ComponentDelegateBinding.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComponentDelegateBinding_Statics::NewProp_ComponentDelegateBindings_Inner = { "ComponentDelegateBindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding, METADATA_PARAMS(nullptr, 0) }; // 4033499361
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponentDelegateBinding_Statics::NewProp_ComponentDelegateBindings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ComponentDelegateBinding.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UComponentDelegateBinding_Statics::NewProp_ComponentDelegateBindings = { "ComponentDelegateBindings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComponentDelegateBinding, ComponentDelegateBindings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UComponentDelegateBinding_Statics::NewProp_ComponentDelegateBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComponentDelegateBinding_Statics::NewProp_ComponentDelegateBindings_MetaData)) }; // 4033499361
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComponentDelegateBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComponentDelegateBinding_Statics::NewProp_ComponentDelegateBindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComponentDelegateBinding_Statics::NewProp_ComponentDelegateBindings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComponentDelegateBinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComponentDelegateBinding>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComponentDelegateBinding_Statics::ClassParams = {
		&UComponentDelegateBinding::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UComponentDelegateBinding_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UComponentDelegateBinding_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UComponentDelegateBinding_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComponentDelegateBinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComponentDelegateBinding()
	{
		if (!Z_Registration_Info_UClass_UComponentDelegateBinding.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComponentDelegateBinding.OuterSingleton, Z_Construct_UClass_UComponentDelegateBinding_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComponentDelegateBinding.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UComponentDelegateBinding>()
	{
		return UComponentDelegateBinding::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComponentDelegateBinding);
	UComponentDelegateBinding::~UComponentDelegateBinding() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ComponentDelegateBinding_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ComponentDelegateBinding_h_Statics::ScriptStructInfo[] = {
		{ FBlueprintComponentDelegateBinding::StaticStruct, Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::NewStructOps, TEXT("BlueprintComponentDelegateBinding"), &Z_Registration_Info_UScriptStruct_BlueprintComponentDelegateBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlueprintComponentDelegateBinding), 4033499361U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ComponentDelegateBinding_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComponentDelegateBinding, UComponentDelegateBinding::StaticClass, TEXT("UComponentDelegateBinding"), &Z_Registration_Info_UClass_UComponentDelegateBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComponentDelegateBinding), 3215254777U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ComponentDelegateBinding_h_2994221262(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ComponentDelegateBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ComponentDelegateBinding_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ComponentDelegateBinding_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ComponentDelegateBinding_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
