// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationSharingInstances.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationSharingInstances() {}
// Cross Module References
	ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimSharingAdditiveInstance();
	ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimSharingAdditiveInstance_NoRegister();
	ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimSharingInstance_NoRegister();
	ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimSharingStateInstance();
	ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimSharingStateInstance_NoRegister();
	ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimSharingTransitionInstance();
	ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimSharingTransitionInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AnimationSharing();
// End Cross Module References
	DEFINE_FUNCTION(UAnimSharingStateInstance::execGetInstancedActors)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetInstancedActors(Z_Param_Out_Actors);
		P_NATIVE_END;
	}
	void UAnimSharingStateInstance::StaticRegisterNativesUAnimSharingStateInstance()
	{
		UClass* Class = UAnimSharingStateInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInstancedActors", &UAnimSharingStateInstance::execGetInstancedActors },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimSharingStateInstance_GetInstancedActors_Statics
	{
		struct AnimSharingStateInstance_eventGetInstancedActors_Parms
		{
			TArray<AActor*> Actors;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimSharingStateInstance_GetInstancedActors_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimSharingStateInstance_GetInstancedActors_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimSharingStateInstance_eventGetInstancedActors_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimSharingStateInstance_GetInstancedActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSharingStateInstance_GetInstancedActors_Statics::NewProp_Actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSharingStateInstance_GetInstancedActors_Statics::NewProp_Actors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSharingStateInstance_GetInstancedActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationSharing" },
		{ "ModuleRelativePath", "Public/AnimationSharingInstances.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimSharingStateInstance_GetInstancedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSharingStateInstance, nullptr, "GetInstancedActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimSharingStateInstance_GetInstancedActors_Statics::AnimSharingStateInstance_eventGetInstancedActors_Parms), Z_Construct_UFunction_UAnimSharingStateInstance_GetInstancedActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSharingStateInstance_GetInstancedActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimSharingStateInstance_GetInstancedActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSharingStateInstance_GetInstancedActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimSharingStateInstance_GetInstancedActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimSharingStateInstance_GetInstancedActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimSharingStateInstance);
	UClass* Z_Construct_UClass_UAnimSharingStateInstance_NoRegister()
	{
		return UAnimSharingStateInstance::StaticClass();
	}
	struct Z_Construct_UClass_UAnimSharingStateInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationToPlay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AnimationToPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PermutationTimeOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PermutationTimeOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStateBool_MetaData[];
#endif
		static void NewProp_bStateBool_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStateBool;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Instance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimSharingStateInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationSharing,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimSharingStateInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimSharingStateInstance_GetInstancedActors, "GetInstancedActors" }, // 413543925
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSharingStateInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AnimationSharingInstances.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AnimationSharingInstances.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_AnimationToPlay_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "ModuleRelativePath", "Public/AnimationSharingInstances.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_AnimationToPlay = { "AnimationToPlay", nullptr, (EPropertyFlags)0x0024080000012015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimSharingStateInstance, AnimationToPlay), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_AnimationToPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_AnimationToPlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_PermutationTimeOffset_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "ModuleRelativePath", "Public/AnimationSharingInstances.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_PermutationTimeOffset = { "PermutationTimeOffset", nullptr, (EPropertyFlags)0x0020080000012015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimSharingStateInstance, PermutationTimeOffset), METADATA_PARAMS(Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_PermutationTimeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_PermutationTimeOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "ModuleRelativePath", "Public/AnimationSharingInstances.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0020080000012015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimSharingStateInstance, PlayRate), METADATA_PARAMS(Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_bStateBool_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "ModuleRelativePath", "Public/AnimationSharingInstances.h" },
	};
#endif
	void Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_bStateBool_SetBit(void* Obj)
	{
		((UAnimSharingStateInstance*)Obj)->bStateBool = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_bStateBool = { "bStateBool", nullptr, (EPropertyFlags)0x0020080000012015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimSharingStateInstance), &Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_bStateBool_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_bStateBool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_bStateBool_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_Instance_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimationSharingInstances.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimSharingStateInstance, Instance), Z_Construct_UClass_UAnimSharingInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_Instance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_Instance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimSharingStateInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_AnimationToPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_PermutationTimeOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_bStateBool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_Instance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimSharingStateInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimSharingStateInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimSharingStateInstance_Statics::ClassParams = {
		&UAnimSharingStateInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAnimSharingStateInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingStateInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimSharingStateInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingStateInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimSharingStateInstance()
	{
		if (!Z_Registration_Info_UClass_UAnimSharingStateInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimSharingStateInstance.OuterSingleton, Z_Construct_UClass_UAnimSharingStateInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimSharingStateInstance.OuterSingleton;
	}
	template<> ANIMATIONSHARING_API UClass* StaticClass<UAnimSharingStateInstance>()
	{
		return UAnimSharingStateInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimSharingStateInstance);
	UAnimSharingStateInstance::~UAnimSharingStateInstance() {}
	void UAnimSharingTransitionInstance::StaticRegisterNativesUAnimSharingTransitionInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimSharingTransitionInstance);
	UClass* Z_Construct_UClass_UAnimSharingTransitionInstance_NoRegister()
	{
		return UAnimSharingTransitionInstance::StaticClass();
	}
	struct Z_Construct_UClass_UAnimSharingTransitionInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FromComponent_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_FromComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToComponent_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ToComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBlendBool_MetaData[];
#endif
		static void NewProp_bBlendBool_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlendBool;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationSharing,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AnimationSharingInstances.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AnimationSharingInstances.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_FromComponent_MetaData[] = {
		{ "Category", "Transition" },
		{ "ModuleRelativePath", "Public/AnimationSharingInstances.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_FromComponent = { "FromComponent", nullptr, (EPropertyFlags)0x002408000009201d, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimSharingTransitionInstance, FromComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_FromComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_FromComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_ToComponent_MetaData[] = {
		{ "Category", "Transition" },
		{ "ModuleRelativePath", "Public/AnimationSharingInstances.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_ToComponent = { "ToComponent", nullptr, (EPropertyFlags)0x002408000009201d, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimSharingTransitionInstance, ToComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_ToComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_ToComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_BlendTime_MetaData[] = {
		{ "Category", "Transition" },
		{ "ModuleRelativePath", "Public/AnimationSharingInstances.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0020080000012015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimSharingTransitionInstance, BlendTime), METADATA_PARAMS(Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_BlendTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_BlendTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_bBlendBool_MetaData[] = {
		{ "Category", "Transition" },
		{ "ModuleRelativePath", "Public/AnimationSharingInstances.h" },
	};
#endif
	void Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_bBlendBool_SetBit(void* Obj)
	{
		((UAnimSharingTransitionInstance*)Obj)->bBlendBool = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_bBlendBool = { "bBlendBool", nullptr, (EPropertyFlags)0x0020080000012015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimSharingTransitionInstance), &Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_bBlendBool_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_bBlendBool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_bBlendBool_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_FromComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_ToComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_BlendTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_bBlendBool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimSharingTransitionInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::ClassParams = {
		&UAnimSharingTransitionInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimSharingTransitionInstance()
	{
		if (!Z_Registration_Info_UClass_UAnimSharingTransitionInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimSharingTransitionInstance.OuterSingleton, Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimSharingTransitionInstance.OuterSingleton;
	}
	template<> ANIMATIONSHARING_API UClass* StaticClass<UAnimSharingTransitionInstance>()
	{
		return UAnimSharingTransitionInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimSharingTransitionInstance);
	UAnimSharingTransitionInstance::~UAnimSharingTransitionInstance() {}
	void UAnimSharingAdditiveInstance::StaticRegisterNativesUAnimSharingAdditiveInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimSharingAdditiveInstance);
	UClass* Z_Construct_UClass_UAnimSharingAdditiveInstance_NoRegister()
	{
		return UAnimSharingAdditiveInstance::StaticClass();
	}
	struct Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseComponent_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_BaseComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditiveAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_AdditiveAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStateBool_MetaData[];
#endif
		static void NewProp_bStateBool_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStateBool;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationSharing,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AnimationSharingInstances.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AnimationSharingInstances.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_BaseComponent_MetaData[] = {
		{ "Category", "Additive" },
		{ "ModuleRelativePath", "Public/AnimationSharingInstances.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_BaseComponent = { "BaseComponent", nullptr, (EPropertyFlags)0x002408000009201d, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimSharingAdditiveInstance, BaseComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_BaseComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_BaseComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_AdditiveAnimation_MetaData[] = {
		{ "Category", "Additive" },
		{ "ModuleRelativePath", "Public/AnimationSharingInstances.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_AdditiveAnimation = { "AdditiveAnimation", nullptr, (EPropertyFlags)0x0024080000012015, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimSharingAdditiveInstance, AdditiveAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_AdditiveAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_AdditiveAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "Additive" },
		{ "ModuleRelativePath", "Public/AnimationSharingInstances.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0020080000012015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimSharingAdditiveInstance, Alpha), METADATA_PARAMS(Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_bStateBool_MetaData[] = {
		{ "Category", "Additive" },
		{ "ModuleRelativePath", "Public/AnimationSharingInstances.h" },
	};
#endif
	void Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_bStateBool_SetBit(void* Obj)
	{
		((UAnimSharingAdditiveInstance*)Obj)->bStateBool = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_bStateBool = { "bStateBool", nullptr, (EPropertyFlags)0x0020080000012015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimSharingAdditiveInstance), &Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_bStateBool_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_bStateBool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_bStateBool_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_BaseComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_AdditiveAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_Alpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_bStateBool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimSharingAdditiveInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::ClassParams = {
		&UAnimSharingAdditiveInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimSharingAdditiveInstance()
	{
		if (!Z_Registration_Info_UClass_UAnimSharingAdditiveInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimSharingAdditiveInstance.OuterSingleton, Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimSharingAdditiveInstance.OuterSingleton;
	}
	template<> ANIMATIONSHARING_API UClass* StaticClass<UAnimSharingAdditiveInstance>()
	{
		return UAnimSharingAdditiveInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimSharingAdditiveInstance);
	UAnimSharingAdditiveInstance::~UAnimSharingAdditiveInstance() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimSharingStateInstance, UAnimSharingStateInstance::StaticClass, TEXT("UAnimSharingStateInstance"), &Z_Registration_Info_UClass_UAnimSharingStateInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimSharingStateInstance), 3984645935U) },
		{ Z_Construct_UClass_UAnimSharingTransitionInstance, UAnimSharingTransitionInstance::StaticClass, TEXT("UAnimSharingTransitionInstance"), &Z_Registration_Info_UClass_UAnimSharingTransitionInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimSharingTransitionInstance), 2190223138U) },
		{ Z_Construct_UClass_UAnimSharingAdditiveInstance, UAnimSharingAdditiveInstance::StaticClass, TEXT("UAnimSharingAdditiveInstance"), &Z_Registration_Info_UClass_UAnimSharingAdditiveInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimSharingAdditiveInstance), 2386465415U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_1136856286(TEXT("/Script/AnimationSharing"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingInstances_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
