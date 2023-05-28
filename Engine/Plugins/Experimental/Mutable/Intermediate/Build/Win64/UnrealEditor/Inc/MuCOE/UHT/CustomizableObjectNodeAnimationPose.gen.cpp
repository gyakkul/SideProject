// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCOE/Nodes/CustomizableObjectNodeAnimationPose.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectNodeAnimationPose() {}
// Cross Module References
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNode();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeAnimationPose();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeAnimationPose_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPoseAsset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	void UCustomizableObjectNodeAnimationPose::StaticRegisterNativesUCustomizableObjectNodeAnimationPose()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeAnimationPose);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeAnimationPose_NoRegister()
	{
		return UCustomizableObjectNodeAnimationPose::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeAnimationPose_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PoseAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeAnimationPose_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNode,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeAnimationPose_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeAnimationPose.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeAnimationPose.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeAnimationPose_Statics::NewProp_PoseAsset_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeAnimationPose.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCustomizableObjectNodeAnimationPose_Statics::NewProp_PoseAsset = { "PoseAsset", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeAnimationPose, PoseAsset), Z_Construct_UClass_UPoseAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeAnimationPose_Statics::NewProp_PoseAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeAnimationPose_Statics::NewProp_PoseAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectNodeAnimationPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeAnimationPose_Statics::NewProp_PoseAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeAnimationPose_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeAnimationPose>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeAnimationPose_Statics::ClassParams = {
		&UCustomizableObjectNodeAnimationPose::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectNodeAnimationPose_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeAnimationPose_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeAnimationPose_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeAnimationPose_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectNodeAnimationPose()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeAnimationPose.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeAnimationPose.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeAnimationPose_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeAnimationPose.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeAnimationPose>()
	{
		return UCustomizableObjectNodeAnimationPose::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeAnimationPose);
	UCustomizableObjectNodeAnimationPose::~UCustomizableObjectNodeAnimationPose() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeAnimationPose_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeAnimationPose_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectNodeAnimationPose, UCustomizableObjectNodeAnimationPose::StaticClass, TEXT("UCustomizableObjectNodeAnimationPose"), &Z_Registration_Info_UClass_UCustomizableObjectNodeAnimationPose, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeAnimationPose), 1231402901U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeAnimationPose_h_1796194408(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeAnimationPose_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeAnimationPose_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
