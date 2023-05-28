// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationSharingManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationSharingManager() {}
// Cross Module References
	ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimationSharingManager();
	ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimationSharingManager_NoRegister();
	ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimationSharingSetup_NoRegister();
	ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimationSharingStateProcessor_NoRegister();
	ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimSharingInstance();
	ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimSharingInstance_NoRegister();
	ANIMATIONSHARING_API UScriptStruct* Z_Construct_UScriptStruct_FTickAnimationSharingFunction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTickFunction();
	UPackage* Z_Construct_UPackage__Script_AnimationSharing();
// End Cross Module References
	void UAnimSharingInstance::StaticRegisterNativesUAnimSharingInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimSharingInstance);
	UClass* Z_Construct_UClass_UAnimSharingInstance_NoRegister()
	{
		return UAnimSharingInstance::StaticClass();
	}
	struct Z_Construct_UClass_UAnimSharingInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RegisteredActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RegisteredActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateProcessor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StateProcessor;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UsedAnimationSequences_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UsedAnimationSequences_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UsedAnimationSequences;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateEnum_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StateEnum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SharingActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SharingActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimSharingInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationSharing,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSharingInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimationSharingManager.h" },
		{ "ModuleRelativePath", "Public/AnimationSharingManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_RegisteredActors_Inner = { "RegisteredActors", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_RegisteredActors_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** Actors currently registered to be animation driven by the AnimManager using this setup */" },
		{ "ModuleRelativePath", "Public/AnimationSharingManager.h" },
		{ "ToolTip", "Actors currently registered to be animation driven by the AnimManager using this setup" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_RegisteredActors = { "RegisteredActors", nullptr, (EPropertyFlags)0x0014000000022001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimSharingInstance, RegisteredActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_RegisteredActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_RegisteredActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_StateProcessor_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** (Blueprint)class instance used for determining the state enum value for each registered actor */" },
		{ "ModuleRelativePath", "Public/AnimationSharingManager.h" },
		{ "ToolTip", "(Blueprint)class instance used for determining the state enum value for each registered actor" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_StateProcessor = { "StateProcessor", nullptr, (EPropertyFlags)0x0014000000002001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimSharingInstance, StateProcessor), Z_Construct_UClass_UAnimationSharingStateProcessor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_StateProcessor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_StateProcessor_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_UsedAnimationSequences_Inner = { "UsedAnimationSequences", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_UsedAnimationSequences_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "ModuleRelativePath", "Public/AnimationSharingManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_UsedAnimationSequences = { "UsedAnimationSequences", nullptr, (EPropertyFlags)0x0014000000022001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimSharingInstance, UsedAnimationSequences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_UsedAnimationSequences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_UsedAnimationSequences_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_StateEnum_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** Enum class set up by the user to 'describe' the animation states */" },
		{ "ModuleRelativePath", "Public/AnimationSharingManager.h" },
		{ "ToolTip", "Enum class set up by the user to 'describe' the animation states" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_StateEnum = { "StateEnum", nullptr, (EPropertyFlags)0x0014000000022001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimSharingInstance, StateEnum), Z_Construct_UClass_UEnum, METADATA_PARAMS(Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_StateEnum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_StateEnum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_SharingActor_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** Actor to which all the running SkeletalMeshComponents used for the sharing are attached to */" },
		{ "ModuleRelativePath", "Public/AnimationSharingManager.h" },
		{ "ToolTip", "Actor to which all the running SkeletalMeshComponents used for the sharing are attached to" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_SharingActor = { "SharingActor", nullptr, (EPropertyFlags)0x0014000000022001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimSharingInstance, SharingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_SharingActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_SharingActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimSharingInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_RegisteredActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_RegisteredActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_StateProcessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_UsedAnimationSequences_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_UsedAnimationSequences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_StateEnum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_SharingActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimSharingInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimSharingInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimSharingInstance_Statics::ClassParams = {
		&UAnimSharingInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimSharingInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingInstance_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimSharingInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimSharingInstance()
	{
		if (!Z_Registration_Info_UClass_UAnimSharingInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimSharingInstance.OuterSingleton, Z_Construct_UClass_UAnimSharingInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimSharingInstance.OuterSingleton;
	}
	template<> ANIMATIONSHARING_API UClass* StaticClass<UAnimSharingInstance>()
	{
		return UAnimSharingInstance::StaticClass();
	}
	UAnimSharingInstance::UAnimSharingInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimSharingInstance);
	UAnimSharingInstance::~UAnimSharingInstance() {}

static_assert(std::is_polymorphic<FTickAnimationSharingFunction>() == std::is_polymorphic<FTickFunction>(), "USTRUCT FTickAnimationSharingFunction cannot be polymorphic unless super FTickFunction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TickAnimationSharingFunction;
class UScriptStruct* FTickAnimationSharingFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TickAnimationSharingFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TickAnimationSharingFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTickAnimationSharingFunction, (UObject*)Z_Construct_UPackage__Script_AnimationSharing(), TEXT("TickAnimationSharingFunction"));
	}
	return Z_Registration_Info_UScriptStruct_TickAnimationSharingFunction.OuterSingleton;
}
template<> ANIMATIONSHARING_API UScriptStruct* StaticStruct<FTickAnimationSharingFunction>()
{
	return FTickAnimationSharingFunction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTickAnimationSharingFunction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTickAnimationSharingFunction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimationSharingManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTickAnimationSharingFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTickAnimationSharingFunction>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTickAnimationSharingFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationSharing,
		Z_Construct_UScriptStruct_FTickFunction,
		&NewStructOps,
		"TickAnimationSharingFunction",
		sizeof(FTickAnimationSharingFunction),
		alignof(FTickAnimationSharingFunction),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTickAnimationSharingFunction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTickAnimationSharingFunction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTickAnimationSharingFunction()
	{
		if (!Z_Registration_Info_UScriptStruct_TickAnimationSharingFunction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TickAnimationSharingFunction.InnerSingleton, Z_Construct_UScriptStruct_FTickAnimationSharingFunction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TickAnimationSharingFunction.InnerSingleton;
	}
	DEFINE_FUNCTION(UAnimationSharingManager::execAnimationSharingEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAnimationSharingManager::AnimationSharingEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationSharingManager::execRegisterActorWithSkeletonBP)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_GET_OBJECT(USkeleton,Z_Param_SharingSkeleton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterActorWithSkeletonBP(Z_Param_InActor,Z_Param_SharingSkeleton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationSharingManager::execCreateAnimationSharingManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UAnimationSharingSetup,Z_Param_Setup);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAnimationSharingManager::CreateAnimationSharingManager(Z_Param_WorldContextObject,Z_Param_Setup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationSharingManager::execGetAnimationSharingManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimationSharingManager**)Z_Param__Result=UAnimationSharingManager::GetAnimationSharingManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void UAnimationSharingManager::StaticRegisterNativesUAnimationSharingManager()
	{
		UClass* Class = UAnimationSharingManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimationSharingEnabled", &UAnimationSharingManager::execAnimationSharingEnabled },
			{ "CreateAnimationSharingManager", &UAnimationSharingManager::execCreateAnimationSharingManager },
			{ "GetAnimationSharingManager", &UAnimationSharingManager::execGetAnimationSharingManager },
			{ "RegisterActorWithSkeletonBP", &UAnimationSharingManager::execRegisterActorWithSkeletonBP },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimationSharingManager_AnimationSharingEnabled_Statics
	{
		struct AnimationSharingManager_eventAnimationSharingEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAnimationSharingManager_AnimationSharingEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimationSharingManager_eventAnimationSharingEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationSharingManager_AnimationSharingEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimationSharingManager_eventAnimationSharingEnabled_Parms), &Z_Construct_UFunction_UAnimationSharingManager_AnimationSharingEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationSharingManager_AnimationSharingEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationSharingManager_AnimationSharingEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationSharingManager_AnimationSharingEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** Returns whether or not the animation sharing is enabled */" },
		{ "ModuleRelativePath", "Public/AnimationSharingManager.h" },
		{ "ToolTip", "Returns whether or not the animation sharing is enabled" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationSharingManager_AnimationSharingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationSharingManager, nullptr, "AnimationSharingEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationSharingManager_AnimationSharingEnabled_Statics::AnimationSharingManager_eventAnimationSharingEnabled_Parms), Z_Construct_UFunction_UAnimationSharingManager_AnimationSharingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationSharingManager_AnimationSharingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationSharingManager_AnimationSharingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationSharingManager_AnimationSharingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationSharingManager_AnimationSharingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationSharingManager_AnimationSharingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationSharingManager_CreateAnimationSharingManager_Statics
	{
		struct AnimationSharingManager_eventCreateAnimationSharingManager_Parms
		{
			UObject* WorldContextObject;
			const UAnimationSharingSetup* Setup;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Setup_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Setup;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationSharingManager_CreateAnimationSharingManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationSharingManager_eventCreateAnimationSharingManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationSharingManager_CreateAnimationSharingManager_Statics::NewProp_Setup_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationSharingManager_CreateAnimationSharingManager_Statics::NewProp_Setup = { "Setup", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationSharingManager_eventCreateAnimationSharingManager_Parms, Setup), Z_Construct_UClass_UAnimationSharingSetup_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationSharingManager_CreateAnimationSharingManager_Statics::NewProp_Setup_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationSharingManager_CreateAnimationSharingManager_Statics::NewProp_Setup_MetaData)) };
	void Z_Construct_UFunction_UAnimationSharingManager_CreateAnimationSharingManager_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimationSharingManager_eventCreateAnimationSharingManager_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationSharingManager_CreateAnimationSharingManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimationSharingManager_eventCreateAnimationSharingManager_Parms), &Z_Construct_UFunction_UAnimationSharingManager_CreateAnimationSharingManager_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationSharingManager_CreateAnimationSharingManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationSharingManager_CreateAnimationSharingManager_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationSharingManager_CreateAnimationSharingManager_Statics::NewProp_Setup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationSharingManager_CreateAnimationSharingManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationSharingManager_CreateAnimationSharingManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** Create an Animation Sharing Manager using the provided Setup */" },
		{ "ModuleRelativePath", "Public/AnimationSharingManager.h" },
		{ "ToolTip", "Create an Animation Sharing Manager using the provided Setup" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationSharingManager_CreateAnimationSharingManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationSharingManager, nullptr, "CreateAnimationSharingManager", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationSharingManager_CreateAnimationSharingManager_Statics::AnimationSharingManager_eventCreateAnimationSharingManager_Parms), Z_Construct_UFunction_UAnimationSharingManager_CreateAnimationSharingManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationSharingManager_CreateAnimationSharingManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationSharingManager_CreateAnimationSharingManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationSharingManager_CreateAnimationSharingManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationSharingManager_CreateAnimationSharingManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationSharingManager_CreateAnimationSharingManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationSharingManager_GetAnimationSharingManager_Statics
	{
		struct AnimationSharingManager_eventGetAnimationSharingManager_Parms
		{
			UObject* WorldContextObject;
			UAnimationSharingManager* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationSharingManager_GetAnimationSharingManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationSharingManager_eventGetAnimationSharingManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationSharingManager_GetAnimationSharingManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationSharingManager_eventGetAnimationSharingManager_Parms, ReturnValue), Z_Construct_UClass_UAnimationSharingManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationSharingManager_GetAnimationSharingManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationSharingManager_GetAnimationSharingManager_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationSharingManager_GetAnimationSharingManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationSharingManager_GetAnimationSharingManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** Returns the AnimationSharing Manager, nullptr if none was set up */" },
		{ "ModuleRelativePath", "Public/AnimationSharingManager.h" },
		{ "ToolTip", "Returns the AnimationSharing Manager, nullptr if none was set up" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationSharingManager_GetAnimationSharingManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationSharingManager, nullptr, "GetAnimationSharingManager", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationSharingManager_GetAnimationSharingManager_Statics::AnimationSharingManager_eventGetAnimationSharingManager_Parms), Z_Construct_UFunction_UAnimationSharingManager_GetAnimationSharingManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationSharingManager_GetAnimationSharingManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationSharingManager_GetAnimationSharingManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationSharingManager_GetAnimationSharingManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationSharingManager_GetAnimationSharingManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationSharingManager_GetAnimationSharingManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationSharingManager_RegisterActorWithSkeletonBP_Statics
	{
		struct AnimationSharingManager_eventRegisterActorWithSkeletonBP_Parms
		{
			AActor* InActor;
			const USkeleton* SharingSkeleton;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SharingSkeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SharingSkeleton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationSharingManager_RegisterActorWithSkeletonBP_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationSharingManager_eventRegisterActorWithSkeletonBP_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationSharingManager_RegisterActorWithSkeletonBP_Statics::NewProp_SharingSkeleton_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationSharingManager_RegisterActorWithSkeletonBP_Statics::NewProp_SharingSkeleton = { "SharingSkeleton", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationSharingManager_eventRegisterActorWithSkeletonBP_Parms, SharingSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationSharingManager_RegisterActorWithSkeletonBP_Statics::NewProp_SharingSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationSharingManager_RegisterActorWithSkeletonBP_Statics::NewProp_SharingSkeleton_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationSharingManager_RegisterActorWithSkeletonBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationSharingManager_RegisterActorWithSkeletonBP_Statics::NewProp_InActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationSharingManager_RegisterActorWithSkeletonBP_Statics::NewProp_SharingSkeleton,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationSharingManager_RegisterActorWithSkeletonBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** Register an Actor with this Animation Sharing manager, according to the SharingSkeleton */" },
		{ "DisplayName", "Register Actor" },
		{ "ModuleRelativePath", "Public/AnimationSharingManager.h" },
		{ "ToolTip", "Register an Actor with this Animation Sharing manager, according to the SharingSkeleton" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationSharingManager_RegisterActorWithSkeletonBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationSharingManager, nullptr, "RegisterActorWithSkeletonBP", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationSharingManager_RegisterActorWithSkeletonBP_Statics::AnimationSharingManager_eventRegisterActorWithSkeletonBP_Parms), Z_Construct_UFunction_UAnimationSharingManager_RegisterActorWithSkeletonBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationSharingManager_RegisterActorWithSkeletonBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationSharingManager_RegisterActorWithSkeletonBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationSharingManager_RegisterActorWithSkeletonBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationSharingManager_RegisterActorWithSkeletonBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationSharingManager_RegisterActorWithSkeletonBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationSharingManager);
	UClass* Z_Construct_UClass_UAnimationSharingManager_NoRegister()
	{
		return UAnimationSharingManager::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationSharingManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Skeletons_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skeletons_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Skeletons;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PerSkeletonData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerSkeletonData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PerSkeletonData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationSharingManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationSharing,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimationSharingManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimationSharingManager_AnimationSharingEnabled, "AnimationSharingEnabled" }, // 2916640041
		{ &Z_Construct_UFunction_UAnimationSharingManager_CreateAnimationSharingManager, "CreateAnimationSharingManager" }, // 1504855381
		{ &Z_Construct_UFunction_UAnimationSharingManager_GetAnimationSharingManager, "GetAnimationSharingManager" }, // 2729039818
		{ &Z_Construct_UFunction_UAnimationSharingManager_RegisterActorWithSkeletonBP, "RegisterActorWithSkeletonBP" }, // 3312683165
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSharingManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimationSharingManager.h" },
		{ "ModuleRelativePath", "Public/AnimationSharingManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimationSharingManager_Statics::NewProp_Skeletons_Inner = { "Skeletons", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSharingManager_Statics::NewProp_Skeletons_MetaData[] = {
		{ "Comment", "/** Array of unique skeletons, matches PerSkeletonData array entries*/" },
		{ "ModuleRelativePath", "Public/AnimationSharingManager.h" },
		{ "ToolTip", "Array of unique skeletons, matches PerSkeletonData array entries" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimationSharingManager_Statics::NewProp_Skeletons = { "Skeletons", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationSharingManager, Skeletons), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimationSharingManager_Statics::NewProp_Skeletons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSharingManager_Statics::NewProp_Skeletons_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimationSharingManager_Statics::NewProp_PerSkeletonData_Inner = { "PerSkeletonData", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAnimSharingInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSharingManager_Statics::NewProp_PerSkeletonData_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** Sharing data required for the unique Skeleton setups */" },
		{ "ModuleRelativePath", "Public/AnimationSharingManager.h" },
		{ "ToolTip", "Sharing data required for the unique Skeleton setups" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimationSharingManager_Statics::NewProp_PerSkeletonData = { "PerSkeletonData", nullptr, (EPropertyFlags)0x0024080000022001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationSharingManager, PerSkeletonData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimationSharingManager_Statics::NewProp_PerSkeletonData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSharingManager_Statics::NewProp_PerSkeletonData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationSharingManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSharingManager_Statics::NewProp_Skeletons_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSharingManager_Statics::NewProp_Skeletons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSharingManager_Statics::NewProp_PerSkeletonData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSharingManager_Statics::NewProp_PerSkeletonData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationSharingManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationSharingManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationSharingManager_Statics::ClassParams = {
		&UAnimationSharingManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAnimationSharingManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSharingManager_Statics::PropPointers),
		0,
		0x001000A2u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimationSharingManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSharingManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationSharingManager()
	{
		if (!Z_Registration_Info_UClass_UAnimationSharingManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationSharingManager.OuterSingleton, Z_Construct_UClass_UAnimationSharingManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimationSharingManager.OuterSingleton;
	}
	template<> ANIMATIONSHARING_API UClass* StaticClass<UAnimationSharingManager>()
	{
		return UAnimationSharingManager::StaticClass();
	}
	UAnimationSharingManager::UAnimationSharingManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationSharingManager);
	UAnimationSharingManager::~UAnimationSharingManager() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_Statics::ScriptStructInfo[] = {
		{ FTickAnimationSharingFunction::StaticStruct, Z_Construct_UScriptStruct_FTickAnimationSharingFunction_Statics::NewStructOps, TEXT("TickAnimationSharingFunction"), &Z_Registration_Info_UScriptStruct_TickAnimationSharingFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTickAnimationSharingFunction), 2417942915U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimSharingInstance, UAnimSharingInstance::StaticClass, TEXT("UAnimSharingInstance"), &Z_Registration_Info_UClass_UAnimSharingInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimSharingInstance), 664484571U) },
		{ Z_Construct_UClass_UAnimationSharingManager, UAnimationSharingManager::StaticClass, TEXT("UAnimationSharingManager"), &Z_Registration_Info_UClass_UAnimationSharingManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationSharingManager), 1158505476U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_3398720163(TEXT("/Script/AnimationSharing"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
