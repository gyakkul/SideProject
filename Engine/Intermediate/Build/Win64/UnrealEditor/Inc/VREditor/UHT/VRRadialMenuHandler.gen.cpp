// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/VRRadialMenuHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRRadialMenuHandler() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_VREditor();
	VREDITOR_API UClass* Z_Construct_UClass_UVRRadialMenuHandler();
	VREDITOR_API UClass* Z_Construct_UClass_UVRRadialMenuHandler_NoRegister();
// End Cross Module References
	void UVRRadialMenuHandler::StaticRegisterNativesUVRRadialMenuHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVRRadialMenuHandler);
	UClass* Z_Construct_UClass_UVRRadialMenuHandler_NoRegister()
	{
		return UVRRadialMenuHandler::StaticClass();
	}
	struct Z_Construct_UClass_UVRRadialMenuHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRRadialMenuHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VREditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRRadialMenuHandler_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* VR Editor user interface manager\n*/" },
		{ "IncludePath", "UI/VRRadialMenuHandler.h" },
		{ "ModuleRelativePath", "UI/VRRadialMenuHandler.h" },
		{ "ToolTip", "VR Editor user interface manager" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRRadialMenuHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRRadialMenuHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVRRadialMenuHandler_Statics::ClassParams = {
		&UVRRadialMenuHandler::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVRRadialMenuHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVRRadialMenuHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRRadialMenuHandler()
	{
		if (!Z_Registration_Info_UClass_UVRRadialMenuHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVRRadialMenuHandler.OuterSingleton, Z_Construct_UClass_UVRRadialMenuHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVRRadialMenuHandler.OuterSingleton;
	}
	template<> VREDITOR_API UClass* StaticClass<UVRRadialMenuHandler>()
	{
		return UVRRadialMenuHandler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRRadialMenuHandler);
	UVRRadialMenuHandler::~UVRRadialMenuHandler() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_UI_VRRadialMenuHandler_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_UI_VRRadialMenuHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVRRadialMenuHandler, UVRRadialMenuHandler::StaticClass, TEXT("UVRRadialMenuHandler"), &Z_Registration_Info_UClass_UVRRadialMenuHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVRRadialMenuHandler), 1688029578U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_UI_VRRadialMenuHandler_h_2624391819(TEXT("/Script/VREditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_UI_VRRadialMenuHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_UI_VRRadialMenuHandler_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
