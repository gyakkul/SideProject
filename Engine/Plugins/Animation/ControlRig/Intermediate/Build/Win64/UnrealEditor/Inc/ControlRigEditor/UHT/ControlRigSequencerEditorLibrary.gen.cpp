// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRigSequencerEditorLibrary.h"
#include "EulerTransform.h"
#include "MovieSceneBindingProxy.h"
#include "Rigs/RigHierarchyDefines.h"
#include "RigSpacePickerBakeSettings.h"
#include "Tools/ControlRigSnapper.h"
#include "TransformNoScale.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigSequencerEditorLibrary() {}
// Cross Module References
	ANIMATIONCORE_API UEnum* Z_Construct_UEnum_AnimationCore_ETransformConstraintType();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEulerTransform();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FTransformNoScale();
	CONSTRAINTS_API UClass* Z_Construct_UClass_UTickableConstraint_NoRegister();
	CONSTRAINTS_API UClass* Z_Construct_UClass_UTransformableHandle_NoRegister();
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRig_NoRegister();
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigSnapSettings_NoRegister();
	CONTROLRIG_API UClass* Z_Construct_UClass_UMovieSceneControlRigParameterSection_NoRegister();
	CONTROLRIG_API UClass* Z_Construct_UClass_UMovieSceneControlRigParameterTrack_NoRegister();
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_EControlRigFKRigExecuteMode();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigSequencerEditorLibrary();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigSequencerEditorLibrary_NoRegister();
	CONTROLRIGEDITOR_API UEnum* Z_Construct_UEnum_ControlRigEditor_EAnimToolBlendOperation();
	CONTROLRIGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigSequencerBindingProxy();
	CONTROLRIGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigSnapperSelection();
	CONTROLRIGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FRigSpacePickerBakeSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBindingProxy();
	MOVIESCENETOOLS_API UClass* Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_NoRegister();
	SEQUENCERSCRIPTING_API UEnum* Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit();
	UNREALED_API UClass* Z_Construct_UClass_UAnimSeqExportOption_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ControlRigEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlRigSequencerBindingProxy;
