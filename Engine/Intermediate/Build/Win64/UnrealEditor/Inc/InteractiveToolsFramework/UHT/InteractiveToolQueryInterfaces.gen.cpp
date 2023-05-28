// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveToolQueryInterfaces.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractiveToolQueryInterfaces() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolCameraFocusAPI();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolCameraFocusAPI_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolExclusiveToolAPI();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolExclusiveToolAPI_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolNestedAcceptCancelAPI();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolNestedAcceptCancelAPI_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void UInteractiveToolCameraFocusAPI::StaticRegisterNativesUInteractiveToolCameraFocusAPI()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractiveToolCameraFocusAPI);
	UClass* Z_Construct_UClass_UInteractiveToolCameraFocusAPI_NoRegister()
	{
		return UInteractiveToolCameraFocusAPI::StaticClass();
	}
	struct Z_Construct_UClass_UInteractiveToolCameraFocusAPI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractiveToolCameraFocusAPI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveToolCameraFocusAPI_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractiveToolQueryInterfaces.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractiveToolCameraFocusAPI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractiveToolCameraFocusAPI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveToolCameraFocusAPI_Statics::ClassParams = {
		&UInteractiveToolCameraFocusAPI::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInteractiveToolCameraFocusAPI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolCameraFocusAPI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractiveToolCameraFocusAPI()
	{
		if (!Z_Registration_Info_UClass_UInteractiveToolCameraFocusAPI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractiveToolCameraFocusAPI.OuterSingleton, Z_Construct_UClass_UInteractiveToolCameraFocusAPI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractiveToolCameraFocusAPI.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UInteractiveToolCameraFocusAPI>()
	{
		return UInteractiveToolCameraFocusAPI::StaticClass();
	}
	UInteractiveToolCameraFocusAPI::UInteractiveToolCameraFocusAPI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveToolCameraFocusAPI);
	UInteractiveToolCameraFocusAPI::~UInteractiveToolCameraFocusAPI() {}
	void UInteractiveToolNestedAcceptCancelAPI::StaticRegisterNativesUInteractiveToolNestedAcceptCancelAPI()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractiveToolNestedAcceptCancelAPI);
	UClass* Z_Construct_UClass_UInteractiveToolNestedAcceptCancelAPI_NoRegister()
	{
		return UInteractiveToolNestedAcceptCancelAPI::StaticClass();
	}
	struct Z_Construct_UClass_UInteractiveToolNestedAcceptCancelAPI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractiveToolNestedAcceptCancelAPI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveToolNestedAcceptCancelAPI_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractiveToolQueryInterfaces.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractiveToolNestedAcceptCancelAPI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractiveToolNestedAcceptCancelAPI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveToolNestedAcceptCancelAPI_Statics::ClassParams = {
		&UInteractiveToolNestedAcceptCancelAPI::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInteractiveToolNestedAcceptCancelAPI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolNestedAcceptCancelAPI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractiveToolNestedAcceptCancelAPI()
	{
		if (!Z_Registration_Info_UClass_UInteractiveToolNestedAcceptCancelAPI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractiveToolNestedAcceptCancelAPI.OuterSingleton, Z_Construct_UClass_UInteractiveToolNestedAcceptCancelAPI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractiveToolNestedAcceptCancelAPI.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UInteractiveToolNestedAcceptCancelAPI>()
	{
		return UInteractiveToolNestedAcceptCancelAPI::StaticClass();
	}
	UInteractiveToolNestedAcceptCancelAPI::UInteractiveToolNestedAcceptCancelAPI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveToolNestedAcceptCancelAPI);
	UInteractiveToolNestedAcceptCancelAPI::~UInteractiveToolNestedAcceptCancelAPI() {}
	void UInteractiveToolExclusiveToolAPI::StaticRegisterNativesUInteractiveToolExclusiveToolAPI()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractiveToolExclusiveToolAPI);
	UClass* Z_Construct_UClass_UInteractiveToolExclusiveToolAPI_NoRegister()
	{
		return UInteractiveToolExclusiveToolAPI::StaticClass();
	}
	struct Z_Construct_UClass_UInteractiveToolExclusiveToolAPI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractiveToolExclusiveToolAPI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveToolExclusiveToolAPI_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractiveToolQueryInterfaces.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractiveToolExclusiveToolAPI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractiveToolExclusiveToolAPI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveToolExclusiveToolAPI_Statics::ClassParams = {
		&UInteractiveToolExclusiveToolAPI::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInteractiveToolExclusiveToolAPI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolExclusiveToolAPI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractiveToolExclusiveToolAPI()
	{
		if (!Z_Registration_Info_UClass_UInteractiveToolExclusiveToolAPI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractiveToolExclusiveToolAPI.OuterSingleton, Z_Construct_UClass_UInteractiveToolExclusiveToolAPI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractiveToolExclusiveToolAPI.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UInteractiveToolExclusiveToolAPI>()
	{
		return UInteractiveToolExclusiveToolAPI::StaticClass();
	}
	UInteractiveToolExclusiveToolAPI::UInteractiveToolExclusiveToolAPI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveToolExclusiveToolAPI);
	UInteractiveToolExclusiveToolAPI::~UInteractiveToolExclusiveToolAPI() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolQueryInterfaces_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolQueryInterfaces_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInteractiveToolCameraFocusAPI, UInteractiveToolCameraFocusAPI::StaticClass, TEXT("UInteractiveToolCameraFocusAPI"), &Z_Registration_Info_UClass_UInteractiveToolCameraFocusAPI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractiveToolCameraFocusAPI), 3998126931U) },
		{ Z_Construct_UClass_UInteractiveToolNestedAcceptCancelAPI, UInteractiveToolNestedAcceptCancelAPI::StaticClass, TEXT("UInteractiveToolNestedAcceptCancelAPI"), &Z_Registration_Info_UClass_UInteractiveToolNestedAcceptCancelAPI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractiveToolNestedAcceptCancelAPI), 1745745235U) },
		{ Z_Construct_UClass_UInteractiveToolExclusiveToolAPI, UInteractiveToolExclusiveToolAPI::StaticClass, TEXT("UInteractiveToolExclusiveToolAPI"), &Z_Registration_Info_UClass_UInteractiveToolExclusiveToolAPI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractiveToolExclusiveToolAPI), 3502411413U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolQueryInterfaces_h_1113033484(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolQueryInterfaces_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolQueryInterfaces_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
