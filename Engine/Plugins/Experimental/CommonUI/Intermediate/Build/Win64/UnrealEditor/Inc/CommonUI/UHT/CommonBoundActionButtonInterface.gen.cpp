// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Input/CommonBoundActionButtonInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonBoundActionButtonInterface() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonBoundActionButtonInterface();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonBoundActionButtonInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	void UCommonBoundActionButtonInterface::StaticRegisterNativesUCommonBoundActionButtonInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonBoundActionButtonInterface);
	UClass* Z_Construct_UClass_UCommonBoundActionButtonInterface_NoRegister()
	{
		return UCommonBoundActionButtonInterface::StaticClass();
	}
	struct Z_Construct_UClass_UCommonBoundActionButtonInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonBoundActionButtonInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonBoundActionButtonInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Input/CommonBoundActionButtonInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonBoundActionButtonInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICommonBoundActionButtonInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonBoundActionButtonInterface_Statics::ClassParams = {
		&UCommonBoundActionButtonInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCommonBoundActionButtonInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonBoundActionButtonInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonBoundActionButtonInterface()
	{
		if (!Z_Registration_Info_UClass_UCommonBoundActionButtonInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonBoundActionButtonInterface.OuterSingleton, Z_Construct_UClass_UCommonBoundActionButtonInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonBoundActionButtonInterface.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonBoundActionButtonInterface>()
	{
		return UCommonBoundActionButtonInterface::StaticClass();
	}
	UCommonBoundActionButtonInterface::UCommonBoundActionButtonInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonBoundActionButtonInterface);
	UCommonBoundActionButtonInterface::~UCommonBoundActionButtonInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Input_CommonBoundActionButtonInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Input_CommonBoundActionButtonInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonBoundActionButtonInterface, UCommonBoundActionButtonInterface::StaticClass, TEXT("UCommonBoundActionButtonInterface"), &Z_Registration_Info_UClass_UCommonBoundActionButtonInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonBoundActionButtonInterface), 4134790934U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Input_CommonBoundActionButtonInterface_h_2282721788(TEXT("/Script/CommonUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Input_CommonBoundActionButtonInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Input_CommonBoundActionButtonInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