class UScriptStruct* FControlRigSequencerBindingProxy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigSequencerBindingProxy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlRigSequencerBindingProxy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlRigSequencerBindingProxy, (UObject*)Z_Construct_UPackage__Script_ControlRigEditor(), TEXT("ControlRigSequencerBindingProxy"));
	}
	return Z_Registration_Info_UScriptStruct_ControlRigSequencerBindingProxy.OuterSingleton;
}
template<> CONTROLRIGEDITOR_API UScriptStruct* StaticStruct<FControlRigSequencerBindingProxy>()
{
	return FControlRigSequencerBindingProxy::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FControlRigSequencerBindingProxy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Proxy_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Proxy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlRig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ControlRig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Track;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigSequencerBindingProxy_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FControlRigSequencerBindingProxy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlRigSequencerBindingProxy>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigSequencerBindingProxy_Statics::NewProp_Proxy_MetaData[] = {
		{ "Category", "ControlRig" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FControlRigSequencerBindingProxy_Statics::NewProp_Proxy = { "Proxy", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControlRigSequencerBindingProxy, Proxy), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigSequencerBindingProxy_Statics::NewProp_Proxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigSequencerBindingProxy_Statics::NewProp_Proxy_MetaData)) }; // 716961670
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigSequencerBindingProxy_Statics::NewProp_ControlRig_MetaData[] = {
		{ "Category", "ControlRig" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FControlRigSequencerBindingProxy_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControlRigSequencerBindingProxy, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigSequencerBindingProxy_Statics::NewProp_ControlRig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigSequencerBindingProxy_Statics::NewProp_ControlRig_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigSequencerBindingProxy_Statics::NewProp_Track_MetaData[] = {
		{ "Category", "ControlRig" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FControlRigSequencerBindingProxy_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControlRigSequencerBindingProxy, Track), Z_Construct_UClass_UMovieSceneControlRigParameterTrack_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigSequencerBindingProxy_Statics::NewProp_Track_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigSequencerBindingProxy_Statics::NewProp_Track_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FControlRigSequencerBindingProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigSequencerBindingProxy_Statics::NewProp_Proxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigSequencerBindingProxy_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigSequencerBindingProxy_Statics::NewProp_Track,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlRigSequencerBindingProxy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigEditor,
		nullptr,
		&NewStructOps,
		"ControlRigSequencerBindingProxy",
		sizeof(FControlRigSequencerBindingProxy),
		alignof(FControlRigSequencerBindingProxy),
		Z_Construct_UScriptStruct_FControlRigSequencerBindingProxy_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigSequencerBindingProxy_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigSequencerBindingProxy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigSequencerBindingProxy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FControlRigSequencerBindingProxy()
	{
		if (!Z_Registration_Info_UScriptStruct_ControlRigSequencerBindingProxy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlRigSequencerBindingProxy.InnerSingleton, Z_Construct_UScriptStruct_FControlRigSequencerBindingProxy_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ControlRigSequencerBindingProxy.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnimToolBlendOperation;
	static UEnum* EAnimToolBlendOperation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAnimToolBlendOperation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAnimToolBlendOperation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRigEditor_EAnimToolBlendOperation, (UObject*)Z_Construct_UPackage__Script_ControlRigEditor(), TEXT("EAnimToolBlendOperation"));
		}
		return Z_Registration_Info_UEnum_EAnimToolBlendOperation.OuterSingleton;
	}
	template<> CONTROLRIGEDITOR_API UEnum* StaticEnum<EAnimToolBlendOperation>()
	{
		return EAnimToolBlendOperation_StaticEnum();
	}
	struct Z_Construct_UEnum_ControlRigEditor_EAnimToolBlendOperation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ControlRigEditor_EAnimToolBlendOperation_Statics::Enumerators[] = {
		{ "EAnimToolBlendOperation::Tween", (int64)EAnimToolBlendOperation::Tween },
		{ "EAnimToolBlendOperation::BlendToNeighbor", (int64)EAnimToolBlendOperation::BlendToNeighbor },
		{ "EAnimToolBlendOperation::PushPull", (int64)EAnimToolBlendOperation::PushPull },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ControlRigEditor_EAnimToolBlendOperation_Statics::Enum_MetaDataParams[] = {
		{ "BlendToNeighbor.Name", "EAnimToolBlendOperation::BlendToNeighbor" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "PushPull.Name", "EAnimToolBlendOperation::PushPull" },
		{ "Tween.Name", "EAnimToolBlendOperation::Tween" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRigEditor_EAnimToolBlendOperation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ControlRigEditor,
		nullptr,
		"EAnimToolBlendOperation",
		"EAnimToolBlendOperation",
		Z_Construct_UEnum_ControlRigEditor_EAnimToolBlendOperation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRigEditor_EAnimToolBlendOperation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ControlRigEditor_EAnimToolBlendOperation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRigEditor_EAnimToolBlendOperation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ControlRigEditor_EAnimToolBlendOperation()
	{
		if (!Z_Registration_Info_UEnum_EAnimToolBlendOperation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnimToolBlendOperation.InnerSingleton, Z_Construct_UEnum_ControlRigEditor_EAnimToolBlendOperation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAnimToolBlendOperation.InnerSingleton;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execSetControlRigApplyMode)
	{
		P_GET_OBJECT(UControlRig,Z_Param_InControlRig);
		P_GET_ENUM(EControlRigFKRigExecuteMode,Z_Param_InApplyMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UControlRigSequencerEditorLibrary::SetControlRigApplyMode(Z_Param_InControlRig,EControlRigFKRigExecuteMode(Z_Param_InApplyMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execGetFKControlRigApplyMode)
	{
		P_GET_OBJECT(UControlRig,Z_Param_InControlRig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EControlRigFKRigExecuteMode*)Z_Param__Result=UControlRigSequencerEditorLibrary::GetFKControlRigApplyMode(Z_Param_InControlRig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execIsFKControlRig)
	{
		P_GET_OBJECT(UControlRig,Z_Param_InControlRig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UControlRigSequencerEditorLibrary::IsFKControlRig(Z_Param_InControlRig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execHideAllControls)
	{
		P_GET_OBJECT(UMovieSceneSection,Z_Param_InSection);
		P_FINISH;
		P_NATIVE_BEGIN;
		UControlRigSequencerEditorLibrary::HideAllControls(Z_Param_InSection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execShowAllControls)
	{
		P_GET_OBJECT(UMovieSceneSection,Z_Param_InSection);
		P_FINISH;
		P_NATIVE_BEGIN;
		UControlRigSequencerEditorLibrary::ShowAllControls(Z_Param_InSection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execSetControlsMask)
	{
		P_GET_OBJECT(UMovieSceneSection,Z_Param_InSection);
		P_GET_TARRAY_REF(FName,Z_Param_Out_ControlNames);
		P_GET_UBOOL(Z_Param_bVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		UControlRigSequencerEditorLibrary::SetControlsMask(Z_Param_InSection,Z_Param_Out_ControlNames,Z_Param_bVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execGetControlsMask)
	{
		P_GET_OBJECT(UMovieSceneSection,Z_Param_InSection);
		P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UControlRigSequencerEditorLibrary::GetControlsMask(Z_Param_InSection,Z_Param_ControlName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execRenameControlRigControlChannels)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_InSequence);
		P_GET_OBJECT(UControlRig,Z_Param_InControlRig);
		P_GET_TARRAY_REF(FName,Z_Param_Out_InOldControlNames);
		P_GET_TARRAY_REF(FName,Z_Param_Out_InNewControlNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UControlRigSequencerEditorLibrary::RenameControlRigControlChannels(Z_Param_InSequence,Z_Param_InControlRig,Z_Param_Out_InOldControlNames,Z_Param_Out_InNewControlNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execMoveControlRigSpace)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_InSequence);
		P_GET_OBJECT(UControlRig,Z_Param_InControlRig);
		P_GET_PROPERTY(FNameProperty,Z_Param_InControlName);
		P_GET_STRUCT(FFrameNumber,Z_Param_InTime);
		P_GET_STRUCT(FFrameNumber,Z_Param_InNewTime);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UControlRigSequencerEditorLibrary::MoveControlRigSpace(Z_Param_InSequence,Z_Param_InControlRig,Z_Param_InControlName,Z_Param_InTime,Z_Param_InNewTime,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execDeleteControlRigSpace)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_InSequence);
		P_GET_OBJECT(UControlRig,Z_Param_InControlRig);
		P_GET_PROPERTY(FNameProperty,Z_Param_InControlName);
		P_GET_STRUCT(FFrameNumber,Z_Param_InTime);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UControlRigSequencerEditorLibrary::DeleteControlRigSpace(Z_Param_InSequence,Z_Param_InControlRig,Z_Param_InControlName,Z_Param_InTime,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execBakeControlRigSpace)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_InSequence);
		P_GET_OBJECT(UControlRig,Z_Param_InControlRig);
		P_GET_TARRAY_REF(FName,Z_Param_Out_InControlNames);
		P_GET_STRUCT(FRigSpacePickerBakeSettings,Z_Param_InSettings);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UControlRigSequencerEditorLibrary::BakeControlRigSpace(Z_Param_InSequence,Z_Param_InControlRig,Z_Param_Out_InControlNames,Z_Param_InSettings,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execSetControlRigSpace)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_InSequence);
		P_GET_OBJECT(UControlRig,Z_Param_InControlRig);
		P_GET_PROPERTY(FNameProperty,Z_Param_InControlName);
		P_GET_STRUCT_REF(FRigElementKey,Z_Param_Out_InSpaceKey);
		P_GET_STRUCT(FFrameNumber,Z_Param_InTime);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UControlRigSequencerEditorLibrary::SetControlRigSpace(Z_Param_InSequence,Z_Param_InControlRig,Z_Param_InControlName,Z_Param_Out_InSpaceKey,Z_Param_InTime,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execGetWorldSpaceReferenceKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRigElementKey*)Z_Param__Result=UControlRigSequencerEditorLibrary::GetWorldSpaceReferenceKey();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execGetDefaultParentKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRigElementKey*)Z_Param__Result=UControlRigSequencerEditorLibrary::GetDefaultParentKey();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execCollapseControlRigAnimLayers)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_InSequence);
		P_GET_OBJECT(UMovieSceneControlRigParameterTrack,Z_Param_InTrack);
		P_GET_UBOOL(Z_Param_bKeyReduce);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Tolerance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UControlRigSequencerEditorLibrary::CollapseControlRigAnimLayers(Z_Param_InSequence,Z_Param_InTrack,Z_Param_bKeyReduce,Z_Param_Tolerance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execImportFBXToControlRigTrack)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_OBJECT(ULevelSequence,Z_Param_InSequence);
		P_GET_OBJECT(UMovieSceneControlRigParameterTrack,Z_Param_InTrack);
		P_GET_OBJECT(UMovieSceneControlRigParameterSection,Z_Param_InSection);
		P_GET_TARRAY_REF(FString,Z_Param_Out_SelectedControlRigNames);
		P_GET_OBJECT(UMovieSceneUserImportFBXControlRigSettings,Z_Param_ImportFBXControlRigSettings);
		P_GET_PROPERTY(FStrProperty,Z_Param_ImportFilename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UControlRigSequencerEditorLibrary::ImportFBXToControlRigTrack(Z_Param_World,Z_Param_InSequence,Z_Param_InTrack,Z_Param_InSection,Z_Param_Out_SelectedControlRigNames,Z_Param_ImportFBXControlRigSettings,Z_Param_ImportFilename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execSetLocalControlRigTransforms)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(UControlRig,Z_Param_ControlRig);
		P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
		P_GET_TARRAY_REF(FFrameNumber,Z_Param_Out_Frames);
		P_GET_TARRAY(FTransform,Z_Param_Values);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		UControlRigSequencerEditorLibrary::SetLocalControlRigTransforms(Z_Param_LevelSequence,Z_Param_ControlRig,Z_Param_ControlName,Z_Param_Out_Frames,Z_Param_Values,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execSetLocalControlRigTransform)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(UControlRig,Z_Param_ControlRig);
		P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
		P_GET_STRUCT(FFrameNumber,Z_Param_Frame);
		P_GET_STRUCT(FTransform,Z_Param_Value);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_GET_UBOOL(Z_Param_bSetKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		UControlRigSequencerEditorLibrary::SetLocalControlRigTransform(Z_Param_LevelSequence,Z_Param_ControlRig,Z_Param_ControlName,Z_Param_Frame,Z_Param_Value,ESequenceTimeUnit(Z_Param_TimeUnit),Z_Param_bSetKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execGetLocalControlRigTransforms)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(UControlRig,Z_Param_ControlRig);
		P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
		P_GET_TARRAY_REF(FFrameNumber,Z_Param_Out_Frames);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FTransform>*)Z_Param__Result=UControlRigSequencerEditorLibrary::GetLocalControlRigTransforms(Z_Param_LevelSequence,Z_Param_ControlRig,Z_Param_ControlName,Z_Param_Out_Frames,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execGetLocalControlRigTransform)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(UControlRig,Z_Param_ControlRig);
		P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
		P_GET_STRUCT(FFrameNumber,Z_Param_Frame);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UControlRigSequencerEditorLibrary::GetLocalControlRigTransform(Z_Param_LevelSequence,Z_Param_ControlRig,Z_Param_ControlName,Z_Param_Frame,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execSetLocalControlRigTransformNoScales)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(UControlRig,Z_Param_ControlRig);
		P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
		P_GET_TARRAY_REF(FFrameNumber,Z_Param_Out_Frames);
		P_GET_TARRAY(FTransformNoScale,Z_Param_Values);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		UControlRigSequencerEditorLibrary::SetLocalControlRigTransformNoScales(Z_Param_LevelSequence,Z_Param_ControlRig,Z_Param_ControlName,Z_Param_Out_Frames,Z_Param_Values,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execSetLocalControlRigTransformNoScale)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(UControlRig,Z_Param_ControlRig);
		P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
		P_GET_STRUCT(FFrameNumber,Z_Param_Frame);
		P_GET_STRUCT(FTransformNoScale,Z_Param_Value);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_GET_UBOOL(Z_Param_bSetKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		UControlRigSequencerEditorLibrary::SetLocalControlRigTransformNoScale(Z_Param_LevelSequence,Z_Param_ControlRig,Z_Param_ControlName,Z_Param_Frame,Z_Param_Value,ESequenceTimeUnit(Z_Param_TimeUnit),Z_Param_bSetKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execGetLocalControlRigTransformNoScales)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(UControlRig,Z_Param_ControlRig);
		P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
		P_GET_TARRAY_REF(FFrameNumber,Z_Param_Out_Frames);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FTransformNoScale>*)Z_Param__Result=UControlRigSequencerEditorLibrary::GetLocalControlRigTransformNoScales(Z_Param_LevelSequence,Z_Param_ControlRig,Z_Param_ControlName,Z_Param_Out_Frames,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execGetLocalControlRigTransformNoScale)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(UControlRig,Z_Param_ControlRig);
		P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
		P_GET_STRUCT(FFrameNumber,Z_Param_Frame);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransformNoScale*)Z_Param__Result=UControlRigSequencerEditorLibrary::GetLocalControlRigTransformNoScale(Z_Param_LevelSequence,Z_Param_ControlRig,Z_Param_ControlName,Z_Param_Frame,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execSetLocalControlRigEulerTransforms)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(UControlRig,Z_Param_ControlRig);
		P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
		P_GET_TARRAY_REF(FFrameNumber,Z_Param_Out_Frames);
		P_GET_TARRAY(FEulerTransform,Z_Param_Values);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		UControlRigSequencerEditorLibrary::SetLocalControlRigEulerTransforms(Z_Param_LevelSequence,Z_Param_ControlRig,Z_Param_ControlName,Z_Param_Out_Frames,Z_Param_Values,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execSetLocalControlRigEulerTransform)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(UControlRig,Z_Param_ControlRig);
		P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
		P_GET_STRUCT(FFrameNumber,Z_Param_Frame);
		P_GET_STRUCT(FEulerTransform,Z_Param_Value);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_GET_UBOOL(Z_Param_bSetKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		UControlRigSequencerEditorLibrary::SetLocalControlRigEulerTransform(Z_Param_LevelSequence,Z_Param_ControlRig,Z_Param_ControlName,Z_Param_Frame,Z_Param_Value,ESequenceTimeUnit(Z_Param_TimeUnit),Z_Param_bSetKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execGetLocalControlRigEulerTransforms)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(UControlRig,Z_Param_ControlRig);
		P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
		P_GET_TARRAY_REF(FFrameNumber,Z_Param_Out_Frames);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FEulerTransform>*)Z_Param__Result=UControlRigSequencerEditorLibrary::GetLocalControlRigEulerTransforms(Z_Param_LevelSequence,Z_Param_ControlRig,Z_Param_ControlName,Z_Param_Out_Frames,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execGetLocalControlRigEulerTransform)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(UControlRig,Z_Param_ControlRig);
		P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
		P_GET_STRUCT(FFrameNumber,Z_Param_Frame);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEulerTransform*)Z_Param__Result=UControlRigSequencerEditorLibrary::GetLocalControlRigEulerTransform(Z_Param_LevelSequence,Z_Param_ControlRig,Z_Param_ControlName,Z_Param_Frame,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execSetLocalControlRigScales)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(UControlRig,Z_Param_ControlRig);
		P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
		P_GET_TARRAY_REF(FFrameNumber,Z_Param_Out_Frames);
		P_GET_TARRAY(FVector,Z_Param_Values);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		UControlRigSequencerEditorLibrary::SetLocalControlRigScales(Z_Param_LevelSequence,Z_Param_ControlRig,Z_Param_ControlName,Z_Param_Out_Frames,Z_Param_Values,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execSetLocalControlRigScale)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(UControlRig,Z_Param_ControlRig);
		P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
		P_GET_STRUCT(FFrameNumber,Z_Param_Frame);
		P_GET_STRUCT(FVector,Z_Param_Value);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_GET_UBOOL(Z_Param_bSetKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		UControlRigSequencerEditorLibrary::SetLocalControlRigScale(Z_Param_LevelSequence,Z_Param_ControlRig,Z_Param_ControlName,Z_Param_Frame,Z_Param_Value,ESequenceTimeUnit(Z_Param_TimeUnit),Z_Param_bSetKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execGetLocalControlRigScales)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(UControlRig,Z_Param_ControlRig);
		P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
		P_GET_TARRAY_REF(FFrameNumber,Z_Param_Out_Frames);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=UControlRigSequencerEditorLibrary::GetLocalControlRigScales(Z_Param_LevelSequence,Z_Param_ControlRig,Z_Param_ControlName,Z_Param_Out_Frames,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execGetLocalControlRigScale)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(UControlRig,Z_Param_ControlRig);
		P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
		P_GET_STRUCT(FFrameNumber,Z_Param_Frame);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UControlRigSequencerEditorLibrary::GetLocalControlRigScale(Z_Param_LevelSequence,Z_Param_ControlRig,Z_Param_ControlName,Z_Param_Frame,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execSetLocalControlRigRotators)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(UControlRig,Z_Param_ControlRig);
		P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
		P_GET_TARRAY_REF(FFrameNumber,Z_Param_Out_Frames);
		P_GET_TARRAY(FRotator,Z_Param_Values);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		UControlRigSequencerEditorLibrary::SetLocalControlRigRotators(Z_Param_LevelSequence,Z_Param_ControlRig,Z_Param_ControlName,Z_Param_Out_Frames,Z_Param_Values,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execSetLocalControlRigRotator)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(UControlRig,Z_Param_ControlRig);
		P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
		P_GET_STRUCT(FFrameNumber,Z_Param_Frame);
		P_GET_STRUCT(FRotator,Z_Param_Value);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_GET_UBOOL(Z_Param_bSetKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		UControlRigSequencerEditorLibrary::SetLocalControlRigRotator(Z_Param_LevelSequence,Z_Param_ControlRig,Z_Param_ControlName,Z_Param_Frame,Z_Param_Value,ESequenceTimeUnit(Z_Param_TimeUnit),Z_Param_bSetKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execGetLocalControlRigRotators)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(UControlRig,Z_Param_ControlRig);
		P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
		P_GET_TARRAY_REF(FFrameNumber,Z_Param_Out_Frames);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FRotator>*)Z_Param__Result=UControlRigSequencerEditorLibrary::GetLocalControlRigRotators(Z_Param_LevelSequence,Z_Param_ControlRig,Z_Param_ControlName,Z_Param_Out_Frames,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execGetLocalControlRigRotator)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(UControlRig,Z_Param_ControlRig);
		P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
		P_GET_STRUCT(FFrameNumber,Z_Param_Frame);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=UControlRigSequencerEditorLibrary::GetLocalControlRigRotator(Z_Param_LevelSequence,Z_Param_ControlRig,Z_Param_ControlName,Z_Param_Frame,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execSetLocalControlRigPositions)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(UControlRig,Z_Param_ControlRig);
		P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
		P_GET_TARRAY_REF(FFrameNumber,Z_Param_Out_Frames);
		P_GET_TARRAY(FVector,Z_Param_Values);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		UControlRigSequencerEditorLibrary::SetLocalControlRigPositions(Z_Param_LevelSequence,Z_Param_ControlRig,Z_Param_ControlName,Z_Param_Out_Frames,Z_Param_Values,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execSetLocalControlRigPosition)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(UControlRig,Z_Param_ControlRig);
		P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
		P_GET_STRUCT(FFrameNumber,Z_Param_Frame);
		P_GET_STRUCT(FVector,Z_Param_Value);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_GET_UBOOL(Z_Param_bSetKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		UControlRigSequencerEditorLibrary::SetLocalControlRigPosition(Z_Param_LevelSequence,Z_Param_ControlRig,Z_Param_ControlName,Z_Param_Frame,Z_Param_Value,ESequenceTimeUnit(Z_Param_TimeUnit),Z_Param_bSetKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execGetLocalControlRigPositions)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(UControlRig,Z_Param_ControlRig);
		P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
		P_GET_TARRAY_REF(FFrameNumber,Z_Param_Out_Frames);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=UControlRigSequencerEditorLibrary::GetLocalControlRigPositions(Z_Param_LevelSequence,Z_Param_ControlRig,Z_Param_ControlName,Z_Param_Out_Frames,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execGetLocalControlRigPosition)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(UControlRig,Z_Param_ControlRig);
		P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
		P_GET_STRUCT(FFrameNumber,Z_Param_Frame);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UControlRigSequencerEditorLibrary::GetLocalControlRigPosition(Z_Param_LevelSequence,Z_Param_ControlRig,Z_Param_ControlName,Z_Param_Frame,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execSetLocalControlRigVector2Ds)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(UControlRig,Z_Param_ControlRig);
		P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
		P_GET_TARRAY_REF(FFrameNumber,Z_Param_Out_Frames);
		P_GET_TARRAY(FVector2D,Z_Param_Values);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		UControlRigSequencerEditorLibrary::SetLocalControlRigVector2Ds(Z_Param_LevelSequence,Z_Param_ControlRig,Z_Param_ControlName,Z_Param_Out_Frames,Z_Param_Values,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execSetLocalControlRigVector2D)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(UControlRig,Z_Param_ControlRig);
		P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
		P_GET_STRUCT(FFrameNumber,Z_Param_Frame);
		P_GET_STRUCT(FVector2D,Z_Param_Value);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_GET_UBOOL(Z_Param_bSetKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		UControlRigSequencerEditorLibrary::SetLocalControlRigVector2D(Z_Param_LevelSequence,Z_Param_ControlRig,Z_Param_ControlName,Z_Param_Frame,Z_Param_Value,ESequenceTimeUnit(Z_Param_TimeUnit),Z_Param_bSetKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execGetLocalControlRigVector2Ds)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(UControlRig,Z_Param_ControlRig);
		P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
		P_GET_TARRAY_REF(FFrameNumber,Z_Param_Out_Frames);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector2D>*)Z_Param__Result=UControlRigSequencerEditorLibrary::GetLocalControlRigVector2Ds(Z_Param_LevelSequence,Z_Param_ControlRig,Z_Param_ControlName,Z_Param_Out_Frames,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execGetLocalControlRigVector2D)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(UControlRig,Z_Param_ControlRig);
		P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
		P_GET_STRUCT(FFrameNumber,Z_Param_Frame);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UControlRigSequencerEditorLibrary::GetLocalControlRigVector2D(Z_Param_LevelSequence,Z_Param_ControlRig,Z_Param_ControlName,Z_Param_Frame,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execSetLocalControlRigInts)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(UControlRig,Z_Param_ControlRig);
		P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
		P_GET_TARRAY_REF(FFrameNumber,Z_Param_Out_Frames);
		P_GET_TARRAY(int32,Z_Param_Values);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		UControlRigSequencerEditorLibrary::SetLocalControlRigInts(Z_Param_LevelSequence,Z_Param_ControlRig,Z_Param_ControlName,Z_Param_Out_Frames,Z_Param_Values,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execSetLocalControlRigInt)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(UControlRig,Z_Param_ControlRig);
		P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
		P_GET_STRUCT(FFrameNumber,Z_Param_Frame);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_GET_UBOOL(Z_Param_bSetKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		UControlRigSequencerEditorLibrary::SetLocalControlRigInt(Z_Param_LevelSequence,Z_Param_ControlRig,Z_Param_ControlName,Z_Param_Frame,Z_Param_Value,ESequenceTimeUnit(Z_Param_TimeUnit),Z_Param_bSetKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execGetLocalControlRigInts)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(UControlRig,Z_Param_ControlRig);
		P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
		P_GET_TARRAY_REF(FFrameNumber,Z_Param_Out_Frames);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=UControlRigSequencerEditorLibrary::GetLocalControlRigInts(Z_Param_LevelSequence,Z_Param_ControlRig,Z_Param_ControlName,Z_Param_Out_Frames,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execGetLocalControlRigInt)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(UControlRig,Z_Param_ControlRig);
		P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
		P_GET_STRUCT(FFrameNumber,Z_Param_Frame);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UControlRigSequencerEditorLibrary::GetLocalControlRigInt(Z_Param_LevelSequence,Z_Param_ControlRig,Z_Param_ControlName,Z_Param_Frame,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execSetLocalControlRigBools)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(UControlRig,Z_Param_ControlRig);
		P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
		P_GET_TARRAY_REF(FFrameNumber,Z_Param_Out_Frames);
		P_GET_TARRAY(bool,Z_Param_Values);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		UControlRigSequencerEditorLibrary::SetLocalControlRigBools(Z_Param_LevelSequence,Z_Param_ControlRig,Z_Param_ControlName,Z_Param_Out_Frames,Z_Param_Values,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execSetLocalControlRigBool)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(UControlRig,Z_Param_ControlRig);
		P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
		P_GET_STRUCT(FFrameNumber,Z_Param_Frame);
		P_GET_UBOOL(Z_Param_Value);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_GET_UBOOL(Z_Param_bSetKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		UControlRigSequencerEditorLibrary::SetLocalControlRigBool(Z_Param_LevelSequence,Z_Param_ControlRig,Z_Param_ControlName,Z_Param_Frame,Z_Param_Value,ESequenceTimeUnit(Z_Param_TimeUnit),Z_Param_bSetKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execGetLocalControlRigBools)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(UControlRig,Z_Param_ControlRig);
		P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
		P_GET_TARRAY_REF(FFrameNumber,Z_Param_Out_Frames);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<bool>*)Z_Param__Result=UControlRigSequencerEditorLibrary::GetLocalControlRigBools(Z_Param_LevelSequence,Z_Param_ControlRig,Z_Param_ControlName,Z_Param_Out_Frames,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execGetLocalControlRigBool)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(UControlRig,Z_Param_ControlRig);
		P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
		P_GET_STRUCT(FFrameNumber,Z_Param_Frame);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UControlRigSequencerEditorLibrary::GetLocalControlRigBool(Z_Param_LevelSequence,Z_Param_ControlRig,Z_Param_ControlName,Z_Param_Frame,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execSetLocalControlRigFloats)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(UControlRig,Z_Param_ControlRig);
		P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
		P_GET_TARRAY_REF(FFrameNumber,Z_Param_Out_Frames);
		P_GET_TARRAY(float,Z_Param_Values);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		UControlRigSequencerEditorLibrary::SetLocalControlRigFloats(Z_Param_LevelSequence,Z_Param_ControlRig,Z_Param_ControlName,Z_Param_Out_Frames,Z_Param_Values,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execSetLocalControlRigFloat)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(UControlRig,Z_Param_ControlRig);
		P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
		P_GET_STRUCT(FFrameNumber,Z_Param_Frame);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_GET_UBOOL(Z_Param_bSetKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		UControlRigSequencerEditorLibrary::SetLocalControlRigFloat(Z_Param_LevelSequence,Z_Param_ControlRig,Z_Param_ControlName,Z_Param_Frame,Z_Param_Value,ESequenceTimeUnit(Z_Param_TimeUnit),Z_Param_bSetKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execGetLocalControlRigFloats)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(UControlRig,Z_Param_ControlRig);
		P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
		P_GET_TARRAY_REF(FFrameNumber,Z_Param_Out_Frames);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=UControlRigSequencerEditorLibrary::GetLocalControlRigFloats(Z_Param_LevelSequence,Z_Param_ControlRig,Z_Param_ControlName,Z_Param_Out_Frames,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execGetLocalControlRigFloat)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(UControlRig,Z_Param_ControlRig);
		P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
		P_GET_STRUCT(FFrameNumber,Z_Param_Frame);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UControlRigSequencerEditorLibrary::GetLocalControlRigFloat(Z_Param_LevelSequence,Z_Param_ControlRig,Z_Param_ControlName,Z_Param_Frame,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execSetControlRigWorldTransforms)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(UControlRig,Z_Param_ControlRig);
		P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
		P_GET_TARRAY_REF(FFrameNumber,Z_Param_Out_Frames);
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_WorldTransforms);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		UControlRigSequencerEditorLibrary::SetControlRigWorldTransforms(Z_Param_LevelSequence,Z_Param_ControlRig,Z_Param_ControlName,Z_Param_Out_Frames,Z_Param_Out_WorldTransforms,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execSetControlRigWorldTransform)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(UControlRig,Z_Param_ControlRig);
		P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
		P_GET_STRUCT(FFrameNumber,Z_Param_Frame);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_WorldTransform);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_GET_UBOOL(Z_Param_bSetKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		UControlRigSequencerEditorLibrary::SetControlRigWorldTransform(Z_Param_LevelSequence,Z_Param_ControlRig,Z_Param_ControlName,Z_Param_Frame,Z_Param_Out_WorldTransform,ESequenceTimeUnit(Z_Param_TimeUnit),Z_Param_bSetKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execGetControlRigWorldTransforms)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(UControlRig,Z_Param_ControlRig);
		P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
		P_GET_TARRAY_REF(FFrameNumber,Z_Param_Out_Frames);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FTransform>*)Z_Param__Result=UControlRigSequencerEditorLibrary::GetControlRigWorldTransforms(Z_Param_LevelSequence,Z_Param_ControlRig,Z_Param_ControlName,Z_Param_Out_Frames,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execGetControlRigWorldTransform)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(UControlRig,Z_Param_ControlRig);
		P_GET_PROPERTY(FNameProperty,Z_Param_ControlName);
		P_GET_STRUCT(FFrameNumber,Z_Param_Frame);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UControlRigSequencerEditorLibrary::GetControlRigWorldTransform(Z_Param_LevelSequence,Z_Param_ControlRig,Z_Param_ControlName,Z_Param_Frame,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execGetSkeletalMeshComponentWorldTransforms)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkeletalMeshComponent);
		P_GET_TARRAY_REF(FFrameNumber,Z_Param_Out_Frames);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_GET_PROPERTY(FNameProperty,Z_Param_ReferenceName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FTransform>*)Z_Param__Result=UControlRigSequencerEditorLibrary::GetSkeletalMeshComponentWorldTransforms(Z_Param_LevelSequence,Z_Param_SkeletalMeshComponent,Z_Param_Out_Frames,ESequenceTimeUnit(Z_Param_TimeUnit),Z_Param_ReferenceName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execGetSkeletalMeshComponentWorldTransform)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkeletalMeshComponent);
		P_GET_STRUCT(FFrameNumber,Z_Param_Frame);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_GET_PROPERTY(FNameProperty,Z_Param_ReferenceName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UControlRigSequencerEditorLibrary::GetSkeletalMeshComponentWorldTransform(Z_Param_LevelSequence,Z_Param_SkeletalMeshComponent,Z_Param_Frame,ESequenceTimeUnit(Z_Param_TimeUnit),Z_Param_ReferenceName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execGetActorWorldTransforms)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_TARRAY_REF(FFrameNumber,Z_Param_Out_Frames);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FTransform>*)Z_Param__Result=UControlRigSequencerEditorLibrary::GetActorWorldTransforms(Z_Param_LevelSequence,Z_Param_Actor,Z_Param_Out_Frames,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execGetActorWorldTransform)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT(FFrameNumber,Z_Param_Frame);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UControlRigSequencerEditorLibrary::GetActorWorldTransform(Z_Param_LevelSequence,Z_Param_Actor,Z_Param_Frame,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execSnapControlRig)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_STRUCT(FFrameNumber,Z_Param_StartFrame);
		P_GET_STRUCT(FFrameNumber,Z_Param_EndFrame);
		P_GET_STRUCT_REF(FControlRigSnapperSelection,Z_Param_Out_ChildrenToSnap);
		P_GET_STRUCT_REF(FControlRigSnapperSelection,Z_Param_Out_ParentToSnap);
		P_GET_OBJECT(UControlRigSnapSettings,Z_Param_SnapSettings);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UControlRigSequencerEditorLibrary::SnapControlRig(Z_Param_LevelSequence,Z_Param_StartFrame,Z_Param_EndFrame,Z_Param_Out_ChildrenToSnap,Z_Param_Out_ParentToSnap,Z_Param_SnapSettings,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execBlendValuesOnSelected)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_ENUM(EAnimToolBlendOperation,Z_Param_BlendOperation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UControlRigSequencerEditorLibrary::BlendValuesOnSelected(Z_Param_LevelSequence,EAnimToolBlendOperation(Z_Param_BlendOperation),Z_Param_BlendValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execTweenControlRig)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(UControlRig,Z_Param_ControlRig);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TweenValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UControlRigSequencerEditorLibrary::TweenControlRig(Z_Param_LevelSequence,Z_Param_ControlRig,Z_Param_TweenValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execCompensateAll)
	{
		P_GET_OBJECT(UTickableConstraint,Z_Param_InConstraint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UControlRigSequencerEditorLibrary::CompensateAll(Z_Param_InConstraint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execCompensate)
	{
		P_GET_OBJECT(UTickableConstraint,Z_Param_InConstraint);
		P_GET_STRUCT(FFrameNumber,Z_Param_InTime);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UControlRigSequencerEditorLibrary::Compensate(Z_Param_InConstraint,Z_Param_InTime,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execDeleteConstraintKey)
	{
		P_GET_OBJECT(UTickableConstraint,Z_Param_Constraint);
		P_GET_OBJECT(UMovieSceneSection,Z_Param_ConstraintSection);
		P_GET_STRUCT(FFrameNumber,Z_Param_InTime);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UControlRigSequencerEditorLibrary::DeleteConstraintKey(Z_Param_Constraint,Z_Param_ConstraintSection,Z_Param_InTime,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execMoveConstraintKey)
	{
		P_GET_OBJECT(UTickableConstraint,Z_Param_Constraint);
		P_GET_OBJECT(UMovieSceneSection,Z_Param_ConstraintSection);
		P_GET_STRUCT(FFrameNumber,Z_Param_InTime);
		P_GET_STRUCT(FFrameNumber,Z_Param_InNewTime);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UControlRigSequencerEditorLibrary::MoveConstraintKey(Z_Param_Constraint,Z_Param_ConstraintSection,Z_Param_InTime,Z_Param_InNewTime,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execGetConstraintsForHandle)
	{
		P_GET_OBJECT(UWorld,Z_Param_InWorld);
		P_GET_OBJECT(UTransformableHandle,Z_Param_InChild);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UTickableConstraint*>*)Z_Param__Result=UControlRigSequencerEditorLibrary::GetConstraintsForHandle(Z_Param_InWorld,Z_Param_InChild);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execSetConstraintActiveKey)
	{
		P_GET_OBJECT(UTickableConstraint,Z_Param_InConstraint);
		P_GET_UBOOL(Z_Param_bActive);
		P_GET_STRUCT(FFrameNumber,Z_Param_InFrame);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UControlRigSequencerEditorLibrary::SetConstraintActiveKey(Z_Param_InConstraint,Z_Param_bActive,Z_Param_InFrame,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execGetConstraintKeys)
	{
		P_GET_OBJECT(UTickableConstraint,Z_Param_InConstraint);
		P_GET_OBJECT(UMovieSceneSection,Z_Param_ConstraintSection);
		P_GET_TARRAY_REF(bool,Z_Param_Out_OutBools);
		P_GET_TARRAY_REF(FFrameNumber,Z_Param_Out_OutFrames);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UControlRigSequencerEditorLibrary::GetConstraintKeys(Z_Param_InConstraint,Z_Param_ConstraintSection,Z_Param_Out_OutBools,Z_Param_Out_OutFrames,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execAddConstraint)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_ENUM(ETransformConstraintType,Z_Param_InType);
		P_GET_OBJECT(UTransformableHandle,Z_Param_InChild);
		P_GET_OBJECT(UTransformableHandle,Z_Param_InParent);
		P_GET_UBOOL(Z_Param_bMaintainOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTickableConstraint**)Z_Param__Result=UControlRigSequencerEditorLibrary::AddConstraint(Z_Param_World,ETransformConstraintType(Z_Param_InType),Z_Param_InChild,Z_Param_InParent,Z_Param_bMaintainOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execBakeConstraint)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_OBJECT(UTickableConstraint,Z_Param_Constraint);
		P_GET_TARRAY_REF(FFrameNumber,Z_Param_Out_Frames);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UControlRigSequencerEditorLibrary::BakeConstraint(Z_Param_World,Z_Param_Constraint,Z_Param_Out_Frames,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execBakeToControlRig)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(UClass,Z_Param_ControlRigClass);
		P_GET_OBJECT(UAnimSeqExportOption,Z_Param_ExportOptions);
		P_GET_UBOOL(Z_Param_bReduceKeys);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Tolerance);
		P_GET_STRUCT_REF(FMovieSceneBindingProxy,Z_Param_Out_Binding);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UControlRigSequencerEditorLibrary::BakeToControlRig(Z_Param_World,Z_Param_LevelSequence,Z_Param_ControlRigClass,Z_Param_ExportOptions,Z_Param_bReduceKeys,Z_Param_Tolerance,Z_Param_Out_Binding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execLoadAnimSequenceIntoControlRigSection)
	{
		P_GET_OBJECT(UMovieSceneSection,Z_Param_MovieSceneSection);
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimSequence);
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkelMeshComp);
		P_GET_STRUCT(FFrameNumber,Z_Param_InStartFrame);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_GET_UBOOL(Z_Param_bKeyReduce);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Tolerance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UControlRigSequencerEditorLibrary::LoadAnimSequenceIntoControlRigSection(Z_Param_MovieSceneSection,Z_Param_AnimSequence,Z_Param_SkelMeshComp,Z_Param_InStartFrame,ESequenceTimeUnit(Z_Param_TimeUnit),Z_Param_bKeyReduce,Z_Param_Tolerance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execFindOrCreateControlRigComponentTrack)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_STRUCT_REF(FMovieSceneBindingProxy,Z_Param_Out_InBinding);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMovieSceneTrack*>*)Z_Param__Result=UControlRigSequencerEditorLibrary::FindOrCreateControlRigComponentTrack(Z_Param_World,Z_Param_LevelSequence,Z_Param_Out_InBinding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execFindOrCreateControlRigTrack)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_OBJECT(UClass,Z_Param_ControlRigClass);
		P_GET_STRUCT_REF(FMovieSceneBindingProxy,Z_Param_Out_InBinding);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMovieSceneTrack**)Z_Param__Result=UControlRigSequencerEditorLibrary::FindOrCreateControlRigTrack(Z_Param_World,Z_Param_LevelSequence,Z_Param_ControlRigClass,Z_Param_Out_InBinding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execGetControlRigs)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FControlRigSequencerBindingProxy>*)Z_Param__Result=UControlRigSequencerEditorLibrary::GetControlRigs(Z_Param_LevelSequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigSequencerEditorLibrary::execGetVisibleControlRigs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UControlRig*>*)Z_Param__Result=UControlRigSequencerEditorLibrary::GetVisibleControlRigs();
		P_NATIVE_END;
	}
	void UControlRigSequencerEditorLibrary::StaticRegisterNativesUControlRigSequencerEditorLibrary()
	{
		UClass* Class = UControlRigSequencerEditorLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddConstraint", &UControlRigSequencerEditorLibrary::execAddConstraint },
			{ "BakeConstraint", &UControlRigSequencerEditorLibrary::execBakeConstraint },
			{ "BakeControlRigSpace", &UControlRigSequencerEditorLibrary::execBakeControlRigSpace },
			{ "BakeToControlRig", &UControlRigSequencerEditorLibrary::execBakeToControlRig },
			{ "BlendValuesOnSelected", &UControlRigSequencerEditorLibrary::execBlendValuesOnSelected },
			{ "CollapseControlRigAnimLayers", &UControlRigSequencerEditorLibrary::execCollapseControlRigAnimLayers },
			{ "Compensate", &UControlRigSequencerEditorLibrary::execCompensate },
			{ "CompensateAll", &UControlRigSequencerEditorLibrary::execCompensateAll },
			{ "DeleteConstraintKey", &UControlRigSequencerEditorLibrary::execDeleteConstraintKey },
			{ "DeleteControlRigSpace", &UControlRigSequencerEditorLibrary::execDeleteControlRigSpace },
			{ "FindOrCreateControlRigComponentTrack", &UControlRigSequencerEditorLibrary::execFindOrCreateControlRigComponentTrack },
			{ "FindOrCreateControlRigTrack", &UControlRigSequencerEditorLibrary::execFindOrCreateControlRigTrack },
			{ "GetActorWorldTransform", &UControlRigSequencerEditorLibrary::execGetActorWorldTransform },
			{ "GetActorWorldTransforms", &UControlRigSequencerEditorLibrary::execGetActorWorldTransforms },
			{ "GetConstraintKeys", &UControlRigSequencerEditorLibrary::execGetConstraintKeys },
			{ "GetConstraintsForHandle", &UControlRigSequencerEditorLibrary::execGetConstraintsForHandle },
			{ "GetControlRigs", &UControlRigSequencerEditorLibrary::execGetControlRigs },
			{ "GetControlRigWorldTransform", &UControlRigSequencerEditorLibrary::execGetControlRigWorldTransform },
			{ "GetControlRigWorldTransforms", &UControlRigSequencerEditorLibrary::execGetControlRigWorldTransforms },
			{ "GetControlsMask", &UControlRigSequencerEditorLibrary::execGetControlsMask },
			{ "GetDefaultParentKey", &UControlRigSequencerEditorLibrary::execGetDefaultParentKey },
			{ "GetFKControlRigApplyMode", &UControlRigSequencerEditorLibrary::execGetFKControlRigApplyMode },
			{ "GetLocalControlRigBool", &UControlRigSequencerEditorLibrary::execGetLocalControlRigBool },
			{ "GetLocalControlRigBools", &UControlRigSequencerEditorLibrary::execGetLocalControlRigBools },
			{ "GetLocalControlRigEulerTransform", &UControlRigSequencerEditorLibrary::execGetLocalControlRigEulerTransform },
			{ "GetLocalControlRigEulerTransforms", &UControlRigSequencerEditorLibrary::execGetLocalControlRigEulerTransforms },
			{ "GetLocalControlRigFloat", &UControlRigSequencerEditorLibrary::execGetLocalControlRigFloat },
			{ "GetLocalControlRigFloats", &UControlRigSequencerEditorLibrary::execGetLocalControlRigFloats },
			{ "GetLocalControlRigInt", &UControlRigSequencerEditorLibrary::execGetLocalControlRigInt },
			{ "GetLocalControlRigInts", &UControlRigSequencerEditorLibrary::execGetLocalControlRigInts },
			{ "GetLocalControlRigPosition", &UControlRigSequencerEditorLibrary::execGetLocalControlRigPosition },
			{ "GetLocalControlRigPositions", &UControlRigSequencerEditorLibrary::execGetLocalControlRigPositions },
			{ "GetLocalControlRigRotator", &UControlRigSequencerEditorLibrary::execGetLocalControlRigRotator },
			{ "GetLocalControlRigRotators", &UControlRigSequencerEditorLibrary::execGetLocalControlRigRotators },
			{ "GetLocalControlRigScale", &UControlRigSequencerEditorLibrary::execGetLocalControlRigScale },
			{ "GetLocalControlRigScales", &UControlRigSequencerEditorLibrary::execGetLocalControlRigScales },
			{ "GetLocalControlRigTransform", &UControlRigSequencerEditorLibrary::execGetLocalControlRigTransform },
			{ "GetLocalControlRigTransformNoScale", &UControlRigSequencerEditorLibrary::execGetLocalControlRigTransformNoScale },
			{ "GetLocalControlRigTransformNoScales", &UControlRigSequencerEditorLibrary::execGetLocalControlRigTransformNoScales },
			{ "GetLocalControlRigTransforms", &UControlRigSequencerEditorLibrary::execGetLocalControlRigTransforms },
			{ "GetLocalControlRigVector2D", &UControlRigSequencerEditorLibrary::execGetLocalControlRigVector2D },
			{ "GetLocalControlRigVector2Ds", &UControlRigSequencerEditorLibrary::execGetLocalControlRigVector2Ds },
			{ "GetSkeletalMeshComponentWorldTransform", &UControlRigSequencerEditorLibrary::execGetSkeletalMeshComponentWorldTransform },
			{ "GetSkeletalMeshComponentWorldTransforms", &UControlRigSequencerEditorLibrary::execGetSkeletalMeshComponentWorldTransforms },
			{ "GetVisibleControlRigs", &UControlRigSequencerEditorLibrary::execGetVisibleControlRigs },
			{ "GetWorldSpaceReferenceKey", &UControlRigSequencerEditorLibrary::execGetWorldSpaceReferenceKey },
			{ "HideAllControls", &UControlRigSequencerEditorLibrary::execHideAllControls },
			{ "ImportFBXToControlRigTrack", &UControlRigSequencerEditorLibrary::execImportFBXToControlRigTrack },
			{ "IsFKControlRig", &UControlRigSequencerEditorLibrary::execIsFKControlRig },
			{ "LoadAnimSequenceIntoControlRigSection", &UControlRigSequencerEditorLibrary::execLoadAnimSequenceIntoControlRigSection },
			{ "MoveConstraintKey", &UControlRigSequencerEditorLibrary::execMoveConstraintKey },
			{ "MoveControlRigSpace", &UControlRigSequencerEditorLibrary::execMoveControlRigSpace },
			{ "RenameControlRigControlChannels", &UControlRigSequencerEditorLibrary::execRenameControlRigControlChannels },
			{ "SetConstraintActiveKey", &UControlRigSequencerEditorLibrary::execSetConstraintActiveKey },
			{ "SetControlRigApplyMode", &UControlRigSequencerEditorLibrary::execSetControlRigApplyMode },
			{ "SetControlRigSpace", &UControlRigSequencerEditorLibrary::execSetControlRigSpace },
			{ "SetControlRigWorldTransform", &UControlRigSequencerEditorLibrary::execSetControlRigWorldTransform },
			{ "SetControlRigWorldTransforms", &UControlRigSequencerEditorLibrary::execSetControlRigWorldTransforms },
			{ "SetControlsMask", &UControlRigSequencerEditorLibrary::execSetControlsMask },
			{ "SetLocalControlRigBool", &UControlRigSequencerEditorLibrary::execSetLocalControlRigBool },
			{ "SetLocalControlRigBools", &UControlRigSequencerEditorLibrary::execSetLocalControlRigBools },
			{ "SetLocalControlRigEulerTransform", &UControlRigSequencerEditorLibrary::execSetLocalControlRigEulerTransform },
			{ "SetLocalControlRigEulerTransforms", &UControlRigSequencerEditorLibrary::execSetLocalControlRigEulerTransforms },
			{ "SetLocalControlRigFloat", &UControlRigSequencerEditorLibrary::execSetLocalControlRigFloat },
			{ "SetLocalControlRigFloats", &UControlRigSequencerEditorLibrary::execSetLocalControlRigFloats },
			{ "SetLocalControlRigInt", &UControlRigSequencerEditorLibrary::execSetLocalControlRigInt },
			{ "SetLocalControlRigInts", &UControlRigSequencerEditorLibrary::execSetLocalControlRigInts },
			{ "SetLocalControlRigPosition", &UControlRigSequencerEditorLibrary::execSetLocalControlRigPosition },
			{ "SetLocalControlRigPositions", &UControlRigSequencerEditorLibrary::execSetLocalControlRigPositions },
			{ "SetLocalControlRigRotator", &UControlRigSequencerEditorLibrary::execSetLocalControlRigRotator },
			{ "SetLocalControlRigRotators", &UControlRigSequencerEditorLibrary::execSetLocalControlRigRotators },
			{ "SetLocalControlRigScale", &UControlRigSequencerEditorLibrary::execSetLocalControlRigScale },
			{ "SetLocalControlRigScales", &UControlRigSequencerEditorLibrary::execSetLocalControlRigScales },
			{ "SetLocalControlRigTransform", &UControlRigSequencerEditorLibrary::execSetLocalControlRigTransform },
			{ "SetLocalControlRigTransformNoScale", &UControlRigSequencerEditorLibrary::execSetLocalControlRigTransformNoScale },
			{ "SetLocalControlRigTransformNoScales", &UControlRigSequencerEditorLibrary::execSetLocalControlRigTransformNoScales },
			{ "SetLocalControlRigTransforms", &UControlRigSequencerEditorLibrary::execSetLocalControlRigTransforms },
			{ "SetLocalControlRigVector2D", &UControlRigSequencerEditorLibrary::execSetLocalControlRigVector2D },
			{ "SetLocalControlRigVector2Ds", &UControlRigSequencerEditorLibrary::execSetLocalControlRigVector2Ds },
			{ "ShowAllControls", &UControlRigSequencerEditorLibrary::execShowAllControls },
			{ "SnapControlRig", &UControlRigSequencerEditorLibrary::execSnapControlRig },
			{ "TweenControlRig", &UControlRigSequencerEditorLibrary::execTweenControlRig },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_AddConstraint_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventAddConstraint_Parms
		{
			UWorld* World;
			ETransformConstraintType InType;
			UTransformableHandle* InChild;
			UTransformableHandle* InParent;
			bool bMaintainOffset;
			UTickableConstraint* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InChild;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMaintainOffset_MetaData[];
#endif
		static void NewProp_bMaintainOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaintainOffset;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_AddConstraint_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventAddConstraint_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_AddConstraint_Statics::NewProp_InType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_AddConstraint_Statics::NewProp_InType = { "InType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventAddConstraint_Parms, InType), Z_Construct_UEnum_AnimationCore_ETransformConstraintType, METADATA_PARAMS(nullptr, 0) }; // 2587833052
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_AddConstraint_Statics::NewProp_InChild = { "InChild", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventAddConstraint_Parms, InChild), Z_Construct_UClass_UTransformableHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_AddConstraint_Statics::NewProp_InParent = { "InParent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventAddConstraint_Parms, InParent), Z_Construct_UClass_UTransformableHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_AddConstraint_Statics::NewProp_bMaintainOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UControlRigSequencerEditorLibrary_AddConstraint_Statics::NewProp_bMaintainOffset_SetBit(void* Obj)
	{
		((ControlRigSequencerEditorLibrary_eventAddConstraint_Parms*)Obj)->bMaintainOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_AddConstraint_Statics::NewProp_bMaintainOffset = { "bMaintainOffset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigSequencerEditorLibrary_eventAddConstraint_Parms), &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_AddConstraint_Statics::NewProp_bMaintainOffset_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_AddConstraint_Statics::NewProp_bMaintainOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_AddConstraint_Statics::NewProp_bMaintainOffset_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_AddConstraint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventAddConstraint_Parms, ReturnValue), Z_Construct_UClass_UTickableConstraint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_AddConstraint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_AddConstraint_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_AddConstraint_Statics::NewProp_InType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_AddConstraint_Statics::NewProp_InType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_AddConstraint_Statics::NewProp_InChild,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_AddConstraint_Statics::NewProp_InParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_AddConstraint_Statics::NewProp_bMaintainOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_AddConstraint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_AddConstraint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Add a constraint possibly adding to sequencer also if one is open.\n\x09* @param World The active world\n\x09* @param InType Type of constraint to create\n\x09* @param InChild The handle to the transormable to be constrainted\n\x09* @param InParent The handle to the parent of the constraint\n\x09* @param bMaintainOffset Whether to maintain offset between child and parent when setting the constraint\n\x09* @return Returns the constraint if created all nullptr if not\n\x09*/" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Add a constraint possibly adding to sequencer also if one is open.\n@param World The active world\n@param InType Type of constraint to create\n@param InChild The handle to the transormable to be constrainted\n@param InParent The handle to the parent of the constraint\n@param bMaintainOffset Whether to maintain offset between child and parent when setting the constraint\n@return Returns the constraint if created all nullptr if not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_AddConstraint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "AddConstraint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_AddConstraint_Statics::ControlRigSequencerEditorLibrary_eventAddConstraint_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_AddConstraint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_AddConstraint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_AddConstraint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_AddConstraint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_AddConstraint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_AddConstraint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeConstraint_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventBakeConstraint_Parms
		{
			UWorld* World;
			UTickableConstraint* Constraint;
			TArray<FFrameNumber> Frames;
			ESequenceTimeUnit TimeUnit;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Constraint;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Frames;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeConstraint_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventBakeConstraint_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeConstraint_Statics::NewProp_Constraint = { "Constraint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventBakeConstraint_Parms, Constraint), Z_Construct_UClass_UTickableConstraint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeConstraint_Statics::NewProp_Frames_Inner = { "Frames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeConstraint_Statics::NewProp_Frames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeConstraint_Statics::NewProp_Frames = { "Frames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventBakeConstraint_Parms, Frames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeConstraint_Statics::NewProp_Frames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeConstraint_Statics::NewProp_Frames_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeConstraint_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeConstraint_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventBakeConstraint_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	void Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeConstraint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ControlRigSequencerEditorLibrary_eventBakeConstraint_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeConstraint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigSequencerEditorLibrary_eventBakeConstraint_Parms), &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeConstraint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeConstraint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeConstraint_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeConstraint_Statics::NewProp_Constraint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeConstraint_Statics::NewProp_Frames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeConstraint_Statics::NewProp_Frames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeConstraint_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeConstraint_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeConstraint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeConstraint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Bake the constraint to keys based on the passed in frames. This will use the open sequencer to bake. See ConstraintsScriptingLibrary to get the list of available constraints\n\x09* @param World The active world\n\x09* @param Constraint The Constraint to bake. After baking it will be keyed to be inactive of the range of frames that are baked\n\x09* @param Frames The frames to bake, if the array is empty it will use the active time ranges of the constraint to deteremine where it should bake\n\x09* @param TimeUnit Unit for all frame and time values, either in display rate or tick resolution\n\x09* @return Returns True if successful, False otherwise\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Bake the constraint to keys based on the passed in frames. This will use the open sequencer to bake. See ConstraintsScriptingLibrary to get the list of available constraints\n@param World The active world\n@param Constraint The Constraint to bake. After baking it will be keyed to be inactive of the range of frames that are baked\n@param Frames The frames to bake, if the array is empty it will use the active time ranges of the constraint to deteremine where it should bake\n@param TimeUnit Unit for all frame and time values, either in display rate or tick resolution\n@return Returns True if successful, False otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeConstraint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "BakeConstraint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeConstraint_Statics::ControlRigSequencerEditorLibrary_eventBakeConstraint_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeConstraint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeConstraint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeConstraint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeConstraint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeConstraint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeConstraint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeControlRigSpace_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventBakeControlRigSpace_Parms
		{
			ULevelSequence* InSequence;
			UControlRig* InControlRig;
			TArray<FName> InControlNames;
			FRigSpacePickerBakeSettings InSettings;
			ESequenceTimeUnit TimeUnit;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InControlRig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InControlNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InControlNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InControlNames;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeControlRigSpace_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventBakeControlRigSpace_Parms, InSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeControlRigSpace_Statics::NewProp_InControlRig = { "InControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventBakeControlRigSpace_Parms, InControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeControlRigSpace_Statics::NewProp_InControlNames_Inner = { "InControlNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeControlRigSpace_Statics::NewProp_InControlNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeControlRigSpace_Statics::NewProp_InControlNames = { "InControlNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventBakeControlRigSpace_Parms, InControlNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeControlRigSpace_Statics::NewProp_InControlNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeControlRigSpace_Statics::NewProp_InControlNames_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeControlRigSpace_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventBakeControlRigSpace_Parms, InSettings), Z_Construct_UScriptStruct_FRigSpacePickerBakeSettings, METADATA_PARAMS(nullptr, 0) }; // 2717217784
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeControlRigSpace_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeControlRigSpace_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventBakeControlRigSpace_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	void Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeControlRigSpace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ControlRigSequencerEditorLibrary_eventBakeControlRigSpace_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeControlRigSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigSequencerEditorLibrary_eventBakeControlRigSpace_Parms), &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeControlRigSpace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeControlRigSpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeControlRigSpace_Statics::NewProp_InSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeControlRigSpace_Statics::NewProp_InControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeControlRigSpace_Statics::NewProp_InControlNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeControlRigSpace_Statics::NewProp_InControlNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeControlRigSpace_Statics::NewProp_InSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeControlRigSpace_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeControlRigSpace_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeControlRigSpace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeControlRigSpace_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/** Bake specified Control Rig Controls to a specified Space based upon the current settings\n\x09* @param InSequence Sequence to bake\n\x09* @param InControlRig ControlRig to bake\n\x09* @param InControlNames The name of the Controls to bake\n\x09* @param InSettings  The settings for the bake, e.g, how long to bake, to key reduce etc.\n\x09* @param TimeUnit Unit for the start and end times in the InSettings parameter.\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Bake specified Control Rig Controls to a specified Space based upon the current settings\n@param InSequence Sequence to bake\n@param InControlRig ControlRig to bake\n@param InControlNames The name of the Controls to bake\n@param InSettings  The settings for the bake, e.g, how long to bake, to key reduce etc.\n@param TimeUnit Unit for the start and end times in the InSettings parameter." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeControlRigSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "BakeControlRigSpace", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeControlRigSpace_Statics::ControlRigSequencerEditorLibrary_eventBakeControlRigSpace_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeControlRigSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeControlRigSpace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeControlRigSpace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeControlRigSpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeControlRigSpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeControlRigSpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeToControlRig_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventBakeToControlRig_Parms
		{
			UWorld* World;
			ULevelSequence* LevelSequence;
			UClass* ControlRigClass;
			UAnimSeqExportOption* ExportOptions;
			bool bReduceKeys;
			float Tolerance;
			FMovieSceneBindingProxy Binding;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ControlRigClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExportOptions;
		static void NewProp_bReduceKeys_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReduceKeys;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Binding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Binding;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeToControlRig_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventBakeToControlRig_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeToControlRig_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventBakeToControlRig_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeToControlRig_Statics::NewProp_ControlRigClass = { "ControlRigClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventBakeToControlRig_Parms, ControlRigClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeToControlRig_Statics::NewProp_ExportOptions = { "ExportOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventBakeToControlRig_Parms, ExportOptions), Z_Construct_UClass_UAnimSeqExportOption_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeToControlRig_Statics::NewProp_bReduceKeys_SetBit(void* Obj)
	{
		((ControlRigSequencerEditorLibrary_eventBakeToControlRig_Parms*)Obj)->bReduceKeys = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeToControlRig_Statics::NewProp_bReduceKeys = { "bReduceKeys", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigSequencerEditorLibrary_eventBakeToControlRig_Parms), &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeToControlRig_Statics::NewProp_bReduceKeys_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeToControlRig_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventBakeToControlRig_Parms, Tolerance), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeToControlRig_Statics::NewProp_Binding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeToControlRig_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventBakeToControlRig_Parms, Binding), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeToControlRig_Statics::NewProp_Binding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeToControlRig_Statics::NewProp_Binding_MetaData)) }; // 716961670
	void Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeToControlRig_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ControlRigSequencerEditorLibrary_eventBakeToControlRig_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeToControlRig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigSequencerEditorLibrary_eventBakeToControlRig_Parms), &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeToControlRig_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeToControlRig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeToControlRig_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeToControlRig_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeToControlRig_Statics::NewProp_ControlRigClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeToControlRig_Statics::NewProp_ExportOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeToControlRig_Statics::NewProp_bReduceKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeToControlRig_Statics::NewProp_Tolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeToControlRig_Statics::NewProp_Binding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeToControlRig_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeToControlRig_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Bake the current animation in the binding to a Control Rig track\n\x09* @param World The active world\n\x09* @param LevelSequence The LevelSequence we are baking\n\x09* @param ControlRigClass The class of the Control Rig\n\x09* @param ExportOptions Export options for creating an animation sequence\n\x09* @param bKeyReduce If true do key reduction based upon Tolerance, if false don't\n\x09* @param Tolerance If reducing keys, tolerance about which keys will be removed, smaller tolerance, more keys usually.\n\x09* @param Binding The binding upon which to bake\n\x09* @return returns True if successful, False otherwise\n\x09*/" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Bake the current animation in the binding to a Control Rig track\n@param World The active world\n@param LevelSequence The LevelSequence we are baking\n@param ControlRigClass The class of the Control Rig\n@param ExportOptions Export options for creating an animation sequence\n@param bKeyReduce If true do key reduction based upon Tolerance, if false don't\n@param Tolerance If reducing keys, tolerance about which keys will be removed, smaller tolerance, more keys usually.\n@param Binding The binding upon which to bake\n@return returns True if successful, False otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeToControlRig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "BakeToControlRig", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeToControlRig_Statics::ControlRigSequencerEditorLibrary_eventBakeToControlRig_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeToControlRig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeToControlRig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeToControlRig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeToControlRig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeToControlRig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeToControlRig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BlendValuesOnSelected_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventBlendValuesOnSelected_Parms
		{
			ULevelSequence* LevelSequence;
			EAnimToolBlendOperation BlendOperation;
			float BlendValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlendOperation_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendOperation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BlendValuesOnSelected_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventBlendValuesOnSelected_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BlendValuesOnSelected_Statics::NewProp_BlendOperation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BlendValuesOnSelected_Statics::NewProp_BlendOperation = { "BlendOperation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventBlendValuesOnSelected_Parms, BlendOperation), Z_Construct_UEnum_ControlRigEditor_EAnimToolBlendOperation, METADATA_PARAMS(nullptr, 0) }; // 1488481249
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BlendValuesOnSelected_Statics::NewProp_BlendValue = { "BlendValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventBlendValuesOnSelected_Parms, BlendValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BlendValuesOnSelected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ControlRigSequencerEditorLibrary_eventBlendValuesOnSelected_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BlendValuesOnSelected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigSequencerEditorLibrary_eventBlendValuesOnSelected_Parms), &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BlendValuesOnSelected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BlendValuesOnSelected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BlendValuesOnSelected_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BlendValuesOnSelected_Statics::NewProp_BlendOperation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BlendValuesOnSelected_Statics::NewProp_BlendOperation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BlendValuesOnSelected_Statics::NewProp_BlendValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BlendValuesOnSelected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BlendValuesOnSelected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Peform specified blend operation based upon selected keys in the curve editor or selected control rig controls\n\x09* @param LevelSequence The LevelSequence that's loaded in the editor\n\x09* @param EAnimToolBlendOperation The operation to perform\n\x09* @param BlendValue The blend value to use, range from -1(blend to previous) to 1(blend to next)\n\x09*/" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Peform specified blend operation based upon selected keys in the curve editor or selected control rig controls\n@param LevelSequence The LevelSequence that's loaded in the editor\n@param EAnimToolBlendOperation The operation to perform\n@param BlendValue The blend value to use, range from -1(blend to previous) to 1(blend to next)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BlendValuesOnSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "BlendValuesOnSelected", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BlendValuesOnSelected_Statics::ControlRigSequencerEditorLibrary_eventBlendValuesOnSelected_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BlendValuesOnSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BlendValuesOnSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BlendValuesOnSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BlendValuesOnSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BlendValuesOnSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BlendValuesOnSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_CollapseControlRigAnimLayers_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventCollapseControlRigAnimLayers_Parms
		{
			ULevelSequence* InSequence;
			UMovieSceneControlRigParameterTrack* InTrack;
			bool bKeyReduce;
			float Tolerance;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTrack_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InTrack;
		static void NewProp_bKeyReduce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeyReduce;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_CollapseControlRigAnimLayers_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventCollapseControlRigAnimLayers_Parms, InSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_CollapseControlRigAnimLayers_Statics::NewProp_InTrack_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_CollapseControlRigAnimLayers_Statics::NewProp_InTrack = { "InTrack", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventCollapseControlRigAnimLayers_Parms, InTrack), Z_Construct_UClass_UMovieSceneControlRigParameterTrack_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_CollapseControlRigAnimLayers_Statics::NewProp_InTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_CollapseControlRigAnimLayers_Statics::NewProp_InTrack_MetaData)) };
	void Z_Construct_UFunction_UControlRigSequencerEditorLibrary_CollapseControlRigAnimLayers_Statics::NewProp_bKeyReduce_SetBit(void* Obj)
	{
		((ControlRigSequencerEditorLibrary_eventCollapseControlRigAnimLayers_Parms*)Obj)->bKeyReduce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_CollapseControlRigAnimLayers_Statics::NewProp_bKeyReduce = { "bKeyReduce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigSequencerEditorLibrary_eventCollapseControlRigAnimLayers_Parms), &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_CollapseControlRigAnimLayers_Statics::NewProp_bKeyReduce_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_CollapseControlRigAnimLayers_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventCollapseControlRigAnimLayers_Parms, Tolerance), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UControlRigSequencerEditorLibrary_CollapseControlRigAnimLayers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ControlRigSequencerEditorLibrary_eventCollapseControlRigAnimLayers_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_CollapseControlRigAnimLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigSequencerEditorLibrary_eventCollapseControlRigAnimLayers_Parms), &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_CollapseControlRigAnimLayers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_CollapseControlRigAnimLayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_CollapseControlRigAnimLayers_Statics::NewProp_InSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_CollapseControlRigAnimLayers_Statics::NewProp_InTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_CollapseControlRigAnimLayers_Statics::NewProp_bKeyReduce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_CollapseControlRigAnimLayers_Statics::NewProp_Tolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_CollapseControlRigAnimLayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_CollapseControlRigAnimLayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/*\n\x09 * Collapse and bake all sections and layers on a control rig track to just one section.\n\x09 *\n\x09 * @param InSequence Sequence that has track to collapse\n\x09 * @param InTrack Track for layers to collapse\n\x09 * @param bKeyReduce If true do key reduction based upon Tolerance, if false don't\n\x09 * @param Tolerance If reducing keys, tolerance about which keys will be removed, smaller tolerance, more keys usually.\n\x09 */" },
		{ "CPP_Default_bKeyReduce", "false" },
		{ "CPP_Default_Tolerance", "0.001000" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "* Collapse and bake all sections and layers on a control rig track to just one section.\n*\n* @param InSequence Sequence that has track to collapse\n* @param InTrack Track for layers to collapse\n* @param bKeyReduce If true do key reduction based upon Tolerance, if false don't\n* @param Tolerance If reducing keys, tolerance about which keys will be removed, smaller tolerance, more keys usually." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_CollapseControlRigAnimLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "CollapseControlRigAnimLayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_CollapseControlRigAnimLayers_Statics::ControlRigSequencerEditorLibrary_eventCollapseControlRigAnimLayers_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_CollapseControlRigAnimLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_CollapseControlRigAnimLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_CollapseControlRigAnimLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_CollapseControlRigAnimLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_CollapseControlRigAnimLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_CollapseControlRigAnimLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_Compensate_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventCompensate_Parms
		{
			UTickableConstraint* InConstraint;
			FFrameNumber InTime;
			ESequenceTimeUnit TimeUnit;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InConstraint;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTime;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_Compensate_Statics::NewProp_InConstraint = { "InConstraint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventCompensate_Parms, InConstraint), Z_Construct_UClass_UTickableConstraint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_Compensate_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventCompensate_Parms, InTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_Compensate_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_Compensate_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventCompensate_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	void Z_Construct_UFunction_UControlRigSequencerEditorLibrary_Compensate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ControlRigSequencerEditorLibrary_eventCompensate_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_Compensate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigSequencerEditorLibrary_eventCompensate_Parms), &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_Compensate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_Compensate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_Compensate_Statics::NewProp_InConstraint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_Compensate_Statics::NewProp_InTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_Compensate_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_Compensate_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_Compensate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_Compensate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Compensate constraint at the specfied time \n\x09* @param InConstraint The constraint to compensate\n\x09* @param InTime Time to compensate\n\x09* @param TimeUnit Unit for the InTime, either in display rate or tick resolution\n\x09* @return Returns true if it can compensate\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Compensate constraint at the specfied time\n@param InConstraint The constraint to compensate\n@param InTime Time to compensate\n@param TimeUnit Unit for the InTime, either in display rate or tick resolution\n@return Returns true if it can compensate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_Compensate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "Compensate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_Compensate_Statics::ControlRigSequencerEditorLibrary_eventCompensate_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_Compensate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_Compensate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_Compensate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_Compensate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_Compensate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_Compensate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_CompensateAll_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventCompensateAll_Parms
		{
			UTickableConstraint* InConstraint;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InConstraint;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_CompensateAll_Statics::NewProp_InConstraint = { "InConstraint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventCompensateAll_Parms, InConstraint), Z_Construct_UClass_UTickableConstraint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UControlRigSequencerEditorLibrary_CompensateAll_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ControlRigSequencerEditorLibrary_eventCompensateAll_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_CompensateAll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigSequencerEditorLibrary_eventCompensateAll_Parms), &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_CompensateAll_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_CompensateAll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_CompensateAll_Statics::NewProp_InConstraint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_CompensateAll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_CompensateAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Compensate constraint at all keys\n\x09* @param InConstraint The constraint to compensate\n\x09* @return Returns true if it can compensate\n\x09*/" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Compensate constraint at all keys\n@param InConstraint The constraint to compensate\n@return Returns true if it can compensate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_CompensateAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "CompensateAll", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_CompensateAll_Statics::ControlRigSequencerEditorLibrary_eventCompensateAll_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_CompensateAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_CompensateAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_CompensateAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_CompensateAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_CompensateAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_CompensateAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteConstraintKey_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventDeleteConstraintKey_Parms
		{
			UTickableConstraint* Constraint;
			UMovieSceneSection* ConstraintSection;
			FFrameNumber InTime;
			ESequenceTimeUnit TimeUnit;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Constraint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintSection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConstraintSection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTime;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteConstraintKey_Statics::NewProp_Constraint = { "Constraint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventDeleteConstraintKey_Parms, Constraint), Z_Construct_UClass_UTickableConstraint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteConstraintKey_Statics::NewProp_ConstraintSection_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteConstraintKey_Statics::NewProp_ConstraintSection = { "ConstraintSection", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventDeleteConstraintKey_Parms, ConstraintSection), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteConstraintKey_Statics::NewProp_ConstraintSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteConstraintKey_Statics::NewProp_ConstraintSection_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteConstraintKey_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventDeleteConstraintKey_Parms, InTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteConstraintKey_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteConstraintKey_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventDeleteConstraintKey_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	void Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteConstraintKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ControlRigSequencerEditorLibrary_eventDeleteConstraintKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteConstraintKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigSequencerEditorLibrary_eventDeleteConstraintKey_Parms), &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteConstraintKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteConstraintKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteConstraintKey_Statics::NewProp_Constraint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteConstraintKey_Statics::NewProp_ConstraintSection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteConstraintKey_Statics::NewProp_InTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteConstraintKey_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteConstraintKey_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteConstraintKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteConstraintKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/** Delete the Key for the Constraint at the specified time. \n\x09* @param InConstraint The constraint whose key to move\n\x09* @param ConstraintSection Section containing Cosntraint Key\n\x09* @param InTime Time to delete the constraint.\n\x09* @param TimeUnit Unit for the InTime, either in display rate or tick resolution\n\x09* @return Will return false if function fails,  for example if there is no key at this time it will fail.\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Delete the Key for the Constraint at the specified time.\n@param InConstraint The constraint whose key to move\n@param ConstraintSection Section containing Cosntraint Key\n@param InTime Time to delete the constraint.\n@param TimeUnit Unit for the InTime, either in display rate or tick resolution\n@return Will return false if function fails,  for example if there is no key at this time it will fail." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteConstraintKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "DeleteConstraintKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteConstraintKey_Statics::ControlRigSequencerEditorLibrary_eventDeleteConstraintKey_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteConstraintKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteConstraintKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteConstraintKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteConstraintKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteConstraintKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteConstraintKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteControlRigSpace_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventDeleteControlRigSpace_Parms
		{
			ULevelSequence* InSequence;
			UControlRig* InControlRig;
			FName InControlName;
			FFrameNumber InTime;
			ESequenceTimeUnit TimeUnit;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InControlRig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InControlName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTime;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteControlRigSpace_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventDeleteControlRigSpace_Parms, InSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteControlRigSpace_Statics::NewProp_InControlRig = { "InControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventDeleteControlRigSpace_Parms, InControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteControlRigSpace_Statics::NewProp_InControlName = { "InControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventDeleteControlRigSpace_Parms, InControlName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteControlRigSpace_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventDeleteControlRigSpace_Parms, InTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteControlRigSpace_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteControlRigSpace_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventDeleteControlRigSpace_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	void Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteControlRigSpace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ControlRigSequencerEditorLibrary_eventDeleteControlRigSpace_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteControlRigSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigSequencerEditorLibrary_eventDeleteControlRigSpace_Parms), &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteControlRigSpace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteControlRigSpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteControlRigSpace_Statics::NewProp_InSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteControlRigSpace_Statics::NewProp_InControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteControlRigSpace_Statics::NewProp_InControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteControlRigSpace_Statics::NewProp_InTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteControlRigSpace_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteControlRigSpace_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteControlRigSpace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteControlRigSpace_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/** Delete the Control Rig Space Key for the Control at the specified time. This will delete any attached Control Rig keys at this time and will perform any needed compensation to the new space.\n\x09*\n\x09* @param InSequence Sequence to set the space\n\x09* @param InControlRig ControlRig with the Control\n\x09* @param InControlName The name of the Control\n\x09* @param InTime Time to delete the space.\n\x09* @param TimeUnit Unit for the InTime, either in display rate or tick resolution\n\x09* @return Will return false if function fails,  for example if there is no key at this time it will fail.\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Delete the Control Rig Space Key for the Control at the specified time. This will delete any attached Control Rig keys at this time and will perform any needed compensation to the new space.\n\n@param InSequence Sequence to set the space\n@param InControlRig ControlRig with the Control\n@param InControlName The name of the Control\n@param InTime Time to delete the space.\n@param TimeUnit Unit for the InTime, either in display rate or tick resolution\n@return Will return false if function fails,  for example if there is no key at this time it will fail." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteControlRigSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "DeleteControlRigSpace", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteControlRigSpace_Statics::ControlRigSequencerEditorLibrary_eventDeleteControlRigSpace_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteControlRigSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteControlRigSpace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteControlRigSpace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteControlRigSpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteControlRigSpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteControlRigSpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigComponentTrack_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventFindOrCreateControlRigComponentTrack_Parms
		{
			UWorld* World;
			ULevelSequence* LevelSequence;
			FMovieSceneBindingProxy InBinding;
			TArray<UMovieSceneTrack*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InBinding;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigComponentTrack_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventFindOrCreateControlRigComponentTrack_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigComponentTrack_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventFindOrCreateControlRigComponentTrack_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigComponentTrack_Statics::NewProp_InBinding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigComponentTrack_Statics::NewProp_InBinding = { "InBinding", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventFindOrCreateControlRigComponentTrack_Parms, InBinding), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigComponentTrack_Statics::NewProp_InBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigComponentTrack_Statics::NewProp_InBinding_MetaData)) }; // 716961670
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigComponentTrack_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigComponentTrack_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigComponentTrack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventFindOrCreateControlRigComponentTrack_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigComponentTrack_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigComponentTrack_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigComponentTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigComponentTrack_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigComponentTrack_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigComponentTrack_Statics::NewProp_InBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigComponentTrack_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigComponentTrack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigComponentTrack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Find or create a Control Rig Component\n\x09* @param World The world used to spawn into temporarily if binding is a spawnable\n\x09* @param LevelSequence The LevelSequence to find or create\n\x09* @param InBinding The binding (actor or component binding) to find or create the Control Rig tracks\n\x09* @return returns Find array of component Control Rigs that were found or created\n\x09*/" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Find or create a Control Rig Component\n@param World The world used to spawn into temporarily if binding is a spawnable\n@param LevelSequence The LevelSequence to find or create\n@param InBinding The binding (actor or component binding) to find or create the Control Rig tracks\n@return returns Find array of component Control Rigs that were found or created" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigComponentTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "FindOrCreateControlRigComponentTrack", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigComponentTrack_Statics::ControlRigSequencerEditorLibrary_eventFindOrCreateControlRigComponentTrack_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigComponentTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigComponentTrack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigComponentTrack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigComponentTrack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigComponentTrack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigComponentTrack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigTrack_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventFindOrCreateControlRigTrack_Parms
		{
			UWorld* World;
			ULevelSequence* LevelSequence;
			const UClass* ControlRigClass;
			FMovieSceneBindingProxy InBinding;
			UMovieSceneTrack* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlRigClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ControlRigClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InBinding;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigTrack_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventFindOrCreateControlRigTrack_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigTrack_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventFindOrCreateControlRigTrack_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigTrack_Statics::NewProp_ControlRigClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigTrack_Statics::NewProp_ControlRigClass = { "ControlRigClass", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventFindOrCreateControlRigTrack_Parms, ControlRigClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigTrack_Statics::NewProp_ControlRigClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigTrack_Statics::NewProp_ControlRigClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigTrack_Statics::NewProp_InBinding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigTrack_Statics::NewProp_InBinding = { "InBinding", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventFindOrCreateControlRigTrack_Parms, InBinding), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigTrack_Statics::NewProp_InBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigTrack_Statics::NewProp_InBinding_MetaData)) }; // 716961670
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigTrack_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigTrack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventFindOrCreateControlRigTrack_Parms, ReturnValue), Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigTrack_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigTrack_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigTrack_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigTrack_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigTrack_Statics::NewProp_ControlRigClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigTrack_Statics::NewProp_InBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigTrack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigTrack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Find or create a Control Rig track of a specific class based upon the binding\n\x09* @param World The world used to spawn into temporarily if binding is a spawnable\n\x09* @param LevelSequence The LevelSequence to find or create\n\x09* @param ControlRigClass The class of the Control Rig\n\x09* @param InBinding The binding (actor or component binding) to find or create the Control Rig track\n\x09* @return returns Return the found or created track\n\x09*/" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Find or create a Control Rig track of a specific class based upon the binding\n@param World The world used to spawn into temporarily if binding is a spawnable\n@param LevelSequence The LevelSequence to find or create\n@param ControlRigClass The class of the Control Rig\n@param InBinding The binding (actor or component binding) to find or create the Control Rig track\n@return returns Return the found or created track" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "FindOrCreateControlRigTrack", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigTrack_Statics::ControlRigSequencerEditorLibrary_eventFindOrCreateControlRigTrack_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigTrack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigTrack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigTrack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigTrack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigTrack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransform_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventGetActorWorldTransform_Parms
		{
			ULevelSequence* LevelSequence;
			AActor* Actor;
			FFrameNumber Frame;
			ESequenceTimeUnit TimeUnit;
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frame;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransform_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetActorWorldTransform_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransform_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetActorWorldTransform_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransform_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetActorWorldTransform_Parms, Frame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransform_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransform_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetActorWorldTransform_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetActorWorldTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransform_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransform_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransform_Statics::NewProp_Frame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransform_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransform_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Get Actors World Transform at a specific time\n\x09* @param LevelSequence Active Sequence to get transform for\n\x09* @param Actor The actor\n\x09* @param Frame Time to get the transform\n\x09* @param TimeUnit Unit for frame values, either in display rate or tick resolution\n\x09* @return Returns World Transform\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Get Actors World Transform at a specific time\n@param LevelSequence Active Sequence to get transform for\n@param Actor The actor\n@param Frame Time to get the transform\n@param TimeUnit Unit for frame values, either in display rate or tick resolution\n@return Returns World Transform" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "GetActorWorldTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransform_Statics::ControlRigSequencerEditorLibrary_eventGetActorWorldTransform_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransforms_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventGetActorWorldTransforms_Parms
		{
			ULevelSequence* LevelSequence;
			AActor* Actor;
			TArray<FFrameNumber> Frames;
			ESequenceTimeUnit TimeUnit;
			TArray<FTransform> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Frames;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransforms_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetActorWorldTransforms_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransforms_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetActorWorldTransforms_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransforms_Statics::NewProp_Frames_Inner = { "Frames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransforms_Statics::NewProp_Frames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransforms_Statics::NewProp_Frames = { "Frames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetActorWorldTransforms_Parms, Frames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransforms_Statics::NewProp_Frames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransforms_Statics::NewProp_Frames_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransforms_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransforms_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetActorWorldTransforms_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransforms_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransforms_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetActorWorldTransforms_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransforms_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransforms_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransforms_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransforms_Statics::NewProp_Frames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransforms_Statics::NewProp_Frames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransforms_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransforms_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransforms_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransforms_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransforms_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Get Actors World Transforms at specific times\n\x09* @param LevelSequence Active Sequence to get transform for\n\x09* @param Actor The actor\n\x09* @param Frames Times to get the transform\n\x09* @param TimeUnit Unit for frame values, either in display rate or tick resolution\n\x09* @return Returns World Transforms\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Get Actors World Transforms at specific times\n@param LevelSequence Active Sequence to get transform for\n@param Actor The actor\n@param Frames Times to get the transform\n@param TimeUnit Unit for frame values, either in display rate or tick resolution\n@return Returns World Transforms" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransforms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "GetActorWorldTransforms", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransforms_Statics::ControlRigSequencerEditorLibrary_eventGetActorWorldTransforms_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransforms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransforms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransforms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransforms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransforms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransforms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintKeys_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventGetConstraintKeys_Parms
		{
			UTickableConstraint* InConstraint;
			UMovieSceneSection* ConstraintSection;
			TArray<bool> OutBools;
			TArray<FFrameNumber> OutFrames;
			ESequenceTimeUnit TimeUnit;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InConstraint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintSection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConstraintSection;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OutBools_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutBools;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutFrames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutFrames;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintKeys_Statics::NewProp_InConstraint = { "InConstraint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetConstraintKeys_Parms, InConstraint), Z_Construct_UClass_UTickableConstraint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintKeys_Statics::NewProp_ConstraintSection_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintKeys_Statics::NewProp_ConstraintSection = { "ConstraintSection", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetConstraintKeys_Parms, ConstraintSection), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintKeys_Statics::NewProp_ConstraintSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintKeys_Statics::NewProp_ConstraintSection_MetaData)) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintKeys_Statics::NewProp_OutBools_Inner = { "OutBools", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintKeys_Statics::NewProp_OutBools = { "OutBools", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetConstraintKeys_Parms, OutBools), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintKeys_Statics::NewProp_OutFrames_Inner = { "OutFrames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintKeys_Statics::NewProp_OutFrames = { "OutFrames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetConstraintKeys_Parms, OutFrames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintKeys_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintKeys_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetConstraintKeys_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	void Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintKeys_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ControlRigSequencerEditorLibrary_eventGetConstraintKeys_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigSequencerEditorLibrary_eventGetConstraintKeys_Parms), &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintKeys_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintKeys_Statics::NewProp_InConstraint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintKeys_Statics::NewProp_ConstraintSection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintKeys_Statics::NewProp_OutBools_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintKeys_Statics::NewProp_OutBools,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintKeys_Statics::NewProp_OutFrames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintKeys_Statics::NewProp_OutFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintKeys_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintKeys_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintKeys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Get the constraint keys for the specified constraint\n\x09* @param InConstraint The constraint to get\n\x09* @param ConstraintSection Section containing Cosntraint Key\n\x09* @param OutBools Array of whether or not it's active at the specified times\n\x09* @param OutFrames The Times for the keys\n\x09* @param TimeUnit Unit for the time params, either in display rate or tick resolution\n\x09* @return Returns true if we got the keys from this constraint\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Get the constraint keys for the specified constraint\n@param InConstraint The constraint to get\n@param ConstraintSection Section containing Cosntraint Key\n@param OutBools Array of whether or not it's active at the specified times\n@param OutFrames The Times for the keys\n@param TimeUnit Unit for the time params, either in display rate or tick resolution\n@return Returns true if we got the keys from this constraint" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "GetConstraintKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintKeys_Statics::ControlRigSequencerEditorLibrary_eventGetConstraintKeys_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintsForHandle_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventGetConstraintsForHandle_Parms
		{
			UWorld* InWorld;
			const UTransformableHandle* InChild;
			TArray<UTickableConstraint*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InChild_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InChild;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintsForHandle_Statics::NewProp_InWorld = { "InWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetConstraintsForHandle_Parms, InWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintsForHandle_Statics::NewProp_InChild_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintsForHandle_Statics::NewProp_InChild = { "InChild", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetConstraintsForHandle_Parms, InChild), Z_Construct_UClass_UTransformableHandle_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintsForHandle_Statics::NewProp_InChild_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintsForHandle_Statics::NewProp_InChild_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintsForHandle_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTickableConstraint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintsForHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetConstraintsForHandle_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintsForHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintsForHandle_Statics::NewProp_InWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintsForHandle_Statics::NewProp_InChild,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintsForHandle_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintsForHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintsForHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Get all constraints for this object, which is described by a transformable handle\n\x09* @param InChild The handle to look for constraints controlling it\n\x09* @return Returns array of Constraints this handle is constrained to.\n\x09*/" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Get all constraints for this object, which is described by a transformable handle\n@param InChild The handle to look for constraints controlling it\n@return Returns array of Constraints this handle is constrained to." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintsForHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "GetConstraintsForHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintsForHandle_Statics::ControlRigSequencerEditorLibrary_eventGetConstraintsForHandle_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintsForHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintsForHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintsForHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintsForHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintsForHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintsForHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigs_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventGetControlRigs_Parms
		{
			ULevelSequence* LevelSequence;
			TArray<FControlRigSequencerBindingProxy> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigs_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetControlRigs_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FControlRigSequencerBindingProxy, METADATA_PARAMS(nullptr, 0) }; // 3788076408
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetControlRigs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3788076408
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigs_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigs_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Get all of the control rigs and their bindings in the level sequence\n\x09* @param LevelSequence The movie scene sequence to look for Control Rigs\n\x09* @return returns list of Control Rigs in the level sequence.\n\x09*/" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Get all of the control rigs and their bindings in the level sequence\n@param LevelSequence The movie scene sequence to look for Control Rigs\n@return returns list of Control Rigs in the level sequence." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "GetControlRigs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigs_Statics::ControlRigSequencerEditorLibrary_eventGetControlRigs_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransform_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventGetControlRigWorldTransform_Parms
		{
			ULevelSequence* LevelSequence;
			UControlRig* ControlRig;
			FName ControlName;
			FFrameNumber Frame;
			ESequenceTimeUnit TimeUnit;
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlRig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frame;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransform_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetControlRigWorldTransform_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransform_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetControlRigWorldTransform_Parms, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransform_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetControlRigWorldTransform_Parms, ControlName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransform_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetControlRigWorldTransform_Parms, Frame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransform_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransform_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetControlRigWorldTransform_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetControlRigWorldTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransform_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransform_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransform_Statics::NewProp_ControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransform_Statics::NewProp_Frame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransform_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransform_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Get ControlRig Control's World Transform at a specific time\n\x09* @param LevelSequence Active Sequence to get transform for\n\x09* @param ControlRig The ControlRig\n\x09* @param ControlName Name of the Control\n\x09* @param Frame Time to get the transform\n\x09* @param TimeUnit Unit for frame values, either in display rate or tick resolution\n\x09* @return Returns World Transform\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Get ControlRig Control's World Transform at a specific time\n@param LevelSequence Active Sequence to get transform for\n@param ControlRig The ControlRig\n@param ControlName Name of the Control\n@param Frame Time to get the transform\n@param TimeUnit Unit for frame values, either in display rate or tick resolution\n@return Returns World Transform" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "GetControlRigWorldTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransform_Statics::ControlRigSequencerEditorLibrary_eventGetControlRigWorldTransform_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransforms_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventGetControlRigWorldTransforms_Parms
		{
			ULevelSequence* LevelSequence;
			UControlRig* ControlRig;
			FName ControlName;
			TArray<FFrameNumber> Frames;
			ESequenceTimeUnit TimeUnit;
			TArray<FTransform> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlRig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Frames;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransforms_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetControlRigWorldTransforms_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransforms_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetControlRigWorldTransforms_Parms, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransforms_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetControlRigWorldTransforms_Parms, ControlName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransforms_Statics::NewProp_Frames_Inner = { "Frames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransforms_Statics::NewProp_Frames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransforms_Statics::NewProp_Frames = { "Frames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetControlRigWorldTransforms_Parms, Frames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransforms_Statics::NewProp_Frames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransforms_Statics::NewProp_Frames_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransforms_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransforms_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetControlRigWorldTransforms_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransforms_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransforms_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetControlRigWorldTransforms_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransforms_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransforms_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransforms_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransforms_Statics::NewProp_ControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransforms_Statics::NewProp_Frames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransforms_Statics::NewProp_Frames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransforms_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransforms_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransforms_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransforms_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransforms_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Get ControlRig Control's World Transforms at specific times\n\x09* @param LevelSequence Active Sequence to get transform for\n\x09* @param ControlRig The ControlRig\n\x09* @param ControlName Name of the Control \n\x09* @param Frames Times to get the transform\n\x09* @param TimeUnit Unit for frame values, either in display rate or tick resolution\n\x09* @return Returns World Transforms\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Get ControlRig Control's World Transforms at specific times\n@param LevelSequence Active Sequence to get transform for\n@param ControlRig The ControlRig\n@param ControlName Name of the Control\n@param Frames Times to get the transform\n@param TimeUnit Unit for frame values, either in display rate or tick resolution\n@return Returns World Transforms" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransforms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "GetControlRigWorldTransforms", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransforms_Statics::ControlRigSequencerEditorLibrary_eventGetControlRigWorldTransforms_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransforms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransforms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransforms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransforms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransforms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransforms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlsMask_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventGetControlsMask_Parms
		{
			UMovieSceneSection* InSection;
			FName ControlName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSection;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlsMask_Statics::NewProp_InSection_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlsMask_Statics::NewProp_InSection = { "InSection", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetControlsMask_Parms, InSection), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlsMask_Statics::NewProp_InSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlsMask_Statics::NewProp_InSection_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlsMask_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetControlsMask_Parms, ControlName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlsMask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ControlRigSequencerEditorLibrary_eventGetControlsMask_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlsMask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigSequencerEditorLibrary_eventGetControlsMask_Parms), &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlsMask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlsMask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlsMask_Statics::NewProp_InSection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlsMask_Statics::NewProp_ControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlsMask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlsMask_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/** Get the controls mask for the given ControlName */" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Get the controls mask for the given ControlName" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlsMask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "GetControlsMask", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlsMask_Statics::ControlRigSequencerEditorLibrary_eventGetControlsMask_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlsMask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlsMask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlsMask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlsMask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlsMask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlsMask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetDefaultParentKey_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventGetDefaultParentKey_Parms
		{
			FRigElementKey ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetDefaultParentKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetDefaultParentKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetDefaultParentKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetDefaultParentKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetDefaultParentKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/*\n\x09 * Get the default parent key, can be used a parent space.\n\x09 *\n\x09*/" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "* Get the default parent key, can be used a parent space." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetDefaultParentKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "GetDefaultParentKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetDefaultParentKey_Statics::ControlRigSequencerEditorLibrary_eventGetDefaultParentKey_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetDefaultParentKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetDefaultParentKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetDefaultParentKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetDefaultParentKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetDefaultParentKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetDefaultParentKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetFKControlRigApplyMode_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventGetFKControlRigApplyMode_Parms
		{
			UControlRig* InControlRig;
			EControlRigFKRigExecuteMode ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InControlRig;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetFKControlRigApplyMode_Statics::NewProp_InControlRig = { "InControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetFKControlRigApplyMode_Parms, InControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetFKControlRigApplyMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetFKControlRigApplyMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetFKControlRigApplyMode_Parms, ReturnValue), Z_Construct_UEnum_ControlRig_EControlRigFKRigExecuteMode, METADATA_PARAMS(nullptr, 0) }; // 3135666767
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetFKControlRigApplyMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetFKControlRigApplyMode_Statics::NewProp_InControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetFKControlRigApplyMode_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetFKControlRigApplyMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetFKControlRigApplyMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\x09Get FKControlRig Apply Mode.\n\x09@param InControlRig Rig to test\n\x09@return The EControlRigFKRigExecuteMode mode it is in, either Replace,Additive or Direct\n\x09**/" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Get FKControlRig Apply Mode.\n@param InControlRig Rig to test\n@return The EControlRigFKRigExecuteMode mode it is in, either Replace,Additive or Direct" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetFKControlRigApplyMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "GetFKControlRigApplyMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetFKControlRigApplyMode_Statics::ControlRigSequencerEditorLibrary_eventGetFKControlRigApplyMode_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetFKControlRigApplyMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetFKControlRigApplyMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetFKControlRigApplyMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetFKControlRigApplyMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetFKControlRigApplyMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetFKControlRigApplyMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBool_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventGetLocalControlRigBool_Parms
		{
			ULevelSequence* LevelSequence;
			UControlRig* ControlRig;
			FName ControlName;
			FFrameNumber Frame;
			ESequenceTimeUnit TimeUnit;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlRig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frame;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBool_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigBool_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBool_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigBool_Parms, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBool_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigBool_Parms, ControlName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBool_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigBool_Parms, Frame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBool_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBool_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigBool_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	void Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ControlRigSequencerEditorLibrary_eventGetLocalControlRigBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigSequencerEditorLibrary_eventGetLocalControlRigBool_Parms), &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBool_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBool_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBool_Statics::NewProp_ControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBool_Statics::NewProp_Frame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBool_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBool_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Get ControlRig Control's bool value at a specific time\n\x09* @param LevelSequence Active Sequence to get value for\n\x09* @param ControlRig The ControlRig\n\x09* @param ControlName Name of the Control, should be a bool control\n\x09* @param Frame Time to get the value\n\x09* @param TimeUnit Unit for frame values, either in display rate or tick resolution\n\x09* @return Returns Value at that time\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Get ControlRig Control's bool value at a specific time\n@param LevelSequence Active Sequence to get value for\n@param ControlRig The ControlRig\n@param ControlName Name of the Control, should be a bool control\n@param Frame Time to get the value\n@param TimeUnit Unit for frame values, either in display rate or tick resolution\n@return Returns Value at that time" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "GetLocalControlRigBool", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBool_Statics::ControlRigSequencerEditorLibrary_eventGetLocalControlRigBool_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBools_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventGetLocalControlRigBools_Parms
		{
			ULevelSequence* LevelSequence;
			UControlRig* ControlRig;
			FName ControlName;
			TArray<FFrameNumber> Frames;
			ESequenceTimeUnit TimeUnit;
			TArray<bool> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlRig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Frames;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBools_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigBools_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBools_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigBools_Parms, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBools_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigBools_Parms, ControlName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBools_Statics::NewProp_Frames_Inner = { "Frames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBools_Statics::NewProp_Frames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBools_Statics::NewProp_Frames = { "Frames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigBools_Parms, Frames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBools_Statics::NewProp_Frames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBools_Statics::NewProp_Frames_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBools_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBools_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigBools_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBools_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBools_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigBools_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBools_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBools_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBools_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBools_Statics::NewProp_ControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBools_Statics::NewProp_Frames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBools_Statics::NewProp_Frames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBools_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBools_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBools_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBools_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBools_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Get ControlRig Control's bool values at specific times\n\x09* @param LevelSequence Active Sequence to get value for\n\x09* @param ControlRig The ControlRig\n\x09* @param ControlName Name of the Control, should be a bool control\n\x09* @param Frames Times to get the values\n\x09* @param TimeUnit Unit for frame values, either in display rate or tick resolution\n\x09* @return Returns Values at those times\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Get ControlRig Control's bool values at specific times\n@param LevelSequence Active Sequence to get value for\n@param ControlRig The ControlRig\n@param ControlName Name of the Control, should be a bool control\n@param Frames Times to get the values\n@param TimeUnit Unit for frame values, either in display rate or tick resolution\n@return Returns Values at those times" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBools_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "GetLocalControlRigBools", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBools_Statics::ControlRigSequencerEditorLibrary_eventGetLocalControlRigBools_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBools_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBools_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBools_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBools_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBools()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBools_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransform_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventGetLocalControlRigEulerTransform_Parms
		{
			ULevelSequence* LevelSequence;
			UControlRig* ControlRig;
			FName ControlName;
			FFrameNumber Frame;
			ESequenceTimeUnit TimeUnit;
			FEulerTransform ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlRig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frame;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransform_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigEulerTransform_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransform_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigEulerTransform_Parms, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransform_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigEulerTransform_Parms, ControlName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransform_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigEulerTransform_Parms, Frame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransform_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransform_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigEulerTransform_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigEulerTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FEulerTransform, METADATA_PARAMS(nullptr, 0) }; // 3672886731
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransform_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransform_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransform_Statics::NewProp_ControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransform_Statics::NewProp_Frame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransform_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransform_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Get ControlRig Control's EulerTransform value at a specific time\n\x09* @param LevelSequence Active Sequence to get value for\n\x09* @param ControlRig The ControlRig\n\x09* @param ControlName Name of the Control, should be a EulerTransfom control\n\x09* @param Frame Time to get the value\n\x09* @param TimeUnit Unit for frame values, either in display rate or tick resolution\n\x09* @return Returns Value at that time\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Get ControlRig Control's EulerTransform value at a specific time\n@param LevelSequence Active Sequence to get value for\n@param ControlRig The ControlRig\n@param ControlName Name of the Control, should be a EulerTransfom control\n@param Frame Time to get the value\n@param TimeUnit Unit for frame values, either in display rate or tick resolution\n@return Returns Value at that time" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "GetLocalControlRigEulerTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransform_Statics::ControlRigSequencerEditorLibrary_eventGetLocalControlRigEulerTransform_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransforms_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventGetLocalControlRigEulerTransforms_Parms
		{
			ULevelSequence* LevelSequence;
			UControlRig* ControlRig;
			FName ControlName;
			TArray<FFrameNumber> Frames;
			ESequenceTimeUnit TimeUnit;
			TArray<FEulerTransform> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlRig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Frames;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransforms_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigEulerTransforms_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransforms_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigEulerTransforms_Parms, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransforms_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigEulerTransforms_Parms, ControlName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransforms_Statics::NewProp_Frames_Inner = { "Frames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransforms_Statics::NewProp_Frames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransforms_Statics::NewProp_Frames = { "Frames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigEulerTransforms_Parms, Frames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransforms_Statics::NewProp_Frames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransforms_Statics::NewProp_Frames_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransforms_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransforms_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigEulerTransforms_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransforms_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FEulerTransform, METADATA_PARAMS(nullptr, 0) }; // 3672886731
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransforms_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigEulerTransforms_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3672886731
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransforms_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransforms_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransforms_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransforms_Statics::NewProp_ControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransforms_Statics::NewProp_Frames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransforms_Statics::NewProp_Frames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransforms_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransforms_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransforms_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransforms_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransforms_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Get ControlRig Control's EulerTransform values at specific times\n\x09* @param LevelSequence Active Sequence to get value for\n\x09* @param ControlRig The ControlRig\n\x09* @param ControlName Name of the Control, should be a EulerTransform control\n\x09* @param Frames Times to get the values\n\x09* @param TimeUnit Unit for frame values, either in display rate or tick resolution\n\x09* @return Returns Values at those times\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Get ControlRig Control's EulerTransform values at specific times\n@param LevelSequence Active Sequence to get value for\n@param ControlRig The ControlRig\n@param ControlName Name of the Control, should be a EulerTransform control\n@param Frames Times to get the values\n@param TimeUnit Unit for frame values, either in display rate or tick resolution\n@return Returns Values at those times" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransforms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "GetLocalControlRigEulerTransforms", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransforms_Statics::ControlRigSequencerEditorLibrary_eventGetLocalControlRigEulerTransforms_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransforms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransforms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransforms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransforms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransforms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransforms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloat_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventGetLocalControlRigFloat_Parms
		{
			ULevelSequence* LevelSequence;
			UControlRig* ControlRig;
			FName ControlName;
			FFrameNumber Frame;
			ESequenceTimeUnit TimeUnit;
			float ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlRig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frame;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloat_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigFloat_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloat_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigFloat_Parms, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloat_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigFloat_Parms, ControlName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloat_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigFloat_Parms, Frame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloat_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloat_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigFloat_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloat_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloat_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloat_Statics::NewProp_ControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloat_Statics::NewProp_Frame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloat_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloat_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Get ControlRig Control's float value at a specific time\n\x09* @param LevelSequence Active Sequence to get value for\n\x09* @param ControlRig The ControlRig\n\x09* @param ControlName Name of the Control, should be a float control\n\x09* @param Frame Time to get the value\n\x09* @param TimeUnit Unit for frame values, either in display rate or tick resolution\n\x09* @return Returns Value at that time\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Get ControlRig Control's float value at a specific time\n@param LevelSequence Active Sequence to get value for\n@param ControlRig The ControlRig\n@param ControlName Name of the Control, should be a float control\n@param Frame Time to get the value\n@param TimeUnit Unit for frame values, either in display rate or tick resolution\n@return Returns Value at that time" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "GetLocalControlRigFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloat_Statics::ControlRigSequencerEditorLibrary_eventGetLocalControlRigFloat_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloats_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventGetLocalControlRigFloats_Parms
		{
			ULevelSequence* LevelSequence;
			UControlRig* ControlRig;
			FName ControlName;
			TArray<FFrameNumber> Frames;
			ESequenceTimeUnit TimeUnit;
			TArray<float> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlRig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Frames;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloats_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigFloats_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloats_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigFloats_Parms, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloats_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigFloats_Parms, ControlName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloats_Statics::NewProp_Frames_Inner = { "Frames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloats_Statics::NewProp_Frames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloats_Statics::NewProp_Frames = { "Frames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigFloats_Parms, Frames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloats_Statics::NewProp_Frames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloats_Statics::NewProp_Frames_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloats_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloats_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigFloats_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloats_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigFloats_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloats_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloats_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloats_Statics::NewProp_ControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloats_Statics::NewProp_Frames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloats_Statics::NewProp_Frames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloats_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloats_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloats_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloats_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Get ControlRig Control's float values at specific times\n\x09* @param LevelSequence Active Sequence to get value for\n\x09* @param ControlRig The ControlRig\n\x09* @param ControlName Name of the Control, should be a float control\n\x09* @param Frames Times to get the values\n\x09* @param TimeUnit Unit for frame values, either in display rate or tick resolution\n\x09* @return Returns Values at those times\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Get ControlRig Control's float values at specific times\n@param LevelSequence Active Sequence to get value for\n@param ControlRig The ControlRig\n@param ControlName Name of the Control, should be a float control\n@param Frames Times to get the values\n@param TimeUnit Unit for frame values, either in display rate or tick resolution\n@return Returns Values at those times" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "GetLocalControlRigFloats", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloats_Statics::ControlRigSequencerEditorLibrary_eventGetLocalControlRigFloats_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInt_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventGetLocalControlRigInt_Parms
		{
			ULevelSequence* LevelSequence;
			UControlRig* ControlRig;
			FName ControlName;
			FFrameNumber Frame;
			ESequenceTimeUnit TimeUnit;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlRig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frame;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInt_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigInt_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInt_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigInt_Parms, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInt_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigInt_Parms, ControlName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInt_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigInt_Parms, Frame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInt_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInt_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigInt_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInt_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInt_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInt_Statics::NewProp_ControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInt_Statics::NewProp_Frame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInt_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInt_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Get ControlRig Control's integer value at a specific time\n\x09* @param LevelSequence Active Sequence to get value for\n\x09* @param ControlRig The ControlRig\n\x09* @param ControlName Name of the Control, should be a integer control\n\x09* @param Frame Time to get the value\n\x09* @param TimeUnit Unit for frame values, either in display rate or tick resolution\n\x09* @return Returns Value at that time\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Get ControlRig Control's integer value at a specific time\n@param LevelSequence Active Sequence to get value for\n@param ControlRig The ControlRig\n@param ControlName Name of the Control, should be a integer control\n@param Frame Time to get the value\n@param TimeUnit Unit for frame values, either in display rate or tick resolution\n@return Returns Value at that time" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "GetLocalControlRigInt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInt_Statics::ControlRigSequencerEditorLibrary_eventGetLocalControlRigInt_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInts_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventGetLocalControlRigInts_Parms
		{
			ULevelSequence* LevelSequence;
			UControlRig* ControlRig;
			FName ControlName;
			TArray<FFrameNumber> Frames;
			ESequenceTimeUnit TimeUnit;
			TArray<int32> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlRig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Frames;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInts_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigInts_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInts_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigInts_Parms, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInts_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigInts_Parms, ControlName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInts_Statics::NewProp_Frames_Inner = { "Frames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInts_Statics::NewProp_Frames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInts_Statics::NewProp_Frames = { "Frames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigInts_Parms, Frames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInts_Statics::NewProp_Frames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInts_Statics::NewProp_Frames_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInts_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInts_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigInts_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInts_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigInts_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInts_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInts_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInts_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInts_Statics::NewProp_ControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInts_Statics::NewProp_Frames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInts_Statics::NewProp_Frames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInts_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInts_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInts_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInts_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInts_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Get ControlRig Control's integer values at specific times\n\x09* @param LevelSequence Active Sequence to get value for\n\x09* @param ControlRig The ControlRig\n\x09* @param ControlName Name of the Control, should be a intteger control\n\x09* @param Frames Times to get the values\n\x09* @param TimeUnit Unit for frame values, either in display rate or tick resolution\n\x09* @return Returns Values at those times\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Get ControlRig Control's integer values at specific times\n@param LevelSequence Active Sequence to get value for\n@param ControlRig The ControlRig\n@param ControlName Name of the Control, should be a intteger control\n@param Frames Times to get the values\n@param TimeUnit Unit for frame values, either in display rate or tick resolution\n@return Returns Values at those times" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "GetLocalControlRigInts", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInts_Statics::ControlRigSequencerEditorLibrary_eventGetLocalControlRigInts_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPosition_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventGetLocalControlRigPosition_Parms
		{
			ULevelSequence* LevelSequence;
			UControlRig* ControlRig;
			FName ControlName;
			FFrameNumber Frame;
			ESequenceTimeUnit TimeUnit;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlRig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frame;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPosition_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigPosition_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPosition_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigPosition_Parms, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPosition_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigPosition_Parms, ControlName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPosition_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigPosition_Parms, Frame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPosition_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPosition_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigPosition_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPosition_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPosition_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPosition_Statics::NewProp_ControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPosition_Statics::NewProp_Frame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPosition_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPosition_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Get ControlRig Control's Position value at a specific time\n\x09* @param LevelSequence Active Sequence to get value for\n\x09* @param ControlRig The ControlRig\n\x09* @param ControlName Name of the Control, should be a Position control\n\x09* @param Frame Time to get the value\n\x09* @param TimeUnit Unit for frame values, either in display rate or tick resolution\n\x09* @return Returns Value at that time\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Get ControlRig Control's Position value at a specific time\n@param LevelSequence Active Sequence to get value for\n@param ControlRig The ControlRig\n@param ControlName Name of the Control, should be a Position control\n@param Frame Time to get the value\n@param TimeUnit Unit for frame values, either in display rate or tick resolution\n@return Returns Value at that time" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "GetLocalControlRigPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPosition_Statics::ControlRigSequencerEditorLibrary_eventGetLocalControlRigPosition_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPositions_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventGetLocalControlRigPositions_Parms
		{
			ULevelSequence* LevelSequence;
			UControlRig* ControlRig;
			FName ControlName;
			TArray<FFrameNumber> Frames;
			ESequenceTimeUnit TimeUnit;
			TArray<FVector> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlRig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Frames;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPositions_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigPositions_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPositions_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigPositions_Parms, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPositions_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigPositions_Parms, ControlName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPositions_Statics::NewProp_Frames_Inner = { "Frames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPositions_Statics::NewProp_Frames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPositions_Statics::NewProp_Frames = { "Frames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigPositions_Parms, Frames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPositions_Statics::NewProp_Frames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPositions_Statics::NewProp_Frames_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPositions_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPositions_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigPositions_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPositions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPositions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigPositions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPositions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPositions_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPositions_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPositions_Statics::NewProp_ControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPositions_Statics::NewProp_Frames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPositions_Statics::NewProp_Frames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPositions_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPositions_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPositions_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPositions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPositions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Get ControlRig Control's Position values at specific times\n\x09* @param LevelSequence Active Sequence to get value for\n\x09* @param ControlRig The ControlRig\n\x09* @param ControlName Name of the Control, should be a Position control\n\x09* @param Frames Times to get the values\n\x09* @param TimeUnit Unit for frame values, either in display rate or tick resolution\n\x09* @return Returns Values at those times\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Get ControlRig Control's Position values at specific times\n@param LevelSequence Active Sequence to get value for\n@param ControlRig The ControlRig\n@param ControlName Name of the Control, should be a Position control\n@param Frames Times to get the values\n@param TimeUnit Unit for frame values, either in display rate or tick resolution\n@return Returns Values at those times" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "GetLocalControlRigPositions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPositions_Statics::ControlRigSequencerEditorLibrary_eventGetLocalControlRigPositions_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPositions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPositions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPositions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPositions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPositions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotator_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventGetLocalControlRigRotator_Parms
		{
			ULevelSequence* LevelSequence;
			UControlRig* ControlRig;
			FName ControlName;
			FFrameNumber Frame;
			ESequenceTimeUnit TimeUnit;
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlRig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frame;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotator_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigRotator_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotator_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigRotator_Parms, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotator_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigRotator_Parms, ControlName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotator_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigRotator_Parms, Frame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotator_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotator_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigRotator_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotator_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotator_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotator_Statics::NewProp_ControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotator_Statics::NewProp_Frame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotator_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotator_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Get ControlRig Control's Rotator value at a specific time\n\x09* @param LevelSequence Active Sequence to get value for\n\x09* @param ControlRig The ControlRig\n\x09* @param ControlName Name of the Control, should be a Rotator control\n\x09* @param Frame Time to get the value\n\x09* @param TimeUnit Unit for frame values, either in display rate or tick resolution\n\x09* @return Returns Value at that time\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Get ControlRig Control's Rotator value at a specific time\n@param LevelSequence Active Sequence to get value for\n@param ControlRig The ControlRig\n@param ControlName Name of the Control, should be a Rotator control\n@param Frame Time to get the value\n@param TimeUnit Unit for frame values, either in display rate or tick resolution\n@return Returns Value at that time" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "GetLocalControlRigRotator", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotator_Statics::ControlRigSequencerEditorLibrary_eventGetLocalControlRigRotator_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotators_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventGetLocalControlRigRotators_Parms
		{
			ULevelSequence* LevelSequence;
			UControlRig* ControlRig;
			FName ControlName;
			TArray<FFrameNumber> Frames;
			ESequenceTimeUnit TimeUnit;
			TArray<FRotator> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlRig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Frames;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotators_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigRotators_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotators_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigRotators_Parms, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotators_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigRotators_Parms, ControlName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotators_Statics::NewProp_Frames_Inner = { "Frames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotators_Statics::NewProp_Frames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotators_Statics::NewProp_Frames = { "Frames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigRotators_Parms, Frames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotators_Statics::NewProp_Frames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotators_Statics::NewProp_Frames_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotators_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotators_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigRotators_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotators_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotators_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigRotators_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotators_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotators_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotators_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotators_Statics::NewProp_ControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotators_Statics::NewProp_Frames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotators_Statics::NewProp_Frames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotators_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotators_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotators_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotators_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotators_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Get ControlRig Control's Rotator values at specific times\n\x09* @param LevelSequence Active Sequence to get value for\n\x09* @param ControlRig The ControlRig\n\x09* @param ControlName Name of the Control, should be a Rotator control\n\x09* @param Frames Times to get the values\n\x09* @param TimeUnit Unit for frame values, either in display rate or tick resolution\n\x09* @return Returns Values at those times\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Get ControlRig Control's Rotator values at specific times\n@param LevelSequence Active Sequence to get value for\n@param ControlRig The ControlRig\n@param ControlName Name of the Control, should be a Rotator control\n@param Frames Times to get the values\n@param TimeUnit Unit for frame values, either in display rate or tick resolution\n@return Returns Values at those times" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotators_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "GetLocalControlRigRotators", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotators_Statics::ControlRigSequencerEditorLibrary_eventGetLocalControlRigRotators_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotators_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotators_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotators_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotators_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotators()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotators_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScale_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventGetLocalControlRigScale_Parms
		{
			ULevelSequence* LevelSequence;
			UControlRig* ControlRig;
			FName ControlName;
			FFrameNumber Frame;
			ESequenceTimeUnit TimeUnit;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlRig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frame;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScale_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigScale_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScale_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigScale_Parms, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScale_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigScale_Parms, ControlName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScale_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigScale_Parms, Frame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScale_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScale_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigScale_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigScale_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScale_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScale_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScale_Statics::NewProp_ControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScale_Statics::NewProp_Frame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScale_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScale_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Get ControlRig Control's Scale value at a specific time\n\x09* @param LevelSequence Active Sequence to get value for\n\x09* @param ControlRig The ControlRig\n\x09* @param ControlName Name of the Control, should be a Scale control\n\x09* @param Frame Time to get the value\n\x09* @param TimeUnit Unit for frame values, either in display rate or tick resolution\n\x09* @return Returns Value at that time\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Get ControlRig Control's Scale value at a specific time\n@param LevelSequence Active Sequence to get value for\n@param ControlRig The ControlRig\n@param ControlName Name of the Control, should be a Scale control\n@param Frame Time to get the value\n@param TimeUnit Unit for frame values, either in display rate or tick resolution\n@return Returns Value at that time" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "GetLocalControlRigScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScale_Statics::ControlRigSequencerEditorLibrary_eventGetLocalControlRigScale_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScales_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventGetLocalControlRigScales_Parms
		{
			ULevelSequence* LevelSequence;
			UControlRig* ControlRig;
			FName ControlName;
			TArray<FFrameNumber> Frames;
			ESequenceTimeUnit TimeUnit;
			TArray<FVector> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlRig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Frames;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScales_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigScales_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScales_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigScales_Parms, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScales_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigScales_Parms, ControlName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScales_Statics::NewProp_Frames_Inner = { "Frames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScales_Statics::NewProp_Frames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScales_Statics::NewProp_Frames = { "Frames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigScales_Parms, Frames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScales_Statics::NewProp_Frames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScales_Statics::NewProp_Frames_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScales_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScales_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigScales_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScales_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScales_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigScales_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScales_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScales_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScales_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScales_Statics::NewProp_ControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScales_Statics::NewProp_Frames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScales_Statics::NewProp_Frames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScales_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScales_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScales_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScales_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScales_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Get ControlRig Control's Scale values at specific times\n\x09* @param LevelSequence Active Sequence to get value for\n\x09* @param ControlRig The ControlRig\n\x09* @param ControlName Name of the Control, should be a Scale control\n\x09* @param Frames Times to get the values\n\x09* @param TimeUnit Unit for frame values, either in display rate or tick resolution\n\x09* @return Returns Values at those times\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Get ControlRig Control's Scale values at specific times\n@param LevelSequence Active Sequence to get value for\n@param ControlRig The ControlRig\n@param ControlName Name of the Control, should be a Scale control\n@param Frames Times to get the values\n@param TimeUnit Unit for frame values, either in display rate or tick resolution\n@return Returns Values at those times" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScales_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "GetLocalControlRigScales", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScales_Statics::ControlRigSequencerEditorLibrary_eventGetLocalControlRigScales_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScales_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScales_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScales_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScales_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScales()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScales_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransform_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventGetLocalControlRigTransform_Parms
		{
			ULevelSequence* LevelSequence;
			UControlRig* ControlRig;
			FName ControlName;
			FFrameNumber Frame;
			ESequenceTimeUnit TimeUnit;
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlRig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frame;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransform_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigTransform_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransform_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigTransform_Parms, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransform_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigTransform_Parms, ControlName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransform_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigTransform_Parms, Frame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransform_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransform_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigTransform_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransform_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransform_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransform_Statics::NewProp_ControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransform_Statics::NewProp_Frame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransform_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransform_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Get ControlRig Control's Transform value at a specific time\n\x09* @param LevelSequence Active Sequence to get value for\n\x09* @param ControlRig The ControlRig\n\x09* @param ControlName Name of the Control, should be a Transform control\n\x09* @param Frame Time to get the value\n\x09* @param TimeUnit Unit for frame values, either in display rate or tick resolution\n\x09* @return Returns Value at that time\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Get ControlRig Control's Transform value at a specific time\n@param LevelSequence Active Sequence to get value for\n@param ControlRig The ControlRig\n@param ControlName Name of the Control, should be a Transform control\n@param Frame Time to get the value\n@param TimeUnit Unit for frame values, either in display rate or tick resolution\n@return Returns Value at that time" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "GetLocalControlRigTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransform_Statics::ControlRigSequencerEditorLibrary_eventGetLocalControlRigTransform_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScale_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventGetLocalControlRigTransformNoScale_Parms
		{
			ULevelSequence* LevelSequence;
			UControlRig* ControlRig;
			FName ControlName;
			FFrameNumber Frame;
			ESequenceTimeUnit TimeUnit;
			FTransformNoScale ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlRig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frame;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScale_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigTransformNoScale_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScale_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigTransformNoScale_Parms, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScale_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigTransformNoScale_Parms, ControlName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScale_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigTransformNoScale_Parms, Frame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScale_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScale_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigTransformNoScale_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigTransformNoScale_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransformNoScale, METADATA_PARAMS(nullptr, 0) }; // 1336134303
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScale_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScale_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScale_Statics::NewProp_ControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScale_Statics::NewProp_Frame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScale_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScale_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Get ControlRig Control's TransformNoScale value at a specific time\n\x09* @param LevelSequence Active Sequence to get value for\n\x09* @param ControlRig The ControlRig\n\x09* @param ControlName Name of the Control, should be a TransformNoScale control\n\x09* @param Frame Time to get the value\n\x09* @param TimeUnit Unit for frame values, either in display rate or tick resolution\n\x09* @return Returns Value at that time\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Get ControlRig Control's TransformNoScale value at a specific time\n@param LevelSequence Active Sequence to get value for\n@param ControlRig The ControlRig\n@param ControlName Name of the Control, should be a TransformNoScale control\n@param Frame Time to get the value\n@param TimeUnit Unit for frame values, either in display rate or tick resolution\n@return Returns Value at that time" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "GetLocalControlRigTransformNoScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScale_Statics::ControlRigSequencerEditorLibrary_eventGetLocalControlRigTransformNoScale_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScales_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventGetLocalControlRigTransformNoScales_Parms
		{
			ULevelSequence* LevelSequence;
			UControlRig* ControlRig;
			FName ControlName;
			TArray<FFrameNumber> Frames;
			ESequenceTimeUnit TimeUnit;
			TArray<FTransformNoScale> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlRig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Frames;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScales_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigTransformNoScales_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScales_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigTransformNoScales_Parms, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScales_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigTransformNoScales_Parms, ControlName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScales_Statics::NewProp_Frames_Inner = { "Frames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScales_Statics::NewProp_Frames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScales_Statics::NewProp_Frames = { "Frames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigTransformNoScales_Parms, Frames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScales_Statics::NewProp_Frames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScales_Statics::NewProp_Frames_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScales_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScales_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigTransformNoScales_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScales_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransformNoScale, METADATA_PARAMS(nullptr, 0) }; // 1336134303
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScales_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigTransformNoScales_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1336134303
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScales_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScales_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScales_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScales_Statics::NewProp_ControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScales_Statics::NewProp_Frames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScales_Statics::NewProp_Frames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScales_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScales_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScales_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScales_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScales_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Get ControlRig Control's TransformNoScale values at specific times\n\x09* @param LevelSequence Active Sequence to get value for\n\x09* @param ControlRig The ControlRig\n\x09* @param ControlName Name of the Control, should be a TransformNoScale control\n\x09* @param Frames Times to get the values\n\x09* @param TimeUnit Unit for frame values, either in display rate or tick resolution\n\x09* @return Returns Values at those times\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Get ControlRig Control's TransformNoScale values at specific times\n@param LevelSequence Active Sequence to get value for\n@param ControlRig The ControlRig\n@param ControlName Name of the Control, should be a TransformNoScale control\n@param Frames Times to get the values\n@param TimeUnit Unit for frame values, either in display rate or tick resolution\n@return Returns Values at those times" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScales_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "GetLocalControlRigTransformNoScales", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScales_Statics::ControlRigSequencerEditorLibrary_eventGetLocalControlRigTransformNoScales_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScales_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScales_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScales_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScales_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScales()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScales_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransforms_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventGetLocalControlRigTransforms_Parms
		{
			ULevelSequence* LevelSequence;
			UControlRig* ControlRig;
			FName ControlName;
			TArray<FFrameNumber> Frames;
			ESequenceTimeUnit TimeUnit;
			TArray<FTransform> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlRig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Frames;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransforms_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigTransforms_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransforms_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigTransforms_Parms, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransforms_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigTransforms_Parms, ControlName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransforms_Statics::NewProp_Frames_Inner = { "Frames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransforms_Statics::NewProp_Frames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransforms_Statics::NewProp_Frames = { "Frames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigTransforms_Parms, Frames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransforms_Statics::NewProp_Frames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransforms_Statics::NewProp_Frames_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransforms_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransforms_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigTransforms_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransforms_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransforms_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigTransforms_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransforms_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransforms_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransforms_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransforms_Statics::NewProp_ControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransforms_Statics::NewProp_Frames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransforms_Statics::NewProp_Frames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransforms_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransforms_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransforms_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransforms_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransforms_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Get ControlRig Control's Transform values at specific times\n\x09* @param LevelSequence Active Sequence to get value for\n\x09* @param ControlRig The ControlRig\n\x09* @param ControlName Name of the Control, should be a Transform control\n\x09* @param Frames Times to get the values\n\x09* @param TimeUnit Unit for frame values, either in display rate or tick resolution\n\x09* @return Returns Values at those times\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Get ControlRig Control's Transform values at specific times\n@param LevelSequence Active Sequence to get value for\n@param ControlRig The ControlRig\n@param ControlName Name of the Control, should be a Transform control\n@param Frames Times to get the values\n@param TimeUnit Unit for frame values, either in display rate or tick resolution\n@return Returns Values at those times" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransforms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "GetLocalControlRigTransforms", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransforms_Statics::ControlRigSequencerEditorLibrary_eventGetLocalControlRigTransforms_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransforms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransforms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransforms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransforms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransforms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransforms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2D_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventGetLocalControlRigVector2D_Parms
		{
			ULevelSequence* LevelSequence;
			UControlRig* ControlRig;
			FName ControlName;
			FFrameNumber Frame;
			ESequenceTimeUnit TimeUnit;
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlRig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frame;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2D_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigVector2D_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2D_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigVector2D_Parms, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2D_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigVector2D_Parms, ControlName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2D_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigVector2D_Parms, Frame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2D_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2D_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigVector2D_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigVector2D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2D_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2D_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2D_Statics::NewProp_ControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2D_Statics::NewProp_Frame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2D_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2D_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Get ControlRig Control's Vector2D value at a specific time\n\x09* @param LevelSequence Active Sequence to get value for\n\x09* @param ControlRig The ControlRig\n\x09* @param ControlName Name of the Control, should be a Vector2D control\n\x09* @param Frame Time to get the value\n\x09* @param TimeUnit Unit for frame values, either in display rate or tick resolution\n\x09* @return Returns Value at that time\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Get ControlRig Control's Vector2D value at a specific time\n@param LevelSequence Active Sequence to get value for\n@param ControlRig The ControlRig\n@param ControlName Name of the Control, should be a Vector2D control\n@param Frame Time to get the value\n@param TimeUnit Unit for frame values, either in display rate or tick resolution\n@return Returns Value at that time" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "GetLocalControlRigVector2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2D_Statics::ControlRigSequencerEditorLibrary_eventGetLocalControlRigVector2D_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2Ds_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventGetLocalControlRigVector2Ds_Parms
		{
			ULevelSequence* LevelSequence;
			UControlRig* ControlRig;
			FName ControlName;
			TArray<FFrameNumber> Frames;
			ESequenceTimeUnit TimeUnit;
			TArray<FVector2D> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlRig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Frames;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2Ds_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigVector2Ds_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2Ds_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigVector2Ds_Parms, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2Ds_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigVector2Ds_Parms, ControlName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2Ds_Statics::NewProp_Frames_Inner = { "Frames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2Ds_Statics::NewProp_Frames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2Ds_Statics::NewProp_Frames = { "Frames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigVector2Ds_Parms, Frames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2Ds_Statics::NewProp_Frames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2Ds_Statics::NewProp_Frames_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2Ds_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2Ds_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigVector2Ds_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2Ds_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2Ds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetLocalControlRigVector2Ds_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2Ds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2Ds_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2Ds_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2Ds_Statics::NewProp_ControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2Ds_Statics::NewProp_Frames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2Ds_Statics::NewProp_Frames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2Ds_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2Ds_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2Ds_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2Ds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2Ds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Get ControlRig Control's Vector2D values at specific times\n\x09* @param LevelSequence Active Sequence to get value for\n\x09* @param ControlRig The ControlRig\n\x09* @param ControlName Name of the Control, should be a Vector2D control\n\x09* @param Frames Times to get the values\n\x09* @param TimeUnit Unit for frame values, either in display rate or tick resolution\n\x09* @return Returns Values at those times\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Get ControlRig Control's Vector2D values at specific times\n@param LevelSequence Active Sequence to get value for\n@param ControlRig The ControlRig\n@param ControlName Name of the Control, should be a Vector2D control\n@param Frames Times to get the values\n@param TimeUnit Unit for frame values, either in display rate or tick resolution\n@return Returns Values at those times" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2Ds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "GetLocalControlRigVector2Ds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2Ds_Statics::ControlRigSequencerEditorLibrary_eventGetLocalControlRigVector2Ds_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2Ds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2Ds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2Ds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2Ds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2Ds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2Ds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransform_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventGetSkeletalMeshComponentWorldTransform_Parms
		{
			ULevelSequence* LevelSequence;
			USkeletalMeshComponent* SkeletalMeshComponent;
			FFrameNumber Frame;
			ESequenceTimeUnit TimeUnit;
			FName ReferenceName;
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frame;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReferenceName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransform_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetSkeletalMeshComponentWorldTransform_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransform_Statics::NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransform_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetSkeletalMeshComponentWorldTransform_Parms, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransform_Statics::NewProp_SkeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransform_Statics::NewProp_SkeletalMeshComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransform_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetSkeletalMeshComponentWorldTransform_Parms, Frame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransform_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransform_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetSkeletalMeshComponentWorldTransform_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransform_Statics::NewProp_ReferenceName = { "ReferenceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetSkeletalMeshComponentWorldTransform_Parms, ReferenceName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetSkeletalMeshComponentWorldTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransform_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransform_Statics::NewProp_SkeletalMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransform_Statics::NewProp_Frame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransform_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransform_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransform_Statics::NewProp_ReferenceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Get SkeletalMeshComponent World Transform at a specific time\n\x09* @param LevelSequence Active Sequence to get transform for\n\x09* @param SkeletalMeshComponent The SkeletalMeshComponent\n\x09* @param Frame Time to get the transform\n\x09* @param TimeUnit Unit for frame values, either in display rate or tick resolution\n\x09* @param ReferenceName Optional name of the referencer\n\x09* @return Returns World Transform\n\x09*/" },
		{ "CPP_Default_ReferenceName", "None" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Get SkeletalMeshComponent World Transform at a specific time\n@param LevelSequence Active Sequence to get transform for\n@param SkeletalMeshComponent The SkeletalMeshComponent\n@param Frame Time to get the transform\n@param TimeUnit Unit for frame values, either in display rate or tick resolution\n@param ReferenceName Optional name of the referencer\n@return Returns World Transform" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "GetSkeletalMeshComponentWorldTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransform_Statics::ControlRigSequencerEditorLibrary_eventGetSkeletalMeshComponentWorldTransform_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransforms_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventGetSkeletalMeshComponentWorldTransforms_Parms
		{
			ULevelSequence* LevelSequence;
			USkeletalMeshComponent* SkeletalMeshComponent;
			TArray<FFrameNumber> Frames;
			ESequenceTimeUnit TimeUnit;
			FName ReferenceName;
			TArray<FTransform> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Frames;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReferenceName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransforms_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetSkeletalMeshComponentWorldTransforms_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransforms_Statics::NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransforms_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetSkeletalMeshComponentWorldTransforms_Parms, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransforms_Statics::NewProp_SkeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransforms_Statics::NewProp_SkeletalMeshComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransforms_Statics::NewProp_Frames_Inner = { "Frames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransforms_Statics::NewProp_Frames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransforms_Statics::NewProp_Frames = { "Frames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetSkeletalMeshComponentWorldTransforms_Parms, Frames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransforms_Statics::NewProp_Frames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransforms_Statics::NewProp_Frames_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransforms_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransforms_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetSkeletalMeshComponentWorldTransforms_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransforms_Statics::NewProp_ReferenceName = { "ReferenceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetSkeletalMeshComponentWorldTransforms_Parms, ReferenceName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransforms_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransforms_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetSkeletalMeshComponentWorldTransforms_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransforms_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransforms_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransforms_Statics::NewProp_SkeletalMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransforms_Statics::NewProp_Frames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransforms_Statics::NewProp_Frames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransforms_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransforms_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransforms_Statics::NewProp_ReferenceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransforms_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransforms_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransforms_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Get SkeletalMeshComponents World Transforms at specific times\n\x09* @param LevelSequence Active Sequence to get transform for\n\x09* @param SkeletalMeshComponent The SkeletalMeshComponent\n\x09* @param Frames Times to get the transform\n\x09* @param TimeUnit Unit for frame values, either in display rate or tick resolution\n\x09* @param ReferenceName Optional name of the referencer\n\x09* @return Returns World Transforms\n\x09*/" },
		{ "CPP_Default_ReferenceName", "None" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Get SkeletalMeshComponents World Transforms at specific times\n@param LevelSequence Active Sequence to get transform for\n@param SkeletalMeshComponent The SkeletalMeshComponent\n@param Frames Times to get the transform\n@param TimeUnit Unit for frame values, either in display rate or tick resolution\n@param ReferenceName Optional name of the referencer\n@return Returns World Transforms" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransforms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "GetSkeletalMeshComponentWorldTransforms", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransforms_Statics::ControlRigSequencerEditorLibrary_eventGetSkeletalMeshComponentWorldTransforms_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransforms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransforms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransforms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransforms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransforms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransforms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetVisibleControlRigs_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventGetVisibleControlRigs_Parms
		{
			TArray<UControlRig*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetVisibleControlRigs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetVisibleControlRigs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetVisibleControlRigs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetVisibleControlRigs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetVisibleControlRigs_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetVisibleControlRigs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetVisibleControlRigs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Get all of the visible control rigs in the level\n\x09* @return returns list of visible Control Rigs\n\x09*/" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Get all of the visible control rigs in the level\n@return returns list of visible Control Rigs" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetVisibleControlRigs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "GetVisibleControlRigs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetVisibleControlRigs_Statics::ControlRigSequencerEditorLibrary_eventGetVisibleControlRigs_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetVisibleControlRigs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetVisibleControlRigs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetVisibleControlRigs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetVisibleControlRigs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetVisibleControlRigs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetVisibleControlRigs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetWorldSpaceReferenceKey_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventGetWorldSpaceReferenceKey_Parms
		{
			FRigElementKey ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetWorldSpaceReferenceKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventGetWorldSpaceReferenceKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetWorldSpaceReferenceKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetWorldSpaceReferenceKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetWorldSpaceReferenceKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/*\n\x09 * Get the default world space key, can be used a world space.\n\x09 *\n\x09*/" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "* Get the default world space key, can be used a world space." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetWorldSpaceReferenceKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "GetWorldSpaceReferenceKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetWorldSpaceReferenceKey_Statics::ControlRigSequencerEditorLibrary_eventGetWorldSpaceReferenceKey_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetWorldSpaceReferenceKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetWorldSpaceReferenceKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetWorldSpaceReferenceKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetWorldSpaceReferenceKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetWorldSpaceReferenceKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetWorldSpaceReferenceKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_HideAllControls_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventHideAllControls_Parms
		{
			UMovieSceneSection* InSection;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_HideAllControls_Statics::NewProp_InSection_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_HideAllControls_Statics::NewProp_InSection = { "InSection", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventHideAllControls_Parms, InSection), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_HideAllControls_Statics::NewProp_InSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_HideAllControls_Statics::NewProp_InSection_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_HideAllControls_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_HideAllControls_Statics::NewProp_InSection,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_HideAllControls_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/** Hides all of the controls for the given section */" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Hides all of the controls for the given section" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_HideAllControls_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "HideAllControls", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_HideAllControls_Statics::ControlRigSequencerEditorLibrary_eventHideAllControls_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_HideAllControls_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_HideAllControls_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_HideAllControls_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_HideAllControls_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_HideAllControls()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_HideAllControls_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ImportFBXToControlRigTrack_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventImportFBXToControlRigTrack_Parms
		{
			UWorld* World;
			ULevelSequence* InSequence;
			UMovieSceneControlRigParameterTrack* InTrack;
			UMovieSceneControlRigParameterSection* InSection;
			TArray<FString> SelectedControlRigNames;
			UMovieSceneUserImportFBXControlRigSettings* ImportFBXControlRigSettings;
			FString ImportFilename;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTrack_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InTrack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSection;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedControlRigNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedControlRigNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedControlRigNames;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ImportFBXControlRigSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportFilename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ImportFilename;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ImportFBXToControlRigTrack_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventImportFBXToControlRigTrack_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ImportFBXToControlRigTrack_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventImportFBXToControlRigTrack_Parms, InSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ImportFBXToControlRigTrack_Statics::NewProp_InTrack_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ImportFBXToControlRigTrack_Statics::NewProp_InTrack = { "InTrack", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventImportFBXToControlRigTrack_Parms, InTrack), Z_Construct_UClass_UMovieSceneControlRigParameterTrack_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ImportFBXToControlRigTrack_Statics::NewProp_InTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ImportFBXToControlRigTrack_Statics::NewProp_InTrack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ImportFBXToControlRigTrack_Statics::NewProp_InSection_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ImportFBXToControlRigTrack_Statics::NewProp_InSection = { "InSection", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventImportFBXToControlRigTrack_Parms, InSection), Z_Construct_UClass_UMovieSceneControlRigParameterSection_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ImportFBXToControlRigTrack_Statics::NewProp_InSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ImportFBXToControlRigTrack_Statics::NewProp_InSection_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ImportFBXToControlRigTrack_Statics::NewProp_SelectedControlRigNames_Inner = { "SelectedControlRigNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ImportFBXToControlRigTrack_Statics::NewProp_SelectedControlRigNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ImportFBXToControlRigTrack_Statics::NewProp_SelectedControlRigNames = { "SelectedControlRigNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventImportFBXToControlRigTrack_Parms, SelectedControlRigNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ImportFBXToControlRigTrack_Statics::NewProp_SelectedControlRigNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ImportFBXToControlRigTrack_Statics::NewProp_SelectedControlRigNames_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ImportFBXToControlRigTrack_Statics::NewProp_ImportFBXControlRigSettings = { "ImportFBXControlRigSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventImportFBXToControlRigTrack_Parms, ImportFBXControlRigSettings), Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ImportFBXToControlRigTrack_Statics::NewProp_ImportFilename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ImportFBXToControlRigTrack_Statics::NewProp_ImportFilename = { "ImportFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventImportFBXToControlRigTrack_Parms, ImportFilename), METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ImportFBXToControlRigTrack_Statics::NewProp_ImportFilename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ImportFBXToControlRigTrack_Statics::NewProp_ImportFilename_MetaData)) };
	void Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ImportFBXToControlRigTrack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ControlRigSequencerEditorLibrary_eventImportFBXToControlRigTrack_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ImportFBXToControlRigTrack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigSequencerEditorLibrary_eventImportFBXToControlRigTrack_Parms), &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ImportFBXToControlRigTrack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ImportFBXToControlRigTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ImportFBXToControlRigTrack_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ImportFBXToControlRigTrack_Statics::NewProp_InSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ImportFBXToControlRigTrack_Statics::NewProp_InTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ImportFBXToControlRigTrack_Statics::NewProp_InSection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ImportFBXToControlRigTrack_Statics::NewProp_SelectedControlRigNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ImportFBXToControlRigTrack_Statics::NewProp_SelectedControlRigNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ImportFBXToControlRigTrack_Statics::NewProp_ImportFBXControlRigSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ImportFBXToControlRigTrack_Statics::NewProp_ImportFilename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ImportFBXToControlRigTrack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ImportFBXToControlRigTrack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | FBX" },
		{ "Comment", "/*\n\x09 * Import FBX onto a control rig with the specified track and section\n\x09 *\n\x09 * @param InWorld World to import to\n\x09 * @param InSequence Sequence to import\n\x09 * @param InTrack Track to import onto\n\x09 * @param InSection Section to import onto, may be null in which case we use the track's section to key\n\x09 * @param SelectedControlRigNames  List of selected control rig names. Will use them if  ImportFBXControlRigSettings->bImportOntoSelectedControls is true\n\x09 * @param ImportFBXControlRigSettings Settings to control import.\n\x09 * @param InImportFileName Path to fbx file to create\n\x09 */" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "* Import FBX onto a control rig with the specified track and section\n*\n* @param InWorld World to import to\n* @param InSequence Sequence to import\n* @param InTrack Track to import onto\n* @param InSection Section to import onto, may be null in which case we use the track's section to key\n* @param SelectedControlRigNames  List of selected control rig names. Will use them if  ImportFBXControlRigSettings->bImportOntoSelectedControls is true\n* @param ImportFBXControlRigSettings Settings to control import.\n* @param InImportFileName Path to fbx file to create" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ImportFBXToControlRigTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "ImportFBXToControlRigTrack", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ImportFBXToControlRigTrack_Statics::ControlRigSequencerEditorLibrary_eventImportFBXToControlRigTrack_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ImportFBXToControlRigTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ImportFBXToControlRigTrack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ImportFBXToControlRigTrack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ImportFBXToControlRigTrack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ImportFBXToControlRigTrack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ImportFBXToControlRigTrack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_IsFKControlRig_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventIsFKControlRig_Parms
		{
			UControlRig* InControlRig;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InControlRig;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_IsFKControlRig_Statics::NewProp_InControlRig = { "InControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventIsFKControlRig_Parms, InControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UControlRigSequencerEditorLibrary_IsFKControlRig_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ControlRigSequencerEditorLibrary_eventIsFKControlRig_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_IsFKControlRig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigSequencerEditorLibrary_eventIsFKControlRig_Parms), &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_IsFKControlRig_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_IsFKControlRig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_IsFKControlRig_Statics::NewProp_InControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_IsFKControlRig_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_IsFKControlRig_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\x09Whether or not the control rig is an FK Control Rig.\n\x09@param InControlRig Rig to test to see if FK Control Rig\n\x09**/" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Whether or not the control rig is an FK Control Rig.\n@param InControlRig Rig to test to see if FK Control Rig" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_IsFKControlRig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "IsFKControlRig", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_IsFKControlRig_Statics::ControlRigSequencerEditorLibrary_eventIsFKControlRig_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_IsFKControlRig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_IsFKControlRig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_IsFKControlRig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_IsFKControlRig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_IsFKControlRig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_IsFKControlRig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_LoadAnimSequenceIntoControlRigSection_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventLoadAnimSequenceIntoControlRigSection_Parms
		{
			UMovieSceneSection* MovieSceneSection;
			UAnimSequence* AnimSequence;
			USkeletalMeshComponent* SkelMeshComp;
			FFrameNumber InStartFrame;
			ESequenceTimeUnit TimeUnit;
			bool bKeyReduce;
			float Tolerance;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovieSceneSection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MovieSceneSection;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkelMeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkelMeshComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InStartFrame;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static void NewProp_bKeyReduce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeyReduce;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_LoadAnimSequenceIntoControlRigSection_Statics::NewProp_MovieSceneSection_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_LoadAnimSequenceIntoControlRigSection_Statics::NewProp_MovieSceneSection = { "MovieSceneSection", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventLoadAnimSequenceIntoControlRigSection_Parms, MovieSceneSection), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_LoadAnimSequenceIntoControlRigSection_Statics::NewProp_MovieSceneSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_LoadAnimSequenceIntoControlRigSection_Statics::NewProp_MovieSceneSection_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_LoadAnimSequenceIntoControlRigSection_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventLoadAnimSequenceIntoControlRigSection_Parms, AnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_LoadAnimSequenceIntoControlRigSection_Statics::NewProp_SkelMeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_LoadAnimSequenceIntoControlRigSection_Statics::NewProp_SkelMeshComp = { "SkelMeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventLoadAnimSequenceIntoControlRigSection_Parms, SkelMeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_LoadAnimSequenceIntoControlRigSection_Statics::NewProp_SkelMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_LoadAnimSequenceIntoControlRigSection_Statics::NewProp_SkelMeshComp_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_LoadAnimSequenceIntoControlRigSection_Statics::NewProp_InStartFrame = { "InStartFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventLoadAnimSequenceIntoControlRigSection_Parms, InStartFrame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_LoadAnimSequenceIntoControlRigSection_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_LoadAnimSequenceIntoControlRigSection_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventLoadAnimSequenceIntoControlRigSection_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	void Z_Construct_UFunction_UControlRigSequencerEditorLibrary_LoadAnimSequenceIntoControlRigSection_Statics::NewProp_bKeyReduce_SetBit(void* Obj)
	{
		((ControlRigSequencerEditorLibrary_eventLoadAnimSequenceIntoControlRigSection_Parms*)Obj)->bKeyReduce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_LoadAnimSequenceIntoControlRigSection_Statics::NewProp_bKeyReduce = { "bKeyReduce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigSequencerEditorLibrary_eventLoadAnimSequenceIntoControlRigSection_Parms), &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_LoadAnimSequenceIntoControlRigSection_Statics::NewProp_bKeyReduce_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_LoadAnimSequenceIntoControlRigSection_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventLoadAnimSequenceIntoControlRigSection_Parms, Tolerance), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UControlRigSequencerEditorLibrary_LoadAnimSequenceIntoControlRigSection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ControlRigSequencerEditorLibrary_eventLoadAnimSequenceIntoControlRigSection_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_LoadAnimSequenceIntoControlRigSection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigSequencerEditorLibrary_eventLoadAnimSequenceIntoControlRigSection_Parms), &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_LoadAnimSequenceIntoControlRigSection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_LoadAnimSequenceIntoControlRigSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_LoadAnimSequenceIntoControlRigSection_Statics::NewProp_MovieSceneSection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_LoadAnimSequenceIntoControlRigSection_Statics::NewProp_AnimSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_LoadAnimSequenceIntoControlRigSection_Statics::NewProp_SkelMeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_LoadAnimSequenceIntoControlRigSection_Statics::NewProp_InStartFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_LoadAnimSequenceIntoControlRigSection_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_LoadAnimSequenceIntoControlRigSection_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_LoadAnimSequenceIntoControlRigSection_Statics::NewProp_bKeyReduce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_LoadAnimSequenceIntoControlRigSection_Statics::NewProp_Tolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_LoadAnimSequenceIntoControlRigSection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_LoadAnimSequenceIntoControlRigSection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Load anim sequence into this control rig section\n\x09* @param MovieSceneSection The MovieSceneSectionto load into\n\x09* @param AnimSequence The Sequence to load\n\x09* @param MovieScene The MovieScene getting loaded into\n\x09* @param SkelMeshComponent The Skeletal Mesh component getting loaded into.\n\x09* @param InStartFrame Frame to insert the animation\n\x09* @param TimeUnit Unit for all frame and time values, either in display rate or tick resolution\n\x09* @param bKeyReduce If true do key reduction based upon Tolerance, if false don't\n\x09* @param Tolerance If reducing keys, tolerance about which keys will be removed, smaller tolerance, more keys usually.\n\n\x09* @return returns True if successful, False otherwise\n\x09*/" },
		{ "CPP_Default_bKeyReduce", "false" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "CPP_Default_Tolerance", "0.001000" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Load anim sequence into this control rig section\n@param MovieSceneSection The MovieSceneSectionto load into\n@param AnimSequence The Sequence to load\n@param MovieScene The MovieScene getting loaded into\n@param SkelMeshComponent The Skeletal Mesh component getting loaded into.\n@param InStartFrame Frame to insert the animation\n@param TimeUnit Unit for all frame and time values, either in display rate or tick resolution\n@param bKeyReduce If true do key reduction based upon Tolerance, if false don't\n@param Tolerance If reducing keys, tolerance about which keys will be removed, smaller tolerance, more keys usually.\n\n@return returns True if successful, False otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_LoadAnimSequenceIntoControlRigSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "LoadAnimSequenceIntoControlRigSection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_LoadAnimSequenceIntoControlRigSection_Statics::ControlRigSequencerEditorLibrary_eventLoadAnimSequenceIntoControlRigSection_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_LoadAnimSequenceIntoControlRigSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_LoadAnimSequenceIntoControlRigSection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_LoadAnimSequenceIntoControlRigSection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_LoadAnimSequenceIntoControlRigSection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_LoadAnimSequenceIntoControlRigSection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_LoadAnimSequenceIntoControlRigSection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveConstraintKey_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventMoveConstraintKey_Parms
		{
			UTickableConstraint* Constraint;
			UMovieSceneSection* ConstraintSection;
			FFrameNumber InTime;
			FFrameNumber InNewTime;
			ESequenceTimeUnit TimeUnit;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Constraint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintSection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConstraintSection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InNewTime;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveConstraintKey_Statics::NewProp_Constraint = { "Constraint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventMoveConstraintKey_Parms, Constraint), Z_Construct_UClass_UTickableConstraint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveConstraintKey_Statics::NewProp_ConstraintSection_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveConstraintKey_Statics::NewProp_ConstraintSection = { "ConstraintSection", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventMoveConstraintKey_Parms, ConstraintSection), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveConstraintKey_Statics::NewProp_ConstraintSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveConstraintKey_Statics::NewProp_ConstraintSection_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveConstraintKey_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventMoveConstraintKey_Parms, InTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveConstraintKey_Statics::NewProp_InNewTime = { "InNewTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventMoveConstraintKey_Parms, InNewTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveConstraintKey_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveConstraintKey_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventMoveConstraintKey_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	void Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveConstraintKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ControlRigSequencerEditorLibrary_eventMoveConstraintKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveConstraintKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigSequencerEditorLibrary_eventMoveConstraintKey_Parms), &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveConstraintKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveConstraintKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveConstraintKey_Statics::NewProp_Constraint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveConstraintKey_Statics::NewProp_ConstraintSection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveConstraintKey_Statics::NewProp_InTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveConstraintKey_Statics::NewProp_InNewTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveConstraintKey_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveConstraintKey_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveConstraintKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveConstraintKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/** Move the constraint active key in the current open Sequencer\n\x09* @param InConstraint The constraint whose key to move\n\x09* @param ConstraintSection Section containing Cosntraint Key\n\x09* @param InTime Original time of the constraint key\n\x09* @param InNewTime New time for the constraint key\n\x09* @param TimeUnit Unit for the time params, either in display rate or tick resolution\n\x09* @return Will return false if function fails, for example if there is no key at this time it will fail, or if the new time is invalid it could fail also\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Move the constraint active key in the current open Sequencer\n@param InConstraint The constraint whose key to move\n@param ConstraintSection Section containing Cosntraint Key\n@param InTime Original time of the constraint key\n@param InNewTime New time for the constraint key\n@param TimeUnit Unit for the time params, either in display rate or tick resolution\n@return Will return false if function fails, for example if there is no key at this time it will fail, or if the new time is invalid it could fail also" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveConstraintKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "MoveConstraintKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveConstraintKey_Statics::ControlRigSequencerEditorLibrary_eventMoveConstraintKey_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveConstraintKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveConstraintKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveConstraintKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveConstraintKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveConstraintKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveConstraintKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveControlRigSpace_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventMoveControlRigSpace_Parms
		{
			ULevelSequence* InSequence;
			UControlRig* InControlRig;
			FName InControlName;
			FFrameNumber InTime;
			FFrameNumber InNewTime;
			ESequenceTimeUnit TimeUnit;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InControlRig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InControlName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InNewTime;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveControlRigSpace_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventMoveControlRigSpace_Parms, InSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveControlRigSpace_Statics::NewProp_InControlRig = { "InControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventMoveControlRigSpace_Parms, InControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveControlRigSpace_Statics::NewProp_InControlName = { "InControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventMoveControlRigSpace_Parms, InControlName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveControlRigSpace_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventMoveControlRigSpace_Parms, InTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveControlRigSpace_Statics::NewProp_InNewTime = { "InNewTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventMoveControlRigSpace_Parms, InNewTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveControlRigSpace_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveControlRigSpace_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventMoveControlRigSpace_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	void Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveControlRigSpace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ControlRigSequencerEditorLibrary_eventMoveControlRigSpace_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveControlRigSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigSequencerEditorLibrary_eventMoveControlRigSpace_Parms), &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveControlRigSpace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveControlRigSpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveControlRigSpace_Statics::NewProp_InSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveControlRigSpace_Statics::NewProp_InControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveControlRigSpace_Statics::NewProp_InControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveControlRigSpace_Statics::NewProp_InTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveControlRigSpace_Statics::NewProp_InNewTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveControlRigSpace_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveControlRigSpace_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveControlRigSpace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveControlRigSpace_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/** Move the Control Rig Space Key for the Control at the specified time to the new time. This will also move any Control Rig keys at this space switch boundary.\n\x09*\n\x09* @param InSequence Sequence to set the space\n\x09* @param InControlRig ControlRig with the Control\n\x09* @param InControlName The name of the Control\n\x09* @param InTime Original time of the space key\n\x09* @param InNewTime New time for the space key\n\x09* @param TimeUnit Unit for the time params, either in display rate or tick resolution\n\x09* @return Will return false if function fails, for example if there is no key at this time it will fail, or if the new time is invalid it could fail also\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Move the Control Rig Space Key for the Control at the specified time to the new time. This will also move any Control Rig keys at this space switch boundary.\n\n@param InSequence Sequence to set the space\n@param InControlRig ControlRig with the Control\n@param InControlName The name of the Control\n@param InTime Original time of the space key\n@param InNewTime New time for the space key\n@param TimeUnit Unit for the time params, either in display rate or tick resolution\n@return Will return false if function fails, for example if there is no key at this time it will fail, or if the new time is invalid it could fail also" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveControlRigSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "MoveControlRigSpace", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveControlRigSpace_Statics::ControlRigSequencerEditorLibrary_eventMoveControlRigSpace_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveControlRigSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveControlRigSpace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveControlRigSpace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveControlRigSpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveControlRigSpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveControlRigSpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_RenameControlRigControlChannels_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventRenameControlRigControlChannels_Parms
		{
			ULevelSequence* InSequence;
			UControlRig* InControlRig;
			TArray<FName> InOldControlNames;
			TArray<FName> InNewControlNames;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InControlRig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InOldControlNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InOldControlNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InOldControlNames;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InNewControlNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InNewControlNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InNewControlNames;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_RenameControlRigControlChannels_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventRenameControlRigControlChannels_Parms, InSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_RenameControlRigControlChannels_Statics::NewProp_InControlRig = { "InControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventRenameControlRigControlChannels_Parms, InControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_RenameControlRigControlChannels_Statics::NewProp_InOldControlNames_Inner = { "InOldControlNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_RenameControlRigControlChannels_Statics::NewProp_InOldControlNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_RenameControlRigControlChannels_Statics::NewProp_InOldControlNames = { "InOldControlNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventRenameControlRigControlChannels_Parms, InOldControlNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_RenameControlRigControlChannels_Statics::NewProp_InOldControlNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_RenameControlRigControlChannels_Statics::NewProp_InOldControlNames_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_RenameControlRigControlChannels_Statics::NewProp_InNewControlNames_Inner = { "InNewControlNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_RenameControlRigControlChannels_Statics::NewProp_InNewControlNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_RenameControlRigControlChannels_Statics::NewProp_InNewControlNames = { "InNewControlNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventRenameControlRigControlChannels_Parms, InNewControlNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_RenameControlRigControlChannels_Statics::NewProp_InNewControlNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_RenameControlRigControlChannels_Statics::NewProp_InNewControlNames_MetaData)) };
	void Z_Construct_UFunction_UControlRigSequencerEditorLibrary_RenameControlRigControlChannels_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ControlRigSequencerEditorLibrary_eventRenameControlRigControlChannels_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_RenameControlRigControlChannels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigSequencerEditorLibrary_eventRenameControlRigControlChannels_Parms), &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_RenameControlRigControlChannels_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_RenameControlRigControlChannels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_RenameControlRigControlChannels_Statics::NewProp_InSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_RenameControlRigControlChannels_Statics::NewProp_InControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_RenameControlRigControlChannels_Statics::NewProp_InOldControlNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_RenameControlRigControlChannels_Statics::NewProp_InOldControlNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_RenameControlRigControlChannels_Statics::NewProp_InNewControlNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_RenameControlRigControlChannels_Statics::NewProp_InNewControlNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_RenameControlRigControlChannels_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_RenameControlRigControlChannels_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/** Rename the Control Rig Channels in Sequencer to the specified new control names, which should be present on the Control Rig\n\x09* @param InSequence Sequence to rename controls\n\x09* @param InControlRig ControlRig to rename controls\n\x09* @param InOldControlNames The name of the old Control Rig Control Channels to change. Will be replaced by the corresponding name in the InNewControlNames array\n\x09* @param InNewControlNames  The name of the new Control Rig Channels \n\x09* @return Return true if the function succeeds, false if it doesn't which can happen if the name arrays don't match in size or any of the new Control Names aren't valid\n\x09*/" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Rename the Control Rig Channels in Sequencer to the specified new control names, which should be present on the Control Rig\n@param InSequence Sequence to rename controls\n@param InControlRig ControlRig to rename controls\n@param InOldControlNames The name of the old Control Rig Control Channels to change. Will be replaced by the corresponding name in the InNewControlNames array\n@param InNewControlNames  The name of the new Control Rig Channels\n@return Return true if the function succeeds, false if it doesn't which can happen if the name arrays don't match in size or any of the new Control Names aren't valid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_RenameControlRigControlChannels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "RenameControlRigControlChannels", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_RenameControlRigControlChannels_Statics::ControlRigSequencerEditorLibrary_eventRenameControlRigControlChannels_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_RenameControlRigControlChannels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_RenameControlRigControlChannels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_RenameControlRigControlChannels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_RenameControlRigControlChannels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_RenameControlRigControlChannels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_RenameControlRigControlChannels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetConstraintActiveKey_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventSetConstraintActiveKey_Parms
		{
			UTickableConstraint* InConstraint;
			bool bActive;
			FFrameNumber InFrame;
			ESequenceTimeUnit TimeUnit;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InConstraint;
		static void NewProp_bActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActive;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InFrame;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetConstraintActiveKey_Statics::NewProp_InConstraint = { "InConstraint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetConstraintActiveKey_Parms, InConstraint), Z_Construct_UClass_UTickableConstraint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetConstraintActiveKey_Statics::NewProp_bActive_SetBit(void* Obj)
	{
		((ControlRigSequencerEditorLibrary_eventSetConstraintActiveKey_Parms*)Obj)->bActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetConstraintActiveKey_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigSequencerEditorLibrary_eventSetConstraintActiveKey_Parms), &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetConstraintActiveKey_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetConstraintActiveKey_Statics::NewProp_InFrame = { "InFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetConstraintActiveKey_Parms, InFrame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetConstraintActiveKey_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetConstraintActiveKey_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetConstraintActiveKey_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	void Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetConstraintActiveKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ControlRigSequencerEditorLibrary_eventSetConstraintActiveKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetConstraintActiveKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigSequencerEditorLibrary_eventSetConstraintActiveKey_Parms), &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetConstraintActiveKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetConstraintActiveKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetConstraintActiveKey_Statics::NewProp_InConstraint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetConstraintActiveKey_Statics::NewProp_bActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetConstraintActiveKey_Statics::NewProp_InFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetConstraintActiveKey_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetConstraintActiveKey_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetConstraintActiveKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetConstraintActiveKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Set the constraint active key in the current open Sequencer\n\x09* @param InConstraint The constraint to set the key\n\x09* @param bActive Whether or not it's active\n\x09* @param FrameTime Time to set the value\n\x09* @param TimeUnit Unit for the time params, either in display rate or tick resolution\n\x09* @return Returns true if we set the constraint to be the passed in value, false if not. We may not do so if the value is the same.\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Set the constraint active key in the current open Sequencer\n@param InConstraint The constraint to set the key\n@param bActive Whether or not it's active\n@param FrameTime Time to set the value\n@param TimeUnit Unit for the time params, either in display rate or tick resolution\n@return Returns true if we set the constraint to be the passed in value, false if not. We may not do so if the value is the same." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetConstraintActiveKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "SetConstraintActiveKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetConstraintActiveKey_Statics::ControlRigSequencerEditorLibrary_eventSetConstraintActiveKey_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetConstraintActiveKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetConstraintActiveKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetConstraintActiveKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetConstraintActiveKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetConstraintActiveKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetConstraintActiveKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigApplyMode_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventSetControlRigApplyMode_Parms
		{
			UControlRig* InControlRig;
			EControlRigFKRigExecuteMode InApplyMode;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InControlRig;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InApplyMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InApplyMode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigApplyMode_Statics::NewProp_InControlRig = { "InControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetControlRigApplyMode_Parms, InControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigApplyMode_Statics::NewProp_InApplyMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigApplyMode_Statics::NewProp_InApplyMode = { "InApplyMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetControlRigApplyMode_Parms, InApplyMode), Z_Construct_UEnum_ControlRig_EControlRigFKRigExecuteMode, METADATA_PARAMS(nullptr, 0) }; // 3135666767
	void Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigApplyMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ControlRigSequencerEditorLibrary_eventSetControlRigApplyMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigApplyMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigSequencerEditorLibrary_eventSetControlRigApplyMode_Parms), &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigApplyMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigApplyMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigApplyMode_Statics::NewProp_InControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigApplyMode_Statics::NewProp_InApplyMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigApplyMode_Statics::NewProp_InApplyMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigApplyMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigApplyMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\x09Set the FK Control Rig to apply mode\n\x09@param InControlRig Rig to set \n\x09@param InApplyMode Set the EControlRigFKRigExecuteMode mode (Replace,Addtiive or Direct)\n\x09@return returns True if the mode was set, may not be set if the Control Rig doesn't support these modes currently only FKControlRig's do.\n\x09**/" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Set the FK Control Rig to apply mode\n@param InControlRig Rig to set\n@param InApplyMode Set the EControlRigFKRigExecuteMode mode (Replace,Addtiive or Direct)\n@return returns True if the mode was set, may not be set if the Control Rig doesn't support these modes currently only FKControlRig's do." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigApplyMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "SetControlRigApplyMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigApplyMode_Statics::ControlRigSequencerEditorLibrary_eventSetControlRigApplyMode_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigApplyMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigApplyMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigApplyMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigApplyMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigApplyMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigApplyMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigSpace_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventSetControlRigSpace_Parms
		{
			ULevelSequence* InSequence;
			UControlRig* InControlRig;
			FName InControlName;
			FRigElementKey InSpaceKey;
			FFrameNumber InTime;
			ESequenceTimeUnit TimeUnit;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InControlRig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InControlName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSpaceKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSpaceKey;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTime;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigSpace_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetControlRigSpace_Parms, InSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigSpace_Statics::NewProp_InControlRig = { "InControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetControlRigSpace_Parms, InControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigSpace_Statics::NewProp_InControlName = { "InControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetControlRigSpace_Parms, InControlName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigSpace_Statics::NewProp_InSpaceKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigSpace_Statics::NewProp_InSpaceKey = { "InSpaceKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetControlRigSpace_Parms, InSpaceKey), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigSpace_Statics::NewProp_InSpaceKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigSpace_Statics::NewProp_InSpaceKey_MetaData)) }; // 2461395651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigSpace_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetControlRigSpace_Parms, InTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigSpace_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigSpace_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetControlRigSpace_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	void Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigSpace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ControlRigSequencerEditorLibrary_eventSetControlRigSpace_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigSequencerEditorLibrary_eventSetControlRigSpace_Parms), &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigSpace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigSpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigSpace_Statics::NewProp_InSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigSpace_Statics::NewProp_InControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigSpace_Statics::NewProp_InControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigSpace_Statics::NewProp_InSpaceKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigSpace_Statics::NewProp_InTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigSpace_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigSpace_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigSpace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigSpace_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/*\n\x09 * Set the a key for the Control Rig Space for the Control at the specified time. If space is the same as the current no key witll be set.\n\x09 *\n\x09 * @param InSequence Sequence to set the space\n\x09 * @param InControlRig ControlRig with the Control\n\x09 * @param InControlName The name of the Control\n\x09 * @param InSpaceKey  The new space for the Control\n\x09 * @param InTime Time to change the space.\n\x09 * @param TimeUnit Unit for the InTime, either in display rate or tick resolution\n\x09 */" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "* Set the a key for the Control Rig Space for the Control at the specified time. If space is the same as the current no key witll be set.\n*\n* @param InSequence Sequence to set the space\n* @param InControlRig ControlRig with the Control\n* @param InControlName The name of the Control\n* @param InSpaceKey  The new space for the Control\n* @param InTime Time to change the space.\n* @param TimeUnit Unit for the InTime, either in display rate or tick resolution" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "SetControlRigSpace", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigSpace_Statics::ControlRigSequencerEditorLibrary_eventSetControlRigSpace_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigSpace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigSpace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigSpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigSpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigSpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransform_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventSetControlRigWorldTransform_Parms
		{
			ULevelSequence* LevelSequence;
			UControlRig* ControlRig;
			FName ControlName;
			FFrameNumber Frame;
			FTransform WorldTransform;
			ESequenceTimeUnit TimeUnit;
			bool bSetKey;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlRig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldTransform;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static void NewProp_bSetKey_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransform_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetControlRigWorldTransform_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransform_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetControlRigWorldTransform_Parms, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransform_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetControlRigWorldTransform_Parms, ControlName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransform_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetControlRigWorldTransform_Parms, Frame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransform_Statics::NewProp_WorldTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransform_Statics::NewProp_WorldTransform = { "WorldTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetControlRigWorldTransform_Parms, WorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransform_Statics::NewProp_WorldTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransform_Statics::NewProp_WorldTransform_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransform_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransform_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetControlRigWorldTransform_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	void Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransform_Statics::NewProp_bSetKey_SetBit(void* Obj)
	{
		((ControlRigSequencerEditorLibrary_eventSetControlRigWorldTransform_Parms*)Obj)->bSetKey = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransform_Statics::NewProp_bSetKey = { "bSetKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigSequencerEditorLibrary_eventSetControlRigWorldTransform_Parms), &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransform_Statics::NewProp_bSetKey_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransform_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransform_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransform_Statics::NewProp_ControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransform_Statics::NewProp_Frame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransform_Statics::NewProp_WorldTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransform_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransform_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransform_Statics::NewProp_bSetKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Set ControlRig Control's World Transform at a specific time\n\x09* @param LevelSequence Active Sequence to set transforms for. Must be loaded in Level Editor.\n\x09* @param ControlRig The ControlRig\n\x09* @param ControlName Name of the Control\n\x09* @param Frame Time to set the transform\n\x09* @param WorldTransform World Transform to set\n\x09* @param TimeUnit Unit for frame values, either in display rate or tick resolution\n\x09* @param bSetKey Whether or not to set a key.\n\x09*/" },
		{ "CPP_Default_bSetKey", "true" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Set ControlRig Control's World Transform at a specific time\n@param LevelSequence Active Sequence to set transforms for. Must be loaded in Level Editor.\n@param ControlRig The ControlRig\n@param ControlName Name of the Control\n@param Frame Time to set the transform\n@param WorldTransform World Transform to set\n@param TimeUnit Unit for frame values, either in display rate or tick resolution\n@param bSetKey Whether or not to set a key." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "SetControlRigWorldTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransform_Statics::ControlRigSequencerEditorLibrary_eventSetControlRigWorldTransform_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransforms_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventSetControlRigWorldTransforms_Parms
		{
			ULevelSequence* LevelSequence;
			UControlRig* ControlRig;
			FName ControlName;
			TArray<FFrameNumber> Frames;
			TArray<FTransform> WorldTransforms;
			ESequenceTimeUnit TimeUnit;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlRig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Frames;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldTransforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldTransforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WorldTransforms;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransforms_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetControlRigWorldTransforms_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransforms_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetControlRigWorldTransforms_Parms, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransforms_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetControlRigWorldTransforms_Parms, ControlName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransforms_Statics::NewProp_Frames_Inner = { "Frames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransforms_Statics::NewProp_Frames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransforms_Statics::NewProp_Frames = { "Frames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetControlRigWorldTransforms_Parms, Frames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransforms_Statics::NewProp_Frames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransforms_Statics::NewProp_Frames_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransforms_Statics::NewProp_WorldTransforms_Inner = { "WorldTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransforms_Statics::NewProp_WorldTransforms_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransforms_Statics::NewProp_WorldTransforms = { "WorldTransforms", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetControlRigWorldTransforms_Parms, WorldTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransforms_Statics::NewProp_WorldTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransforms_Statics::NewProp_WorldTransforms_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransforms_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransforms_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetControlRigWorldTransforms_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransforms_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransforms_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransforms_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransforms_Statics::NewProp_ControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransforms_Statics::NewProp_Frames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransforms_Statics::NewProp_Frames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransforms_Statics::NewProp_WorldTransforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransforms_Statics::NewProp_WorldTransforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransforms_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransforms_Statics::NewProp_TimeUnit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransforms_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Set ControlRig Control's World Transforms at a specific times.\n\x09* @param LevelSequence Active Sequence to set transforms for. Must be loaded in Level Editor.\n\x09* @param ControlRig The ControlRig\n\x09* @param ControlName Name of the Control\n\x09* @param Frames Times to set the transform\n\x09* @param WorldTransform World Transform to set\n\x09* @param TimeUnit Unit for frame values, either in display rate or tick resolution\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Set ControlRig Control's World Transforms at a specific times.\n@param LevelSequence Active Sequence to set transforms for. Must be loaded in Level Editor.\n@param ControlRig The ControlRig\n@param ControlName Name of the Control\n@param Frames Times to set the transform\n@param WorldTransform World Transform to set\n@param TimeUnit Unit for frame values, either in display rate or tick resolution" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransforms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "SetControlRigWorldTransforms", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransforms_Statics::ControlRigSequencerEditorLibrary_eventSetControlRigWorldTransforms_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransforms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransforms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransforms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransforms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransforms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransforms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlsMask_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventSetControlsMask_Parms
		{
			UMovieSceneSection* InSection;
			TArray<FName> ControlNames;
			bool bVisible;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSection;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ControlNames;
		static void NewProp_bVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlsMask_Statics::NewProp_InSection_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlsMask_Statics::NewProp_InSection = { "InSection", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetControlsMask_Parms, InSection), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlsMask_Statics::NewProp_InSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlsMask_Statics::NewProp_InSection_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlsMask_Statics::NewProp_ControlNames_Inner = { "ControlNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlsMask_Statics::NewProp_ControlNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlsMask_Statics::NewProp_ControlNames = { "ControlNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetControlsMask_Parms, ControlNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlsMask_Statics::NewProp_ControlNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlsMask_Statics::NewProp_ControlNames_MetaData)) };
	void Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlsMask_Statics::NewProp_bVisible_SetBit(void* Obj)
	{
		((ControlRigSequencerEditorLibrary_eventSetControlsMask_Parms*)Obj)->bVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlsMask_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigSequencerEditorLibrary_eventSetControlsMask_Parms), &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlsMask_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlsMask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlsMask_Statics::NewProp_InSection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlsMask_Statics::NewProp_ControlNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlsMask_Statics::NewProp_ControlNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlsMask_Statics::NewProp_bVisible,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlsMask_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/** Set the controls mask for the given ControlNames */" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Set the controls mask for the given ControlNames" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlsMask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "SetControlsMask", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlsMask_Statics::ControlRigSequencerEditorLibrary_eventSetControlsMask_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlsMask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlsMask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlsMask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlsMask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlsMask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlsMask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBool_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventSetLocalControlRigBool_Parms
		{
			ULevelSequence* LevelSequence;
			UControlRig* ControlRig;
			FName ControlName;
			FFrameNumber Frame;
			bool Value;
			ESequenceTimeUnit TimeUnit;
			bool bSetKey;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlRig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frame;
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static void NewProp_bSetKey_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBool_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigBool_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBool_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigBool_Parms, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBool_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigBool_Parms, ControlName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBool_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigBool_Parms, Frame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBool_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((ControlRigSequencerEditorLibrary_eventSetLocalControlRigBool_Parms*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigSequencerEditorLibrary_eventSetLocalControlRigBool_Parms), &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBool_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBool_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBool_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigBool_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	void Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBool_Statics::NewProp_bSetKey_SetBit(void* Obj)
	{
		((ControlRigSequencerEditorLibrary_eventSetLocalControlRigBool_Parms*)Obj)->bSetKey = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBool_Statics::NewProp_bSetKey = { "bSetKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigSequencerEditorLibrary_eventSetLocalControlRigBool_Parms), &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBool_Statics::NewProp_bSetKey_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBool_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBool_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBool_Statics::NewProp_ControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBool_Statics::NewProp_Frame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBool_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBool_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBool_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBool_Statics::NewProp_bSetKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Set ControlRig Control's bool value at specific time\n\x09* @param LevelSequence Active Sequence to set value on\n\x09* @param ControlRig The ControlRig\n\x09* @param ControlName Name of the Control, should be a bool control\n\x09* @param Frame Time to set the value\n\x09* @param Value The value to set\n\x09* @param TimeUnit Unit for frame values, either in display rate or tick resolution\n\x09* @param bSetKey If True set a key, if not just set the value\n\x09*/" },
		{ "CPP_Default_bSetKey", "true" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Set ControlRig Control's bool value at specific time\n@param LevelSequence Active Sequence to set value on\n@param ControlRig The ControlRig\n@param ControlName Name of the Control, should be a bool control\n@param Frame Time to set the value\n@param Value The value to set\n@param TimeUnit Unit for frame values, either in display rate or tick resolution\n@param bSetKey If True set a key, if not just set the value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "SetLocalControlRigBool", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBool_Statics::ControlRigSequencerEditorLibrary_eventSetLocalControlRigBool_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBools_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventSetLocalControlRigBools_Parms
		{
			ULevelSequence* LevelSequence;
			UControlRig* ControlRig;
			FName ControlName;
			TArray<FFrameNumber> Frames;
			TArray<bool> Values;
			ESequenceTimeUnit TimeUnit;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlRig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Frames;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBools_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigBools_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBools_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigBools_Parms, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBools_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigBools_Parms, ControlName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBools_Statics::NewProp_Frames_Inner = { "Frames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBools_Statics::NewProp_Frames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBools_Statics::NewProp_Frames = { "Frames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigBools_Parms, Frames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBools_Statics::NewProp_Frames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBools_Statics::NewProp_Frames_MetaData)) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBools_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBools_Statics::NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBools_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigBools_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBools_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBools_Statics::NewProp_Values_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBools_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBools_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigBools_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBools_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBools_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBools_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBools_Statics::NewProp_ControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBools_Statics::NewProp_Frames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBools_Statics::NewProp_Frames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBools_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBools_Statics::NewProp_Values,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBools_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBools_Statics::NewProp_TimeUnit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBools_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Set ControlRig Control's bool values at specific times\n\x09* @param LevelSequence Active Sequence to set value on\n\x09* @param ControlRig The ControlRig\n\x09* @param ControlName Name of the Control, should be a bool control\n\x09* @param Frames Times to set the values\n\x09* @param Values The values to set at those times\n\x09* @param TimeUnit Unit for frame values, either in display rate or tick resolution\n*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Set ControlRig Control's bool values at specific times\n@param LevelSequence Active Sequence to set value on\n@param ControlRig The ControlRig\n@param ControlName Name of the Control, should be a bool control\n@param Frames Times to set the values\n@param Values The values to set at those times\n@param TimeUnit Unit for frame values, either in display rate or tick resolution" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBools_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "SetLocalControlRigBools", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBools_Statics::ControlRigSequencerEditorLibrary_eventSetLocalControlRigBools_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBools_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBools_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBools_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBools_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBools()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBools_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransform_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventSetLocalControlRigEulerTransform_Parms
		{
			ULevelSequence* LevelSequence;
			UControlRig* ControlRig;
			FName ControlName;
			FFrameNumber Frame;
			FEulerTransform Value;
			ESequenceTimeUnit TimeUnit;
			bool bSetKey;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlRig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frame;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static void NewProp_bSetKey_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransform_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigEulerTransform_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransform_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigEulerTransform_Parms, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransform_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigEulerTransform_Parms, ControlName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransform_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigEulerTransform_Parms, Frame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransform_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigEulerTransform_Parms, Value), Z_Construct_UScriptStruct_FEulerTransform, METADATA_PARAMS(nullptr, 0) }; // 3672886731
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransform_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransform_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigEulerTransform_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	void Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransform_Statics::NewProp_bSetKey_SetBit(void* Obj)
	{
		((ControlRigSequencerEditorLibrary_eventSetLocalControlRigEulerTransform_Parms*)Obj)->bSetKey = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransform_Statics::NewProp_bSetKey = { "bSetKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigSequencerEditorLibrary_eventSetLocalControlRigEulerTransform_Parms), &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransform_Statics::NewProp_bSetKey_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransform_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransform_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransform_Statics::NewProp_ControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransform_Statics::NewProp_Frame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransform_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransform_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransform_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransform_Statics::NewProp_bSetKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Set ControlRig Control's EulerTransform value at specific time\n\x09* @param LevelSequence Active Sequence to set value on\n\x09* @param ControlRig The ControlRig\n\x09* @param ControlName Name of the Control, should be a EulerTransform control\n\x09* @param Frame Time to set the value\n\x09* @param Value The value to set\n\x09* @param TimeUnit Unit for frame values, either in display rate or tick resolution\n\x09* @param bSetKey If True set a key, if not just set the value\n\x09*/" },
		{ "CPP_Default_bSetKey", "true" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Set ControlRig Control's EulerTransform value at specific time\n@param LevelSequence Active Sequence to set value on\n@param ControlRig The ControlRig\n@param ControlName Name of the Control, should be a EulerTransform control\n@param Frame Time to set the value\n@param Value The value to set\n@param TimeUnit Unit for frame values, either in display rate or tick resolution\n@param bSetKey If True set a key, if not just set the value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "SetLocalControlRigEulerTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransform_Statics::ControlRigSequencerEditorLibrary_eventSetLocalControlRigEulerTransform_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransforms_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventSetLocalControlRigEulerTransforms_Parms
		{
			ULevelSequence* LevelSequence;
			UControlRig* ControlRig;
			FName ControlName;
			TArray<FFrameNumber> Frames;
			TArray<FEulerTransform> Values;
			ESequenceTimeUnit TimeUnit;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlRig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Frames;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransforms_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigEulerTransforms_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransforms_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigEulerTransforms_Parms, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransforms_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigEulerTransforms_Parms, ControlName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransforms_Statics::NewProp_Frames_Inner = { "Frames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransforms_Statics::NewProp_Frames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransforms_Statics::NewProp_Frames = { "Frames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigEulerTransforms_Parms, Frames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransforms_Statics::NewProp_Frames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransforms_Statics::NewProp_Frames_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransforms_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FEulerTransform, METADATA_PARAMS(nullptr, 0) }; // 3672886731
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransforms_Statics::NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransforms_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigEulerTransforms_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransforms_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransforms_Statics::NewProp_Values_MetaData)) }; // 3672886731
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransforms_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransforms_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigEulerTransforms_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransforms_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransforms_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransforms_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransforms_Statics::NewProp_ControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransforms_Statics::NewProp_Frames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransforms_Statics::NewProp_Frames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransforms_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransforms_Statics::NewProp_Values,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransforms_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransforms_Statics::NewProp_TimeUnit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransforms_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Set ControlRig Control's EulerTransform values at specific times\n\x09* @param LevelSequence Active Sequence to set value on\n\x09* @param ControlRig The ControlRig\n\x09* @param ControlName Name of the Control, should be a EulerTransform control\n\x09* @param Frames Times to set the values\n\x09* @param Values The values to set at those times\n\x09* @param TimeUnit Unit for frame values, either in display rate or tick resolution\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Set ControlRig Control's EulerTransform values at specific times\n@param LevelSequence Active Sequence to set value on\n@param ControlRig The ControlRig\n@param ControlName Name of the Control, should be a EulerTransform control\n@param Frames Times to set the values\n@param Values The values to set at those times\n@param TimeUnit Unit for frame values, either in display rate or tick resolution" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransforms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "SetLocalControlRigEulerTransforms", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransforms_Statics::ControlRigSequencerEditorLibrary_eventSetLocalControlRigEulerTransforms_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransforms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransforms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransforms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransforms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransforms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransforms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloat_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventSetLocalControlRigFloat_Parms
		{
			ULevelSequence* LevelSequence;
			UControlRig* ControlRig;
			FName ControlName;
			FFrameNumber Frame;
			float Value;
			ESequenceTimeUnit TimeUnit;
			bool bSetKey;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlRig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frame;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static void NewProp_bSetKey_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloat_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigFloat_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloat_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigFloat_Parms, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloat_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigFloat_Parms, ControlName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloat_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigFloat_Parms, Frame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigFloat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloat_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloat_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigFloat_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	void Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloat_Statics::NewProp_bSetKey_SetBit(void* Obj)
	{
		((ControlRigSequencerEditorLibrary_eventSetLocalControlRigFloat_Parms*)Obj)->bSetKey = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloat_Statics::NewProp_bSetKey = { "bSetKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigSequencerEditorLibrary_eventSetLocalControlRigFloat_Parms), &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloat_Statics::NewProp_bSetKey_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloat_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloat_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloat_Statics::NewProp_ControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloat_Statics::NewProp_Frame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloat_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloat_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloat_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloat_Statics::NewProp_bSetKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Set ControlRig Control's float value at specific time\n\x09* @param LevelSequence Active Sequence to set value on\n\x09* @param ControlRig The ControlRig\n\x09* @param ControlName Name of the Control, should be a float control\n\x09* @param Frame Time to set the value\n\x09* @param Value The value to set\n\x09* @param TimeUnit Unit for frame values, either in display rate or tick resolution\n\x09* @param bSetKey If True set a key, if not just set the value\n\x09*/" },
		{ "CPP_Default_bSetKey", "true" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Set ControlRig Control's float value at specific time\n@param LevelSequence Active Sequence to set value on\n@param ControlRig The ControlRig\n@param ControlName Name of the Control, should be a float control\n@param Frame Time to set the value\n@param Value The value to set\n@param TimeUnit Unit for frame values, either in display rate or tick resolution\n@param bSetKey If True set a key, if not just set the value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "SetLocalControlRigFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloat_Statics::ControlRigSequencerEditorLibrary_eventSetLocalControlRigFloat_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloats_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventSetLocalControlRigFloats_Parms
		{
			ULevelSequence* LevelSequence;
			UControlRig* ControlRig;
			FName ControlName;
			TArray<FFrameNumber> Frames;
			TArray<float> Values;
			ESequenceTimeUnit TimeUnit;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlRig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Frames;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloats_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigFloats_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloats_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigFloats_Parms, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloats_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigFloats_Parms, ControlName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloats_Statics::NewProp_Frames_Inner = { "Frames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloats_Statics::NewProp_Frames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloats_Statics::NewProp_Frames = { "Frames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigFloats_Parms, Frames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloats_Statics::NewProp_Frames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloats_Statics::NewProp_Frames_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloats_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloats_Statics::NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloats_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigFloats_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloats_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloats_Statics::NewProp_Values_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloats_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloats_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigFloats_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloats_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloats_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloats_Statics::NewProp_ControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloats_Statics::NewProp_Frames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloats_Statics::NewProp_Frames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloats_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloats_Statics::NewProp_Values,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloats_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloats_Statics::NewProp_TimeUnit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloats_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Set ControlRig Control's float values at specific times\n\x09* @param LevelSequence Active Sequence to set value on\n\x09* @param ControlRig The ControlRig\n\x09* @param ControlName Name of the Control, should be a float control\n\x09* @param Frames Times to set the values\n\x09* @param Values The values to set at those times\n\x09* @param TimeUnit Unit for frame values, either in display rate or tick resolution\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Set ControlRig Control's float values at specific times\n@param LevelSequence Active Sequence to set value on\n@param ControlRig The ControlRig\n@param ControlName Name of the Control, should be a float control\n@param Frames Times to set the values\n@param Values The values to set at those times\n@param TimeUnit Unit for frame values, either in display rate or tick resolution" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "SetLocalControlRigFloats", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloats_Statics::ControlRigSequencerEditorLibrary_eventSetLocalControlRigFloats_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInt_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventSetLocalControlRigInt_Parms
		{
			ULevelSequence* LevelSequence;
			UControlRig* ControlRig;
			FName ControlName;
			FFrameNumber Frame;
			int32 Value;
			ESequenceTimeUnit TimeUnit;
			bool bSetKey;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlRig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frame;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static void NewProp_bSetKey_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInt_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigInt_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInt_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigInt_Parms, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInt_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigInt_Parms, ControlName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInt_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigInt_Parms, Frame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigInt_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInt_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInt_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigInt_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	void Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInt_Statics::NewProp_bSetKey_SetBit(void* Obj)
	{
		((ControlRigSequencerEditorLibrary_eventSetLocalControlRigInt_Parms*)Obj)->bSetKey = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInt_Statics::NewProp_bSetKey = { "bSetKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigSequencerEditorLibrary_eventSetLocalControlRigInt_Parms), &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInt_Statics::NewProp_bSetKey_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInt_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInt_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInt_Statics::NewProp_ControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInt_Statics::NewProp_Frame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInt_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInt_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInt_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInt_Statics::NewProp_bSetKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Set ControlRig Control's int value at specific time\n\x09* @param LevelSequence Active Sequence to set value on\n\x09* @param ControlRig The ControlRig\n\x09* @param ControlName Name of the Control, should be a int control\n\x09* @param Frame Time to set the value\n\x09* @param Value The value to set\n\x09* @param TimeUnit Unit for frame values, either in display rate or tick resolution\n\x09* @param bSetKey If True set a key, if not just set the value\n\x09*/" },
		{ "CPP_Default_bSetKey", "true" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Set ControlRig Control's int value at specific time\n@param LevelSequence Active Sequence to set value on\n@param ControlRig The ControlRig\n@param ControlName Name of the Control, should be a int control\n@param Frame Time to set the value\n@param Value The value to set\n@param TimeUnit Unit for frame values, either in display rate or tick resolution\n@param bSetKey If True set a key, if not just set the value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "SetLocalControlRigInt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInt_Statics::ControlRigSequencerEditorLibrary_eventSetLocalControlRigInt_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInts_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventSetLocalControlRigInts_Parms
		{
			ULevelSequence* LevelSequence;
			UControlRig* ControlRig;
			FName ControlName;
			TArray<FFrameNumber> Frames;
			TArray<int32> Values;
			ESequenceTimeUnit TimeUnit;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlRig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Frames;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInts_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigInts_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInts_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigInts_Parms, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInts_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigInts_Parms, ControlName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInts_Statics::NewProp_Frames_Inner = { "Frames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInts_Statics::NewProp_Frames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInts_Statics::NewProp_Frames = { "Frames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigInts_Parms, Frames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInts_Statics::NewProp_Frames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInts_Statics::NewProp_Frames_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInts_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInts_Statics::NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInts_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigInts_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInts_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInts_Statics::NewProp_Values_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInts_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInts_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigInts_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInts_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInts_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInts_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInts_Statics::NewProp_ControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInts_Statics::NewProp_Frames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInts_Statics::NewProp_Frames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInts_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInts_Statics::NewProp_Values,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInts_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInts_Statics::NewProp_TimeUnit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInts_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Set ControlRig Control's int values at specific times\n\x09* @param LevelSequence Active Sequence to set value on\n\x09* @param ControlRig The ControlRig\n\x09* @param ControlName Name of the Control, should be a int control\n\x09* @param Frames Times to set the values\n\x09* @param Values The values to set at those times\n\x09* @param TimeUnit Unit for frame values, either in display rate or tick resolution\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Set ControlRig Control's int values at specific times\n@param LevelSequence Active Sequence to set value on\n@param ControlRig The ControlRig\n@param ControlName Name of the Control, should be a int control\n@param Frames Times to set the values\n@param Values The values to set at those times\n@param TimeUnit Unit for frame values, either in display rate or tick resolution" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "SetLocalControlRigInts", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInts_Statics::ControlRigSequencerEditorLibrary_eventSetLocalControlRigInts_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPosition_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventSetLocalControlRigPosition_Parms
		{
			ULevelSequence* LevelSequence;
			UControlRig* ControlRig;
			FName ControlName;
			FFrameNumber Frame;
			FVector Value;
			ESequenceTimeUnit TimeUnit;
			bool bSetKey;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlRig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frame;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static void NewProp_bSetKey_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPosition_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigPosition_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPosition_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigPosition_Parms, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPosition_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigPosition_Parms, ControlName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPosition_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigPosition_Parms, Frame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPosition_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigPosition_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPosition_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPosition_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigPosition_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	void Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPosition_Statics::NewProp_bSetKey_SetBit(void* Obj)
	{
		((ControlRigSequencerEditorLibrary_eventSetLocalControlRigPosition_Parms*)Obj)->bSetKey = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPosition_Statics::NewProp_bSetKey = { "bSetKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigSequencerEditorLibrary_eventSetLocalControlRigPosition_Parms), &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPosition_Statics::NewProp_bSetKey_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPosition_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPosition_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPosition_Statics::NewProp_ControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPosition_Statics::NewProp_Frame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPosition_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPosition_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPosition_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPosition_Statics::NewProp_bSetKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Set ControlRig Control's Position value at specific time\n\x09* @param LevelSequence Active Sequence to set value on\n\x09* @param ControlRig The ControlRig\n\x09* @param ControlName Name of the Control, should be a Position control\n\x09* @param Frame Time to set the value\n\x09* @param Value The value to set\n\x09* @param TimeUnit Unit for frame values, either in display rate or tick resolution\n\x09* @param bSetKey If True set a key, if not just set the value\n\x09*/" },
		{ "CPP_Default_bSetKey", "true" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Set ControlRig Control's Position value at specific time\n@param LevelSequence Active Sequence to set value on\n@param ControlRig The ControlRig\n@param ControlName Name of the Control, should be a Position control\n@param Frame Time to set the value\n@param Value The value to set\n@param TimeUnit Unit for frame values, either in display rate or tick resolution\n@param bSetKey If True set a key, if not just set the value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "SetLocalControlRigPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPosition_Statics::ControlRigSequencerEditorLibrary_eventSetLocalControlRigPosition_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPositions_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventSetLocalControlRigPositions_Parms
		{
			ULevelSequence* LevelSequence;
			UControlRig* ControlRig;
			FName ControlName;
			TArray<FFrameNumber> Frames;
			TArray<FVector> Values;
			ESequenceTimeUnit TimeUnit;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlRig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Frames;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPositions_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigPositions_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPositions_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigPositions_Parms, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPositions_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigPositions_Parms, ControlName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPositions_Statics::NewProp_Frames_Inner = { "Frames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPositions_Statics::NewProp_Frames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPositions_Statics::NewProp_Frames = { "Frames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigPositions_Parms, Frames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPositions_Statics::NewProp_Frames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPositions_Statics::NewProp_Frames_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPositions_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPositions_Statics::NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPositions_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigPositions_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPositions_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPositions_Statics::NewProp_Values_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPositions_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPositions_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigPositions_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPositions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPositions_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPositions_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPositions_Statics::NewProp_ControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPositions_Statics::NewProp_Frames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPositions_Statics::NewProp_Frames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPositions_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPositions_Statics::NewProp_Values,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPositions_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPositions_Statics::NewProp_TimeUnit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPositions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Set ControlRig Control's Position values at specific times\n\x09* @param LevelSequence Active Sequence to set value on\n\x09* @param ControlRig The ControlRig\n\x09* @param ControlName Name of the Control, should be a Position control\n\x09* @param Frames Times to set the values\n\x09* @param Values The values to set at those times\n\x09* @param TimeUnit Unit for frame values, either in display rate or tick resolution\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Set ControlRig Control's Position values at specific times\n@param LevelSequence Active Sequence to set value on\n@param ControlRig The ControlRig\n@param ControlName Name of the Control, should be a Position control\n@param Frames Times to set the values\n@param Values The values to set at those times\n@param TimeUnit Unit for frame values, either in display rate or tick resolution" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "SetLocalControlRigPositions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPositions_Statics::ControlRigSequencerEditorLibrary_eventSetLocalControlRigPositions_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPositions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPositions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPositions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPositions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPositions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotator_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventSetLocalControlRigRotator_Parms
		{
			ULevelSequence* LevelSequence;
			UControlRig* ControlRig;
			FName ControlName;
			FFrameNumber Frame;
			FRotator Value;
			ESequenceTimeUnit TimeUnit;
			bool bSetKey;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlRig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frame;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static void NewProp_bSetKey_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotator_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigRotator_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotator_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigRotator_Parms, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotator_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigRotator_Parms, ControlName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotator_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigRotator_Parms, Frame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotator_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigRotator_Parms, Value), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotator_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotator_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigRotator_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	void Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotator_Statics::NewProp_bSetKey_SetBit(void* Obj)
	{
		((ControlRigSequencerEditorLibrary_eventSetLocalControlRigRotator_Parms*)Obj)->bSetKey = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotator_Statics::NewProp_bSetKey = { "bSetKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigSequencerEditorLibrary_eventSetLocalControlRigRotator_Parms), &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotator_Statics::NewProp_bSetKey_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotator_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotator_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotator_Statics::NewProp_ControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotator_Statics::NewProp_Frame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotator_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotator_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotator_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotator_Statics::NewProp_bSetKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Set ControlRig Control's Rotator value at specific time\n\x09* @param LevelSequence Active Sequence to set value on\n\x09* @param ControlRig The ControlRig\n\x09* @param ControlName Name of the Control, should be a Rotator control\n\x09* @param Frame Time to set the value\n\x09* @param Value The value to set\n\x09* @param TimeUnit Unit for frame values, either in display rate or tick resolution\n\x09* @param bSetKey If True set a key, if not just set the value\n\x09*/" },
		{ "CPP_Default_bSetKey", "true" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Set ControlRig Control's Rotator value at specific time\n@param LevelSequence Active Sequence to set value on\n@param ControlRig The ControlRig\n@param ControlName Name of the Control, should be a Rotator control\n@param Frame Time to set the value\n@param Value The value to set\n@param TimeUnit Unit for frame values, either in display rate or tick resolution\n@param bSetKey If True set a key, if not just set the value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "SetLocalControlRigRotator", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotator_Statics::ControlRigSequencerEditorLibrary_eventSetLocalControlRigRotator_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotators_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventSetLocalControlRigRotators_Parms
		{
			ULevelSequence* LevelSequence;
			UControlRig* ControlRig;
			FName ControlName;
			TArray<FFrameNumber> Frames;
			TArray<FRotator> Values;
			ESequenceTimeUnit TimeUnit;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlRig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Frames;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotators_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigRotators_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotators_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigRotators_Parms, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotators_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigRotators_Parms, ControlName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotators_Statics::NewProp_Frames_Inner = { "Frames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotators_Statics::NewProp_Frames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotators_Statics::NewProp_Frames = { "Frames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigRotators_Parms, Frames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotators_Statics::NewProp_Frames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotators_Statics::NewProp_Frames_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotators_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotators_Statics::NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotators_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigRotators_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotators_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotators_Statics::NewProp_Values_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotators_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotators_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigRotators_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotators_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotators_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotators_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotators_Statics::NewProp_ControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotators_Statics::NewProp_Frames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotators_Statics::NewProp_Frames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotators_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotators_Statics::NewProp_Values,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotators_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotators_Statics::NewProp_TimeUnit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotators_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Set ControlRig Control's Rotator values at specific times\n\x09* @param LevelSequence Active Sequence to set value on\n\x09* @param ControlRig The ControlRig\n\x09* @param ControlName Name of the Control, should be a Rotator control\n\x09* @param Frames Times to set the values\n\x09* @param Values The values to set at those times\n\x09* @param TimeUnit Unit for frame values, either in display rate or tick resolution\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Set ControlRig Control's Rotator values at specific times\n@param LevelSequence Active Sequence to set value on\n@param ControlRig The ControlRig\n@param ControlName Name of the Control, should be a Rotator control\n@param Frames Times to set the values\n@param Values The values to set at those times\n@param TimeUnit Unit for frame values, either in display rate or tick resolution" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotators_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "SetLocalControlRigRotators", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotators_Statics::ControlRigSequencerEditorLibrary_eventSetLocalControlRigRotators_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotators_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotators_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotators_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotators_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotators()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotators_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScale_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventSetLocalControlRigScale_Parms
		{
			ULevelSequence* LevelSequence;
			UControlRig* ControlRig;
			FName ControlName;
			FFrameNumber Frame;
			FVector Value;
			ESequenceTimeUnit TimeUnit;
			bool bSetKey;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlRig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frame;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static void NewProp_bSetKey_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScale_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigScale_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScale_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigScale_Parms, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScale_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigScale_Parms, ControlName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScale_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigScale_Parms, Frame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScale_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigScale_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScale_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScale_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigScale_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	void Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScale_Statics::NewProp_bSetKey_SetBit(void* Obj)
	{
		((ControlRigSequencerEditorLibrary_eventSetLocalControlRigScale_Parms*)Obj)->bSetKey = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScale_Statics::NewProp_bSetKey = { "bSetKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigSequencerEditorLibrary_eventSetLocalControlRigScale_Parms), &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScale_Statics::NewProp_bSetKey_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScale_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScale_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScale_Statics::NewProp_ControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScale_Statics::NewProp_Frame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScale_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScale_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScale_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScale_Statics::NewProp_bSetKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Set ControlRig Control's Scale value at specific time\n\x09* @param LevelSequence Active Sequence to set value on\n\x09* @param ControlRig The ControlRig\n\x09* @param ControlName Name of the Control, should be a Scale control\n\x09* @param Frame Time to set the value\n\x09* @param Value The value to set\n\x09* @param TimeUnit Unit for frame values, either in display rate or tick resolution\n\x09* @param bSetKey If True set a key, if not just set the value\n*/" },
		{ "CPP_Default_bSetKey", "true" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Set ControlRig Control's Scale value at specific time\n@param LevelSequence Active Sequence to set value on\n@param ControlRig The ControlRig\n@param ControlName Name of the Control, should be a Scale control\n@param Frame Time to set the value\n@param Value The value to set\n@param TimeUnit Unit for frame values, either in display rate or tick resolution\n@param bSetKey If True set a key, if not just set the value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "SetLocalControlRigScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScale_Statics::ControlRigSequencerEditorLibrary_eventSetLocalControlRigScale_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScales_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventSetLocalControlRigScales_Parms
		{
			ULevelSequence* LevelSequence;
			UControlRig* ControlRig;
			FName ControlName;
			TArray<FFrameNumber> Frames;
			TArray<FVector> Values;
			ESequenceTimeUnit TimeUnit;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlRig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Frames;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScales_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigScales_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScales_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigScales_Parms, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScales_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigScales_Parms, ControlName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScales_Statics::NewProp_Frames_Inner = { "Frames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScales_Statics::NewProp_Frames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScales_Statics::NewProp_Frames = { "Frames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigScales_Parms, Frames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScales_Statics::NewProp_Frames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScales_Statics::NewProp_Frames_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScales_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScales_Statics::NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScales_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigScales_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScales_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScales_Statics::NewProp_Values_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScales_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScales_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigScales_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScales_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScales_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScales_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScales_Statics::NewProp_ControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScales_Statics::NewProp_Frames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScales_Statics::NewProp_Frames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScales_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScales_Statics::NewProp_Values,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScales_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScales_Statics::NewProp_TimeUnit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScales_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Set ControlRig Control's Scale values at specific times\n\x09* @param LevelSequence Active Sequence to set value on\n\x09* @param ControlRig The ControlRig\n\x09* @param ControlName Name of the Control, should be a Scale control\n\x09* @param Frames Times to set the values\n\x09* @param Values The values to set at those times\n\x09* @param TimeUnit Unit for frame values, either in display rate or tick resolution\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Set ControlRig Control's Scale values at specific times\n@param LevelSequence Active Sequence to set value on\n@param ControlRig The ControlRig\n@param ControlName Name of the Control, should be a Scale control\n@param Frames Times to set the values\n@param Values The values to set at those times\n@param TimeUnit Unit for frame values, either in display rate or tick resolution" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScales_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "SetLocalControlRigScales", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScales_Statics::ControlRigSequencerEditorLibrary_eventSetLocalControlRigScales_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScales_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScales_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScales_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScales_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScales()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScales_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransform_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventSetLocalControlRigTransform_Parms
		{
			ULevelSequence* LevelSequence;
			UControlRig* ControlRig;
			FName ControlName;
			FFrameNumber Frame;
			FTransform Value;
			ESequenceTimeUnit TimeUnit;
			bool bSetKey;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlRig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frame;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static void NewProp_bSetKey_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransform_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigTransform_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransform_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigTransform_Parms, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransform_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigTransform_Parms, ControlName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransform_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigTransform_Parms, Frame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransform_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigTransform_Parms, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransform_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransform_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigTransform_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	void Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransform_Statics::NewProp_bSetKey_SetBit(void* Obj)
	{
		((ControlRigSequencerEditorLibrary_eventSetLocalControlRigTransform_Parms*)Obj)->bSetKey = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransform_Statics::NewProp_bSetKey = { "bSetKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigSequencerEditorLibrary_eventSetLocalControlRigTransform_Parms), &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransform_Statics::NewProp_bSetKey_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransform_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransform_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransform_Statics::NewProp_ControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransform_Statics::NewProp_Frame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransform_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransform_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransform_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransform_Statics::NewProp_bSetKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Set ControlRig Control's Transform value at specific time\n\x09* @param LevelSequence Active Sequence to set value on\n\x09* @param ControlRig The ControlRig\n\x09* @param ControlName Name of the Control, should be a Transform control\n\x09* @param Frame Time to set the value\n\x09* @param Value The value to set \n\x09* @param TimeUnit Unit for frame values, either in display rate or tick resolution\n\x09* @param bSetKey If True set a key, if not just set the value\n\x09*/" },
		{ "CPP_Default_bSetKey", "true" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Set ControlRig Control's Transform value at specific time\n@param LevelSequence Active Sequence to set value on\n@param ControlRig The ControlRig\n@param ControlName Name of the Control, should be a Transform control\n@param Frame Time to set the value\n@param Value The value to set\n@param TimeUnit Unit for frame values, either in display rate or tick resolution\n@param bSetKey If True set a key, if not just set the value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "SetLocalControlRigTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransform_Statics::ControlRigSequencerEditorLibrary_eventSetLocalControlRigTransform_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScale_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventSetLocalControlRigTransformNoScale_Parms
		{
			ULevelSequence* LevelSequence;
			UControlRig* ControlRig;
			FName ControlName;
			FFrameNumber Frame;
			FTransformNoScale Value;
			ESequenceTimeUnit TimeUnit;
			bool bSetKey;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlRig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frame;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static void NewProp_bSetKey_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScale_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigTransformNoScale_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScale_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigTransformNoScale_Parms, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScale_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigTransformNoScale_Parms, ControlName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScale_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigTransformNoScale_Parms, Frame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScale_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigTransformNoScale_Parms, Value), Z_Construct_UScriptStruct_FTransformNoScale, METADATA_PARAMS(nullptr, 0) }; // 1336134303
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScale_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScale_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigTransformNoScale_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	void Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScale_Statics::NewProp_bSetKey_SetBit(void* Obj)
	{
		((ControlRigSequencerEditorLibrary_eventSetLocalControlRigTransformNoScale_Parms*)Obj)->bSetKey = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScale_Statics::NewProp_bSetKey = { "bSetKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigSequencerEditorLibrary_eventSetLocalControlRigTransformNoScale_Parms), &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScale_Statics::NewProp_bSetKey_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScale_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScale_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScale_Statics::NewProp_ControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScale_Statics::NewProp_Frame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScale_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScale_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScale_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScale_Statics::NewProp_bSetKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Set ControlRig Control's TransformNoScale value at specific time\n\x09* @param LevelSequence Active Sequence to set value on\n\x09* @param ControlRig The ControlRig\n\x09* @param ControlName Name of the Control, should be a TransformNoScale control\n\x09* @param Frame Time to set the value\n\x09* @param Value The value to set\n\x09* @param TimeUnit Unit for frame values, either in display rate or tick resolution\n\x09* @param bSetKey If True set a key, if not just set the value\n\x09*/" },
		{ "CPP_Default_bSetKey", "true" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Set ControlRig Control's TransformNoScale value at specific time\n@param LevelSequence Active Sequence to set value on\n@param ControlRig The ControlRig\n@param ControlName Name of the Control, should be a TransformNoScale control\n@param Frame Time to set the value\n@param Value The value to set\n@param TimeUnit Unit for frame values, either in display rate or tick resolution\n@param bSetKey If True set a key, if not just set the value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "SetLocalControlRigTransformNoScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScale_Statics::ControlRigSequencerEditorLibrary_eventSetLocalControlRigTransformNoScale_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScales_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventSetLocalControlRigTransformNoScales_Parms
		{
			ULevelSequence* LevelSequence;
			UControlRig* ControlRig;
			FName ControlName;
			TArray<FFrameNumber> Frames;
			TArray<FTransformNoScale> Values;
			ESequenceTimeUnit TimeUnit;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlRig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Frames;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScales_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigTransformNoScales_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScales_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigTransformNoScales_Parms, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScales_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigTransformNoScales_Parms, ControlName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScales_Statics::NewProp_Frames_Inner = { "Frames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScales_Statics::NewProp_Frames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScales_Statics::NewProp_Frames = { "Frames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigTransformNoScales_Parms, Frames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScales_Statics::NewProp_Frames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScales_Statics::NewProp_Frames_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScales_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransformNoScale, METADATA_PARAMS(nullptr, 0) }; // 1336134303
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScales_Statics::NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScales_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigTransformNoScales_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScales_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScales_Statics::NewProp_Values_MetaData)) }; // 1336134303
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScales_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScales_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigTransformNoScales_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScales_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScales_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScales_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScales_Statics::NewProp_ControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScales_Statics::NewProp_Frames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScales_Statics::NewProp_Frames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScales_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScales_Statics::NewProp_Values,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScales_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScales_Statics::NewProp_TimeUnit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScales_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Set ControlRig Control's TransformNoScale values at specific times\n\x09* @param LevelSequence Active Sequence to set value on\n\x09* @param ControlRig The ControlRig\n\x09* @param ControlName Name of the Control, should be a TransformNoScale control\n\x09* @param Frames Times to set the values\n\x09* @param Values The values to set at those times\n\x09* @param TimeUnit Unit for frame values, either in display rate or tick resolution\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Set ControlRig Control's TransformNoScale values at specific times\n@param LevelSequence Active Sequence to set value on\n@param ControlRig The ControlRig\n@param ControlName Name of the Control, should be a TransformNoScale control\n@param Frames Times to set the values\n@param Values The values to set at those times\n@param TimeUnit Unit for frame values, either in display rate or tick resolution" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScales_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "SetLocalControlRigTransformNoScales", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScales_Statics::ControlRigSequencerEditorLibrary_eventSetLocalControlRigTransformNoScales_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScales_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScales_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScales_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScales_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScales()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScales_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransforms_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventSetLocalControlRigTransforms_Parms
		{
			ULevelSequence* LevelSequence;
			UControlRig* ControlRig;
			FName ControlName;
			TArray<FFrameNumber> Frames;
			TArray<FTransform> Values;
			ESequenceTimeUnit TimeUnit;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlRig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Frames;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransforms_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigTransforms_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransforms_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigTransforms_Parms, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransforms_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigTransforms_Parms, ControlName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransforms_Statics::NewProp_Frames_Inner = { "Frames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransforms_Statics::NewProp_Frames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransforms_Statics::NewProp_Frames = { "Frames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigTransforms_Parms, Frames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransforms_Statics::NewProp_Frames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransforms_Statics::NewProp_Frames_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransforms_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransforms_Statics::NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransforms_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigTransforms_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransforms_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransforms_Statics::NewProp_Values_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransforms_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransforms_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigTransforms_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransforms_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransforms_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransforms_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransforms_Statics::NewProp_ControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransforms_Statics::NewProp_Frames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransforms_Statics::NewProp_Frames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransforms_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransforms_Statics::NewProp_Values,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransforms_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransforms_Statics::NewProp_TimeUnit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransforms_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Set ControlRig Control's Transform values at specific times\n\x09* @param LevelSequence Active Sequence to set value on\n\x09* @param ControlRig The ControlRig\n\x09* @param ControlName Name of the Control, should be a Transform control\n\x09* @param Frames Times to set the values\n\x09* @param Values The values to set at those times\n\x09* @param TimeUnit Unit for frame values, either in display rate or tick resolution\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Set ControlRig Control's Transform values at specific times\n@param LevelSequence Active Sequence to set value on\n@param ControlRig The ControlRig\n@param ControlName Name of the Control, should be a Transform control\n@param Frames Times to set the values\n@param Values The values to set at those times\n@param TimeUnit Unit for frame values, either in display rate or tick resolution" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransforms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "SetLocalControlRigTransforms", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransforms_Statics::ControlRigSequencerEditorLibrary_eventSetLocalControlRigTransforms_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransforms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransforms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransforms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransforms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransforms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransforms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2D_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventSetLocalControlRigVector2D_Parms
		{
			ULevelSequence* LevelSequence;
			UControlRig* ControlRig;
			FName ControlName;
			FFrameNumber Frame;
			FVector2D Value;
			ESequenceTimeUnit TimeUnit;
			bool bSetKey;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlRig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frame;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static void NewProp_bSetKey_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2D_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigVector2D_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2D_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigVector2D_Parms, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2D_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigVector2D_Parms, ControlName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2D_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigVector2D_Parms, Frame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2D_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigVector2D_Parms, Value), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2D_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2D_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigVector2D_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	void Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2D_Statics::NewProp_bSetKey_SetBit(void* Obj)
	{
		((ControlRigSequencerEditorLibrary_eventSetLocalControlRigVector2D_Parms*)Obj)->bSetKey = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2D_Statics::NewProp_bSetKey = { "bSetKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigSequencerEditorLibrary_eventSetLocalControlRigVector2D_Parms), &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2D_Statics::NewProp_bSetKey_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2D_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2D_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2D_Statics::NewProp_ControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2D_Statics::NewProp_Frame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2D_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2D_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2D_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2D_Statics::NewProp_bSetKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Set ControlRig Control's Vector2D value at specific time\n\x09* @param LevelSequence Active Sequence to set value on\n\x09* @param ControlRig The ControlRig\n\x09* @param ControlName Name of the Control, should be a Vector2D control\n\x09* @param Frame Time to set the value\n\x09* @param Value The value to set\n\x09* @param TimeUnit Unit for frame values, either in display rate or tick resolution\n\x09* @param bSetKey If True set a key, if not just set the value\n\x09*/" },
		{ "CPP_Default_bSetKey", "true" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Set ControlRig Control's Vector2D value at specific time\n@param LevelSequence Active Sequence to set value on\n@param ControlRig The ControlRig\n@param ControlName Name of the Control, should be a Vector2D control\n@param Frame Time to set the value\n@param Value The value to set\n@param TimeUnit Unit for frame values, either in display rate or tick resolution\n@param bSetKey If True set a key, if not just set the value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "SetLocalControlRigVector2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2D_Statics::ControlRigSequencerEditorLibrary_eventSetLocalControlRigVector2D_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2Ds_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventSetLocalControlRigVector2Ds_Parms
		{
			ULevelSequence* LevelSequence;
			UControlRig* ControlRig;
			FName ControlName;
			TArray<FFrameNumber> Frames;
			TArray<FVector2D> Values;
			ESequenceTimeUnit TimeUnit;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlRig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Frames;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2Ds_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigVector2Ds_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2Ds_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigVector2Ds_Parms, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2Ds_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigVector2Ds_Parms, ControlName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2Ds_Statics::NewProp_Frames_Inner = { "Frames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2Ds_Statics::NewProp_Frames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2Ds_Statics::NewProp_Frames = { "Frames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigVector2Ds_Parms, Frames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2Ds_Statics::NewProp_Frames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2Ds_Statics::NewProp_Frames_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2Ds_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2Ds_Statics::NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2Ds_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigVector2Ds_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2Ds_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2Ds_Statics::NewProp_Values_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2Ds_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2Ds_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSetLocalControlRigVector2Ds_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2Ds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2Ds_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2Ds_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2Ds_Statics::NewProp_ControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2Ds_Statics::NewProp_Frames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2Ds_Statics::NewProp_Frames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2Ds_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2Ds_Statics::NewProp_Values,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2Ds_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2Ds_Statics::NewProp_TimeUnit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2Ds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Set ControlRig Control's Vector2D values at specific times\n\x09* @param LevelSequence Active Sequence to set value on\n\x09* @param ControlRig The ControlRig\n\x09* @param ControlName Name of the Control, should be a Vector2D control\n\x09* @param Frames Times to set the values\n\x09* @param Values The values to set at those times\n\x09* @param TimeUnit Unit for frame values, either in display rate or tick resolution\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Set ControlRig Control's Vector2D values at specific times\n@param LevelSequence Active Sequence to set value on\n@param ControlRig The ControlRig\n@param ControlName Name of the Control, should be a Vector2D control\n@param Frames Times to set the values\n@param Values The values to set at those times\n@param TimeUnit Unit for frame values, either in display rate or tick resolution" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2Ds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "SetLocalControlRigVector2Ds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2Ds_Statics::ControlRigSequencerEditorLibrary_eventSetLocalControlRigVector2Ds_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2Ds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2Ds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2Ds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2Ds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2Ds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2Ds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ShowAllControls_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventShowAllControls_Parms
		{
			UMovieSceneSection* InSection;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ShowAllControls_Statics::NewProp_InSection_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ShowAllControls_Statics::NewProp_InSection = { "InSection", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventShowAllControls_Parms, InSection), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ShowAllControls_Statics::NewProp_InSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ShowAllControls_Statics::NewProp_InSection_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ShowAllControls_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ShowAllControls_Statics::NewProp_InSection,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ShowAllControls_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/** Shows all of the controls for the given section */" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Shows all of the controls for the given section" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ShowAllControls_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "ShowAllControls", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ShowAllControls_Statics::ControlRigSequencerEditorLibrary_eventShowAllControls_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ShowAllControls_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ShowAllControls_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ShowAllControls_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ShowAllControls_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ShowAllControls()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ShowAllControls_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SnapControlRig_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventSnapControlRig_Parms
		{
			ULevelSequence* LevelSequence;
			FFrameNumber StartFrame;
			FFrameNumber EndFrame;
			FControlRigSnapperSelection ChildrenToSnap;
			FControlRigSnapperSelection ParentToSnap;
			const UControlRigSnapSettings* SnapSettings;
			ESequenceTimeUnit TimeUnit;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartFrame;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildrenToSnap_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChildrenToSnap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentToSnap_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParentToSnap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnapSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SnapSettings;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SnapControlRig_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSnapControlRig_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SnapControlRig_Statics::NewProp_StartFrame = { "StartFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSnapControlRig_Parms, StartFrame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SnapControlRig_Statics::NewProp_EndFrame = { "EndFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSnapControlRig_Parms, EndFrame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SnapControlRig_Statics::NewProp_ChildrenToSnap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SnapControlRig_Statics::NewProp_ChildrenToSnap = { "ChildrenToSnap", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSnapControlRig_Parms, ChildrenToSnap), Z_Construct_UScriptStruct_FControlRigSnapperSelection, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SnapControlRig_Statics::NewProp_ChildrenToSnap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SnapControlRig_Statics::NewProp_ChildrenToSnap_MetaData)) }; // 821260252
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SnapControlRig_Statics::NewProp_ParentToSnap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SnapControlRig_Statics::NewProp_ParentToSnap = { "ParentToSnap", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSnapControlRig_Parms, ParentToSnap), Z_Construct_UScriptStruct_FControlRigSnapperSelection, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SnapControlRig_Statics::NewProp_ParentToSnap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SnapControlRig_Statics::NewProp_ParentToSnap_MetaData)) }; // 821260252
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SnapControlRig_Statics::NewProp_SnapSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SnapControlRig_Statics::NewProp_SnapSettings = { "SnapSettings", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSnapControlRig_Parms, SnapSettings), Z_Construct_UClass_UControlRigSnapSettings_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SnapControlRig_Statics::NewProp_SnapSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SnapControlRig_Statics::NewProp_SnapSettings_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SnapControlRig_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SnapControlRig_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventSnapControlRig_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	void Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SnapControlRig_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ControlRigSequencerEditorLibrary_eventSnapControlRig_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SnapControlRig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigSequencerEditorLibrary_eventSnapControlRig_Parms), &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SnapControlRig_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SnapControlRig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SnapControlRig_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SnapControlRig_Statics::NewProp_StartFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SnapControlRig_Statics::NewProp_EndFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SnapControlRig_Statics::NewProp_ChildrenToSnap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SnapControlRig_Statics::NewProp_ParentToSnap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SnapControlRig_Statics::NewProp_SnapSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SnapControlRig_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SnapControlRig_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SnapControlRig_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SnapControlRig_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Peform a Snap operation to snap the children to the parent. \n\x09* @param LevelSequence Active Sequence to snap\n\x09* @param StartFrame Beginning of the snap\n\x09* @param EndFrame End of the snap\n\x09* @param ChildrenToSnap The children objects that snap and get keys set onto. They need to live in an active Sequencer in the level editor\n\x09* @param ParentToSnap The parent object to snap relative to. If animated, it needs to live in an active Sequencer in the level editor\n\x09* @param SnapSettings Settings to use\n\x09* @param TimeUnit Unit for frame values, either in display rate or tick resolution\n\x09* @param Returns True if successful\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Peform a Snap operation to snap the children to the parent.\n@param LevelSequence Active Sequence to snap\n@param StartFrame Beginning of the snap\n@param EndFrame End of the snap\n@param ChildrenToSnap The children objects that snap and get keys set onto. They need to live in an active Sequencer in the level editor\n@param ParentToSnap The parent object to snap relative to. If animated, it needs to live in an active Sequencer in the level editor\n@param SnapSettings Settings to use\n@param TimeUnit Unit for frame values, either in display rate or tick resolution\n@param Returns True if successful" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SnapControlRig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "SnapControlRig", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SnapControlRig_Statics::ControlRigSequencerEditorLibrary_eventSnapControlRig_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SnapControlRig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SnapControlRig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SnapControlRig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SnapControlRig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SnapControlRig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SnapControlRig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigSequencerEditorLibrary_TweenControlRig_Statics
	{
		struct ControlRigSequencerEditorLibrary_eventTweenControlRig_Parms
		{
			ULevelSequence* LevelSequence;
			UControlRig* ControlRig;
			float TweenValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlRig;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TweenValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_TweenControlRig_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventTweenControlRig_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_TweenControlRig_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventTweenControlRig_Parms, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_TweenControlRig_Statics::NewProp_TweenValue = { "TweenValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigSequencerEditorLibrary_eventTweenControlRig_Parms, TweenValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UControlRigSequencerEditorLibrary_TweenControlRig_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ControlRigSequencerEditorLibrary_eventTweenControlRig_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_TweenControlRig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigSequencerEditorLibrary_eventTweenControlRig_Parms), &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_TweenControlRig_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigSequencerEditorLibrary_TweenControlRig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_TweenControlRig_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_TweenControlRig_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_TweenControlRig_Statics::NewProp_TweenValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigSequencerEditorLibrary_TweenControlRig_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigSequencerEditorLibrary_TweenControlRig_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig" },
		{ "Comment", "/**\n\x09* Peform a Tween operation on the current active sequencer time(must be visible).\n\x09* @param LevelSequence The LevelSequence that's loaded in the editor\n\x09* @param ControlRig The Control Rig to tween.\n\x09* @param TweenValue The tween value to use, range from -1(blend to previous) to 1(blend to next)\n\x09*/" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ToolTip", "Peform a Tween operation on the current active sequencer time(must be visible).\n@param LevelSequence The LevelSequence that's loaded in the editor\n@param ControlRig The Control Rig to tween.\n@param TweenValue The tween value to use, range from -1(blend to previous) to 1(blend to next)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigSequencerEditorLibrary_TweenControlRig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigSequencerEditorLibrary, nullptr, "TweenControlRig", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_TweenControlRig_Statics::ControlRigSequencerEditorLibrary_eventTweenControlRig_Parms), Z_Construct_UFunction_UControlRigSequencerEditorLibrary_TweenControlRig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_TweenControlRig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_TweenControlRig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigSequencerEditorLibrary_TweenControlRig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigSequencerEditorLibrary_TweenControlRig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigSequencerEditorLibrary_TweenControlRig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigSequencerEditorLibrary);
	UClass* Z_Construct_UClass_UControlRigSequencerEditorLibrary_NoRegister()
	{
		return UControlRigSequencerEditorLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UControlRigSequencerEditorLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRigSequencerEditorLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UControlRigSequencerEditorLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_AddConstraint, "AddConstraint" }, // 526676264
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeConstraint, "BakeConstraint" }, // 2525086553
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeControlRigSpace, "BakeControlRigSpace" }, // 3727527140
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BakeToControlRig, "BakeToControlRig" }, // 3870840500
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_BlendValuesOnSelected, "BlendValuesOnSelected" }, // 2976543429
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_CollapseControlRigAnimLayers, "CollapseControlRigAnimLayers" }, // 2282728160
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_Compensate, "Compensate" }, // 1608615921
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_CompensateAll, "CompensateAll" }, // 1947748450
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteConstraintKey, "DeleteConstraintKey" }, // 898025213
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_DeleteControlRigSpace, "DeleteControlRigSpace" }, // 891192752
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigComponentTrack, "FindOrCreateControlRigComponentTrack" }, // 3899313840
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_FindOrCreateControlRigTrack, "FindOrCreateControlRigTrack" }, // 2286313437
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransform, "GetActorWorldTransform" }, // 3882235913
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetActorWorldTransforms, "GetActorWorldTransforms" }, // 1213035294
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintKeys, "GetConstraintKeys" }, // 2841440759
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetConstraintsForHandle, "GetConstraintsForHandle" }, // 2438094383
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigs, "GetControlRigs" }, // 3921455869
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransform, "GetControlRigWorldTransform" }, // 1212387393
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlRigWorldTransforms, "GetControlRigWorldTransforms" }, // 2630791290
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetControlsMask, "GetControlsMask" }, // 3527977131
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetDefaultParentKey, "GetDefaultParentKey" }, // 114218061
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetFKControlRigApplyMode, "GetFKControlRigApplyMode" }, // 1834205286
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBool, "GetLocalControlRigBool" }, // 3222593343
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigBools, "GetLocalControlRigBools" }, // 972414678
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransform, "GetLocalControlRigEulerTransform" }, // 661299409
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigEulerTransforms, "GetLocalControlRigEulerTransforms" }, // 2086203959
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloat, "GetLocalControlRigFloat" }, // 3251579056
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigFloats, "GetLocalControlRigFloats" }, // 1247680733
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInt, "GetLocalControlRigInt" }, // 751733671
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigInts, "GetLocalControlRigInts" }, // 1961346876
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPosition, "GetLocalControlRigPosition" }, // 767169721
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigPositions, "GetLocalControlRigPositions" }, // 1075789877
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotator, "GetLocalControlRigRotator" }, // 4047322654
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigRotators, "GetLocalControlRigRotators" }, // 1603614724
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScale, "GetLocalControlRigScale" }, // 2134686544
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigScales, "GetLocalControlRigScales" }, // 1952235776
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransform, "GetLocalControlRigTransform" }, // 61214619
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScale, "GetLocalControlRigTransformNoScale" }, // 3788272397
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransformNoScales, "GetLocalControlRigTransformNoScales" }, // 928389447
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigTransforms, "GetLocalControlRigTransforms" }, // 3982276438
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2D, "GetLocalControlRigVector2D" }, // 2143715626
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetLocalControlRigVector2Ds, "GetLocalControlRigVector2Ds" }, // 4159479277
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransform, "GetSkeletalMeshComponentWorldTransform" }, // 3901823416
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetSkeletalMeshComponentWorldTransforms, "GetSkeletalMeshComponentWorldTransforms" }, // 1198068259
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetVisibleControlRigs, "GetVisibleControlRigs" }, // 2170731005
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_GetWorldSpaceReferenceKey, "GetWorldSpaceReferenceKey" }, // 1548497738
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_HideAllControls, "HideAllControls" }, // 819699496
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ImportFBXToControlRigTrack, "ImportFBXToControlRigTrack" }, // 1951063645
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_IsFKControlRig, "IsFKControlRig" }, // 123386415
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_LoadAnimSequenceIntoControlRigSection, "LoadAnimSequenceIntoControlRigSection" }, // 3563219775
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveConstraintKey, "MoveConstraintKey" }, // 2697019706
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_MoveControlRigSpace, "MoveControlRigSpace" }, // 814488700
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_RenameControlRigControlChannels, "RenameControlRigControlChannels" }, // 417929567
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetConstraintActiveKey, "SetConstraintActiveKey" }, // 567825157
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigApplyMode, "SetControlRigApplyMode" }, // 1683799250
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigSpace, "SetControlRigSpace" }, // 3179490367
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransform, "SetControlRigWorldTransform" }, // 4046970581
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlRigWorldTransforms, "SetControlRigWorldTransforms" }, // 992701768
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetControlsMask, "SetControlsMask" }, // 333210623
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBool, "SetLocalControlRigBool" }, // 1627960253
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigBools, "SetLocalControlRigBools" }, // 1029971952
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransform, "SetLocalControlRigEulerTransform" }, // 2684336821
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigEulerTransforms, "SetLocalControlRigEulerTransforms" }, // 2227319612
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloat, "SetLocalControlRigFloat" }, // 3878320748
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigFloats, "SetLocalControlRigFloats" }, // 3338736990
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInt, "SetLocalControlRigInt" }, // 1656028572
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigInts, "SetLocalControlRigInts" }, // 1122559673
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPosition, "SetLocalControlRigPosition" }, // 2065903142
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigPositions, "SetLocalControlRigPositions" }, // 1639792521
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotator, "SetLocalControlRigRotator" }, // 378784662
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigRotators, "SetLocalControlRigRotators" }, // 2010380892
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScale, "SetLocalControlRigScale" }, // 2518890697
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigScales, "SetLocalControlRigScales" }, // 3692951919
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransform, "SetLocalControlRigTransform" }, // 2652369901
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScale, "SetLocalControlRigTransformNoScale" }, // 3340392873
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransformNoScales, "SetLocalControlRigTransformNoScales" }, // 3355757317
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigTransforms, "SetLocalControlRigTransforms" }, // 1469184275
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2D, "SetLocalControlRigVector2D" }, // 3146807256
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SetLocalControlRigVector2Ds, "SetLocalControlRigVector2Ds" }, // 3674754295
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_ShowAllControls, "ShowAllControls" }, // 3082491030
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_SnapControlRig, "SnapControlRig" }, // 257976645
		{ &Z_Construct_UFunction_UControlRigSequencerEditorLibrary_TweenControlRig, "TweenControlRig" }, // 3300820854
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigSequencerEditorLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* This is a set of helper functions to access various parts of the Sequencer and Control Rig API via Python and Blueprints.\n*/" },
		{ "IncludePath", "ControlRigSequencerEditorLibrary.h" },
		{ "ModuleRelativePath", "Public/ControlRigSequencerEditorLibrary.h" },
		{ "ScriptName", "ControlRigSequencerLibrary" },
		{ "ToolTip", "This is a set of helper functions to access various parts of the Sequencer and Control Rig API via Python and Blueprints." },
		{ "Transient", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRigSequencerEditorLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigSequencerEditorLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigSequencerEditorLibrary_Statics::ClassParams = {
		&UControlRigSequencerEditorLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UControlRigSequencerEditorLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigSequencerEditorLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlRigSequencerEditorLibrary()
	{
		if (!Z_Registration_Info_UClass_UControlRigSequencerEditorLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigSequencerEditorLibrary.OuterSingleton, Z_Construct_UClass_UControlRigSequencerEditorLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRigSequencerEditorLibrary.OuterSingleton;
	}
	template<> CONTROLRIGEDITOR_API UClass* StaticClass<UControlRigSequencerEditorLibrary>()
	{
		return UControlRigSequencerEditorLibrary::StaticClass();
	}
	UControlRigSequencerEditorLibrary::UControlRigSequencerEditorLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigSequencerEditorLibrary);
	UControlRigSequencerEditorLibrary::~UControlRigSequencerEditorLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigSequencerEditorLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigSequencerEditorLibrary_h_Statics::EnumInfo[] = {
		{ EAnimToolBlendOperation_StaticEnum, TEXT("EAnimToolBlendOperation"), &Z_Registration_Info_UEnum_EAnimToolBlendOperation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1488481249U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigSequencerEditorLibrary_h_Statics::ScriptStructInfo[] = {
		{ FControlRigSequencerBindingProxy::StaticStruct, Z_Construct_UScriptStruct_FControlRigSequencerBindingProxy_Statics::NewStructOps, TEXT("ControlRigSequencerBindingProxy"), &Z_Registration_Info_UScriptStruct_ControlRigSequencerBindingProxy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlRigSequencerBindingProxy), 3788076408U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigSequencerEditorLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UControlRigSequencerEditorLibrary, UControlRigSequencerEditorLibrary::StaticClass, TEXT("UControlRigSequencerEditorLibrary"), &Z_Registration_Info_UClass_UControlRigSequencerEditorLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigSequencerEditorLibrary), 1744782136U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigSequencerEditorLibrary_h_1951642395(TEXT("/Script/ControlRigEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigSequencerEditorLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigSequencerEditorLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigSequencerEditorLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigSequencerEditorLibrary_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigSequencerEditorLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigSequencerEditorLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
