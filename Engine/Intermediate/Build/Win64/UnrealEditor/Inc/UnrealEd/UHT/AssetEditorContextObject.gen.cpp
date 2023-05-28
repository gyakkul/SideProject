// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Private/Tools/AssetEditorContextObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetEditorContextObject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	EDITORFRAMEWORK_API UClass* Z_Construct_UClass_UAssetEditorContextInterface_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetEditorContextObject();
	UNREALED_API UClass* Z_Construct_UClass_UAssetEditorContextObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UAssetEditorContextObject::StaticRegisterNativesUAssetEditorContextObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetEditorContextObject);
	UClass* Z_Construct_UClass_UAssetEditorContextObject_NoRegister()
	{
		return UAssetEditorContextObject::StaticClass();
	}
	struct Z_Construct_UClass_UAssetEditorContextObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetEditorContextObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetEditorContextObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/AssetEditorContextObject.h" },
		{ "ModuleRelativePath", "Private/Tools/AssetEditorContextObject.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAssetEditorContextObject_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAssetEditorContextInterface_NoRegister, (int32)VTABLE_OFFSET(UAssetEditorContextObject, IAssetEditorContextInterface), false },  // 420202989
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetEditorContextObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetEditorContextObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetEditorContextObject_Statics::ClassParams = {
		&UAssetEditorContextObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetEditorContextObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetEditorContextObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetEditorContextObject()
	{
		if (!Z_Registration_Info_UClass_UAssetEditorContextObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetEditorContextObject.OuterSingleton, Z_Construct_UClass_UAssetEditorContextObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetEditorContextObject.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UAssetEditorContextObject>()
	{
		return UAssetEditorContextObject::StaticClass();
	}
	UAssetEditorContextObject::UAssetEditorContextObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetEditorContextObject);
	UAssetEditorContextObject::~UAssetEditorContextObject() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Private_Tools_AssetEditorContextObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Private_Tools_AssetEditorContextObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetEditorContextObject, UAssetEditorContextObject::StaticClass, TEXT("UAssetEditorContextObject"), &Z_Registration_Info_UClass_UAssetEditorContextObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetEditorContextObject), 1390144281U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Private_Tools_AssetEditorContextObject_h_3333691779(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Private_Tools_AssetEditorContextObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Private_Tools_AssetEditorContextObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
