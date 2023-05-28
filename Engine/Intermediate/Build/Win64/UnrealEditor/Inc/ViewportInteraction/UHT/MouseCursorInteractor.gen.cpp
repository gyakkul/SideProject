// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MouseCursorInteractor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMouseCursorInteractor() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_ViewportInteraction();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UMouseCursorInteractor();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UMouseCursorInteractor_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportInteractor();
// End Cross Module References
	void UMouseCursorInteractor::StaticRegisterNativesUMouseCursorInteractor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMouseCursorInteractor);
	UClass* Z_Construct_UClass_UMouseCursorInteractor_NoRegister()
	{
		return UMouseCursorInteractor::StaticClass();
	}
	struct Z_Construct_UClass_UMouseCursorInteractor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMouseCursorInteractor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UViewportInteractor,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMouseCursorInteractor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Viewport interactor for a mouse cursor\n */" },
		{ "IncludePath", "MouseCursorInteractor.h" },
		{ "ModuleRelativePath", "Public/MouseCursorInteractor.h" },
		{ "ToolTip", "Viewport interactor for a mouse cursor" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMouseCursorInteractor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMouseCursorInteractor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMouseCursorInteractor_Statics::ClassParams = {
		&UMouseCursorInteractor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMouseCursorInteractor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMouseCursorInteractor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMouseCursorInteractor()
	{
		if (!Z_Registration_Info_UClass_UMouseCursorInteractor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMouseCursorInteractor.OuterSingleton, Z_Construct_UClass_UMouseCursorInteractor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMouseCursorInteractor.OuterSingleton;
	}
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<UMouseCursorInteractor>()
	{
		return UMouseCursorInteractor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMouseCursorInteractor);
	UMouseCursorInteractor::~UMouseCursorInteractor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_MouseCursorInteractor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_MouseCursorInteractor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMouseCursorInteractor, UMouseCursorInteractor::StaticClass, TEXT("UMouseCursorInteractor"), &Z_Registration_Info_UClass_UMouseCursorInteractor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMouseCursorInteractor), 2106106164U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_MouseCursorInteractor_h_614808696(TEXT("/Script/ViewportInteraction"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_MouseCursorInteractor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_MouseCursorInteractor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
