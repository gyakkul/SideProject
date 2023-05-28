// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GoogleARCoreFaceMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoogleARCoreFaceMeshComponent() {}
// Cross Module References
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARFaceGeometry_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent_NoRegister();
	GOOGLEARCOREBASE_API UEnum* Z_Construct_UEnum_GoogleARCoreBase_EARCoreFaceComponentTransformMixing();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent();
	UPackage* Z_Construct_UPackage__Script_GoogleARCoreBase();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EARCoreFaceComponentTransformMixing;
	static UEnum* EARCoreFaceComponentTransformMixing_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EARCoreFaceComponentTransformMixing.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EARCoreFaceComponentTransformMixing.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GoogleARCoreBase_EARCoreFaceComponentTransformMixing, (UObject*)Z_Construct_UPackage__Script_GoogleARCoreBase(), TEXT("EARCoreFaceComponentTransformMixing"));
		}
		return Z_Registration_Info_UEnum_EARCoreFaceComponentTransformMixing.OuterSingleton;
	}
	template<> GOOGLEARCOREBASE_API UEnum* StaticEnum<EARCoreFaceComponentTransformMixing>()
	{
		return EARCoreFaceComponentTransformMixing_StaticEnum();
	}
	struct Z_Construct_UEnum_GoogleARCoreBase_EARCoreFaceComponentTransformMixing_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GoogleARCoreBase_EARCoreFaceComponentTransformMixing_Statics::Enumerators[] = {
		{ "EARCoreFaceComponentTransformMixing::ComponentOnly", (int64)EARCoreFaceComponentTransformMixing::ComponentOnly },
		{ "EARCoreFaceComponentTransformMixing::ComponentLocationTrackedRotation", (int64)EARCoreFaceComponentTransformMixing::ComponentLocationTrackedRotation },
		{ "EARCoreFaceComponentTransformMixing::TrackingOnly", (int64)EARCoreFaceComponentTransformMixing::TrackingOnly },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GoogleARCoreBase_EARCoreFaceComponentTransformMixing_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "GoogleARCore|AugmentedFace" },
		{ "ComponentLocationTrackedRotation.Comment", "/** Use the component's location and apply the rotation from the tracked mesh */" },
		{ "ComponentLocationTrackedRotation.Name", "EARCoreFaceComponentTransformMixing::ComponentLocationTrackedRotation" },
		{ "ComponentLocationTrackedRotation.ToolTip", "Use the component's location and apply the rotation from the tracked mesh" },
		{ "ComponentOnly.Comment", "/** Uses the component's transform exclusively. Only setting for non-tracked meshes */" },
		{ "ComponentOnly.Name", "EARCoreFaceComponentTransformMixing::ComponentOnly" },
		{ "ComponentOnly.ToolTip", "Uses the component's transform exclusively. Only setting for non-tracked meshes" },
		{ "Experimental", "" },
		{ "ModuleRelativePath", "Public/GoogleARCoreFaceMeshComponent.h" },
		{ "TrackingOnly.Comment", "/** Use only the tracked face transform */" },
		{ "TrackingOnly.Name", "EARCoreFaceComponentTransformMixing::TrackingOnly" },
		{ "TrackingOnly.ToolTip", "Use only the tracked face transform" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GoogleARCoreBase_EARCoreFaceComponentTransformMixing_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GoogleARCoreBase,
		nullptr,
		"EARCoreFaceComponentTransformMixing",
		"EARCoreFaceComponentTransformMixing",
		Z_Construct_UEnum_GoogleARCoreBase_EARCoreFaceComponentTransformMixing_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GoogleARCoreBase_EARCoreFaceComponentTransformMixing_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GoogleARCoreBase_EARCoreFaceComponentTransformMixing_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GoogleARCoreBase_EARCoreFaceComponentTransformMixing_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GoogleARCoreBase_EARCoreFaceComponentTransformMixing()
	{
		if (!Z_Registration_Info_UEnum_EARCoreFaceComponentTransformMixing.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EARCoreFaceComponentTransformMixing.InnerSingleton, Z_Construct_UEnum_GoogleARCoreBase_EARCoreFaceComponentTransformMixing_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EARCoreFaceComponentTransformMixing.InnerSingleton;
	}
	DEFINE_FUNCTION(UDEPRECATED_GoogleARCoreFaceMeshComponent::execGetTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_GoogleARCoreFaceMeshComponent::execBindARFaceGeometry)
	{
		P_GET_OBJECT(UARFaceGeometry,Z_Param_FaceGeometry);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindARFaceGeometry(Z_Param_FaceGeometry);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_GoogleARCoreFaceMeshComponent::execSetAutoBind)
	{
		P_GET_UBOOL(Z_Param_bAutoBind);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAutoBind(Z_Param_bAutoBind);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_GoogleARCoreFaceMeshComponent::execUpdateMesh)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateMesh(Z_Param_Out_Vertices);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_GoogleARCoreFaceMeshComponent::execCreateMesh)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices);
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV0);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateMesh(Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_UV0);
		P_NATIVE_END;
	}
	void UDEPRECATED_GoogleARCoreFaceMeshComponent::StaticRegisterNativesUDEPRECATED_GoogleARCoreFaceMeshComponent()
	{
		UClass* Class = UDEPRECATED_GoogleARCoreFaceMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindARFaceGeometry", &UDEPRECATED_GoogleARCoreFaceMeshComponent::execBindARFaceGeometry },
			{ "CreateMesh", &UDEPRECATED_GoogleARCoreFaceMeshComponent::execCreateMesh },
			{ "GetTransform", &UDEPRECATED_GoogleARCoreFaceMeshComponent::execGetTransform },
			{ "SetAutoBind", &UDEPRECATED_GoogleARCoreFaceMeshComponent::execSetAutoBind },
			{ "UpdateMesh", &UDEPRECATED_GoogleARCoreFaceMeshComponent::execUpdateMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_BindARFaceGeometry_Statics
	{
		struct GoogleARCoreFaceMeshComponent_eventBindARFaceGeometry_Parms
		{
			UARFaceGeometry* FaceGeometry;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FaceGeometry;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_BindARFaceGeometry_Statics::NewProp_FaceGeometry = { "FaceGeometry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreFaceMeshComponent_eventBindARFaceGeometry_Parms, FaceGeometry), Z_Construct_UClass_UARFaceGeometry_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_BindARFaceGeometry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_BindARFaceGeometry_Statics::NewProp_FaceGeometry,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_BindARFaceGeometry_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|ARFaceMesh" },
		{ "Comment", "/**\n\x09 * Bind this FaceMeshComponent to the given UARFaceGeometry object.\n\x09 *\n\x09 * @param\x09""FaceGeometry\x09\x09The target UARFaceGeometry pointer. Passing nullptr to unbind the previous UARFaceGeometry.\n\x09 */" },
		{ "DisplayName", "Modify auto bind to local face tracking" },
		{ "ModuleRelativePath", "Public/GoogleARCoreFaceMeshComponent.h" },
		{ "ToolTip", "Bind this FaceMeshComponent to the given UARFaceGeometry object.\n\n@param       FaceGeometry            The target UARFaceGeometry pointer. Passing nullptr to unbind the previous UARFaceGeometry." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_BindARFaceGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent, nullptr, "BindARFaceGeometry", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_BindARFaceGeometry_Statics::GoogleARCoreFaceMeshComponent_eventBindARFaceGeometry_Parms), Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_BindARFaceGeometry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_BindARFaceGeometry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_BindARFaceGeometry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_BindARFaceGeometry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_BindARFaceGeometry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_BindARFaceGeometry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_CreateMesh_Statics
	{
		struct GoogleARCoreFaceMeshComponent_eventCreateMesh_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_CreateMesh_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_CreateMesh_Statics::NewProp_Vertices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_CreateMesh_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreFaceMeshComponent_eventCreateMesh_Parms, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_CreateMesh_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_CreateMesh_Statics::NewProp_Vertices_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_CreateMesh_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_CreateMesh_Statics::NewProp_Triangles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_CreateMesh_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreFaceMeshComponent_eventCreateMesh_Parms, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_CreateMesh_Statics::NewProp_Triangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_CreateMesh_Statics::NewProp_Triangles_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_CreateMesh_Statics::NewProp_UV0_Inner = { "UV0", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_CreateMesh_Statics::NewProp_UV0_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_CreateMesh_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreFaceMeshComponent_eventCreateMesh_Parms, UV0), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_CreateMesh_Statics::NewProp_UV0_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_CreateMesh_Statics::NewProp_UV0_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_CreateMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_CreateMesh_Statics::NewProp_Vertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_CreateMesh_Statics::NewProp_Vertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_CreateMesh_Statics::NewProp_Triangles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_CreateMesh_Statics::NewProp_Triangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_CreateMesh_Statics::NewProp_UV0_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_CreateMesh_Statics::NewProp_UV0,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_CreateMesh_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "UV0" },
		{ "Category", "Components|ARFaceMesh" },
		{ "Comment", "/**\n\x09 *\x09""Create the initial face mesh from raw mesh data\n\x09 *\n\x09 *\x09@param\x09Vertices\x09\x09\x09Vertex buffer of all vertex positions to use for this mesh section.\n\x09 *\x09@param\x09Triangles\x09\x09\x09Index buffer indicating which vertices make up each triangle. Length must be a multiple of 3.\n\x09 *\x09@param\x09UV0\x09\x09\x09\x09\x09Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n\x09 */" },
		{ "DisplayName", "Create Face Mesh" },
		{ "ModuleRelativePath", "Public/GoogleARCoreFaceMeshComponent.h" },
		{ "ToolTip", "Create the initial face mesh from raw mesh data\n\n@param  Vertices                        Vertex buffer of all vertex positions to use for this mesh section.\n@param  Triangles                       Index buffer indicating which vertices make up each triangle. Length must be a multiple of 3.\n@param  UV0                                     Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_CreateMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent, nullptr, "CreateMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_CreateMesh_Statics::GoogleARCoreFaceMeshComponent_eventCreateMesh_Parms), Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_CreateMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_CreateMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_CreateMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_CreateMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_CreateMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_CreateMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_GetTransform_Statics
	{
		struct GoogleARCoreFaceMeshComponent_eventGetTransform_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_GetTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreFaceMeshComponent_eventGetTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_GetTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_GetTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_GetTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|ARFaceMesh" },
		{ "Comment", "/** Get the transform that the AR camera has detected */" },
		{ "ModuleRelativePath", "Public/GoogleARCoreFaceMeshComponent.h" },
		{ "ToolTip", "Get the transform that the AR camera has detected" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_GetTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent, nullptr, "GetTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_GetTransform_Statics::GoogleARCoreFaceMeshComponent_eventGetTransform_Parms), Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_GetTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_GetTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_GetTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_GetTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_GetTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_GetTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_SetAutoBind_Statics
	{
		struct GoogleARCoreFaceMeshComponent_eventSetAutoBind_Parms
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
	void Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_SetAutoBind_Statics::NewProp_bAutoBind_SetBit(void* Obj)
	{
		((GoogleARCoreFaceMeshComponent_eventSetAutoBind_Parms*)Obj)->bAutoBind = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_SetAutoBind_Statics::NewProp_bAutoBind = { "bAutoBind", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GoogleARCoreFaceMeshComponent_eventSetAutoBind_Parms), &Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_SetAutoBind_Statics::NewProp_bAutoBind_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_SetAutoBind_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_SetAutoBind_Statics::NewProp_bAutoBind,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_SetAutoBind_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|ARFaceMesh" },
		{ "Comment", "/**\n\x09 * If auto bind is true, then this component will update itself from the local face tracking data each tick.\n\x09 * If auto bind is off, use BindARFaceGeometry function to bind to a particular UARFaceGeometry.\n\x09 *\n\x09 * @param\x09""bAutoBind\x09\x09\x09true to enable, false to disable\n\x09 */" },
		{ "DisplayName", "Modify auto bind to local face tracking" },
		{ "ModuleRelativePath", "Public/GoogleARCoreFaceMeshComponent.h" },
		{ "ToolTip", "If auto bind is true, then this component will update itself from the local face tracking data each tick.\nIf auto bind is off, use BindARFaceGeometry function to bind to a particular UARFaceGeometry.\n\n@param       bAutoBind                       true to enable, false to disable" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_SetAutoBind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent, nullptr, "SetAutoBind", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_SetAutoBind_Statics::GoogleARCoreFaceMeshComponent_eventSetAutoBind_Parms), Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_SetAutoBind_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_SetAutoBind_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_SetAutoBind_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_SetAutoBind_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_SetAutoBind()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_SetAutoBind_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_UpdateMesh_Statics
	{
		struct GoogleARCoreFaceMeshComponent_eventUpdateMesh_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_UpdateMesh_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_UpdateMesh_Statics::NewProp_Vertices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_UpdateMesh_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreFaceMeshComponent_eventUpdateMesh_Parms, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_UpdateMesh_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_UpdateMesh_Statics::NewProp_Vertices_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_UpdateMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_UpdateMesh_Statics::NewProp_Vertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_UpdateMesh_Statics::NewProp_Vertices,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_UpdateMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|ARFaceMesh" },
		{ "Comment", "/**\n\x09 *\x09Updates the face mesh vertices. The topology and UVs do not change post creation so only vertices are updated\n\x09 *\n\x09 *\x09@param\x09Vertices\x09\x09\x09Vertex buffer of all vertex positions to use for this mesh section.\n\x09 */" },
		{ "DisplayName", "Update Mesh Section FColor" },
		{ "ModuleRelativePath", "Public/GoogleARCoreFaceMeshComponent.h" },
		{ "ToolTip", "Updates the face mesh vertices. The topology and UVs do not change post creation so only vertices are updated\n\n@param  Vertices                        Vertex buffer of all vertex positions to use for this mesh section." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_UpdateMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent, nullptr, "UpdateMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_UpdateMesh_Statics::GoogleARCoreFaceMeshComponent_eventUpdateMesh_Parms), Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_UpdateMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_UpdateMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_UpdateMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_UpdateMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_UpdateMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_UpdateMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_GoogleARCoreFaceMeshComponent);
	UClass* Z_Construct_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent_NoRegister()
	{
		return UDEPRECATED_GoogleARCoreFaceMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FaceMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FaceMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UProceduralMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GoogleARCoreBase,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_BindARFaceGeometry, "BindARFaceGeometry" }, // 2935989194
		{ &Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_CreateMesh, "CreateMesh" }, // 4226853765
		{ &Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_GetTransform, "GetTransform" }, // 1939053220
		{ &Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_SetAutoBind, "SetAutoBind" }, // 1265973182
		{ &Z_Construct_UFunction_UDEPRECATED_GoogleARCoreFaceMeshComponent_UpdateMesh, "UpdateMesh" }, // 1239734636
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AR" },
		{ "Comment", "/**\n * This component is updated by the ARSystem with face data on devices that have support for it.\n * Note that this class is now deprecated, it's replaced by ARFaceComponent which works on all the platforms support face tracking.\n */" },
		{ "HideCategories", "Object LOD GoogleARCore|AugmentedFace Object LOD Mobility Trigger" },
		{ "IncludePath", "GoogleARCoreFaceMeshComponent.h" },
		{ "ModuleRelativePath", "Public/GoogleARCoreFaceMeshComponent.h" },
		{ "ToolTip", "This component is updated by the ARSystem with face data on devices that have support for it.\nNote that this class is now deprecated, it's replaced by ARFaceComponent which works on all the platforms support face tracking." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent_Statics::NewProp_bWantsCollision_MetaData[] = {
		{ "Category", "Components|ARFaceMesh" },
		{ "Comment", "/**\x09Indicates whether collision should be created for this face mesh. This adds significant cost, so only use if you need to trace against the face mesh. */" },
		{ "ModuleRelativePath", "Public/GoogleARCoreFaceMeshComponent.h" },
		{ "ToolTip", "Indicates whether collision should be created for this face mesh. This adds significant cost, so only use if you need to trace against the face mesh." },
	};
#endif
	void Z_Construct_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent_Statics::NewProp_bWantsCollision_SetBit(void* Obj)
	{
		((UDEPRECATED_GoogleARCoreFaceMeshComponent*)Obj)->bWantsCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent_Statics::NewProp_bWantsCollision = { "bWantsCollision", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDEPRECATED_GoogleARCoreFaceMeshComponent), &Z_Construct_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent_Statics::NewProp_bWantsCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent_Statics::NewProp_bWantsCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent_Statics::NewProp_bWantsCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent_Statics::NewProp_bAutoBindToLocalFaceMesh_MetaData[] = {
		{ "Category", "Components|ARFaceMesh" },
		{ "Comment", "/**\x09If true, the mesh data will come from the local ARKit face mesh data. The face mesh will update every tick and will handle loss of face tracking */" },
		{ "ModuleRelativePath", "Public/GoogleARCoreFaceMeshComponent.h" },
		{ "ToolTip", "If true, the mesh data will come from the local ARKit face mesh data. The face mesh will update every tick and will handle loss of face tracking" },
	};
#endif
	void Z_Construct_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent_Statics::NewProp_bAutoBindToLocalFaceMesh_SetBit(void* Obj)
	{
		((UDEPRECATED_GoogleARCoreFaceMeshComponent*)Obj)->bAutoBindToLocalFaceMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent_Statics::NewProp_bAutoBindToLocalFaceMesh = { "bAutoBindToLocalFaceMesh", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDEPRECATED_GoogleARCoreFaceMeshComponent), &Z_Construct_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent_Statics::NewProp_bAutoBindToLocalFaceMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent_Statics::NewProp_bAutoBindToLocalFaceMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent_Statics::NewProp_bAutoBindToLocalFaceMesh_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent_Statics::NewProp_TransformSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent_Statics::NewProp_TransformSetting_MetaData[] = {
		{ "Category", "Components|ARFaceMesh" },
		{ "Comment", "/**\x09""Determines how the transform from tracking data and the component's transform are mixed together */" },
		{ "ModuleRelativePath", "Public/GoogleARCoreFaceMeshComponent.h" },
		{ "ToolTip", "Determines how the transform from tracking data and the component's transform are mixed together" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent_Statics::NewProp_TransformSetting = { "TransformSetting", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_GoogleARCoreFaceMeshComponent, TransformSetting), Z_Construct_UEnum_GoogleARCoreBase_EARCoreFaceComponentTransformMixing, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent_Statics::NewProp_TransformSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent_Statics::NewProp_TransformSetting_MetaData)) }; // 1221030820
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent_Statics::NewProp_FaceMaterial_MetaData[] = {
		{ "Category", "Components|ARFaceMesh" },
		{ "Comment", "/** Used when rendering the face mesh (mostly debug reasons) */" },
		{ "ModuleRelativePath", "Public/GoogleARCoreFaceMeshComponent.h" },
		{ "ToolTip", "Used when rendering the face mesh (mostly debug reasons)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent_Statics::NewProp_FaceMaterial = { "FaceMaterial", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_GoogleARCoreFaceMeshComponent, FaceMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent_Statics::NewProp_FaceMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent_Statics::NewProp_FaceMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent_Statics::NewProp_bWantsCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent_Statics::NewProp_bAutoBindToLocalFaceMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent_Statics::NewProp_TransformSetting_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent_Statics::NewProp_TransformSetting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent_Statics::NewProp_FaceMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_GoogleARCoreFaceMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent_Statics::ClassParams = {
		&UDEPRECATED_GoogleARCoreFaceMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent_Statics::PropPointers),
		0,
		0x02B002A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent.OuterSingleton, Z_Construct_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent.OuterSingleton;
	}
	template<> GOOGLEARCOREBASE_API UClass* StaticClass<UDEPRECATED_GoogleARCoreFaceMeshComponent>()
	{
		return UDEPRECATED_GoogleARCoreFaceMeshComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_GoogleARCoreFaceMeshComponent);
	UDEPRECATED_GoogleARCoreFaceMeshComponent::~UDEPRECATED_GoogleARCoreFaceMeshComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFaceMeshComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFaceMeshComponent_h_Statics::EnumInfo[] = {
		{ EARCoreFaceComponentTransformMixing_StaticEnum, TEXT("EARCoreFaceComponentTransformMixing"), &Z_Registration_Info_UEnum_EARCoreFaceComponentTransformMixing, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1221030820U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFaceMeshComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent, UDEPRECATED_GoogleARCoreFaceMeshComponent::StaticClass, TEXT("UDEPRECATED_GoogleARCoreFaceMeshComponent"), &Z_Registration_Info_UClass_UDEPRECATED_GoogleARCoreFaceMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_GoogleARCoreFaceMeshComponent), 223145019U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFaceMeshComponent_h_3988367147(TEXT("/Script/GoogleARCoreBase"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFaceMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFaceMeshComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFaceMeshComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFaceMeshComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
