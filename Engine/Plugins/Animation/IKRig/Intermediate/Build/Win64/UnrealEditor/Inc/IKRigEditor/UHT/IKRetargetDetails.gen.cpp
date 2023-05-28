// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RetargetEditor/IKRetargetDetails.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIKRetargetDetails() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	IKRIGEDITOR_API UClass* Z_Construct_UClass_UIKRetargetBoneDetails();
	IKRIGEDITOR_API UClass* Z_Construct_UClass_UIKRetargetBoneDetails_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IKRigEditor();
// End Cross Module References
	void UIKRetargetBoneDetails::StaticRegisterNativesUIKRetargetBoneDetails()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIKRetargetBoneDetails);
	UClass* Z_Construct_UClass_UIKRetargetBoneDetails_NoRegister()
	{
		return UIKRetargetBoneDetails::StaticClass();
	}
	struct Z_Construct_UClass_UIKRetargetBoneDetails_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReferenceTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIKRetargetBoneDetails_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IKRigEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargetBoneDetails_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "UObject" },
		{ "IncludePath", "RetargetEditor/IKRetargetDetails.h" },
		{ "ModuleRelativePath", "Public/RetargetEditor/IKRetargetDetails.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargetBoneDetails_Statics::NewProp_SelectedBone_MetaData[] = {
		{ "Category", "Selection" },
		{ "ModuleRelativePath", "Public/RetargetEditor/IKRetargetDetails.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIKRetargetBoneDetails_Statics::NewProp_SelectedBone = { "SelectedBone", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRetargetBoneDetails, SelectedBone), METADATA_PARAMS(Z_Construct_UClass_UIKRetargetBoneDetails_Statics::NewProp_SelectedBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargetBoneDetails_Statics::NewProp_SelectedBone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargetBoneDetails_Statics::NewProp_OffsetTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/RetargetEditor/IKRetargetDetails.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIKRetargetBoneDetails_Statics::NewProp_OffsetTransform = { "OffsetTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRetargetBoneDetails, OffsetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UIKRetargetBoneDetails_Statics::NewProp_OffsetTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargetBoneDetails_Statics::NewProp_OffsetTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargetBoneDetails_Statics::NewProp_CurrentTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/RetargetEditor/IKRetargetDetails.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIKRetargetBoneDetails_Statics::NewProp_CurrentTransform = { "CurrentTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRetargetBoneDetails, CurrentTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UIKRetargetBoneDetails_Statics::NewProp_CurrentTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargetBoneDetails_Statics::NewProp_CurrentTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargetBoneDetails_Statics::NewProp_ReferenceTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/RetargetEditor/IKRetargetDetails.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIKRetargetBoneDetails_Statics::NewProp_ReferenceTransform = { "ReferenceTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRetargetBoneDetails, ReferenceTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UIKRetargetBoneDetails_Statics::NewProp_ReferenceTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargetBoneDetails_Statics::NewProp_ReferenceTransform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIKRetargetBoneDetails_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargetBoneDetails_Statics::NewProp_SelectedBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargetBoneDetails_Statics::NewProp_OffsetTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargetBoneDetails_Statics::NewProp_CurrentTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargetBoneDetails_Statics::NewProp_ReferenceTransform,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIKRetargetBoneDetails_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIKRetargetBoneDetails>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIKRetargetBoneDetails_Statics::ClassParams = {
		&UIKRetargetBoneDetails::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIKRetargetBoneDetails_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargetBoneDetails_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIKRetargetBoneDetails_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargetBoneDetails_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIKRetargetBoneDetails()
	{
		if (!Z_Registration_Info_UClass_UIKRetargetBoneDetails.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIKRetargetBoneDetails.OuterSingleton, Z_Construct_UClass_UIKRetargetBoneDetails_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIKRetargetBoneDetails.OuterSingleton;
	}
	template<> IKRIGEDITOR_API UClass* StaticClass<UIKRetargetBoneDetails>()
	{
		return UIKRetargetBoneDetails::StaticClass();
	}
	UIKRetargetBoneDetails::UIKRetargetBoneDetails(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIKRetargetBoneDetails);
	UIKRetargetBoneDetails::~UIKRetargetBoneDetails() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetDetails_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetDetails_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIKRetargetBoneDetails, UIKRetargetBoneDetails::StaticClass, TEXT("UIKRetargetBoneDetails"), &Z_Registration_Info_UClass_UIKRetargetBoneDetails, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIKRetargetBoneDetails), 2635161399U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetDetails_h_2666036785(TEXT("/Script/IKRigEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetDetails_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetDetails_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
