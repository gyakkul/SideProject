// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveToolsContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractiveToolsContext() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UContextObjectStore_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputRouter_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmoManager_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolManager_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolsContext();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolsContext_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolTargetManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void UInteractiveToolsContext::StaticRegisterNativesUInteractiveToolsContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractiveToolsContext);
	UClass* Z_Construct_UClass_UInteractiveToolsContext_NoRegister()
	{
		return UInteractiveToolsContext::StaticClass();
	}
	struct Z_Construct_UClass_UInteractiveToolsContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputRouter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputRouter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ToolManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GizmoManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GizmoManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextObjectStore_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ContextObjectStore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolManagerClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ToolManagerClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractiveToolsContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveToolsContext_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * InteractiveToolsContext owns the core parts of an Interactive Tools Framework implementation - the\n * InputRouter, ToolManager, GizmoManager, TargetManager, and ContextStore. In the simplest\n * use case, UInteractiveToolsContext is just a top-level container that will keep the various UObjects\n * alive, and provide an easy way to access them. However in a more complex situation it may be\n * desirable to subclass and extend the ToolsContext. For example, UEdModeInteractiveToolsContext allows\n * a ToolsContext to live within a UEdMode.\n */" },
		{ "IncludePath", "InteractiveToolsContext.h" },
		{ "ModuleRelativePath", "Public/InteractiveToolsContext.h" },
		{ "ToolTip", "InteractiveToolsContext owns the core parts of an Interactive Tools Framework implementation - the\nInputRouter, ToolManager, GizmoManager, TargetManager, and ContextStore. In the simplest\nuse case, UInteractiveToolsContext is just a top-level container that will keep the various UObjects\nalive, and provide an easy way to access them. However in a more complex situation it may be\ndesirable to subclass and extend the ToolsContext. For example, UEdModeInteractiveToolsContext allows\na ToolsContext to live within a UEdMode." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_InputRouter_MetaData[] = {
		{ "Comment", "/** current UInputRouter for this Context */" },
		{ "ModuleRelativePath", "Public/InteractiveToolsContext.h" },
		{ "ToolTip", "current UInputRouter for this Context" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_InputRouter = { "InputRouter", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInteractiveToolsContext, InputRouter), Z_Construct_UClass_UInputRouter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_InputRouter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_InputRouter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_TargetManager_MetaData[] = {
		{ "Comment", "/** current UToolTargetManager for this Context */" },
		{ "ModuleRelativePath", "Public/InteractiveToolsContext.h" },
		{ "ToolTip", "current UToolTargetManager for this Context" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_TargetManager = { "TargetManager", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInteractiveToolsContext, TargetManager), Z_Construct_UClass_UToolTargetManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_TargetManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_TargetManager_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_ToolManager_MetaData[] = {
		{ "Comment", "/** current UInteractiveToolManager for this Context */" },
		{ "ModuleRelativePath", "Public/InteractiveToolsContext.h" },
		{ "ToolTip", "current UInteractiveToolManager for this Context" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_ToolManager = { "ToolManager", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInteractiveToolsContext, ToolManager), Z_Construct_UClass_UInteractiveToolManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_ToolManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_ToolManager_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_GizmoManager_MetaData[] = {
		{ "Comment", "/** current UInteractiveGizmoManager for this Context */" },
		{ "ModuleRelativePath", "Public/InteractiveToolsContext.h" },
		{ "ToolTip", "current UInteractiveGizmoManager for this Context" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_GizmoManager = { "GizmoManager", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInteractiveToolsContext, GizmoManager), Z_Construct_UClass_UInteractiveGizmoManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_GizmoManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_GizmoManager_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_ContextObjectStore_MetaData[] = {
		{ "Comment", "/** \n\x09 * Current Context Object Store for this Context.\n\x09 * Stores arbitrary objects which share data or expose APIs across interactive tools and managers belonging to this context.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InteractiveToolsContext.h" },
		{ "ToolTip", "Current Context Object Store for this Context.\nStores arbitrary objects which share data or expose APIs across interactive tools and managers belonging to this context." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_ContextObjectStore = { "ContextObjectStore", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInteractiveToolsContext, ContextObjectStore), Z_Construct_UClass_UContextObjectStore_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_ContextObjectStore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_ContextObjectStore_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_ToolManagerClass_MetaData[] = {
		{ "Comment", "// todo: deprecate and remove this, can now be accomplished via CreateToolManagerFunc()\n" },
		{ "ModuleRelativePath", "Public/InteractiveToolsContext.h" },
		{ "ToolTip", "todo: deprecate and remove this, can now be accomplished via CreateToolManagerFunc()" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_ToolManagerClass = { "ToolManagerClass", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInteractiveToolsContext, ToolManagerClass), Z_Construct_UClass_UInteractiveToolManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_ToolManagerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_ToolManagerClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractiveToolsContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_InputRouter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_TargetManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_ToolManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_GizmoManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_ContextObjectStore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveToolsContext_Statics::NewProp_ToolManagerClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractiveToolsContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractiveToolsContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveToolsContext_Statics::ClassParams = {
		&UInteractiveToolsContext::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInteractiveToolsContext_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolsContext_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractiveToolsContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolsContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractiveToolsContext()
	{
		if (!Z_Registration_Info_UClass_UInteractiveToolsContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractiveToolsContext.OuterSingleton, Z_Construct_UClass_UInteractiveToolsContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractiveToolsContext.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UInteractiveToolsContext>()
	{
		return UInteractiveToolsContext::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveToolsContext);
	UInteractiveToolsContext::~UInteractiveToolsContext() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolsContext_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolsContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInteractiveToolsContext, UInteractiveToolsContext::StaticClass, TEXT("UInteractiveToolsContext"), &Z_Registration_Info_UClass_UInteractiveToolsContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractiveToolsContext), 3330970977U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolsContext_h_2626019903(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolsContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolsContext_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
