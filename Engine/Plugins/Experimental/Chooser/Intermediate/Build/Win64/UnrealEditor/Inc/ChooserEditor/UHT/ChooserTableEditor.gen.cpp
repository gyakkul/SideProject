// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ChooserTableEditor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChooserTableEditor() {}
// Cross Module References
	CHOOSER_API UClass* Z_Construct_UClass_UChooserTable_NoRegister();
	CHOOSEREDITOR_API UClass* Z_Construct_UClass_UChooserColumnDetails();
	CHOOSEREDITOR_API UClass* Z_Construct_UClass_UChooserColumnDetails_NoRegister();
	CHOOSEREDITOR_API UClass* Z_Construct_UClass_UChooserRowDetails();
	CHOOSEREDITOR_API UClass* Z_Construct_UClass_UChooserRowDetails_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ChooserEditor();
// End Cross Module References
	void UChooserRowDetails::StaticRegisterNativesUChooserRowDetails()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChooserRowDetails);
	UClass* Z_Construct_UClass_UChooserRowDetails_NoRegister()
	{
		return UChooserRowDetails::StaticClass();
	}
	struct Z_Construct_UClass_UChooserRowDetails_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Chooser_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Chooser;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChooserRowDetails_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ChooserEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChooserRowDetails_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Class used for chooser editor details customization\n" },
		{ "IncludePath", "ChooserTableEditor.h" },
		{ "ModuleRelativePath", "Private/ChooserTableEditor.h" },
		{ "ToolTip", "Class used for chooser editor details customization" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChooserRowDetails_Statics::NewProp_Chooser_MetaData[] = {
		{ "Category", "Hidden" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/ChooserTableEditor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UChooserRowDetails_Statics::NewProp_Chooser = { "Chooser", nullptr, (EPropertyFlags)0x0016000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChooserRowDetails, Chooser), Z_Construct_UClass_UChooserTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UChooserRowDetails_Statics::NewProp_Chooser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChooserRowDetails_Statics::NewProp_Chooser_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChooserRowDetails_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChooserRowDetails_Statics::NewProp_Chooser,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChooserRowDetails_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChooserRowDetails>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChooserRowDetails_Statics::ClassParams = {
		&UChooserRowDetails::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UChooserRowDetails_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UChooserRowDetails_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UChooserRowDetails_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChooserRowDetails_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChooserRowDetails()
	{
		if (!Z_Registration_Info_UClass_UChooserRowDetails.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChooserRowDetails.OuterSingleton, Z_Construct_UClass_UChooserRowDetails_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChooserRowDetails.OuterSingleton;
	}
	template<> CHOOSEREDITOR_API UClass* StaticClass<UChooserRowDetails>()
	{
		return UChooserRowDetails::StaticClass();
	}
	UChooserRowDetails::UChooserRowDetails(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChooserRowDetails);
	UChooserRowDetails::~UChooserRowDetails() {}
	void UChooserColumnDetails::StaticRegisterNativesUChooserColumnDetails()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChooserColumnDetails);
	UClass* Z_Construct_UClass_UChooserColumnDetails_NoRegister()
	{
		return UChooserColumnDetails::StaticClass();
	}
	struct Z_Construct_UClass_UChooserColumnDetails_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Chooser_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Chooser;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChooserColumnDetails_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ChooserEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChooserColumnDetails_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Class used for chooser editor details customization\n" },
		{ "IncludePath", "ChooserTableEditor.h" },
		{ "ModuleRelativePath", "Private/ChooserTableEditor.h" },
		{ "ToolTip", "Class used for chooser editor details customization" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChooserColumnDetails_Statics::NewProp_Chooser_MetaData[] = {
		{ "Category", "Hidden" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/ChooserTableEditor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UChooserColumnDetails_Statics::NewProp_Chooser = { "Chooser", nullptr, (EPropertyFlags)0x0016000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChooserColumnDetails, Chooser), Z_Construct_UClass_UChooserTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UChooserColumnDetails_Statics::NewProp_Chooser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChooserColumnDetails_Statics::NewProp_Chooser_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChooserColumnDetails_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChooserColumnDetails_Statics::NewProp_Chooser,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChooserColumnDetails_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChooserColumnDetails>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChooserColumnDetails_Statics::ClassParams = {
		&UChooserColumnDetails::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UChooserColumnDetails_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UChooserColumnDetails_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UChooserColumnDetails_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChooserColumnDetails_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChooserColumnDetails()
	{
		if (!Z_Registration_Info_UClass_UChooserColumnDetails.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChooserColumnDetails.OuterSingleton, Z_Construct_UClass_UChooserColumnDetails_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChooserColumnDetails.OuterSingleton;
	}
	template<> CHOOSEREDITOR_API UClass* StaticClass<UChooserColumnDetails>()
	{
		return UChooserColumnDetails::StaticClass();
	}
	UChooserColumnDetails::UChooserColumnDetails(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChooserColumnDetails);
	UChooserColumnDetails::~UChooserColumnDetails() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ChooserEditor_Private_ChooserTableEditor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ChooserEditor_Private_ChooserTableEditor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChooserRowDetails, UChooserRowDetails::StaticClass, TEXT("UChooserRowDetails"), &Z_Registration_Info_UClass_UChooserRowDetails, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChooserRowDetails), 318991366U) },
		{ Z_Construct_UClass_UChooserColumnDetails, UChooserColumnDetails::StaticClass, TEXT("UChooserColumnDetails"), &Z_Registration_Info_UClass_UChooserColumnDetails, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChooserColumnDetails), 1025951350U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ChooserEditor_Private_ChooserTableEditor_h_1507275402(TEXT("/Script/ChooserEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ChooserEditor_Private_ChooserTableEditor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ChooserEditor_Private_ChooserTableEditor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
