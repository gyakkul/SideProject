// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IChooserParameterEnum.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIChooserParameterEnum() {}
// Cross Module References
	CHOOSER_API UClass* Z_Construct_UClass_UChooserParameterEnum();
	CHOOSER_API UClass* Z_Construct_UClass_UChooserParameterEnum_NoRegister();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FChooserParameterBase();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FChooserParameterEnumBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Chooser();
// End Cross Module References
	void UChooserParameterEnum::StaticRegisterNativesUChooserParameterEnum()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChooserParameterEnum);
	UClass* Z_Construct_UClass_UChooserParameterEnum_NoRegister()
	{
		return UChooserParameterEnum::StaticClass();
	}
	struct Z_Construct_UClass_UChooserParameterEnum_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChooserParameterEnum_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChooserParameterEnum_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/IChooserParameterEnum.h" },
		{ "NotBlueprintType", "true" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChooserParameterEnum_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IChooserParameterEnum>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChooserParameterEnum_Statics::ClassParams = {
		&UChooserParameterEnum::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UChooserParameterEnum_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChooserParameterEnum_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChooserParameterEnum()
	{
		if (!Z_Registration_Info_UClass_UChooserParameterEnum.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChooserParameterEnum.OuterSingleton, Z_Construct_UClass_UChooserParameterEnum_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChooserParameterEnum.OuterSingleton;
	}
	template<> CHOOSER_API UClass* StaticClass<UChooserParameterEnum>()
	{
		return UChooserParameterEnum::StaticClass();
	}
	UChooserParameterEnum::UChooserParameterEnum(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChooserParameterEnum);
	UChooserParameterEnum::~UChooserParameterEnum() {}

static_assert(std::is_polymorphic<FChooserParameterEnumBase>() == std::is_polymorphic<FChooserParameterBase>(), "USTRUCT FChooserParameterEnumBase cannot be polymorphic unless super FChooserParameterBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChooserParameterEnumBase;
class UScriptStruct* FChooserParameterEnumBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChooserParameterEnumBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChooserParameterEnumBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChooserParameterEnumBase, (UObject*)Z_Construct_UPackage__Script_Chooser(), TEXT("ChooserParameterEnumBase"));
	}
	return Z_Registration_Info_UScriptStruct_ChooserParameterEnumBase.OuterSingleton;
}
template<> CHOOSER_API UScriptStruct* StaticStruct<FChooserParameterEnumBase>()
{
	return FChooserParameterEnumBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChooserParameterEnumBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChooserParameterEnumBase_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IChooserParameterEnum.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChooserParameterEnumBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChooserParameterEnumBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChooserParameterEnumBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
		Z_Construct_UScriptStruct_FChooserParameterBase,
		&NewStructOps,
		"ChooserParameterEnumBase",
		sizeof(FChooserParameterEnumBase),
		alignof(FChooserParameterEnumBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChooserParameterEnumBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChooserParameterEnumBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChooserParameterEnumBase()
	{
		if (!Z_Registration_Info_UScriptStruct_ChooserParameterEnumBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChooserParameterEnumBase.InnerSingleton, Z_Construct_UScriptStruct_FChooserParameterEnumBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChooserParameterEnumBase.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterEnum_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterEnum_h_Statics::ScriptStructInfo[] = {
		{ FChooserParameterEnumBase::StaticStruct, Z_Construct_UScriptStruct_FChooserParameterEnumBase_Statics::NewStructOps, TEXT("ChooserParameterEnumBase"), &Z_Registration_Info_UScriptStruct_ChooserParameterEnumBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChooserParameterEnumBase), 477518414U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterEnum_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChooserParameterEnum, UChooserParameterEnum::StaticClass, TEXT("UChooserParameterEnum"), &Z_Registration_Info_UClass_UChooserParameterEnum, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChooserParameterEnum), 2916428660U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterEnum_h_3169112075(TEXT("/Script/Chooser"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterEnum_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterEnum_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterEnum_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterEnum_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
