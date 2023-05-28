// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveGizmoManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractiveGizmoManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmo_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmoBuilder_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmoManager();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmoManager_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolContextTransactionProvider_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGizmo();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActiveGizmo;
class UScriptStruct* FActiveGizmo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActiveGizmo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActiveGizmo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActiveGizmo, (UObject*)Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("ActiveGizmo"));
	}
	return Z_Registration_Info_UScriptStruct_ActiveGizmo.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* StaticStruct<FActiveGizmo>()
{
	return FActiveGizmo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActiveGizmo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gizmo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Gizmo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveGizmo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractiveGizmoManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActiveGizmo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActiveGizmo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveGizmo_Statics::NewProp_Gizmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/InteractiveGizmoManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FActiveGizmo_Statics::NewProp_Gizmo = { "Gizmo", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActiveGizmo, Gizmo), Z_Construct_UClass_UInteractiveGizmo_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveGizmo_Statics::NewProp_Gizmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveGizmo_Statics::NewProp_Gizmo_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActiveGizmo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveGizmo_Statics::NewProp_Gizmo,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActiveGizmo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
		nullptr,
		&NewStructOps,
		"ActiveGizmo",
		sizeof(FActiveGizmo),
		alignof(FActiveGizmo),
		Z_Construct_UScriptStruct_FActiveGizmo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveGizmo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveGizmo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveGizmo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActiveGizmo()
	{
		if (!Z_Registration_Info_UScriptStruct_ActiveGizmo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActiveGizmo.InnerSingleton, Z_Construct_UScriptStruct_FActiveGizmo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActiveGizmo.InnerSingleton;
	}
	void UInteractiveGizmoManager::StaticRegisterNativesUInteractiveGizmoManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractiveGizmoManager);
	UClass* Z_Construct_UClass_UInteractiveGizmoManager_NoRegister()
	{
		return UInteractiveGizmoManager::StaticClass();
	}
	struct Z_Construct_UClass_UInteractiveGizmoManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveGizmos_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveGizmos_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveGizmos;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GizmoBuilders_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_GizmoBuilders_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GizmoBuilders_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_GizmoBuilders;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractiveGizmoManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveGizmoManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UInteractiveGizmoManager allows users of the Tools framework to create and operate Gizmo instances.\n * For each Gizmo, a (string,GizmoBuilder) pair is registered with the GizmoManager.\n * Gizmos can then be activated via the string identifier.\n * \n */" },
		{ "IncludePath", "InteractiveGizmoManager.h" },
		{ "ModuleRelativePath", "Public/InteractiveGizmoManager.h" },
		{ "ToolTip", "UInteractiveGizmoManager allows users of the Tools framework to create and operate Gizmo instances.\nFor each Gizmo, a (string,GizmoBuilder) pair is registered with the GizmoManager.\nGizmos can then be activated via the string identifier." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInteractiveGizmoManager_Statics::NewProp_ActiveGizmos_Inner = { "ActiveGizmos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FActiveGizmo, METADATA_PARAMS(nullptr, 0) }; // 3884291357
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveGizmoManager_Statics::NewProp_ActiveGizmos_MetaData[] = {
		{ "Comment", "/** set of Currently-active Gizmos */" },
		{ "ModuleRelativePath", "Public/InteractiveGizmoManager.h" },
		{ "ToolTip", "set of Currently-active Gizmos" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInteractiveGizmoManager_Statics::NewProp_ActiveGizmos = { "ActiveGizmos", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInteractiveGizmoManager, ActiveGizmos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInteractiveGizmoManager_Statics::NewProp_ActiveGizmos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveGizmoManager_Statics::NewProp_ActiveGizmos_MetaData)) }; // 3884291357
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInteractiveGizmoManager_Statics::NewProp_GizmoBuilders_ValueProp = { "GizmoBuilders", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UInteractiveGizmoBuilder_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInteractiveGizmoManager_Statics::NewProp_GizmoBuilders_Key_KeyProp = { "GizmoBuilders_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveGizmoManager_Statics::NewProp_GizmoBuilders_MetaData[] = {
		{ "Comment", "/** Current set of named GizmoBuilders */" },
		{ "ModuleRelativePath", "Public/InteractiveGizmoManager.h" },
		{ "ToolTip", "Current set of named GizmoBuilders" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInteractiveGizmoManager_Statics::NewProp_GizmoBuilders = { "GizmoBuilders", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInteractiveGizmoManager, GizmoBuilders), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInteractiveGizmoManager_Statics::NewProp_GizmoBuilders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveGizmoManager_Statics::NewProp_GizmoBuilders_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractiveGizmoManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveGizmoManager_Statics::NewProp_ActiveGizmos_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveGizmoManager_Statics::NewProp_ActiveGizmos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveGizmoManager_Statics::NewProp_GizmoBuilders_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveGizmoManager_Statics::NewProp_GizmoBuilders_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveGizmoManager_Statics::NewProp_GizmoBuilders,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UInteractiveGizmoManager_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UToolContextTransactionProvider_NoRegister, (int32)VTABLE_OFFSET(UInteractiveGizmoManager, IToolContextTransactionProvider), false },  // 145780535
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractiveGizmoManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractiveGizmoManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveGizmoManager_Statics::ClassParams = {
		&UInteractiveGizmoManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInteractiveGizmoManager_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveGizmoManager_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractiveGizmoManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveGizmoManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractiveGizmoManager()
	{
		if (!Z_Registration_Info_UClass_UInteractiveGizmoManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractiveGizmoManager.OuterSingleton, Z_Construct_UClass_UInteractiveGizmoManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractiveGizmoManager.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UInteractiveGizmoManager>()
	{
		return UInteractiveGizmoManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveGizmoManager);
	UInteractiveGizmoManager::~UInteractiveGizmoManager() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmoManager_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmoManager_h_Statics::ScriptStructInfo[] = {
		{ FActiveGizmo::StaticStruct, Z_Construct_UScriptStruct_FActiveGizmo_Statics::NewStructOps, TEXT("ActiveGizmo"), &Z_Registration_Info_UScriptStruct_ActiveGizmo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActiveGizmo), 3884291357U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmoManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInteractiveGizmoManager, UInteractiveGizmoManager::StaticClass, TEXT("UInteractiveGizmoManager"), &Z_Registration_Info_UClass_UInteractiveGizmoManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractiveGizmoManager), 633550088U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmoManager_h_2730529995(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmoManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmoManager_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmoManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmoManager_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
