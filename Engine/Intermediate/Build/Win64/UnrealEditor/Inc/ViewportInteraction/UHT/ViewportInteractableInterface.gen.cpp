// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewportInteractableInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewportInteractableInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_ViewportInteraction();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportInteractableInterface();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportInteractableInterface_NoRegister();
// End Cross Module References
	void UViewportInteractableInterface::StaticRegisterNativesUViewportInteractableInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UViewportInteractableInterface);
	UClass* Z_Construct_UClass_UViewportInteractableInterface_NoRegister()
	{
		return UViewportInteractableInterface::StaticClass();
	}
	struct Z_Construct_UClass_UViewportInteractableInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UViewportInteractableInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportInteractableInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ViewportInteractableInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UViewportInteractableInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IViewportInteractableInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UViewportInteractableInterface_Statics::ClassParams = {
		&UViewportInteractableInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UViewportInteractableInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UViewportInteractableInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UViewportInteractableInterface()
	{
		if (!Z_Registration_Info_UClass_UViewportInteractableInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UViewportInteractableInterface.OuterSingleton, Z_Construct_UClass_UViewportInteractableInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UViewportInteractableInterface.OuterSingleton;
	}
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<UViewportInteractableInterface>()
	{
		return UViewportInteractableInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UViewportInteractableInterface);
	UViewportInteractableInterface::~UViewportInteractableInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractableInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractableInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UViewportInteractableInterface, UViewportInteractableInterface::StaticClass, TEXT("UViewportInteractableInterface"), &Z_Registration_Info_UClass_UViewportInteractableInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UViewportInteractableInterface), 2490261028U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractableInterface_h_1633309001(TEXT("/Script/ViewportInteraction"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractableInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractableInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
