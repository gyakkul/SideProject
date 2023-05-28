// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IChooserColumn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIChooserColumn() {}
// Cross Module References
	CHOOSER_API UClass* Z_Construct_UClass_UChooserColumn();
	CHOOSER_API UClass* Z_Construct_UClass_UChooserColumn_NoRegister();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FChooserColumnBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Chooser();
// End Cross Module References
	void UChooserColumn::StaticRegisterNativesUChooserColumn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChooserColumn);
	UClass* Z_Construct_UClass_UChooserColumn_NoRegister()
	{
		return UChooserColumn::StaticClass();
	}
	struct Z_Construct_UClass_UChooserColumn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChooserColumn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChooserColumn_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/IChooserColumn.h" },
		{ "NotBlueprintType", "true" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChooserColumn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IChooserColumn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChooserColumn_Statics::ClassParams = {
		&UChooserColumn::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UChooserColumn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChooserColumn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChooserColumn()
	{
		if (!Z_Registration_Info_UClass_UChooserColumn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChooserColumn.OuterSingleton, Z_Construct_UClass_UChooserColumn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChooserColumn.OuterSingleton;
	}
	template<> CHOOSER_API UClass* StaticClass<UChooserColumn>()
	{
		return UChooserColumn::StaticClass();
	}
	UChooserColumn::UChooserColumn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChooserColumn);
	UChooserColumn::~UChooserColumn() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChooserColumnBase;
class UScriptStruct* FChooserColumnBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChooserColumnBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChooserColumnBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChooserColumnBase, (UObject*)Z_Construct_UPackage__Script_Chooser(), TEXT("ChooserColumnBase"));
	}
	return Z_Registration_Info_UScriptStruct_ChooserColumnBase.OuterSingleton;
}
template<> CHOOSER_API UScriptStruct* StaticStruct<FChooserColumnBase>()
{
	return FChooserColumnBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChooserColumnBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChooserColumnBase_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IChooserColumn.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChooserColumnBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChooserColumnBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChooserColumnBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
		nullptr,
		&NewStructOps,
		"ChooserColumnBase",
		sizeof(FChooserColumnBase),
		alignof(FChooserColumnBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChooserColumnBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChooserColumnBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChooserColumnBase()
	{
		if (!Z_Registration_Info_UScriptStruct_ChooserColumnBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChooserColumnBase.InnerSingleton, Z_Construct_UScriptStruct_FChooserColumnBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChooserColumnBase.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserColumn_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserColumn_h_Statics::ScriptStructInfo[] = {
		{ FChooserColumnBase::StaticStruct, Z_Construct_UScriptStruct_FChooserColumnBase_Statics::NewStructOps, TEXT("ChooserColumnBase"), &Z_Registration_Info_UScriptStruct_ChooserColumnBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChooserColumnBase), 1755565254U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserColumn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChooserColumn, UChooserColumn::StaticClass, TEXT("UChooserColumn"), &Z_Registration_Info_UClass_UChooserColumn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChooserColumn), 3629163162U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserColumn_h_3341197744(TEXT("/Script/Chooser"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserColumn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserColumn_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserColumn_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserColumn_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
