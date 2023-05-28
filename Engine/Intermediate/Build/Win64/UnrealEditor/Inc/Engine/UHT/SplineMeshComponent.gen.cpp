// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Components/SplineMeshComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSplineMeshComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESplineMeshAxis();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSplineMeshInstanceData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSplineMeshParams();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESplineMeshAxis;
	static UEnum* ESplineMeshAxis_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESplineMeshAxis.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESplineMeshAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESplineMeshAxis, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ESplineMeshAxis"));
		}
		return Z_Registration_Info_UEnum_ESplineMeshAxis.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ESplineMeshAxis::Type>()
	{
		return ESplineMeshAxis_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ESplineMeshAxis_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ESplineMeshAxis_Statics::Enumerators[] = {
		{ "ESplineMeshAxis::X", (int64)ESplineMeshAxis::X },
		{ "ESplineMeshAxis::Y", (int64)ESplineMeshAxis::Y },
		{ "ESplineMeshAxis::Z", (int64)ESplineMeshAxis::Z },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ESplineMeshAxis_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "X.Name", "ESplineMeshAxis::X" },
		{ "Y.Name", "ESplineMeshAxis::Y" },
		{ "Z.Name", "ESplineMeshAxis::Z" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ESplineMeshAxis_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ESplineMeshAxis",
		"ESplineMeshAxis::Type",
		Z_Construct_UEnum_Engine_ESplineMeshAxis_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESplineMeshAxis_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ESplineMeshAxis_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESplineMeshAxis_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ESplineMeshAxis()
	{
		if (!Z_Registration_Info_UEnum_ESplineMeshAxis.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESplineMeshAxis.InnerSingleton, Z_Construct_UEnum_Engine_ESplineMeshAxis_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESplineMeshAxis.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SplineMeshParams;
class UScriptStruct* FSplineMeshParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SplineMeshParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SplineMeshParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSplineMeshParams, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SplineMeshParams"));
	}
	return Z_Registration_Info_UScriptStruct_SplineMeshParams.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSplineMeshParams>()
{
	return FSplineMeshParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSplineMeshParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartPos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartPos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartTangent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartTangent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartRoll_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartRoll;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndPos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndPos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndTangent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndTangent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndRoll_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndRoll;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineMeshParams_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * Structure that holds info about spline, passed to renderer to deform UStaticMesh.\n * Also used by Lightmass, so be sure to update Lightmass::FSplineMeshParams and the static lighting code if this changes!\n */" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Structure that holds info about spline, passed to renderer to deform UStaticMesh.\nAlso used by Lightmass, so be sure to update Lightmass::FSplineMeshParams and the static lighting code if this changes!" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSplineMeshParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_StartPos_MetaData[] = {
		{ "Category", "SplineMesh" },
		{ "Comment", "/** Start location of spline, in component space. */" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Start location of spline, in component space." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_StartPos = { "StartPos", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSplineMeshParams, StartPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_StartPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_StartPos_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_StartTangent_MetaData[] = {
		{ "Category", "SplineMesh" },
		{ "Comment", "/** Start tangent of spline, in component space. */" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Start tangent of spline, in component space." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_StartTangent = { "StartTangent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSplineMeshParams, StartTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_StartTangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_StartTangent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_StartScale_MetaData[] = {
		{ "Category", "SplineMesh" },
		{ "Comment", "/** X and Y scale applied to mesh at start of spline. */" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "X and Y scale applied to mesh at start of spline." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_StartScale = { "StartScale", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSplineMeshParams, StartScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_StartScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_StartScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_StartRoll_MetaData[] = {
		{ "Category", "SplineMesh" },
		{ "Comment", "/** Roll around spline applied at start */" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Roll around spline applied at start" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_StartRoll = { "StartRoll", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSplineMeshParams, StartRoll), METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_StartRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_StartRoll_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_StartOffset_MetaData[] = {
		{ "Category", "SplineMesh" },
		{ "Comment", "/** Starting offset of the mesh from the spline, in component space. */" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Starting offset of the mesh from the spline, in component space." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_StartOffset = { "StartOffset", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSplineMeshParams, StartOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_StartOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_StartOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_EndPos_MetaData[] = {
		{ "Category", "SplineMesh" },
		{ "Comment", "/** End location of spline, in component space. */" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "End location of spline, in component space." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_EndPos = { "EndPos", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSplineMeshParams, EndPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_EndPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_EndPos_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_EndScale_MetaData[] = {
		{ "Category", "SplineMesh" },
		{ "Comment", "/** X and Y scale applied to mesh at end of spline. */" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "X and Y scale applied to mesh at end of spline." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_EndScale = { "EndScale", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSplineMeshParams, EndScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_EndScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_EndScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_EndTangent_MetaData[] = {
		{ "Category", "SplineMesh" },
		{ "Comment", "/** End tangent of spline, in component space. */" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "End tangent of spline, in component space." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_EndTangent = { "EndTangent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSplineMeshParams, EndTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_EndTangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_EndTangent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_EndRoll_MetaData[] = {
		{ "Category", "SplineMesh" },
		{ "Comment", "/** Roll around spline applied at end. */" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Roll around spline applied at end." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_EndRoll = { "EndRoll", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSplineMeshParams, EndRoll), METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_EndRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_EndRoll_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_EndOffset_MetaData[] = {
		{ "Category", "SplineMesh" },
		{ "Comment", "/** Ending offset of the mesh from the spline, in component space. */" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Ending offset of the mesh from the spline, in component space." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_EndOffset = { "EndOffset", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSplineMeshParams, EndOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_EndOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_EndOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSplineMeshParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_StartPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_StartTangent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_StartScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_StartRoll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_StartOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_EndPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_EndScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_EndTangent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_EndRoll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewProp_EndOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSplineMeshParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SplineMeshParams",
		sizeof(FSplineMeshParams),
		alignof(FSplineMeshParams),
		Z_Construct_UScriptStruct_FSplineMeshParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineMeshParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineMeshParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineMeshParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSplineMeshParams()
	{
		if (!Z_Registration_Info_UScriptStruct_SplineMeshParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SplineMeshParams.InnerSingleton, Z_Construct_UScriptStruct_FSplineMeshParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SplineMeshParams.InnerSingleton;
	}
	DEFINE_FUNCTION(USplineMeshComponent::execSetBoundaryMax)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InBoundaryMax);
		P_GET_UBOOL(Z_Param_bUpdateMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBoundaryMax(Z_Param_InBoundaryMax,Z_Param_bUpdateMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineMeshComponent::execGetBoundaryMax)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBoundaryMax();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineMeshComponent::execSetBoundaryMin)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InBoundaryMin);
		P_GET_UBOOL(Z_Param_bUpdateMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBoundaryMin(Z_Param_InBoundaryMin,Z_Param_bUpdateMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineMeshComponent::execGetBoundaryMin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBoundaryMin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineMeshComponent::execSetSplineUpDir)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InSplineUpDir);
		P_GET_UBOOL(Z_Param_bUpdateMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSplineUpDir(Z_Param_Out_InSplineUpDir,Z_Param_bUpdateMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineMeshComponent::execGetSplineUpDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetSplineUpDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineMeshComponent::execSetForwardAxis)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InForwardAxis);
		P_GET_UBOOL(Z_Param_bUpdateMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetForwardAxis(ESplineMeshAxis::Type(Z_Param_InForwardAxis),Z_Param_bUpdateMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineMeshComponent::execGetForwardAxis)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ESplineMeshAxis::Type>*)Z_Param__Result=P_THIS->GetForwardAxis();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineMeshComponent::execSetEndOffset)
	{
		P_GET_STRUCT(FVector2D,Z_Param_EndOffset);
		P_GET_UBOOL(Z_Param_bUpdateMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEndOffset(Z_Param_EndOffset,Z_Param_bUpdateMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineMeshComponent::execGetEndOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetEndOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineMeshComponent::execSetEndRoll)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_EndRoll);
		P_GET_UBOOL(Z_Param_bUpdateMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEndRoll(Z_Param_EndRoll,Z_Param_bUpdateMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineMeshComponent::execGetEndRoll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEndRoll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineMeshComponent::execSetEndScale)
	{
		P_GET_STRUCT(FVector2D,Z_Param_EndScale);
		P_GET_UBOOL(Z_Param_bUpdateMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEndScale(Z_Param_EndScale,Z_Param_bUpdateMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineMeshComponent::execGetEndScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetEndScale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineMeshComponent::execSetStartOffset)
	{
		P_GET_STRUCT(FVector2D,Z_Param_StartOffset);
		P_GET_UBOOL(Z_Param_bUpdateMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStartOffset(Z_Param_StartOffset,Z_Param_bUpdateMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineMeshComponent::execGetStartOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetStartOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineMeshComponent::execSetStartRoll)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartRoll);
		P_GET_UBOOL(Z_Param_bUpdateMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStartRoll(Z_Param_StartRoll,Z_Param_bUpdateMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineMeshComponent::execGetStartRoll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetStartRoll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineMeshComponent::execSetStartScale)
	{
		P_GET_STRUCT(FVector2D,Z_Param_StartScale);
		P_GET_UBOOL(Z_Param_bUpdateMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStartScale(Z_Param_StartScale,Z_Param_bUpdateMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineMeshComponent::execGetStartScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetStartScale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineMeshComponent::execSetStartAndEnd)
	{
		P_GET_STRUCT(FVector,Z_Param_StartPos);
		P_GET_STRUCT(FVector,Z_Param_StartTangent);
		P_GET_STRUCT(FVector,Z_Param_EndPos);
		P_GET_STRUCT(FVector,Z_Param_EndTangent);
		P_GET_UBOOL(Z_Param_bUpdateMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStartAndEnd(Z_Param_StartPos,Z_Param_StartTangent,Z_Param_EndPos,Z_Param_EndTangent,Z_Param_bUpdateMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineMeshComponent::execSetEndTangent)
	{
		P_GET_STRUCT(FVector,Z_Param_EndTangent);
		P_GET_UBOOL(Z_Param_bUpdateMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEndTangent(Z_Param_EndTangent,Z_Param_bUpdateMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineMeshComponent::execGetEndTangent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetEndTangent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineMeshComponent::execSetEndPosition)
	{
		P_GET_STRUCT(FVector,Z_Param_EndPos);
		P_GET_UBOOL(Z_Param_bUpdateMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEndPosition(Z_Param_EndPos,Z_Param_bUpdateMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineMeshComponent::execGetEndPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetEndPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineMeshComponent::execSetStartTangent)
	{
		P_GET_STRUCT(FVector,Z_Param_StartTangent);
		P_GET_UBOOL(Z_Param_bUpdateMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStartTangent(Z_Param_StartTangent,Z_Param_bUpdateMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineMeshComponent::execGetStartTangent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetStartTangent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineMeshComponent::execSetStartPosition)
	{
		P_GET_STRUCT(FVector,Z_Param_StartPos);
		P_GET_UBOOL(Z_Param_bUpdateMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStartPosition(Z_Param_StartPos,Z_Param_bUpdateMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineMeshComponent::execGetStartPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetStartPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USplineMeshComponent::execUpdateMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateMesh();
		P_NATIVE_END;
	}
	void USplineMeshComponent::GetbNeverNeedsCookedCollisionData_WrapperImpl(const void* Object, void* OutValue)
	{
		const USplineMeshComponent* Obj = (const USplineMeshComponent*)Object;
		bool& Result = *(bool*)OutValue;
		Result = (bool)Obj->GetbNeverNeedsCookedCollisionData();
	}
	void USplineMeshComponent::SetbNeverNeedsCookedCollisionData_WrapperImpl(void* Object, const void* InValue)
	{
		USplineMeshComponent* Obj = (USplineMeshComponent*)Object;
		bool& Value = *(bool*)InValue;
		Obj->SetbNeverNeedsCookedCollisionData(Value);
	}
	void USplineMeshComponent::StaticRegisterNativesUSplineMeshComponent()
	{
		UClass* Class = USplineMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBoundaryMax", &USplineMeshComponent::execGetBoundaryMax },
			{ "GetBoundaryMin", &USplineMeshComponent::execGetBoundaryMin },
			{ "GetEndOffset", &USplineMeshComponent::execGetEndOffset },
			{ "GetEndPosition", &USplineMeshComponent::execGetEndPosition },
			{ "GetEndRoll", &USplineMeshComponent::execGetEndRoll },
			{ "GetEndScale", &USplineMeshComponent::execGetEndScale },
			{ "GetEndTangent", &USplineMeshComponent::execGetEndTangent },
			{ "GetForwardAxis", &USplineMeshComponent::execGetForwardAxis },
			{ "GetSplineUpDir", &USplineMeshComponent::execGetSplineUpDir },
			{ "GetStartOffset", &USplineMeshComponent::execGetStartOffset },
			{ "GetStartPosition", &USplineMeshComponent::execGetStartPosition },
			{ "GetStartRoll", &USplineMeshComponent::execGetStartRoll },
			{ "GetStartScale", &USplineMeshComponent::execGetStartScale },
			{ "GetStartTangent", &USplineMeshComponent::execGetStartTangent },
			{ "SetBoundaryMax", &USplineMeshComponent::execSetBoundaryMax },
			{ "SetBoundaryMin", &USplineMeshComponent::execSetBoundaryMin },
			{ "SetEndOffset", &USplineMeshComponent::execSetEndOffset },
			{ "SetEndPosition", &USplineMeshComponent::execSetEndPosition },
			{ "SetEndRoll", &USplineMeshComponent::execSetEndRoll },
			{ "SetEndScale", &USplineMeshComponent::execSetEndScale },
			{ "SetEndTangent", &USplineMeshComponent::execSetEndTangent },
			{ "SetForwardAxis", &USplineMeshComponent::execSetForwardAxis },
			{ "SetSplineUpDir", &USplineMeshComponent::execSetSplineUpDir },
			{ "SetStartAndEnd", &USplineMeshComponent::execSetStartAndEnd },
			{ "SetStartOffset", &USplineMeshComponent::execSetStartOffset },
			{ "SetStartPosition", &USplineMeshComponent::execSetStartPosition },
			{ "SetStartRoll", &USplineMeshComponent::execSetStartRoll },
			{ "SetStartScale", &USplineMeshComponent::execSetStartScale },
			{ "SetStartTangent", &USplineMeshComponent::execSetStartTangent },
			{ "UpdateMesh", &USplineMeshComponent::execUpdateMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMax_Statics
	{
		struct SplineMeshComponent_eventGetBoundaryMax_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMax_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventGetBoundaryMax_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMax_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMax_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMax_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "Comment", "/** Get the boundary max */" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Get the boundary max" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMax_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, nullptr, "GetBoundaryMax", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMax_Statics::SplineMeshComponent_eventGetBoundaryMax_Parms), Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMax_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMax_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMax_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMax_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMax()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMax_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMin_Statics
	{
		struct SplineMeshComponent_eventGetBoundaryMin_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventGetBoundaryMin_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMin_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "Comment", "/** Get the boundary min */" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Get the boundary min" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, nullptr, "GetBoundaryMin", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMin_Statics::SplineMeshComponent_eventGetBoundaryMin_Parms), Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_GetEndOffset_Statics
	{
		struct SplineMeshComponent_eventGetEndOffset_Parms
		{
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineMeshComponent_GetEndOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventGetEndOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_GetEndOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_GetEndOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_GetEndOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "Comment", "/** Get the end offset */" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Get the end offset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_GetEndOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, nullptr, "GetEndOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineMeshComponent_GetEndOffset_Statics::SplineMeshComponent_eventGetEndOffset_Parms), Z_Construct_UFunction_USplineMeshComponent_GetEndOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetEndOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_GetEndOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetEndOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_GetEndOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_GetEndOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_GetEndPosition_Statics
	{
		struct SplineMeshComponent_eventGetEndPosition_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineMeshComponent_GetEndPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventGetEndPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_GetEndPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_GetEndPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_GetEndPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "Comment", "/** Get the end position of spline in local space */" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Get the end position of spline in local space" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_GetEndPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, nullptr, "GetEndPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineMeshComponent_GetEndPosition_Statics::SplineMeshComponent_eventGetEndPosition_Parms), Z_Construct_UFunction_USplineMeshComponent_GetEndPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetEndPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_GetEndPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetEndPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_GetEndPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_GetEndPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_GetEndRoll_Statics
	{
		struct SplineMeshComponent_eventGetEndRoll_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineMeshComponent_GetEndRoll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventGetEndRoll_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_GetEndRoll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_GetEndRoll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_GetEndRoll_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "Comment", "/** Get the end roll */" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Get the end roll" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_GetEndRoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, nullptr, "GetEndRoll", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineMeshComponent_GetEndRoll_Statics::SplineMeshComponent_eventGetEndRoll_Parms), Z_Construct_UFunction_USplineMeshComponent_GetEndRoll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetEndRoll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_GetEndRoll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetEndRoll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_GetEndRoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_GetEndRoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_GetEndScale_Statics
	{
		struct SplineMeshComponent_eventGetEndScale_Parms
		{
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineMeshComponent_GetEndScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventGetEndScale_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_GetEndScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_GetEndScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_GetEndScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "Comment", "/** Get the end scaling */" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Get the end scaling" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_GetEndScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, nullptr, "GetEndScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineMeshComponent_GetEndScale_Statics::SplineMeshComponent_eventGetEndScale_Parms), Z_Construct_UFunction_USplineMeshComponent_GetEndScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetEndScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_GetEndScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetEndScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_GetEndScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_GetEndScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_GetEndTangent_Statics
	{
		struct SplineMeshComponent_eventGetEndTangent_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineMeshComponent_GetEndTangent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventGetEndTangent_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_GetEndTangent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_GetEndTangent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_GetEndTangent_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "Comment", "/** Get the end tangent vector of spline in local space */" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Get the end tangent vector of spline in local space" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_GetEndTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, nullptr, "GetEndTangent", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineMeshComponent_GetEndTangent_Statics::SplineMeshComponent_eventGetEndTangent_Parms), Z_Construct_UFunction_USplineMeshComponent_GetEndTangent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetEndTangent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_GetEndTangent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetEndTangent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_GetEndTangent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_GetEndTangent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_GetForwardAxis_Statics
	{
		struct SplineMeshComponent_eventGetForwardAxis_Parms
		{
			TEnumAsByte<ESplineMeshAxis::Type> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineMeshComponent_GetForwardAxis_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventGetForwardAxis_Parms, ReturnValue), Z_Construct_UEnum_Engine_ESplineMeshAxis, METADATA_PARAMS(nullptr, 0) }; // 1317892391
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_GetForwardAxis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_GetForwardAxis_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_GetForwardAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "Comment", "/** Get the forward axis */" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Get the forward axis" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_GetForwardAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, nullptr, "GetForwardAxis", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineMeshComponent_GetForwardAxis_Statics::SplineMeshComponent_eventGetForwardAxis_Parms), Z_Construct_UFunction_USplineMeshComponent_GetForwardAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetForwardAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_GetForwardAxis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetForwardAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_GetForwardAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_GetForwardAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_GetSplineUpDir_Statics
	{
		struct SplineMeshComponent_eventGetSplineUpDir_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineMeshComponent_GetSplineUpDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventGetSplineUpDir_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_GetSplineUpDir_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_GetSplineUpDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_GetSplineUpDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "Comment", "/** Get the spline up direction */" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Get the spline up direction" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_GetSplineUpDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, nullptr, "GetSplineUpDir", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineMeshComponent_GetSplineUpDir_Statics::SplineMeshComponent_eventGetSplineUpDir_Parms), Z_Construct_UFunction_USplineMeshComponent_GetSplineUpDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetSplineUpDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_GetSplineUpDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetSplineUpDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_GetSplineUpDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_GetSplineUpDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_GetStartOffset_Statics
	{
		struct SplineMeshComponent_eventGetStartOffset_Parms
		{
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineMeshComponent_GetStartOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventGetStartOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_GetStartOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_GetStartOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_GetStartOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "Comment", "/** Get the start offset */" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Get the start offset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_GetStartOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, nullptr, "GetStartOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineMeshComponent_GetStartOffset_Statics::SplineMeshComponent_eventGetStartOffset_Parms), Z_Construct_UFunction_USplineMeshComponent_GetStartOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetStartOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_GetStartOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetStartOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_GetStartOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_GetStartOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_GetStartPosition_Statics
	{
		struct SplineMeshComponent_eventGetStartPosition_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineMeshComponent_GetStartPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventGetStartPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_GetStartPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_GetStartPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_GetStartPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "Comment", "/** Get the start position of spline in local space */" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Get the start position of spline in local space" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_GetStartPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, nullptr, "GetStartPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineMeshComponent_GetStartPosition_Statics::SplineMeshComponent_eventGetStartPosition_Parms), Z_Construct_UFunction_USplineMeshComponent_GetStartPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetStartPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_GetStartPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetStartPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_GetStartPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_GetStartPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_GetStartRoll_Statics
	{
		struct SplineMeshComponent_eventGetStartRoll_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineMeshComponent_GetStartRoll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventGetStartRoll_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_GetStartRoll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_GetStartRoll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_GetStartRoll_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "Comment", "/** Get the start roll */" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Get the start roll" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_GetStartRoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, nullptr, "GetStartRoll", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineMeshComponent_GetStartRoll_Statics::SplineMeshComponent_eventGetStartRoll_Parms), Z_Construct_UFunction_USplineMeshComponent_GetStartRoll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetStartRoll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_GetStartRoll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetStartRoll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_GetStartRoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_GetStartRoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_GetStartScale_Statics
	{
		struct SplineMeshComponent_eventGetStartScale_Parms
		{
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineMeshComponent_GetStartScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventGetStartScale_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_GetStartScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_GetStartScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_GetStartScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "Comment", "/** Get the start scaling */" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Get the start scaling" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_GetStartScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, nullptr, "GetStartScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineMeshComponent_GetStartScale_Statics::SplineMeshComponent_eventGetStartScale_Parms), Z_Construct_UFunction_USplineMeshComponent_GetStartScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetStartScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_GetStartScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetStartScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_GetStartScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_GetStartScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_GetStartTangent_Statics
	{
		struct SplineMeshComponent_eventGetStartTangent_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineMeshComponent_GetStartTangent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventGetStartTangent_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_GetStartTangent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_GetStartTangent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_GetStartTangent_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "Comment", "/** Get the start tangent vector of spline in local space */" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Get the start tangent vector of spline in local space" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_GetStartTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, nullptr, "GetStartTangent", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineMeshComponent_GetStartTangent_Statics::SplineMeshComponent_eventGetStartTangent_Parms), Z_Construct_UFunction_USplineMeshComponent_GetStartTangent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetStartTangent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_GetStartTangent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_GetStartTangent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_GetStartTangent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_GetStartTangent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMax_Statics
	{
		struct SplineMeshComponent_eventSetBoundaryMax_Parms
		{
			float InBoundaryMax;
			bool bUpdateMesh;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InBoundaryMax;
		static void NewProp_bUpdateMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMax_Statics::NewProp_InBoundaryMax = { "InBoundaryMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetBoundaryMax_Parms, InBoundaryMax), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMax_Statics::NewProp_bUpdateMesh_SetBit(void* Obj)
	{
		((SplineMeshComponent_eventSetBoundaryMax_Parms*)Obj)->bUpdateMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMax_Statics::NewProp_bUpdateMesh = { "bUpdateMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineMeshComponent_eventSetBoundaryMax_Parms), &Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMax_Statics::NewProp_bUpdateMesh_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMax_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMax_Statics::NewProp_InBoundaryMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMax_Statics::NewProp_bUpdateMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMax_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "Comment", "/** Set the boundary max */" },
		{ "CPP_Default_bUpdateMesh", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Set the boundary max" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMax_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, nullptr, "SetBoundaryMax", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMax_Statics::SplineMeshComponent_eventSetBoundaryMax_Parms), Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMax_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMax_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMax_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMax_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMax()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMax_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMin_Statics
	{
		struct SplineMeshComponent_eventSetBoundaryMin_Parms
		{
			float InBoundaryMin;
			bool bUpdateMesh;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InBoundaryMin;
		static void NewProp_bUpdateMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMin_Statics::NewProp_InBoundaryMin = { "InBoundaryMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetBoundaryMin_Parms, InBoundaryMin), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMin_Statics::NewProp_bUpdateMesh_SetBit(void* Obj)
	{
		((SplineMeshComponent_eventSetBoundaryMin_Parms*)Obj)->bUpdateMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMin_Statics::NewProp_bUpdateMesh = { "bUpdateMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineMeshComponent_eventSetBoundaryMin_Parms), &Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMin_Statics::NewProp_bUpdateMesh_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMin_Statics::NewProp_InBoundaryMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMin_Statics::NewProp_bUpdateMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMin_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "Comment", "/** Set the boundary min */" },
		{ "CPP_Default_bUpdateMesh", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Set the boundary min" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, nullptr, "SetBoundaryMin", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMin_Statics::SplineMeshComponent_eventSetBoundaryMin_Parms), Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_SetEndOffset_Statics
	{
		struct SplineMeshComponent_eventSetEndOffset_Parms
		{
			FVector2D EndOffset;
			bool bUpdateMesh;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndOffset;
		static void NewProp_bUpdateMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetEndOffset_Statics::NewProp_EndOffset = { "EndOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetEndOffset_Parms, EndOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USplineMeshComponent_SetEndOffset_Statics::NewProp_bUpdateMesh_SetBit(void* Obj)
	{
		((SplineMeshComponent_eventSetEndOffset_Parms*)Obj)->bUpdateMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetEndOffset_Statics::NewProp_bUpdateMesh = { "bUpdateMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineMeshComponent_eventSetEndOffset_Parms), &Z_Construct_UFunction_USplineMeshComponent_SetEndOffset_Statics::NewProp_bUpdateMesh_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_SetEndOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetEndOffset_Statics::NewProp_EndOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetEndOffset_Statics::NewProp_bUpdateMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_SetEndOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "Comment", "/** Set the end offset */" },
		{ "CPP_Default_bUpdateMesh", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Set the end offset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_SetEndOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, nullptr, "SetEndOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineMeshComponent_SetEndOffset_Statics::SplineMeshComponent_eventSetEndOffset_Parms), Z_Construct_UFunction_USplineMeshComponent_SetEndOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetEndOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_SetEndOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetEndOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_SetEndOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_SetEndOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_SetEndPosition_Statics
	{
		struct SplineMeshComponent_eventSetEndPosition_Parms
		{
			FVector EndPos;
			bool bUpdateMesh;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndPos;
		static void NewProp_bUpdateMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetEndPosition_Statics::NewProp_EndPos = { "EndPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetEndPosition_Parms, EndPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USplineMeshComponent_SetEndPosition_Statics::NewProp_bUpdateMesh_SetBit(void* Obj)
	{
		((SplineMeshComponent_eventSetEndPosition_Parms*)Obj)->bUpdateMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetEndPosition_Statics::NewProp_bUpdateMesh = { "bUpdateMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineMeshComponent_eventSetEndPosition_Parms), &Z_Construct_UFunction_USplineMeshComponent_SetEndPosition_Statics::NewProp_bUpdateMesh_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_SetEndPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetEndPosition_Statics::NewProp_EndPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetEndPosition_Statics::NewProp_bUpdateMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_SetEndPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "Comment", "/** Set the end position of spline in local space */" },
		{ "CPP_Default_bUpdateMesh", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Set the end position of spline in local space" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_SetEndPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, nullptr, "SetEndPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineMeshComponent_SetEndPosition_Statics::SplineMeshComponent_eventSetEndPosition_Parms), Z_Construct_UFunction_USplineMeshComponent_SetEndPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetEndPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_SetEndPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetEndPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_SetEndPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_SetEndPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_SetEndRoll_Statics
	{
		struct SplineMeshComponent_eventSetEndRoll_Parms
		{
			float EndRoll;
			bool bUpdateMesh;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndRoll;
		static void NewProp_bUpdateMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetEndRoll_Statics::NewProp_EndRoll = { "EndRoll", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetEndRoll_Parms, EndRoll), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USplineMeshComponent_SetEndRoll_Statics::NewProp_bUpdateMesh_SetBit(void* Obj)
	{
		((SplineMeshComponent_eventSetEndRoll_Parms*)Obj)->bUpdateMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetEndRoll_Statics::NewProp_bUpdateMesh = { "bUpdateMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineMeshComponent_eventSetEndRoll_Parms), &Z_Construct_UFunction_USplineMeshComponent_SetEndRoll_Statics::NewProp_bUpdateMesh_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_SetEndRoll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetEndRoll_Statics::NewProp_EndRoll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetEndRoll_Statics::NewProp_bUpdateMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_SetEndRoll_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "Comment", "/** Set the end roll */" },
		{ "CPP_Default_bUpdateMesh", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Set the end roll" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_SetEndRoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, nullptr, "SetEndRoll", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineMeshComponent_SetEndRoll_Statics::SplineMeshComponent_eventSetEndRoll_Parms), Z_Construct_UFunction_USplineMeshComponent_SetEndRoll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetEndRoll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_SetEndRoll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetEndRoll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_SetEndRoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_SetEndRoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_SetEndScale_Statics
	{
		struct SplineMeshComponent_eventSetEndScale_Parms
		{
			FVector2D EndScale;
			bool bUpdateMesh;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndScale;
		static void NewProp_bUpdateMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetEndScale_Statics::NewProp_EndScale = { "EndScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetEndScale_Parms, EndScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USplineMeshComponent_SetEndScale_Statics::NewProp_bUpdateMesh_SetBit(void* Obj)
	{
		((SplineMeshComponent_eventSetEndScale_Parms*)Obj)->bUpdateMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetEndScale_Statics::NewProp_bUpdateMesh = { "bUpdateMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineMeshComponent_eventSetEndScale_Parms), &Z_Construct_UFunction_USplineMeshComponent_SetEndScale_Statics::NewProp_bUpdateMesh_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_SetEndScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetEndScale_Statics::NewProp_EndScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetEndScale_Statics::NewProp_bUpdateMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_SetEndScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "Comment", "/** Set the end scaling */" },
		{ "CPP_Default_bUpdateMesh", "true" },
		{ "CPP_Default_EndScale", "(X=1.000,Y=1.000)" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Set the end scaling" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_SetEndScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, nullptr, "SetEndScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineMeshComponent_SetEndScale_Statics::SplineMeshComponent_eventSetEndScale_Parms), Z_Construct_UFunction_USplineMeshComponent_SetEndScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetEndScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_SetEndScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetEndScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_SetEndScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_SetEndScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_SetEndTangent_Statics
	{
		struct SplineMeshComponent_eventSetEndTangent_Parms
		{
			FVector EndTangent;
			bool bUpdateMesh;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndTangent;
		static void NewProp_bUpdateMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetEndTangent_Statics::NewProp_EndTangent = { "EndTangent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetEndTangent_Parms, EndTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USplineMeshComponent_SetEndTangent_Statics::NewProp_bUpdateMesh_SetBit(void* Obj)
	{
		((SplineMeshComponent_eventSetEndTangent_Parms*)Obj)->bUpdateMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetEndTangent_Statics::NewProp_bUpdateMesh = { "bUpdateMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineMeshComponent_eventSetEndTangent_Parms), &Z_Construct_UFunction_USplineMeshComponent_SetEndTangent_Statics::NewProp_bUpdateMesh_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_SetEndTangent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetEndTangent_Statics::NewProp_EndTangent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetEndTangent_Statics::NewProp_bUpdateMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_SetEndTangent_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "Comment", "/** Set the end tangent vector of spline in local space */" },
		{ "CPP_Default_bUpdateMesh", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Set the end tangent vector of spline in local space" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_SetEndTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, nullptr, "SetEndTangent", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineMeshComponent_SetEndTangent_Statics::SplineMeshComponent_eventSetEndTangent_Parms), Z_Construct_UFunction_USplineMeshComponent_SetEndTangent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetEndTangent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_SetEndTangent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetEndTangent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_SetEndTangent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_SetEndTangent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_SetForwardAxis_Statics
	{
		struct SplineMeshComponent_eventSetForwardAxis_Parms
		{
			TEnumAsByte<ESplineMeshAxis::Type> InForwardAxis;
			bool bUpdateMesh;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InForwardAxis;
		static void NewProp_bUpdateMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USplineMeshComponent_SetForwardAxis_Statics::NewProp_InForwardAxis = { "InForwardAxis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetForwardAxis_Parms, InForwardAxis), Z_Construct_UEnum_Engine_ESplineMeshAxis, METADATA_PARAMS(nullptr, 0) }; // 1317892391
	void Z_Construct_UFunction_USplineMeshComponent_SetForwardAxis_Statics::NewProp_bUpdateMesh_SetBit(void* Obj)
	{
		((SplineMeshComponent_eventSetForwardAxis_Parms*)Obj)->bUpdateMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetForwardAxis_Statics::NewProp_bUpdateMesh = { "bUpdateMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineMeshComponent_eventSetForwardAxis_Parms), &Z_Construct_UFunction_USplineMeshComponent_SetForwardAxis_Statics::NewProp_bUpdateMesh_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_SetForwardAxis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetForwardAxis_Statics::NewProp_InForwardAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetForwardAxis_Statics::NewProp_bUpdateMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_SetForwardAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "Comment", "/** Set the forward axis */" },
		{ "CPP_Default_bUpdateMesh", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Set the forward axis" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_SetForwardAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, nullptr, "SetForwardAxis", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineMeshComponent_SetForwardAxis_Statics::SplineMeshComponent_eventSetForwardAxis_Parms), Z_Construct_UFunction_USplineMeshComponent_SetForwardAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetForwardAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_SetForwardAxis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetForwardAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_SetForwardAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_SetForwardAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_SetSplineUpDir_Statics
	{
		struct SplineMeshComponent_eventSetSplineUpDir_Parms
		{
			FVector InSplineUpDir;
			bool bUpdateMesh;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSplineUpDir_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSplineUpDir;
		static void NewProp_bUpdateMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_SetSplineUpDir_Statics::NewProp_InSplineUpDir_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetSplineUpDir_Statics::NewProp_InSplineUpDir = { "InSplineUpDir", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetSplineUpDir_Parms, InSplineUpDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_SetSplineUpDir_Statics::NewProp_InSplineUpDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetSplineUpDir_Statics::NewProp_InSplineUpDir_MetaData)) };
	void Z_Construct_UFunction_USplineMeshComponent_SetSplineUpDir_Statics::NewProp_bUpdateMesh_SetBit(void* Obj)
	{
		((SplineMeshComponent_eventSetSplineUpDir_Parms*)Obj)->bUpdateMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetSplineUpDir_Statics::NewProp_bUpdateMesh = { "bUpdateMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineMeshComponent_eventSetSplineUpDir_Parms), &Z_Construct_UFunction_USplineMeshComponent_SetSplineUpDir_Statics::NewProp_bUpdateMesh_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_SetSplineUpDir_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetSplineUpDir_Statics::NewProp_InSplineUpDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetSplineUpDir_Statics::NewProp_bUpdateMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_SetSplineUpDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "Comment", "/** Set the spline up direction */" },
		{ "CPP_Default_bUpdateMesh", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Set the spline up direction" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_SetSplineUpDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, nullptr, "SetSplineUpDir", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineMeshComponent_SetSplineUpDir_Statics::SplineMeshComponent_eventSetSplineUpDir_Parms), Z_Construct_UFunction_USplineMeshComponent_SetSplineUpDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetSplineUpDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_SetSplineUpDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetSplineUpDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_SetSplineUpDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_SetSplineUpDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_SetStartAndEnd_Statics
	{
		struct SplineMeshComponent_eventSetStartAndEnd_Parms
		{
			FVector StartPos;
			FVector StartTangent;
			FVector EndPos;
			FVector EndTangent;
			bool bUpdateMesh;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartPos;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartTangent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndPos;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndTangent;
		static void NewProp_bUpdateMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetStartAndEnd_Statics::NewProp_StartPos = { "StartPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetStartAndEnd_Parms, StartPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetStartAndEnd_Statics::NewProp_StartTangent = { "StartTangent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetStartAndEnd_Parms, StartTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetStartAndEnd_Statics::NewProp_EndPos = { "EndPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetStartAndEnd_Parms, EndPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetStartAndEnd_Statics::NewProp_EndTangent = { "EndTangent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetStartAndEnd_Parms, EndTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USplineMeshComponent_SetStartAndEnd_Statics::NewProp_bUpdateMesh_SetBit(void* Obj)
	{
		((SplineMeshComponent_eventSetStartAndEnd_Parms*)Obj)->bUpdateMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetStartAndEnd_Statics::NewProp_bUpdateMesh = { "bUpdateMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineMeshComponent_eventSetStartAndEnd_Parms), &Z_Construct_UFunction_USplineMeshComponent_SetStartAndEnd_Statics::NewProp_bUpdateMesh_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_SetStartAndEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetStartAndEnd_Statics::NewProp_StartPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetStartAndEnd_Statics::NewProp_StartTangent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetStartAndEnd_Statics::NewProp_EndPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetStartAndEnd_Statics::NewProp_EndTangent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetStartAndEnd_Statics::NewProp_bUpdateMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_SetStartAndEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "Comment", "/** Set the start and end, position and tangent, all in local space */" },
		{ "CPP_Default_bUpdateMesh", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Set the start and end, position and tangent, all in local space" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_SetStartAndEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, nullptr, "SetStartAndEnd", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineMeshComponent_SetStartAndEnd_Statics::SplineMeshComponent_eventSetStartAndEnd_Parms), Z_Construct_UFunction_USplineMeshComponent_SetStartAndEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetStartAndEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_SetStartAndEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetStartAndEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_SetStartAndEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_SetStartAndEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_SetStartOffset_Statics
	{
		struct SplineMeshComponent_eventSetStartOffset_Parms
		{
			FVector2D StartOffset;
			bool bUpdateMesh;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartOffset;
		static void NewProp_bUpdateMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetStartOffset_Statics::NewProp_StartOffset = { "StartOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetStartOffset_Parms, StartOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USplineMeshComponent_SetStartOffset_Statics::NewProp_bUpdateMesh_SetBit(void* Obj)
	{
		((SplineMeshComponent_eventSetStartOffset_Parms*)Obj)->bUpdateMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetStartOffset_Statics::NewProp_bUpdateMesh = { "bUpdateMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineMeshComponent_eventSetStartOffset_Parms), &Z_Construct_UFunction_USplineMeshComponent_SetStartOffset_Statics::NewProp_bUpdateMesh_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_SetStartOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetStartOffset_Statics::NewProp_StartOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetStartOffset_Statics::NewProp_bUpdateMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_SetStartOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "Comment", "/** Set the start offset */" },
		{ "CPP_Default_bUpdateMesh", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Set the start offset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_SetStartOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, nullptr, "SetStartOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineMeshComponent_SetStartOffset_Statics::SplineMeshComponent_eventSetStartOffset_Parms), Z_Construct_UFunction_USplineMeshComponent_SetStartOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetStartOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_SetStartOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetStartOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_SetStartOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_SetStartOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_SetStartPosition_Statics
	{
		struct SplineMeshComponent_eventSetStartPosition_Parms
		{
			FVector StartPos;
			bool bUpdateMesh;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartPos;
		static void NewProp_bUpdateMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetStartPosition_Statics::NewProp_StartPos = { "StartPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetStartPosition_Parms, StartPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USplineMeshComponent_SetStartPosition_Statics::NewProp_bUpdateMesh_SetBit(void* Obj)
	{
		((SplineMeshComponent_eventSetStartPosition_Parms*)Obj)->bUpdateMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetStartPosition_Statics::NewProp_bUpdateMesh = { "bUpdateMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineMeshComponent_eventSetStartPosition_Parms), &Z_Construct_UFunction_USplineMeshComponent_SetStartPosition_Statics::NewProp_bUpdateMesh_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_SetStartPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetStartPosition_Statics::NewProp_StartPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetStartPosition_Statics::NewProp_bUpdateMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_SetStartPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "Comment", "/** Set the start position of spline in local space */" },
		{ "CPP_Default_bUpdateMesh", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Set the start position of spline in local space" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_SetStartPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, nullptr, "SetStartPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineMeshComponent_SetStartPosition_Statics::SplineMeshComponent_eventSetStartPosition_Parms), Z_Construct_UFunction_USplineMeshComponent_SetStartPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetStartPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_SetStartPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetStartPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_SetStartPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_SetStartPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_SetStartRoll_Statics
	{
		struct SplineMeshComponent_eventSetStartRoll_Parms
		{
			float StartRoll;
			bool bUpdateMesh;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartRoll;
		static void NewProp_bUpdateMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetStartRoll_Statics::NewProp_StartRoll = { "StartRoll", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetStartRoll_Parms, StartRoll), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USplineMeshComponent_SetStartRoll_Statics::NewProp_bUpdateMesh_SetBit(void* Obj)
	{
		((SplineMeshComponent_eventSetStartRoll_Parms*)Obj)->bUpdateMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetStartRoll_Statics::NewProp_bUpdateMesh = { "bUpdateMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineMeshComponent_eventSetStartRoll_Parms), &Z_Construct_UFunction_USplineMeshComponent_SetStartRoll_Statics::NewProp_bUpdateMesh_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_SetStartRoll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetStartRoll_Statics::NewProp_StartRoll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetStartRoll_Statics::NewProp_bUpdateMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_SetStartRoll_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "Comment", "/** Set the start roll */" },
		{ "CPP_Default_bUpdateMesh", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Set the start roll" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_SetStartRoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, nullptr, "SetStartRoll", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineMeshComponent_SetStartRoll_Statics::SplineMeshComponent_eventSetStartRoll_Parms), Z_Construct_UFunction_USplineMeshComponent_SetStartRoll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetStartRoll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_SetStartRoll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetStartRoll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_SetStartRoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_SetStartRoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_SetStartScale_Statics
	{
		struct SplineMeshComponent_eventSetStartScale_Parms
		{
			FVector2D StartScale;
			bool bUpdateMesh;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartScale;
		static void NewProp_bUpdateMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetStartScale_Statics::NewProp_StartScale = { "StartScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetStartScale_Parms, StartScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USplineMeshComponent_SetStartScale_Statics::NewProp_bUpdateMesh_SetBit(void* Obj)
	{
		((SplineMeshComponent_eventSetStartScale_Parms*)Obj)->bUpdateMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetStartScale_Statics::NewProp_bUpdateMesh = { "bUpdateMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineMeshComponent_eventSetStartScale_Parms), &Z_Construct_UFunction_USplineMeshComponent_SetStartScale_Statics::NewProp_bUpdateMesh_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_SetStartScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetStartScale_Statics::NewProp_StartScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetStartScale_Statics::NewProp_bUpdateMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_SetStartScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "Comment", "/** Set the start scaling */" },
		{ "CPP_Default_bUpdateMesh", "true" },
		{ "CPP_Default_StartScale", "(X=1.000,Y=1.000)" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Set the start scaling" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_SetStartScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, nullptr, "SetStartScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineMeshComponent_SetStartScale_Statics::SplineMeshComponent_eventSetStartScale_Parms), Z_Construct_UFunction_USplineMeshComponent_SetStartScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetStartScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_SetStartScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetStartScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_SetStartScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_SetStartScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_SetStartTangent_Statics
	{
		struct SplineMeshComponent_eventSetStartTangent_Parms
		{
			FVector StartTangent;
			bool bUpdateMesh;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartTangent;
		static void NewProp_bUpdateMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetStartTangent_Statics::NewProp_StartTangent = { "StartTangent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SplineMeshComponent_eventSetStartTangent_Parms, StartTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USplineMeshComponent_SetStartTangent_Statics::NewProp_bUpdateMesh_SetBit(void* Obj)
	{
		((SplineMeshComponent_eventSetStartTangent_Parms*)Obj)->bUpdateMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USplineMeshComponent_SetStartTangent_Statics::NewProp_bUpdateMesh = { "bUpdateMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineMeshComponent_eventSetStartTangent_Parms), &Z_Construct_UFunction_USplineMeshComponent_SetStartTangent_Statics::NewProp_bUpdateMesh_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USplineMeshComponent_SetStartTangent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetStartTangent_Statics::NewProp_StartTangent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USplineMeshComponent_SetStartTangent_Statics::NewProp_bUpdateMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_SetStartTangent_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "Comment", "/** Set the start tangent vector of spline in local space */" },
		{ "CPP_Default_bUpdateMesh", "true" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Set the start tangent vector of spline in local space" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_SetStartTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, nullptr, "SetStartTangent", nullptr, nullptr, sizeof(Z_Construct_UFunction_USplineMeshComponent_SetStartTangent_Statics::SplineMeshComponent_eventSetStartTangent_Parms), Z_Construct_UFunction_USplineMeshComponent_SetStartTangent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetStartTangent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_SetStartTangent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_SetStartTangent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_SetStartTangent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_SetStartTangent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USplineMeshComponent_UpdateMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USplineMeshComponent_UpdateMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineMesh" },
		{ "Comment", "/** Update the collision and render state on the spline mesh following changes to its geometry */" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Update the collision and render state on the spline mesh following changes to its geometry" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USplineMeshComponent_UpdateMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USplineMeshComponent, nullptr, "UpdateMesh", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USplineMeshComponent_UpdateMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USplineMeshComponent_UpdateMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USplineMeshComponent_UpdateMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USplineMeshComponent_UpdateMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USplineMeshComponent);
	UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister()
	{
		return USplineMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_USplineMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SplineParams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineUpDir_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SplineUpDir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineBoundaryMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SplineBoundaryMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedMeshBodySetupGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedMeshBodySetupGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodySetup_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BodySetup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineBoundaryMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SplineBoundaryMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowSplineEditingPerInstance_MetaData[];
#endif
		static void NewProp_bAllowSplineEditingPerInstance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowSplineEditingPerInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSmoothInterpRollScale_MetaData[];
#endif
		static void NewProp_bSmoothInterpRollScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSmoothInterpRollScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMeshDirty_MetaData[];
#endif
		static void NewProp_bMeshDirty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMeshDirty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForwardAxis_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ForwardAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureMainPassMaxDrawDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VirtualTextureMainPassMaxDrawDistance;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSelected_MetaData[];
#endif
		static void NewProp_bSelected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelected;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNeverNeedsCookedCollisionData_MetaData[];
#endif
		static void NewProp_bNeverNeedsCookedCollisionData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeverNeedsCookedCollisionData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USplineMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USplineMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMax, "GetBoundaryMax" }, // 2271059143
		{ &Z_Construct_UFunction_USplineMeshComponent_GetBoundaryMin, "GetBoundaryMin" }, // 1582403516
		{ &Z_Construct_UFunction_USplineMeshComponent_GetEndOffset, "GetEndOffset" }, // 2079712118
		{ &Z_Construct_UFunction_USplineMeshComponent_GetEndPosition, "GetEndPosition" }, // 2541248756
		{ &Z_Construct_UFunction_USplineMeshComponent_GetEndRoll, "GetEndRoll" }, // 2410213347
		{ &Z_Construct_UFunction_USplineMeshComponent_GetEndScale, "GetEndScale" }, // 641149143
		{ &Z_Construct_UFunction_USplineMeshComponent_GetEndTangent, "GetEndTangent" }, // 2795389528
		{ &Z_Construct_UFunction_USplineMeshComponent_GetForwardAxis, "GetForwardAxis" }, // 884505914
		{ &Z_Construct_UFunction_USplineMeshComponent_GetSplineUpDir, "GetSplineUpDir" }, // 2180571730
		{ &Z_Construct_UFunction_USplineMeshComponent_GetStartOffset, "GetStartOffset" }, // 2617008348
		{ &Z_Construct_UFunction_USplineMeshComponent_GetStartPosition, "GetStartPosition" }, // 3325859615
		{ &Z_Construct_UFunction_USplineMeshComponent_GetStartRoll, "GetStartRoll" }, // 3757680533
		{ &Z_Construct_UFunction_USplineMeshComponent_GetStartScale, "GetStartScale" }, // 2244322695
		{ &Z_Construct_UFunction_USplineMeshComponent_GetStartTangent, "GetStartTangent" }, // 4005774997
		{ &Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMax, "SetBoundaryMax" }, // 3908824277
		{ &Z_Construct_UFunction_USplineMeshComponent_SetBoundaryMin, "SetBoundaryMin" }, // 2485527670
		{ &Z_Construct_UFunction_USplineMeshComponent_SetEndOffset, "SetEndOffset" }, // 2134633233
		{ &Z_Construct_UFunction_USplineMeshComponent_SetEndPosition, "SetEndPosition" }, // 2693115480
		{ &Z_Construct_UFunction_USplineMeshComponent_SetEndRoll, "SetEndRoll" }, // 3966258216
		{ &Z_Construct_UFunction_USplineMeshComponent_SetEndScale, "SetEndScale" }, // 2017829046
		{ &Z_Construct_UFunction_USplineMeshComponent_SetEndTangent, "SetEndTangent" }, // 1980866388
		{ &Z_Construct_UFunction_USplineMeshComponent_SetForwardAxis, "SetForwardAxis" }, // 3463311042
		{ &Z_Construct_UFunction_USplineMeshComponent_SetSplineUpDir, "SetSplineUpDir" }, // 655867569
		{ &Z_Construct_UFunction_USplineMeshComponent_SetStartAndEnd, "SetStartAndEnd" }, // 2852981041
		{ &Z_Construct_UFunction_USplineMeshComponent_SetStartOffset, "SetStartOffset" }, // 2501352855
		{ &Z_Construct_UFunction_USplineMeshComponent_SetStartPosition, "SetStartPosition" }, // 3348184450
		{ &Z_Construct_UFunction_USplineMeshComponent_SetStartRoll, "SetStartRoll" }, // 1540065526
		{ &Z_Construct_UFunction_USplineMeshComponent_SetStartScale, "SetStartScale" }, // 3907752248
		{ &Z_Construct_UFunction_USplineMeshComponent_SetStartTangent, "SetStartTangent" }, // 3002672136
		{ &Z_Construct_UFunction_USplineMeshComponent_UpdateMesh, "UpdateMesh" }, // 4205937015
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/** \n *\x09""A Spline Mesh Component is a derivation of a Static Mesh Component which can be deformed using a spline. Only a start and end position (and tangent) can be specified.  \n *\x09@see https://docs.unrealengine.com/latest/INT/Resources/ContentExamples/Blueprint_Splines\n */" },
		{ "HideCategories", "Physics Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Components/SplineMeshComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "A Spline Mesh Component is a derivation of a Static Mesh Component which can be deformed using a spline. Only a start and end position (and tangent) can be specified.\n@see https://docs.unrealengine.com/latest/INT/Resources/ContentExamples/Blueprint_Splines" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_SplineParams_MetaData[] = {
		{ "Category", "SplineMesh" },
		{ "Comment", "/** Spline that is used to deform mesh */" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Spline that is used to deform mesh" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_SplineParams = { "SplineParams", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USplineMeshComponent, SplineParams), Z_Construct_UScriptStruct_FSplineMeshParams, METADATA_PARAMS(Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_SplineParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_SplineParams_MetaData)) }; // 2603423698
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_SplineUpDir_MetaData[] = {
		{ "Category", "SplineMesh" },
		{ "Comment", "/** Axis (in component space) that is used to determine X axis for co-ordinates along spline */" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Axis (in component space) that is used to determine X axis for co-ordinates along spline" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_SplineUpDir = { "SplineUpDir", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USplineMeshComponent, SplineUpDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_SplineUpDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_SplineUpDir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_SplineBoundaryMin_MetaData[] = {
		{ "Category", "SplineMesh" },
		{ "Comment", "/** Minimum coordinate along the spline forward axis which corresponds to start of spline. If set to 0.0, will use bounding box to determine bounds */" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Minimum coordinate along the spline forward axis which corresponds to start of spline. If set to 0.0, will use bounding box to determine bounds" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_SplineBoundaryMin = { "SplineBoundaryMin", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USplineMeshComponent, SplineBoundaryMin), METADATA_PARAMS(Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_SplineBoundaryMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_SplineBoundaryMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_CachedMeshBodySetupGuid_MetaData[] = {
		{ "Comment", "// Used to automatically trigger rebuild of collision data\n" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Used to automatically trigger rebuild of collision data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_CachedMeshBodySetupGuid = { "CachedMeshBodySetupGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USplineMeshComponent, CachedMeshBodySetupGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_CachedMeshBodySetupGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_CachedMeshBodySetupGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_BodySetup_MetaData[] = {
		{ "Comment", "// Physics data.\n" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Physics data." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_BodySetup = { "BodySetup", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USplineMeshComponent, BodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_BodySetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_BodySetup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_SplineBoundaryMax_MetaData[] = {
		{ "Category", "SplineMesh" },
		{ "Comment", "/** Maximum coordinate along the spline forward axis which corresponds to end of spline. If set to 0.0, will use bounding box to determine bounds */" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Maximum coordinate along the spline forward axis which corresponds to end of spline. If set to 0.0, will use bounding box to determine bounds" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_SplineBoundaryMax = { "SplineBoundaryMax", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USplineMeshComponent, SplineBoundaryMax), METADATA_PARAMS(Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_SplineBoundaryMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_SplineBoundaryMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bAllowSplineEditingPerInstance_MetaData[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** If true, spline mesh properties - StartPos, EndPos, StartTangent and EndTangent- may be edited per instance in the level viewport. Otherwise, the spline mesh should be initialized in the construction script. */" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "If true, spline mesh properties - StartPos, EndPos, StartTangent and EndTangent- may be edited per instance in the level viewport. Otherwise, the spline mesh should be initialized in the construction script." },
	};
#endif
	void Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bAllowSplineEditingPerInstance_SetBit(void* Obj)
	{
		((USplineMeshComponent*)Obj)->bAllowSplineEditingPerInstance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bAllowSplineEditingPerInstance = { "bAllowSplineEditingPerInstance", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USplineMeshComponent), &Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bAllowSplineEditingPerInstance_SetBit, METADATA_PARAMS(Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bAllowSplineEditingPerInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bAllowSplineEditingPerInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bSmoothInterpRollScale_MetaData[] = {
		{ "Category", "SplineMesh" },
		{ "Comment", "/** If true, will use smooth interpolation (ease in/out) for Scale, Roll, and Offset along this section of spline. If false, uses linear */" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "If true, will use smooth interpolation (ease in/out) for Scale, Roll, and Offset along this section of spline. If false, uses linear" },
	};
#endif
	void Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bSmoothInterpRollScale_SetBit(void* Obj)
	{
		((USplineMeshComponent*)Obj)->bSmoothInterpRollScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bSmoothInterpRollScale = { "bSmoothInterpRollScale", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USplineMeshComponent), &Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bSmoothInterpRollScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bSmoothInterpRollScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bSmoothInterpRollScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bMeshDirty_MetaData[] = {
		{ "Comment", "// Indicates that the mesh needs updating\n" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Indicates that the mesh needs updating" },
	};
#endif
	void Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bMeshDirty_SetBit(void* Obj)
	{
		((USplineMeshComponent*)Obj)->bMeshDirty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bMeshDirty = { "bMeshDirty", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USplineMeshComponent), &Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bMeshDirty_SetBit, METADATA_PARAMS(Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bMeshDirty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bMeshDirty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_ForwardAxis_MetaData[] = {
		{ "Category", "SplineMesh" },
		{ "Comment", "/** Chooses the forward axis for the spline mesh orientation */" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Chooses the forward axis for the spline mesh orientation" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_ForwardAxis = { "ForwardAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USplineMeshComponent, ForwardAxis), Z_Construct_UEnum_Engine_ESplineMeshAxis, METADATA_PARAMS(Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_ForwardAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_ForwardAxis_MetaData)) }; // 1317892391
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_VirtualTextureMainPassMaxDrawDistance_MetaData[] = {
		{ "Comment", "/** \n\x09 * The max draw distance to use in the main pass when also rendering to a runtime virtual texture. \n\x09 * This is only exposed to the user through the same setting on ULandscapeSplineSegment. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "The max draw distance to use in the main pass when also rendering to a runtime virtual texture.\nThis is only exposed to the user through the same setting on ULandscapeSplineSegment." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_VirtualTextureMainPassMaxDrawDistance = { "VirtualTextureMainPassMaxDrawDistance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USplineMeshComponent, VirtualTextureMainPassMaxDrawDistance), METADATA_PARAMS(Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_VirtualTextureMainPassMaxDrawDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_VirtualTextureMainPassMaxDrawDistance_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bSelected_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bSelected_SetBit(void* Obj)
	{
		((USplineMeshComponent*)Obj)->bSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bSelected = { "bSelected", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USplineMeshComponent), &Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bSelected_SetBit, METADATA_PARAMS(Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bSelected_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bNeverNeedsCookedCollisionData_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09* TODO Chaos this is to opt out of CreatePhysicsMeshes for certain meshes\n\x09* Better long term mesh is to not call CreatePhysicsMeshes until it is known there is a mesh instance that needs it.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "TODO Chaos this is to opt out of CreatePhysicsMeshes for certain meshes\nBetter long term mesh is to not call CreatePhysicsMeshes until it is known there is a mesh instance that needs it." },
	};
#endif
	void Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bNeverNeedsCookedCollisionData_SetBit(void* Obj)
	{
		((USplineMeshComponent*)Obj)->bNeverNeedsCookedCollisionData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bNeverNeedsCookedCollisionData = { "bNeverNeedsCookedCollisionData", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, &USplineMeshComponent::SetbNeverNeedsCookedCollisionData_WrapperImpl, &USplineMeshComponent::GetbNeverNeedsCookedCollisionData_WrapperImpl, sizeof(uint8), sizeof(USplineMeshComponent), &Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bNeverNeedsCookedCollisionData_SetBit, METADATA_PARAMS(Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bNeverNeedsCookedCollisionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bNeverNeedsCookedCollisionData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USplineMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_SplineParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_SplineUpDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_SplineBoundaryMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_CachedMeshBodySetupGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_BodySetup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_SplineBoundaryMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bAllowSplineEditingPerInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bSmoothInterpRollScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bMeshDirty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_ForwardAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_VirtualTextureMainPassMaxDrawDistance,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bSelected,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineMeshComponent_Statics::NewProp_bNeverNeedsCookedCollisionData,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USplineMeshComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister, (int32)VTABLE_OFFSET(USplineMeshComponent, IInterface_CollisionDataProvider), false },  // 1866130202
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USplineMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USplineMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USplineMeshComponent_Statics::ClassParams = {
		&USplineMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USplineMeshComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USplineMeshComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_USplineMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USplineMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USplineMeshComponent()
	{
		if (!Z_Registration_Info_UClass_USplineMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USplineMeshComponent.OuterSingleton, Z_Construct_UClass_USplineMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USplineMeshComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USplineMeshComponent>()
	{
		return USplineMeshComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USplineMeshComponent);
	USplineMeshComponent::~USplineMeshComponent() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USplineMeshComponent)

static_assert(std::is_polymorphic<FSplineMeshInstanceData>() == std::is_polymorphic<FStaticMeshComponentInstanceData>(), "USTRUCT FSplineMeshInstanceData cannot be polymorphic unless super FStaticMeshComponentInstanceData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SplineMeshInstanceData;
class UScriptStruct* FSplineMeshInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SplineMeshInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SplineMeshInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSplineMeshInstanceData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SplineMeshInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_SplineMeshInstanceData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSplineMeshInstanceData>()
{
	return FSplineMeshInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSplineMeshInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartPos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartPos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndPos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndPos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartTangent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartTangent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndTangent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndTangent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineMeshInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Used to store spline mesh data during RerunConstructionScripts */" },
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
		{ "ToolTip", "Used to store spline mesh data during RerunConstructionScripts" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSplineMeshInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSplineMeshInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineMeshInstanceData_Statics::NewProp_StartPos_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplineMeshInstanceData_Statics::NewProp_StartPos = { "StartPos", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSplineMeshInstanceData, StartPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineMeshInstanceData_Statics::NewProp_StartPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineMeshInstanceData_Statics::NewProp_StartPos_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineMeshInstanceData_Statics::NewProp_EndPos_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplineMeshInstanceData_Statics::NewProp_EndPos = { "EndPos", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSplineMeshInstanceData, EndPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineMeshInstanceData_Statics::NewProp_EndPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineMeshInstanceData_Statics::NewProp_EndPos_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineMeshInstanceData_Statics::NewProp_StartTangent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplineMeshInstanceData_Statics::NewProp_StartTangent = { "StartTangent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSplineMeshInstanceData, StartTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineMeshInstanceData_Statics::NewProp_StartTangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineMeshInstanceData_Statics::NewProp_StartTangent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineMeshInstanceData_Statics::NewProp_EndTangent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SplineMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplineMeshInstanceData_Statics::NewProp_EndTangent = { "EndTangent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSplineMeshInstanceData, EndTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineMeshInstanceData_Statics::NewProp_EndTangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineMeshInstanceData_Statics::NewProp_EndTangent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSplineMeshInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshInstanceData_Statics::NewProp_StartPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshInstanceData_Statics::NewProp_EndPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshInstanceData_Statics::NewProp_StartTangent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineMeshInstanceData_Statics::NewProp_EndTangent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSplineMeshInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData,
		&NewStructOps,
		"SplineMeshInstanceData",
		sizeof(FSplineMeshInstanceData),
		alignof(FSplineMeshInstanceData),
		Z_Construct_UScriptStruct_FSplineMeshInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineMeshInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineMeshInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineMeshInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSplineMeshInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_SplineMeshInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SplineMeshInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FSplineMeshInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SplineMeshInstanceData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_Statics::EnumInfo[] = {
		{ ESplineMeshAxis_StaticEnum, TEXT("ESplineMeshAxis"), &Z_Registration_Info_UEnum_ESplineMeshAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1317892391U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_Statics::ScriptStructInfo[] = {
		{ FSplineMeshParams::StaticStruct, Z_Construct_UScriptStruct_FSplineMeshParams_Statics::NewStructOps, TEXT("SplineMeshParams"), &Z_Registration_Info_UScriptStruct_SplineMeshParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSplineMeshParams), 2603423698U) },
		{ FSplineMeshInstanceData::StaticStruct, Z_Construct_UScriptStruct_FSplineMeshInstanceData_Statics::NewStructOps, TEXT("SplineMeshInstanceData"), &Z_Registration_Info_UScriptStruct_SplineMeshInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSplineMeshInstanceData), 3567132920U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USplineMeshComponent, USplineMeshComponent::StaticClass, TEXT("USplineMeshComponent"), &Z_Registration_Info_UClass_USplineMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USplineMeshComponent), 3191952862U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_888984682(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
