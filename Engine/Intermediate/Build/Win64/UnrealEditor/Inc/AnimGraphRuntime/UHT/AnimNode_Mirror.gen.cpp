// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNodes/AnimNode_Mirror.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_Mirror() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Mirror();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_MirrorBase();
	ENGINE_API UClass* Z_Construct_UClass_UMirrorDataTable_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_MirrorBase>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_MirrorBase cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_MirrorBase;
class UScriptStruct* FAnimNode_MirrorBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_MirrorBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_MirrorBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_MirrorBase, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_MirrorBase"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_MirrorBase.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_MirrorBase>()
{
	return FAnimNode_MirrorBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_MirrorBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Source;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MirrorBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Mirror.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_MirrorBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_MirrorBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MirrorBase_Statics::NewProp_Source_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Mirror.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_MirrorBase_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_MirrorBase, Source), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MirrorBase_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MirrorBase_Statics::NewProp_Source_MetaData)) }; // 2393943538
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_MirrorBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MirrorBase_Statics::NewProp_Source,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_MirrorBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_MirrorBase",
		sizeof(FAnimNode_MirrorBase),
		alignof(FAnimNode_MirrorBase),
		Z_Construct_UScriptStruct_FAnimNode_MirrorBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MirrorBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MirrorBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MirrorBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_MirrorBase()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_MirrorBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_MirrorBase.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_MirrorBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_MirrorBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_Mirror>() == std::is_polymorphic<FAnimNode_MirrorBase>(), "USTRUCT FAnimNode_Mirror cannot be polymorphic unless super FAnimNode_MirrorBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_Mirror;
