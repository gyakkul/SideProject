// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IChooserParameterFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIChooserParameterFloat() {}
// Cross Module References
	CHOOSER_API UClass* Z_Construct_UClass_UChooserParameterFloat();
	CHOOSER_API UClass* Z_Construct_UClass_UChooserParameterFloat_NoRegister();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FChooserParameterBase();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FChooserParameterFloatBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Chooser();
// End Cross Module References
	void UChooserParameterFloat::StaticRegisterNativesUChooserParameterFloat()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChooserParameterFloat);
	UClass* Z_Construct_UClass_UChooserParameterFloat_NoRegister()
	{
		return UChooserParameterFloat::StaticClass();
	}
	struct Z_Construct_UClass_UChooserParameterFloat_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChooserParameterFloat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChooserParameterFloat_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/IChooserParameterFloat.h" },
		{ "NotBlueprintType", "true" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChooserParameterFloat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IChooserParameterFloat>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChooserParameterFloat_Statics::ClassParams = {
		&UChooserParameterFloat::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UChooserParameterFloat_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChooserParameterFloat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChooserParameterFloat()
	{
		if (!Z_Registration_Info_UClass_UChooserParameterFloat.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChooserParameterFloat.OuterSingleton, Z_Construct_UClass_UChooserParameterFloat_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChooserParameterFloat.OuterSingleton;
	}
	template<> CHOOSER_API UClass* StaticClass<UChooserParameterFloat>()
	{
		return UChooserParameterFloat::StaticClass();
	}
	UChooserParameterFloat::UChooserParameterFloat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChooserParameterFloat);
	UChooserParameterFloat::~UChooserParameterFloat() {}

static_assert(std::is_polymorphic<FChooserParameterFloatBase>() == std::is_polymorphic<FChooserParameterBase>(), "USTRUCT FChooserParameterFloatBase cannot be polymorphic unless super FChooserParameterBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChooserParameterFloatBase;
class UScriptStruct* FChooserParameterFloatBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChooserParameterFloatBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChooserParameterFloatBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChooserParameterFloatBase, (UObject*)Z_Construct_UPackage__Script_Chooser(), TEXT("ChooserParameterFloatBase"));
	}
	return Z_Registration_Info_UScriptStruct_ChooserParameterFloatBase.OuterSingleton;
}
template<> CHOOSER_API UScriptStruct* StaticStruct<FChooserParameterFloatBase>()
{
	return FChooserParameterFloatBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChooserParameterFloatBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChooserParameterFloatBase_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IChooserParameterFloat.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChooserParameterFloatBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChooserParameterFloatBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChooserParameterFloatBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
		Z_Construct_UScriptStruct_FChooserParameterBase,
		&NewStructOps,
		"ChooserParameterFloatBase",
		sizeof(FChooserParameterFloatBase),
		alignof(FChooserParameterFloatBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChooserParameterFloatBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChooserParameterFloatBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChooserParameterFloatBase()
	{
		if (!Z_Registration_Info_UScriptStruct_ChooserParameterFloatBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChooserParameterFloatBase.InnerSingleton, Z_Construct_UScriptStruct_FChooserParameterFloatBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChooserParameterFloatBase.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterFloat_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterFloat_h_Statics::ScriptStructInfo[] = {
		{ FChooserParameterFloatBase::StaticStruct, Z_Construct_UScriptStruct_FChooserParameterFloatBase_Statics::NewStructOps, TEXT("ChooserParameterFloatBase"), &Z_Registration_Info_UScriptStruct_ChooserParameterFloatBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChooserParameterFloatBase), 3160479616U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterFloat_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChooserParameterFloat, UChooserParameterFloat::StaticClass, TEXT("UChooserParameterFloat"), &Z_Registration_Info_UClass_UChooserParameterFloat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChooserParameterFloat), 2719545512U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterFloat_h_1987557170(TEXT("/Script/Chooser"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterFloat_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterFloat_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterFloat_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterFloat_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
