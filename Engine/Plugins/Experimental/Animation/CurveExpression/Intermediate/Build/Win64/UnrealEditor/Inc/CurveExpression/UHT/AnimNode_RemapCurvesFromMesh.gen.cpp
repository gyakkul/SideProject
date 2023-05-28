// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNode_RemapCurvesFromMesh.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_RemapCurvesFromMesh() {}
// Cross Module References
	CURVEEXPRESSION_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RemapCurvesFromMesh();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	UPackage* Z_Construct_UPackage__Script_CurveExpression();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_RemapCurvesFromMesh>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_RemapCurvesFromMesh cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_RemapCurvesFromMesh;
class UScriptStruct* FAnimNode_RemapCurvesFromMesh::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_RemapCurvesFromMesh.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_RemapCurvesFromMesh.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RemapCurvesFromMesh, (UObject*)Z_Construct_UPackage__Script_CurveExpression(), TEXT("AnimNode_RemapCurvesFromMesh"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_RemapCurvesFromMesh.OuterSingleton;
}
template<> CURVEEXPRESSION_API UScriptStruct* StaticStruct<FAnimNode_RemapCurvesFromMesh>()
{
	return FAnimNode_RemapCurvesFromMesh::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_RemapCurvesFromMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourcePose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourcePose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SourceMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAttachedParent_MetaData[];
#endif
		static void NewProp_bUseAttachedParent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAttachedParent;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CurveExpressions_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurveExpressions_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveExpressions_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CurveExpressions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExpressionsImmutable_MetaData[];
#endif
		static void NewProp_bExpressionsImmutable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExpressionsImmutable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RemapCurvesFromMesh_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_RemapCurvesFromMesh.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_RemapCurvesFromMesh_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_RemapCurvesFromMesh>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RemapCurvesFromMesh_Statics::NewProp_SourcePose_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/AnimNode_RemapCurvesFromMesh.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RemapCurvesFromMesh_Statics::NewProp_SourcePose = { "SourcePose", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_RemapCurvesFromMesh, SourcePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RemapCurvesFromMesh_Statics::NewProp_SourcePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RemapCurvesFromMesh_Statics::NewProp_SourcePose_MetaData)) }; // 2393943538
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RemapCurvesFromMesh_Statics::NewProp_SourceMeshComponent_MetaData[] = {
		{ "Category", "Copy" },
		{ "Comment", "/** This is used by default if it's valid */" },
		{ "ModuleRelativePath", "Public/AnimNode_RemapCurvesFromMesh.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "This is used by default if it's valid" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_RemapCurvesFromMesh_Statics::NewProp_SourceMeshComponent = { "SourceMeshComponent", nullptr, (EPropertyFlags)0x001400000008200c, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_RemapCurvesFromMesh, SourceMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RemapCurvesFromMesh_Statics::NewProp_SourceMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RemapCurvesFromMesh_Statics::NewProp_SourceMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RemapCurvesFromMesh_Statics::NewProp_bUseAttachedParent_MetaData[] = {
		{ "Category", "Copy" },
		{ "Comment", "/** If SourceMeshComponent is not valid, and if this is true, it will look for attached parent as a source */" },
		{ "ModuleRelativePath", "Public/AnimNode_RemapCurvesFromMesh.h" },
		{ "NeverAsPin", "" },
		{ "ToolTip", "If SourceMeshComponent is not valid, and if this is true, it will look for attached parent as a source" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_RemapCurvesFromMesh_Statics::NewProp_bUseAttachedParent_SetBit(void* Obj)
	{
		((FAnimNode_RemapCurvesFromMesh*)Obj)->bUseAttachedParent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RemapCurvesFromMesh_Statics::NewProp_bUseAttachedParent = { "bUseAttachedParent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_RemapCurvesFromMesh), &Z_Construct_UScriptStruct_FAnimNode_RemapCurvesFromMesh_Statics::NewProp_bUseAttachedParent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RemapCurvesFromMesh_Statics::NewProp_bUseAttachedParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RemapCurvesFromMesh_Statics::NewProp_bUseAttachedParent_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAnimNode_RemapCurvesFromMesh_Statics::NewProp_CurveExpressions_ValueProp = { "CurveExpressions", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_RemapCurvesFromMesh_Statics::NewProp_CurveExpressions_Key_KeyProp = { "CurveExpressions_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RemapCurvesFromMesh_Statics::NewProp_CurveExpressions_MetaData[] = {
		{ "Category", "Expressions" },
		{ "ModuleRelativePath", "Public/AnimNode_RemapCurvesFromMesh.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAnimNode_RemapCurvesFromMesh_Statics::NewProp_CurveExpressions = { "CurveExpressions", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_RemapCurvesFromMesh, CurveExpressions), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RemapCurvesFromMesh_Statics::NewProp_CurveExpressions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RemapCurvesFromMesh_Statics::NewProp_CurveExpressions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RemapCurvesFromMesh_Statics::NewProp_bExpressionsImmutable_MetaData[] = {
		{ "Category", "Expressions" },
		{ "Comment", "/** The expressions given are immutable and will not change during runtime. Improves performance. */" },
		{ "ModuleRelativePath", "Public/AnimNode_RemapCurvesFromMesh.h" },
		{ "NeverAsPin", "" },
		{ "ToolTip", "The expressions given are immutable and will not change during runtime. Improves performance." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_RemapCurvesFromMesh_Statics::NewProp_bExpressionsImmutable_SetBit(void* Obj)
	{
		((FAnimNode_RemapCurvesFromMesh*)Obj)->bExpressionsImmutable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RemapCurvesFromMesh_Statics::NewProp_bExpressionsImmutable = { "bExpressionsImmutable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_RemapCurvesFromMesh), &Z_Construct_UScriptStruct_FAnimNode_RemapCurvesFromMesh_Statics::NewProp_bExpressionsImmutable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RemapCurvesFromMesh_Statics::NewProp_bExpressionsImmutable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RemapCurvesFromMesh_Statics::NewProp_bExpressionsImmutable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_RemapCurvesFromMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RemapCurvesFromMesh_Statics::NewProp_SourcePose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RemapCurvesFromMesh_Statics::NewProp_SourceMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RemapCurvesFromMesh_Statics::NewProp_bUseAttachedParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RemapCurvesFromMesh_Statics::NewProp_CurveExpressions_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RemapCurvesFromMesh_Statics::NewProp_CurveExpressions_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RemapCurvesFromMesh_Statics::NewProp_CurveExpressions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RemapCurvesFromMesh_Statics::NewProp_bExpressionsImmutable,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_RemapCurvesFromMesh_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CurveExpression,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_RemapCurvesFromMesh",
		sizeof(FAnimNode_RemapCurvesFromMesh),
		alignof(FAnimNode_RemapCurvesFromMesh),
		Z_Construct_UScriptStruct_FAnimNode_RemapCurvesFromMesh_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RemapCurvesFromMesh_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RemapCurvesFromMesh_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RemapCurvesFromMesh_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RemapCurvesFromMesh()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_RemapCurvesFromMesh.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_RemapCurvesFromMesh.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_RemapCurvesFromMesh_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_RemapCurvesFromMesh.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Runtime_Public_AnimNode_RemapCurvesFromMesh_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Runtime_Public_AnimNode_RemapCurvesFromMesh_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_RemapCurvesFromMesh::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_RemapCurvesFromMesh_Statics::NewStructOps, TEXT("AnimNode_RemapCurvesFromMesh"), &Z_Registration_Info_UScriptStruct_AnimNode_RemapCurvesFromMesh, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_RemapCurvesFromMesh), 2223821481U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Runtime_Public_AnimNode_RemapCurvesFromMesh_h_896018797(TEXT("/Script/CurveExpression"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Runtime_Public_AnimNode_RemapCurvesFromMesh_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Runtime_Public_AnimNode_RemapCurvesFromMesh_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
