// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_TransitionRuleGetter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_TransitionRuleGetter() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimStateNode_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UK2Node_TransitionRuleGetter();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UK2Node_TransitionRuleGetter_NoRegister();
	ANIMGRAPH_API UEnum* Z_Construct_UEnum_AnimGraph_ETransitionGetter();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETransitionGetter;
	static UEnum* ETransitionGetter_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETransitionGetter.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETransitionGetter.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraph_ETransitionGetter, (UObject*)Z_Construct_UPackage__Script_AnimGraph(), TEXT("ETransitionGetter"));
		}
		return Z_Registration_Info_UEnum_ETransitionGetter.OuterSingleton;
	}
	template<> ANIMGRAPH_API UEnum* StaticEnum<ETransitionGetter::Type>()
	{
		return ETransitionGetter_StaticEnum();
	}
	struct Z_Construct_UEnum_AnimGraph_ETransitionGetter_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnimGraph_ETransitionGetter_Statics::Enumerators[] = {
		{ "ETransitionGetter::AnimationAsset_GetCurrentTime", (int64)ETransitionGetter::AnimationAsset_GetCurrentTime },
		{ "ETransitionGetter::AnimationAsset_GetLength", (int64)ETransitionGetter::AnimationAsset_GetLength },
		{ "ETransitionGetter::AnimationAsset_GetCurrentTimeFraction", (int64)ETransitionGetter::AnimationAsset_GetCurrentTimeFraction },
		{ "ETransitionGetter::AnimationAsset_GetTimeFromEnd", (int64)ETransitionGetter::AnimationAsset_GetTimeFromEnd },
		{ "ETransitionGetter::AnimationAsset_GetTimeFromEndFraction", (int64)ETransitionGetter::AnimationAsset_GetTimeFromEndFraction },
		{ "ETransitionGetter::CurrentState_ElapsedTime", (int64)ETransitionGetter::CurrentState_ElapsedTime },
		{ "ETransitionGetter::CurrentState_GetBlendWeight", (int64)ETransitionGetter::CurrentState_GetBlendWeight },
		{ "ETransitionGetter::CurrentTransitionDuration", (int64)ETransitionGetter::CurrentTransitionDuration },
		{ "ETransitionGetter::ArbitraryState_GetBlendWeight", (int64)ETransitionGetter::ArbitraryState_GetBlendWeight },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnimGraph_ETransitionGetter_Statics::Enum_MetaDataParams[] = {
		{ "AnimationAsset_GetCurrentTime.Name", "ETransitionGetter::AnimationAsset_GetCurrentTime" },
		{ "AnimationAsset_GetCurrentTimeFraction.Name", "ETransitionGetter::AnimationAsset_GetCurrentTimeFraction" },
		{ "AnimationAsset_GetLength.Name", "ETransitionGetter::AnimationAsset_GetLength" },
		{ "AnimationAsset_GetTimeFromEnd.Name", "ETransitionGetter::AnimationAsset_GetTimeFromEnd" },
		{ "AnimationAsset_GetTimeFromEndFraction.Name", "ETransitionGetter::AnimationAsset_GetTimeFromEndFraction" },
		{ "ArbitraryState_GetBlendWeight.Name", "ETransitionGetter::ArbitraryState_GetBlendWeight" },
		{ "CurrentState_ElapsedTime.Name", "ETransitionGetter::CurrentState_ElapsedTime" },
		{ "CurrentState_GetBlendWeight.Name", "ETransitionGetter::CurrentState_GetBlendWeight" },
		{ "CurrentTransitionDuration.Name", "ETransitionGetter::CurrentTransitionDuration" },
		{ "ModuleRelativePath", "Public/K2Node_TransitionRuleGetter.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraph_ETransitionGetter_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnimGraph,
		nullptr,
		"ETransitionGetter",
		"ETransitionGetter::Type",
		Z_Construct_UEnum_AnimGraph_ETransitionGetter_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraph_ETransitionGetter_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AnimGraph_ETransitionGetter_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraph_ETransitionGetter_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnimGraph_ETransitionGetter()
	{
		if (!Z_Registration_Info_UEnum_ETransitionGetter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETransitionGetter.InnerSingleton, Z_Construct_UEnum_AnimGraph_ETransitionGetter_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETransitionGetter.InnerSingleton;
	}
	void UK2Node_TransitionRuleGetter::StaticRegisterNativesUK2Node_TransitionRuleGetter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_TransitionRuleGetter);
	UClass* Z_Construct_UClass_UK2Node_TransitionRuleGetter_NoRegister()
	{
		return UK2Node_TransitionRuleGetter::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GetterType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_GetterType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssociatedAnimAssetPlayerNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssociatedAnimAssetPlayerNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssociatedStateNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssociatedStateNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_TransitionRuleGetter.h" },
		{ "ModuleRelativePath", "Public/K2Node_TransitionRuleGetter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics::NewProp_GetterType_MetaData[] = {
		{ "ModuleRelativePath", "Public/K2Node_TransitionRuleGetter.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics::NewProp_GetterType = { "GetterType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_TransitionRuleGetter, GetterType), Z_Construct_UEnum_AnimGraph_ETransitionGetter, METADATA_PARAMS(Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics::NewProp_GetterType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics::NewProp_GetterType_MetaData)) }; // 2103660875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics::NewProp_AssociatedAnimAssetPlayerNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/K2Node_TransitionRuleGetter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics::NewProp_AssociatedAnimAssetPlayerNode = { "AssociatedAnimAssetPlayerNode", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_TransitionRuleGetter, AssociatedAnimAssetPlayerNode), Z_Construct_UClass_UAnimGraphNode_Base_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics::NewProp_AssociatedAnimAssetPlayerNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics::NewProp_AssociatedAnimAssetPlayerNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics::NewProp_AssociatedStateNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/K2Node_TransitionRuleGetter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics::NewProp_AssociatedStateNode = { "AssociatedStateNode", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_TransitionRuleGetter, AssociatedStateNode), Z_Construct_UClass_UAnimStateNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics::NewProp_AssociatedStateNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics::NewProp_AssociatedStateNode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics::NewProp_GetterType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics::NewProp_AssociatedAnimAssetPlayerNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics::NewProp_AssociatedStateNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_TransitionRuleGetter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics::ClassParams = {
		&UK2Node_TransitionRuleGetter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_TransitionRuleGetter()
	{
		if (!Z_Registration_Info_UClass_UK2Node_TransitionRuleGetter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_TransitionRuleGetter.OuterSingleton, Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_TransitionRuleGetter.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UK2Node_TransitionRuleGetter>()
	{
		return UK2Node_TransitionRuleGetter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_TransitionRuleGetter);
	UK2Node_TransitionRuleGetter::~UK2Node_TransitionRuleGetter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_K2Node_TransitionRuleGetter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_K2Node_TransitionRuleGetter_h_Statics::EnumInfo[] = {
		{ ETransitionGetter_StaticEnum, TEXT("ETransitionGetter"), &Z_Registration_Info_UEnum_ETransitionGetter, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2103660875U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_K2Node_TransitionRuleGetter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_TransitionRuleGetter, UK2Node_TransitionRuleGetter::StaticClass, TEXT("UK2Node_TransitionRuleGetter"), &Z_Registration_Info_UClass_UK2Node_TransitionRuleGetter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_TransitionRuleGetter), 165213288U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_K2Node_TransitionRuleGetter_h_3400221350(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_K2Node_TransitionRuleGetter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_K2Node_TransitionRuleGetter_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_K2Node_TransitionRuleGetter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_K2Node_TransitionRuleGetter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
