// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeSpaceConversions.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNodeSpaceConversions() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentSpacePoseLink();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_ConvertComponentToLocalSpace>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_ConvertComponentToLocalSpace cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_ConvertComponentToLocalSpace;
class UScriptStruct* FAnimNode_ConvertComponentToLocalSpace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_ConvertComponentToLocalSpace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_ConvertComponentToLocalSpace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_ConvertComponentToLocalSpace"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_ConvertComponentToLocalSpace.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_ConvertComponentToLocalSpace>()
{
	return FAnimNode_ConvertComponentToLocalSpace::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentPose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentPose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNodeSpaceConversions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_ConvertComponentToLocalSpace>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_Statics::NewProp_ComponentPose_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNodeSpaceConversions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_Statics::NewProp_ComponentPose = { "ComponentPose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ConvertComponentToLocalSpace, ComponentPose), Z_Construct_UScriptStruct_FComponentSpacePoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_Statics::NewProp_ComponentPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_Statics::NewProp_ComponentPose_MetaData)) }; // 4052600424
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_Statics::NewProp_ComponentPose,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_ConvertComponentToLocalSpace",
		sizeof(FAnimNode_ConvertComponentToLocalSpace),
		alignof(FAnimNode_ConvertComponentToLocalSpace),
		Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_ConvertComponentToLocalSpace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_ConvertComponentToLocalSpace.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_ConvertComponentToLocalSpace.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_ConvertLocalToComponentSpace>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_ConvertLocalToComponentSpace cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_ConvertLocalToComponentSpace;
class UScriptStruct* FAnimNode_ConvertLocalToComponentSpace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_ConvertLocalToComponentSpace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_ConvertLocalToComponentSpace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_ConvertLocalToComponentSpace"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_ConvertLocalToComponentSpace.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_ConvertLocalToComponentSpace>()
{
	return FAnimNode_ConvertLocalToComponentSpace::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalPose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalPose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNodeSpaceConversions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_ConvertLocalToComponentSpace>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_Statics::NewProp_LocalPose_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNodeSpaceConversions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_Statics::NewProp_LocalPose = { "LocalPose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ConvertLocalToComponentSpace, LocalPose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_Statics::NewProp_LocalPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_Statics::NewProp_LocalPose_MetaData)) }; // 2393943538
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_Statics::NewProp_LocalPose,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_ConvertLocalToComponentSpace",
		sizeof(FAnimNode_ConvertLocalToComponentSpace),
		alignof(FAnimNode_ConvertLocalToComponentSpace),
		Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_ConvertLocalToComponentSpace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_ConvertLocalToComponentSpace.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_ConvertLocalToComponentSpace.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeSpaceConversions_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeSpaceConversions_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_ConvertComponentToLocalSpace::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_Statics::NewStructOps, TEXT("AnimNode_ConvertComponentToLocalSpace"), &Z_Registration_Info_UScriptStruct_AnimNode_ConvertComponentToLocalSpace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_ConvertComponentToLocalSpace), 2085893564U) },
		{ FAnimNode_ConvertLocalToComponentSpace::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_Statics::NewStructOps, TEXT("AnimNode_ConvertLocalToComponentSpace"), &Z_Registration_Info_UScriptStruct_AnimNode_ConvertLocalToComponentSpace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_ConvertLocalToComponentSpace), 2767602475U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeSpaceConversions_h_3465951459(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeSpaceConversions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeSpaceConversions_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
