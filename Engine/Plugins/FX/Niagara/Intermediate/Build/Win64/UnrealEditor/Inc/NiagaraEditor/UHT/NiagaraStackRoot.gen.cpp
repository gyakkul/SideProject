// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewModels/Stack/NiagaraStackRoot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStackRoot() {}
// Cross Module References
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackEmitterPropertiesGroup_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackEmitterSummaryGroup_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackEntry();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackRenderItemGroup_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackRoot();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackRoot_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackScriptItemGroup_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackSummaryViewCollapseButton_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackSystemPropertiesGroup_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackSystemUserParametersGroup_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraStackRoot::StaticRegisterNativesUNiagaraStackRoot()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStackRoot);
	UClass* Z_Construct_UClass_UNiagaraStackRoot_NoRegister()
	{
		return UNiagaraStackRoot::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraStackRoot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SystemPropertiesGroup_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SystemPropertiesGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SystemUserParametersGroup_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SystemUserParametersGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SystemSpawnGroup_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SystemSpawnGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SystemUpdateGroup_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SystemUpdateGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmitterPropertiesGroup_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EmitterPropertiesGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmitterSummaryGroup_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EmitterSummaryGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmitterSpawnGroup_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EmitterSpawnGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmitterUpdateGroup_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EmitterUpdateGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleSpawnGroup_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParticleSpawnGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleUpdateGroup_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParticleUpdateGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderGroup_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RenderGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SummaryCollapseButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SummaryCollapseButton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraStackRoot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraStackEntry,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackRoot_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/Stack/NiagaraStackRoot.h" },
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackRoot.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_SystemPropertiesGroup_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackRoot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_SystemPropertiesGroup = { "SystemPropertiesGroup", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraStackRoot, SystemPropertiesGroup), Z_Construct_UClass_UNiagaraStackSystemPropertiesGroup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_SystemPropertiesGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_SystemPropertiesGroup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_SystemUserParametersGroup_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackRoot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_SystemUserParametersGroup = { "SystemUserParametersGroup", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraStackRoot, SystemUserParametersGroup), Z_Construct_UClass_UNiagaraStackSystemUserParametersGroup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_SystemUserParametersGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_SystemUserParametersGroup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_SystemSpawnGroup_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackRoot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_SystemSpawnGroup = { "SystemSpawnGroup", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraStackRoot, SystemSpawnGroup), Z_Construct_UClass_UNiagaraStackScriptItemGroup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_SystemSpawnGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_SystemSpawnGroup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_SystemUpdateGroup_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackRoot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_SystemUpdateGroup = { "SystemUpdateGroup", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraStackRoot, SystemUpdateGroup), Z_Construct_UClass_UNiagaraStackScriptItemGroup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_SystemUpdateGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_SystemUpdateGroup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_EmitterPropertiesGroup_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackRoot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_EmitterPropertiesGroup = { "EmitterPropertiesGroup", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraStackRoot, EmitterPropertiesGroup), Z_Construct_UClass_UNiagaraStackEmitterPropertiesGroup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_EmitterPropertiesGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_EmitterPropertiesGroup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_EmitterSummaryGroup_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackRoot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_EmitterSummaryGroup = { "EmitterSummaryGroup", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraStackRoot, EmitterSummaryGroup), Z_Construct_UClass_UNiagaraStackEmitterSummaryGroup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_EmitterSummaryGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_EmitterSummaryGroup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_EmitterSpawnGroup_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackRoot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_EmitterSpawnGroup = { "EmitterSpawnGroup", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraStackRoot, EmitterSpawnGroup), Z_Construct_UClass_UNiagaraStackScriptItemGroup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_EmitterSpawnGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_EmitterSpawnGroup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_EmitterUpdateGroup_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackRoot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_EmitterUpdateGroup = { "EmitterUpdateGroup", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraStackRoot, EmitterUpdateGroup), Z_Construct_UClass_UNiagaraStackScriptItemGroup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_EmitterUpdateGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_EmitterUpdateGroup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_ParticleSpawnGroup_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackRoot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_ParticleSpawnGroup = { "ParticleSpawnGroup", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraStackRoot, ParticleSpawnGroup), Z_Construct_UClass_UNiagaraStackScriptItemGroup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_ParticleSpawnGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_ParticleSpawnGroup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_ParticleUpdateGroup_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackRoot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_ParticleUpdateGroup = { "ParticleUpdateGroup", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraStackRoot, ParticleUpdateGroup), Z_Construct_UClass_UNiagaraStackScriptItemGroup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_ParticleUpdateGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_ParticleUpdateGroup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_RenderGroup_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackRoot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_RenderGroup = { "RenderGroup", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraStackRoot, RenderGroup), Z_Construct_UClass_UNiagaraStackRenderItemGroup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_RenderGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_RenderGroup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_SummaryCollapseButton_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackRoot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_SummaryCollapseButton = { "SummaryCollapseButton", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraStackRoot, SummaryCollapseButton), Z_Construct_UClass_UNiagaraStackSummaryViewCollapseButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_SummaryCollapseButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_SummaryCollapseButton_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraStackRoot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_SystemPropertiesGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_SystemUserParametersGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_SystemSpawnGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_SystemUpdateGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_EmitterPropertiesGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_EmitterSummaryGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_EmitterSpawnGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_EmitterUpdateGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_ParticleSpawnGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_ParticleUpdateGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_RenderGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackRoot_Statics::NewProp_SummaryCollapseButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraStackRoot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStackRoot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStackRoot_Statics::ClassParams = {
		&UNiagaraStackRoot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraStackRoot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackRoot_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackRoot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackRoot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraStackRoot()
	{
		if (!Z_Registration_Info_UClass_UNiagaraStackRoot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStackRoot.OuterSingleton, Z_Construct_UClass_UNiagaraStackRoot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraStackRoot.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraStackRoot>()
	{
		return UNiagaraStackRoot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStackRoot);
	UNiagaraStackRoot::~UNiagaraStackRoot() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackRoot_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackRoot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStackRoot, UNiagaraStackRoot::StaticClass, TEXT("UNiagaraStackRoot"), &Z_Registration_Info_UClass_UNiagaraStackRoot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStackRoot), 2710535036U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackRoot_h_3955820387(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackRoot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackRoot_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
