// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNode_LiveLinkPose.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "LiveLinkTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_LiveLinkPose() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	LIVELINKANIMATIONCORE_API UClass* Z_Construct_UClass_ULiveLinkRetargetAsset_NoRegister();
	LIVELINKANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectName();
	UPackage* Z_Construct_UPackage__Script_LiveLinkAnimationCore();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_LiveLinkPose>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_LiveLinkPose cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_LiveLinkPose;
class UScriptStruct* FAnimNode_LiveLinkPose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_LiveLinkPose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_LiveLinkPose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose, (UObject*)Z_Construct_UPackage__Script_LiveLinkAnimationCore(), TEXT("AnimNode_LiveLinkPose"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_LiveLinkPose.OuterSingleton;
}
template<> LIVELINKANIMATIONCORE_API UScriptStruct* StaticStruct<FAnimNode_LiveLinkPose>()
{
	return FAnimNode_LiveLinkPose::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputPose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputPose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LiveLinkSubjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LiveLinkSubjectName;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubjectName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubjectName;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RetargetAsset_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_RetargetAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRetargetAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CurrentRetargetAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_LiveLinkPose.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_LiveLinkPose>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_InputPose_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/AnimNode_LiveLinkPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_InputPose = { "InputPose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_LiveLinkPose, InputPose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_InputPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_InputPose_MetaData)) }; // 2393943538
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_LiveLinkSubjectName_MetaData[] = {
		{ "Category", "SourceData" },
		{ "ModuleRelativePath", "Public/AnimNode_LiveLinkPose.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_LiveLinkSubjectName = { "LiveLinkSubjectName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_LiveLinkPose, LiveLinkSubjectName), Z_Construct_UScriptStruct_FLiveLinkSubjectName, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_LiveLinkSubjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_LiveLinkSubjectName_MetaData)) }; // 930695248
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_SubjectName_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_LiveLinkPose.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_LiveLinkPose, SubjectName_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_SubjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_SubjectName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_RetargetAsset_MetaData[] = {
		{ "Category", "Retarget" },
		{ "ModuleRelativePath", "Public/AnimNode_LiveLinkPose.h" },
		{ "NeverAsPin", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_RetargetAsset = { "RetargetAsset", nullptr, (EPropertyFlags)0x0014000002000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_LiveLinkPose, RetargetAsset), Z_Construct_UClass_UClass, Z_Construct_UClass_ULiveLinkRetargetAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_RetargetAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_RetargetAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_CurrentRetargetAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_LiveLinkPose.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_CurrentRetargetAsset = { "CurrentRetargetAsset", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_LiveLinkPose, CurrentRetargetAsset), Z_Construct_UClass_ULiveLinkRetargetAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_CurrentRetargetAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_CurrentRetargetAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_InputPose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_LiveLinkSubjectName,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_SubjectName,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_RetargetAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewProp_CurrentRetargetAsset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkAnimationCore,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_LiveLinkPose",
		sizeof(FAnimNode_LiveLinkPose),
		alignof(FAnimNode_LiveLinkPose),
		Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_LiveLinkPose.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_LiveLinkPose.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_LiveLinkPose.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_AnimNode_LiveLinkPose_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_AnimNode_LiveLinkPose_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_LiveLinkPose::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose_Statics::NewStructOps, TEXT("AnimNode_LiveLinkPose"), &Z_Registration_Info_UScriptStruct_AnimNode_LiveLinkPose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_LiveLinkPose), 3486044096U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_AnimNode_LiveLinkPose_h_2130520877(TEXT("/Script/LiveLinkAnimationCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_AnimNode_LiveLinkPose_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_AnimNode_LiveLinkPose_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
