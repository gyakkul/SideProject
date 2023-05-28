// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "../../Source/Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyEventReference();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBranchingPointNotifyPayload();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BranchingPointNotifyPayload;
class UScriptStruct* FBranchingPointNotifyPayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BranchingPointNotifyPayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BranchingPointNotifyPayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBranchingPointNotifyPayload, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BranchingPointNotifyPayload"));
	}
	return Z_Registration_Info_UScriptStruct_BranchingPointNotifyPayload.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBranchingPointNotifyPayload>()
{
	return FBranchingPointNotifyPayload::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBranchingPointNotifyPayload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBranchingPointNotifyPayload_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBranchingPointNotifyPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBranchingPointNotifyPayload>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBranchingPointNotifyPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BranchingPointNotifyPayload",
		sizeof(FBranchingPointNotifyPayload),
		alignof(FBranchingPointNotifyPayload),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBranchingPointNotifyPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBranchingPointNotifyPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBranchingPointNotifyPayload()
	{
		if (!Z_Registration_Info_UScriptStruct_BranchingPointNotifyPayload.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BranchingPointNotifyPayload.InnerSingleton, Z_Construct_UScriptStruct_FBranchingPointNotifyPayload_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BranchingPointNotifyPayload.InnerSingleton;
	}
	DEFINE_FUNCTION(UAnimNotify::execGetDefaultTriggerWeightThreshold)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDefaultTriggerWeightThreshold_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimNotify::execGetNotifyName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetNotifyName_Implementation();
		P_NATIVE_END;
	}
	struct AnimNotify_eventGetDefaultTriggerWeightThreshold_Parms
	{
		float ReturnValue;

		/** Constructor, initializes return property only **/
		AnimNotify_eventGetDefaultTriggerWeightThreshold_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct AnimNotify_eventGetNotifyName_Parms
	{
		FString ReturnValue;
	};
	struct AnimNotify_eventReceived_Notify_Parms
	{
		USkeletalMeshComponent* MeshComp;
		UAnimSequenceBase* Animation;
		FAnimNotifyEventReference EventReference;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		AnimNotify_eventReceived_Notify_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UAnimNotify_GetDefaultTriggerWeightThreshold = FName(TEXT("GetDefaultTriggerWeightThreshold"));
	float UAnimNotify::GetDefaultTriggerWeightThreshold() const
	{
		AnimNotify_eventGetDefaultTriggerWeightThreshold_Parms Parms;
		const_cast<UAnimNotify*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAnimNotify_GetDefaultTriggerWeightThreshold),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UAnimNotify_GetNotifyName = FName(TEXT("GetNotifyName"));
	FString UAnimNotify::GetNotifyName() const
	{
		AnimNotify_eventGetNotifyName_Parms Parms;
		const_cast<UAnimNotify*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAnimNotify_GetNotifyName),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UAnimNotify_Received_Notify = FName(TEXT("Received_Notify"));
	bool UAnimNotify::Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, FAnimNotifyEventReference const& EventReference) const
	{
		AnimNotify_eventReceived_Notify_Parms Parms;
		Parms.MeshComp=MeshComp;
		Parms.Animation=Animation;
		Parms.EventReference=EventReference;
		const_cast<UAnimNotify*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAnimNotify_Received_Notify),&Parms);
		return !!Parms.ReturnValue;
	}
	void UAnimNotify::StaticRegisterNativesUAnimNotify()
	{
		UClass* Class = UAnimNotify::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDefaultTriggerWeightThreshold", &UAnimNotify::execGetDefaultTriggerWeightThreshold },
			{ "GetNotifyName", &UAnimNotify::execGetNotifyName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimNotify_GetDefaultTriggerWeightThreshold_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimNotify_GetDefaultTriggerWeightThreshold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotify_eventGetDefaultTriggerWeightThreshold_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotify_GetDefaultTriggerWeightThreshold_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotify_GetDefaultTriggerWeightThreshold_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotify_GetDefaultTriggerWeightThreshold_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** TriggerWeightThreshold to use when creating notifies of this type */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify.h" },
		{ "ToolTip", "TriggerWeightThreshold to use when creating notifies of this type" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotify_GetDefaultTriggerWeightThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotify, nullptr, "GetDefaultTriggerWeightThreshold", nullptr, nullptr, sizeof(AnimNotify_eventGetDefaultTriggerWeightThreshold_Parms), Z_Construct_UFunction_UAnimNotify_GetDefaultTriggerWeightThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotify_GetDefaultTriggerWeightThreshold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotify_GetDefaultTriggerWeightThreshold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotify_GetDefaultTriggerWeightThreshold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimNotify_GetDefaultTriggerWeightThreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNotify_GetDefaultTriggerWeightThreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimNotify_GetNotifyName_Statics
	{
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnimNotify_GetNotifyName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotify_eventGetNotifyName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotify_GetNotifyName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotify_GetNotifyName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotify_GetNotifyName_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** \n\x09 * Implementable event to get a custom name for the notify\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify.h" },
		{ "ToolTip", "Implementable event to get a custom name for the notify" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotify_GetNotifyName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotify, nullptr, "GetNotifyName", nullptr, nullptr, sizeof(AnimNotify_eventGetNotifyName_Parms), Z_Construct_UFunction_UAnimNotify_GetNotifyName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotify_GetNotifyName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotify_GetNotifyName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotify_GetNotifyName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimNotify_GetNotifyName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNotify_GetNotifyName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimNotify_Received_Notify_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Animation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventReference_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventReference;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotify_Received_Notify_Statics::NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotify_Received_Notify_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotify_eventReceived_Notify_Parms, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotify_Received_Notify_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotify_Received_Notify_Statics::NewProp_MeshComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotify_Received_Notify_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotify_eventReceived_Notify_Parms, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotify_Received_Notify_Statics::NewProp_EventReference_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimNotify_Received_Notify_Statics::NewProp_EventReference = { "EventReference", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotify_eventReceived_Notify_Parms, EventReference), Z_Construct_UScriptStruct_FAnimNotifyEventReference, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotify_Received_Notify_Statics::NewProp_EventReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotify_Received_Notify_Statics::NewProp_EventReference_MetaData)) }; // 1168965002
	void Z_Construct_UFunction_UAnimNotify_Received_Notify_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimNotify_eventReceived_Notify_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimNotify_Received_Notify_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimNotify_eventReceived_Notify_Parms), &Z_Construct_UFunction_UAnimNotify_Received_Notify_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotify_Received_Notify_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotify_Received_Notify_Statics::NewProp_MeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotify_Received_Notify_Statics::NewProp_Animation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotify_Received_Notify_Statics::NewProp_EventReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotify_Received_Notify_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotify_Received_Notify_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "EventReference" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotify_Received_Notify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotify, nullptr, "Received_Notify", nullptr, nullptr, sizeof(AnimNotify_eventReceived_Notify_Parms), Z_Construct_UFunction_UAnimNotify_Received_Notify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotify_Received_Notify_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotify_Received_Notify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotify_Received_Notify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimNotify_Received_Notify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNotify_Received_Notify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotify);
	UClass* Z_Construct_UClass_UAnimNotify_NoRegister()
	{
		return UAnimNotify::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotifyColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NotifyColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldFireInEditor_MetaData[];
#endif
		static void NewProp_bShouldFireInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldFireInEditor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimNotify_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimNotify_GetDefaultTriggerWeightThreshold, "GetDefaultTriggerWeightThreshold" }, // 3451536154
		{ &Z_Construct_UFunction_UAnimNotify_GetNotifyName, "GetNotifyName" }, // 3848280355
		{ &Z_Construct_UFunction_UAnimNotify_Received_Notify, "Received_Notify" }, // 2094534326
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AnimNotifies/AnimNotify.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_Statics::NewProp_NotifyColor_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "/** Color of Notify in editor */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify.h" },
		{ "ToolTip", "Color of Notify in editor" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotify_Statics::NewProp_NotifyColor = { "NotifyColor", nullptr, (EPropertyFlags)0x0010000800000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotify, NotifyColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_Statics::NewProp_NotifyColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_Statics::NewProp_NotifyColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_Statics::NewProp_bShouldFireInEditor_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "/** Whether this notify instance should fire in animation editors */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify.h" },
		{ "ToolTip", "Whether this notify instance should fire in animation editors" },
	};
