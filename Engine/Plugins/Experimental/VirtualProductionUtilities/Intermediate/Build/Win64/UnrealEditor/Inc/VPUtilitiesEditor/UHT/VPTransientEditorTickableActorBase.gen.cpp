// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VPTransientEditorTickableActorBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVPTransientEditorTickableActorBase() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VPUtilitiesEditor();
	VPUTILITIESEDITOR_API UClass* Z_Construct_UClass_AVPEditorTickableActorBase();
	VPUTILITIESEDITOR_API UClass* Z_Construct_UClass_AVPTransientEditorTickableActorBase();
	VPUTILITIESEDITOR_API UClass* Z_Construct_UClass_AVPTransientEditorTickableActorBase_NoRegister();
// End Cross Module References
	void AVPTransientEditorTickableActorBase::StaticRegisterNativesAVPTransientEditorTickableActorBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVPTransientEditorTickableActorBase);
	UClass* Z_Construct_UClass_AVPTransientEditorTickableActorBase_NoRegister()
	{
		return AVPTransientEditorTickableActorBase::StaticClass();
	}
	struct Z_Construct_UClass_AVPTransientEditorTickableActorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVPTransientEditorTickableActorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVPEditorTickableActorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VPUtilitiesEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVPTransientEditorTickableActorBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Specific VPEditorTickableActor explicitely marked as Transient\n */" },
		{ "IncludePath", "VPTransientEditorTickableActorBase.h" },
		{ "ModuleRelativePath", "Public/VPTransientEditorTickableActorBase.h" },
		{ "ToolTip", "Specific VPEditorTickableActor explicitely marked as Transient" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVPTransientEditorTickableActorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVPTransientEditorTickableActorBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVPTransientEditorTickableActorBase_Statics::ClassParams = {
		&AVPTransientEditorTickableActorBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000ADu,
		METADATA_PARAMS(Z_Construct_UClass_AVPTransientEditorTickableActorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVPTransientEditorTickableActorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVPTransientEditorTickableActorBase()
	{
		if (!Z_Registration_Info_UClass_AVPTransientEditorTickableActorBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVPTransientEditorTickableActorBase.OuterSingleton, Z_Construct_UClass_AVPTransientEditorTickableActorBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVPTransientEditorTickableActorBase.OuterSingleton;
	}
	template<> VPUTILITIESEDITOR_API UClass* StaticClass<AVPTransientEditorTickableActorBase>()
	{
		return AVPTransientEditorTickableActorBase::StaticClass();
	}
	AVPTransientEditorTickableActorBase::AVPTransientEditorTickableActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVPTransientEditorTickableActorBase);
	AVPTransientEditorTickableActorBase::~AVPTransientEditorTickableActorBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPTransientEditorTickableActorBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPTransientEditorTickableActorBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVPTransientEditorTickableActorBase, AVPTransientEditorTickableActorBase::StaticClass, TEXT("AVPTransientEditorTickableActorBase"), &Z_Registration_Info_UClass_AVPTransientEditorTickableActorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVPTransientEditorTickableActorBase), 120568033U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPTransientEditorTickableActorBase_h_614589374(TEXT("/Script/VPUtilitiesEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPTransientEditorTickableActorBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPTransientEditorTickableActorBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
