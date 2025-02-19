// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigEditor/IKRigAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "AnimNodes/AnimNode_IKRig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIKRigAnimInstance() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimPreviewInstance();
	IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_IKRig();
	IKRIGEDITOR_API UClass* Z_Construct_UClass_UIKRigAnimInstance();
	IKRIGEDITOR_API UClass* Z_Construct_UClass_UIKRigAnimInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IKRigEditor();
// End Cross Module References
	void UIKRigAnimInstance::StaticRegisterNativesUIKRigAnimInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIKRigAnimInstance);
	UClass* Z_Construct_UClass_UIKRigAnimInstance_NoRegister()
	{
		return UIKRigAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UIKRigAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IKRigNode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IKRigNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIKRigAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimPreviewInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_IKRigEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "RigEditor/IKRigAnimInstance.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigAnimInstance_Statics::NewProp_IKRigNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigEditor/IKRigAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIKRigAnimInstance_Statics::NewProp_IKRigNode = { "IKRigNode", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRigAnimInstance, IKRigNode), Z_Construct_UScriptStruct_FAnimNode_IKRig, METADATA_PARAMS(Z_Construct_UClass_UIKRigAnimInstance_Statics::NewProp_IKRigNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigAnimInstance_Statics::NewProp_IKRigNode_MetaData)) }; // 733065193
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIKRigAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigAnimInstance_Statics::NewProp_IKRigNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIKRigAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIKRigAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIKRigAnimInstance_Statics::ClassParams = {
		&UIKRigAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIKRigAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigAnimInstance_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UIKRigAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIKRigAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UIKRigAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIKRigAnimInstance.OuterSingleton, Z_Construct_UClass_UIKRigAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIKRigAnimInstance.OuterSingleton;
	}
	template<> IKRIGEDITOR_API UClass* StaticClass<UIKRigAnimInstance>()
	{
		return UIKRigAnimInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIKRigAnimInstance);
	UIKRigAnimInstance::~UIKRigAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIKRigAnimInstance, UIKRigAnimInstance::StaticClass, TEXT("UIKRigAnimInstance"), &Z_Registration_Info_UClass_UIKRigAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIKRigAnimInstance), 816892033U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigAnimInstance_h_751036112(TEXT("/Script/IKRigEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