#endif
	void Z_Construct_UClass_UAnimNotify_Statics::NewProp_bShouldFireInEditor_SetBit(void* Obj)
	{
		((UAnimNotify*)Obj)->bShouldFireInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotify_Statics::NewProp_bShouldFireInEditor = { "bShouldFireInEditor", nullptr, (EPropertyFlags)0x0010040800000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimNotify), &Z_Construct_UClass_UAnimNotify_Statics::NewProp_bShouldFireInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_Statics::NewProp_bShouldFireInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_Statics::NewProp_bShouldFireInEditor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotify_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Statics::NewProp_NotifyColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Statics::NewProp_bShouldFireInEditor,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_Statics::ClassParams = {
		&UAnimNotify::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UAnimNotify_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_Statics::PropPointers), 0),
		0,
		0x001120A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotify()
	{
		if (!Z_Registration_Info_UClass_UAnimNotify.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify.OuterSingleton, Z_Construct_UClass_UAnimNotify_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNotify.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAnimNotify>()
	{
		return UAnimNotify::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify);
	UAnimNotify::~UAnimNotify() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_Statics::ScriptStructInfo[] = {
		{ FBranchingPointNotifyPayload::StaticStruct, Z_Construct_UScriptStruct_FBranchingPointNotifyPayload_Statics::NewStructOps, TEXT("BranchingPointNotifyPayload"), &Z_Registration_Info_UScriptStruct_BranchingPointNotifyPayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBranchingPointNotifyPayload), 3465490004U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify, UAnimNotify::StaticClass, TEXT("UAnimNotify"), &Z_Registration_Info_UClass_UAnimNotify, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify), 611687760U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_3497253674(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
