// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/BehaviorTree/Tasks/BTTask_PlayAnimation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_PlayAnimation() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_PlayAnimation();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_PlayAnimation_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBTTask_PlayAnimation::StaticRegisterNativesUBTTask_PlayAnimation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_PlayAnimation);
	UClass* Z_Construct_UClass_UBTTask_PlayAnimation_NoRegister()
	{
		return UBTTask_PlayAnimation::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_PlayAnimation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationToPlay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AnimationToPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNonBlocking_MetaData[];
#endif
		static void NewProp_bNonBlocking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNonBlocking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyOwnerComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MyOwnerComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedSkelMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedSkelMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_PlayAnimation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_PlayAnimation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09Play indicated AnimationAsset on Pawn controlled by BT \n *\x09Note that this node is generic and is handing multiple special cases,\n *\x09If you want a more efficient solution you'll need to implement it yourself (or wait for our BTTask_PlayCharacterAnimation)\n */" },
		{ "IncludePath", "BehaviorTree/Tasks/BTTask_PlayAnimation.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_PlayAnimation.h" },
		{ "ToolTip", "Play indicated AnimationAsset on Pawn controlled by BT\nNote that this node is generic and is handing multiple special cases,\nIf you want a more efficient solution you'll need to implement it yourself (or wait for our BTTask_PlayCharacterAnimation)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_AnimationToPlay_MetaData[] = {
		{ "Category", "Node" },
		{ "Comment", "/** Animation asset to play. Note that it needs to match the skeleton of pawn this BT is controlling */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_PlayAnimation.h" },
		{ "ToolTip", "Animation asset to play. Note that it needs to match the skeleton of pawn this BT is controlling" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_AnimationToPlay = { "AnimationToPlay", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_PlayAnimation, AnimationToPlay), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_AnimationToPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_AnimationToPlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_bLooping_MetaData[] = {
		{ "Category", "Node" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_PlayAnimation.h" },
	};
#endif
	void Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((UBTTask_PlayAnimation*)Obj)->bLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UBTTask_PlayAnimation), &Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_bLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_bLooping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_bNonBlocking_MetaData[] = {
		{ "Category", "Node" },
		{ "Comment", "/** if true the task will just trigger the animation and instantly finish. Fire and Forget. */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_PlayAnimation.h" },
		{ "ToolTip", "if true the task will just trigger the animation and instantly finish. Fire and Forget." },
	};
#endif
	void Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_bNonBlocking_SetBit(void* Obj)
	{
		((UBTTask_PlayAnimation*)Obj)->bNonBlocking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_bNonBlocking = { "bNonBlocking", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UBTTask_PlayAnimation), &Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_bNonBlocking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_bNonBlocking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_bNonBlocking_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_MyOwnerComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_PlayAnimation.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_MyOwnerComp = { "MyOwnerComp", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_PlayAnimation, MyOwnerComp), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_MyOwnerComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_MyOwnerComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_CachedSkelMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_PlayAnimation.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_CachedSkelMesh = { "CachedSkelMesh", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_PlayAnimation, CachedSkelMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_CachedSkelMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_CachedSkelMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_PlayAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_AnimationToPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_bLooping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_bNonBlocking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_MyOwnerComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_CachedSkelMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_PlayAnimation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_PlayAnimation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_PlayAnimation_Statics::ClassParams = {
		&UBTTask_PlayAnimation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_PlayAnimation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PlayAnimation_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_PlayAnimation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PlayAnimation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_PlayAnimation()
	{
		if (!Z_Registration_Info_UClass_UBTTask_PlayAnimation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_PlayAnimation.OuterSingleton, Z_Construct_UClass_UBTTask_PlayAnimation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTTask_PlayAnimation.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UBTTask_PlayAnimation>()
	{
		return UBTTask_PlayAnimation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_PlayAnimation);
	UBTTask_PlayAnimation::~UBTTask_PlayAnimation() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PlayAnimation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PlayAnimation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_PlayAnimation, UBTTask_PlayAnimation::StaticClass, TEXT("UBTTask_PlayAnimation"), &Z_Registration_Info_UClass_UBTTask_PlayAnimation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_PlayAnimation), 2989671410U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PlayAnimation_h_2273061976(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PlayAnimation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PlayAnimation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
