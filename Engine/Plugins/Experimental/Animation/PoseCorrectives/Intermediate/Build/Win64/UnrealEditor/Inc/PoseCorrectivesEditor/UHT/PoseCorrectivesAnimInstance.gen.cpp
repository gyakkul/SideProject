// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PoseCorrectivesAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "AnimNode_ControlRig_CorrectivesSource.h"
#include "AnimNode_CorrectPose.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseCorrectivesAnimInstance() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimPreviewInstance();
	POSECORRECTIVES_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CorrectPose();
	POSECORRECTIVESEDITOR_API UClass* Z_Construct_UClass_UPoseCorrectivesAnimInstance();
	POSECORRECTIVESEDITOR_API UClass* Z_Construct_UClass_UPoseCorrectivesAnimInstance_NoRegister();
	POSECORRECTIVESEDITOR_API UClass* Z_Construct_UClass_UPoseCorrectivesAnimSourceInstance();
	POSECORRECTIVESEDITOR_API UClass* Z_Construct_UClass_UPoseCorrectivesAnimSourceInstance_NoRegister();
	POSECORRECTIVESEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ControlRig_CorrectivesSource();
	UPackage* Z_Construct_UPackage__Script_PoseCorrectivesEditor();
// End Cross Module References
	void UPoseCorrectivesAnimInstance::StaticRegisterNativesUPoseCorrectivesAnimInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoseCorrectivesAnimInstance);
	UClass* Z_Construct_UClass_UPoseCorrectivesAnimInstance_NoRegister()
	{
		return UPoseCorrectivesAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UPoseCorrectivesAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseCorrectivesNode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PoseCorrectivesNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlRigSourceNode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlRigSourceNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoseCorrectivesAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimPreviewInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_PoseCorrectivesEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseCorrectivesAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "PoseCorrectivesAnimInstance.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/PoseCorrectivesAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseCorrectivesAnimInstance_Statics::NewProp_PoseCorrectivesNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/PoseCorrectivesAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseCorrectivesAnimInstance_Statics::NewProp_PoseCorrectivesNode = { "PoseCorrectivesNode", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseCorrectivesAnimInstance, PoseCorrectivesNode), Z_Construct_UScriptStruct_FAnimNode_CorrectPose, METADATA_PARAMS(Z_Construct_UClass_UPoseCorrectivesAnimInstance_Statics::NewProp_PoseCorrectivesNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseCorrectivesAnimInstance_Statics::NewProp_PoseCorrectivesNode_MetaData)) }; // 4062265160
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseCorrectivesAnimInstance_Statics::NewProp_ControlRigSourceNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/PoseCorrectivesAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseCorrectivesAnimInstance_Statics::NewProp_ControlRigSourceNode = { "ControlRigSourceNode", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseCorrectivesAnimInstance, ControlRigSourceNode), Z_Construct_UScriptStruct_FAnimNode_ControlRig_CorrectivesSource, METADATA_PARAMS(Z_Construct_UClass_UPoseCorrectivesAnimInstance_Statics::NewProp_ControlRigSourceNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseCorrectivesAnimInstance_Statics::NewProp_ControlRigSourceNode_MetaData)) }; // 1154641575
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoseCorrectivesAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseCorrectivesAnimInstance_Statics::NewProp_PoseCorrectivesNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseCorrectivesAnimInstance_Statics::NewProp_ControlRigSourceNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoseCorrectivesAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseCorrectivesAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseCorrectivesAnimInstance_Statics::ClassParams = {
		&UPoseCorrectivesAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPoseCorrectivesAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPoseCorrectivesAnimInstance_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPoseCorrectivesAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseCorrectivesAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPoseCorrectivesAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UPoseCorrectivesAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseCorrectivesAnimInstance.OuterSingleton, Z_Construct_UClass_UPoseCorrectivesAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPoseCorrectivesAnimInstance.OuterSingleton;
	}
	template<> POSECORRECTIVESEDITOR_API UClass* StaticClass<UPoseCorrectivesAnimInstance>()
	{
		return UPoseCorrectivesAnimInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseCorrectivesAnimInstance);
	UPoseCorrectivesAnimInstance::~UPoseCorrectivesAnimInstance() {}
	void UPoseCorrectivesAnimSourceInstance::StaticRegisterNativesUPoseCorrectivesAnimSourceInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoseCorrectivesAnimSourceInstance);
	UClass* Z_Construct_UClass_UPoseCorrectivesAnimSourceInstance_NoRegister()
	{
		return UPoseCorrectivesAnimSourceInstance::StaticClass();
	}
	struct Z_Construct_UClass_UPoseCorrectivesAnimSourceInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoseCorrectivesAnimSourceInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimPreviewInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_PoseCorrectivesEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseCorrectivesAnimSourceInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "PoseCorrectivesAnimInstance.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/PoseCorrectivesAnimInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoseCorrectivesAnimSourceInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseCorrectivesAnimSourceInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseCorrectivesAnimSourceInstance_Statics::ClassParams = {
		&UPoseCorrectivesAnimSourceInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPoseCorrectivesAnimSourceInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseCorrectivesAnimSourceInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPoseCorrectivesAnimSourceInstance()
	{
		if (!Z_Registration_Info_UClass_UPoseCorrectivesAnimSourceInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseCorrectivesAnimSourceInstance.OuterSingleton, Z_Construct_UClass_UPoseCorrectivesAnimSourceInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPoseCorrectivesAnimSourceInstance.OuterSingleton;
	}
	template<> POSECORRECTIVESEDITOR_API UClass* StaticClass<UPoseCorrectivesAnimSourceInstance>()
	{
		return UPoseCorrectivesAnimSourceInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseCorrectivesAnimSourceInstance);
	UPoseCorrectivesAnimSourceInstance::~UPoseCorrectivesAnimSourceInstance() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseCorrectives_Source_PoseCorrectivesEditor_Public_PoseCorrectivesAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseCorrectives_Source_PoseCorrectivesEditor_Public_PoseCorrectivesAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPoseCorrectivesAnimInstance, UPoseCorrectivesAnimInstance::StaticClass, TEXT("UPoseCorrectivesAnimInstance"), &Z_Registration_Info_UClass_UPoseCorrectivesAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseCorrectivesAnimInstance), 2934058892U) },
		{ Z_Construct_UClass_UPoseCorrectivesAnimSourceInstance, UPoseCorrectivesAnimSourceInstance::StaticClass, TEXT("UPoseCorrectivesAnimSourceInstance"), &Z_Registration_Info_UClass_UPoseCorrectivesAnimSourceInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseCorrectivesAnimSourceInstance), 412279105U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseCorrectives_Source_PoseCorrectivesEditor_Public_PoseCorrectivesAnimInstance_h_213800528(TEXT("/Script/PoseCorrectivesEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseCorrectives_Source_PoseCorrectivesEditor_Public_PoseCorrectivesAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseCorrectives_Source_PoseCorrectivesEditor_Public_PoseCorrectivesAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
