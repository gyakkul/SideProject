// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeuralMorphInputInfo.h"
#include "NeuralMorphTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNeuralMorphInputInfo() {}
// Cross Module References
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerInputInfo();
	NEURALMORPHMODEL_API UClass* Z_Construct_UClass_UNeuralMorphInputInfo();
	NEURALMORPHMODEL_API UClass* Z_Construct_UClass_UNeuralMorphInputInfo_NoRegister();
	NEURALMORPHMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FNeuralMorphBoneGroup();
	NEURALMORPHMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FNeuralMorphCurveGroup();
	UPackage* Z_Construct_UPackage__Script_NeuralMorphModel();
// End Cross Module References
	void UNeuralMorphInputInfo::StaticRegisterNativesUNeuralMorphInputInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNeuralMorphInputInfo);
	UClass* Z_Construct_UClass_UNeuralMorphInputInfo_NoRegister()
	{
		return UNeuralMorphInputInfo::StaticClass();
	}
	struct Z_Construct_UClass_UNeuralMorphInputInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneGroups_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneGroups_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneGroups;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurveGroups_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveGroups_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurveGroups;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNeuralMorphInputInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMLDeformerInputInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_NeuralMorphModel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralMorphInputInfo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The neural morph model's input info that contains all the data about the inputs to the network.\n */" },
		{ "IncludePath", "NeuralMorphInputInfo.h" },
		{ "ModuleRelativePath", "Public/NeuralMorphInputInfo.h" },
		{ "ToolTip", "The neural morph model's input info that contains all the data about the inputs to the network." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNeuralMorphInputInfo_Statics::NewProp_BoneGroups_Inner = { "BoneGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNeuralMorphBoneGroup, METADATA_PARAMS(nullptr, 0) }; // 687623709
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralMorphInputInfo_Statics::NewProp_BoneGroups_MetaData[] = {
		{ "Comment", "/** The groups of bones that generate morph targets together. */" },
		{ "ModuleRelativePath", "Public/NeuralMorphInputInfo.h" },
		{ "ToolTip", "The groups of bones that generate morph targets together." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNeuralMorphInputInfo_Statics::NewProp_BoneGroups = { "BoneGroups", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNeuralMorphInputInfo, BoneGroups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNeuralMorphInputInfo_Statics::NewProp_BoneGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphInputInfo_Statics::NewProp_BoneGroups_MetaData)) }; // 687623709
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNeuralMorphInputInfo_Statics::NewProp_CurveGroups_Inner = { "CurveGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNeuralMorphCurveGroup, METADATA_PARAMS(nullptr, 0) }; // 4109012533
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralMorphInputInfo_Statics::NewProp_CurveGroups_MetaData[] = {
		{ "Comment", "/** The groups of curves that generate morph targets together. */" },
		{ "ModuleRelativePath", "Public/NeuralMorphInputInfo.h" },
		{ "ToolTip", "The groups of curves that generate morph targets together." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNeuralMorphInputInfo_Statics::NewProp_CurveGroups = { "CurveGroups", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNeuralMorphInputInfo, CurveGroups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNeuralMorphInputInfo_Statics::NewProp_CurveGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphInputInfo_Statics::NewProp_CurveGroups_MetaData)) }; // 4109012533
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNeuralMorphInputInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralMorphInputInfo_Statics::NewProp_BoneGroups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralMorphInputInfo_Statics::NewProp_BoneGroups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralMorphInputInfo_Statics::NewProp_CurveGroups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralMorphInputInfo_Statics::NewProp_CurveGroups,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNeuralMorphInputInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNeuralMorphInputInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNeuralMorphInputInfo_Statics::ClassParams = {
		&UNeuralMorphInputInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNeuralMorphInputInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphInputInfo_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNeuralMorphInputInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphInputInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNeuralMorphInputInfo()
	{
		if (!Z_Registration_Info_UClass_UNeuralMorphInputInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNeuralMorphInputInfo.OuterSingleton, Z_Construct_UClass_UNeuralMorphInputInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNeuralMorphInputInfo.OuterSingleton;
	}
	template<> NEURALMORPHMODEL_API UClass* StaticClass<UNeuralMorphInputInfo>()
	{
		return UNeuralMorphInputInfo::StaticClass();
	}
	UNeuralMorphInputInfo::UNeuralMorphInputInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNeuralMorphInputInfo);
	UNeuralMorphInputInfo::~UNeuralMorphInputInfo() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphInputInfo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphInputInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNeuralMorphInputInfo, UNeuralMorphInputInfo::StaticClass, TEXT("UNeuralMorphInputInfo"), &Z_Registration_Info_UClass_UNeuralMorphInputInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNeuralMorphInputInfo), 106426110U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphInputInfo_h_21999084(TEXT("/Script/NeuralMorphModel"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphInputInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphInputInfo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
