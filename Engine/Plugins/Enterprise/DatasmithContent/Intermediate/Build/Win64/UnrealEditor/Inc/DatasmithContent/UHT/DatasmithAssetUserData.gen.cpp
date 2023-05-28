// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithAssetUserData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithAssetUserData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithAssetUserData();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithAssetUserData_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithObjectTemplate_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
	UPackage* Z_Construct_UPackage__Script_DatasmithContent();
// End Cross Module References
	void UDatasmithAssetUserData::StaticRegisterNativesUDatasmithAssetUserData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithAssetUserData);
	UClass* Z_Construct_UClass_UDatasmithAssetUserData_NoRegister()
	{
		return UDatasmithAssetUserData::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithAssetUserData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MetaData_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_MetaData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MetaData;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ObjectTemplates_ValueProp;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ObjectTemplates_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectTemplates_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ObjectTemplates;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithAssetUserData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetUserData,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithAssetUserData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Asset user data that can be used with Datasmith on Actors and other objects  */" },
		{ "DisplayName", "Datasmith User Data" },
		{ "IncludePath", "DatasmithAssetUserData.h" },
		{ "ModuleRelativePath", "Public/DatasmithAssetUserData.h" },
		{ "ScriptName", "DatasmithUserData" },
		{ "ToolTip", "Asset user data that can be used with Datasmith on Actors and other objects" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithAssetUserData_Statics::NewProp_MetaData_ValueProp = { "MetaData", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDatasmithAssetUserData_Statics::NewProp_MetaData_Key_KeyProp = { "MetaData_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithAssetUserData_Statics::NewProp_MetaData_MetaData[] = {
		{ "Category", "Datasmith User Data" },
		{ "DisplayName", "Metadata" },
		{ "ModuleRelativePath", "Public/DatasmithAssetUserData.h" },
		{ "ScriptName", "Metadata" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDatasmithAssetUserData_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010040000020005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithAssetUserData, MetaData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDatasmithAssetUserData_Statics::NewProp_MetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithAssetUserData_Statics::NewProp_MetaData_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDatasmithAssetUserData_Statics::NewProp_ObjectTemplates_ValueProp = { "ObjectTemplates", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UDatasmithObjectTemplate_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDatasmithAssetUserData_Statics::NewProp_ObjectTemplates_Key_KeyProp = { "ObjectTemplates_Key", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UDatasmithObjectTemplate_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithAssetUserData_Statics::NewProp_ObjectTemplates_MetaData[] = {
		{ "ModuleRelativePath", "Public/DatasmithAssetUserData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDatasmithAssetUserData_Statics::NewProp_ObjectTemplates = { "ObjectTemplates", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithAssetUserData, ObjectTemplates), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDatasmithAssetUserData_Statics::NewProp_ObjectTemplates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithAssetUserData_Statics::NewProp_ObjectTemplates_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithAssetUserData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithAssetUserData_Statics::NewProp_MetaData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithAssetUserData_Statics::NewProp_MetaData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithAssetUserData_Statics::NewProp_MetaData,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithAssetUserData_Statics::NewProp_ObjectTemplates_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithAssetUserData_Statics::NewProp_ObjectTemplates_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithAssetUserData_Statics::NewProp_ObjectTemplates,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithAssetUserData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithAssetUserData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithAssetUserData_Statics::ClassParams = {
		&UDatasmithAssetUserData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatasmithAssetUserData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithAssetUserData_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithAssetUserData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithAssetUserData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithAssetUserData()
	{
		if (!Z_Registration_Info_UClass_UDatasmithAssetUserData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithAssetUserData.OuterSingleton, Z_Construct_UClass_UDatasmithAssetUserData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithAssetUserData.OuterSingleton;
	}
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithAssetUserData>()
	{
		return UDatasmithAssetUserData::StaticClass();
	}
	UDatasmithAssetUserData::UDatasmithAssetUserData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithAssetUserData);
	UDatasmithAssetUserData::~UDatasmithAssetUserData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAssetUserData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAssetUserData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithAssetUserData, UDatasmithAssetUserData::StaticClass, TEXT("UDatasmithAssetUserData"), &Z_Registration_Info_UClass_UDatasmithAssetUserData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithAssetUserData), 287912611U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAssetUserData_h_1910958654(TEXT("/Script/DatasmithContent"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAssetUserData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAssetUserData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
