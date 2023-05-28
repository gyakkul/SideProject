// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LandscapeSplineSegment.h"
#include "../../Source/Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "LandscapeSplinesComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeSplineSegment() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInterpCurveVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERendererStencilMask();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMainPassType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESplineMeshAxis();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstance();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplineControlPoint_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplineSegment();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplineSegment_NoRegister();
	LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_LandscapeSplineMeshOrientation();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection();
	UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LandscapeSplineInterpPoint;
class UScriptStruct* FLandscapeSplineInterpPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LandscapeSplineInterpPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LandscapeSplineInterpPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapeSplineInterpPoint"));
	}
	return Z_Registration_Info_UScriptStruct_LandscapeSplineInterpPoint.OuterSingleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FLandscapeSplineInterpPoint>()
{
	return FLandscapeSplineInterpPoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Left_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Left;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Right_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Right;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FalloffLeft_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FalloffLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FalloffRight_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FalloffRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerLeft_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LayerLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerRight_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LayerRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerFalloffLeft_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LayerFalloffLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerFalloffRight_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LayerFalloffRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartEndFalloff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartEndFalloff;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeSplineInterpPoint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_Center_MetaData[] = {
		{ "Comment", "/** Center Point */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Center Point" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeSplineInterpPoint, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_Center_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_Left_MetaData[] = {
		{ "Comment", "/** Left Point */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Left Point" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeSplineInterpPoint, Left), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_Left_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_Left_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_Right_MetaData[] = {
		{ "Comment", "/** Right Point */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Right Point" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeSplineInterpPoint, Right), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_Right_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_Right_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_FalloffLeft_MetaData[] = {
		{ "Comment", "/** Left Falloff Point */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Left Falloff Point" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_FalloffLeft = { "FalloffLeft", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeSplineInterpPoint, FalloffLeft), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_FalloffLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_FalloffLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_FalloffRight_MetaData[] = {
		{ "Comment", "/** Right FalloffPoint */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Right FalloffPoint" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_FalloffRight = { "FalloffRight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeSplineInterpPoint, FalloffRight), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_FalloffRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_FalloffRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_LayerLeft_MetaData[] = {
		{ "Comment", "/** Layer Left Point */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Layer Left Point" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_LayerLeft = { "LayerLeft", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeSplineInterpPoint, LayerLeft), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_LayerLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_LayerLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_LayerRight_MetaData[] = {
		{ "Comment", "/** Layer Right Point */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Layer Right Point" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_LayerRight = { "LayerRight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeSplineInterpPoint, LayerRight), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_LayerRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_LayerRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_LayerFalloffLeft_MetaData[] = {
		{ "Comment", "/** Left Layer Falloff Point */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Left Layer Falloff Point" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_LayerFalloffLeft = { "LayerFalloffLeft", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeSplineInterpPoint, LayerFalloffLeft), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_LayerFalloffLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_LayerFalloffLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_LayerFalloffRight_MetaData[] = {
		{ "Comment", "/** Right Layer FalloffPoint */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Right Layer FalloffPoint" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_LayerFalloffRight = { "LayerFalloffRight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeSplineInterpPoint, LayerFalloffRight), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_LayerFalloffRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_LayerFalloffRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_StartEndFalloff_MetaData[] = {
		{ "Comment", "/** Start/End Falloff fraction */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Start/End Falloff fraction" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_StartEndFalloff = { "StartEndFalloff", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeSplineInterpPoint, StartEndFalloff), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_StartEndFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_StartEndFalloff_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_Left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_Right,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_FalloffLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_FalloffRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_LayerLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_LayerRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_LayerFalloffLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_LayerFalloffRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewProp_StartEndFalloff,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		&NewStructOps,
		"LandscapeSplineInterpPoint",
		sizeof(FLandscapeSplineInterpPoint),
		alignof(FLandscapeSplineInterpPoint),
		Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint()
	{
		if (!Z_Registration_Info_UScriptStruct_LandscapeSplineInterpPoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LandscapeSplineInterpPoint.InnerSingleton, Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LandscapeSplineInterpPoint.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LandscapeSplineSegmentConnection;
class UScriptStruct* FLandscapeSplineSegmentConnection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LandscapeSplineSegmentConnection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LandscapeSplineSegmentConnection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapeSplineSegmentConnection"));
	}
	return Z_Registration_Info_UScriptStruct_LandscapeSplineSegmentConnection.OuterSingleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FLandscapeSplineSegmentConnection>()
{
	return FLandscapeSplineSegmentConnection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlPoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ControlPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TangentLen_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TangentLen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeSplineSegmentConnection>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics::NewProp_ControlPoint_MetaData[] = {
		{ "Comment", "// Control point connected to this end of the segment\n" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Control point connected to this end of the segment" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics::NewProp_ControlPoint = { "ControlPoint", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeSplineSegmentConnection, ControlPoint), Z_Construct_UClass_ULandscapeSplineControlPoint_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics::NewProp_ControlPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics::NewProp_ControlPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics::NewProp_TangentLen_MetaData[] = {
		{ "Category", "LandscapeSplineSegmentConnection" },
		{ "Comment", "// Tangent length of the connection\n" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Tangent length of the connection" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics::NewProp_TangentLen = { "TangentLen", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeSplineSegmentConnection, TangentLen), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics::NewProp_TangentLen_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics::NewProp_TangentLen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics::NewProp_SocketName_MetaData[] = {
		{ "Category", "LandscapeSplineSegmentConnection" },
		{ "Comment", "// Socket on the control point that we are connected to\n" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Socket on the control point that we are connected to" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeSplineSegmentConnection, SocketName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics::NewProp_SocketName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics::NewProp_ControlPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics::NewProp_TangentLen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics::NewProp_SocketName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		&NewStructOps,
		"LandscapeSplineSegmentConnection",
		sizeof(FLandscapeSplineSegmentConnection),
		alignof(FLandscapeSplineSegmentConnection),
		Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection()
	{
		if (!Z_Registration_Info_UScriptStruct_LandscapeSplineSegmentConnection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LandscapeSplineSegmentConnection.InnerSingleton, Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LandscapeSplineSegmentConnection.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_LandscapeSplineMeshOrientation;
	static UEnum* LandscapeSplineMeshOrientation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_LandscapeSplineMeshOrientation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_LandscapeSplineMeshOrientation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Landscape_LandscapeSplineMeshOrientation, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapeSplineMeshOrientation"));
		}
		return Z_Registration_Info_UEnum_LandscapeSplineMeshOrientation.OuterSingleton;
	}
	template<> LANDSCAPE_API UEnum* StaticEnum<LandscapeSplineMeshOrientation>()
	{
		return LandscapeSplineMeshOrientation_StaticEnum();
	}
	struct Z_Construct_UEnum_Landscape_LandscapeSplineMeshOrientation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Landscape_LandscapeSplineMeshOrientation_Statics::Enumerators[] = {
		{ "LSMO_XUp", (int64)LSMO_XUp },
		{ "LSMO_YUp", (int64)LSMO_YUp },
		{ "LSMO_MAX", (int64)LSMO_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Landscape_LandscapeSplineMeshOrientation_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// Deprecated\n" },
		{ "LSMO_MAX.Name", "LSMO_MAX" },
		{ "LSMO_XUp.Name", "LSMO_XUp" },
		{ "LSMO_YUp.Name", "LSMO_YUp" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Deprecated" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Landscape_LandscapeSplineMeshOrientation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		"LandscapeSplineMeshOrientation",
		"LandscapeSplineMeshOrientation",
		Z_Construct_UEnum_Landscape_LandscapeSplineMeshOrientation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_LandscapeSplineMeshOrientation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Landscape_LandscapeSplineMeshOrientation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_LandscapeSplineMeshOrientation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Landscape_LandscapeSplineMeshOrientation()
	{
		if (!Z_Registration_Info_UEnum_LandscapeSplineMeshOrientation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_LandscapeSplineMeshOrientation.InnerSingleton, Z_Construct_UEnum_Landscape_LandscapeSplineMeshOrientation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_LandscapeSplineMeshOrientation.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LandscapeSplineMeshEntry;
class UScriptStruct* FLandscapeSplineMeshEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LandscapeSplineMeshEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LandscapeSplineMeshEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapeSplineMeshEntry"));
	}
	return Z_Registration_Info_UScriptStruct_LandscapeSplineMeshEntry.OuterSingleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FLandscapeSplineMeshEntry>()
{
	return FLandscapeSplineMeshEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MaterialOverrides_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialOverrides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCenterH_MetaData[];
#endif
		static void NewProp_bCenterH_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCenterH;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CenterAdjust_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CenterAdjust;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bScaleToWidth_MetaData[];
#endif
		static void NewProp_bScaleToWidth_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaleToWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForwardAxis_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ForwardAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpAxis_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_UpAxis;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeSplineMeshEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "LandscapeSplineMeshEntry" },
		{ "Comment", "/** Mesh to use on the spline */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Mesh to use on the spline" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeSplineMeshEntry, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_Mesh_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_MaterialOverrides_Inner = { "MaterialOverrides", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_MaterialOverrides_MetaData[] = {
		{ "Category", "LandscapeSplineMeshEntry" },
		{ "Comment", "/** Overrides mesh's materials */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Overrides mesh's materials" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_MaterialOverrides = { "MaterialOverrides", nullptr, (EPropertyFlags)0x0014040000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeSplineMeshEntry, MaterialOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_MaterialOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_MaterialOverrides_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_bCenterH_MetaData[] = {
		{ "Category", "LandscapeSplineMeshEntry" },
		{ "Comment", "/** Whether to automatically center the mesh horizontally on the spline */" },
		{ "DisplayName", "Center Horizontally" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Whether to automatically center the mesh horizontally on the spline" },
	};
#endif
	void Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_bCenterH_SetBit(void* Obj)
	{
		((FLandscapeSplineMeshEntry*)Obj)->bCenterH = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_bCenterH = { "bCenterH", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FLandscapeSplineMeshEntry), &Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_bCenterH_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_bCenterH_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_bCenterH_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_CenterAdjust_MetaData[] = {
		{ "Category", "LandscapeSplineMeshEntry" },
		{ "Comment", "/** Tweak to center the mesh correctly on the spline */" },
		{ "DisplayName", "Center Adjust" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Tweak to center the mesh correctly on the spline" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_CenterAdjust = { "CenterAdjust", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeSplineMeshEntry, CenterAdjust), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_CenterAdjust_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_CenterAdjust_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_bScaleToWidth_MetaData[] = {
		{ "Category", "LandscapeSplineMeshEntry" },
		{ "Comment", "/** Whether to scale the mesh to fit the width of the spline */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Whether to scale the mesh to fit the width of the spline" },
	};
#endif
	void Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_bScaleToWidth_SetBit(void* Obj)
	{
		((FLandscapeSplineMeshEntry*)Obj)->bScaleToWidth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_bScaleToWidth = { "bScaleToWidth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FLandscapeSplineMeshEntry), &Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_bScaleToWidth_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_bScaleToWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_bScaleToWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "LandscapeSplineMeshEntry" },
		{ "Comment", "/** Scale of the spline mesh, (Z=Forwards) */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Scale of the spline mesh, (Z=Forwards)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeSplineMeshEntry, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_Orientation_MetaData[] = {
		{ "Comment", "/** Orientation of the spline mesh, X=Up or Y=Up */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Orientation of the spline mesh, X=Up or Y=Up" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeSplineMeshEntry, Orientation_DEPRECATED), Z_Construct_UEnum_Landscape_LandscapeSplineMeshOrientation, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_Orientation_MetaData)) }; // 2629647275
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_ForwardAxis_MetaData[] = {
		{ "Category", "LandscapeSplineMeshEntry" },
		{ "Comment", "/** Chooses the forward axis for the spline mesh orientation */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Chooses the forward axis for the spline mesh orientation" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_ForwardAxis = { "ForwardAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeSplineMeshEntry, ForwardAxis), Z_Construct_UEnum_Engine_ESplineMeshAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_ForwardAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_ForwardAxis_MetaData)) }; // 1317892391
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_UpAxis_MetaData[] = {
		{ "Category", "LandscapeSplineMeshEntry" },
		{ "Comment", "/** Chooses the up axis for the spline mesh orientation */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Chooses the up axis for the spline mesh orientation" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_UpAxis = { "UpAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeSplineMeshEntry, UpAxis), Z_Construct_UEnum_Engine_ESplineMeshAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_UpAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_UpAxis_MetaData)) }; // 1317892391
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_MaterialOverrides_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_MaterialOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_bCenterH,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_CenterAdjust,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_bScaleToWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_Orientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_ForwardAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewProp_UpAxis,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		&NewStructOps,
		"LandscapeSplineMeshEntry",
		sizeof(FLandscapeSplineMeshEntry),
		alignof(FLandscapeSplineMeshEntry),
		Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_LandscapeSplineMeshEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LandscapeSplineMeshEntry.InnerSingleton, Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LandscapeSplineMeshEntry.InnerSingleton;
	}
	void ULandscapeSplineSegment::StaticRegisterNativesULandscapeSplineSegment()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeSplineSegment);
	UClass* Z_Construct_UClass_ULandscapeSplineSegment_NoRegister()
	{
		return ULandscapeSplineSegment::StaticClass();
	}
	struct Z_Construct_UClass_ULandscapeSplineSegment_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Connections_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Connections;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LayerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRaiseTerrain_MetaData[];
#endif
		static void NewProp_bRaiseTerrain_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRaiseTerrain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLowerTerrain_MetaData[];
#endif
		static void NewProp_bLowerTerrain_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLowerTerrain;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SplineMeshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SplineMeshes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCollision_MetaData[];
#endif
		static void NewProp_bEnableCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionProfileName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CollisionProfileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCastShadow_MetaData[];
#endif
		static void NewProp_bCastShadow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastShadow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHiddenInGame_MetaData[];
#endif
		static void NewProp_bHiddenInGame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHiddenInGame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPlaceSplineMeshesInStreamingLevels_MetaData[];
#endif
		static void NewProp_bPlaceSplineMeshesInStreamingLevels_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlaceSplineMeshesInStreamingLevels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LDMaxDrawDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LDMaxDrawDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslucencySortPriority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TranslucencySortPriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRenderCustomDepth_MetaData[];
#endif
		static void NewProp_bRenderCustomDepth_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderCustomDepth;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CustomDepthStencilWriteMask_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomDepthStencilWriteMask_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CustomDepthStencilWriteMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomDepthStencilValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CustomDepthStencilValue;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RuntimeVirtualTextures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeVirtualTextures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RuntimeVirtualTextures;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureLodBias_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VirtualTextureLodBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureCullMips_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VirtualTextureCullMips;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureMainPassMaxDrawDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VirtualTextureMainPassMaxDrawDistance;
		static const UECodeGen_Private::FBytePropertyParams NewProp_VirtualTextureRenderPassType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureRenderPassType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_VirtualTextureRenderPassType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyInstance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BodyInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSelected_MetaData[];
#endif
		static void NewProp_bSelected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNavDirty_MetaData[];
#endif
		static void NewProp_bNavDirty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNavDirty;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SplineInfo;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LocalMeshComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalMeshComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LocalMeshComponents;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ForeignWorlds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForeignWorlds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ForeignWorlds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModificationKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModificationKey;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULandscapeSplineSegment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "LandscapeSplineSegment LandscapeSplineMeshes" },
		{ "IncludePath", "LandscapeSplineSegment.h" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_Connections_MetaData[] = {
		{ "Category", "LandscapeSplineSegment" },
		{ "Comment", "// Directly editable data:\n" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Directly editable data:" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_Connections = { "Connections", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Connections, ULandscapeSplineSegment), nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineSegment, Connections), Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_Connections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_Connections_MetaData)) }; // 1331111069
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_LayerName_MetaData[] = {
		{ "Category", "LandscapeDeformation" },
		{ "Comment", "/**\n\x09 * Name of blend layer to paint when applying spline to landscape\n\x09 * If \"none\", no layer is painted\n\x09 */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Name of blend layer to paint when applying spline to landscape\nIf \"none\", no layer is painted" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineSegment, LayerName), METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_LayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_LayerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bRaiseTerrain_MetaData[] = {
		{ "Category", "LandscapeDeformation" },
		{ "Comment", "/** If the spline is above the terrain, whether to raise the terrain up to the level of the spline when applying it to the landscape. */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "If the spline is above the terrain, whether to raise the terrain up to the level of the spline when applying it to the landscape." },
	};
#endif
	void Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bRaiseTerrain_SetBit(void* Obj)
	{
		((ULandscapeSplineSegment*)Obj)->bRaiseTerrain = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bRaiseTerrain = { "bRaiseTerrain", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULandscapeSplineSegment), &Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bRaiseTerrain_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bRaiseTerrain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bRaiseTerrain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bLowerTerrain_MetaData[] = {
		{ "Category", "LandscapeDeformation" },
		{ "Comment", "/** If the spline is below the terrain, whether to lower the terrain down to the level of the spline when applying it to the landscape. */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "If the spline is below the terrain, whether to lower the terrain down to the level of the spline when applying it to the landscape." },
	};
#endif
	void Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bLowerTerrain_SetBit(void* Obj)
	{
		((ULandscapeSplineSegment*)Obj)->bLowerTerrain = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bLowerTerrain = { "bLowerTerrain", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULandscapeSplineSegment), &Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bLowerTerrain_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bLowerTerrain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bLowerTerrain_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_SplineMeshes_Inner = { "SplineMeshes", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry, METADATA_PARAMS(nullptr, 0) }; // 4159355756
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_SplineMeshes_MetaData[] = {
		{ "Category", "LandscapeSplineMeshes" },
		{ "Comment", "/** Spline meshes from this list are used in random order along the spline. */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Spline meshes from this list are used in random order along the spline." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_SplineMeshes = { "SplineMeshes", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineSegment, SplineMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_SplineMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_SplineMeshes_MetaData)) }; // 4159355756
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bEnableCollision_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
	};
#endif
	void Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bEnableCollision_SetBit(void* Obj)
	{
		((ULandscapeSplineSegment*)Obj)->bEnableCollision_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bEnableCollision = { "bEnableCollision", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULandscapeSplineSegment), &Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bEnableCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bEnableCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bEnableCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_CollisionProfileName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_CollisionProfileName = { "CollisionProfileName", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineSegment, CollisionProfileName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_CollisionProfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_CollisionProfileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bCastShadow_MetaData[] = {
		{ "Category", "LandscapeSplineMeshes" },
		{ "Comment", "/** Whether the Spline Meshes should cast a shadow. */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Whether the Spline Meshes should cast a shadow." },
	};
#endif
	void Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bCastShadow_SetBit(void* Obj)
	{
		((ULandscapeSplineSegment*)Obj)->bCastShadow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bCastShadow = { "bCastShadow", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULandscapeSplineSegment), &Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bCastShadow_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bCastShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bCastShadow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bHiddenInGame_MetaData[] = {
		{ "Category", "LandscapeSplineMeshes" },
		{ "Comment", "/** Whether to hide the mesh in game */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Whether to hide the mesh in game" },
	};
#endif
	void Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bHiddenInGame_SetBit(void* Obj)
	{
		((ULandscapeSplineSegment*)Obj)->bHiddenInGame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bHiddenInGame = { "bHiddenInGame", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULandscapeSplineSegment), &Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bHiddenInGame_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bHiddenInGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bHiddenInGame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bPlaceSplineMeshesInStreamingLevels_MetaData[] = {
		{ "Category", "LandscapeSplineMeshes" },
		{ "Comment", "/** Whether spline meshes should be placed in landscape proxy streaming levels (true) or the spline's level (false) */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Whether spline meshes should be placed in landscape proxy streaming levels (true) or the spline's level (false)" },
	};
#endif
	void Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bPlaceSplineMeshesInStreamingLevels_SetBit(void* Obj)
	{
		((ULandscapeSplineSegment*)Obj)->bPlaceSplineMeshesInStreamingLevels = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bPlaceSplineMeshesInStreamingLevels = { "bPlaceSplineMeshesInStreamingLevels", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULandscapeSplineSegment), &Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bPlaceSplineMeshesInStreamingLevels_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bPlaceSplineMeshesInStreamingLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bPlaceSplineMeshesInStreamingLevels_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_RandomSeed_MetaData[] = {
		{ "Category", "LandscapeSplineMeshes" },
		{ "Comment", "/** Random seed used for choosing which order to use spline meshes. Ignored if only one mesh is set. */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Random seed used for choosing which order to use spline meshes. Ignored if only one mesh is set." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineSegment, RandomSeed), METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_RandomSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_RandomSeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_LDMaxDrawDistance_MetaData[] = {
		{ "Category", "LandscapeSplineMeshes" },
		{ "Comment", "/**  Max draw distance for all the mesh pieces used in this spline */" },
		{ "DisplayName", "Max Draw Distance" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Max draw distance for all the mesh pieces used in this spline" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_LDMaxDrawDistance = { "LDMaxDrawDistance", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineSegment, LDMaxDrawDistance), METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_LDMaxDrawDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_LDMaxDrawDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_TranslucencySortPriority_MetaData[] = {
		{ "Category", "LandscapeSplineMeshes" },
		{ "Comment", "/**\n\x09 * Translucent objects with a lower sort priority draw behind objects with a higher priority.\n\x09 * Translucent objects with the same priority are rendered from back-to-front based on their bounds origin.\n\x09 * This setting is also used to sort objects being drawn into a runtime virtual texture.\n\x09 *\n\x09 * Ignored if the object is not translucent.  The default priority is zero.\n\x09 * Warning: This should never be set to a non-default value unless you know what you are doing, as it will prevent the renderer from sorting correctly.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Translucent objects with a lower sort priority draw behind objects with a higher priority.\nTranslucent objects with the same priority are rendered from back-to-front based on their bounds origin.\nThis setting is also used to sort objects being drawn into a runtime virtual texture.\n\nIgnored if the object is not translucent.  The default priority is zero.\nWarning: This should never be set to a non-default value unless you know what you are doing, as it will prevent the renderer from sorting correctly." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_TranslucencySortPriority = { "TranslucencySortPriority", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineSegment, TranslucencySortPriority), METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_TranslucencySortPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_TranslucencySortPriority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bRenderCustomDepth_MetaData[] = {
		{ "Category", "LandscapeSplineMeshes" },
		{ "Comment", "/** If true, this component will be rendered in the CustomDepth pass (usually used for outlines) */" },
		{ "DisplayName", "Render CustomDepth Pass" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "If true, this component will be rendered in the CustomDepth pass (usually used for outlines)" },
	};
#endif
	void Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bRenderCustomDepth_SetBit(void* Obj)
	{
		((ULandscapeSplineSegment*)Obj)->bRenderCustomDepth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bRenderCustomDepth = { "bRenderCustomDepth", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULandscapeSplineSegment), &Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bRenderCustomDepth_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bRenderCustomDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bRenderCustomDepth_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_CustomDepthStencilWriteMask_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_CustomDepthStencilWriteMask_MetaData[] = {
		{ "Category", "LandscapeSplineMeshes" },
		{ "Comment", "/** Mask used for stencil buffer writes. */" },
		{ "editcondition", "bRenderCustomDepth" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Mask used for stencil buffer writes." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_CustomDepthStencilWriteMask = { "CustomDepthStencilWriteMask", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineSegment, CustomDepthStencilWriteMask), Z_Construct_UEnum_Engine_ERendererStencilMask, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_CustomDepthStencilWriteMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_CustomDepthStencilWriteMask_MetaData)) }; // 2676219362
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_CustomDepthStencilValue_MetaData[] = {
		{ "Category", "LandscapeSplineMeshes" },
		{ "Comment", "/** Optionally write this 0-255 value to the stencil buffer in CustomDepth pass (Requires project setting or r.CustomDepth == 3) */" },
		{ "DisplayName", "CustomDepth Stencil Value" },
		{ "editcondition", "bRenderCustomDepth" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Optionally write this 0-255 value to the stencil buffer in CustomDepth pass (Requires project setting or r.CustomDepth == 3)" },
		{ "UIMax", "255" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_CustomDepthStencilValue = { "CustomDepthStencilValue", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineSegment, CustomDepthStencilValue), METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_CustomDepthStencilValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_CustomDepthStencilValue_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_RuntimeVirtualTextures_Inner = { "RuntimeVirtualTextures", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URuntimeVirtualTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_RuntimeVirtualTextures_MetaData[] = {
		{ "Category", "VirtualTexture" },
		{ "Comment", "/** \n\x09 * Array of runtime virtual textures into which we draw the spline segment. \n\x09 * The material also needs to be set up to output to a virtual texture. \n\x09 */" },
		{ "DisplayName", "Draw in Virtual Textures" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Array of runtime virtual textures into which we draw the spline segment.\nThe material also needs to be set up to output to a virtual texture." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_RuntimeVirtualTextures = { "RuntimeVirtualTextures", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineSegment, RuntimeVirtualTextures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_RuntimeVirtualTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_RuntimeVirtualTextures_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_VirtualTextureLodBias_MetaData[] = {
		{ "Category", "VirtualTexture" },
		{ "Comment", "/** Lod bias for rendering to runtime virtual texture. */" },
		{ "DisplayName", "Virtual Texture LOD Bias" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Lod bias for rendering to runtime virtual texture." },
		{ "UIMax", "8" },
		{ "UIMin", "-7" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_VirtualTextureLodBias = { "VirtualTextureLodBias", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineSegment, VirtualTextureLodBias), METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_VirtualTextureLodBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_VirtualTextureLodBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_VirtualTextureCullMips_MetaData[] = {
		{ "Category", "VirtualTexture" },
		{ "Comment", "/**\n\x09 * Number of lower mips in the runtime virtual texture to skip for rendering this primitive.\n\x09 * Larger values reduce the effective draw distance in the runtime virtual texture.\n\x09 * This culling method doesn't take into account primitive size or virtual texture size.\n\x09 */" },
		{ "DisplayName", "Virtual Texture Skip Mips" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Number of lower mips in the runtime virtual texture to skip for rendering this primitive.\nLarger values reduce the effective draw distance in the runtime virtual texture.\nThis culling method doesn't take into account primitive size or virtual texture size." },
		{ "UIMax", "7" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_VirtualTextureCullMips = { "VirtualTextureCullMips", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineSegment, VirtualTextureCullMips), METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_VirtualTextureCullMips_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_VirtualTextureCullMips_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_VirtualTextureMainPassMaxDrawDistance_MetaData[] = {
		{ "Category", "VirtualTexture" },
		{ "Comment", "/** Desired cull distance in the main pass if we are rendering to both the virtual texture AND the main pass. A value of 0 has no effect. */" },
		{ "DisplayName", "Max Draw Distance in Main Pass" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Desired cull distance in the main pass if we are rendering to both the virtual texture AND the main pass. A value of 0 has no effect." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_VirtualTextureMainPassMaxDrawDistance = { "VirtualTextureMainPassMaxDrawDistance", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineSegment, VirtualTextureMainPassMaxDrawDistance), METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_VirtualTextureMainPassMaxDrawDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_VirtualTextureMainPassMaxDrawDistance_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_VirtualTextureRenderPassType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_VirtualTextureRenderPassType_MetaData[] = {
		{ "Category", "VirtualTexture" },
		{ "Comment", "/** Controls if this component draws in the main pass as well as in the virtual texture. */" },
		{ "DisplayName", "Draw in Main Pass" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Controls if this component draws in the main pass as well as in the virtual texture." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_VirtualTextureRenderPassType = { "VirtualTextureRenderPassType", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineSegment, VirtualTextureRenderPassType), Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMainPassType, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_VirtualTextureRenderPassType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_VirtualTextureRenderPassType_MetaData)) }; // 439338851
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_BodyInstance_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Mesh Collision Settings */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Mesh Collision Settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_BodyInstance = { "BodyInstance", nullptr, (EPropertyFlags)0x0010000800000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineSegment, BodyInstance), Z_Construct_UScriptStruct_FBodyInstance, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_BodyInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_BodyInstance_MetaData)) }; // 1519692163
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bSelected_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
	};
#endif
	void Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bSelected_SetBit(void* Obj)
	{
		((ULandscapeSplineSegment*)Obj)->bSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bSelected = { "bSelected", nullptr, (EPropertyFlags)0x0020080800002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULandscapeSplineSegment), &Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bSelected_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bSelected_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bNavDirty_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
	};
#endif
	void Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bNavDirty_SetBit(void* Obj)
	{
		((ULandscapeSplineSegment*)Obj)->bNavDirty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bNavDirty = { "bNavDirty", nullptr, (EPropertyFlags)0x0020080800002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULandscapeSplineSegment), &Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bNavDirty_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bNavDirty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bNavDirty_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_SplineInfo_MetaData[] = {
		{ "Comment", "/** Actual data for spline. */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Actual data for spline." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_SplineInfo = { "SplineInfo", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineSegment, SplineInfo), Z_Construct_UScriptStruct_FInterpCurveVector, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_SplineInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_SplineInfo_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint, METADATA_PARAMS(nullptr, 0) }; // 990735101
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_Points_MetaData[] = {
		{ "Comment", "/** Spline points */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Spline points" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineSegment, Points), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_Points_MetaData)) }; // 990735101
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_Bounds_MetaData[] = {
		{ "Comment", "/** Bounds of points */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Bounds of points" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineSegment, Bounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_Bounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_Bounds_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_LocalMeshComponents_Inner = { "LocalMeshComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_LocalMeshComponents_MetaData[] = {
		{ "Comment", "/** Spline meshes */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Spline meshes" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_LocalMeshComponents = { "LocalMeshComponents", nullptr, (EPropertyFlags)0x0024488000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineSegment, LocalMeshComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_LocalMeshComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_LocalMeshComponents_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_ForeignWorlds_Inner = { "ForeignWorlds", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_ForeignWorlds_MetaData[] = {
		{ "Comment", "/** World references for mesh components stored in other streaming levels */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "World references for mesh components stored in other streaming levels" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_ForeignWorlds = { "ForeignWorlds", nullptr, (EPropertyFlags)0x0024c80800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineSegment, ForeignWorlds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_ForeignWorlds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_ForeignWorlds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_ModificationKey_MetaData[] = {
		{ "Comment", "/** Key for tracking whether this segment has been modified relative to the mesh components stored in other streaming levels */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineSegment.h" },
		{ "ToolTip", "Key for tracking whether this segment has been modified relative to the mesh components stored in other streaming levels" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_ModificationKey = { "ModificationKey", nullptr, (EPropertyFlags)0x0020c80800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineSegment, ModificationKey), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_ModificationKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_ModificationKey_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapeSplineSegment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_Connections,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_LayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bRaiseTerrain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bLowerTerrain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_SplineMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_SplineMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bEnableCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_CollisionProfileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bCastShadow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bHiddenInGame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bPlaceSplineMeshesInStreamingLevels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_RandomSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_LDMaxDrawDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_TranslucencySortPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bRenderCustomDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_CustomDepthStencilWriteMask_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_CustomDepthStencilWriteMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_CustomDepthStencilValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_RuntimeVirtualTextures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_RuntimeVirtualTextures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_VirtualTextureLodBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_VirtualTextureCullMips,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_VirtualTextureMainPassMaxDrawDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_VirtualTextureRenderPassType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_VirtualTextureRenderPassType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_BodyInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bSelected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_bNavDirty,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_SplineInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_Points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_Points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_Bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_LocalMeshComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_LocalMeshComponents,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_ForeignWorlds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_ForeignWorlds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineSegment_Statics::NewProp_ModificationKey,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULandscapeSplineSegment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeSplineSegment>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeSplineSegment_Statics::ClassParams = {
		&ULandscapeSplineSegment::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULandscapeSplineSegment_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineSegment_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineSegment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULandscapeSplineSegment()
	{
		if (!Z_Registration_Info_UClass_ULandscapeSplineSegment.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeSplineSegment.OuterSingleton, Z_Construct_UClass_ULandscapeSplineSegment_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULandscapeSplineSegment.OuterSingleton;
	}
	template<> LANDSCAPE_API UClass* StaticClass<ULandscapeSplineSegment>()
	{
		return ULandscapeSplineSegment::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeSplineSegment);
	ULandscapeSplineSegment::~ULandscapeSplineSegment() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULandscapeSplineSegment)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_Statics::EnumInfo[] = {
		{ LandscapeSplineMeshOrientation_StaticEnum, TEXT("LandscapeSplineMeshOrientation"), &Z_Registration_Info_UEnum_LandscapeSplineMeshOrientation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2629647275U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_Statics::ScriptStructInfo[] = {
		{ FLandscapeSplineInterpPoint::StaticStruct, Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_Statics::NewStructOps, TEXT("LandscapeSplineInterpPoint"), &Z_Registration_Info_UScriptStruct_LandscapeSplineInterpPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLandscapeSplineInterpPoint), 990735101U) },
		{ FLandscapeSplineSegmentConnection::StaticStruct, Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_Statics::NewStructOps, TEXT("LandscapeSplineSegmentConnection"), &Z_Registration_Info_UScriptStruct_LandscapeSplineSegmentConnection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLandscapeSplineSegmentConnection), 1331111069U) },
		{ FLandscapeSplineMeshEntry::StaticStruct, Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_Statics::NewStructOps, TEXT("LandscapeSplineMeshEntry"), &Z_Registration_Info_UScriptStruct_LandscapeSplineMeshEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLandscapeSplineMeshEntry), 4159355756U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULandscapeSplineSegment, ULandscapeSplineSegment::StaticClass, TEXT("ULandscapeSplineSegment"), &Z_Registration_Info_UClass_ULandscapeSplineSegment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeSplineSegment), 3067701450U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_3845246092(TEXT("/Script/Landscape"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineSegment_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
