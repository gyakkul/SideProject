// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RetargetEditor/IKRetargetAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "AnimNodes/AnimNode_RetargetPoseFromMesh.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIKRetargetAnimInstance() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimPreviewInstance();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh();
	IKRIGEDITOR_API UClass* Z_Construct_UClass_UIKRetargetAnimInstance();
	IKRIGEDITOR_API UClass* Z_Construct_UClass_UIKRetargetAnimInstance_NoRegister();
	IKRIGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PreviewRetargetPose();
	UPackage* Z_Construct_UPackage__Script_IKRigEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_PreviewRetargetPose>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_PreviewRetargetPose cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_PreviewRetargetPose;
class UScriptStruct* FAnimNode_PreviewRetargetPose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_PreviewRetargetPose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_PreviewRetargetPose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_PreviewRetargetPose, (UObject*)Z_Construct_UPackage__Script_IKRigEditor(), TEXT("AnimNode_PreviewRetargetPose"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_PreviewRetargetPose.OuterSingleton;
}
template<> IKRIGEDITOR_API UScriptStruct* StaticStruct<FAnimNode_PreviewRetargetPose>()
{
	return FAnimNode_PreviewRetargetPose::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_PreviewRetargetPose_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PreviewRetargetPose_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// a node just to preview a retarget pose\n" },
		{ "ModuleRelativePath", "Public/RetargetEditor/IKRetargetAnimInstance.h" },
		{ "ToolTip", "a node just to preview a retarget pose" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_PreviewRetargetPose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_PreviewRetargetPose>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_PreviewRetargetPose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IKRigEditor,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_PreviewRetargetPose",
		sizeof(FAnimNode_PreviewRetargetPose),
		alignof(FAnimNode_PreviewRetargetPose),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PreviewRetargetPose_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PreviewRetargetPose_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PreviewRetargetPose()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_PreviewRetargetPose.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_PreviewRetargetPose.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_PreviewRetargetPose_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_PreviewRetargetPose.InnerSingleton;
	}
	void UIKRetargetAnimInstance::StaticRegisterNativesUIKRetargetAnimInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIKRetargetAnimInstance);
	UClass* Z_Construct_UClass_UIKRetargetAnimInstance_NoRegister()
	{
		return UIKRetargetAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UIKRetargetAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewPoseNode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviewPoseNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RetargetNode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RetargetNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIKRetargetAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimPreviewInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_IKRigEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargetAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "RetargetEditor/IKRetargetAnimInstance.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/RetargetEditor/IKRetargetAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargetAnimInstance_Statics::NewProp_PreviewPoseNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/RetargetEditor/IKRetargetAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIKRetargetAnimInstance_Statics::NewProp_PreviewPoseNode = { "PreviewPoseNode", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRetargetAnimInstance, PreviewPoseNode), Z_Construct_UScriptStruct_FAnimNode_PreviewRetargetPose, METADATA_PARAMS(Z_Construct_UClass_UIKRetargetAnimInstance_Statics::NewProp_PreviewPoseNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargetAnimInstance_Statics::NewProp_PreviewPoseNode_MetaData)) }; // 1248990393
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargetAnimInstance_Statics::NewProp_RetargetNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/RetargetEditor/IKRetargetAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIKRetargetAnimInstance_Statics::NewProp_RetargetNode = { "RetargetNode", nullptr, (EPropertyFlags)0x0020088000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRetargetAnimInstance, RetargetNode), Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh, METADATA_PARAMS(Z_Construct_UClass_UIKRetargetAnimInstance_Statics::NewProp_RetargetNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargetAnimInstance_Statics::NewProp_RetargetNode_MetaData)) }; // 3302480198
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIKRetargetAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargetAnimInstance_Statics::NewProp_PreviewPoseNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargetAnimInstance_Statics::NewProp_RetargetNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIKRetargetAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIKRetargetAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIKRetargetAnimInstance_Statics::ClassParams = {
		&UIKRetargetAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIKRetargetAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargetAnimInstance_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UIKRetargetAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargetAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIKRetargetAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UIKRetargetAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIKRetargetAnimInstance.OuterSingleton, Z_Construct_UClass_UIKRetargetAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIKRetargetAnimInstance.OuterSingleton;
	}
	template<> IKRIGEDITOR_API UClass* StaticClass<UIKRetargetAnimInstance>()
	{
		return UIKRetargetAnimInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIKRetargetAnimInstance);
	UIKRetargetAnimInstance::~UIKRetargetAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetAnimInstance_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetAnimInstance_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_PreviewRetargetPose::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_PreviewRetargetPose_Statics::NewStructOps, TEXT("AnimNode_PreviewRetargetPose"), &Z_Registration_Info_UScriptStruct_AnimNode_PreviewRetargetPose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_PreviewRetargetPose), 1248990393U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIKRetargetAnimInstance, UIKRetargetAnimInstance::StaticClass, TEXT("UIKRetargetAnimInstance"), &Z_Registration_Info_UClass_UIKRetargetAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIKRetargetAnimInstance), 1166963372U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetAnimInstance_h_4034142460(TEXT("/Script/IKRigEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetAnimInstance_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetAnimInstance_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetAnimInstance_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
