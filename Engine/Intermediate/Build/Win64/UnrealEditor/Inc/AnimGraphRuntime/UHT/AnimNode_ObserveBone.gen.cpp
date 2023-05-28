// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoneControllers/AnimNode_ObserveBone.h"
#include "../../Source/Runtime/Engine/Public/BoneContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_ObserveBone() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ObserveBone();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneControlSpace();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_ObserveBone>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_ObserveBone cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_ObserveBone;
class UScriptStruct* FAnimNode_ObserveBone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_ObserveBone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_ObserveBone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ObserveBone, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_ObserveBone"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_ObserveBone.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_ObserveBone>()
{
	return FAnimNode_ObserveBone::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_ObserveBone_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneToObserve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneToObserve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplaySpace_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DisplaySpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRelativeToRefPose_MetaData[];
#endif
		static void NewProp_bRelativeToRefPose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRelativeToRefPose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Translation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ObserveBone_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09""Debugging node that displays the current value of a bone in a specific space.\n */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ObserveBone.h" },
		{ "ToolTip", "Debugging node that displays the current value of a bone in a specific space." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_ObserveBone_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_ObserveBone>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ObserveBone_Statics::NewProp_BoneToObserve_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/** Name of bone to observe. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ObserveBone.h" },
		{ "ToolTip", "Name of bone to observe." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ObserveBone_Statics::NewProp_BoneToObserve = { "BoneToObserve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ObserveBone, BoneToObserve), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ObserveBone_Statics::NewProp_BoneToObserve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ObserveBone_Statics::NewProp_BoneToObserve_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ObserveBone_Statics::NewProp_DisplaySpace_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/** Reference frame to display the bone transform in. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ObserveBone.h" },
		{ "ToolTip", "Reference frame to display the bone transform in." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_ObserveBone_Statics::NewProp_DisplaySpace = { "DisplaySpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ObserveBone, DisplaySpace), Z_Construct_UEnum_Engine_EBoneControlSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ObserveBone_Statics::NewProp_DisplaySpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ObserveBone_Statics::NewProp_DisplaySpace_MetaData)) }; // 793580878
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ObserveBone_Statics::NewProp_bRelativeToRefPose_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/** Show the difference from the reference pose? */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ObserveBone.h" },
		{ "ToolTip", "Show the difference from the reference pose?" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_ObserveBone_Statics::NewProp_bRelativeToRefPose_SetBit(void* Obj)
	{
		((FAnimNode_ObserveBone*)Obj)->bRelativeToRefPose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_ObserveBone_Statics::NewProp_bRelativeToRefPose = { "bRelativeToRefPose", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_ObserveBone), &Z_Construct_UScriptStruct_FAnimNode_ObserveBone_Statics::NewProp_bRelativeToRefPose_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ObserveBone_Statics::NewProp_bRelativeToRefPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ObserveBone_Statics::NewProp_bRelativeToRefPose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ObserveBone_Statics::NewProp_Translation_MetaData[] = {
		{ "Comment", "/** Translation of the bone being observed. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ObserveBone.h" },
		{ "ToolTip", "Translation of the bone being observed." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ObserveBone_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ObserveBone, Translation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ObserveBone_Statics::NewProp_Translation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ObserveBone_Statics::NewProp_Translation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ObserveBone_Statics::NewProp_Rotation_MetaData[] = {
		{ "Comment", "/** Rotation of the bone being observed. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ObserveBone.h" },
		{ "ToolTip", "Rotation of the bone being observed." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ObserveBone_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ObserveBone, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ObserveBone_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ObserveBone_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ObserveBone_Statics::NewProp_Scale_MetaData[] = {
		{ "Comment", "/** Scale of the bone being observed. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ObserveBone.h" },
		{ "ToolTip", "Scale of the bone being observed." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ObserveBone_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ObserveBone, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ObserveBone_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ObserveBone_Statics::NewProp_Scale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_ObserveBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ObserveBone_Statics::NewProp_BoneToObserve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ObserveBone_Statics::NewProp_DisplaySpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ObserveBone_Statics::NewProp_bRelativeToRefPose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ObserveBone_Statics::NewProp_Translation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ObserveBone_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ObserveBone_Statics::NewProp_Scale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_ObserveBone_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_ObserveBone",
		sizeof(FAnimNode_ObserveBone),
		alignof(FAnimNode_ObserveBone),
		Z_Construct_UScriptStruct_FAnimNode_ObserveBone_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ObserveBone_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ObserveBone_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ObserveBone_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ObserveBone()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_ObserveBone.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_ObserveBone.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_ObserveBone_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_ObserveBone.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ObserveBone_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ObserveBone_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_ObserveBone::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_ObserveBone_Statics::NewStructOps, TEXT("AnimNode_ObserveBone"), &Z_Registration_Info_UScriptStruct_AnimNode_ObserveBone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_ObserveBone), 1891986743U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ObserveBone_h_1703230208(TEXT("/Script/AnimGraphRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ObserveBone_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ObserveBone_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
