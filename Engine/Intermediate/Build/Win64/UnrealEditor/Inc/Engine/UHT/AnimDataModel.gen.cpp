// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimData/AnimDataModel.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimData/IAnimationDataModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimDataModel() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationDataModel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimDataModel();
	ENGINE_API UClass* Z_Construct_UClass_UAnimDataModel_NoRegister();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_AnimDataModelModifiedDynamicEvent__DelegateSignature();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimatedBoneAttribute();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationCurveData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneAnimationTrack();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAnimDataModel::StaticRegisterNativesUAnimDataModel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimDataModel);
	UClass* Z_Construct_UClass_UAnimDataModel_NoRegister()
	{
		return UAnimDataModel::StaticClass();
	}
	struct Z_Construct_UClass_UAnimDataModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BracketCounter_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BracketCounter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifiedEventDynamic_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ModifiedEventDynamic;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneAnimationTracks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneAnimationTracks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneAnimationTracks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrameRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfFrames_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfFrames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfKeys_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfKeys;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurveData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimatedBoneAttributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimatedBoneAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimatedBoneAttributes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPopulated_MetaData[];
#endif
		static void NewProp_bPopulated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPopulated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimDataModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimDataModel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The Model represents the source data for animations. It contains both bone animation data as well as animated curves.\n * They are currently only a sub-object of a AnimSequenceBase instance. The instance derives all runtime data from the source data. \n */" },
		{ "DebugTreeLeaf", "" },
		{ "IncludePath", "Animation/AnimData/AnimDataModel.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
		{ "ToolTip", "The Model represents the source data for animations. It contains both bone animation data as well as animated curves.\nThey are currently only a sub-object of a AnimSequenceBase instance. The instance derives all runtime data from the source data." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimDataModel_Statics::NewProp_BracketCounter_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimDataModel_Statics::NewProp_BracketCounter = { "BracketCounter", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimDataModel, BracketCounter), METADATA_PARAMS(Z_Construct_UClass_UAnimDataModel_Statics::NewProp_BracketCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimDataModel_Statics::NewProp_BracketCounter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimDataModel_Statics::NewProp_ModifiedEventDynamic_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AnimationDataModel" },
		{ "Comment", "/** Dynamic delegate event allows scripting to register to any broadcasted notify. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
		{ "ScriptName", "ModifiedEvent" },
		{ "ToolTip", "Dynamic delegate event allows scripting to register to any broadcasted notify." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAnimDataModel_Statics::NewProp_ModifiedEventDynamic = { "ModifiedEventDynamic", nullptr, (EPropertyFlags)0x0040000010082000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimDataModel, ModifiedEventDynamic), Z_Construct_UDelegateFunction_Engine_AnimDataModelModifiedDynamicEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAnimDataModel_Statics::NewProp_ModifiedEventDynamic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimDataModel_Statics::NewProp_ModifiedEventDynamic_MetaData)) }; // 3956893796
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimDataModel_Statics::NewProp_BoneAnimationTracks_Inner = { "BoneAnimationTracks", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBoneAnimationTrack, METADATA_PARAMS(nullptr, 0) }; // 3584978593
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimDataModel_Statics::NewProp_BoneAnimationTracks_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animation Data Model" },
		{ "Comment", "/** All individual bone animation tracks */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
		{ "ToolTip", "All individual bone animation tracks" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimDataModel_Statics::NewProp_BoneAnimationTracks = { "BoneAnimationTracks", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimDataModel, BoneAnimationTracks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimDataModel_Statics::NewProp_BoneAnimationTracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimDataModel_Statics::NewProp_BoneAnimationTracks_MetaData)) }; // 3584978593
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimDataModel_Statics::NewProp_PlayLength_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animation Data Model" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimDataModel_Statics::NewProp_PlayLength = { "PlayLength", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimDataModel, PlayLength), METADATA_PARAMS(Z_Construct_UClass_UAnimDataModel_Statics::NewProp_PlayLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimDataModel_Statics::NewProp_PlayLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimDataModel_Statics::NewProp_FrameRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animation Data Model" },
		{ "Comment", "/** Rate at which the animated data is sampled */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
		{ "ToolTip", "Rate at which the animated data is sampled" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimDataModel_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimDataModel, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UClass_UAnimDataModel_Statics::NewProp_FrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimDataModel_Statics::NewProp_FrameRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimDataModel_Statics::NewProp_NumberOfFrames_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animation Data Model" },
		{ "Comment", "/** Total number of sampled animated frames */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
		{ "ToolTip", "Total number of sampled animated frames" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimDataModel_Statics::NewProp_NumberOfFrames = { "NumberOfFrames", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimDataModel, NumberOfFrames), METADATA_PARAMS(Z_Construct_UClass_UAnimDataModel_Statics::NewProp_NumberOfFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimDataModel_Statics::NewProp_NumberOfFrames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimDataModel_Statics::NewProp_NumberOfKeys_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animation Data Model" },
		{ "Comment", "/** Total number of sampled animated keys */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
		{ "ToolTip", "Total number of sampled animated keys" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimDataModel_Statics::NewProp_NumberOfKeys = { "NumberOfKeys", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimDataModel, NumberOfKeys), METADATA_PARAMS(Z_Construct_UClass_UAnimDataModel_Statics::NewProp_NumberOfKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimDataModel_Statics::NewProp_NumberOfKeys_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimDataModel_Statics::NewProp_CurveData_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animation Data Model" },
		{ "Comment", "/** Container with all animated curve data */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
		{ "ToolTip", "Container with all animated curve data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimDataModel_Statics::NewProp_CurveData = { "CurveData", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimDataModel, CurveData), Z_Construct_UScriptStruct_FAnimationCurveData, METADATA_PARAMS(Z_Construct_UClass_UAnimDataModel_Statics::NewProp_CurveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimDataModel_Statics::NewProp_CurveData_MetaData)) }; // 381043962
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimDataModel_Statics::NewProp_AnimatedBoneAttributes_Inner = { "AnimatedBoneAttributes", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAnimatedBoneAttribute, METADATA_PARAMS(nullptr, 0) }; // 3618278899
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimDataModel_Statics::NewProp_AnimatedBoneAttributes_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animation Data Model" },
		{ "Comment", "/** Container with all animated (bone) attribute data */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
		{ "ToolTip", "Container with all animated (bone) attribute data" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimDataModel_Statics::NewProp_AnimatedBoneAttributes = { "AnimatedBoneAttributes", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimDataModel, AnimatedBoneAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimDataModel_Statics::NewProp_AnimatedBoneAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimDataModel_Statics::NewProp_AnimatedBoneAttributes_MetaData)) }; // 3618278899
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimDataModel_Statics::NewProp_bPopulated_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
	};
#endif
	void Z_Construct_UClass_UAnimDataModel_Statics::NewProp_bPopulated_SetBit(void* Obj)
	{
		((UAnimDataModel*)Obj)->bPopulated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimDataModel_Statics::NewProp_bPopulated = { "bPopulated", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimDataModel), &Z_Construct_UClass_UAnimDataModel_Statics::NewProp_bPopulated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimDataModel_Statics::NewProp_bPopulated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimDataModel_Statics::NewProp_bPopulated_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimDataModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimDataModel_Statics::NewProp_BracketCounter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimDataModel_Statics::NewProp_ModifiedEventDynamic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimDataModel_Statics::NewProp_BoneAnimationTracks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimDataModel_Statics::NewProp_BoneAnimationTracks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimDataModel_Statics::NewProp_PlayLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimDataModel_Statics::NewProp_FrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimDataModel_Statics::NewProp_NumberOfFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimDataModel_Statics::NewProp_NumberOfKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimDataModel_Statics::NewProp_CurveData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimDataModel_Statics::NewProp_AnimatedBoneAttributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimDataModel_Statics::NewProp_AnimatedBoneAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimDataModel_Statics::NewProp_bPopulated,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAnimDataModel_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAnimationDataModel_NoRegister, (int32)VTABLE_OFFSET(UAnimDataModel, IAnimationDataModel), false },  // 870876912
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimDataModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimDataModel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimDataModel_Statics::ClassParams = {
		&UAnimDataModel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimDataModel_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimDataModel_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimDataModel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimDataModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimDataModel()
	{
		if (!Z_Registration_Info_UClass_UAnimDataModel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimDataModel.OuterSingleton, Z_Construct_UClass_UAnimDataModel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimDataModel.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAnimDataModel>()
	{
		return UAnimDataModel::StaticClass();
	}
	UAnimDataModel::UAnimDataModel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimDataModel);
	UAnimDataModel::~UAnimDataModel() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataModel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataModel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimDataModel, UAnimDataModel::StaticClass, TEXT("UAnimDataModel"), &Z_Registration_Info_UClass_UAnimDataModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimDataModel), 2976216387U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataModel_h_805196425(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataModel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
