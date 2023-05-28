// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkController() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkController();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References
	void ULiveLinkController::StaticRegisterNativesULiveLinkController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkController);
	UClass* Z_Construct_UClass_ULiveLinkController_NoRegister()
	{
		return ULiveLinkController::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Basic object to control a UObject live link frames\n */" },
		{ "IncludePath", "LiveLinkController.h" },
		{ "ModuleRelativePath", "Public/LiveLinkController.h" },
		{ "ToolTip", "Basic object to control a UObject live link frames" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkController_Statics::ClassParams = {
		&ULiveLinkController::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkController()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkController.OuterSingleton, Z_Construct_UClass_ULiveLinkController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkController.OuterSingleton;
	}
	template<> LIVELINKINTERFACE_API UClass* StaticClass<ULiveLinkController>()
	{
		return ULiveLinkController::StaticClass();
	}
	ULiveLinkController::ULiveLinkController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkController);
	ULiveLinkController::~ULiveLinkController() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkController, ULiveLinkController::StaticClass, TEXT("ULiveLinkController"), &Z_Registration_Info_UClass_ULiveLinkController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkController), 1180221189U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkController_h_2692554863(TEXT("/Script/LiveLinkInterface"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
