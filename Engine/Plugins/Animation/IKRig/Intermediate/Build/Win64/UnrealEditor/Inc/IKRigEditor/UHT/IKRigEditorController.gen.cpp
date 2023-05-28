// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigEditor/IKRigEditorController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIKRigEditorController() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	IKRIG_API UClass* Z_Construct_UClass_UIKRigDefinition_NoRegister();
	IKRIGEDITOR_API UClass* Z_Construct_UClass_UIKRigBoneDetails();
	IKRIGEDITOR_API UClass* Z_Construct_UClass_UIKRigBoneDetails_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IKRigEditor();
// End Cross Module References
	void UIKRigBoneDetails::StaticRegisterNativesUIKRigBoneDetails()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIKRigBoneDetails);
	UClass* Z_Construct_UClass_UIKRigBoneDetails_NoRegister()
	{
		return UIKRigBoneDetails::StaticClass();
	}
	struct Z_Construct_UClass_UIKRigBoneDetails_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedBone_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SelectedBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReferenceTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimInstancePtr_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_AnimInstancePtr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPtr_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_AssetPtr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIKRigBoneDetails_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IKRigEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigBoneDetails_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "UObject" },
		{ "IncludePath", "RigEditor/IKRigEditorController.h" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigEditorController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigBoneDetails_Statics::NewProp_SelectedBone_MetaData[] = {
		{ "Category", "Selection" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigEditorController.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIKRigBoneDetails_Statics::NewProp_SelectedBone = { "SelectedBone", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRigBoneDetails, SelectedBone), METADATA_PARAMS(Z_Construct_UClass_UIKRigBoneDetails_Statics::NewProp_SelectedBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigBoneDetails_Statics::NewProp_SelectedBone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigBoneDetails_Statics::NewProp_CurrentTransform_MetaData[] = {
		{ "Category", "Bone Transforms" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigEditorController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIKRigBoneDetails_Statics::NewProp_CurrentTransform = { "CurrentTransform", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRigBoneDetails, CurrentTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UIKRigBoneDetails_Statics::NewProp_CurrentTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigBoneDetails_Statics::NewProp_CurrentTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigBoneDetails_Statics::NewProp_ReferenceTransform_MetaData[] = {
		{ "Category", "Bone Transforms" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigEditorController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIKRigBoneDetails_Statics::NewProp_ReferenceTransform = { "ReferenceTransform", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRigBoneDetails, ReferenceTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UIKRigBoneDetails_Statics::NewProp_ReferenceTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigBoneDetails_Statics::NewProp_ReferenceTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigBoneDetails_Statics::NewProp_AnimInstancePtr_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigEditor/IKRigEditorController.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UIKRigBoneDetails_Statics::NewProp_AnimInstancePtr = { "AnimInstancePtr", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRigBoneDetails, AnimInstancePtr), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIKRigBoneDetails_Statics::NewProp_AnimInstancePtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigBoneDetails_Statics::NewProp_AnimInstancePtr_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigBoneDetails_Statics::NewProp_AssetPtr_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigEditor/IKRigEditorController.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UIKRigBoneDetails_Statics::NewProp_AssetPtr = { "AssetPtr", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRigBoneDetails, AssetPtr), Z_Construct_UClass_UIKRigDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIKRigBoneDetails_Statics::NewProp_AssetPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigBoneDetails_Statics::NewProp_AssetPtr_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIKRigBoneDetails_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigBoneDetails_Statics::NewProp_SelectedBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigBoneDetails_Statics::NewProp_CurrentTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigBoneDetails_Statics::NewProp_ReferenceTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigBoneDetails_Statics::NewProp_AnimInstancePtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigBoneDetails_Statics::NewProp_AssetPtr,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIKRigBoneDetails_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIKRigBoneDetails>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIKRigBoneDetails_Statics::ClassParams = {
		&UIKRigBoneDetails::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIKRigBoneDetails_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigBoneDetails_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIKRigBoneDetails_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigBoneDetails_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIKRigBoneDetails()
	{
		if (!Z_Registration_Info_UClass_UIKRigBoneDetails.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIKRigBoneDetails.OuterSingleton, Z_Construct_UClass_UIKRigBoneDetails_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIKRigBoneDetails.OuterSingleton;
	}
	template<> IKRIGEDITOR_API UClass* StaticClass<UIKRigBoneDetails>()
	{
		return UIKRigBoneDetails::StaticClass();
	}
	UIKRigBoneDetails::UIKRigBoneDetails(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIKRigBoneDetails);
	UIKRigBoneDetails::~UIKRigBoneDetails() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigEditorController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigEditorController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIKRigBoneDetails, UIKRigBoneDetails::StaticClass, TEXT("UIKRigBoneDetails"), &Z_Registration_Info_UClass_UIKRigBoneDetails, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIKRigBoneDetails), 840805378U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigEditorController_h_1599902909(TEXT("/Script/IKRigEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigEditorController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigEditorController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
