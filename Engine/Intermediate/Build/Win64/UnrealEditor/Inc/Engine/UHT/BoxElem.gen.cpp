// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoxElem() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKBoxElem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKShapeElem();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

static_assert(std::is_polymorphic<FKBoxElem>() == std::is_polymorphic<FKShapeElem>(), "USTRUCT FKBoxElem cannot be polymorphic unless super FKShapeElem is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KBoxElem;
class UScriptStruct* FKBoxElem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KBoxElem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KBoxElem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKBoxElem, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("KBoxElem"));
	}
	return Z_Registration_Info_UScriptStruct_KBoxElem.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FKBoxElem>()
{
	return FKBoxElem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FKBoxElem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TM_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TM;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Z;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKBoxElem_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Box shape used for collision */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BoxElem.h" },
		{ "ToolTip", "Box shape used for collision" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKBoxElem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKBoxElem>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKBoxElem_Statics::NewProp_TM_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BoxElem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKBoxElem_Statics::NewProp_TM = { "TM", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKBoxElem, TM_DEPRECATED), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(Z_Construct_UScriptStruct_FKBoxElem_Statics::NewProp_TM_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKBoxElem_Statics::NewProp_TM_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKBoxElem_Statics::NewProp_Orientation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BoxElem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKBoxElem_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKBoxElem, Orientation_DEPRECATED), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FKBoxElem_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKBoxElem_Statics::NewProp_Orientation_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKBoxElem_Statics::NewProp_Center_MetaData[] = {
		{ "Category", "Box" },
		{ "Comment", "/** Position of the box's origin */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BoxElem.h" },
		{ "ToolTip", "Position of the box's origin" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKBoxElem_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKBoxElem, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FKBoxElem_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKBoxElem_Statics::NewProp_Center_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKBoxElem_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Box" },
		{ "ClampMax", "360" },
		{ "ClampMin", "-360" },
		{ "Comment", "/** Rotation of the box */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BoxElem.h" },
		{ "ToolTip", "Rotation of the box" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKBoxElem_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKBoxElem, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FKBoxElem_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKBoxElem_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKBoxElem_Statics::NewProp_X_MetaData[] = {
		{ "Category", "Box" },
		{ "Comment", "/** Extent of the box along the y-axis */" },
		{ "DisplayName", "X Extent" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BoxElem.h" },
		{ "ToolTip", "Extent of the box along the y-axis" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKBoxElem_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKBoxElem, X), METADATA_PARAMS(Z_Construct_UScriptStruct_FKBoxElem_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKBoxElem_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKBoxElem_Statics::NewProp_Y_MetaData[] = {
		{ "Category", "Box" },
		{ "Comment", "/** Extent of the box along the y-axis */" },
		{ "DisplayName", "Y Extent" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BoxElem.h" },
		{ "ToolTip", "Extent of the box along the y-axis" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKBoxElem_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKBoxElem, Y), METADATA_PARAMS(Z_Construct_UScriptStruct_FKBoxElem_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKBoxElem_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKBoxElem_Statics::NewProp_Z_MetaData[] = {
		{ "Category", "Box" },
		{ "Comment", "/** Extent of the box along the z-axis */" },
		{ "DisplayName", "Z Extent" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BoxElem.h" },
		{ "ToolTip", "Extent of the box along the z-axis" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKBoxElem_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKBoxElem, Z), METADATA_PARAMS(Z_Construct_UScriptStruct_FKBoxElem_Statics::NewProp_Z_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKBoxElem_Statics::NewProp_Z_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKBoxElem_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKBoxElem_Statics::NewProp_TM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKBoxElem_Statics::NewProp_Orientation,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKBoxElem_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKBoxElem_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKBoxElem_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKBoxElem_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKBoxElem_Statics::NewProp_Z,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKBoxElem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FKShapeElem,
		&NewStructOps,
		"KBoxElem",
		sizeof(FKBoxElem),
		alignof(FKBoxElem),
		Z_Construct_UScriptStruct_FKBoxElem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKBoxElem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKBoxElem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKBoxElem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKBoxElem()
	{
		if (!Z_Registration_Info_UScriptStruct_KBoxElem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KBoxElem.InnerSingleton, Z_Construct_UScriptStruct_FKBoxElem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_KBoxElem.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BoxElem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BoxElem_h_Statics::ScriptStructInfo[] = {
		{ FKBoxElem::StaticStruct, Z_Construct_UScriptStruct_FKBoxElem_Statics::NewStructOps, TEXT("KBoxElem"), &Z_Registration_Info_UScriptStruct_KBoxElem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKBoxElem), 1119484080U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BoxElem_h_1463789553(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BoxElem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BoxElem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
