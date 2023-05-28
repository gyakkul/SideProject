// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/BoneContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoneContainer() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimCurveType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimCurveType;
class UScriptStruct* FAnimCurveType::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimCurveType.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimCurveType.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimCurveType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimCurveType"));
	}
	return Z_Registration_Info_UScriptStruct_AnimCurveType.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimCurveType>()
{
	return FAnimCurveType::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimCurveType_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMaterial_MetaData[];
#endif
		static void NewProp_bMaterial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMorphtarget_MetaData[];
#endif
		static void NewProp_bMorphtarget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMorphtarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimCurveType_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** in the future if we need more bools, please convert to bitfield \n * These are not saved in asset but per skeleton. \n */" },
		{ "ModuleRelativePath", "Public/BoneContainer.h" },
		{ "ToolTip", "in the future if we need more bools, please convert to bitfield\nThese are not saved in asset but per skeleton." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimCurveType_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimCurveType>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimCurveType_Statics::NewProp_bMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneContainer.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimCurveType_Statics::NewProp_bMaterial_SetBit(void* Obj)
	{
		((FAnimCurveType*)Obj)->bMaterial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimCurveType_Statics::NewProp_bMaterial = { "bMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimCurveType), &Z_Construct_UScriptStruct_FAnimCurveType_Statics::NewProp_bMaterial_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimCurveType_Statics::NewProp_bMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimCurveType_Statics::NewProp_bMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimCurveType_Statics::NewProp_bMorphtarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneContainer.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimCurveType_Statics::NewProp_bMorphtarget_SetBit(void* Obj)
	{
		((FAnimCurveType*)Obj)->bMorphtarget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimCurveType_Statics::NewProp_bMorphtarget = { "bMorphtarget", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimCurveType), &Z_Construct_UScriptStruct_FAnimCurveType_Statics::NewProp_bMorphtarget_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimCurveType_Statics::NewProp_bMorphtarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimCurveType_Statics::NewProp_bMorphtarget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimCurveType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimCurveType_Statics::NewProp_bMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimCurveType_Statics::NewProp_bMorphtarget,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimCurveType_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimCurveType",
		sizeof(FAnimCurveType),
		alignof(FAnimCurveType),
		Z_Construct_UScriptStruct_FAnimCurveType_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimCurveType_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimCurveType_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimCurveType_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimCurveType()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimCurveType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimCurveType.InnerSingleton, Z_Construct_UScriptStruct_FAnimCurveType_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimCurveType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BoneReference;
class UScriptStruct* FBoneReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoneReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BoneReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoneReference, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BoneReference"));
	}
	return Z_Registration_Info_UScriptStruct_BoneReference.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBoneReference>()
{
	return FBoneReference::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBoneReference_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneReference_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BoneContainer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoneReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoneReference>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneReference_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "BoneReference" },
		{ "Comment", "/** Name of bone to control. This is the main bone chain to modify from. **/" },
		{ "ModuleRelativePath", "Public/BoneContainer.h" },
		{ "ToolTip", "Name of bone to control. This is the main bone chain to modify from. *" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBoneReference_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBoneReference, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneReference_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneReference_Statics::NewProp_BoneName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoneReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneReference_Statics::NewProp_BoneName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoneReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BoneReference",
		sizeof(FBoneReference),
		alignof(FBoneReference),
		Z_Construct_UScriptStruct_FBoneReference_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneReference_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBoneReference()
	{
		if (!Z_Registration_Info_UScriptStruct_BoneReference.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BoneReference.InnerSingleton, Z_Construct_UScriptStruct_FBoneReference_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BoneReference.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_BoneContainer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_BoneContainer_h_Statics::ScriptStructInfo[] = {
		{ FAnimCurveType::StaticStruct, Z_Construct_UScriptStruct_FAnimCurveType_Statics::NewStructOps, TEXT("AnimCurveType"), &Z_Registration_Info_UScriptStruct_AnimCurveType, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimCurveType), 2846346793U) },
		{ FBoneReference::StaticStruct, Z_Construct_UScriptStruct_FBoneReference_Statics::NewStructOps, TEXT("BoneReference"), &Z_Registration_Info_UScriptStruct_BoneReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoneReference), 2906976723U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_BoneContainer_h_3931808716(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_BoneContainer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_BoneContainer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
