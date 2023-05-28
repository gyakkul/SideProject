// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationGraphSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationGraphSchema() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimationGraphSchema();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimationGraphSchema_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UEdGraphSchema_K2();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimationGraphSchema::StaticRegisterNativesUAnimationGraphSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationGraphSchema);
	UClass* Z_Construct_UClass_UAnimationGraphSchema_NoRegister()
	{
		return UAnimationGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PN_SequenceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PN_SequenceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NAME_NeverAsPin_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NAME_NeverAsPin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NAME_PinHiddenByDefault_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NAME_PinHiddenByDefault;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NAME_PinShownByDefault_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NAME_PinShownByDefault;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NAME_AlwaysAsPin_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NAME_AlwaysAsPin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NAME_CustomizeProperty_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NAME_CustomizeProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NAME_OnEvaluate_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NAME_OnEvaluate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultEvaluationHandlerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DefaultEvaluationHandlerName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema_K2,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimationGraphSchema.h" },
		{ "ModuleRelativePath", "Public/AnimationGraphSchema.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationGraphSchema_Statics::NewProp_PN_SequenceName_MetaData[] = {
		{ "Comment", "// Common PinNames\n" },
		{ "ModuleRelativePath", "Public/AnimationGraphSchema.h" },
		{ "ToolTip", "Common PinNames" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAnimationGraphSchema_Statics::NewProp_PN_SequenceName = { "PN_SequenceName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationGraphSchema, PN_SequenceName), METADATA_PARAMS(Z_Construct_UClass_UAnimationGraphSchema_Statics::NewProp_PN_SequenceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationGraphSchema_Statics::NewProp_PN_SequenceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationGraphSchema_Statics::NewProp_NAME_NeverAsPin_MetaData[] = {
		{ "Comment", "// PC_Object+PSC_Sequence\n" },
		{ "ModuleRelativePath", "Public/AnimationGraphSchema.h" },
		{ "ToolTip", "PC_Object+PSC_Sequence" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimationGraphSchema_Statics::NewProp_NAME_NeverAsPin = { "NAME_NeverAsPin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationGraphSchema, NAME_NeverAsPin), METADATA_PARAMS(Z_Construct_UClass_UAnimationGraphSchema_Statics::NewProp_NAME_NeverAsPin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationGraphSchema_Statics::NewProp_NAME_NeverAsPin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationGraphSchema_Statics::NewProp_NAME_PinHiddenByDefault_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimationGraphSchema.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimationGraphSchema_Statics::NewProp_NAME_PinHiddenByDefault = { "NAME_PinHiddenByDefault", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationGraphSchema, NAME_PinHiddenByDefault), METADATA_PARAMS(Z_Construct_UClass_UAnimationGraphSchema_Statics::NewProp_NAME_PinHiddenByDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationGraphSchema_Statics::NewProp_NAME_PinHiddenByDefault_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationGraphSchema_Statics::NewProp_NAME_PinShownByDefault_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimationGraphSchema.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimationGraphSchema_Statics::NewProp_NAME_PinShownByDefault = { "NAME_PinShownByDefault", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationGraphSchema, NAME_PinShownByDefault), METADATA_PARAMS(Z_Construct_UClass_UAnimationGraphSchema_Statics::NewProp_NAME_PinShownByDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationGraphSchema_Statics::NewProp_NAME_PinShownByDefault_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationGraphSchema_Statics::NewProp_NAME_AlwaysAsPin_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimationGraphSchema.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimationGraphSchema_Statics::NewProp_NAME_AlwaysAsPin = { "NAME_AlwaysAsPin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationGraphSchema, NAME_AlwaysAsPin), METADATA_PARAMS(Z_Construct_UClass_UAnimationGraphSchema_Statics::NewProp_NAME_AlwaysAsPin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationGraphSchema_Statics::NewProp_NAME_AlwaysAsPin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationGraphSchema_Statics::NewProp_NAME_CustomizeProperty_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimationGraphSchema.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimationGraphSchema_Statics::NewProp_NAME_CustomizeProperty = { "NAME_CustomizeProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationGraphSchema, NAME_CustomizeProperty), METADATA_PARAMS(Z_Construct_UClass_UAnimationGraphSchema_Statics::NewProp_NAME_CustomizeProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationGraphSchema_Statics::NewProp_NAME_CustomizeProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationGraphSchema_Statics::NewProp_NAME_OnEvaluate_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimationGraphSchema.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimationGraphSchema_Statics::NewProp_NAME_OnEvaluate = { "NAME_OnEvaluate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationGraphSchema, NAME_OnEvaluate), METADATA_PARAMS(Z_Construct_UClass_UAnimationGraphSchema_Statics::NewProp_NAME_OnEvaluate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationGraphSchema_Statics::NewProp_NAME_OnEvaluate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationGraphSchema_Statics::NewProp_DefaultEvaluationHandlerName_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimationGraphSchema.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimationGraphSchema_Statics::NewProp_DefaultEvaluationHandlerName = { "DefaultEvaluationHandlerName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationGraphSchema, DefaultEvaluationHandlerName), METADATA_PARAMS(Z_Construct_UClass_UAnimationGraphSchema_Statics::NewProp_DefaultEvaluationHandlerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationGraphSchema_Statics::NewProp_DefaultEvaluationHandlerName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationGraphSchema_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationGraphSchema_Statics::NewProp_PN_SequenceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationGraphSchema_Statics::NewProp_NAME_NeverAsPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationGraphSchema_Statics::NewProp_NAME_PinHiddenByDefault,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationGraphSchema_Statics::NewProp_NAME_PinShownByDefault,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationGraphSchema_Statics::NewProp_NAME_AlwaysAsPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationGraphSchema_Statics::NewProp_NAME_CustomizeProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationGraphSchema_Statics::NewProp_NAME_OnEvaluate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationGraphSchema_Statics::NewProp_DefaultEvaluationHandlerName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationGraphSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationGraphSchema_Statics::ClassParams = {
		&UAnimationGraphSchema::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimationGraphSchema_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationGraphSchema_Statics::PropPointers),
		0,
		0x000800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimationGraphSchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationGraphSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationGraphSchema()
	{
		if (!Z_Registration_Info_UClass_UAnimationGraphSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationGraphSchema.OuterSingleton, Z_Construct_UClass_UAnimationGraphSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimationGraphSchema.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimationGraphSchema>()
	{
		return UAnimationGraphSchema::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationGraphSchema);
	UAnimationGraphSchema::~UAnimationGraphSchema() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimationGraphSchema_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimationGraphSchema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationGraphSchema, UAnimationGraphSchema::StaticClass, TEXT("UAnimationGraphSchema"), &Z_Registration_Info_UClass_UAnimationGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationGraphSchema), 3683645597U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimationGraphSchema_h_545394163(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimationGraphSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimationGraphSchema_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
