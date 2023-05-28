// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Elements/Interfaces/TypedElementDataStorageInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementDataStorageInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementDataStorageInterface();
	TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementDataStorageInterface_NoRegister();
	TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementDataStorageColumn();
	TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementDataStorageTag();
	UPackage* Z_Construct_UPackage__Script_TypedElementFramework();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementDataStorageColumn;
class UScriptStruct* FTypedElementDataStorageColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementDataStorageColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementDataStorageColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementDataStorageColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementDataStorageColumn"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementDataStorageColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementDataStorageColumn>()
{
	return FTypedElementDataStorageColumn::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTypedElementDataStorageColumn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypedElementDataStorageColumn_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base for the data structures for a column.\n */" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementDataStorageInterface.h" },
		{ "ToolTip", "Base for the data structures for a column." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTypedElementDataStorageColumn_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementDataStorageColumn>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementDataStorageColumn_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
		nullptr,
		&NewStructOps,
		"TypedElementDataStorageColumn",
		sizeof(FTypedElementDataStorageColumn),
		alignof(FTypedElementDataStorageColumn),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTypedElementDataStorageColumn_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementDataStorageColumn_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTypedElementDataStorageColumn()
	{
		if (!Z_Registration_Info_UScriptStruct_TypedElementDataStorageColumn.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementDataStorageColumn.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementDataStorageColumn_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TypedElementDataStorageColumn.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementDataStorageTag;
class UScriptStruct* FTypedElementDataStorageTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementDataStorageTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementDataStorageTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementDataStorageTag, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementDataStorageTag"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementDataStorageTag.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementDataStorageTag>()
{
	return FTypedElementDataStorageTag::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTypedElementDataStorageTag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypedElementDataStorageTag_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base for the data structures that act as tags to rows. Tags should not have any data.\n */" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementDataStorageInterface.h" },
		{ "ToolTip", "Base for the data structures that act as tags to rows. Tags should not have any data." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTypedElementDataStorageTag_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementDataStorageTag>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementDataStorageTag_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
		nullptr,
		&NewStructOps,
		"TypedElementDataStorageTag",
		sizeof(FTypedElementDataStorageTag),
		alignof(FTypedElementDataStorageTag),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTypedElementDataStorageTag_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementDataStorageTag_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTypedElementDataStorageTag()
	{
		if (!Z_Registration_Info_UScriptStruct_TypedElementDataStorageTag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementDataStorageTag.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementDataStorageTag_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TypedElementDataStorageTag.InnerSingleton;
	}
	void UTypedElementDataStorageInterface::StaticRegisterNativesUTypedElementDataStorageInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementDataStorageInterface);
	UClass* Z_Construct_UClass_UTypedElementDataStorageInterface_NoRegister()
	{
		return UTypedElementDataStorageInterface::StaticClass();
	}
	struct Z_Construct_UClass_UTypedElementDataStorageInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypedElementDataStorageInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementDataStorageInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementDataStorageInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypedElementDataStorageInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITypedElementDataStorageInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementDataStorageInterface_Statics::ClassParams = {
		&UTypedElementDataStorageInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTypedElementDataStorageInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementDataStorageInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTypedElementDataStorageInterface()
	{
		if (!Z_Registration_Info_UClass_UTypedElementDataStorageInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementDataStorageInterface.OuterSingleton, Z_Construct_UClass_UTypedElementDataStorageInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTypedElementDataStorageInterface.OuterSingleton;
	}
	template<> TYPEDELEMENTFRAMEWORK_API UClass* StaticClass<UTypedElementDataStorageInterface>()
	{
		return UTypedElementDataStorageInterface::StaticClass();
	}
	UTypedElementDataStorageInterface::UTypedElementDataStorageInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementDataStorageInterface);
	UTypedElementDataStorageInterface::~UTypedElementDataStorageInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageInterface_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageInterface_h_Statics::ScriptStructInfo[] = {
		{ FTypedElementDataStorageColumn::StaticStruct, Z_Construct_UScriptStruct_FTypedElementDataStorageColumn_Statics::NewStructOps, TEXT("TypedElementDataStorageColumn"), &Z_Registration_Info_UScriptStruct_TypedElementDataStorageColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementDataStorageColumn), 2838263596U) },
		{ FTypedElementDataStorageTag::StaticStruct, Z_Construct_UScriptStruct_FTypedElementDataStorageTag_Statics::NewStructOps, TEXT("TypedElementDataStorageTag"), &Z_Registration_Info_UScriptStruct_TypedElementDataStorageTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementDataStorageTag), 3564126698U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTypedElementDataStorageInterface, UTypedElementDataStorageInterface::StaticClass, TEXT("UTypedElementDataStorageInterface"), &Z_Registration_Info_UClass_UTypedElementDataStorageInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementDataStorageInterface), 1630288166U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageInterface_h_1516116743(TEXT("/Script/TypedElementFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageInterface_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageInterface_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
