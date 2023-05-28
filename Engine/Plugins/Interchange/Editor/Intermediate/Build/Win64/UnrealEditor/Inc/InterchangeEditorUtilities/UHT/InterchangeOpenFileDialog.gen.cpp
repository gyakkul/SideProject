// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeOpenFileDialog.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeOpenFileDialog() {}
// Cross Module References
	INTERCHANGEEDITORUTILITIES_API UClass* Z_Construct_UClass_UInterchangeFilePickerGeneric();
	INTERCHANGEEDITORUTILITIES_API UClass* Z_Construct_UClass_UInterchangeFilePickerGeneric_NoRegister();
	INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangeFilePickerBase();
	UPackage* Z_Construct_UPackage__Script_InterchangeEditorUtilities();
// End Cross Module References
	void UInterchangeFilePickerGeneric::StaticRegisterNativesUInterchangeFilePickerGeneric()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeFilePickerGeneric);
	UClass* Z_Construct_UClass_UInterchangeFilePickerGeneric_NoRegister()
	{
		return UInterchangeFilePickerGeneric::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeFilePickerGeneric_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeFilePickerGeneric_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeFilePickerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeEditorUtilities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeFilePickerGeneric_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeOpenFileDialog.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InterchangeOpenFileDialog.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeFilePickerGeneric_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeFilePickerGeneric>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeFilePickerGeneric_Statics::ClassParams = {
		&UInterchangeFilePickerGeneric::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeFilePickerGeneric_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeFilePickerGeneric_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeFilePickerGeneric()
	{
		if (!Z_Registration_Info_UClass_UInterchangeFilePickerGeneric.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeFilePickerGeneric.OuterSingleton, Z_Construct_UClass_UInterchangeFilePickerGeneric_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeFilePickerGeneric.OuterSingleton;
	}
	template<> INTERCHANGEEDITORUTILITIES_API UClass* StaticClass<UInterchangeFilePickerGeneric>()
	{
		return UInterchangeFilePickerGeneric::StaticClass();
	}
	UInterchangeFilePickerGeneric::UInterchangeFilePickerGeneric(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeFilePickerGeneric);
	UInterchangeFilePickerGeneric::~UInterchangeFilePickerGeneric() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Editor_Source_Utilities_Public_InterchangeOpenFileDialog_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Editor_Source_Utilities_Public_InterchangeOpenFileDialog_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeFilePickerGeneric, UInterchangeFilePickerGeneric::StaticClass, TEXT("UInterchangeFilePickerGeneric"), &Z_Registration_Info_UClass_UInterchangeFilePickerGeneric, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeFilePickerGeneric), 3181225546U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Editor_Source_Utilities_Public_InterchangeOpenFileDialog_h_287926364(TEXT("/Script/InterchangeEditorUtilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Editor_Source_Utilities_Public_InterchangeOpenFileDialog_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Editor_Source_Utilities_Public_InterchangeOpenFileDialog_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
