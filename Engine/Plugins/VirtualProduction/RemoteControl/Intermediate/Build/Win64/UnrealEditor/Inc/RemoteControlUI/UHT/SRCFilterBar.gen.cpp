// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/UI/Filters/SRCFilterBar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSRCFilterBar() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	REMOTECONTROLUI_API UClass* Z_Construct_UClass_URCFilterBarContext();
	REMOTECONTROLUI_API UClass* Z_Construct_UClass_URCFilterBarContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RemoteControlUI();
// End Cross Module References
	void URCFilterBarContext::StaticRegisterNativesURCFilterBarContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URCFilterBarContext);
	UClass* Z_Construct_UClass_URCFilterBarContext_NoRegister()
	{
		return URCFilterBarContext::StaticClass();
	}
	struct Z_Construct_UClass_URCFilterBarContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URCFilterBarContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControlUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCFilterBarContext_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** ToolMenuContext that is used to create the Add Filter Menu */" },
		{ "IncludePath", "UI/Filters/SRCFilterBar.h" },
		{ "ModuleRelativePath", "Private/UI/Filters/SRCFilterBar.h" },
		{ "ToolTip", "ToolMenuContext that is used to create the Add Filter Menu" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URCFilterBarContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URCFilterBarContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URCFilterBarContext_Statics::ClassParams = {
		&URCFilterBarContext::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URCFilterBarContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URCFilterBarContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URCFilterBarContext()
	{
		if (!Z_Registration_Info_UClass_URCFilterBarContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URCFilterBarContext.OuterSingleton, Z_Construct_UClass_URCFilterBarContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URCFilterBarContext.OuterSingleton;
	}
	template<> REMOTECONTROLUI_API UClass* StaticClass<URCFilterBarContext>()
	{
		return URCFilterBarContext::StaticClass();
	}
	URCFilterBarContext::URCFilterBarContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URCFilterBarContext);
	URCFilterBarContext::~URCFilterBarContext() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlUI_Private_UI_Filters_SRCFilterBar_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlUI_Private_UI_Filters_SRCFilterBar_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URCFilterBarContext, URCFilterBarContext::StaticClass, TEXT("URCFilterBarContext"), &Z_Registration_Info_UClass_URCFilterBarContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URCFilterBarContext), 1071697503U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlUI_Private_UI_Filters_SRCFilterBar_h_1764428856(TEXT("/Script/RemoteControlUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlUI_Private_UI_Filters_SRCFilterBar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlUI_Private_UI_Filters_SRCFilterBar_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
