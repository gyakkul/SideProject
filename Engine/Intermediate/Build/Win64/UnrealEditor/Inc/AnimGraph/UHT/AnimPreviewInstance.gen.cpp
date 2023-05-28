// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimPreviewInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimPreviewInstance() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimPreviewInstance();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimPreviewInstance_NoRegister();
	ANIMGRAPH_API UEnum* Z_Construct_UEnum_AnimGraph_EMontagePreviewType();
	ANIMGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FAnimPreviewInstanceProxy();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSingleNodeInstance();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMontagePreviewType;
	static UEnum* EMontagePreviewType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMontagePreviewType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMontagePreviewType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraph_EMontagePreviewType, (UObject*)Z_Construct_UPackage__Script_AnimGraph(), TEXT("EMontagePreviewType"));
		}
		return Z_Registration_Info_UEnum_EMontagePreviewType.OuterSingleton;
	}
	template<> ANIMGRAPH_API UEnum* StaticEnum<EMontagePreviewType>()
	{
		return EMontagePreviewType_StaticEnum();
	}
	struct Z_Construct_UEnum_AnimGraph_EMontagePreviewType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnimGraph_EMontagePreviewType_Statics::Enumerators[] = {
		{ "EMPT_Normal", (int64)EMPT_Normal },
		{ "EMPT_AllSections", (int64)EMPT_AllSections },
		{ "EMPT_MAX", (int64)EMPT_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnimGraph_EMontagePreviewType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Enum to know how montage is being played */" },
		{ "EMPT_AllSections.Comment", "/** Playing all sections. */" },
		{ "EMPT_AllSections.Name", "EMPT_AllSections" },
		{ "EMPT_AllSections.ToolTip", "Playing all sections." },
		{ "EMPT_MAX.Name", "EMPT_MAX" },
		{ "EMPT_Normal.Comment", "/** Playing montage in usual way. */" },
		{ "EMPT_Normal.Name", "EMPT_Normal" },
		{ "EMPT_Normal.ToolTip", "Playing montage in usual way." },
		{ "ModuleRelativePath", "Public/AnimPreviewInstance.h" },
		{ "ToolTip", "Enum to know how montage is being played" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraph_EMontagePreviewType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnimGraph,
		nullptr,
		"EMontagePreviewType",
		"EMontagePreviewType",
		Z_Construct_UEnum_AnimGraph_EMontagePreviewType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraph_EMontagePreviewType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_AnimGraph_EMontagePreviewType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraph_EMontagePreviewType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnimGraph_EMontagePreviewType()
	{
		if (!Z_Registration_Info_UEnum_EMontagePreviewType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMontagePreviewType.InnerSingleton, Z_Construct_UEnum_AnimGraph_EMontagePreviewType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMontagePreviewType.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimPreviewInstanceProxy>() == std::is_polymorphic<FAnimSingleNodeInstanceProxy>(), "USTRUCT FAnimPreviewInstanceProxy cannot be polymorphic unless super FAnimSingleNodeInstanceProxy is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimPreviewInstanceProxy;
class UScriptStruct* FAnimPreviewInstanceProxy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimPreviewInstanceProxy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimPreviewInstanceProxy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimPreviewInstanceProxy, (UObject*)Z_Construct_UPackage__Script_AnimGraph(), TEXT("AnimPreviewInstanceProxy"));
	}
	return Z_Registration_Info_UScriptStruct_AnimPreviewInstanceProxy.OuterSingleton;
}
template<> ANIMGRAPH_API UScriptStruct* StaticStruct<FAnimPreviewInstanceProxy>()
{
	return FAnimPreviewInstanceProxy::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimPreviewInstanceProxy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPreviewInstanceProxy_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Proxy override for this UAnimInstance-derived class */" },
		{ "ModuleRelativePath", "Public/AnimPreviewInstance.h" },
		{ "ToolTip", "Proxy override for this UAnimInstance-derived class" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimPreviewInstanceProxy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimPreviewInstanceProxy>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimPreviewInstanceProxy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
		Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy,
		&NewStructOps,
		"AnimPreviewInstanceProxy",
		sizeof(FAnimPreviewInstanceProxy),
		alignof(FAnimPreviewInstanceProxy),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPreviewInstanceProxy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPreviewInstanceProxy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimPreviewInstanceProxy()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimPreviewInstanceProxy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimPreviewInstanceProxy.InnerSingleton, Z_Construct_UScriptStruct_FAnimPreviewInstanceProxy_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimPreviewInstanceProxy.InnerSingleton;
	}
	void UAnimPreviewInstance::StaticRegisterNativesUAnimPreviewInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimPreviewInstance);
	UClass* Z_Construct_UClass_UAnimPreviewInstance_NoRegister()
	{
		return UAnimPreviewInstance::StaticClass();
	}
	struct Z_Construct_UClass_UAnimPreviewInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontagePreviewType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MontagePreviewType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontagePreviewStartSectionIdx_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MontagePreviewStartSectionIdx;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimPreviewInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimSingleNodeInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimPreviewInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This Instance only contains one AnimationAsset, and produce poses\n * Used by Preview in AnimGraph, Playing single animation in Kismet2 and etc\n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AnimPreviewInstance.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/AnimPreviewInstance.h" },
		{ "ToolTip", "This Instance only contains one AnimationAsset, and produce poses\nUsed by Preview in AnimGraph, Playing single animation in Kismet2 and etc" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimPreviewInstance_Statics::NewProp_MontagePreviewType_MetaData[] = {
		{ "Comment", "/** Shared parameters for previewing blendspace or animsequence **/" },
		{ "ModuleRelativePath", "Public/AnimPreviewInstance.h" },
		{ "ToolTip", "Shared parameters for previewing blendspace or animsequence *" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimPreviewInstance_Statics::NewProp_MontagePreviewType = { "MontagePreviewType", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimPreviewInstance, MontagePreviewType), Z_Construct_UEnum_AnimGraph_EMontagePreviewType, METADATA_PARAMS(Z_Construct_UClass_UAnimPreviewInstance_Statics::NewProp_MontagePreviewType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimPreviewInstance_Statics::NewProp_MontagePreviewType_MetaData)) }; // 3423187219
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimPreviewInstance_Statics::NewProp_MontagePreviewStartSectionIdx_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimPreviewInstance.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimPreviewInstance_Statics::NewProp_MontagePreviewStartSectionIdx = { "MontagePreviewStartSectionIdx", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimPreviewInstance, MontagePreviewStartSectionIdx), METADATA_PARAMS(Z_Construct_UClass_UAnimPreviewInstance_Statics::NewProp_MontagePreviewStartSectionIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimPreviewInstance_Statics::NewProp_MontagePreviewStartSectionIdx_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimPreviewInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimPreviewInstance_Statics::NewProp_MontagePreviewType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimPreviewInstance_Statics::NewProp_MontagePreviewStartSectionIdx,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimPreviewInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimPreviewInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimPreviewInstance_Statics::ClassParams = {
		&UAnimPreviewInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimPreviewInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimPreviewInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimPreviewInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimPreviewInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimPreviewInstance()
	{
		if (!Z_Registration_Info_UClass_UAnimPreviewInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimPreviewInstance.OuterSingleton, Z_Construct_UClass_UAnimPreviewInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimPreviewInstance.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimPreviewInstance>()
	{
		return UAnimPreviewInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimPreviewInstance);
	UAnimPreviewInstance::~UAnimPreviewInstance() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimPreviewInstance)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewInstance_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewInstance_h_Statics::EnumInfo[] = {
		{ EMontagePreviewType_StaticEnum, TEXT("EMontagePreviewType"), &Z_Registration_Info_UEnum_EMontagePreviewType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3423187219U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewInstance_h_Statics::ScriptStructInfo[] = {
		{ FAnimPreviewInstanceProxy::StaticStruct, Z_Construct_UScriptStruct_FAnimPreviewInstanceProxy_Statics::NewStructOps, TEXT("AnimPreviewInstanceProxy"), &Z_Registration_Info_UScriptStruct_AnimPreviewInstanceProxy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimPreviewInstanceProxy), 1615906686U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimPreviewInstance, UAnimPreviewInstance::StaticClass, TEXT("UAnimPreviewInstance"), &Z_Registration_Info_UClass_UAnimPreviewInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimPreviewInstance), 1578485287U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewInstance_h_3710671725(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewInstance_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewInstance_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewInstance_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewInstance_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewInstance_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
