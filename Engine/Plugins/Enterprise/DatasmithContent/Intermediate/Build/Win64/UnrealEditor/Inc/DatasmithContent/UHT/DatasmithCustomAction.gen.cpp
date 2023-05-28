// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithCustomAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithCustomAction() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithCustomActionBase();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithCustomActionBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DatasmithContent();
// End Cross Module References
	void UDatasmithCustomActionBase::StaticRegisterNativesUDatasmithCustomActionBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithCustomActionBase);
	UClass* Z_Construct_UClass_UDatasmithCustomActionBase_NoRegister()
	{
		return UDatasmithCustomActionBase::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithCustomActionBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithCustomActionBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithCustomActionBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for actions available to the end-user through the Content browser contextual menu.\n * By extending this class, the custom action is automatically registered to be available for the end user\n */" },
		{ "IncludePath", "DatasmithCustomAction.h" },
		{ "ModuleRelativePath", "Public/DatasmithCustomAction.h" },
		{ "ToolTip", "Base class for actions available to the end-user through the Content browser contextual menu.\nBy extending this class, the custom action is automatically registered to be available for the end user" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithCustomActionBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithCustomActionBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithCustomActionBase_Statics::ClassParams = {
		&UDatasmithCustomActionBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithCustomActionBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithCustomActionBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithCustomActionBase()
	{
		if (!Z_Registration_Info_UClass_UDatasmithCustomActionBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithCustomActionBase.OuterSingleton, Z_Construct_UClass_UDatasmithCustomActionBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithCustomActionBase.OuterSingleton;
	}
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithCustomActionBase>()
	{
		return UDatasmithCustomActionBase::StaticClass();
	}
	UDatasmithCustomActionBase::UDatasmithCustomActionBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithCustomActionBase);
	UDatasmithCustomActionBase::~UDatasmithCustomActionBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithCustomAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithCustomAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithCustomActionBase, UDatasmithCustomActionBase::StaticClass, TEXT("UDatasmithCustomActionBase"), &Z_Registration_Info_UClass_UDatasmithCustomActionBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithCustomActionBase), 3125102738U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithCustomAction_h_1193219778(TEXT("/Script/DatasmithContent"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithCustomAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithCustomAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
