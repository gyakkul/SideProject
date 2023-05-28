// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConvexElem() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKConvexElem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKShapeElem();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

static_assert(std::is_polymorphic<FKConvexElem>() == std::is_polymorphic<FKShapeElem>(), "USTRUCT FKConvexElem cannot be polymorphic unless super FKShapeElem is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KConvexElem;
class UScriptStruct* FKConvexElem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KConvexElem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KConvexElem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKConvexElem, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("KConvexElem"));
	}
	return Z_Registration_Info_UScriptStruct_KConvexElem.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FKConvexElem>()
{
	return FKConvexElem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FKConvexElem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IndexData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndexData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IndexData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElemBox_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ElemBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKConvexElem_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** One convex hull, used for simplified collision. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConvexElem.h" },
		{ "ToolTip", "One convex hull, used for simplified collision." },
	};
#endif
	void* Z_Construct_UScriptStruct_FKConvexElem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKConvexElem>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_VertexData_Inner = { "VertexData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_VertexData_MetaData[] = {
		{ "Comment", "/** Array of indices that make up the convex hull. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConvexElem.h" },
		{ "ToolTip", "Array of indices that make up the convex hull." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_VertexData = { "VertexData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKConvexElem, VertexData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_VertexData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_VertexData_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_IndexData_Inner = { "IndexData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_IndexData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConvexElem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_IndexData = { "IndexData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKConvexElem, IndexData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_IndexData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_IndexData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_ElemBox_MetaData[] = {
		{ "Comment", "/** Bounding box of this convex hull. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConvexElem.h" },
		{ "ToolTip", "Bounding box of this convex hull." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_ElemBox = { "ElemBox", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKConvexElem, ElemBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_ElemBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_ElemBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_Transform_MetaData[] = {
		{ "Comment", "/** Transform of this element */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConvexElem.h" },
		{ "ToolTip", "Transform of this element" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKConvexElem, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_Transform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKConvexElem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_VertexData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_VertexData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_IndexData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_IndexData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_ElemBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_Transform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKConvexElem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FKShapeElem,
		&NewStructOps,
		"KConvexElem",
		sizeof(FKConvexElem),
		alignof(FKConvexElem),
		Z_Construct_UScriptStruct_FKConvexElem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKConvexElem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKConvexElem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKConvexElem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKConvexElem()
	{
		if (!Z_Registration_Info_UScriptStruct_KConvexElem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KConvexElem.InnerSingleton, Z_Construct_UScriptStruct_FKConvexElem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_KConvexElem.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConvexElem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConvexElem_h_Statics::ScriptStructInfo[] = {
		{ FKConvexElem::StaticStruct, Z_Construct_UScriptStruct_FKConvexElem_Statics::NewStructOps, TEXT("KConvexElem"), &Z_Registration_Info_UScriptStruct_KConvexElem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKConvexElem), 1323963064U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConvexElem_h_432212315(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConvexElem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConvexElem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
