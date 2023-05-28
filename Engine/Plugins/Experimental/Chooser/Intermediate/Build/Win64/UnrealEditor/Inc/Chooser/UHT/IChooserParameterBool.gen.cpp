// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IChooserParameterBool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIChooserParameterBool() {}
// Cross Module References
	CHOOSER_API UClass* Z_Construct_UClass_UChooserParameterBool();
	CHOOSER_API UClass* Z_Construct_UClass_UChooserParameterBool_NoRegister();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FChooserParameterBase();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FChooserParameterBoolBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Chooser();
// End Cross Module References
	void UChooserParameterBool::StaticRegisterNativesUChooserParameterBool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChooserParameterBool);
	UClass* Z_Construct_UClass_UChooserParameterBool_NoRegister()
	{
		return UChooserParameterBool::StaticClass();
	}
	struct Z_Construct_UClass_UChooserParameterBool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChooserParameterBool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChooserParameterBool_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/IChooserParameterBool.h" },
		{ "NotBlueprintType", "true" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChooserParameterBool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IChooserParameterBool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChooserParameterBool_Statics::ClassParams = {
		&UChooserParameterBool::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UChooserParameterBool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChooserParameterBool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChooserParameterBool()
	{
		if (!Z_Registration_Info_UClass_UChooserParameterBool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChooserParameterBool.OuterSingleton, Z_Construct_UClass_UChooserParameterBool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChooserParameterBool.OuterSingleton;
	}
	template<> CHOOSER_API UClass* StaticClass<UChooserParameterBool>()
	{
		return UChooserParameterBool::StaticClass();
	}
	UChooserParameterBool::UChooserParameterBool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChooserParameterBool);
	UChooserParameterBool::~UChooserParameterBool() {}

static_assert(std::is_polymorphic<FChooserParameterBoolBase>() == std::is_polymorphic<FChooserParameterBase>(), "USTRUCT FChooserParameterBoolBase cannot be polymorphic unless super FChooserParameterBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChooserParameterBoolBase;
class UScriptStruct* FChooserParameterBoolBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChooserParameterBoolBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChooserParameterBoolBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChooserParameterBoolBase, (UObject*)Z_Construct_UPackage__Script_Chooser(), TEXT("ChooserParameterBoolBase"));
	}
	return Z_Registration_Info_UScriptStruct_ChooserParameterBoolBase.OuterSingleton;
}
template<> CHOOSER_API UScriptStruct* StaticStruct<FChooserParameterBoolBase>()
{
	return FChooserParameterBoolBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChooserParameterBoolBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChooserParameterBoolBase_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IChooserParameterBool.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChooserParameterBoolBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChooserParameterBoolBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChooserParameterBoolBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
		Z_Construct_UScriptStruct_FChooserParameterBase,
		&NewStructOps,
		"ChooserParameterBoolBase",
		sizeof(FChooserParameterBoolBase),
		alignof(FChooserParameterBoolBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChooserParameterBoolBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChooserParameterBoolBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChooserParameterBoolBase()
	{
		if (!Z_Registration_Info_UScriptStruct_ChooserParameterBoolBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChooserParameterBoolBase.InnerSingleton, Z_Construct_UScriptStruct_FChooserParameterBoolBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChooserParameterBoolBase.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterBool_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterBool_h_Statics::ScriptStructInfo[] = {
		{ FChooserParameterBoolBase::StaticStruct, Z_Construct_UScriptStruct_FChooserParameterBoolBase_Statics::NewStructOps, TEXT("ChooserParameterBoolBase"), &Z_Registration_Info_UScriptStruct_ChooserParameterBoolBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChooserParameterBoolBase), 3976566243U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterBool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChooserParameterBool, UChooserParameterBool::StaticClass, TEXT("UChooserParameterBool"), &Z_Registration_Info_UClass_UChooserParameterBool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChooserParameterBool), 1389307671U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterBool_h_2140157997(TEXT("/Script/Chooser"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterBool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterBool_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterBool_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterBool_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
