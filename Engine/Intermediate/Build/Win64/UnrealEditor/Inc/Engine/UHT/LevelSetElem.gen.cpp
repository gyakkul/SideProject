// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/PhysicsEngine/LevelSetElem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSetElem() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKLevelSetElem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKShapeElem();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

static_assert(std::is_polymorphic<FKLevelSetElem>() == std::is_polymorphic<FKShapeElem>(), "USTRUCT FKLevelSetElem cannot be polymorphic unless super FKShapeElem is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KLevelSetElem;
class UScriptStruct* FKLevelSetElem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KLevelSetElem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KLevelSetElem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKLevelSetElem, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("KLevelSetElem"));
	}
	return Z_Registration_Info_UScriptStruct_KLevelSetElem.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FKLevelSetElem>()
{
	return FKLevelSetElem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FKLevelSetElem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLevelSetElem_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/LevelSetElem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKLevelSetElem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKLevelSetElem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLevelSetElem_Statics::NewProp_Transform_MetaData[] = {
		{ "Comment", "/** Transform of this element */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/LevelSetElem.h" },
		{ "ToolTip", "Transform of this element" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKLevelSetElem_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLevelSetElem, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLevelSetElem_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLevelSetElem_Statics::NewProp_Transform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKLevelSetElem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLevelSetElem_Statics::NewProp_Transform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKLevelSetElem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FKShapeElem,
		&NewStructOps,
		"KLevelSetElem",
		sizeof(FKLevelSetElem),
		alignof(FKLevelSetElem),
		Z_Construct_UScriptStruct_FKLevelSetElem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLevelSetElem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKLevelSetElem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLevelSetElem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKLevelSetElem()
	{
		if (!Z_Registration_Info_UScriptStruct_KLevelSetElem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KLevelSetElem.InnerSingleton, Z_Construct_UScriptStruct_FKLevelSetElem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_KLevelSetElem.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_LevelSetElem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_LevelSetElem_h_Statics::ScriptStructInfo[] = {
		{ FKLevelSetElem::StaticStruct, Z_Construct_UScriptStruct_FKLevelSetElem_Statics::NewStructOps, TEXT("KLevelSetElem"), &Z_Registration_Info_UScriptStruct_KLevelSetElem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKLevelSetElem), 2827527819U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_LevelSetElem_h_812352701(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_LevelSetElem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_LevelSetElem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
