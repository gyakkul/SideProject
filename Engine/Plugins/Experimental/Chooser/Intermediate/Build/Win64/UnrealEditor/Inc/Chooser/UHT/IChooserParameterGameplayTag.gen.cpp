// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IChooserParameterGameplayTag.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIChooserParameterGameplayTag() {}
// Cross Module References
	CHOOSER_API UClass* Z_Construct_UClass_UChooserParameterGameplayTag();
	CHOOSER_API UClass* Z_Construct_UClass_UChooserParameterGameplayTag_NoRegister();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FChooserParameterBase();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FChooserParameterGameplayTagBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Chooser();
// End Cross Module References
	void UChooserParameterGameplayTag::StaticRegisterNativesUChooserParameterGameplayTag()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChooserParameterGameplayTag);
	UClass* Z_Construct_UClass_UChooserParameterGameplayTag_NoRegister()
	{
		return UChooserParameterGameplayTag::StaticClass();
	}
	struct Z_Construct_UClass_UChooserParameterGameplayTag_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChooserParameterGameplayTag_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChooserParameterGameplayTag_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/IChooserParameterGameplayTag.h" },
		{ "NotBlueprintType", "true" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChooserParameterGameplayTag_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IChooserParameterGameplayTag>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChooserParameterGameplayTag_Statics::ClassParams = {
		&UChooserParameterGameplayTag::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UChooserParameterGameplayTag_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChooserParameterGameplayTag_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChooserParameterGameplayTag()
	{
		if (!Z_Registration_Info_UClass_UChooserParameterGameplayTag.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChooserParameterGameplayTag.OuterSingleton, Z_Construct_UClass_UChooserParameterGameplayTag_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChooserParameterGameplayTag.OuterSingleton;
	}
	template<> CHOOSER_API UClass* StaticClass<UChooserParameterGameplayTag>()
	{
		return UChooserParameterGameplayTag::StaticClass();
	}
	UChooserParameterGameplayTag::UChooserParameterGameplayTag(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChooserParameterGameplayTag);
	UChooserParameterGameplayTag::~UChooserParameterGameplayTag() {}

static_assert(std::is_polymorphic<FChooserParameterGameplayTagBase>() == std::is_polymorphic<FChooserParameterBase>(), "USTRUCT FChooserParameterGameplayTagBase cannot be polymorphic unless super FChooserParameterBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChooserParameterGameplayTagBase;
class UScriptStruct* FChooserParameterGameplayTagBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChooserParameterGameplayTagBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChooserParameterGameplayTagBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChooserParameterGameplayTagBase, (UObject*)Z_Construct_UPackage__Script_Chooser(), TEXT("ChooserParameterGameplayTagBase"));
	}
	return Z_Registration_Info_UScriptStruct_ChooserParameterGameplayTagBase.OuterSingleton;
}
template<> CHOOSER_API UScriptStruct* StaticStruct<FChooserParameterGameplayTagBase>()
{
	return FChooserParameterGameplayTagBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChooserParameterGameplayTagBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChooserParameterGameplayTagBase_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IChooserParameterGameplayTag.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChooserParameterGameplayTagBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChooserParameterGameplayTagBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChooserParameterGameplayTagBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
		Z_Construct_UScriptStruct_FChooserParameterBase,
		&NewStructOps,
		"ChooserParameterGameplayTagBase",
		sizeof(FChooserParameterGameplayTagBase),
		alignof(FChooserParameterGameplayTagBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChooserParameterGameplayTagBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChooserParameterGameplayTagBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChooserParameterGameplayTagBase()
	{
		if (!Z_Registration_Info_UScriptStruct_ChooserParameterGameplayTagBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChooserParameterGameplayTagBase.InnerSingleton, Z_Construct_UScriptStruct_FChooserParameterGameplayTagBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChooserParameterGameplayTagBase.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterGameplayTag_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterGameplayTag_h_Statics::ScriptStructInfo[] = {
		{ FChooserParameterGameplayTagBase::StaticStruct, Z_Construct_UScriptStruct_FChooserParameterGameplayTagBase_Statics::NewStructOps, TEXT("ChooserParameterGameplayTagBase"), &Z_Registration_Info_UScriptStruct_ChooserParameterGameplayTagBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChooserParameterGameplayTagBase), 2168595815U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterGameplayTag_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChooserParameterGameplayTag, UChooserParameterGameplayTag::StaticClass, TEXT("UChooserParameterGameplayTag"), &Z_Registration_Info_UClass_UChooserParameterGameplayTag, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChooserParameterGameplayTag), 3799251060U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterGameplayTag_h_2587055393(TEXT("/Script/Chooser"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterGameplayTag_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterGameplayTag_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterGameplayTag_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterGameplayTag_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
