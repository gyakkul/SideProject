// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "../../Source/Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "../../Source/Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimSequenceBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationDataController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationDataModel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimDataModel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETypeAdvanceAnim();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyEvent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyTrack();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawCurveTracks();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETypeAdvanceAnim;
	static UEnum* ETypeAdvanceAnim_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETypeAdvanceAnim.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETypeAdvanceAnim.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETypeAdvanceAnim, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETypeAdvanceAnim"));
		}
		return Z_Registration_Info_UEnum_ETypeAdvanceAnim.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETypeAdvanceAnim>()
	{
		return ETypeAdvanceAnim_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ETypeAdvanceAnim_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ETypeAdvanceAnim_Statics::Enumerators[] = {
		{ "ETAA_Default", (int64)ETAA_Default },
		{ "ETAA_Finished", (int64)ETAA_Finished },
		{ "ETAA_Looped", (int64)ETAA_Looped },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ETypeAdvanceAnim_Statics::Enum_MetaDataParams[] = {
		{ "ETAA_Default.Name", "ETAA_Default" },
		{ "ETAA_Finished.Name", "ETAA_Finished" },
		{ "ETAA_Looped.Name", "ETAA_Looped" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequenceBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETypeAdvanceAnim_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ETypeAdvanceAnim",
		"ETypeAdvanceAnim",
		Z_Construct_UEnum_Engine_ETypeAdvanceAnim_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETypeAdvanceAnim_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ETypeAdvanceAnim_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETypeAdvanceAnim_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ETypeAdvanceAnim()
	{
		if (!Z_Registration_Info_UEnum_ETypeAdvanceAnim.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETypeAdvanceAnim.InnerSingleton, Z_Construct_UEnum_Engine_ETypeAdvanceAnim_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETypeAdvanceAnim.InnerSingleton;
	}
	void UAnimSequenceBase::StaticRegisterNativesUAnimSequenceBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimSequenceBase);
	UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister()
	{
		return UAnimSequenceBase::StaticClass();
	}
	struct Z_Construct_UClass_UAnimSequenceBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Notifies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Notifies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Notifies;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SequenceLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RawCurveData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RawCurveData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RateScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RateScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[];
#endif
		static void NewProp_bLoop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimNotifyTracks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimNotifyTracks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimNotifyTracks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataModel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DataModel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataModelInterface_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_DataModelInterface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_Controller;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimSequenceBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimationAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequenceBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Animation/AnimSequenceBase.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequenceBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_Notifies_Inner = { "Notifies", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAnimNotifyEvent, METADATA_PARAMS(nullptr, 0) }; // 3418516681
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_Notifies_MetaData[] = {
		{ "Comment", "/** Animation notifies, sorted by time (earliest notification first). */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequenceBase.h" },
		{ "ToolTip", "Animation notifies, sorted by time (earliest notification first)." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_Notifies = { "Notifies", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimSequenceBase, Notifies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_Notifies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_Notifies_MetaData)) }; // 3418516681
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_SequenceLength_MetaData[] = {
		{ "Category", "Length" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequenceBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_SequenceLength = { "SequenceLength", nullptr, (EPropertyFlags)0x0020090000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimSequenceBase, SequenceLength), METADATA_PARAMS(Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_SequenceLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_SequenceLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_RawCurveData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimSequenceBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_RawCurveData = { "RawCurveData", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimSequenceBase, RawCurveData), Z_Construct_UScriptStruct_FRawCurveTracks, METADATA_PARAMS(Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_RawCurveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_RawCurveData_MetaData)) }; // 2460749437
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_RateScale_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Number for tweaking playback rate of this animation globally. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequenceBase.h" },
		{ "ToolTip", "Number for tweaking playback rate of this animation globally." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_RateScale = { "RateScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimSequenceBase, RateScale), METADATA_PARAMS(Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_RateScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_RateScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_bLoop_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** \n\x09 * The default looping behavior of this animation.\n\x09 * Asset players can override this\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequenceBase.h" },
		{ "ToolTip", "The default looping behavior of this animation.\nAsset players can override this" },
	};
#endif
	void Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_bLoop_SetBit(void* Obj)
	{
		((UAnimSequenceBase*)Obj)->bLoop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimSequenceBase), &Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_bLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_bLoop_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_AnimNotifyTracks_Inner = { "AnimNotifyTracks", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAnimNotifyTrack, METADATA_PARAMS(nullptr, 0) }; // 2379014921
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_AnimNotifyTracks_MetaData[] = {
		{ "Comment", "// if you change Notifies array, this will need to be rebuilt\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequenceBase.h" },
		{ "ToolTip", "if you change Notifies array, this will need to be rebuilt" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_AnimNotifyTracks = { "AnimNotifyTracks", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimSequenceBase, AnimNotifyTracks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_AnimNotifyTracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_AnimNotifyTracks_MetaData)) }; // 2379014921
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_DataModel_MetaData[] = {
		{ "Category", "Animation Model" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequenceBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_DataModel = { "DataModel", nullptr, (EPropertyFlags)0x0024080800020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimSequenceBase, DataModel), Z_Construct_UClass_UAnimDataModel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_DataModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_DataModel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_DataModelInterface_MetaData[] = {
		{ "Category", "Animation Model" },
		{ "Comment", "/** IAnimationDataModel instance containing (source) animation data */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequenceBase.h" },
		{ "ToolTip", "IAnimationDataModel instance containing (source) animation data" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_DataModelInterface = { "DataModelInterface", nullptr, (EPropertyFlags)0x0024080800020015, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimSequenceBase, DataModelInterface), Z_Construct_UClass_UAnimationDataModel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_DataModelInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_DataModelInterface_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_Controller_MetaData[] = {
		{ "Category", "Animation Model" },
		{ "Comment", "/** UAnimDataController instance set to operate on DataModel */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequenceBase.h" },
		{ "ToolTip", "UAnimDataController instance set to operate on DataModel" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0024080800222015, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimSequenceBase, Controller), Z_Construct_UClass_UAnimationDataController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_Controller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_Controller_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimSequenceBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_Notifies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_Notifies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_SequenceLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_RawCurveData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_RateScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_bLoop,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_AnimNotifyTracks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_AnimNotifyTracks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_DataModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_DataModelInterface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequenceBase_Statics::NewProp_Controller,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimSequenceBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimSequenceBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimSequenceBase_Statics::ClassParams = {
		&UAnimSequenceBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimSequenceBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequenceBase_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimSequenceBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequenceBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimSequenceBase()
	{
		if (!Z_Registration_Info_UClass_UAnimSequenceBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimSequenceBase.OuterSingleton, Z_Construct_UClass_UAnimSequenceBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimSequenceBase.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAnimSequenceBase>()
	{
		return UAnimSequenceBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimSequenceBase);
	UAnimSequenceBase::~UAnimSequenceBase() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimSequenceBase)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_Statics::EnumInfo[] = {
		{ ETypeAdvanceAnim_StaticEnum, TEXT("ETypeAdvanceAnim"), &Z_Registration_Info_UEnum_ETypeAdvanceAnim, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2037505140U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimSequenceBase, UAnimSequenceBase::StaticClass, TEXT("UAnimSequenceBase"), &Z_Registration_Info_UClass_UAnimSequenceBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimSequenceBase), 1125514670U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_4136872791(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
