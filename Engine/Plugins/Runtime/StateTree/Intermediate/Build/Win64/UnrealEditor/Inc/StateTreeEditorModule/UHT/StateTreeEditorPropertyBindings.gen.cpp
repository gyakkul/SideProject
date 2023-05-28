// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreeEditorPropertyBindings.h"
#include "StateTreePropertyBindings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeEditorPropertyBindings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	STATETREEEDITORMODULE_API UClass* Z_Construct_UClass_UStateTreeEditorPropertyBindingsOwner();
	STATETREEEDITORMODULE_API UClass* Z_Construct_UClass_UStateTreeEditorPropertyBindingsOwner_NoRegister();
	STATETREEEDITORMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEditorPropertyBinding();
	STATETREEEDITORMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEditorPropertyBindings();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath();
	UPackage* Z_Construct_UPackage__Script_StateTreeEditorModule();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeEditorPropertyBinding;
class UScriptStruct* FStateTreeEditorPropertyBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeEditorPropertyBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeEditorPropertyBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeEditorPropertyBinding, (UObject*)Z_Construct_UPackage__Script_StateTreeEditorModule(), TEXT("StateTreeEditorPropertyBinding"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeEditorPropertyBinding.OuterSingleton;
}
template<> STATETREEEDITORMODULE_API UScriptStruct* StaticStruct<FStateTreeEditorPropertyBinding>()
{
	return FStateTreeEditorPropertyBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeEditorPropertyBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourcePath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourcePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeEditorPropertyBinding_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Editor representation of a property binding in StateTree\n */" },
		{ "ModuleRelativePath", "Public/StateTreeEditorPropertyBindings.h" },
		{ "ToolTip", "Editor representation of a property binding in StateTree" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeEditorPropertyBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeEditorPropertyBinding>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeEditorPropertyBinding_Statics::NewProp_SourcePath_MetaData[] = {
		{ "Comment", "/** Source property path of the binding */" },
		{ "ModuleRelativePath", "Public/StateTreeEditorPropertyBindings.h" },
		{ "ToolTip", "Source property path of the binding" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeEditorPropertyBinding_Statics::NewProp_SourcePath = { "SourcePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeEditorPropertyBinding, SourcePath), Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeEditorPropertyBinding_Statics::NewProp_SourcePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEditorPropertyBinding_Statics::NewProp_SourcePath_MetaData)) }; // 1476620735
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeEditorPropertyBinding_Statics::NewProp_TargetPath_MetaData[] = {
		{ "Comment", "/** Target property path of the binding */" },
		{ "ModuleRelativePath", "Public/StateTreeEditorPropertyBindings.h" },
		{ "ToolTip", "Target property path of the binding" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeEditorPropertyBinding_Statics::NewProp_TargetPath = { "TargetPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeEditorPropertyBinding, TargetPath), Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeEditorPropertyBinding_Statics::NewProp_TargetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEditorPropertyBinding_Statics::NewProp_TargetPath_MetaData)) }; // 1476620735
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeEditorPropertyBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeEditorPropertyBinding_Statics::NewProp_SourcePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeEditorPropertyBinding_Statics::NewProp_TargetPath,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeEditorPropertyBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeEditorModule,
		nullptr,
		&NewStructOps,
		"StateTreeEditorPropertyBinding",
		sizeof(FStateTreeEditorPropertyBinding),
		alignof(FStateTreeEditorPropertyBinding),
		Z_Construct_UScriptStruct_FStateTreeEditorPropertyBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEditorPropertyBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeEditorPropertyBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEditorPropertyBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEditorPropertyBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeEditorPropertyBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeEditorPropertyBinding.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeEditorPropertyBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeEditorPropertyBinding.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeEditorPropertyBindings;
class UScriptStruct* FStateTreeEditorPropertyBindings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeEditorPropertyBindings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeEditorPropertyBindings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeEditorPropertyBindings, (UObject*)Z_Construct_UPackage__Script_StateTreeEditorModule(), TEXT("StateTreeEditorPropertyBindings"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeEditorPropertyBindings.OuterSingleton;
}
template<> STATETREEEDITORMODULE_API UScriptStruct* StaticStruct<FStateTreeEditorPropertyBindings>()
{
	return FStateTreeEditorPropertyBindings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeEditorPropertyBindings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyBindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyBindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyBindings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeEditorPropertyBindings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Editor representation of a all property bindings in a StateTree\n */" },
		{ "ModuleRelativePath", "Public/StateTreeEditorPropertyBindings.h" },
		{ "ToolTip", "Editor representation of a all property bindings in a StateTree" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeEditorPropertyBindings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeEditorPropertyBindings>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeEditorPropertyBindings_Statics::NewProp_PropertyBindings_Inner = { "PropertyBindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FStateTreeEditorPropertyBinding, METADATA_PARAMS(nullptr, 0) }; // 1960160634
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeEditorPropertyBindings_Statics::NewProp_PropertyBindings_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeEditorPropertyBindings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStateTreeEditorPropertyBindings_Statics::NewProp_PropertyBindings = { "PropertyBindings", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeEditorPropertyBindings, PropertyBindings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeEditorPropertyBindings_Statics::NewProp_PropertyBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEditorPropertyBindings_Statics::NewProp_PropertyBindings_MetaData)) }; // 1960160634
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeEditorPropertyBindings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeEditorPropertyBindings_Statics::NewProp_PropertyBindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeEditorPropertyBindings_Statics::NewProp_PropertyBindings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeEditorPropertyBindings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeEditorModule,
		nullptr,
		&NewStructOps,
		"StateTreeEditorPropertyBindings",
		sizeof(FStateTreeEditorPropertyBindings),
		alignof(FStateTreeEditorPropertyBindings),
		Z_Construct_UScriptStruct_FStateTreeEditorPropertyBindings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEditorPropertyBindings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeEditorPropertyBindings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEditorPropertyBindings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEditorPropertyBindings()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeEditorPropertyBindings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeEditorPropertyBindings.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeEditorPropertyBindings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeEditorPropertyBindings.InnerSingleton;
	}
	void UStateTreeEditorPropertyBindingsOwner::StaticRegisterNativesUStateTreeEditorPropertyBindingsOwner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStateTreeEditorPropertyBindingsOwner);
	UClass* Z_Construct_UClass_UStateTreeEditorPropertyBindingsOwner_NoRegister()
	{
		return UStateTreeEditorPropertyBindingsOwner::StaticClass();
	}
	struct Z_Construct_UClass_UStateTreeEditorPropertyBindingsOwner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStateTreeEditorPropertyBindingsOwner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeEditorModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeEditorPropertyBindingsOwner_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/StateTreeEditorPropertyBindings.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStateTreeEditorPropertyBindingsOwner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IStateTreeEditorPropertyBindingsOwner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStateTreeEditorPropertyBindingsOwner_Statics::ClassParams = {
		&UStateTreeEditorPropertyBindingsOwner::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UStateTreeEditorPropertyBindingsOwner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeEditorPropertyBindingsOwner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStateTreeEditorPropertyBindingsOwner()
	{
		if (!Z_Registration_Info_UClass_UStateTreeEditorPropertyBindingsOwner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStateTreeEditorPropertyBindingsOwner.OuterSingleton, Z_Construct_UClass_UStateTreeEditorPropertyBindingsOwner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStateTreeEditorPropertyBindingsOwner.OuterSingleton;
	}
	template<> STATETREEEDITORMODULE_API UClass* StaticClass<UStateTreeEditorPropertyBindingsOwner>()
	{
		return UStateTreeEditorPropertyBindingsOwner::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStateTreeEditorPropertyBindingsOwner);
	UStateTreeEditorPropertyBindingsOwner::~UStateTreeEditorPropertyBindingsOwner() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorPropertyBindings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorPropertyBindings_h_Statics::ScriptStructInfo[] = {
		{ FStateTreeEditorPropertyBinding::StaticStruct, Z_Construct_UScriptStruct_FStateTreeEditorPropertyBinding_Statics::NewStructOps, TEXT("StateTreeEditorPropertyBinding"), &Z_Registration_Info_UScriptStruct_StateTreeEditorPropertyBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeEditorPropertyBinding), 1960160634U) },
		{ FStateTreeEditorPropertyBindings::StaticStruct, Z_Construct_UScriptStruct_FStateTreeEditorPropertyBindings_Statics::NewStructOps, TEXT("StateTreeEditorPropertyBindings"), &Z_Registration_Info_UScriptStruct_StateTreeEditorPropertyBindings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeEditorPropertyBindings), 424966559U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorPropertyBindings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStateTreeEditorPropertyBindingsOwner, UStateTreeEditorPropertyBindingsOwner::StaticClass, TEXT("UStateTreeEditorPropertyBindingsOwner"), &Z_Registration_Info_UClass_UStateTreeEditorPropertyBindingsOwner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStateTreeEditorPropertyBindingsOwner), 3859242682U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorPropertyBindings_h_2747151086(TEXT("/Script/StateTreeEditorModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorPropertyBindings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorPropertyBindings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorPropertyBindings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorPropertyBindings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
