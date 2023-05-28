// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProxyTableEditor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProxyTableEditor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PROXYTABLE_API UClass* Z_Construct_UClass_UProxyTable_NoRegister();
	PROXYTABLEEDITOR_API UClass* Z_Construct_UClass_UProxyRowDetails();
	PROXYTABLEEDITOR_API UClass* Z_Construct_UClass_UProxyRowDetails_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProxyTableEditor();
// End Cross Module References
	void UProxyRowDetails::StaticRegisterNativesUProxyRowDetails()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProxyRowDetails);
	UClass* Z_Construct_UClass_UProxyRowDetails_NoRegister()
	{
		return UProxyRowDetails::StaticClass();
	}
	struct Z_Construct_UClass_UProxyRowDetails_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProxyTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ProxyTable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProxyRowDetails_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ProxyTableEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProxyRowDetails_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Class used for chooser editor details customization\n" },
		{ "IncludePath", "ProxyTableEditor.h" },
		{ "ModuleRelativePath", "Private/ProxyTableEditor.h" },
		{ "ToolTip", "Class used for chooser editor details customization" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProxyRowDetails_Statics::NewProp_ProxyTable_MetaData[] = {
		{ "Category", "Hidden" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/ProxyTableEditor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UProxyRowDetails_Statics::NewProp_ProxyTable = { "ProxyTable", nullptr, (EPropertyFlags)0x0016000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProxyRowDetails, ProxyTable), Z_Construct_UClass_UProxyTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UProxyRowDetails_Statics::NewProp_ProxyTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProxyRowDetails_Statics::NewProp_ProxyTable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProxyRowDetails_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProxyRowDetails_Statics::NewProp_ProxyTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProxyRowDetails_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProxyRowDetails>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UProxyRowDetails_Statics::ClassParams = {
		&UProxyRowDetails::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UProxyRowDetails_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UProxyRowDetails_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UProxyRowDetails_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProxyRowDetails_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProxyRowDetails()
	{
		if (!Z_Registration_Info_UClass_UProxyRowDetails.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProxyRowDetails.OuterSingleton, Z_Construct_UClass_UProxyRowDetails_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UProxyRowDetails.OuterSingleton;
	}
	template<> PROXYTABLEEDITOR_API UClass* StaticClass<UProxyRowDetails>()
	{
		return UProxyRowDetails::StaticClass();
	}
	UProxyRowDetails::UProxyRowDetails(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProxyRowDetails);
	UProxyRowDetails::~UProxyRowDetails() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTableEditor_Private_ProxyTableEditor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTableEditor_Private_ProxyTableEditor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UProxyRowDetails, UProxyRowDetails::StaticClass, TEXT("UProxyRowDetails"), &Z_Registration_Info_UClass_UProxyRowDetails, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProxyRowDetails), 3420551128U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTableEditor_Private_ProxyTableEditor_h_235386184(TEXT("/Script/ProxyTableEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTableEditor_Private_ProxyTableEditor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTableEditor_Private_ProxyTableEditor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