class UScriptStruct* FAnimNode_Mirror::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_Mirror.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_Mirror.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Mirror, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_Mirror"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_Mirror.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_Mirror>()
{
	return FAnimNode_Mirror::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMirror_MetaData[];
#endif
		static void NewProp_bMirror_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMirror;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MirrorDataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MirrorDataTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetChild_MetaData[];
#endif
		static void NewProp_bResetChild_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetChild;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBoneMirroring_MetaData[];
#endif
		static void NewProp_bBoneMirroring_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBoneMirroring;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCurveMirroring_MetaData[];
#endif
		static void NewProp_bCurveMirroring_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCurveMirroring;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAttributeMirroring_MetaData[];
#endif
		static void NewProp_bAttributeMirroring_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttributeMirroring;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Mirror.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_Mirror>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bMirror_MetaData[] = {
		{ "Category", "Settings" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Mirror.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bMirror_SetBit(void* Obj)
	{
		((FAnimNode_Mirror*)Obj)->bMirror = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bMirror = { "bMirror", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_Mirror), &Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bMirror_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bMirror_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bMirror_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_MirrorDataTable_MetaData[] = {
		{ "Category", "Settings" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Mirror.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_MirrorDataTable = { "MirrorDataTable", nullptr, (EPropertyFlags)0x0024080800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_Mirror, MirrorDataTable), Z_Construct_UClass_UMirrorDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_MirrorDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_MirrorDataTable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_BlendTime_MetaData[] = {
		{ "Category", "MirrorTransition" },
		{ "Comment", "// Inertialization blend time to use when transitioning between mirrored and unmirrored states\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Mirror.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Inertialization blend time to use when transitioning between mirrored and unmirrored states" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_Mirror, BlendTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_BlendTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_BlendTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bResetChild_MetaData[] = {
		{ "Category", "MirrorTransition" },
		{ "Comment", "// Whether to reset (reinitialize) the child (source) pose when the mirror state changes\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Mirror.h" },
		{ "ToolTip", "Whether to reset (reinitialize) the child (source) pose when the mirror state changes" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bResetChild_SetBit(void* Obj)
	{
		((FAnimNode_Mirror*)Obj)->bResetChild = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bResetChild = { "bResetChild", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_Mirror), &Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bResetChild_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bResetChild_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bResetChild_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bBoneMirroring_MetaData[] = {
		{ "Category", "MirroredChannels" },
		{ "DisplayName", "Bone" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Mirror.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bBoneMirroring_SetBit(void* Obj)
	{
		((FAnimNode_Mirror*)Obj)->bBoneMirroring = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bBoneMirroring = { "bBoneMirroring", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_Mirror), &Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bBoneMirroring_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bBoneMirroring_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bBoneMirroring_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bCurveMirroring_MetaData[] = {
		{ "Category", "MirroredChannels" },
		{ "DisplayName", "Curve" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Mirror.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bCurveMirroring_SetBit(void* Obj)
	{
		((FAnimNode_Mirror*)Obj)->bCurveMirroring = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bCurveMirroring = { "bCurveMirroring", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_Mirror), &Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bCurveMirroring_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bCurveMirroring_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bCurveMirroring_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bAttributeMirroring_MetaData[] = {
		{ "Category", "MirroredChannels" },
		{ "DisplayName", "Attributes" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Mirror.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bAttributeMirroring_SetBit(void* Obj)
	{
		((FAnimNode_Mirror*)Obj)->bAttributeMirroring = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bAttributeMirroring = { "bAttributeMirroring", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_Mirror), &Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bAttributeMirroring_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bAttributeMirroring_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bAttributeMirroring_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bMirror,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_MirrorDataTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_BlendTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bResetChild,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bBoneMirroring,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bCurveMirroring,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bAttributeMirroring,
	};
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_MirrorBase,
		&NewStructOps,
		"AnimNode_Mirror",
		sizeof(FAnimNode_Mirror),
		alignof(FAnimNode_Mirror),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Mirror()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_Mirror.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_Mirror.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_Mirror.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_Mirror_Standalone>() == std::is_polymorphic<FAnimNode_MirrorBase>(), "USTRUCT FAnimNode_Mirror_Standalone cannot be polymorphic unless super FAnimNode_MirrorBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_Mirror_Standalone;
class UScriptStruct* FAnimNode_Mirror_Standalone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_Mirror_Standalone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_Mirror_Standalone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_Mirror_Standalone"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_Mirror_Standalone.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_Mirror_Standalone>()
{
	return FAnimNode_Mirror_Standalone::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMirror_MetaData[];
#endif
		static void NewProp_bMirror_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMirror;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MirrorDataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MirrorDataTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetChild_MetaData[];
#endif
		static void NewProp_bResetChild_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetChild;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBoneMirroring_MetaData[];
#endif
		static void NewProp_bBoneMirroring_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBoneMirroring;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCurveMirroring_MetaData[];
#endif
		static void NewProp_bCurveMirroring_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCurveMirroring;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAttributeMirroring_MetaData[];
#endif
		static void NewProp_bAttributeMirroring_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttributeMirroring;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Mirror.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_Mirror_Standalone>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bMirror_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Mirror.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bMirror_SetBit(void* Obj)
	{
		((FAnimNode_Mirror_Standalone*)Obj)->bMirror = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bMirror = { "bMirror", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_Mirror_Standalone), &Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bMirror_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bMirror_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bMirror_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_MirrorDataTable_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Mirror.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_MirrorDataTable = { "MirrorDataTable", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_Mirror_Standalone, MirrorDataTable), Z_Construct_UClass_UMirrorDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_MirrorDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_MirrorDataTable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_BlendTime_MetaData[] = {
		{ "Category", "MirrorTransition" },
		{ "Comment", "// Inertialization blend time to use when transitioning between mirrored and unmirrored states\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Mirror.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Inertialization blend time to use when transitioning between mirrored and unmirrored states" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_Mirror_Standalone, BlendTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_BlendTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_BlendTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bResetChild_MetaData[] = {
		{ "Category", "MirrorTransition" },
		{ "Comment", "// Whether to reset (reinitialize) the child (source) pose when the mirror state changes\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Mirror.h" },
		{ "ToolTip", "Whether to reset (reinitialize) the child (source) pose when the mirror state changes" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bResetChild_SetBit(void* Obj)
	{
		((FAnimNode_Mirror_Standalone*)Obj)->bResetChild = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bResetChild = { "bResetChild", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_Mirror_Standalone), &Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bResetChild_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bResetChild_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bResetChild_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bBoneMirroring_MetaData[] = {
		{ "Category", "MirroredChannels" },
		{ "DisplayName", "Bone" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Mirror.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bBoneMirroring_SetBit(void* Obj)
	{
		((FAnimNode_Mirror_Standalone*)Obj)->bBoneMirroring = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bBoneMirroring = { "bBoneMirroring", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_Mirror_Standalone), &Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bBoneMirroring_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bBoneMirroring_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bBoneMirroring_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bCurveMirroring_MetaData[] = {
		{ "Category", "MirroredChannels" },
		{ "DisplayName", "Curve" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Mirror.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bCurveMirroring_SetBit(void* Obj)
	{
		((FAnimNode_Mirror_Standalone*)Obj)->bCurveMirroring = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bCurveMirroring = { "bCurveMirroring", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_Mirror_Standalone), &Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bCurveMirroring_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bCurveMirroring_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bCurveMirroring_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bAttributeMirroring_MetaData[] = {
		{ "Category", "MirroredChannels" },
		{ "DisplayName", "Attributes" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Mirror.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bAttributeMirroring_SetBit(void* Obj)
	{
		((FAnimNode_Mirror_Standalone*)Obj)->bAttributeMirroring = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bAttributeMirroring = { "bAttributeMirroring", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_Mirror_Standalone), &Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bAttributeMirroring_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bAttributeMirroring_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bAttributeMirroring_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bMirror,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_MirrorDataTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_BlendTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bResetChild,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bBoneMirroring,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bCurveMirroring,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bAttributeMirroring,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_MirrorBase,
		&NewStructOps,
		"AnimNode_Mirror_Standalone",
		sizeof(FAnimNode_Mirror_Standalone),
		alignof(FAnimNode_Mirror_Standalone),
		Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_Mirror_Standalone.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_Mirror_Standalone.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_Mirror_Standalone.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_Mirror_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_Mirror_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_MirrorBase::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_MirrorBase_Statics::NewStructOps, TEXT("AnimNode_MirrorBase"), &Z_Registration_Info_UScriptStruct_AnimNode_MirrorBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_MirrorBase), 688346180U) },
		{ FAnimNode_Mirror::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewStructOps, TEXT("AnimNode_Mirror"), &Z_Registration_Info_UScriptStruct_AnimNode_Mirror, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_Mirror), 4232100041U) },
		{ FAnimNode_Mirror_Standalone::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewStructOps, TEXT("AnimNode_Mirror_Standalone"), &Z_Registration_Info_UScriptStruct_AnimNode_Mirror_Standalone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_Mirror_Standalone), 3853261721U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_Mirror_h_1128758944(TEXT("/Script/AnimGraphRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_Mirror_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_Mirror_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
