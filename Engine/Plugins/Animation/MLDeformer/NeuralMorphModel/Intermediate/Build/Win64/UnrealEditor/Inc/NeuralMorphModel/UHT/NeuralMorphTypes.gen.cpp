// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeuralMorphTypes.h"
#include "../../Source/Runtime/Engine/Public/BoneContainer.h"
#include "MLDeformerCurveReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNeuralMorphTypes() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	MLDEFORMERFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FMLDeformerCurveReference();
	NEURALMORPHMODEL_API UEnum* Z_Construct_UEnum_NeuralMorphModel_ENeuralMorphMode();
	NEURALMORPHMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FNeuralMorphBoneGroup();
	NEURALMORPHMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FNeuralMorphCurveGroup();
	UPackage* Z_Construct_UPackage__Script_NeuralMorphModel();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENeuralMorphMode;
	static UEnum* ENeuralMorphMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENeuralMorphMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENeuralMorphMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NeuralMorphModel_ENeuralMorphMode, (UObject*)Z_Construct_UPackage__Script_NeuralMorphModel(), TEXT("ENeuralMorphMode"));
		}
		return Z_Registration_Info_UEnum_ENeuralMorphMode.OuterSingleton;
	}
	template<> NEURALMORPHMODEL_API UEnum* StaticEnum<ENeuralMorphMode>()
	{
		return ENeuralMorphMode_StaticEnum();
	}
	struct Z_Construct_UEnum_NeuralMorphModel_ENeuralMorphMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NeuralMorphModel_ENeuralMorphMode_Statics::Enumerators[] = {
		{ "ENeuralMorphMode::Local", (int64)ENeuralMorphMode::Local },
		{ "ENeuralMorphMode::Global", (int64)ENeuralMorphMode::Global },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NeuralMorphModel_ENeuralMorphMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** \n * The mode of the model, either local or global. \n * In local mode the network contains a super simple neural network for each bone, while in \n * global mode all bones and curves are input to one larger fully connected network.\n * The local mode has faster performance, while global mode can result in higher quality deformation.\n * This model runs its neural network on the CPU, but uses comrpessed GPU based morph targets, which require shader model 5.\n */" },
		{ "Global.Comment", "/** \n\x09 * There is one fully connected neural network that generates a set of morph targets.\n\x09 * This has a slightly higher CPU overhead, but could result in higher quality.\n\x09 * The Global mode is basically the same as the Vertex Delta Model, but runs the neural network on the CPU\n\x09 * and uses GPU compressed morph targets.\n\x09 */" },
		{ "Global.Name", "ENeuralMorphMode::Global" },
		{ "Global.ToolTip", "There is one fully connected neural network that generates a set of morph targets.\nThis has a slightly higher CPU overhead, but could result in higher quality.\nThe Global mode is basically the same as the Vertex Delta Model, but runs the neural network on the CPU\nand uses GPU compressed morph targets." },
		{ "Local.Comment", "/**\n\x09 * Each bone creates a set of morph targets and has its own small neural network.\n\x09 * The local mode can also create more localized morph targets and tends to use slightly less memory.\n\x09 * This mode is faster to process on the CPU side.\n\x09 */" },
		{ "Local.Name", "ENeuralMorphMode::Local" },
		{ "Local.ToolTip", "Each bone creates a set of morph targets and has its own small neural network.\nThe local mode can also create more localized morph targets and tends to use slightly less memory.\nThis mode is faster to process on the CPU side." },
		{ "ModuleRelativePath", "Public/NeuralMorphTypes.h" },
		{ "ToolTip", "The mode of the model, either local or global.\nIn local mode the network contains a super simple neural network for each bone, while in\nglobal mode all bones and curves are input to one larger fully connected network.\nThe local mode has faster performance, while global mode can result in higher quality deformation.\nThis model runs its neural network on the CPU, but uses comrpessed GPU based morph targets, which require shader model 5." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NeuralMorphModel_ENeuralMorphMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NeuralMorphModel,
		nullptr,
		"ENeuralMorphMode",
		"ENeuralMorphMode",
		Z_Construct_UEnum_NeuralMorphModel_ENeuralMorphMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NeuralMorphModel_ENeuralMorphMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NeuralMorphModel_ENeuralMorphMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NeuralMorphModel_ENeuralMorphMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NeuralMorphModel_ENeuralMorphMode()
	{
		if (!Z_Registration_Info_UEnum_ENeuralMorphMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENeuralMorphMode.InnerSingleton, Z_Construct_UEnum_NeuralMorphModel_ENeuralMorphMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENeuralMorphMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NeuralMorphBoneGroup;
class UScriptStruct* FNeuralMorphBoneGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NeuralMorphBoneGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NeuralMorphBoneGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNeuralMorphBoneGroup, (UObject*)Z_Construct_UPackage__Script_NeuralMorphModel(), TEXT("NeuralMorphBoneGroup"));
	}
	return Z_Registration_Info_UScriptStruct_NeuralMorphBoneGroup.OuterSingleton;
}
template<> NEURALMORPHMODEL_API UScriptStruct* StaticStruct<FNeuralMorphBoneGroup>()
{
	return FNeuralMorphBoneGroup::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNeuralMorphBoneGroup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeuralMorphBoneGroup_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A group of bones, which can generate morph targets together.\n * This is useful when there are specific correlations between different bones, that all effect the same region on the body.\n */" },
		{ "ModuleRelativePath", "Public/NeuralMorphTypes.h" },
		{ "ToolTip", "A group of bones, which can generate morph targets together.\nThis is useful when there are specific correlations between different bones, that all effect the same region on the body." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNeuralMorphBoneGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNeuralMorphBoneGroup>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNeuralMorphBoneGroup_Statics::NewProp_BoneNames_Inner = { "BoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(nullptr, 0) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeuralMorphBoneGroup_Statics::NewProp_BoneNames_MetaData[] = {
		{ "Category", "Bones" },
		{ "Comment", "/** The list of bones that should form a group together. */" },
		{ "ModuleRelativePath", "Public/NeuralMorphTypes.h" },
		{ "ToolTip", "The list of bones that should form a group together." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNeuralMorphBoneGroup_Statics::NewProp_BoneNames = { "BoneNames", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNeuralMorphBoneGroup, BoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNeuralMorphBoneGroup_Statics::NewProp_BoneNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeuralMorphBoneGroup_Statics::NewProp_BoneNames_MetaData)) }; // 2906976723
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNeuralMorphBoneGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuralMorphBoneGroup_Statics::NewProp_BoneNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuralMorphBoneGroup_Statics::NewProp_BoneNames,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNeuralMorphBoneGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NeuralMorphModel,
		nullptr,
		&NewStructOps,
		"NeuralMorphBoneGroup",
		sizeof(FNeuralMorphBoneGroup),
		alignof(FNeuralMorphBoneGroup),
		Z_Construct_UScriptStruct_FNeuralMorphBoneGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeuralMorphBoneGroup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNeuralMorphBoneGroup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeuralMorphBoneGroup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNeuralMorphBoneGroup()
	{
		if (!Z_Registration_Info_UScriptStruct_NeuralMorphBoneGroup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NeuralMorphBoneGroup.InnerSingleton, Z_Construct_UScriptStruct_FNeuralMorphBoneGroup_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NeuralMorphBoneGroup.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NeuralMorphCurveGroup;
class UScriptStruct* FNeuralMorphCurveGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NeuralMorphCurveGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NeuralMorphCurveGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNeuralMorphCurveGroup, (UObject*)Z_Construct_UPackage__Script_NeuralMorphModel(), TEXT("NeuralMorphCurveGroup"));
	}
	return Z_Registration_Info_UScriptStruct_NeuralMorphCurveGroup.OuterSingleton;
}
template<> NEURALMORPHMODEL_API UScriptStruct* StaticStruct<FNeuralMorphCurveGroup>()
{
	return FNeuralMorphCurveGroup::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNeuralMorphCurveGroup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurveNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurveNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeuralMorphCurveGroup_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A group of curves, which can generate morph targets together.\n * This is useful when there are specific correlations between different curves, that all effect the same region on the body.\n */" },
		{ "ModuleRelativePath", "Public/NeuralMorphTypes.h" },
		{ "ToolTip", "A group of curves, which can generate morph targets together.\nThis is useful when there are specific correlations between different curves, that all effect the same region on the body." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNeuralMorphCurveGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNeuralMorphCurveGroup>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNeuralMorphCurveGroup_Statics::NewProp_CurveNames_Inner = { "CurveNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMLDeformerCurveReference, METADATA_PARAMS(nullptr, 0) }; // 4012679004
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeuralMorphCurveGroup_Statics::NewProp_CurveNames_MetaData[] = {
		{ "Category", "Curves" },
		{ "Comment", "/** The list of curves that should form a group together. */" },
		{ "ModuleRelativePath", "Public/NeuralMorphTypes.h" },
		{ "ToolTip", "The list of curves that should form a group together." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNeuralMorphCurveGroup_Statics::NewProp_CurveNames = { "CurveNames", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNeuralMorphCurveGroup, CurveNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNeuralMorphCurveGroup_Statics::NewProp_CurveNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeuralMorphCurveGroup_Statics::NewProp_CurveNames_MetaData)) }; // 4012679004
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNeuralMorphCurveGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuralMorphCurveGroup_Statics::NewProp_CurveNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuralMorphCurveGroup_Statics::NewProp_CurveNames,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNeuralMorphCurveGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NeuralMorphModel,
		nullptr,
		&NewStructOps,
		"NeuralMorphCurveGroup",
		sizeof(FNeuralMorphCurveGroup),
		alignof(FNeuralMorphCurveGroup),
		Z_Construct_UScriptStruct_FNeuralMorphCurveGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeuralMorphCurveGroup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNeuralMorphCurveGroup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeuralMorphCurveGroup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNeuralMorphCurveGroup()
	{
		if (!Z_Registration_Info_UScriptStruct_NeuralMorphCurveGroup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NeuralMorphCurveGroup.InnerSingleton, Z_Construct_UScriptStruct_FNeuralMorphCurveGroup_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NeuralMorphCurveGroup.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphTypes_h_Statics::EnumInfo[] = {
		{ ENeuralMorphMode_StaticEnum, TEXT("ENeuralMorphMode"), &Z_Registration_Info_UEnum_ENeuralMorphMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1694469100U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphTypes_h_Statics::ScriptStructInfo[] = {
		{ FNeuralMorphBoneGroup::StaticStruct, Z_Construct_UScriptStruct_FNeuralMorphBoneGroup_Statics::NewStructOps, TEXT("NeuralMorphBoneGroup"), &Z_Registration_Info_UScriptStruct_NeuralMorphBoneGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNeuralMorphBoneGroup), 687623709U) },
		{ FNeuralMorphCurveGroup::StaticStruct, Z_Construct_UScriptStruct_FNeuralMorphCurveGroup_Statics::NewStructOps, TEXT("NeuralMorphCurveGroup"), &Z_Registration_Info_UScriptStruct_NeuralMorphCurveGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNeuralMorphCurveGroup), 4109012533U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphTypes_h_844865639(TEXT("/Script/NeuralMorphModel"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
