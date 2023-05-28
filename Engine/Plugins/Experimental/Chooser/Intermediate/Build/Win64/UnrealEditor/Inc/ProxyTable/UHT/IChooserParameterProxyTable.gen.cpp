// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IChooserParameterProxyTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIChooserParameterProxyTable() {}
// Cross Module References
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FChooserParameterBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	PROXYTABLE_API UClass* Z_Construct_UClass_UChooserParameterProxyTable();
	PROXYTABLE_API UClass* Z_Construct_UClass_UChooserParameterProxyTable_NoRegister();
	PROXYTABLE_API UScriptStruct* Z_Construct_UScriptStruct_FChooserParameterProxyTableBase();
	UPackage* Z_Construct_UPackage__Script_ProxyTable();
// End Cross Module References
	void UChooserParameterProxyTable::StaticRegisterNativesUChooserParameterProxyTable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChooserParameterProxyTable);
	UClass* Z_Construct_UClass_UChooserParameterProxyTable_NoRegister()
	{
		return UChooserParameterProxyTable::StaticClass();
	}
	struct Z_Construct_UClass_UChooserParameterProxyTable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChooserParameterProxyTable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ProxyTable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChooserParameterProxyTable_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/IChooserParameterProxyTable.h" },
		{ "NotBlueprintType", "true" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChooserParameterProxyTable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IChooserParameterProxyTable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChooserParameterProxyTable_Statics::ClassParams = {
		&UChooserParameterProxyTable::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UChooserParameterProxyTable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChooserParameterProxyTable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChooserParameterProxyTable()
	{
		if (!Z_Registration_Info_UClass_UChooserParameterProxyTable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChooserParameterProxyTable.OuterSingleton, Z_Construct_UClass_UChooserParameterProxyTable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChooserParameterProxyTable.OuterSingleton;
	}
	template<> PROXYTABLE_API UClass* StaticClass<UChooserParameterProxyTable>()
	{
		return UChooserParameterProxyTable::StaticClass();
	}
	UChooserParameterProxyTable::UChooserParameterProxyTable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChooserParameterProxyTable);
	UChooserParameterProxyTable::~UChooserParameterProxyTable() {}

static_assert(std::is_polymorphic<FChooserParameterProxyTableBase>() == std::is_polymorphic<FChooserParameterBase>(), "USTRUCT FChooserParameterProxyTableBase cannot be polymorphic unless super FChooserParameterBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChooserParameterProxyTableBase;
class UScriptStruct* FChooserParameterProxyTableBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChooserParameterProxyTableBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChooserParameterProxyTableBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChooserParameterProxyTableBase, (UObject*)Z_Construct_UPackage__Script_ProxyTable(), TEXT("ChooserParameterProxyTableBase"));
	}
	return Z_Registration_Info_UScriptStruct_ChooserParameterProxyTableBase.OuterSingleton;
}
template<> PROXYTABLE_API UScriptStruct* StaticStruct<FChooserParameterProxyTableBase>()
{
	return FChooserParameterProxyTableBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChooserParameterProxyTableBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChooserParameterProxyTableBase_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IChooserParameterProxyTable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChooserParameterProxyTableBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChooserParameterProxyTableBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChooserParameterProxyTableBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProxyTable,
		Z_Construct_UScriptStruct_FChooserParameterBase,
		&NewStructOps,
		"ChooserParameterProxyTableBase",
		sizeof(FChooserParameterProxyTableBase),
		alignof(FChooserParameterProxyTableBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChooserParameterProxyTableBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChooserParameterProxyTableBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChooserParameterProxyTableBase()
	{
		if (!Z_Registration_Info_UScriptStruct_ChooserParameterProxyTableBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChooserParameterProxyTableBase.InnerSingleton, Z_Construct_UScriptStruct_FChooserParameterProxyTableBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChooserParameterProxyTableBase.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTable_Public_IChooserParameterProxyTable_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTable_Public_IChooserParameterProxyTable_h_Statics::ScriptStructInfo[] = {
		{ FChooserParameterProxyTableBase::StaticStruct, Z_Construct_UScriptStruct_FChooserParameterProxyTableBase_Statics::NewStructOps, TEXT("ChooserParameterProxyTableBase"), &Z_Registration_Info_UScriptStruct_ChooserParameterProxyTableBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChooserParameterProxyTableBase), 632675971U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTable_Public_IChooserParameterProxyTable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChooserParameterProxyTable, UChooserParameterProxyTable::StaticClass, TEXT("UChooserParameterProxyTable"), &Z_Registration_Info_UClass_UChooserParameterProxyTable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChooserParameterProxyTable), 1520246543U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTable_Public_IChooserParameterProxyTable_h_1377588536(TEXT("/Script/ProxyTable"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTable_Public_IChooserParameterProxyTable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTable_Public_IChooserParameterProxyTable_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTable_Public_IChooserParameterProxyTable_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTable_Public_IChooserParameterProxyTable_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
