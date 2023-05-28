// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContextualAnimUtilities.h"
#include "ContextualAnimTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContextualAnimUtilities() {}
// Cross Module References
	CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSceneAsset_NoRegister();
	CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimUtilities();
	CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimUtilities_NoRegister();
	CONTEXTUALANIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimSceneBinding();
	CONTEXTUALANIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext();
	CONTEXTUALANIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimSceneBindings();
	CONTEXTUALANIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimSetPivot();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ContextualAnimation();
// End Cross Module References
	DEFINE_FUNCTION(UContextualAnimUtilities::execBP_SceneBinding_GetSkeletalMesh)
	{
		P_GET_STRUCT_REF(FContextualAnimSceneBinding,Z_Param_Out_Binding);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=UContextualAnimUtilities::BP_SceneBinding_GetSkeletalMesh(Z_Param_Out_Binding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextualAnimUtilities::execBP_SceneBinding_GetActor)
	{
		P_GET_STRUCT_REF(FContextualAnimSceneBinding,Z_Param_Out_Binding);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=UContextualAnimUtilities::BP_SceneBinding_GetActor(Z_Param_Out_Binding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextualAnimUtilities::execBP_SceneBindingContext_GetVelocity)
	{
		P_GET_STRUCT_REF(FContextualAnimSceneBindingContext,Z_Param_Out_BindingContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UContextualAnimUtilities::BP_SceneBindingContext_GetVelocity(Z_Param_Out_BindingContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextualAnimUtilities::execBP_SceneBindingContext_GetTransform)
	{
		P_GET_STRUCT_REF(FContextualAnimSceneBindingContext,Z_Param_Out_BindingContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UContextualAnimUtilities::BP_SceneBindingContext_GetTransform(Z_Param_Out_BindingContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextualAnimUtilities::execBP_SceneBindingContext_GetActor)
	{
		P_GET_STRUCT_REF(FContextualAnimSceneBindingContext,Z_Param_Out_BindingContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=UContextualAnimUtilities::BP_SceneBindingContext_GetActor(Z_Param_Out_BindingContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextualAnimUtilities::execBP_SceneBindingContext_MakeFromActorWithExternalTransform)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT(FTransform,Z_Param_ExternalTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FContextualAnimSceneBindingContext*)Z_Param__Result=UContextualAnimUtilities::BP_SceneBindingContext_MakeFromActorWithExternalTransform(Z_Param_Actor,Z_Param_ExternalTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextualAnimUtilities::execBP_SceneBindingContext_MakeFromActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FContextualAnimSceneBindingContext*)Z_Param__Result=UContextualAnimUtilities::BP_SceneBindingContext_MakeFromActor(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextualAnimUtilities::execBP_SceneBindings_GetAlignmentTransformFromBinding)
	{
		P_GET_STRUCT_REF(FContextualAnimSceneBindings,Z_Param_Out_Bindings);
		P_GET_STRUCT_REF(FContextualAnimSceneBinding,Z_Param_Out_Binding);
		P_GET_STRUCT_REF(FContextualAnimSetPivot,Z_Param_Out_Pivot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UContextualAnimUtilities::BP_SceneBindings_GetAlignmentTransformFromBinding(Z_Param_Out_Bindings,Z_Param_Out_Binding,Z_Param_Out_Pivot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextualAnimUtilities::execBP_SceneBindings_GetAlignmentTransformForRoleRelativeToPivot)
	{
		P_GET_STRUCT_REF(FContextualAnimSceneBindings,Z_Param_Out_Bindings);
		P_GET_PROPERTY(FNameProperty,Z_Param_Role);
		P_GET_STRUCT_REF(FContextualAnimSetPivot,Z_Param_Out_Pivot);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UContextualAnimUtilities::BP_SceneBindings_GetAlignmentTransformForRoleRelativeToPivot(Z_Param_Out_Bindings,Z_Param_Role,Z_Param_Out_Pivot,Z_Param_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextualAnimUtilities::execBP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole)
	{
		P_GET_STRUCT_REF(FContextualAnimSceneBindings,Z_Param_Out_Bindings);
		P_GET_PROPERTY(FNameProperty,Z_Param_Role);
		P_GET_PROPERTY(FNameProperty,Z_Param_RelativeToRole);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UContextualAnimUtilities::BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole(Z_Param_Out_Bindings,Z_Param_Role,Z_Param_RelativeToRole,Z_Param_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextualAnimUtilities::execBP_SceneBindings_GetSectionAndAnimSetIndices)
	{
		P_GET_STRUCT_REF(FContextualAnimSceneBindings,Z_Param_Out_Bindings);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SectionIdx);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AnimSetIdx);
		P_FINISH;
		P_NATIVE_BEGIN;
		UContextualAnimUtilities::BP_SceneBindings_GetSectionAndAnimSetIndices(Z_Param_Out_Bindings,Z_Param_Out_SectionIdx,Z_Param_Out_AnimSetIdx);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextualAnimUtilities::execBP_SceneBindings_GetSceneAsset)
	{
		P_GET_STRUCT_REF(FContextualAnimSceneBindings,Z_Param_Out_Bindings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const UContextualAnimSceneAsset**)Z_Param__Result=UContextualAnimUtilities::BP_SceneBindings_GetSceneAsset(Z_Param_Out_Bindings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextualAnimUtilities::execBP_SceneBinding_GetRoleFromBinding)
	{
		P_GET_STRUCT_REF(FContextualAnimSceneBindings,Z_Param_Out_Bindings);
		P_GET_STRUCT_REF(FContextualAnimSceneBinding,Z_Param_Out_Binding);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UContextualAnimUtilities::BP_SceneBinding_GetRoleFromBinding(Z_Param_Out_Bindings,Z_Param_Out_Binding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextualAnimUtilities::execBP_SceneBinding_GetAnimationFromBinding)
	{
		P_GET_STRUCT_REF(FContextualAnimSceneBindings,Z_Param_Out_Bindings);
		P_GET_STRUCT_REF(FContextualAnimSceneBinding,Z_Param_Out_Binding);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const UAnimSequenceBase**)Z_Param__Result=UContextualAnimUtilities::BP_SceneBinding_GetAnimationFromBinding(Z_Param_Out_Bindings,Z_Param_Out_Binding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextualAnimUtilities::execBP_SceneBindings_GetBindingByActor)
	{
		P_GET_STRUCT_REF(FContextualAnimSceneBindings,Z_Param_Out_Bindings);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FContextualAnimSceneBinding*)Z_Param__Result=UContextualAnimUtilities::BP_SceneBindings_GetBindingByActor(Z_Param_Out_Bindings,Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextualAnimUtilities::execBP_SceneBindings_GetBindingByRole)
	{
		P_GET_STRUCT_REF(FContextualAnimSceneBindings,Z_Param_Out_Bindings);
		P_GET_PROPERTY(FNameProperty,Z_Param_Role);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FContextualAnimSceneBinding*)Z_Param__Result=UContextualAnimUtilities::BP_SceneBindings_GetBindingByRole(Z_Param_Out_Bindings,Z_Param_Role);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextualAnimUtilities::execBP_SceneBindings_GetBindings)
	{
		P_GET_STRUCT_REF(FContextualAnimSceneBindings,Z_Param_Out_Bindings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FContextualAnimSceneBinding>*)Z_Param__Result=UContextualAnimUtilities::BP_SceneBindings_GetBindings(Z_Param_Out_Bindings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextualAnimUtilities::execBP_SceneBindings_AddOrUpdateWarpTargetsForBindings)
	{
		P_GET_STRUCT_REF(FContextualAnimSceneBindings,Z_Param_Out_Bindings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UContextualAnimUtilities::BP_SceneBindings_AddOrUpdateWarpTargetsForBindings(Z_Param_Out_Bindings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextualAnimUtilities::execBP_SceneBindings_CalculateAnimSetPivots)
	{
		P_GET_STRUCT_REF(FContextualAnimSceneBindings,Z_Param_Out_Bindings);
		P_GET_TARRAY_REF(FContextualAnimSetPivot,Z_Param_Out_OutPivots);
		P_FINISH;
		P_NATIVE_BEGIN;
		UContextualAnimUtilities::BP_SceneBindings_CalculateAnimSetPivots(Z_Param_Out_Bindings,Z_Param_Out_OutPivots);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextualAnimUtilities::execBP_Montage_GetSectionLength)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UContextualAnimUtilities::BP_Montage_GetSectionLength(Z_Param_Montage,Z_Param_SectionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextualAnimUtilities::execBP_Montage_GetSectionTimeLeftFromPos)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Position);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UContextualAnimUtilities::BP_Montage_GetSectionTimeLeftFromPos(Z_Param_Montage,Z_Param_Position);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextualAnimUtilities::execBP_Montage_GetSectionStartAndEndTime)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutStartTime);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutEndTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		UContextualAnimUtilities::BP_Montage_GetSectionStartAndEndTime(Z_Param_Montage,Z_Param_SectionIndex,Z_Param_Out_OutStartTime,Z_Param_Out_OutEndTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextualAnimUtilities::execBP_CreateContextualAnimSceneBindingsForTwoActors)
	{
		P_GET_OBJECT(UContextualAnimSceneAsset,Z_Param_SceneAsset);
		P_GET_STRUCT_REF(FContextualAnimSceneBindingContext,Z_Param_Out_Primary);
		P_GET_STRUCT_REF(FContextualAnimSceneBindingContext,Z_Param_Out_Secondary);
		P_GET_STRUCT_REF(FContextualAnimSceneBindings,Z_Param_Out_OutBindings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UContextualAnimUtilities::BP_CreateContextualAnimSceneBindingsForTwoActors(Z_Param_SceneAsset,Z_Param_Out_Primary,Z_Param_Out_Secondary,Z_Param_Out_OutBindings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextualAnimUtilities::execBP_CreateContextualAnimSceneBindings)
	{
		P_GET_OBJECT(UContextualAnimSceneAsset,Z_Param_SceneAsset);
		P_GET_TMAP_REF(FName,FContextualAnimSceneBindingContext,Z_Param_Out_Params);
		P_GET_STRUCT_REF(FContextualAnimSceneBindings,Z_Param_Out_OutBindings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UContextualAnimUtilities::BP_CreateContextualAnimSceneBindings(Z_Param_SceneAsset,Z_Param_Out_Params,Z_Param_Out_OutBindings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextualAnimUtilities::execBP_DrawDebugPose)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_Animation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_GET_STRUCT(FTransform,Z_Param_LocalToWorldTransform);
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LifeTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
		P_FINISH;
		P_NATIVE_BEGIN;
		UContextualAnimUtilities::BP_DrawDebugPose(Z_Param_WorldContextObject,Z_Param_Animation,Z_Param_Time,Z_Param_LocalToWorldTransform,Z_Param_Color,Z_Param_LifeTime,Z_Param_Thickness);
		P_NATIVE_END;
	}
	void UContextualAnimUtilities::StaticRegisterNativesUContextualAnimUtilities()
	{
		UClass* Class = UContextualAnimUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BP_CreateContextualAnimSceneBindings", &UContextualAnimUtilities::execBP_CreateContextualAnimSceneBindings },
			{ "BP_CreateContextualAnimSceneBindingsForTwoActors", &UContextualAnimUtilities::execBP_CreateContextualAnimSceneBindingsForTwoActors },
			{ "BP_DrawDebugPose", &UContextualAnimUtilities::execBP_DrawDebugPose },
			{ "BP_Montage_GetSectionLength", &UContextualAnimUtilities::execBP_Montage_GetSectionLength },
			{ "BP_Montage_GetSectionStartAndEndTime", &UContextualAnimUtilities::execBP_Montage_GetSectionStartAndEndTime },
			{ "BP_Montage_GetSectionTimeLeftFromPos", &UContextualAnimUtilities::execBP_Montage_GetSectionTimeLeftFromPos },
			{ "BP_SceneBinding_GetActor", &UContextualAnimUtilities::execBP_SceneBinding_GetActor },
			{ "BP_SceneBinding_GetAnimationFromBinding", &UContextualAnimUtilities::execBP_SceneBinding_GetAnimationFromBinding },
			{ "BP_SceneBinding_GetRoleFromBinding", &UContextualAnimUtilities::execBP_SceneBinding_GetRoleFromBinding },
			{ "BP_SceneBinding_GetSkeletalMesh", &UContextualAnimUtilities::execBP_SceneBinding_GetSkeletalMesh },
			{ "BP_SceneBindingContext_GetActor", &UContextualAnimUtilities::execBP_SceneBindingContext_GetActor },
			{ "BP_SceneBindingContext_GetTransform", &UContextualAnimUtilities::execBP_SceneBindingContext_GetTransform },
			{ "BP_SceneBindingContext_GetVelocity", &UContextualAnimUtilities::execBP_SceneBindingContext_GetVelocity },
			{ "BP_SceneBindingContext_MakeFromActor", &UContextualAnimUtilities::execBP_SceneBindingContext_MakeFromActor },
			{ "BP_SceneBindingContext_MakeFromActorWithExternalTransform", &UContextualAnimUtilities::execBP_SceneBindingContext_MakeFromActorWithExternalTransform },
			{ "BP_SceneBindings_AddOrUpdateWarpTargetsForBindings", &UContextualAnimUtilities::execBP_SceneBindings_AddOrUpdateWarpTargetsForBindings },
			{ "BP_SceneBindings_CalculateAnimSetPivots", &UContextualAnimUtilities::execBP_SceneBindings_CalculateAnimSetPivots },
			{ "BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole", &UContextualAnimUtilities::execBP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole },
			{ "BP_SceneBindings_GetAlignmentTransformForRoleRelativeToPivot", &UContextualAnimUtilities::execBP_SceneBindings_GetAlignmentTransformForRoleRelativeToPivot },
			{ "BP_SceneBindings_GetAlignmentTransformFromBinding", &UContextualAnimUtilities::execBP_SceneBindings_GetAlignmentTransformFromBinding },
			{ "BP_SceneBindings_GetBindingByActor", &UContextualAnimUtilities::execBP_SceneBindings_GetBindingByActor },
			{ "BP_SceneBindings_GetBindingByRole", &UContextualAnimUtilities::execBP_SceneBindings_GetBindingByRole },
			{ "BP_SceneBindings_GetBindings", &UContextualAnimUtilities::execBP_SceneBindings_GetBindings },
			{ "BP_SceneBindings_GetSceneAsset", &UContextualAnimUtilities::execBP_SceneBindings_GetSceneAsset },
			{ "BP_SceneBindings_GetSectionAndAnimSetIndices", &UContextualAnimUtilities::execBP_SceneBindings_GetSectionAndAnimSetIndices },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindings_Statics
	{
		struct ContextualAnimUtilities_eventBP_CreateContextualAnimSceneBindings_Parms
		{
			const UContextualAnimSceneAsset* SceneAsset;
			TMap<FName,FContextualAnimSceneBindingContext> Params;
			FContextualAnimSceneBindings OutBindings;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneAsset;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Params_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Params;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutBindings;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindings_Statics::NewProp_SceneAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindings_Statics::NewProp_SceneAsset = { "SceneAsset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_CreateContextualAnimSceneBindings_Parms, SceneAsset), Z_Construct_UClass_UContextualAnimSceneAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindings_Statics::NewProp_SceneAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindings_Statics::NewProp_SceneAsset_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindings_Statics::NewProp_Params_ValueProp = { "Params", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext, METADATA_PARAMS(nullptr, 0) }; // 2634761810
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindings_Statics::NewProp_Params_Key_KeyProp = { "Params_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindings_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindings_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_CreateContextualAnimSceneBindings_Parms, Params), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindings_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindings_Statics::NewProp_Params_MetaData)) }; // 2634761810
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindings_Statics::NewProp_OutBindings = { "OutBindings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_CreateContextualAnimSceneBindings_Parms, OutBindings), Z_Construct_UScriptStruct_FContextualAnimSceneBindings, METADATA_PARAMS(nullptr, 0) }; // 1321072697
	void Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ContextualAnimUtilities_eventBP_CreateContextualAnimSceneBindings_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ContextualAnimUtilities_eventBP_CreateContextualAnimSceneBindings_Parms), &Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindings_Statics::NewProp_SceneAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindings_Statics::NewProp_Params_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindings_Statics::NewProp_Params_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindings_Statics::NewProp_Params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindings_Statics::NewProp_OutBindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Contextual Anim|Scene Asset" },
		{ "DisplayName", "Create Contextual Anim Scene Bindings" },
		{ "ModuleRelativePath", "Public/ContextualAnimUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimUtilities, nullptr, "BP_CreateContextualAnimSceneBindings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindings_Statics::ContextualAnimUtilities_eventBP_CreateContextualAnimSceneBindings_Parms), Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors_Statics
	{
		struct ContextualAnimUtilities_eventBP_CreateContextualAnimSceneBindingsForTwoActors_Parms
		{
			const UContextualAnimSceneAsset* SceneAsset;
			FContextualAnimSceneBindingContext Primary;
			FContextualAnimSceneBindingContext Secondary;
			FContextualAnimSceneBindings OutBindings;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Primary_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Primary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Secondary_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Secondary;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutBindings;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors_Statics::NewProp_SceneAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors_Statics::NewProp_SceneAsset = { "SceneAsset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_CreateContextualAnimSceneBindingsForTwoActors_Parms, SceneAsset), Z_Construct_UClass_UContextualAnimSceneAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors_Statics::NewProp_SceneAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors_Statics::NewProp_SceneAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors_Statics::NewProp_Primary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors_Statics::NewProp_Primary = { "Primary", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_CreateContextualAnimSceneBindingsForTwoActors_Parms, Primary), Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors_Statics::NewProp_Primary_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors_Statics::NewProp_Primary_MetaData)) }; // 2634761810
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors_Statics::NewProp_Secondary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors_Statics::NewProp_Secondary = { "Secondary", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_CreateContextualAnimSceneBindingsForTwoActors_Parms, Secondary), Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors_Statics::NewProp_Secondary_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors_Statics::NewProp_Secondary_MetaData)) }; // 2634761810
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors_Statics::NewProp_OutBindings = { "OutBindings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_CreateContextualAnimSceneBindingsForTwoActors_Parms, OutBindings), Z_Construct_UScriptStruct_FContextualAnimSceneBindings, METADATA_PARAMS(nullptr, 0) }; // 1321072697
	void Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ContextualAnimUtilities_eventBP_CreateContextualAnimSceneBindingsForTwoActors_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ContextualAnimUtilities_eventBP_CreateContextualAnimSceneBindingsForTwoActors_Parms), &Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors_Statics::NewProp_SceneAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors_Statics::NewProp_Primary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors_Statics::NewProp_Secondary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors_Statics::NewProp_OutBindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Contextual Anim|Scene Asset" },
		{ "DisplayName", "Create Contextual Anim Scene Bindings For Two Actors" },
		{ "ModuleRelativePath", "Public/ContextualAnimUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimUtilities, nullptr, "BP_CreateContextualAnimSceneBindingsForTwoActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors_Statics::ContextualAnimUtilities_eventBP_CreateContextualAnimSceneBindingsForTwoActors_Parms), Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextualAnimUtilities_BP_DrawDebugPose_Statics
	{
		struct ContextualAnimUtilities_eventBP_DrawDebugPose_Parms
		{
			const UObject* WorldContextObject;
			const UAnimSequenceBase* Animation;
			float Time;
			FTransform LocalToWorldTransform;
			FLinearColor Color;
			float LifeTime;
			float Thickness;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Animation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalToWorldTransform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LifeTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_DrawDebugPose_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_DrawDebugPose_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_DrawDebugPose_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_DrawDebugPose_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_DrawDebugPose_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_DrawDebugPose_Statics::NewProp_Animation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_DrawDebugPose_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_DrawDebugPose_Parms, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_DrawDebugPose_Statics::NewProp_Animation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_DrawDebugPose_Statics::NewProp_Animation_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_DrawDebugPose_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_DrawDebugPose_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_DrawDebugPose_Statics::NewProp_LocalToWorldTransform = { "LocalToWorldTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_DrawDebugPose_Parms, LocalToWorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_DrawDebugPose_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_DrawDebugPose_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_DrawDebugPose_Statics::NewProp_LifeTime = { "LifeTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_DrawDebugPose_Parms, LifeTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_DrawDebugPose_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_DrawDebugPose_Parms, Thickness), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimUtilities_BP_DrawDebugPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_DrawDebugPose_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_DrawDebugPose_Statics::NewProp_Animation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_DrawDebugPose_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_DrawDebugPose_Statics::NewProp_LocalToWorldTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_DrawDebugPose_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_DrawDebugPose_Statics::NewProp_LifeTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_DrawDebugPose_Statics::NewProp_Thickness,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_DrawDebugPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "Contextual Anim|Utilities" },
		{ "DisplayName", "Draw Debug Pose" },
		{ "ModuleRelativePath", "Public/ContextualAnimUtilities.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimUtilities_BP_DrawDebugPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimUtilities, nullptr, "BP_DrawDebugPose", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimUtilities_BP_DrawDebugPose_Statics::ContextualAnimUtilities_eventBP_DrawDebugPose_Parms), Z_Construct_UFunction_UContextualAnimUtilities_BP_DrawDebugPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_DrawDebugPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_DrawDebugPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_DrawDebugPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimUtilities_BP_DrawDebugPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimUtilities_BP_DrawDebugPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionLength_Statics
	{
		struct ContextualAnimUtilities_eventBP_Montage_GetSectionLength_Parms
		{
			const UAnimMontage* Montage;
			int32 SectionIndex;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionLength_Statics::NewProp_Montage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionLength_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_Montage_GetSectionLength_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionLength_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionLength_Statics::NewProp_Montage_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionLength_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_Montage_GetSectionLength_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_Montage_GetSectionLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionLength_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionLength_Statics::NewProp_SectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Contextual Anim|Utilities" },
		{ "DisplayName", "GetSectionLength" },
		{ "ModuleRelativePath", "Public/ContextualAnimUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimUtilities, nullptr, "BP_Montage_GetSectionLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionLength_Statics::ContextualAnimUtilities_eventBP_Montage_GetSectionLength_Parms), Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionStartAndEndTime_Statics
	{
		struct ContextualAnimUtilities_eventBP_Montage_GetSectionStartAndEndTime_Parms
		{
			const UAnimMontage* Montage;
			int32 SectionIndex;
			float OutStartTime;
			float OutEndTime;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutStartTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutEndTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionStartAndEndTime_Statics::NewProp_Montage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionStartAndEndTime_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_Montage_GetSectionStartAndEndTime_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionStartAndEndTime_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionStartAndEndTime_Statics::NewProp_Montage_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionStartAndEndTime_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_Montage_GetSectionStartAndEndTime_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionStartAndEndTime_Statics::NewProp_OutStartTime = { "OutStartTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_Montage_GetSectionStartAndEndTime_Parms, OutStartTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionStartAndEndTime_Statics::NewProp_OutEndTime = { "OutEndTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_Montage_GetSectionStartAndEndTime_Parms, OutEndTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionStartAndEndTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionStartAndEndTime_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionStartAndEndTime_Statics::NewProp_SectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionStartAndEndTime_Statics::NewProp_OutStartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionStartAndEndTime_Statics::NewProp_OutEndTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionStartAndEndTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Contextual Anim|Utilities" },
		{ "Comment", "// Montage Blueprint Interface\n//------------------------------------------------------------------------------------------\n" },
		{ "DisplayName", "GetSectionStartAndEndTime" },
		{ "ModuleRelativePath", "Public/ContextualAnimUtilities.h" },
		{ "ToolTip", "Montage Blueprint Interface" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionStartAndEndTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimUtilities, nullptr, "BP_Montage_GetSectionStartAndEndTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionStartAndEndTime_Statics::ContextualAnimUtilities_eventBP_Montage_GetSectionStartAndEndTime_Parms), Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionStartAndEndTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionStartAndEndTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionStartAndEndTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionStartAndEndTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionStartAndEndTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionStartAndEndTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionTimeLeftFromPos_Statics
	{
		struct ContextualAnimUtilities_eventBP_Montage_GetSectionTimeLeftFromPos_Parms
		{
			const UAnimMontage* Montage;
			float Position;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Position;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionTimeLeftFromPos_Statics::NewProp_Montage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionTimeLeftFromPos_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_Montage_GetSectionTimeLeftFromPos_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionTimeLeftFromPos_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionTimeLeftFromPos_Statics::NewProp_Montage_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionTimeLeftFromPos_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_Montage_GetSectionTimeLeftFromPos_Parms, Position), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionTimeLeftFromPos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_Montage_GetSectionTimeLeftFromPos_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionTimeLeftFromPos_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionTimeLeftFromPos_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionTimeLeftFromPos_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionTimeLeftFromPos_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionTimeLeftFromPos_Statics::Function_MetaDataParams[] = {
		{ "Category", "Contextual Anim|Utilities" },
		{ "DisplayName", "GetSectionTimeLeftFromPos" },
		{ "ModuleRelativePath", "Public/ContextualAnimUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionTimeLeftFromPos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimUtilities, nullptr, "BP_Montage_GetSectionTimeLeftFromPos", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionTimeLeftFromPos_Statics::ContextualAnimUtilities_eventBP_Montage_GetSectionTimeLeftFromPos_Parms), Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionTimeLeftFromPos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionTimeLeftFromPos_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionTimeLeftFromPos_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionTimeLeftFromPos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionTimeLeftFromPos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionTimeLeftFromPos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetActor_Statics
	{
		struct ContextualAnimUtilities_eventBP_SceneBinding_GetActor_Parms
		{
			FContextualAnimSceneBinding Binding;
			AActor* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Binding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Binding;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetActor_Statics::NewProp_Binding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetActor_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_SceneBinding_GetActor_Parms, Binding), Z_Construct_UScriptStruct_FContextualAnimSceneBinding, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetActor_Statics::NewProp_Binding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetActor_Statics::NewProp_Binding_MetaData)) }; // 2112834904
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_SceneBinding_GetActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetActor_Statics::NewProp_Binding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Contextual Anim|Scene Binding" },
		{ "Comment", "// FContextualAnimSceneBinding Blueprint Interface\n//------------------------------------------------------------------------------------------\n" },
		{ "DisplayName", "Get Actor" },
		{ "ModuleRelativePath", "Public/ContextualAnimUtilities.h" },
		{ "ToolTip", "FContextualAnimSceneBinding Blueprint Interface" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimUtilities, nullptr, "BP_SceneBinding_GetActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetActor_Statics::ContextualAnimUtilities_eventBP_SceneBinding_GetActor_Parms), Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetAnimationFromBinding_Statics
	{
		struct ContextualAnimUtilities_eventBP_SceneBinding_GetAnimationFromBinding_Parms
		{
			FContextualAnimSceneBindings Bindings;
			FContextualAnimSceneBinding Binding;
			const UAnimSequenceBase* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bindings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bindings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Binding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Binding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetAnimationFromBinding_Statics::NewProp_Bindings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetAnimationFromBinding_Statics::NewProp_Bindings = { "Bindings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_SceneBinding_GetAnimationFromBinding_Parms, Bindings), Z_Construct_UScriptStruct_FContextualAnimSceneBindings, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetAnimationFromBinding_Statics::NewProp_Bindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetAnimationFromBinding_Statics::NewProp_Bindings_MetaData)) }; // 1321072697
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetAnimationFromBinding_Statics::NewProp_Binding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetAnimationFromBinding_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_SceneBinding_GetAnimationFromBinding_Parms, Binding), Z_Construct_UScriptStruct_FContextualAnimSceneBinding, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetAnimationFromBinding_Statics::NewProp_Binding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetAnimationFromBinding_Statics::NewProp_Binding_MetaData)) }; // 2112834904
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetAnimationFromBinding_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetAnimationFromBinding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_SceneBinding_GetAnimationFromBinding_Parms, ReturnValue), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetAnimationFromBinding_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetAnimationFromBinding_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetAnimationFromBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetAnimationFromBinding_Statics::NewProp_Bindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetAnimationFromBinding_Statics::NewProp_Binding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetAnimationFromBinding_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetAnimationFromBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Contextual Anim|Scene Bindings" },
		{ "DisplayName", "Get Animation From Binding" },
		{ "ModuleRelativePath", "Public/ContextualAnimUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetAnimationFromBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimUtilities, nullptr, "BP_SceneBinding_GetAnimationFromBinding", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetAnimationFromBinding_Statics::ContextualAnimUtilities_eventBP_SceneBinding_GetAnimationFromBinding_Parms), Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetAnimationFromBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetAnimationFromBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetAnimationFromBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetAnimationFromBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetAnimationFromBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetAnimationFromBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetRoleFromBinding_Statics
	{
		struct ContextualAnimUtilities_eventBP_SceneBinding_GetRoleFromBinding_Parms
		{
			FContextualAnimSceneBindings Bindings;
			FContextualAnimSceneBinding Binding;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bindings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bindings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Binding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Binding;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetRoleFromBinding_Statics::NewProp_Bindings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetRoleFromBinding_Statics::NewProp_Bindings = { "Bindings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_SceneBinding_GetRoleFromBinding_Parms, Bindings), Z_Construct_UScriptStruct_FContextualAnimSceneBindings, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetRoleFromBinding_Statics::NewProp_Bindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetRoleFromBinding_Statics::NewProp_Bindings_MetaData)) }; // 1321072697
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetRoleFromBinding_Statics::NewProp_Binding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetRoleFromBinding_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_SceneBinding_GetRoleFromBinding_Parms, Binding), Z_Construct_UScriptStruct_FContextualAnimSceneBinding, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetRoleFromBinding_Statics::NewProp_Binding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetRoleFromBinding_Statics::NewProp_Binding_MetaData)) }; // 2112834904
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetRoleFromBinding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_SceneBinding_GetRoleFromBinding_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetRoleFromBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetRoleFromBinding_Statics::NewProp_Bindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetRoleFromBinding_Statics::NewProp_Binding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetRoleFromBinding_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetRoleFromBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Contextual Anim|Scene Bindings" },
		{ "DisplayName", "Get Role From Binding" },
		{ "ModuleRelativePath", "Public/ContextualAnimUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetRoleFromBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimUtilities, nullptr, "BP_SceneBinding_GetRoleFromBinding", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetRoleFromBinding_Statics::ContextualAnimUtilities_eventBP_SceneBinding_GetRoleFromBinding_Parms), Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetRoleFromBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetRoleFromBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetRoleFromBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetRoleFromBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetRoleFromBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetRoleFromBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetSkeletalMesh_Statics
	{
		struct ContextualAnimUtilities_eventBP_SceneBinding_GetSkeletalMesh_Parms
		{
			FContextualAnimSceneBinding Binding;
			USkeletalMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Binding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Binding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetSkeletalMesh_Statics::NewProp_Binding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetSkeletalMesh_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_SceneBinding_GetSkeletalMesh_Parms, Binding), Z_Construct_UScriptStruct_FContextualAnimSceneBinding, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetSkeletalMesh_Statics::NewProp_Binding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetSkeletalMesh_Statics::NewProp_Binding_MetaData)) }; // 2112834904
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetSkeletalMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetSkeletalMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_SceneBinding_GetSkeletalMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetSkeletalMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetSkeletalMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetSkeletalMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetSkeletalMesh_Statics::NewProp_Binding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetSkeletalMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetSkeletalMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Contextual Anim|Scene Binding" },
		{ "DisplayName", "Get Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/ContextualAnimUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetSkeletalMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimUtilities, nullptr, "BP_SceneBinding_GetSkeletalMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetSkeletalMesh_Statics::ContextualAnimUtilities_eventBP_SceneBinding_GetSkeletalMesh_Parms), Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetSkeletalMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetSkeletalMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetSkeletalMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetSkeletalMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetSkeletalMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetSkeletalMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetActor_Statics
	{
		struct ContextualAnimUtilities_eventBP_SceneBindingContext_GetActor_Parms
		{
			FContextualAnimSceneBindingContext BindingContext;
			AActor* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BindingContext;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetActor_Statics::NewProp_BindingContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetActor_Statics::NewProp_BindingContext = { "BindingContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_SceneBindingContext_GetActor_Parms, BindingContext), Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetActor_Statics::NewProp_BindingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetActor_Statics::NewProp_BindingContext_MetaData)) }; // 2634761810
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_SceneBindingContext_GetActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetActor_Statics::NewProp_BindingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Contextual Anim|Scene Binding Context" },
		{ "DisplayName", "Get Actor" },
		{ "ModuleRelativePath", "Public/ContextualAnimUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimUtilities, nullptr, "BP_SceneBindingContext_GetActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetActor_Statics::ContextualAnimUtilities_eventBP_SceneBindingContext_GetActor_Parms), Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetTransform_Statics
	{
		struct ContextualAnimUtilities_eventBP_SceneBindingContext_GetTransform_Parms
		{
			FContextualAnimSceneBindingContext BindingContext;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BindingContext;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetTransform_Statics::NewProp_BindingContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetTransform_Statics::NewProp_BindingContext = { "BindingContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_SceneBindingContext_GetTransform_Parms, BindingContext), Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetTransform_Statics::NewProp_BindingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetTransform_Statics::NewProp_BindingContext_MetaData)) }; // 2634761810
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_SceneBindingContext_GetTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetTransform_Statics::NewProp_BindingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Contextual Anim|Scene Binding Context" },
		{ "DisplayName", "Get Transform" },
		{ "ModuleRelativePath", "Public/ContextualAnimUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimUtilities, nullptr, "BP_SceneBindingContext_GetTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetTransform_Statics::ContextualAnimUtilities_eventBP_SceneBindingContext_GetTransform_Parms), Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetVelocity_Statics
	{
		struct ContextualAnimUtilities_eventBP_SceneBindingContext_GetVelocity_Parms
		{
			FContextualAnimSceneBindingContext BindingContext;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BindingContext;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetVelocity_Statics::NewProp_BindingContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetVelocity_Statics::NewProp_BindingContext = { "BindingContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_SceneBindingContext_GetVelocity_Parms, BindingContext), Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetVelocity_Statics::NewProp_BindingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetVelocity_Statics::NewProp_BindingContext_MetaData)) }; // 2634761810
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_SceneBindingContext_GetVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetVelocity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetVelocity_Statics::NewProp_BindingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetVelocity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Contextual Anim|Scene Binding Context" },
		{ "DisplayName", "Get Velocity" },
		{ "ModuleRelativePath", "Public/ContextualAnimUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimUtilities, nullptr, "BP_SceneBindingContext_GetVelocity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetVelocity_Statics::ContextualAnimUtilities_eventBP_SceneBindingContext_GetVelocity_Parms), Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_MakeFromActor_Statics
	{
		struct ContextualAnimUtilities_eventBP_SceneBindingContext_MakeFromActor_Parms
		{
			AActor* Actor;
			FContextualAnimSceneBindingContext ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_MakeFromActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_SceneBindingContext_MakeFromActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_MakeFromActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_SceneBindingContext_MakeFromActor_Parms, ReturnValue), Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext, METADATA_PARAMS(nullptr, 0) }; // 2634761810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_MakeFromActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_MakeFromActor_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_MakeFromActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_MakeFromActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Contextual Anim|Scene Binding Context" },
		{ "Comment", "// FContextualAnimSceneBindingContext Blueprint Interface\n//------------------------------------------------------------------------------------------\n" },
		{ "DisplayName", "Make Contextual Anim Scene Binding Context" },
		{ "ModuleRelativePath", "Public/ContextualAnimUtilities.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "FContextualAnimSceneBindingContext Blueprint Interface" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_MakeFromActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimUtilities, nullptr, "BP_SceneBindingContext_MakeFromActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_MakeFromActor_Statics::ContextualAnimUtilities_eventBP_SceneBindingContext_MakeFromActor_Parms), Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_MakeFromActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_MakeFromActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_MakeFromActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_MakeFromActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_MakeFromActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_MakeFromActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_MakeFromActorWithExternalTransform_Statics
	{
		struct ContextualAnimUtilities_eventBP_SceneBindingContext_MakeFromActorWithExternalTransform_Parms
		{
			AActor* Actor;
			FTransform ExternalTransform;
			FContextualAnimSceneBindingContext ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalTransform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_MakeFromActorWithExternalTransform_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_SceneBindingContext_MakeFromActorWithExternalTransform_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_MakeFromActorWithExternalTransform_Statics::NewProp_ExternalTransform = { "ExternalTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_SceneBindingContext_MakeFromActorWithExternalTransform_Parms, ExternalTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_MakeFromActorWithExternalTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_SceneBindingContext_MakeFromActorWithExternalTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext, METADATA_PARAMS(nullptr, 0) }; // 2634761810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_MakeFromActorWithExternalTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_MakeFromActorWithExternalTransform_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_MakeFromActorWithExternalTransform_Statics::NewProp_ExternalTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_MakeFromActorWithExternalTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_MakeFromActorWithExternalTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Contextual Anim|Scene Binding Context" },
		{ "DisplayName", "Make Contextual Anim Scene Binding Context With External Transform" },
		{ "ModuleRelativePath", "Public/ContextualAnimUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_MakeFromActorWithExternalTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimUtilities, nullptr, "BP_SceneBindingContext_MakeFromActorWithExternalTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_MakeFromActorWithExternalTransform_Statics::ContextualAnimUtilities_eventBP_SceneBindingContext_MakeFromActorWithExternalTransform_Parms), Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_MakeFromActorWithExternalTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_MakeFromActorWithExternalTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_MakeFromActorWithExternalTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_MakeFromActorWithExternalTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_MakeFromActorWithExternalTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_MakeFromActorWithExternalTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_AddOrUpdateWarpTargetsForBindings_Statics
	{
		struct ContextualAnimUtilities_eventBP_SceneBindings_AddOrUpdateWarpTargetsForBindings_Parms
		{
			FContextualAnimSceneBindings Bindings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bindings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bindings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_AddOrUpdateWarpTargetsForBindings_Statics::NewProp_Bindings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_AddOrUpdateWarpTargetsForBindings_Statics::NewProp_Bindings = { "Bindings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_SceneBindings_AddOrUpdateWarpTargetsForBindings_Parms, Bindings), Z_Construct_UScriptStruct_FContextualAnimSceneBindings, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_AddOrUpdateWarpTargetsForBindings_Statics::NewProp_Bindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_AddOrUpdateWarpTargetsForBindings_Statics::NewProp_Bindings_MetaData)) }; // 1321072697
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_AddOrUpdateWarpTargetsForBindings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_AddOrUpdateWarpTargetsForBindings_Statics::NewProp_Bindings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_AddOrUpdateWarpTargetsForBindings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Contextual Anim|Scene Bindings" },
		{ "DisplayName", "Add Or Update Warp Targets For Bindings" },
		{ "ModuleRelativePath", "Public/ContextualAnimUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_AddOrUpdateWarpTargetsForBindings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimUtilities, nullptr, "BP_SceneBindings_AddOrUpdateWarpTargetsForBindings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_AddOrUpdateWarpTargetsForBindings_Statics::ContextualAnimUtilities_eventBP_SceneBindings_AddOrUpdateWarpTargetsForBindings_Parms), Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_AddOrUpdateWarpTargetsForBindings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_AddOrUpdateWarpTargetsForBindings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_AddOrUpdateWarpTargetsForBindings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_AddOrUpdateWarpTargetsForBindings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_AddOrUpdateWarpTargetsForBindings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_AddOrUpdateWarpTargetsForBindings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_CalculateAnimSetPivots_Statics
	{
		struct ContextualAnimUtilities_eventBP_SceneBindings_CalculateAnimSetPivots_Parms
		{
			FContextualAnimSceneBindings Bindings;
			TArray<FContextualAnimSetPivot> OutPivots;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bindings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bindings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPivots_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPivots;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_CalculateAnimSetPivots_Statics::NewProp_Bindings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_CalculateAnimSetPivots_Statics::NewProp_Bindings = { "Bindings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_SceneBindings_CalculateAnimSetPivots_Parms, Bindings), Z_Construct_UScriptStruct_FContextualAnimSceneBindings, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_CalculateAnimSetPivots_Statics::NewProp_Bindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_CalculateAnimSetPivots_Statics::NewProp_Bindings_MetaData)) }; // 1321072697
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_CalculateAnimSetPivots_Statics::NewProp_OutPivots_Inner = { "OutPivots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FContextualAnimSetPivot, METADATA_PARAMS(nullptr, 0) }; // 3868301042
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_CalculateAnimSetPivots_Statics::NewProp_OutPivots = { "OutPivots", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_SceneBindings_CalculateAnimSetPivots_Parms, OutPivots), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3868301042
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_CalculateAnimSetPivots_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_CalculateAnimSetPivots_Statics::NewProp_Bindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_CalculateAnimSetPivots_Statics::NewProp_OutPivots_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_CalculateAnimSetPivots_Statics::NewProp_OutPivots,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_CalculateAnimSetPivots_Statics::Function_MetaDataParams[] = {
		{ "Category", "Contextual Anim|Scene Bindings" },
		{ "Comment", "// SceneBindings Blueprint Interface\n//------------------------------------------------------------------------------------------\n" },
		{ "DisplayName", "Calculate pivots For Bindings" },
		{ "ModuleRelativePath", "Public/ContextualAnimUtilities.h" },
		{ "ToolTip", "SceneBindings Blueprint Interface" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_CalculateAnimSetPivots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimUtilities, nullptr, "BP_SceneBindings_CalculateAnimSetPivots", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_CalculateAnimSetPivots_Statics::ContextualAnimUtilities_eventBP_SceneBindings_CalculateAnimSetPivots_Parms), Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_CalculateAnimSetPivots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_CalculateAnimSetPivots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_CalculateAnimSetPivots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_CalculateAnimSetPivots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_CalculateAnimSetPivots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_CalculateAnimSetPivots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole_Statics
	{
		struct ContextualAnimUtilities_eventBP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole_Parms
		{
			FContextualAnimSceneBindings Bindings;
			FName Role;
			FName RelativeToRole;
			float Time;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bindings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bindings;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Role;
		static const UECodeGen_Private::FNamePropertyParams NewProp_RelativeToRole;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole_Statics::NewProp_Bindings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole_Statics::NewProp_Bindings = { "Bindings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole_Parms, Bindings), Z_Construct_UScriptStruct_FContextualAnimSceneBindings, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole_Statics::NewProp_Bindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole_Statics::NewProp_Bindings_MetaData)) }; // 1321072697
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole_Parms, Role), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole_Statics::NewProp_RelativeToRole = { "RelativeToRole", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole_Parms, RelativeToRole), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole_Statics::NewProp_Bindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole_Statics::NewProp_Role,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole_Statics::NewProp_RelativeToRole,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole_Statics::Function_MetaDataParams[] = {
		{ "Category", "Contextual Anim|Scene Bindings" },
		{ "DisplayName", "Get Alignment Transform For Role Relative To Other Role" },
		{ "ModuleRelativePath", "Public/ContextualAnimUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimUtilities, nullptr, "BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole_Statics::ContextualAnimUtilities_eventBP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole_Parms), Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToPivot_Statics
	{
		struct ContextualAnimUtilities_eventBP_SceneBindings_GetAlignmentTransformForRoleRelativeToPivot_Parms
		{
			FContextualAnimSceneBindings Bindings;
			FName Role;
			FContextualAnimSetPivot Pivot;
			float Time;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bindings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bindings;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Role;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pivot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pivot;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToPivot_Statics::NewProp_Bindings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToPivot_Statics::NewProp_Bindings = { "Bindings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_SceneBindings_GetAlignmentTransformForRoleRelativeToPivot_Parms, Bindings), Z_Construct_UScriptStruct_FContextualAnimSceneBindings, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToPivot_Statics::NewProp_Bindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToPivot_Statics::NewProp_Bindings_MetaData)) }; // 1321072697
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToPivot_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_SceneBindings_GetAlignmentTransformForRoleRelativeToPivot_Parms, Role), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToPivot_Statics::NewProp_Pivot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToPivot_Statics::NewProp_Pivot = { "Pivot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_SceneBindings_GetAlignmentTransformForRoleRelativeToPivot_Parms, Pivot), Z_Construct_UScriptStruct_FContextualAnimSetPivot, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToPivot_Statics::NewProp_Pivot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToPivot_Statics::NewProp_Pivot_MetaData)) }; // 3868301042
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToPivot_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_SceneBindings_GetAlignmentTransformForRoleRelativeToPivot_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToPivot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_SceneBindings_GetAlignmentTransformForRoleRelativeToPivot_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToPivot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToPivot_Statics::NewProp_Bindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToPivot_Statics::NewProp_Role,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToPivot_Statics::NewProp_Pivot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToPivot_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToPivot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToPivot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Contextual Anim|Scene Bindings" },
		{ "DisplayName", "Get Alignment Transform For Role Relative To Pivot" },
		{ "ModuleRelativePath", "Public/ContextualAnimUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToPivot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimUtilities, nullptr, "BP_SceneBindings_GetAlignmentTransformForRoleRelativeToPivot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToPivot_Statics::ContextualAnimUtilities_eventBP_SceneBindings_GetAlignmentTransformForRoleRelativeToPivot_Parms), Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToPivot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToPivot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToPivot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToPivot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToPivot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToPivot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformFromBinding_Statics
	{
		struct ContextualAnimUtilities_eventBP_SceneBindings_GetAlignmentTransformFromBinding_Parms
		{
			FContextualAnimSceneBindings Bindings;
			FContextualAnimSceneBinding Binding;
			FContextualAnimSetPivot Pivot;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bindings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bindings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Binding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Binding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pivot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pivot;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformFromBinding_Statics::NewProp_Bindings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformFromBinding_Statics::NewProp_Bindings = { "Bindings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_SceneBindings_GetAlignmentTransformFromBinding_Parms, Bindings), Z_Construct_UScriptStruct_FContextualAnimSceneBindings, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformFromBinding_Statics::NewProp_Bindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformFromBinding_Statics::NewProp_Bindings_MetaData)) }; // 1321072697
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformFromBinding_Statics::NewProp_Binding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformFromBinding_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_SceneBindings_GetAlignmentTransformFromBinding_Parms, Binding), Z_Construct_UScriptStruct_FContextualAnimSceneBinding, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformFromBinding_Statics::NewProp_Binding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformFromBinding_Statics::NewProp_Binding_MetaData)) }; // 2112834904
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformFromBinding_Statics::NewProp_Pivot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformFromBinding_Statics::NewProp_Pivot = { "Pivot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_SceneBindings_GetAlignmentTransformFromBinding_Parms, Pivot), Z_Construct_UScriptStruct_FContextualAnimSetPivot, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformFromBinding_Statics::NewProp_Pivot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformFromBinding_Statics::NewProp_Pivot_MetaData)) }; // 3868301042
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformFromBinding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_SceneBindings_GetAlignmentTransformFromBinding_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformFromBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformFromBinding_Statics::NewProp_Bindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformFromBinding_Statics::NewProp_Binding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformFromBinding_Statics::NewProp_Pivot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformFromBinding_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformFromBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Contextual Anim|Scene Bindings" },
		{ "DisplayName", "Get Alignment Transform From Binding" },
		{ "ModuleRelativePath", "Public/ContextualAnimUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformFromBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimUtilities, nullptr, "BP_SceneBindings_GetAlignmentTransformFromBinding", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformFromBinding_Statics::ContextualAnimUtilities_eventBP_SceneBindings_GetAlignmentTransformFromBinding_Parms), Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformFromBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformFromBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformFromBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformFromBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformFromBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformFromBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindingByActor_Statics
	{
		struct ContextualAnimUtilities_eventBP_SceneBindings_GetBindingByActor_Parms
		{
			FContextualAnimSceneBindings Bindings;
			const AActor* Actor;
			FContextualAnimSceneBinding ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bindings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bindings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindingByActor_Statics::NewProp_Bindings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindingByActor_Statics::NewProp_Bindings = { "Bindings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_SceneBindings_GetBindingByActor_Parms, Bindings), Z_Construct_UScriptStruct_FContextualAnimSceneBindings, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindingByActor_Statics::NewProp_Bindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindingByActor_Statics::NewProp_Bindings_MetaData)) }; // 1321072697
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindingByActor_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindingByActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_SceneBindings_GetBindingByActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindingByActor_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindingByActor_Statics::NewProp_Actor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindingByActor_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindingByActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_SceneBindings_GetBindingByActor_Parms, ReturnValue), Z_Construct_UScriptStruct_FContextualAnimSceneBinding, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindingByActor_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindingByActor_Statics::NewProp_ReturnValue_MetaData)) }; // 2112834904
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindingByActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindingByActor_Statics::NewProp_Bindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindingByActor_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindingByActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindingByActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Contextual Anim|Scene Bindings" },
		{ "DisplayName", "Get Binding By Actor" },
		{ "ModuleRelativePath", "Public/ContextualAnimUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindingByActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimUtilities, nullptr, "BP_SceneBindings_GetBindingByActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindingByActor_Statics::ContextualAnimUtilities_eventBP_SceneBindings_GetBindingByActor_Parms), Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindingByActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindingByActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindingByActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindingByActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindingByActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindingByActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindingByRole_Statics
	{
		struct ContextualAnimUtilities_eventBP_SceneBindings_GetBindingByRole_Parms
		{
			FContextualAnimSceneBindings Bindings;
			FName Role;
			FContextualAnimSceneBinding ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bindings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bindings;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Role;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindingByRole_Statics::NewProp_Bindings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindingByRole_Statics::NewProp_Bindings = { "Bindings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_SceneBindings_GetBindingByRole_Parms, Bindings), Z_Construct_UScriptStruct_FContextualAnimSceneBindings, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindingByRole_Statics::NewProp_Bindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindingByRole_Statics::NewProp_Bindings_MetaData)) }; // 1321072697
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindingByRole_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_SceneBindings_GetBindingByRole_Parms, Role), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindingByRole_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindingByRole_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_SceneBindings_GetBindingByRole_Parms, ReturnValue), Z_Construct_UScriptStruct_FContextualAnimSceneBinding, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindingByRole_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindingByRole_Statics::NewProp_ReturnValue_MetaData)) }; // 2112834904
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindingByRole_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindingByRole_Statics::NewProp_Bindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindingByRole_Statics::NewProp_Role,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindingByRole_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindingByRole_Statics::Function_MetaDataParams[] = {
		{ "Category", "Contextual Anim|Scene Bindings" },
		{ "DisplayName", "Get Binding By Role" },
		{ "ModuleRelativePath", "Public/ContextualAnimUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindingByRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimUtilities, nullptr, "BP_SceneBindings_GetBindingByRole", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindingByRole_Statics::ContextualAnimUtilities_eventBP_SceneBindings_GetBindingByRole_Parms), Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindingByRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindingByRole_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindingByRole_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindingByRole_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindingByRole()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindingByRole_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindings_Statics
	{
		struct ContextualAnimUtilities_eventBP_SceneBindings_GetBindings_Parms
		{
			FContextualAnimSceneBindings Bindings;
			TArray<FContextualAnimSceneBinding> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bindings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bindings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindings_Statics::NewProp_Bindings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindings_Statics::NewProp_Bindings = { "Bindings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_SceneBindings_GetBindings_Parms, Bindings), Z_Construct_UScriptStruct_FContextualAnimSceneBindings, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindings_Statics::NewProp_Bindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindings_Statics::NewProp_Bindings_MetaData)) }; // 1321072697
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindings_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FContextualAnimSceneBinding, METADATA_PARAMS(nullptr, 0) }; // 2112834904
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindings_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_SceneBindings_GetBindings_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindings_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindings_Statics::NewProp_ReturnValue_MetaData)) }; // 2112834904
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindings_Statics::NewProp_Bindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindings_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Contextual Anim|Scene Bindings" },
		{ "DisplayName", "Get Bindings" },
		{ "ModuleRelativePath", "Public/ContextualAnimUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimUtilities, nullptr, "BP_SceneBindings_GetBindings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindings_Statics::ContextualAnimUtilities_eventBP_SceneBindings_GetBindings_Parms), Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetSceneAsset_Statics
	{
		struct ContextualAnimUtilities_eventBP_SceneBindings_GetSceneAsset_Parms
		{
			FContextualAnimSceneBindings Bindings;
			const UContextualAnimSceneAsset* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bindings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bindings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetSceneAsset_Statics::NewProp_Bindings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetSceneAsset_Statics::NewProp_Bindings = { "Bindings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_SceneBindings_GetSceneAsset_Parms, Bindings), Z_Construct_UScriptStruct_FContextualAnimSceneBindings, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetSceneAsset_Statics::NewProp_Bindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetSceneAsset_Statics::NewProp_Bindings_MetaData)) }; // 1321072697
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetSceneAsset_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetSceneAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_SceneBindings_GetSceneAsset_Parms, ReturnValue), Z_Construct_UClass_UContextualAnimSceneAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetSceneAsset_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetSceneAsset_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetSceneAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetSceneAsset_Statics::NewProp_Bindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetSceneAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetSceneAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Contextual Anim|Scene Bindings" },
		{ "DisplayName", "Get Scene Asset" },
		{ "ModuleRelativePath", "Public/ContextualAnimUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetSceneAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimUtilities, nullptr, "BP_SceneBindings_GetSceneAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetSceneAsset_Statics::ContextualAnimUtilities_eventBP_SceneBindings_GetSceneAsset_Parms), Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetSceneAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetSceneAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetSceneAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetSceneAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetSceneAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetSceneAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetSectionAndAnimSetIndices_Statics
	{
		struct ContextualAnimUtilities_eventBP_SceneBindings_GetSectionAndAnimSetIndices_Parms
		{
			FContextualAnimSceneBindings Bindings;
			int32 SectionIdx;
			int32 AnimSetIdx;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bindings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bindings;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIdx;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AnimSetIdx;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetSectionAndAnimSetIndices_Statics::NewProp_Bindings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetSectionAndAnimSetIndices_Statics::NewProp_Bindings = { "Bindings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_SceneBindings_GetSectionAndAnimSetIndices_Parms, Bindings), Z_Construct_UScriptStruct_FContextualAnimSceneBindings, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetSectionAndAnimSetIndices_Statics::NewProp_Bindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetSectionAndAnimSetIndices_Statics::NewProp_Bindings_MetaData)) }; // 1321072697
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetSectionAndAnimSetIndices_Statics::NewProp_SectionIdx = { "SectionIdx", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_SceneBindings_GetSectionAndAnimSetIndices_Parms, SectionIdx), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetSectionAndAnimSetIndices_Statics::NewProp_AnimSetIdx = { "AnimSetIdx", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimUtilities_eventBP_SceneBindings_GetSectionAndAnimSetIndices_Parms, AnimSetIdx), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetSectionAndAnimSetIndices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetSectionAndAnimSetIndices_Statics::NewProp_Bindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetSectionAndAnimSetIndices_Statics::NewProp_SectionIdx,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetSectionAndAnimSetIndices_Statics::NewProp_AnimSetIdx,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetSectionAndAnimSetIndices_Statics::Function_MetaDataParams[] = {
		{ "Category", "Contextual Anim|Scene Bindings" },
		{ "DisplayName", "Get Section And AnimSet Indices" },
		{ "ModuleRelativePath", "Public/ContextualAnimUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetSectionAndAnimSetIndices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimUtilities, nullptr, "BP_SceneBindings_GetSectionAndAnimSetIndices", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetSectionAndAnimSetIndices_Statics::ContextualAnimUtilities_eventBP_SceneBindings_GetSectionAndAnimSetIndices_Parms), Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetSectionAndAnimSetIndices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetSectionAndAnimSetIndices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetSectionAndAnimSetIndices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetSectionAndAnimSetIndices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetSectionAndAnimSetIndices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetSectionAndAnimSetIndices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContextualAnimUtilities);
	UClass* Z_Construct_UClass_UContextualAnimUtilities_NoRegister()
	{
		return UContextualAnimUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UContextualAnimUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContextualAnimUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ContextualAnimation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UContextualAnimUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindings, "BP_CreateContextualAnimSceneBindings" }, // 3297958365
		{ &Z_Construct_UFunction_UContextualAnimUtilities_BP_CreateContextualAnimSceneBindingsForTwoActors, "BP_CreateContextualAnimSceneBindingsForTwoActors" }, // 3628552634
		{ &Z_Construct_UFunction_UContextualAnimUtilities_BP_DrawDebugPose, "BP_DrawDebugPose" }, // 304738154
		{ &Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionLength, "BP_Montage_GetSectionLength" }, // 4011514673
		{ &Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionStartAndEndTime, "BP_Montage_GetSectionStartAndEndTime" }, // 595557827
		{ &Z_Construct_UFunction_UContextualAnimUtilities_BP_Montage_GetSectionTimeLeftFromPos, "BP_Montage_GetSectionTimeLeftFromPos" }, // 1831470411
		{ &Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetActor, "BP_SceneBinding_GetActor" }, // 1084978101
		{ &Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetAnimationFromBinding, "BP_SceneBinding_GetAnimationFromBinding" }, // 1518047980
		{ &Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetRoleFromBinding, "BP_SceneBinding_GetRoleFromBinding" }, // 302401817
		{ &Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBinding_GetSkeletalMesh, "BP_SceneBinding_GetSkeletalMesh" }, // 2969932255
		{ &Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetActor, "BP_SceneBindingContext_GetActor" }, // 612358490
		{ &Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetTransform, "BP_SceneBindingContext_GetTransform" }, // 1604051487
		{ &Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_GetVelocity, "BP_SceneBindingContext_GetVelocity" }, // 839008522
		{ &Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_MakeFromActor, "BP_SceneBindingContext_MakeFromActor" }, // 2962396650
		{ &Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindingContext_MakeFromActorWithExternalTransform, "BP_SceneBindingContext_MakeFromActorWithExternalTransform" }, // 932177060
		{ &Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_AddOrUpdateWarpTargetsForBindings, "BP_SceneBindings_AddOrUpdateWarpTargetsForBindings" }, // 2023957855
		{ &Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_CalculateAnimSetPivots, "BP_SceneBindings_CalculateAnimSetPivots" }, // 1806779219
		{ &Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole, "BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole" }, // 3226777323
		{ &Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformForRoleRelativeToPivot, "BP_SceneBindings_GetAlignmentTransformForRoleRelativeToPivot" }, // 1436084838
		{ &Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetAlignmentTransformFromBinding, "BP_SceneBindings_GetAlignmentTransformFromBinding" }, // 1501453932
		{ &Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindingByActor, "BP_SceneBindings_GetBindingByActor" }, // 1633236893
		{ &Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindingByRole, "BP_SceneBindings_GetBindingByRole" }, // 271827399
		{ &Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetBindings, "BP_SceneBindings_GetBindings" }, // 1486719126
		{ &Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetSceneAsset, "BP_SceneBindings_GetSceneAsset" }, // 3325264881
		{ &Z_Construct_UFunction_UContextualAnimUtilities_BP_SceneBindings_GetSectionAndAnimSetIndices, "BP_SceneBindings_GetSectionAndAnimSetIndices" }, // 4169736312
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimUtilities_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ContextualAnimUtilities.h" },
		{ "ModuleRelativePath", "Public/ContextualAnimUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContextualAnimUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContextualAnimUtilities>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContextualAnimUtilities_Statics::ClassParams = {
		&UContextualAnimUtilities::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UContextualAnimUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContextualAnimUtilities()
	{
		if (!Z_Registration_Info_UClass_UContextualAnimUtilities.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContextualAnimUtilities.OuterSingleton, Z_Construct_UClass_UContextualAnimUtilities_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContextualAnimUtilities.OuterSingleton;
	}
	template<> CONTEXTUALANIMATION_API UClass* StaticClass<UContextualAnimUtilities>()
	{
		return UContextualAnimUtilities::StaticClass();
	}
	UContextualAnimUtilities::UContextualAnimUtilities(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContextualAnimUtilities);
	UContextualAnimUtilities::~UContextualAnimUtilities() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimUtilities_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimUtilities_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UContextualAnimUtilities, UContextualAnimUtilities::StaticClass, TEXT("UContextualAnimUtilities"), &Z_Registration_Info_UClass_UContextualAnimUtilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContextualAnimUtilities), 3348568438U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimUtilities_h_4168865620(TEXT("/Script/ContextualAnimation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimUtilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimUtilities_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
