// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AppleARKitFaceMeshComponent.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAppleARKitFaceMeshComponent() {}
// Cross Module References
	APPLEARKITFACESUPPORT_API UClass* Z_Construct_UClass_UAppleARKitFaceMeshComponent();
	APPLEARKITFACESUPPORT_API UClass* Z_Construct_UClass_UAppleARKitFaceMeshComponent_NoRegister();
	APPLEARKITFACESUPPORT_API UEnum* Z_Construct_UEnum_AppleARKitFaceSupport_EARFaceComponentTransformMixing();
	APPLEARKITFACESUPPORT_API UScriptStruct* Z_Construct_UScriptStruct_FNetQuantizeFaceCurve();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARFaceBlendShape();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent();
	UPackage* Z_Construct_UPackage__Script_AppleARKitFaceSupport();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EARFaceComponentTransformMixing;
	static UEnum* EARFaceComponentTransformMixing_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EARFaceComponentTransformMixing.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EARFaceComponentTransformMixing.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AppleARKitFaceSupport_EARFaceComponentTransformMixing, (UObject*)Z_Construct_UPackage__Script_AppleARKitFaceSupport(), TEXT("EARFaceComponentTransformMixing"));
		}
		return Z_Registration_Info_UEnum_EARFaceComponentTransformMixing.OuterSingleton;
	}
	template<> APPLEARKITFACESUPPORT_API UEnum* StaticEnum<EARFaceComponentTransformMixing>()
	{
		return EARFaceComponentTransformMixing_StaticEnum();
	}
	struct Z_Construct_UEnum_AppleARKitFaceSupport_EARFaceComponentTransformMixing_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AppleARKitFaceSupport_EARFaceComponentTransformMixing_Statics::Enumerators[] = {
		{ "EARFaceComponentTransformMixing::ComponentOnly", (int64)EARFaceComponentTransformMixing::ComponentOnly },
		{ "EARFaceComponentTransformMixing::ComponentLocationTrackedRotation", (int64)EARFaceComponentTransformMixing::ComponentLocationTrackedRotation },
		{ "EARFaceComponentTransformMixing::ComponentWithTracked", (int64)EARFaceComponentTransformMixing::ComponentWithTracked },
		{ "EARFaceComponentTransformMixing::TrackingOnly", (int64)EARFaceComponentTransformMixing::TrackingOnly },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AppleARKitFaceSupport_EARFaceComponentTransformMixing_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR AugmentedReality" },
		{ "ComponentLocationTrackedRotation.Comment", "/** Use the component's location and apply the rotation from the tracked mesh */" },
		{ "ComponentLocationTrackedRotation.Name", "EARFaceComponentTransformMixing::ComponentLocationTrackedRotation" },
		{ "ComponentLocationTrackedRotation.ToolTip", "Use the component's location and apply the rotation from the tracked mesh" },
		{ "ComponentOnly.Comment", "/** Uses the component's transform exclusively. Only setting for non-tracked meshes */" },
		{ "ComponentOnly.Name", "EARFaceComponentTransformMixing::ComponentOnly" },
		{ "ComponentOnly.ToolTip", "Uses the component's transform exclusively. Only setting for non-tracked meshes" },
		{ "ComponentWithTracked.Comment", "/** Concatenate the component and the tracked face transforms */" },
		{ "ComponentWithTracked.Name", "EARFaceComponentTransformMixing::ComponentWithTracked" },
		{ "ComponentWithTracked.ToolTip", "Concatenate the component and the tracked face transforms" },
		{ "Experimental", "" },
		{ "ModuleRelativePath", "Public/AppleARKitFaceMeshComponent.h" },
		{ "TrackingOnly.Comment", "/** Use only the tracked face transform */" },
		{ "TrackingOnly.Name", "EARFaceComponentTransformMixing::TrackingOnly" },
		{ "TrackingOnly.ToolTip", "Use only the tracked face transform" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AppleARKitFaceSupport_EARFaceComponentTransformMixing_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AppleARKitFaceSupport,
		nullptr,
		"EARFaceComponentTransformMixing",
		"EARFaceComponentTransformMixing",
		Z_Construct_UEnum_AppleARKitFaceSupport_EARFaceComponentTransformMixing_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AppleARKitFaceSupport_EARFaceComponentTransformMixing_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AppleARKitFaceSupport_EARFaceComponentTransformMixing_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AppleARKitFaceSupport_EARFaceComponentTransformMixing_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AppleARKitFaceSupport_EARFaceComponentTransformMixing()
	{
		if (!Z_Registration_Info_UEnum_EARFaceComponentTransformMixing.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EARFaceComponentTransformMixing.InnerSingleton, Z_Construct_UEnum_AppleARKitFaceSupport_EARFaceComponentTransformMixing_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EARFaceComponentTransformMixing.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NetQuantizeFaceCurve;
class UScriptStruct* FNetQuantizeFaceCurve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NetQuantizeFaceCurve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NetQuantizeFaceCurve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetQuantizeFaceCurve, (UObject*)Z_Construct_UPackage__Script_AppleARKitFaceSupport(), TEXT("NetQuantizeFaceCurve"));
	}
	return Z_Registration_Info_UScriptStruct_NetQuantizeFaceCurve.OuterSingleton;
}
template<> APPLEARKITFACESUPPORT_API UScriptStruct* StaticStruct<FNetQuantizeFaceCurve>()
{
	return FNetQuantizeFaceCurve::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNetQuantizeFaceCurve_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetQuantizeFaceCurve_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Packs the curve into 2 bytes with the amount being +/- 127\n */" },
		{ "ModuleRelativePath", "Public/AppleARKitFaceMeshComponent.h" },
		{ "ToolTip", "Packs the curve into 2 bytes with the amount being +/- 127" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNetQuantizeFaceCurve_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetQuantizeFaceCurve>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetQuantizeFaceCurve_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AppleARKitFaceSupport,
		nullptr,
		&NewStructOps,
		"NetQuantizeFaceCurve",
		sizeof(FNetQuantizeFaceCurve),
		alignof(FNetQuantizeFaceCurve),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNetQuantizeFaceCurve_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetQuantizeFaceCurve_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNetQuantizeFaceCurve()
	{
		if (!Z_Registration_Info_UScriptStruct_NetQuantizeFaceCurve.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NetQuantizeFaceCurve.InnerSingleton, Z_Construct_UScriptStruct_FNetQuantizeFaceCurve_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NetQuantizeFaceCurve.InnerSingleton;
	}
	DEFINE_FUNCTION(UAppleARKitFaceMeshComponent::execServerUpdateFaceCurves)
	{
		P_GET_TARRAY(FNetQuantizeFaceCurve,Z_Param_ClientCurves);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerUpdateFaceCurves_Validate(Z_Param_ClientCurves))
		{
			RPC_ValidateFailed(TEXT("ServerUpdateFaceCurves_Validate"));
			return;
		}
		P_THIS->ServerUpdateFaceCurves_Implementation(Z_Param_ClientCurves);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAppleARKitFaceMeshComponent::execOnRep_RemoteCurves)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_RemoteCurves();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAppleARKitFaceMeshComponent::execGetTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAppleARKitFaceMeshComponent::execPublishViaLiveLink)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SubjectName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PublishViaLiveLink(Z_Param_SubjectName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAppleARKitFaceMeshComponent::execGetLastUpdateTimestamp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLastUpdateTimestamp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAppleARKitFaceMeshComponent::execGetLastUpdateFrameNumber)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLastUpdateFrameNumber();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAppleARKitFaceMeshComponent::execSetAutoBind)
	{
		P_GET_UBOOL(Z_Param_bAutoBind);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAutoBind(Z_Param_bAutoBind);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAppleARKitFaceMeshComponent::execUpdateMesh)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateMesh(Z_Param_Out_Vertices);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAppleARKitFaceMeshComponent::execUpdateMeshFromBlendShapes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateMeshFromBlendShapes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAppleARKitFaceMeshComponent::execGetFaceBlendShapeAmount)
	{
		P_GET_ENUM(EARFaceBlendShape,Z_Param_BlendShape);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFaceBlendShapeAmount(EARFaceBlendShape(Z_Param_BlendShape));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAppleARKitFaceMeshComponent::execSetBlendShapeAmount)
	{
		P_GET_ENUM(EARFaceBlendShape,Z_Param_BlendShape);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBlendShapeAmount(EARFaceBlendShape(Z_Param_BlendShape),Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAppleARKitFaceMeshComponent::execSetBlendShapes)
	{
		P_GET_TMAP_REF(EARFaceBlendShape,float,Z_Param_Out_InBlendShapes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBlendShapes(Z_Param_Out_InBlendShapes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAppleARKitFaceMeshComponent::execCreateMesh)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices);
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV0);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateMesh(Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_UV0);
		P_NATIVE_END;
	}
	struct AppleARKitFaceMeshComponent_eventServerUpdateFaceCurves_Parms
	{
		TArray<FNetQuantizeFaceCurve> ClientCurves;
	};
	static FName NAME_UAppleARKitFaceMeshComponent_ServerUpdateFaceCurves = FName(TEXT("ServerUpdateFaceCurves"));
	void UAppleARKitFaceMeshComponent::ServerUpdateFaceCurves(TArray<FNetQuantizeFaceCurve> const& ClientCurves)
	{
		AppleARKitFaceMeshComponent_eventServerUpdateFaceCurves_Parms Parms;
		Parms.ClientCurves=ClientCurves;
		ProcessEvent(FindFunctionChecked(NAME_UAppleARKitFaceMeshComponent_ServerUpdateFaceCurves),&Parms);
	}
	void UAppleARKitFaceMeshComponent::StaticRegisterNativesUAppleARKitFaceMeshComponent()
	{
		UClass* Class = UAppleARKitFaceMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateMesh", &UAppleARKitFaceMeshComponent::execCreateMesh },
			{ "GetFaceBlendShapeAmount", &UAppleARKitFaceMeshComponent::execGetFaceBlendShapeAmount },
			{ "GetLastUpdateFrameNumber", &UAppleARKitFaceMeshComponent::execGetLastUpdateFrameNumber },
			{ "GetLastUpdateTimestamp", &UAppleARKitFaceMeshComponent::execGetLastUpdateTimestamp },
			{ "GetTransform", &UAppleARKitFaceMeshComponent::execGetTransform },
			{ "OnRep_RemoteCurves", &UAppleARKitFaceMeshComponent::execOnRep_RemoteCurves },
			{ "PublishViaLiveLink", &UAppleARKitFaceMeshComponent::execPublishViaLiveLink },
			{ "ServerUpdateFaceCurves", &UAppleARKitFaceMeshComponent::execServerUpdateFaceCurves },
			{ "SetAutoBind", &UAppleARKitFaceMeshComponent::execSetAutoBind },
			{ "SetBlendShapeAmount", &UAppleARKitFaceMeshComponent::execSetBlendShapeAmount },
			{ "SetBlendShapes", &UAppleARKitFaceMeshComponent::execSetBlendShapes },
			{ "UpdateMesh", &UAppleARKitFaceMeshComponent::execUpdateMesh },
			{ "UpdateMeshFromBlendShapes", &UAppleARKitFaceMeshComponent::execUpdateMeshFromBlendShapes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAppleARKitFaceMeshComponent_CreateMesh_Statics
	{
		struct AppleARKitFaceMeshComponent_eventCreateMesh_Parms
		{
			TArray<FVector> Vertices;
			TArray<int32> Triangles;
			TArray<FVector2D> UV0;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV0_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV0_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UV0;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAppleARKitFaceMeshComponent_CreateMesh_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAppleARKitFaceMeshComponent_CreateMesh_Statics::NewProp_Vertices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAppleARKitFaceMeshComponent_CreateMesh_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AppleARKitFaceMeshComponent_eventCreateMesh_Parms, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_CreateMesh_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_CreateMesh_Statics::NewProp_Vertices_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAppleARKitFaceMeshComponent_CreateMesh_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAppleARKitFaceMeshComponent_CreateMesh_Statics::NewProp_Triangles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAppleARKitFaceMeshComponent_CreateMesh_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AppleARKitFaceMeshComponent_eventCreateMesh_Parms, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_CreateMesh_Statics::NewProp_Triangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_CreateMesh_Statics::NewProp_Triangles_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAppleARKitFaceMeshComponent_CreateMesh_Statics::NewProp_UV0_Inner = { "UV0", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAppleARKitFaceMeshComponent_CreateMesh_Statics::NewProp_UV0_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAppleARKitFaceMeshComponent_CreateMesh_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AppleARKitFaceMeshComponent_eventCreateMesh_Parms, UV0), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_CreateMesh_Statics::NewProp_UV0_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_CreateMesh_Statics::NewProp_UV0_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAppleARKitFaceMeshComponent_CreateMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleARKitFaceMeshComponent_CreateMesh_Statics::NewProp_Vertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleARKitFaceMeshComponent_CreateMesh_Statics::NewProp_Vertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleARKitFaceMeshComponent_CreateMesh_Statics::NewProp_Triangles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleARKitFaceMeshComponent_CreateMesh_Statics::NewProp_Triangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleARKitFaceMeshComponent_CreateMesh_Statics::NewProp_UV0_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleARKitFaceMeshComponent_CreateMesh_Statics::NewProp_UV0,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAppleARKitFaceMeshComponent_CreateMesh_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "UV0" },
		{ "Category", "Components|ARFaceMesh" },
		{ "Comment", "/**\n\x09 *\x09""Create the initial face mesh from raw mesh data\n\x09 *\n\x09 *\x09@param\x09Vertices\x09\x09\x09Vertex buffer of all vertex positions to use for this mesh section.\n\x09 *\x09@param\x09Triangles\x09\x09\x09Index buffer indicating which vertices make up each triangle. Length must be a multiple of 3.\n\x09 *\x09@param\x09UV0\x09\x09\x09\x09\x09Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n\x09 */" },
		{ "DisplayName", "Create Face Mesh" },
		{ "ModuleRelativePath", "Public/AppleARKitFaceMeshComponent.h" },
		{ "ToolTip", "Create the initial face mesh from raw mesh data\n\n@param  Vertices                        Vertex buffer of all vertex positions to use for this mesh section.\n@param  Triangles                       Index buffer indicating which vertices make up each triangle. Length must be a multiple of 3.\n@param  UV0                                     Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAppleARKitFaceMeshComponent_CreateMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAppleARKitFaceMeshComponent, nullptr, "CreateMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_CreateMesh_Statics::AppleARKitFaceMeshComponent_eventCreateMesh_Parms), Z_Construct_UFunction_UAppleARKitFaceMeshComponent_CreateMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_CreateMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_CreateMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_CreateMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAppleARKitFaceMeshComponent_CreateMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAppleARKitFaceMeshComponent_CreateMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetFaceBlendShapeAmount_Statics
	{
		struct AppleARKitFaceMeshComponent_eventGetFaceBlendShapeAmount_Parms
		{
			EARFaceBlendShape BlendShape;
			float ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlendShape_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendShape;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetFaceBlendShapeAmount_Statics::NewProp_BlendShape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetFaceBlendShapeAmount_Statics::NewProp_BlendShape = { "BlendShape", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AppleARKitFaceMeshComponent_eventGetFaceBlendShapeAmount_Parms, BlendShape), Z_Construct_UEnum_AugmentedReality_EARFaceBlendShape, METADATA_PARAMS(nullptr, 0) }; // 2178612967
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetFaceBlendShapeAmount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AppleARKitFaceMeshComponent_eventGetFaceBlendShapeAmount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetFaceBlendShapeAmount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetFaceBlendShapeAmount_Statics::NewProp_BlendShape_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetFaceBlendShapeAmount_Statics::NewProp_BlendShape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetFaceBlendShapeAmount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetFaceBlendShapeAmount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|ARFaceMesh" },
		{ "Comment", "/**\n\x09 * Returns the value of the specified blend shape\n\x09 *\n\x09 * @param BlendShape\x09\x09\x09The blend shape to query\n\x09 *\n\x09 * @return the current amount the blend shape should be applied\n\x09 */" },
		{ "ModuleRelativePath", "Public/AppleARKitFaceMeshComponent.h" },
		{ "ToolTip", "Returns the value of the specified blend shape\n\n@param BlendShape                    The blend shape to query\n\n@return the current amount the blend shape should be applied" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetFaceBlendShapeAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAppleARKitFaceMeshComponent, nullptr, "GetFaceBlendShapeAmount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetFaceBlendShapeAmount_Statics::AppleARKitFaceMeshComponent_eventGetFaceBlendShapeAmount_Parms), Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetFaceBlendShapeAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetFaceBlendShapeAmount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetFaceBlendShapeAmount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetFaceBlendShapeAmount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetFaceBlendShapeAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetFaceBlendShapeAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetLastUpdateFrameNumber_Statics
	{
		struct AppleARKitFaceMeshComponent_eventGetLastUpdateFrameNumber_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetLastUpdateFrameNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AppleARKitFaceMeshComponent_eventGetLastUpdateFrameNumber_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetLastUpdateFrameNumber_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetLastUpdateFrameNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetLastUpdateFrameNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|ARFaceMesh" },
		{ "Comment", "/** Returns the frame number that was last used to update this component */" },
		{ "ModuleRelativePath", "Public/AppleARKitFaceMeshComponent.h" },
		{ "ToolTip", "Returns the frame number that was last used to update this component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetLastUpdateFrameNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAppleARKitFaceMeshComponent, nullptr, "GetLastUpdateFrameNumber", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetLastUpdateFrameNumber_Statics::AppleARKitFaceMeshComponent_eventGetLastUpdateFrameNumber_Parms), Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetLastUpdateFrameNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetLastUpdateFrameNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetLastUpdateFrameNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetLastUpdateFrameNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetLastUpdateFrameNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetLastUpdateFrameNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetLastUpdateTimestamp_Statics
	{
		struct AppleARKitFaceMeshComponent_eventGetLastUpdateTimestamp_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetLastUpdateTimestamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AppleARKitFaceMeshComponent_eventGetLastUpdateTimestamp_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetLastUpdateTimestamp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetLastUpdateTimestamp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetLastUpdateTimestamp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|ARFaceMesh" },
		{ "Comment", "/** Returns the frame timestamp that was last used to update this component */" },
		{ "ModuleRelativePath", "Public/AppleARKitFaceMeshComponent.h" },
		{ "ToolTip", "Returns the frame timestamp that was last used to update this component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetLastUpdateTimestamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAppleARKitFaceMeshComponent, nullptr, "GetLastUpdateTimestamp", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetLastUpdateTimestamp_Statics::AppleARKitFaceMeshComponent_eventGetLastUpdateTimestamp_Parms), Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetLastUpdateTimestamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetLastUpdateTimestamp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetLastUpdateTimestamp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetLastUpdateTimestamp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetLastUpdateTimestamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetLastUpdateTimestamp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetTransform_Statics
	{
		struct AppleARKitFaceMeshComponent_eventGetTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AppleARKitFaceMeshComponent_eventGetTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|ARFaceMesh" },
		{ "Comment", "/** Get the transform that the AR camera has detected */" },
		{ "ModuleRelativePath", "Public/AppleARKitFaceMeshComponent.h" },
		{ "ToolTip", "Get the transform that the AR camera has detected" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAppleARKitFaceMeshComponent, nullptr, "GetTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetTransform_Statics::AppleARKitFaceMeshComponent_eventGetTransform_Parms), Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAppleARKitFaceMeshComponent_OnRep_RemoteCurves_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAppleARKitFaceMeshComponent_OnRep_RemoteCurves_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Merges in the face curve deltas and pushes them to LiveLink */" },
		{ "ModuleRelativePath", "Public/AppleARKitFaceMeshComponent.h" },
		{ "ToolTip", "Merges in the face curve deltas and pushes them to LiveLink" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAppleARKitFaceMeshComponent_OnRep_RemoteCurves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAppleARKitFaceMeshComponent, nullptr, "OnRep_RemoteCurves", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_OnRep_RemoteCurves_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_OnRep_RemoteCurves_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAppleARKitFaceMeshComponent_OnRep_RemoteCurves()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAppleARKitFaceMeshComponent_OnRep_RemoteCurves_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAppleARKitFaceMeshComponent_PublishViaLiveLink_Statics
	{
		struct AppleARKitFaceMeshComponent_eventPublishViaLiveLink_Parms
		{
			FName SubjectName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubjectName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAppleARKitFaceMeshComponent_PublishViaLiveLink_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AppleARKitFaceMeshComponent_eventPublishViaLiveLink_Parms, SubjectName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAppleARKitFaceMeshComponent_PublishViaLiveLink_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleARKitFaceMeshComponent_PublishViaLiveLink_Statics::NewProp_SubjectName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAppleARKitFaceMeshComponent_PublishViaLiveLink_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|ARFaceMesh" },
		{ "Comment", "/** Starts LiveLink publishing of this face component's data so that it can be used by the animation system */" },
		{ "ModuleRelativePath", "Public/AppleARKitFaceMeshComponent.h" },
		{ "ToolTip", "Starts LiveLink publishing of this face component's data so that it can be used by the animation system" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAppleARKitFaceMeshComponent_PublishViaLiveLink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAppleARKitFaceMeshComponent, nullptr, "PublishViaLiveLink", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_PublishViaLiveLink_Statics::AppleARKitFaceMeshComponent_eventPublishViaLiveLink_Parms), Z_Construct_UFunction_UAppleARKitFaceMeshComponent_PublishViaLiveLink_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_PublishViaLiveLink_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_PublishViaLiveLink_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_PublishViaLiveLink_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAppleARKitFaceMeshComponent_PublishViaLiveLink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAppleARKitFaceMeshComponent_PublishViaLiveLink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAppleARKitFaceMeshComponent_ServerUpdateFaceCurves_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClientCurves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientCurves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ClientCurves;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAppleARKitFaceMeshComponent_ServerUpdateFaceCurves_Statics::NewProp_ClientCurves_Inner = { "ClientCurves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNetQuantizeFaceCurve, METADATA_PARAMS(nullptr, 0) }; // 2705178799
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAppleARKitFaceMeshComponent_ServerUpdateFaceCurves_Statics::NewProp_ClientCurves_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAppleARKitFaceMeshComponent_ServerUpdateFaceCurves_Statics::NewProp_ClientCurves = { "ClientCurves", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AppleARKitFaceMeshComponent_eventServerUpdateFaceCurves_Parms, ClientCurves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_ServerUpdateFaceCurves_Statics::NewProp_ClientCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_ServerUpdateFaceCurves_Statics::NewProp_ClientCurves_MetaData)) }; // 2705178799
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAppleARKitFaceMeshComponent_ServerUpdateFaceCurves_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleARKitFaceMeshComponent_ServerUpdateFaceCurves_Statics::NewProp_ClientCurves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleARKitFaceMeshComponent_ServerUpdateFaceCurves_Statics::NewProp_ClientCurves,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAppleARKitFaceMeshComponent_ServerUpdateFaceCurves_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Sends the updated curves from the client to the server so that it can replicate to other clients\n\x09 *\n\x09 * @param ClientCurves the client's set of updated curves\n\x09 */" },
		{ "ModuleRelativePath", "Public/AppleARKitFaceMeshComponent.h" },
		{ "ToolTip", "Sends the updated curves from the client to the server so that it can replicate to other clients\n\n@param ClientCurves the client's set of updated curves" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAppleARKitFaceMeshComponent_ServerUpdateFaceCurves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAppleARKitFaceMeshComponent, nullptr, "ServerUpdateFaceCurves", nullptr, nullptr, sizeof(AppleARKitFaceMeshComponent_eventServerUpdateFaceCurves_Parms), Z_Construct_UFunction_UAppleARKitFaceMeshComponent_ServerUpdateFaceCurves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_ServerUpdateFaceCurves_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_ServerUpdateFaceCurves_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_ServerUpdateFaceCurves_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAppleARKitFaceMeshComponent_ServerUpdateFaceCurves()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAppleARKitFaceMeshComponent_ServerUpdateFaceCurves_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetAutoBind_Statics
	{
		struct AppleARKitFaceMeshComponent_eventSetAutoBind_Parms
		{
			bool bAutoBind;
		};
		static void NewProp_bAutoBind_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoBind;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetAutoBind_Statics::NewProp_bAutoBind_SetBit(void* Obj)
	{
		((AppleARKitFaceMeshComponent_eventSetAutoBind_Parms*)Obj)->bAutoBind = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetAutoBind_Statics::NewProp_bAutoBind = { "bAutoBind", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AppleARKitFaceMeshComponent_eventSetAutoBind_Parms), &Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetAutoBind_Statics::NewProp_bAutoBind_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetAutoBind_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetAutoBind_Statics::NewProp_bAutoBind,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetAutoBind_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|ARFaceMesh" },
		{ "Comment", "/**\n\x09 * If auto bind is true, then this component will update itself from the local face tracking data each tick. If auto bind is off, ticking is disabled\n\x09 *\n\x09 * @param\x09""bAutoBind\x09\x09\x09true to enable, false to disable\n\x09 */" },
		{ "DisplayName", "Modify auto bind to local face tracking" },
		{ "ModuleRelativePath", "Public/AppleARKitFaceMeshComponent.h" },
		{ "ToolTip", "If auto bind is true, then this component will update itself from the local face tracking data each tick. If auto bind is off, ticking is disabled\n\n@param       bAutoBind                       true to enable, false to disable" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetAutoBind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAppleARKitFaceMeshComponent, nullptr, "SetAutoBind", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetAutoBind_Statics::AppleARKitFaceMeshComponent_eventSetAutoBind_Parms), Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetAutoBind_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetAutoBind_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetAutoBind_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetAutoBind_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetAutoBind()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetAutoBind_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetBlendShapeAmount_Statics
	{
		struct AppleARKitFaceMeshComponent_eventSetBlendShapeAmount_Parms
		{
			EARFaceBlendShape BlendShape;
			float Amount;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlendShape_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendShape;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetBlendShapeAmount_Statics::NewProp_BlendShape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetBlendShapeAmount_Statics::NewProp_BlendShape = { "BlendShape", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AppleARKitFaceMeshComponent_eventSetBlendShapeAmount_Parms, BlendShape), Z_Construct_UEnum_AugmentedReality_EARFaceBlendShape, METADATA_PARAMS(nullptr, 0) }; // 2178612967
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetBlendShapeAmount_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AppleARKitFaceMeshComponent_eventSetBlendShapeAmount_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetBlendShapeAmount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetBlendShapeAmount_Statics::NewProp_BlendShape_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetBlendShapeAmount_Statics::NewProp_BlendShape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetBlendShapeAmount_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetBlendShapeAmount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|ARFaceMesh" },
		{ "Comment", "/**\n\x09 *\x09Sets the amount for a given blend shape\n\x09 *\n\x09 *\x09@param\x09""BlendShape\x09\x09\x09The blend shape to modify\n\x09 *\x09@param\x09""Amount\x09\x09\x09\x09The amount of the blend shape to apply (0..1)\n\x09 */" },
		{ "DisplayName", "Set the value of a Blend Shape" },
		{ "ModuleRelativePath", "Public/AppleARKitFaceMeshComponent.h" },
		{ "ToolTip", "Sets the amount for a given blend shape\n\n@param  BlendShape                      The blend shape to modify\n@param  Amount                          The amount of the blend shape to apply (0..1)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetBlendShapeAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAppleARKitFaceMeshComponent, nullptr, "SetBlendShapeAmount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetBlendShapeAmount_Statics::AppleARKitFaceMeshComponent_eventSetBlendShapeAmount_Parms), Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetBlendShapeAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetBlendShapeAmount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetBlendShapeAmount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetBlendShapeAmount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetBlendShapeAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetBlendShapeAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetBlendShapes_Statics
	{
		struct AppleARKitFaceMeshComponent_eventSetBlendShapes_Parms
		{
			TMap<EARFaceBlendShape,float> InBlendShapes;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InBlendShapes_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InBlendShapes_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InBlendShapes_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBlendShapes_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InBlendShapes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetBlendShapes_Statics::NewProp_InBlendShapes_ValueProp = { "InBlendShapes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetBlendShapes_Statics::NewProp_InBlendShapes_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetBlendShapes_Statics::NewProp_InBlendShapes_Key_KeyProp = { "InBlendShapes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_AugmentedReality_EARFaceBlendShape, METADATA_PARAMS(nullptr, 0) }; // 2178612967
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetBlendShapes_Statics::NewProp_InBlendShapes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetBlendShapes_Statics::NewProp_InBlendShapes = { "InBlendShapes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AppleARKitFaceMeshComponent_eventSetBlendShapes_Parms, InBlendShapes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetBlendShapes_Statics::NewProp_InBlendShapes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetBlendShapes_Statics::NewProp_InBlendShapes_MetaData)) }; // 2178612967
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetBlendShapes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetBlendShapes_Statics::NewProp_InBlendShapes_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetBlendShapes_Statics::NewProp_InBlendShapes_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetBlendShapes_Statics::NewProp_InBlendShapes_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetBlendShapes_Statics::NewProp_InBlendShapes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetBlendShapes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|ARFaceMesh" },
		{ "Comment", "/**\n\x09 *\x09Set all of the blend shapes for this instance from a set of blend shapes\n\x09 *\n\x09 *\x09@param\x09""BlendShapes\x09\x09\x09The set of blend shapes to conform the face mesh to\n\x09 */" },
		{ "DisplayName", "Create Face Mesh from Blend Shapes" },
		{ "ModuleRelativePath", "Public/AppleARKitFaceMeshComponent.h" },
		{ "ToolTip", "Set all of the blend shapes for this instance from a set of blend shapes\n\n@param  BlendShapes                     The set of blend shapes to conform the face mesh to" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetBlendShapes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAppleARKitFaceMeshComponent, nullptr, "SetBlendShapes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetBlendShapes_Statics::AppleARKitFaceMeshComponent_eventSetBlendShapes_Parms), Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetBlendShapes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetBlendShapes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetBlendShapes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetBlendShapes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetBlendShapes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetBlendShapes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAppleARKitFaceMeshComponent_UpdateMesh_Statics
	{
		struct AppleARKitFaceMeshComponent_eventUpdateMesh_Parms
		{
			TArray<FVector> Vertices;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAppleARKitFaceMeshComponent_UpdateMesh_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAppleARKitFaceMeshComponent_UpdateMesh_Statics::NewProp_Vertices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAppleARKitFaceMeshComponent_UpdateMesh_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AppleARKitFaceMeshComponent_eventUpdateMesh_Parms, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_UpdateMesh_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_UpdateMesh_Statics::NewProp_Vertices_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAppleARKitFaceMeshComponent_UpdateMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleARKitFaceMeshComponent_UpdateMesh_Statics::NewProp_Vertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleARKitFaceMeshComponent_UpdateMesh_Statics::NewProp_Vertices,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAppleARKitFaceMeshComponent_UpdateMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|ARFaceMesh" },
		{ "Comment", "/**\n\x09 *\x09Updates the face mesh vertices. The topology and UVs do not change post creation so only vertices are updated\n\x09 *\n\x09 *\x09@param\x09Vertices\x09\x09\x09Vertex buffer of all vertex positions to use for this mesh section.\n\x09 */" },
		{ "DisplayName", "Update Mesh Section FColor" },
		{ "ModuleRelativePath", "Public/AppleARKitFaceMeshComponent.h" },
		{ "ToolTip", "Updates the face mesh vertices. The topology and UVs do not change post creation so only vertices are updated\n\n@param  Vertices                        Vertex buffer of all vertex positions to use for this mesh section." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAppleARKitFaceMeshComponent_UpdateMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAppleARKitFaceMeshComponent, nullptr, "UpdateMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_UpdateMesh_Statics::AppleARKitFaceMeshComponent_eventUpdateMesh_Parms), Z_Construct_UFunction_UAppleARKitFaceMeshComponent_UpdateMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_UpdateMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_UpdateMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_UpdateMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAppleARKitFaceMeshComponent_UpdateMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAppleARKitFaceMeshComponent_UpdateMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAppleARKitFaceMeshComponent_UpdateMeshFromBlendShapes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAppleARKitFaceMeshComponent_UpdateMeshFromBlendShapes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|ARFaceMesh" },
		{ "Comment", "/**\n\x09 *\x09""Create/replace the face mesh from the current set of blend shapes if the device supports it\n\x09 */" },
		{ "DisplayName", "Update Face Mesh from Blend Shapes" },
		{ "ModuleRelativePath", "Public/AppleARKitFaceMeshComponent.h" },
		{ "ToolTip", "Create/replace the face mesh from the current set of blend shapes if the device supports it" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAppleARKitFaceMeshComponent_UpdateMeshFromBlendShapes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAppleARKitFaceMeshComponent, nullptr, "UpdateMeshFromBlendShapes", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_UpdateMeshFromBlendShapes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleARKitFaceMeshComponent_UpdateMeshFromBlendShapes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAppleARKitFaceMeshComponent_UpdateMeshFromBlendShapes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAppleARKitFaceMeshComponent_UpdateMeshFromBlendShapes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAppleARKitFaceMeshComponent);
	UClass* Z_Construct_UClass_UAppleARKitFaceMeshComponent_NoRegister()
	{
		return UAppleARKitFaceMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWantsMeshUpdates_MetaData[];
#endif
		static void NewProp_bWantsMeshUpdates_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantsMeshUpdates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWantsCollision_MetaData[];
#endif
		static void NewProp_bWantsCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantsCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoBindToLocalFaceMesh_MetaData[];
#endif
		static void NewProp_bAutoBindToLocalFaceMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoBindToLocalFaceMesh;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TransformSetting_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformSetting_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TransformSetting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFlipTrackedRotation_MetaData[];
#endif
		static void NewProp_bFlipTrackedRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipTrackedRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FaceMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FaceMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LiveLinkSubjectName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LiveLinkSubjectName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RemoteCurves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoteCurves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RemoteCurves;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UProceduralMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AppleARKitFaceSupport,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAppleARKitFaceMeshComponent_CreateMesh, "CreateMesh" }, // 3140671471
		{ &Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetFaceBlendShapeAmount, "GetFaceBlendShapeAmount" }, // 1041810896
		{ &Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetLastUpdateFrameNumber, "GetLastUpdateFrameNumber" }, // 3144546535
		{ &Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetLastUpdateTimestamp, "GetLastUpdateTimestamp" }, // 2375441456
		{ &Z_Construct_UFunction_UAppleARKitFaceMeshComponent_GetTransform, "GetTransform" }, // 2689696660
		{ &Z_Construct_UFunction_UAppleARKitFaceMeshComponent_OnRep_RemoteCurves, "OnRep_RemoteCurves" }, // 2236531257
		{ &Z_Construct_UFunction_UAppleARKitFaceMeshComponent_PublishViaLiveLink, "PublishViaLiveLink" }, // 3821876094
		{ &Z_Construct_UFunction_UAppleARKitFaceMeshComponent_ServerUpdateFaceCurves, "ServerUpdateFaceCurves" }, // 1414623673
		{ &Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetAutoBind, "SetAutoBind" }, // 2911775561
		{ &Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetBlendShapeAmount, "SetBlendShapeAmount" }, // 682730383
		{ &Z_Construct_UFunction_UAppleARKitFaceMeshComponent_SetBlendShapes, "SetBlendShapes" }, // 1634839032
		{ &Z_Construct_UFunction_UAppleARKitFaceMeshComponent_UpdateMesh, "UpdateMesh" }, // 2176269507
		{ &Z_Construct_UFunction_UAppleARKitFaceMeshComponent_UpdateMeshFromBlendShapes, "UpdateMeshFromBlendShapes" }, // 265792879
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AR" },
		{ "Comment", "/**\n * This component is updated by the ARSystem with face data on devices that have support for it\n */" },
		{ "HideCategories", "Object LOD Components|ProceduralMesh Object LOD Mobility Trigger" },
		{ "IncludePath", "AppleARKitFaceMeshComponent.h" },
		{ "ModuleRelativePath", "Public/AppleARKitFaceMeshComponent.h" },
		{ "ToolTip", "This component is updated by the ARSystem with face data on devices that have support for it" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_bWantsMeshUpdates_MetaData[] = {
		{ "Category", "Components|ARFaceMesh" },
		{ "Comment", "/**\x09Indicates whether the face mesh data should be built for rendering or not */" },
		{ "ModuleRelativePath", "Public/AppleARKitFaceMeshComponent.h" },
		{ "ToolTip", "Indicates whether the face mesh data should be built for rendering or not" },
	};
#endif
	void Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_bWantsMeshUpdates_SetBit(void* Obj)
	{
		((UAppleARKitFaceMeshComponent*)Obj)->bWantsMeshUpdates = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_bWantsMeshUpdates = { "bWantsMeshUpdates", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAppleARKitFaceMeshComponent), &Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_bWantsMeshUpdates_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_bWantsMeshUpdates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_bWantsMeshUpdates_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_bWantsCollision_MetaData[] = {
		{ "Category", "Components|ARFaceMesh" },
		{ "Comment", "/**\x09Indicates whether collision should be created for this face mesh. This adds significant cost, so only use if you need to trace against the face mesh. */" },
		{ "ModuleRelativePath", "Public/AppleARKitFaceMeshComponent.h" },
		{ "ToolTip", "Indicates whether collision should be created for this face mesh. This adds significant cost, so only use if you need to trace against the face mesh." },
	};
#endif
	void Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_bWantsCollision_SetBit(void* Obj)
	{
		((UAppleARKitFaceMeshComponent*)Obj)->bWantsCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_bWantsCollision = { "bWantsCollision", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAppleARKitFaceMeshComponent), &Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_bWantsCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_bWantsCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_bWantsCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_bAutoBindToLocalFaceMesh_MetaData[] = {
		{ "Category", "Components|ARFaceMesh" },
		{ "Comment", "/**\x09If true, the mesh data will come from the local ARKit face mesh data. The face mesh will update every tick and will handle loss of face tracking */" },
		{ "ModuleRelativePath", "Public/AppleARKitFaceMeshComponent.h" },
		{ "ToolTip", "If true, the mesh data will come from the local ARKit face mesh data. The face mesh will update every tick and will handle loss of face tracking" },
	};
#endif
	void Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_bAutoBindToLocalFaceMesh_SetBit(void* Obj)
	{
		((UAppleARKitFaceMeshComponent*)Obj)->bAutoBindToLocalFaceMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_bAutoBindToLocalFaceMesh = { "bAutoBindToLocalFaceMesh", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAppleARKitFaceMeshComponent), &Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_bAutoBindToLocalFaceMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_bAutoBindToLocalFaceMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_bAutoBindToLocalFaceMesh_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_TransformSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_TransformSetting_MetaData[] = {
		{ "Category", "Components|ARFaceMesh" },
		{ "Comment", "/**\x09""Determines how the transform from tracking data and the component's transform are mixed together */" },
		{ "ModuleRelativePath", "Public/AppleARKitFaceMeshComponent.h" },
		{ "ToolTip", "Determines how the transform from tracking data and the component's transform are mixed together" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_TransformSetting = { "TransformSetting", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAppleARKitFaceMeshComponent, TransformSetting), Z_Construct_UEnum_AppleARKitFaceSupport_EARFaceComponentTransformMixing, METADATA_PARAMS(Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_TransformSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_TransformSetting_MetaData)) }; // 2325989328
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_bFlipTrackedRotation_MetaData[] = {
		{ "Category", "Components|ARFaceMesh" },
		{ "Comment", "/**\x09If true, the face mesh will be rotated to face out of the screen (-X) rather than into the screen (+X) and corresponding axises to match */" },
		{ "ModuleRelativePath", "Public/AppleARKitFaceMeshComponent.h" },
		{ "ToolTip", "If true, the face mesh will be rotated to face out of the screen (-X) rather than into the screen (+X) and corresponding axises to match" },
	};
#endif
	void Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_bFlipTrackedRotation_SetBit(void* Obj)
	{
		((UAppleARKitFaceMeshComponent*)Obj)->bFlipTrackedRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_bFlipTrackedRotation = { "bFlipTrackedRotation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAppleARKitFaceMeshComponent), &Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_bFlipTrackedRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_bFlipTrackedRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_bFlipTrackedRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_FaceMaterial_MetaData[] = {
		{ "Category", "Components|ARFaceMesh" },
		{ "Comment", "/** Used when rendering the face mesh (mostly debug reasons) */" },
		{ "ModuleRelativePath", "Public/AppleARKitFaceMeshComponent.h" },
		{ "ToolTip", "Used when rendering the face mesh (mostly debug reasons)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_FaceMaterial = { "FaceMaterial", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAppleARKitFaceMeshComponent, FaceMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_FaceMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_FaceMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_LiveLinkSubjectName_MetaData[] = {
		{ "Category", "Components|ARFaceMesh" },
		{ "Comment", "/** Used to identify this component's face ar data uniquely as part of the LiveLink animation pipeline */" },
		{ "ModuleRelativePath", "Public/AppleARKitFaceMeshComponent.h" },
		{ "ToolTip", "Used to identify this component's face ar data uniquely as part of the LiveLink animation pipeline" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_LiveLinkSubjectName = { "LiveLinkSubjectName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAppleARKitFaceMeshComponent, LiveLinkSubjectName), METADATA_PARAMS(Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_LiveLinkSubjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_LiveLinkSubjectName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_RemoteCurves_Inner = { "RemoteCurves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNetQuantizeFaceCurve, METADATA_PARAMS(nullptr, 0) }; // 2705178799
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_RemoteCurves_MetaData[] = {
		{ "Comment", "/** The set of changed curves to replicate to the other clients */" },
		{ "ModuleRelativePath", "Public/AppleARKitFaceMeshComponent.h" },
		{ "ToolTip", "The set of changed curves to replicate to the other clients" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_RemoteCurves = { "RemoteCurves", "OnRep_RemoteCurves", (EPropertyFlags)0x0010000100002020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAppleARKitFaceMeshComponent, RemoteCurves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_RemoteCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_RemoteCurves_MetaData)) }; // 2705178799
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_bWantsMeshUpdates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_bWantsCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_bAutoBindToLocalFaceMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_TransformSetting_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_TransformSetting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_bFlipTrackedRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_FaceMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_LiveLinkSubjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_RemoteCurves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::NewProp_RemoteCurves,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAppleARKitFaceMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::ClassParams = {
		&UAppleARKitFaceMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAppleARKitFaceMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UAppleARKitFaceMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAppleARKitFaceMeshComponent.OuterSingleton, Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAppleARKitFaceMeshComponent.OuterSingleton;
	}
	template<> APPLEARKITFACESUPPORT_API UClass* StaticClass<UAppleARKitFaceMeshComponent>()
	{
		return UAppleARKitFaceMeshComponent::StaticClass();
	}

	void UAppleARKitFaceMeshComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_RemoteCurves(TEXT("RemoteCurves"));

		const bool bIsValid = true
			&& Name_RemoteCurves == ClassReps[(int32)ENetFields_Private::RemoteCurves].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UAppleARKitFaceMeshComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAppleARKitFaceMeshComponent);
	UAppleARKitFaceMeshComponent::~UAppleARKitFaceMeshComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_Statics::EnumInfo[] = {
		{ EARFaceComponentTransformMixing_StaticEnum, TEXT("EARFaceComponentTransformMixing"), &Z_Registration_Info_UEnum_EARFaceComponentTransformMixing, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2325989328U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_Statics::ScriptStructInfo[] = {
		{ FNetQuantizeFaceCurve::StaticStruct, Z_Construct_UScriptStruct_FNetQuantizeFaceCurve_Statics::NewStructOps, TEXT("NetQuantizeFaceCurve"), &Z_Registration_Info_UScriptStruct_NetQuantizeFaceCurve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetQuantizeFaceCurve), 2705178799U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAppleARKitFaceMeshComponent, UAppleARKitFaceMeshComponent::StaticClass, TEXT("UAppleARKitFaceMeshComponent"), &Z_Registration_Info_UClass_UAppleARKitFaceMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAppleARKitFaceMeshComponent), 920743869U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_212834389(TEXT("/Script/AppleARKitFaceSupport"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
