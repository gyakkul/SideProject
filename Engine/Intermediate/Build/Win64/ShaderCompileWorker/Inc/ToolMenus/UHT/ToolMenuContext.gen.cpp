// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolMenuContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolMenuContext() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	TOOLMENUS_API UClass* Z_Construct_UClass_USlateTabManagerContext();
	TOOLMENUS_API UClass* Z_Construct_UClass_USlateTabManagerContext_NoRegister();
	TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenuContextBase();
	TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenuContextBase_NoRegister();
	TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FToolMenuContext();
	UPackage* Z_Construct_UPackage__Script_ToolMenus();
// End Cross Module References
	void UToolMenuContextBase::StaticRegisterNativesUToolMenuContextBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UToolMenuContextBase);
	UClass* Z_Construct_UClass_UToolMenuContextBase_NoRegister()
	{
		return UToolMenuContextBase::StaticClass();
	}
	struct Z_Construct_UClass_UToolMenuContextBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UToolMenuContextBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ToolMenus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolMenuContextBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ToolMenuContext.h" },
		{ "ModuleRelativePath", "Public/ToolMenuContext.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UToolMenuContextBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToolMenuContextBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UToolMenuContextBase_Statics::ClassParams = {
		&UToolMenuContextBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UToolMenuContextBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenuContextBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UToolMenuContextBase()
	{
		if (!Z_Registration_Info_UClass_UToolMenuContextBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToolMenuContextBase.OuterSingleton, Z_Construct_UClass_UToolMenuContextBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UToolMenuContextBase.OuterSingleton;
	}
	template<> TOOLMENUS_API UClass* StaticClass<UToolMenuContextBase>()
	{
		return UToolMenuContextBase::StaticClass();
	}
	UToolMenuContextBase::UToolMenuContextBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UToolMenuContextBase);
	UToolMenuContextBase::~UToolMenuContextBase() {}
	void USlateTabManagerContext::StaticRegisterNativesUSlateTabManagerContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USlateTabManagerContext);
	UClass* Z_Construct_UClass_USlateTabManagerContext_NoRegister()
	{
		return USlateTabManagerContext::StaticClass();
	}
	struct Z_Construct_UClass_USlateTabManagerContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlateTabManagerContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UToolMenuContextBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ToolMenus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateTabManagerContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ToolMenuContext.h" },
		{ "ModuleRelativePath", "Public/ToolMenuContext.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlateTabManagerContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlateTabManagerContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USlateTabManagerContext_Statics::ClassParams = {
		&USlateTabManagerContext::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USlateTabManagerContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlateTabManagerContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlateTabManagerContext()
	{
		if (!Z_Registration_Info_UClass_USlateTabManagerContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USlateTabManagerContext.OuterSingleton, Z_Construct_UClass_USlateTabManagerContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USlateTabManagerContext.OuterSingleton;
	}
	template<> TOOLMENUS_API UClass* StaticClass<USlateTabManagerContext>()
	{
		return USlateTabManagerContext::StaticClass();
	}
	USlateTabManagerContext::USlateTabManagerContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlateTabManagerContext);
	USlateTabManagerContext::~USlateTabManagerContext() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ToolMenuContext;
class UScriptStruct* FToolMenuContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ToolMenuContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ToolMenuContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FToolMenuContext, (UObject*)Z_Construct_UPackage__Script_ToolMenus(), TEXT("ToolMenuContext"));
	}
	return Z_Registration_Info_UScriptStruct_ToolMenuContext.OuterSingleton;
}
template<> TOOLMENUS_API UScriptStruct* StaticStruct<FToolMenuContext>()
{
	return FToolMenuContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FToolMenuContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ContextObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ContextObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolMenuContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ToolMenuContext.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FToolMenuContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FToolMenuContext>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FToolMenuContext_Statics::NewProp_ContextObjects_Inner = { "ContextObjects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolMenuContext_Statics::NewProp_ContextObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolMenuContext.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FToolMenuContext_Statics::NewProp_ContextObjects = { "ContextObjects", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolMenuContext, ContextObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolMenuContext_Statics::NewProp_ContextObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuContext_Statics::NewProp_ContextObjects_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FToolMenuContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuContext_Statics::NewProp_ContextObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuContext_Statics::NewProp_ContextObjects,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FToolMenuContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ToolMenus,
		nullptr,
		&NewStructOps,
		"ToolMenuContext",
		sizeof(FToolMenuContext),
		alignof(FToolMenuContext),
		Z_Construct_UScriptStruct_FToolMenuContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuContext_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FToolMenuContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FToolMenuContext()
	{
		if (!Z_Registration_Info_UScriptStruct_ToolMenuContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ToolMenuContext.InnerSingleton, Z_Construct_UScriptStruct_FToolMenuContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ToolMenuContext.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuContext_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuContext_h_Statics::ScriptStructInfo[] = {
		{ FToolMenuContext::StaticStruct, Z_Construct_UScriptStruct_FToolMenuContext_Statics::NewStructOps, TEXT("ToolMenuContext"), &Z_Registration_Info_UScriptStruct_ToolMenuContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FToolMenuContext), 3730854037U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UToolMenuContextBase, UToolMenuContextBase::StaticClass, TEXT("UToolMenuContextBase"), &Z_Registration_Info_UClass_UToolMenuContextBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToolMenuContextBase), 3454613225U) },
		{ Z_Construct_UClass_USlateTabManagerContext, USlateTabManagerContext::StaticClass, TEXT("USlateTabManagerContext"), &Z_Registration_Info_UClass_USlateTabManagerContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USlateTabManagerContext), 2639581665U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuContext_h_1085979766(TEXT("/Script/ToolMenus"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuContext_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuContext_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuContext_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
