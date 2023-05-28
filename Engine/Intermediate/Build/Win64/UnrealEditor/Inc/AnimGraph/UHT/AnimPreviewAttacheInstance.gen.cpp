// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimPreviewAttacheInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimPreviewAttacheInstance() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimPreviewAttacheInstance();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimPreviewAttacheInstance_NoRegister();
	ANIMGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FAnimPreviewAttacheInstanceProxy();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimInstanceProxy();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimPreviewAttacheInstanceProxy>() == std::is_polymorphic<FAnimInstanceProxy>(), "USTRUCT FAnimPreviewAttacheInstanceProxy cannot be polymorphic unless super FAnimInstanceProxy is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimPreviewAttacheInstanceProxy;
class UScriptStruct* FAnimPreviewAttacheInstanceProxy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimPreviewAttacheInstanceProxy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimPreviewAttacheInstanceProxy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimPreviewAttacheInstanceProxy, (UObject*)Z_Construct_UPackage__Script_AnimGraph(), TEXT("AnimPreviewAttacheInstanceProxy"));
	}
	return Z_Registration_Info_UScriptStruct_AnimPreviewAttacheInstanceProxy.OuterSingleton;
}
template<> ANIMGRAPH_API UScriptStruct* StaticStruct<FAnimPreviewAttacheInstanceProxy>()
{
	return FAnimPreviewAttacheInstanceProxy::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimPreviewAttacheInstanceProxy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPreviewAttacheInstanceProxy_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Proxy override for this UAnimInstance-derived class */" },
		{ "ModuleRelativePath", "Public/AnimPreviewAttacheInstance.h" },
		{ "ToolTip", "Proxy override for this UAnimInstance-derived class" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimPreviewAttacheInstanceProxy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimPreviewAttacheInstanceProxy>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimPreviewAttacheInstanceProxy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
		Z_Construct_UScriptStruct_FAnimInstanceProxy,
		&NewStructOps,
		"AnimPreviewAttacheInstanceProxy",
		sizeof(FAnimPreviewAttacheInstanceProxy),
		alignof(FAnimPreviewAttacheInstanceProxy),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPreviewAttacheInstanceProxy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPreviewAttacheInstanceProxy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimPreviewAttacheInstanceProxy()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimPreviewAttacheInstanceProxy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimPreviewAttacheInstanceProxy.InnerSingleton, Z_Construct_UScriptStruct_FAnimPreviewAttacheInstanceProxy_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimPreviewAttacheInstanceProxy.InnerSingleton;
	}
	void UAnimPreviewAttacheInstance::StaticRegisterNativesUAnimPreviewAttacheInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimPreviewAttacheInstance);
	UClass* Z_Construct_UClass_UAnimPreviewAttacheInstance_NoRegister()
	{
		return UAnimPreviewAttacheInstance::StaticClass();
	}
	struct Z_Construct_UClass_UAnimPreviewAttacheInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimPreviewAttacheInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimPreviewAttacheInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This Instance only contains one AnimationAsset, and produce poses\n * Used by Preview in AnimGraph, Playing single animation in Kismet2 and etc\n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AnimPreviewAttacheInstance.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/AnimPreviewAttacheInstance.h" },
		{ "ToolTip", "This Instance only contains one AnimationAsset, and produce poses\nUsed by Preview in AnimGraph, Playing single animation in Kismet2 and etc" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimPreviewAttacheInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimPreviewAttacheInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimPreviewAttacheInstance_Statics::ClassParams = {
		&UAnimPreviewAttacheInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimPreviewAttacheInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimPreviewAttacheInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimPreviewAttacheInstance()
	{
		if (!Z_Registration_Info_UClass_UAnimPreviewAttacheInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimPreviewAttacheInstance.OuterSingleton, Z_Construct_UClass_UAnimPreviewAttacheInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimPreviewAttacheInstance.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimPreviewAttacheInstance>()
	{
		return UAnimPreviewAttacheInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimPreviewAttacheInstance);
	UAnimPreviewAttacheInstance::~UAnimPreviewAttacheInstance() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewAttacheInstance_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewAttacheInstance_h_Statics::ScriptStructInfo[] = {
		{ FAnimPreviewAttacheInstanceProxy::StaticStruct, Z_Construct_UScriptStruct_FAnimPreviewAttacheInstanceProxy_Statics::NewStructOps, TEXT("AnimPreviewAttacheInstanceProxy"), &Z_Registration_Info_UScriptStruct_AnimPreviewAttacheInstanceProxy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimPreviewAttacheInstanceProxy), 126397202U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewAttacheInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimPreviewAttacheInstance, UAnimPreviewAttacheInstance::StaticClass, TEXT("UAnimPreviewAttacheInstance"), &Z_Registration_Info_UClass_UAnimPreviewAttacheInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimPreviewAttacheInstance), 1402313229U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewAttacheInstance_h_2170771071(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewAttacheInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewAttacheInstance_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewAttacheInstance_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimPreviewAttacheInstance_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
