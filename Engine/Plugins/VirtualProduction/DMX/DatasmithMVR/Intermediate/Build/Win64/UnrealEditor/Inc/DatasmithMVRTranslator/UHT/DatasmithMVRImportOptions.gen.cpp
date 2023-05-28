// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DatasmithMVRImportOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithMVRImportOptions() {}
// Cross Module References
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithOptionsBase();
	DATASMITHMVRTRANSLATOR_API UClass* Z_Construct_UClass_UDatasmithMVRImportOptions();
	DATASMITHMVRTRANSLATOR_API UClass* Z_Construct_UClass_UDatasmithMVRImportOptions_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DatasmithMVRTranslator();
// End Cross Module References
	void UDatasmithMVRImportOptions::StaticRegisterNativesUDatasmithMVRImportOptions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithMVRImportOptions);
	UClass* Z_Construct_UClass_UDatasmithMVRImportOptions_NoRegister()
	{
		return UDatasmithMVRImportOptions::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithMVRImportOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportMVR_MetaData[];
#endif
		static void NewProp_bImportMVR_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportMVR;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithMVRImportOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithOptionsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithMVRTranslator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithMVRImportOptions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DatasmithMVRImportOptions.h" },
		{ "ModuleRelativePath", "Private/DatasmithMVRImportOptions.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithMVRImportOptions_Statics::NewProp_bImportMVR_MetaData[] = {
		{ "Category", "MVR" },
		{ "Comment", "/** If set to true, datasmith elements that correspond to an entry in the MVR are replaced with GDTF Actors */" },
		{ "ModuleRelativePath", "Private/DatasmithMVRImportOptions.h" },
		{ "ToolTip", "If set to true, datasmith elements that correspond to an entry in the MVR are replaced with GDTF Actors" },
	};
#endif
	void Z_Construct_UClass_UDatasmithMVRImportOptions_Statics::NewProp_bImportMVR_SetBit(void* Obj)
	{
		((UDatasmithMVRImportOptions*)Obj)->bImportMVR = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithMVRImportOptions_Statics::NewProp_bImportMVR = { "bImportMVR", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDatasmithMVRImportOptions), &Z_Construct_UClass_UDatasmithMVRImportOptions_Statics::NewProp_bImportMVR_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatasmithMVRImportOptions_Statics::NewProp_bImportMVR_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithMVRImportOptions_Statics::NewProp_bImportMVR_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithMVRImportOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithMVRImportOptions_Statics::NewProp_bImportMVR,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithMVRImportOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithMVRImportOptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithMVRImportOptions_Statics::ClassParams = {
		&UDatasmithMVRImportOptions::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatasmithMVRImportOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithMVRImportOptions_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithMVRImportOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithMVRImportOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithMVRImportOptions()
	{
		if (!Z_Registration_Info_UClass_UDatasmithMVRImportOptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithMVRImportOptions.OuterSingleton, Z_Construct_UClass_UDatasmithMVRImportOptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithMVRImportOptions.OuterSingleton;
	}
	template<> DATASMITHMVRTRANSLATOR_API UClass* StaticClass<UDatasmithMVRImportOptions>()
	{
		return UDatasmithMVRImportOptions::StaticClass();
	}
	UDatasmithMVRImportOptions::UDatasmithMVRImportOptions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithMVRImportOptions);
	UDatasmithMVRImportOptions::~UDatasmithMVRImportOptions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DatasmithMVR_Source_DatasmithMVRTranslator_Private_DatasmithMVRImportOptions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DatasmithMVR_Source_DatasmithMVRTranslator_Private_DatasmithMVRImportOptions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithMVRImportOptions, UDatasmithMVRImportOptions::StaticClass, TEXT("UDatasmithMVRImportOptions"), &Z_Registration_Info_UClass_UDatasmithMVRImportOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithMVRImportOptions), 337371958U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DatasmithMVR_Source_DatasmithMVRTranslator_Private_DatasmithMVRImportOptions_h_2462567838(TEXT("/Script/DatasmithMVRTranslator"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DatasmithMVR_Source_DatasmithMVRTranslator_Private_DatasmithMVRImportOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DatasmithMVR_Source_DatasmithMVRTranslator_Private_DatasmithMVRImportOptions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
