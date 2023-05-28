// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/LiveLinkPreviewController.h"
#include "LiveLinkTypes.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkPreviewController() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	LIVELINKANIMATIONCORE_API UClass* Z_Construct_UClass_ULiveLinkRetargetAsset_NoRegister();
	LIVELINKEDITOR_API UClass* Z_Construct_UClass_ULiveLinkPreviewController();
	LIVELINKEDITOR_API UClass* Z_Construct_UClass_ULiveLinkPreviewController_NoRegister();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectName();
	PERSONA_API UClass* Z_Construct_UClass_UPersonaPreviewSceneController();
	UPackage* Z_Construct_UPackage__Script_LiveLinkEditor();
// End Cross Module References
	void ULiveLinkPreviewController::StaticRegisterNativesULiveLinkPreviewController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkPreviewController);
	UClass* Z_Construct_UClass_ULiveLinkPreviewController_NoRegister()
	{
		return ULiveLinkPreviewController::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkPreviewController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubjectName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubjectName;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LiveLinkSubjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LiveLinkSubjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCameraSync_MetaData[];
#endif
		static void NewProp_bEnableCameraSync_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCameraSync;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RetargetAsset_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_RetargetAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkPreviewController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPersonaPreviewSceneController,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkPreviewController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LiveLinkPreviewController.h" },
		{ "ModuleRelativePath", "Private/LiveLinkPreviewController.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkPreviewController_Statics::NewProp_SubjectName_MetaData[] = {
		{ "ModuleRelativePath", "Private/LiveLinkPreviewController.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULiveLinkPreviewController_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkPreviewController, SubjectName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_ULiveLinkPreviewController_Statics::NewProp_SubjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkPreviewController_Statics::NewProp_SubjectName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkPreviewController_Statics::NewProp_LiveLinkSubjectName_MetaData[] = {
		{ "Category", "Live Link" },
		{ "ModuleRelativePath", "Private/LiveLinkPreviewController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkPreviewController_Statics::NewProp_LiveLinkSubjectName = { "LiveLinkSubjectName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkPreviewController, LiveLinkSubjectName), Z_Construct_UScriptStruct_FLiveLinkSubjectName, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkPreviewController_Statics::NewProp_LiveLinkSubjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkPreviewController_Statics::NewProp_LiveLinkSubjectName_MetaData)) }; // 930695248
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkPreviewController_Statics::NewProp_bEnableCameraSync_MetaData[] = {
		{ "Category", "Live Link" },
		{ "ModuleRelativePath", "Private/LiveLinkPreviewController.h" },
	};
#endif
	void Z_Construct_UClass_ULiveLinkPreviewController_Statics::NewProp_bEnableCameraSync_SetBit(void* Obj)
	{
		((ULiveLinkPreviewController*)Obj)->bEnableCameraSync = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveLinkPreviewController_Statics::NewProp_bEnableCameraSync = { "bEnableCameraSync", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULiveLinkPreviewController), &Z_Construct_UClass_ULiveLinkPreviewController_Statics::NewProp_bEnableCameraSync_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkPreviewController_Statics::NewProp_bEnableCameraSync_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkPreviewController_Statics::NewProp_bEnableCameraSync_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkPreviewController_Statics::NewProp_RetargetAsset_MetaData[] = {
		{ "Category", "Live Link" },
		{ "ModuleRelativePath", "Private/LiveLinkPreviewController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULiveLinkPreviewController_Statics::NewProp_RetargetAsset = { "RetargetAsset", nullptr, (EPropertyFlags)0x0014000002000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkPreviewController, RetargetAsset), Z_Construct_UClass_UClass, Z_Construct_UClass_ULiveLinkRetargetAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkPreviewController_Statics::NewProp_RetargetAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkPreviewController_Statics::NewProp_RetargetAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkPreviewController_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkPreviewController_Statics::NewProp_SubjectName,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkPreviewController_Statics::NewProp_LiveLinkSubjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkPreviewController_Statics::NewProp_bEnableCameraSync,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkPreviewController_Statics::NewProp_RetargetAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkPreviewController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkPreviewController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkPreviewController_Statics::ClassParams = {
		&ULiveLinkPreviewController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULiveLinkPreviewController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkPreviewController_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkPreviewController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkPreviewController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkPreviewController()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkPreviewController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkPreviewController.OuterSingleton, Z_Construct_UClass_ULiveLinkPreviewController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkPreviewController.OuterSingleton;
	}
	template<> LIVELINKEDITOR_API UClass* StaticClass<ULiveLinkPreviewController>()
	{
		return ULiveLinkPreviewController::StaticClass();
	}
	ULiveLinkPreviewController::ULiveLinkPreviewController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkPreviewController);
	ULiveLinkPreviewController::~ULiveLinkPreviewController() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULiveLinkPreviewController)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkEditor_Private_LiveLinkPreviewController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkEditor_Private_LiveLinkPreviewController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkPreviewController, ULiveLinkPreviewController::StaticClass, TEXT("ULiveLinkPreviewController"), &Z_Registration_Info_UClass_ULiveLinkPreviewController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkPreviewController), 464931991U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkEditor_Private_LiveLinkPreviewController_h_690508486(TEXT("/Script/LiveLinkEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkEditor_Private_LiveLinkPreviewController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkEditor_Private_LiveLinkPreviewController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
