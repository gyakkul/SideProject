// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimSequencerDataModel.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimData/CurveIdentifier.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimData/IAnimationDataModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimSequencerDataModel() {}
// Cross Module References
	ANIMATIONDATA_API UClass* Z_Construct_UClass_UAnimationSequencerDataModel();
	ANIMATIONDATA_API UClass* Z_Construct_UClass_UAnimationSequencerDataModel_NoRegister();
	ANIMATIONDATA_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationCurveMetaData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationDataModel_NoRegister();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_AnimDataModelModifiedDynamicEvent__DelegateSignature();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimatedBoneAttribute();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationCurveData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationCurveIdentifier();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScene_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence();
	UPackage* Z_Construct_UPackage__Script_AnimationData();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimationCurveMetaData;
class UScriptStruct* FAnimationCurveMetaData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationCurveMetaData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimationCurveMetaData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationCurveMetaData, (UObject*)Z_Construct_UPackage__Script_AnimationData(), TEXT("AnimationCurveMetaData"));
	}
	return Z_Registration_Info_UScriptStruct_AnimationCurveMetaData.OuterSingleton;
}
template<> ANIMATIONDATA_API UScriptStruct* StaticStruct<FAnimationCurveMetaData>()
{
	return FAnimationCurveMetaData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimationCurveMetaData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Flags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationCurveMetaData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimSequencerDataModel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimationCurveMetaData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationCurveMetaData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationCurveMetaData_Statics::NewProp_Flags_MetaData[] = {
		{ "ModuleRelativePath", "Private/AnimSequencerDataModel.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimationCurveMetaData_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationCurveMetaData, Flags), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationCurveMetaData_Statics::NewProp_Flags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationCurveMetaData_Statics::NewProp_Flags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationCurveMetaData_Statics::NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Private/AnimSequencerDataModel.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimationCurveMetaData_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationCurveMetaData, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationCurveMetaData_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationCurveMetaData_Statics::NewProp_Color_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimationCurveMetaData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationCurveMetaData_Statics::NewProp_Flags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationCurveMetaData_Statics::NewProp_Color,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationCurveMetaData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationData,
		nullptr,
		&NewStructOps,
		"AnimationCurveMetaData",
		sizeof(FAnimationCurveMetaData),
		alignof(FAnimationCurveMetaData),
		Z_Construct_UScriptStruct_FAnimationCurveMetaData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationCurveMetaData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationCurveMetaData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationCurveMetaData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimationCurveMetaData()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimationCurveMetaData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimationCurveMetaData.InnerSingleton, Z_Construct_UScriptStruct_FAnimationCurveMetaData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimationCurveMetaData.InnerSingleton;
	}
	void UAnimationSequencerDataModel::StaticRegisterNativesUAnimationSequencerDataModel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationSequencerDataModel);
	UClass* Z_Construct_UClass_UAnimationSequencerDataModel_NoRegister()
	{
		return UAnimationSequencerDataModel::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationSequencerDataModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifiedEventDynamic_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ModifiedEventDynamic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LegacyCurveData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LegacyCurveData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimatedBoneAttributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimatedBoneAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimatedBoneAttributes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovieScene_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MovieScene;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurveIdentifierToMetaData_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurveIdentifierToMetaData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveIdentifierToMetaData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CurveIdentifierToMetaData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPopulated_MetaData[];
#endif
		static void NewProp_bPopulated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPopulated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedRawDataGUID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedRawDataGUID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationSequencerDataModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSequence,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSequencerDataModel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimSequencerDataModel.h" },
		{ "ModuleRelativePath", "Private/AnimSequencerDataModel.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSequencerDataModel_Statics::NewProp_ModifiedEventDynamic_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AnimationDataModel" },
		{ "Comment", "/** Dynamic delegate event allows scripting to register to any broadcast-ed notify. */" },
		{ "ModuleRelativePath", "Private/AnimSequencerDataModel.h" },
		{ "ScriptName", "ModifiedEvent" },
		{ "ToolTip", "Dynamic delegate event allows scripting to register to any broadcast-ed notify." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAnimationSequencerDataModel_Statics::NewProp_ModifiedEventDynamic = { "ModifiedEventDynamic", nullptr, (EPropertyFlags)0x0040000010082000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationSequencerDataModel, ModifiedEventDynamic), Z_Construct_UDelegateFunction_Engine_AnimDataModelModifiedDynamicEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAnimationSequencerDataModel_Statics::NewProp_ModifiedEventDynamic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSequencerDataModel_Statics::NewProp_ModifiedEventDynamic_MetaData)) }; // 3956893796
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSequencerDataModel_Statics::NewProp_LegacyCurveData_MetaData[] = {
		{ "Category", "AnimSequencer" },
		{ "ModuleRelativePath", "Private/AnimSequencerDataModel.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimationSequencerDataModel_Statics::NewProp_LegacyCurveData = { "LegacyCurveData", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationSequencerDataModel, LegacyCurveData), Z_Construct_UScriptStruct_FAnimationCurveData, METADATA_PARAMS(Z_Construct_UClass_UAnimationSequencerDataModel_Statics::NewProp_LegacyCurveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSequencerDataModel_Statics::NewProp_LegacyCurveData_MetaData)) }; // 381043962
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimationSequencerDataModel_Statics::NewProp_AnimatedBoneAttributes_Inner = { "AnimatedBoneAttributes", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAnimatedBoneAttribute, METADATA_PARAMS(nullptr, 0) }; // 3618278899
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSequencerDataModel_Statics::NewProp_AnimatedBoneAttributes_MetaData[] = {
		{ "Category", "AnimSequencer" },
		{ "ModuleRelativePath", "Private/AnimSequencerDataModel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimationSequencerDataModel_Statics::NewProp_AnimatedBoneAttributes = { "AnimatedBoneAttributes", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationSequencerDataModel, AnimatedBoneAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimationSequencerDataModel_Statics::NewProp_AnimatedBoneAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSequencerDataModel_Statics::NewProp_AnimatedBoneAttributes_MetaData)) }; // 3618278899
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSequencerDataModel_Statics::NewProp_MovieScene_MetaData[] = {
		{ "Category", "AnimSequencer" },
		{ "Comment", "// Movie scene instance containing FK Control rig and section representing the animation data\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/AnimSequencerDataModel.h" },
		{ "ToolTip", "Movie scene instance containing FK Control rig and section representing the animation data" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimationSequencerDataModel_Statics::NewProp_MovieScene = { "MovieScene", nullptr, (EPropertyFlags)0x00440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationSequencerDataModel, MovieScene), Z_Construct_UClass_UMovieScene_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimationSequencerDataModel_Statics::NewProp_MovieScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSequencerDataModel_Statics::NewProp_MovieScene_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimationSequencerDataModel_Statics::NewProp_CurveIdentifierToMetaData_ValueProp = { "CurveIdentifierToMetaData", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FAnimationCurveMetaData, METADATA_PARAMS(nullptr, 0) }; // 3829900340
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimationSequencerDataModel_Statics::NewProp_CurveIdentifierToMetaData_Key_KeyProp = { "CurveIdentifierToMetaData_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAnimationCurveIdentifier, METADATA_PARAMS(nullptr, 0) }; // 385993389
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSequencerDataModel_Statics::NewProp_CurveIdentifierToMetaData_MetaData[] = {
		{ "Category", "AnimSequencer" },
		{ "Comment", "// Per-curve information holding flags/color, due to be deprecated in the future\n" },
		{ "ModuleRelativePath", "Private/AnimSequencerDataModel.h" },
		{ "ToolTip", "Per-curve information holding flags/color, due to be deprecated in the future" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAnimationSequencerDataModel_Statics::NewProp_CurveIdentifierToMetaData = { "CurveIdentifierToMetaData", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationSequencerDataModel, CurveIdentifierToMetaData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimationSequencerDataModel_Statics::NewProp_CurveIdentifierToMetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSequencerDataModel_Statics::NewProp_CurveIdentifierToMetaData_MetaData)) }; // 385993389 3829900340
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSequencerDataModel_Statics::NewProp_bPopulated_MetaData[] = {
		{ "Category", "AnimSequencer" },
		{ "ModuleRelativePath", "Private/AnimSequencerDataModel.h" },
	};
#endif
	void Z_Construct_UClass_UAnimationSequencerDataModel_Statics::NewProp_bPopulated_SetBit(void* Obj)
	{
		((UAnimationSequencerDataModel*)Obj)->bPopulated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimationSequencerDataModel_Statics::NewProp_bPopulated = { "bPopulated", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimationSequencerDataModel), &Z_Construct_UClass_UAnimationSequencerDataModel_Statics::NewProp_bPopulated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimationSequencerDataModel_Statics::NewProp_bPopulated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSequencerDataModel_Statics::NewProp_bPopulated_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSequencerDataModel_Statics::NewProp_CachedRawDataGUID_MetaData[] = {
		{ "Category", "AnimSequencer" },
		{ "Comment", "// Raw data GUID taken from UAnimSequence when initially populating - this allows for retaining compressed data state initially\n" },
		{ "ModuleRelativePath", "Private/AnimSequencerDataModel.h" },
		{ "ToolTip", "Raw data GUID taken from UAnimSequence when initially populating - this allows for retaining compressed data state initially" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimationSequencerDataModel_Statics::NewProp_CachedRawDataGUID = { "CachedRawDataGUID", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationSequencerDataModel, CachedRawDataGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UAnimationSequencerDataModel_Statics::NewProp_CachedRawDataGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSequencerDataModel_Statics::NewProp_CachedRawDataGUID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationSequencerDataModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSequencerDataModel_Statics::NewProp_ModifiedEventDynamic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSequencerDataModel_Statics::NewProp_LegacyCurveData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSequencerDataModel_Statics::NewProp_AnimatedBoneAttributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSequencerDataModel_Statics::NewProp_AnimatedBoneAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSequencerDataModel_Statics::NewProp_MovieScene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSequencerDataModel_Statics::NewProp_CurveIdentifierToMetaData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSequencerDataModel_Statics::NewProp_CurveIdentifierToMetaData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSequencerDataModel_Statics::NewProp_CurveIdentifierToMetaData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSequencerDataModel_Statics::NewProp_bPopulated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSequencerDataModel_Statics::NewProp_CachedRawDataGUID,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAnimationSequencerDataModel_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAnimationDataModel_NoRegister, (int32)VTABLE_OFFSET(UAnimationSequencerDataModel, IAnimationDataModel), false },  // 870876912
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationSequencerDataModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationSequencerDataModel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationSequencerDataModel_Statics::ClassParams = {
		&UAnimationSequencerDataModel::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimationSequencerDataModel_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSequencerDataModel_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimationSequencerDataModel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSequencerDataModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationSequencerDataModel()
	{
		if (!Z_Registration_Info_UClass_UAnimationSequencerDataModel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationSequencerDataModel.OuterSingleton, Z_Construct_UClass_UAnimationSequencerDataModel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimationSequencerDataModel.OuterSingleton;
	}
	template<> ANIMATIONDATA_API UClass* StaticClass<UAnimationSequencerDataModel>()
	{
		return UAnimationSequencerDataModel::StaticClass();
	}
	UAnimationSequencerDataModel::UAnimationSequencerDataModel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationSequencerDataModel);
	UAnimationSequencerDataModel::~UAnimationSequencerDataModel() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationData_Source_AnimationData_Private_AnimSequencerDataModel_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationData_Source_AnimationData_Private_AnimSequencerDataModel_h_Statics::ScriptStructInfo[] = {
		{ FAnimationCurveMetaData::StaticStruct, Z_Construct_UScriptStruct_FAnimationCurveMetaData_Statics::NewStructOps, TEXT("AnimationCurveMetaData"), &Z_Registration_Info_UScriptStruct_AnimationCurveMetaData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimationCurveMetaData), 3829900340U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationData_Source_AnimationData_Private_AnimSequencerDataModel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationSequencerDataModel, UAnimationSequencerDataModel::StaticClass, TEXT("UAnimationSequencerDataModel"), &Z_Registration_Info_UClass_UAnimationSequencerDataModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationSequencerDataModel), 1917141397U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationData_Source_AnimationData_Private_AnimSequencerDataModel_h_306366315(TEXT("/Script/AnimationData"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationData_Source_AnimationData_Private_AnimSequencerDataModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationData_Source_AnimationData_Private_AnimSequencerDataModel_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationData_Source_AnimationData_Private_AnimSequencerDataModel_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationData_Source_AnimationData_Private_AnimSequencerDataModel_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
