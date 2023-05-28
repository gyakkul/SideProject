// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VPEditorTickableActorBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVPEditorTickableActorBase() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VPUtilitiesEditor();
	VPUTILITIES_API UClass* Z_Construct_UClass_AVPViewportTickableActorBase();
	VPUTILITIESEDITOR_API UClass* Z_Construct_UClass_AVPEditorTickableActorBase();
	VPUTILITIESEDITOR_API UClass* Z_Construct_UClass_AVPEditorTickableActorBase_NoRegister();
// End Cross Module References
	void AVPEditorTickableActorBase::StaticRegisterNativesAVPEditorTickableActorBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVPEditorTickableActorBase);
	UClass* Z_Construct_UClass_AVPEditorTickableActorBase_NoRegister()
	{
		return AVPEditorTickableActorBase::StaticClass();
	}
	struct Z_Construct_UClass_AVPEditorTickableActorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVPEditorTickableActorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVPViewportTickableActorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VPUtilitiesEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVPEditorTickableActorBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Actor that tick in the Editor viewport with the event EditorTick.\n */" },
		{ "IncludePath", "VPEditorTickableActorBase.h" },
		{ "ModuleRelativePath", "Public/VPEditorTickableActorBase.h" },
		{ "ToolTip", "Actor that tick in the Editor viewport with the event EditorTick." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVPEditorTickableActorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVPEditorTickableActorBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVPEditorTickableActorBase_Statics::ClassParams = {
		&AVPEditorTickableActorBase::StaticClass,
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
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AVPEditorTickableActorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVPEditorTickableActorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVPEditorTickableActorBase()
	{
		if (!Z_Registration_Info_UClass_AVPEditorTickableActorBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVPEditorTickableActorBase.OuterSingleton, Z_Construct_UClass_AVPEditorTickableActorBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVPEditorTickableActorBase.OuterSingleton;
	}
	template<> VPUTILITIESEDITOR_API UClass* StaticClass<AVPEditorTickableActorBase>()
	{
		return AVPEditorTickableActorBase::StaticClass();
	}
	AVPEditorTickableActorBase::AVPEditorTickableActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVPEditorTickableActorBase);
	AVPEditorTickableActorBase::~AVPEditorTickableActorBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPEditorTickableActorBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPEditorTickableActorBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVPEditorTickableActorBase, AVPEditorTickableActorBase::StaticClass, TEXT("AVPEditorTickableActorBase"), &Z_Registration_Info_UClass_AVPEditorTickableActorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVPEditorTickableActorBase), 2643252079U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPEditorTickableActorBase_h_2760130934(TEXT("/Script/VPUtilitiesEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPEditorTickableActorBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPEditorTickableActorBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
