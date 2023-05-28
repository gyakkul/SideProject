// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNode_LinkedAnimLayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_LinkedAnimLayer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UAnimLayerInterface_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_LinkedAnimLayer>() == std::is_polymorphic<FAnimNode_LinkedAnimGraph>(), "USTRUCT FAnimNode_LinkedAnimLayer cannot be polymorphic unless super FAnimNode_LinkedAnimGraph is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_LinkedAnimLayer;
class UScriptStruct* FAnimNode_LinkedAnimLayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_LinkedAnimLayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_LinkedAnimLayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_LinkedAnimLayer"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_LinkedAnimLayer.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_LinkedAnimLayer>()
{
	return FAnimNode_LinkedAnimLayer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Interface_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Interface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Layer_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Layer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_LinkedAnimLayer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_LinkedAnimLayer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::NewProp_Interface_MetaData[] = {
		{ "Comment", "/** \n\x09 * Optional interface. If this is set then this node will only accept (both statically and dynamically) anim instances that implement this interface.\n\x09 * If not set, then this is considered a 'self' layer. This value is set when Layer is changed in the details panel.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_LinkedAnimLayer.h" },
		{ "ToolTip", "Optional interface. If this is set then this node will only accept (both statically and dynamically) anim instances that implement this interface.\nIf not set, then this is considered a 'self' layer. This value is set when Layer is changed in the details panel." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::NewProp_Interface = { "Interface", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_LinkedAnimLayer, Interface), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimLayerInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::NewProp_Interface_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::NewProp_Interface_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::NewProp_Layer_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The layer in the interface to use */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_LinkedAnimLayer.h" },
		{ "ToolTip", "The layer in the interface to use" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_LinkedAnimLayer, Layer), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::NewProp_Layer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::NewProp_Layer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::NewProp_Interface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::NewProp_Layer,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph,
		&NewStructOps,
		"AnimNode_LinkedAnimLayer",
		sizeof(FAnimNode_LinkedAnimLayer),
		alignof(FAnimNode_LinkedAnimLayer),
		Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_LinkedAnimLayer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_LinkedAnimLayer.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_LinkedAnimLayer.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_LinkedAnimLayer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_LinkedAnimLayer_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_LinkedAnimLayer::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer_Statics::NewStructOps, TEXT("AnimNode_LinkedAnimLayer"), &Z_Registration_Info_UScriptStruct_AnimNode_LinkedAnimLayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_LinkedAnimLayer), 469864276U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_LinkedAnimLayer_h_972777843(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_LinkedAnimLayer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_LinkedAnimLayer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
