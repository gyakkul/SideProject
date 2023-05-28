// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/VPCustomUIHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVPCustomUIHandler() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VPUtilitiesEditor();
	VPUTILITIESEDITOR_API UClass* Z_Construct_UClass_UVPCustomUIHandler();
	VPUTILITIESEDITOR_API UClass* Z_Construct_UClass_UVPCustomUIHandler_NoRegister();
// End Cross Module References
	void UVPCustomUIHandler::StaticRegisterNativesUVPCustomUIHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVPCustomUIHandler);
	UClass* Z_Construct_UClass_UVPCustomUIHandler_NoRegister()
	{
		return UVPCustomUIHandler::StaticClass();
	}
	struct Z_Construct_UClass_UVPCustomUIHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualProductionWidget_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_VirtualProductionWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVPCustomUIHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VPUtilitiesEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPCustomUIHandler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VPCustomUIHandler.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/VPCustomUIHandler.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPCustomUIHandler_Statics::NewProp_VirtualProductionWidget_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Private/VPCustomUIHandler.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UVPCustomUIHandler_Statics::NewProp_VirtualProductionWidget = { "VirtualProductionWidget", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVPCustomUIHandler, VirtualProductionWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVPCustomUIHandler_Statics::NewProp_VirtualProductionWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPCustomUIHandler_Statics::NewProp_VirtualProductionWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVPCustomUIHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPCustomUIHandler_Statics::NewProp_VirtualProductionWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVPCustomUIHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVPCustomUIHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVPCustomUIHandler_Statics::ClassParams = {
		&UVPCustomUIHandler::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVPCustomUIHandler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVPCustomUIHandler_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVPCustomUIHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVPCustomUIHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVPCustomUIHandler()
	{
		if (!Z_Registration_Info_UClass_UVPCustomUIHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVPCustomUIHandler.OuterSingleton, Z_Construct_UClass_UVPCustomUIHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVPCustomUIHandler.OuterSingleton;
	}
	template<> VPUTILITIESEDITOR_API UClass* StaticClass<UVPCustomUIHandler>()
	{
		return UVPCustomUIHandler::StaticClass();
	}
	UVPCustomUIHandler::UVPCustomUIHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVPCustomUIHandler);
	UVPCustomUIHandler::~UVPCustomUIHandler() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Private_VPCustomUIHandler_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Private_VPCustomUIHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVPCustomUIHandler, UVPCustomUIHandler::StaticClass, TEXT("UVPCustomUIHandler"), &Z_Registration_Info_UClass_UVPCustomUIHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVPCustomUIHandler), 1587111995U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Private_VPCustomUIHandler_h_2373070890(TEXT("/Script/VPUtilitiesEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Private_VPCustomUIHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Private_VPCustomUIHandler_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
