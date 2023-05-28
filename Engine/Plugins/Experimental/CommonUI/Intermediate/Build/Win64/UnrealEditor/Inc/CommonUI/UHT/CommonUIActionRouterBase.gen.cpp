// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Input/CommonUIActionRouterBase.h"
#include "../../Source/Runtime/Engine/Classes/Engine/LocalPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonUIActionRouterBase() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUIActionRouterBase();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUIActionRouterBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayerSubsystem();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	void UCommonUIActionRouterBase::StaticRegisterNativesUCommonUIActionRouterBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonUIActionRouterBase);
	UClass* Z_Construct_UClass_UCommonUIActionRouterBase_NoRegister()
	{
		return UCommonUIActionRouterBase::StaticClass();
	}
	struct Z_Construct_UClass_UCommonUIActionRouterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonUIActionRouterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULocalPlayerSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUIActionRouterBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The nucleus of the CommonUI input routing system\n * @todo DanH: Explain what that means more fully\n */" },
		{ "IncludePath", "Input/CommonUIActionRouterBase.h" },
		{ "ModuleRelativePath", "Public/Input/CommonUIActionRouterBase.h" },
		{ "ToolTip", "The nucleus of the CommonUI input routing system\n@todo DanH: Explain what that means more fully" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonUIActionRouterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonUIActionRouterBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonUIActionRouterBase_Statics::ClassParams = {
		&UCommonUIActionRouterBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCommonUIActionRouterBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUIActionRouterBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonUIActionRouterBase()
	{
		if (!Z_Registration_Info_UClass_UCommonUIActionRouterBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonUIActionRouterBase.OuterSingleton, Z_Construct_UClass_UCommonUIActionRouterBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonUIActionRouterBase.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonUIActionRouterBase>()
	{
		return UCommonUIActionRouterBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonUIActionRouterBase);
	UCommonUIActionRouterBase::~UCommonUIActionRouterBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Input_CommonUIActionRouterBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Input_CommonUIActionRouterBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonUIActionRouterBase, UCommonUIActionRouterBase::StaticClass, TEXT("UCommonUIActionRouterBase"), &Z_Registration_Info_UClass_UCommonUIActionRouterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonUIActionRouterBase), 3813063456U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Input_CommonUIActionRouterBase_h_3922787393(TEXT("/Script/CommonUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Input_CommonUIActionRouterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Input_CommonUIActionRouterBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
