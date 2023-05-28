// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Animation/AnimNodeConstantData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNodeConstantData() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimClassInterface_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeConstantData();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNodeConstantData;
class UScriptStruct* FAnimNodeConstantData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNodeConstantData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNodeConstantData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNodeConstantData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNodeConstantData"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNodeConstantData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNodeConstantData>()
{
	return FAnimNodeConstantData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNodeConstantData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimClassInterface_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_AnimClassInterface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodeIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNodeConstantData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Any constant class data an anim node uses should be derived from this type.\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimNodeConstantData.h" },
		{ "ToolTip", "Any constant class data an anim node uses should be derived from this type." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNodeConstantData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNodeConstantData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNodeConstantData_Statics::NewProp_AnimClassInterface_MetaData[] = {
		{ "Comment", "/** The class we are part of */" },
		{ "ModuleRelativePath", "Public/Animation/AnimNodeConstantData.h" },
		{ "ToolTip", "The class we are part of" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UScriptStruct_FAnimNodeConstantData_Statics::NewProp_AnimClassInterface = { "AnimClassInterface", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNodeConstantData, AnimClassInterface), Z_Construct_UClass_UAnimClassInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNodeConstantData_Statics::NewProp_AnimClassInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNodeConstantData_Statics::NewProp_AnimClassInterface_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNodeConstantData_Statics::NewProp_NodeIndex_MetaData[] = {
		{ "Comment", "/** \n\x09 * The index of the node for this constant data block in the class that it is held in. \n\x09 * INDEX_NONE if this node is not in a generated class or is per-instance data. \n\x09 */" },
		{ "ModuleRelativePath", "Public/Animation/AnimNodeConstantData.h" },
		{ "ToolTip", "The index of the node for this constant data block in the class that it is held in.\nINDEX_NONE if this node is not in a generated class or is per-instance data." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNodeConstantData_Statics::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNodeConstantData, NodeIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNodeConstantData_Statics::NewProp_NodeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNodeConstantData_Statics::NewProp_NodeIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNodeConstantData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNodeConstantData_Statics::NewProp_AnimClassInterface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNodeConstantData_Statics::NewProp_NodeIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNodeConstantData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimNodeConstantData",
		sizeof(FAnimNodeConstantData),
		alignof(FAnimNodeConstantData),
		Z_Construct_UScriptStruct_FAnimNodeConstantData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNodeConstantData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNodeConstantData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNodeConstantData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeConstantData()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNodeConstantData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNodeConstantData.InnerSingleton, Z_Construct_UScriptStruct_FAnimNodeConstantData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNodeConstantData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNodeConstantData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNodeConstantData_h_Statics::ScriptStructInfo[] = {
		{ FAnimNodeConstantData::StaticStruct, Z_Construct_UScriptStruct_FAnimNodeConstantData_Statics::NewStructOps, TEXT("AnimNodeConstantData"), &Z_Registration_Info_UScriptStruct_AnimNodeConstantData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNodeConstantData), 3900419268U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNodeConstantData_h_3891356502(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNodeConstantData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNodeConstantData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
