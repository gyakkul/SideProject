// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IObjectChooser.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIObjectChooser() {}
// Cross Module References
	CHOOSER_API UClass* Z_Construct_UClass_UObjectChooser();
	CHOOSER_API UClass* Z_Construct_UClass_UObjectChooser_NoRegister();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FObjectChooserBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Chooser();
// End Cross Module References
	void UObjectChooser::StaticRegisterNativesUObjectChooser()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjectChooser);
	UClass* Z_Construct_UClass_UObjectChooser_NoRegister()
	{
		return UObjectChooser::StaticClass();
	}
	struct Z_Construct_UClass_UObjectChooser_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectChooser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectChooser_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/IObjectChooser.h" },
		{ "NotBlueprintType", "true" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectChooser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IObjectChooser>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectChooser_Statics::ClassParams = {
		&UObjectChooser::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UObjectChooser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectChooser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjectChooser()
	{
		if (!Z_Registration_Info_UClass_UObjectChooser.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectChooser.OuterSingleton, Z_Construct_UClass_UObjectChooser_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UObjectChooser.OuterSingleton;
	}
	template<> CHOOSER_API UClass* StaticClass<UObjectChooser>()
	{
		return UObjectChooser::StaticClass();
	}
	UObjectChooser::UObjectChooser(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectChooser);
	UObjectChooser::~UObjectChooser() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ObjectChooserBase;
class UScriptStruct* FObjectChooserBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ObjectChooserBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ObjectChooserBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FObjectChooserBase, (UObject*)Z_Construct_UPackage__Script_Chooser(), TEXT("ObjectChooserBase"));
	}
	return Z_Registration_Info_UScriptStruct_ObjectChooserBase.OuterSingleton;
}
template<> CHOOSER_API UScriptStruct* StaticStruct<FObjectChooserBase>()
{
	return FObjectChooserBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FObjectChooserBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectChooserBase_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IObjectChooser.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FObjectChooserBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObjectChooserBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObjectChooserBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
		nullptr,
		&NewStructOps,
		"ObjectChooserBase",
		sizeof(FObjectChooserBase),
		alignof(FObjectChooserBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectChooserBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectChooserBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FObjectChooserBase()
	{
		if (!Z_Registration_Info_UScriptStruct_ObjectChooserBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ObjectChooserBase.InnerSingleton, Z_Construct_UScriptStruct_FObjectChooserBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ObjectChooserBase.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IObjectChooser_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IObjectChooser_h_Statics::ScriptStructInfo[] = {
		{ FObjectChooserBase::StaticStruct, Z_Construct_UScriptStruct_FObjectChooserBase_Statics::NewStructOps, TEXT("ObjectChooserBase"), &Z_Registration_Info_UScriptStruct_ObjectChooserBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FObjectChooserBase), 3437873380U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IObjectChooser_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UObjectChooser, UObjectChooser::StaticClass, TEXT("UObjectChooser"), &Z_Registration_Info_UClass_UObjectChooser, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectChooser), 2307402721U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IObjectChooser_h_389553789(TEXT("/Script/Chooser"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IObjectChooser_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IObjectChooser_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IObjectChooser_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IObjectChooser_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
