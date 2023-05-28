// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Animation/BoneSocketReference.h"
#include "../../Source/Runtime/Engine/Public/BoneContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoneSocketReference() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneSocketTarget();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSocketReference();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SocketReference;
class UScriptStruct* FSocketReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SocketReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SocketReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSocketReference, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SocketReference"));
	}
	return Z_Registration_Info_UScriptStruct_SocketReference.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSocketReference>()
{
	return FSocketReference::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSocketReference_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocketReference_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/BoneSocketReference.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSocketReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSocketReference>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocketReference_Statics::NewProp_SocketName_MetaData[] = {
		{ "Category", "FSocketReference" },
		{ "Comment", "/** Target socket to look at. Used if LookAtBone is empty. - You can use  LookAtLocation if you need offset from this point. That location will be used in their local space. **/" },
		{ "ModuleRelativePath", "Public/Animation/BoneSocketReference.h" },
		{ "ToolTip", "Target socket to look at. Used if LookAtBone is empty. - You can use  LookAtLocation if you need offset from this point. That location will be used in their local space. *" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSocketReference_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSocketReference, SocketName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSocketReference_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocketReference_Statics::NewProp_SocketName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSocketReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocketReference_Statics::NewProp_SocketName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSocketReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SocketReference",
		sizeof(FSocketReference),
		alignof(FSocketReference),
		Z_Construct_UScriptStruct_FSocketReference_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocketReference_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSocketReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocketReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSocketReference()
	{
		if (!Z_Registration_Info_UScriptStruct_SocketReference.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SocketReference.InnerSingleton, Z_Construct_UScriptStruct_FSocketReference_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SocketReference.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BoneSocketTarget;
class UScriptStruct* FBoneSocketTarget::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoneSocketTarget.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BoneSocketTarget.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoneSocketTarget, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BoneSocketTarget"));
	}
	return Z_Registration_Info_UScriptStruct_BoneSocketTarget.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBoneSocketTarget>()
{
	return FBoneSocketTarget::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBoneSocketTarget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSocket_MetaData[];
#endif
		static void NewProp_bUseSocket_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSocket;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneReference_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketReference_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SocketReference;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneSocketTarget_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/BoneSocketReference.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoneSocketTarget_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoneSocketTarget>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneSocketTarget_Statics::NewProp_bUseSocket_MetaData[] = {
		{ "Category", "FBoneSocketTarget" },
		{ "ModuleRelativePath", "Public/Animation/BoneSocketReference.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBoneSocketTarget_Statics::NewProp_bUseSocket_SetBit(void* Obj)
	{
		((FBoneSocketTarget*)Obj)->bUseSocket = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBoneSocketTarget_Statics::NewProp_bUseSocket = { "bUseSocket", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FBoneSocketTarget), &Z_Construct_UScriptStruct_FBoneSocketTarget_Statics::NewProp_bUseSocket_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneSocketTarget_Statics::NewProp_bUseSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneSocketTarget_Statics::NewProp_bUseSocket_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneSocketTarget_Statics::NewProp_BoneReference_MetaData[] = {
		{ "Category", "FBoneSocketTarget" },
		{ "EditCondition", "!bUseSocket" },
		{ "ModuleRelativePath", "Public/Animation/BoneSocketReference.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoneSocketTarget_Statics::NewProp_BoneReference = { "BoneReference", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBoneSocketTarget, BoneReference), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneSocketTarget_Statics::NewProp_BoneReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneSocketTarget_Statics::NewProp_BoneReference_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneSocketTarget_Statics::NewProp_SocketReference_MetaData[] = {
		{ "Category", "FBoneSocketTarget" },
		{ "EditCondition", "bUseSocket" },
		{ "ModuleRelativePath", "Public/Animation/BoneSocketReference.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoneSocketTarget_Statics::NewProp_SocketReference = { "SocketReference", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBoneSocketTarget, SocketReference), Z_Construct_UScriptStruct_FSocketReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneSocketTarget_Statics::NewProp_SocketReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneSocketTarget_Statics::NewProp_SocketReference_MetaData)) }; // 76062570
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoneSocketTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSocketTarget_Statics::NewProp_bUseSocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSocketTarget_Statics::NewProp_BoneReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneSocketTarget_Statics::NewProp_SocketReference,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoneSocketTarget_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BoneSocketTarget",
		sizeof(FBoneSocketTarget),
		alignof(FBoneSocketTarget),
		Z_Construct_UScriptStruct_FBoneSocketTarget_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneSocketTarget_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneSocketTarget_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneSocketTarget_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBoneSocketTarget()
	{
		if (!Z_Registration_Info_UScriptStruct_BoneSocketTarget.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BoneSocketTarget.InnerSingleton, Z_Construct_UScriptStruct_FBoneSocketTarget_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BoneSocketTarget.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_BoneSocketReference_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_BoneSocketReference_h_Statics::ScriptStructInfo[] = {
		{ FSocketReference::StaticStruct, Z_Construct_UScriptStruct_FSocketReference_Statics::NewStructOps, TEXT("SocketReference"), &Z_Registration_Info_UScriptStruct_SocketReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSocketReference), 76062570U) },
		{ FBoneSocketTarget::StaticStruct, Z_Construct_UScriptStruct_FBoneSocketTarget_Statics::NewStructOps, TEXT("BoneSocketTarget"), &Z_Registration_Info_UScriptStruct_BoneSocketTarget, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoneSocketTarget), 2128614898U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_BoneSocketReference_h_1349196651(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_BoneSocketReference_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_BoneSocketReference_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
