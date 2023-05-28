// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonAnimTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonAnimTypes() {}
// Cross Module References
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FAxis();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_AnimationCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Axis;
class UScriptStruct* FAxis::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Axis.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Axis.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAxis, (UObject*)Z_Construct_UPackage__Script_AnimationCore(), TEXT("Axis"));
	}
	return Z_Registration_Info_UScriptStruct_Axis.OuterSingleton;
}
template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<FAxis>()
{
	return FAxis::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAxis_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Axis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInLocalSpace_MetaData[];
#endif
		static void NewProp_bInLocalSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInLocalSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAxis_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Axis to represent direction */" },
		{ "ModuleRelativePath", "Public/CommonAnimTypes.h" },
		{ "ToolTip", "Axis to represent direction" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAxis_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAxis>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAxis_Statics::NewProp_Axis_MetaData[] = {
		{ "Category", "FAxis" },
		{ "ModuleRelativePath", "Public/CommonAnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAxis_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAxis, Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAxis_Statics::NewProp_Axis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxis_Statics::NewProp_Axis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAxis_Statics::NewProp_bInLocalSpace_MetaData[] = {
		{ "Category", "FAxis" },
		{ "ModuleRelativePath", "Public/CommonAnimTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAxis_Statics::NewProp_bInLocalSpace_SetBit(void* Obj)
	{
		((FAxis*)Obj)->bInLocalSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAxis_Statics::NewProp_bInLocalSpace = { "bInLocalSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAxis), &Z_Construct_UScriptStruct_FAxis_Statics::NewProp_bInLocalSpace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAxis_Statics::NewProp_bInLocalSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxis_Statics::NewProp_bInLocalSpace_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAxis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAxis_Statics::NewProp_Axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAxis_Statics::NewProp_bInLocalSpace,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAxis_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
		nullptr,
		&NewStructOps,
		"Axis",
		sizeof(FAxis),
		alignof(FAxis),
		Z_Construct_UScriptStruct_FAxis_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxis_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAxis_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxis_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAxis()
	{
		if (!Z_Registration_Info_UScriptStruct_Axis.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Axis.InnerSingleton, Z_Construct_UScriptStruct_FAxis_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Axis.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_CommonAnimTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_CommonAnimTypes_h_Statics::ScriptStructInfo[] = {
		{ FAxis::StaticStruct, Z_Construct_UScriptStruct_FAxis_Statics::NewStructOps, TEXT("Axis"), &Z_Registration_Info_UScriptStruct_Axis, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAxis), 1038789888U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_CommonAnimTypes_h_2761568957(TEXT("/Script/AnimationCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_CommonAnimTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_CommonAnimTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
