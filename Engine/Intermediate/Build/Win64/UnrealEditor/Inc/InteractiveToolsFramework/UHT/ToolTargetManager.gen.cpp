// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolTargetManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolTargetManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolTargetFactory_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolTargetManager();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolTargetManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void UToolTargetManager::StaticRegisterNativesUToolTargetManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UToolTargetManager);
	UClass* Z_Construct_UClass_UToolTargetManager_NoRegister()
	{
		return UToolTargetManager::StaticClass();
	}
	struct Z_Construct_UClass_UToolTargetManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Factories_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Factories_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Factories;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UToolTargetManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolTargetManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The tool target manager converts input objects into tool targets- objects that\n * can expose various interfaces that tools need to operate on them.\n *\n * Someday, the tool target manager may implement caching of targets.\n * \n * See the class comment for UToolTarget for more info.\n */" },
		{ "IncludePath", "ToolTargetManager.h" },
		{ "ModuleRelativePath", "Public/ToolTargetManager.h" },
		{ "ToolTip", "The tool target manager converts input objects into tool targets- objects that\ncan expose various interfaces that tools need to operate on them.\n\nSomeday, the tool target manager may implement caching of targets.\n\nSee the class comment for UToolTarget for more info." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UToolTargetManager_Statics::NewProp_Factories_Inner = { "Factories", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UToolTargetFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolTargetManager_Statics::NewProp_Factories_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolTargetManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UToolTargetManager_Statics::NewProp_Factories = { "Factories", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UToolTargetManager, Factories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UToolTargetManager_Statics::NewProp_Factories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UToolTargetManager_Statics::NewProp_Factories_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UToolTargetManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolTargetManager_Statics::NewProp_Factories_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolTargetManager_Statics::NewProp_Factories,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UToolTargetManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToolTargetManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UToolTargetManager_Statics::ClassParams = {
		&UToolTargetManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UToolTargetManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UToolTargetManager_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UToolTargetManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UToolTargetManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UToolTargetManager()
	{
		if (!Z_Registration_Info_UClass_UToolTargetManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToolTargetManager.OuterSingleton, Z_Construct_UClass_UToolTargetManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UToolTargetManager.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UToolTargetManager>()
	{
		return UToolTargetManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UToolTargetManager);
	UToolTargetManager::~UToolTargetManager() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargetManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargetManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UToolTargetManager, UToolTargetManager::StaticClass, TEXT("UToolTargetManager"), &Z_Registration_Info_UClass_UToolTargetManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToolTargetManager), 4182507332U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargetManager_h_350513505(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargetManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolTargetManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
