// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MockDataMeshTrackerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMockDataMeshTrackerComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	MRMESH_API UClass* Z_Construct_UClass_UMockDataMeshTrackerComponent();
	MRMESH_API UClass* Z_Construct_UClass_UMockDataMeshTrackerComponent_NoRegister();
	MRMESH_API UClass* Z_Construct_UClass_UMRMeshComponent_NoRegister();
	MRMESH_API UEnum* Z_Construct_UEnum_MRMesh_EMeshTrackerVertexColorMode();
	MRMESH_API UFunction* Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MRMesh();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshTrackerVertexColorMode;
	static UEnum* EMeshTrackerVertexColorMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMeshTrackerVertexColorMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMeshTrackerVertexColorMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MRMesh_EMeshTrackerVertexColorMode, (UObject*)Z_Construct_UPackage__Script_MRMesh(), TEXT("EMeshTrackerVertexColorMode"));
		}
		return Z_Registration_Info_UEnum_EMeshTrackerVertexColorMode.OuterSingleton;
	}
	template<> MRMESH_API UEnum* StaticEnum<EMeshTrackerVertexColorMode>()
	{
		return EMeshTrackerVertexColorMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MRMesh_EMeshTrackerVertexColorMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MRMesh_EMeshTrackerVertexColorMode_Statics::Enumerators[] = {
		{ "EMeshTrackerVertexColorMode::None", (int64)EMeshTrackerVertexColorMode::None },
		{ "EMeshTrackerVertexColorMode::Confidence", (int64)EMeshTrackerVertexColorMode::Confidence },
		{ "EMeshTrackerVertexColorMode::Block", (int64)EMeshTrackerVertexColorMode::Block },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MRMesh_EMeshTrackerVertexColorMode_Statics::Enum_MetaDataParams[] = {
		{ "Block.Comment", "/*! Each block is given a color from a list. */" },
		{ "Block.DisplayName", "Blocks Colored" },
		{ "Block.Name", "EMeshTrackerVertexColorMode::Block" },
		{ "Block.ToolTip", "! Each block is given a color from a list." },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Vertex color mode. */" },
		{ "Confidence.Comment", "/*! Vertex confidence is interpolated between two specified colors. */" },
		{ "Confidence.DisplayName", "Vertex Confidence" },
		{ "Confidence.Name", "EMeshTrackerVertexColorMode::Confidence" },
		{ "Confidence.ToolTip", "! Vertex confidence is interpolated between two specified colors." },
		{ "ModuleRelativePath", "Public/MockDataMeshTrackerComponent.h" },
		{ "None.Comment", "/** Vertex Color is not set. */" },
		{ "None.DisplayName", "No Vertex Color" },
		{ "None.Name", "EMeshTrackerVertexColorMode::None" },
		{ "None.ToolTip", "Vertex Color is not set." },
		{ "ToolTip", "Vertex color mode." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MRMesh_EMeshTrackerVertexColorMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MRMesh,
		nullptr,
		"EMeshTrackerVertexColorMode",
		"EMeshTrackerVertexColorMode",
		Z_Construct_UEnum_MRMesh_EMeshTrackerVertexColorMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MRMesh_EMeshTrackerVertexColorMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MRMesh_EMeshTrackerVertexColorMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MRMesh_EMeshTrackerVertexColorMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MRMesh_EMeshTrackerVertexColorMode()
	{
		if (!Z_Registration_Info_UEnum_EMeshTrackerVertexColorMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshTrackerVertexColorMode.InnerSingleton, Z_Construct_UEnum_MRMesh_EMeshTrackerVertexColorMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMeshTrackerVertexColorMode.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics
	{
		struct MockDataMeshTrackerComponent_eventOnMockDataMeshTrackerUpdated_Parms
		{
			int32 Index;
			TArray<FVector> Vertices;
			TArray<int32> Triangles;
			TArray<FVector> Normals;
			TArray<float> Confidence;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
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
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Normals;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Confidence_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Confidence_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Confidence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MockDataMeshTrackerComponent_eventOnMockDataMeshTrackerUpdated_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Vertices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MockDataMeshTrackerComponent_eventOnMockDataMeshTrackerUpdated_Parms, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Vertices_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Triangles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MockDataMeshTrackerComponent_eventOnMockDataMeshTrackerUpdated_Parms, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Triangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Triangles_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Normals_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MockDataMeshTrackerComponent_eventOnMockDataMeshTrackerUpdated_Parms, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Normals_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Normals_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Confidence_Inner = { "Confidence", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Confidence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Confidence = { "Confidence", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MockDataMeshTrackerComponent_eventOnMockDataMeshTrackerUpdated_Parms, Confidence), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Confidence_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Confidence_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Vertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Vertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Triangles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Triangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Normals_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Normals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Confidence_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Confidence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09""Delegate used by OnMeshUpdated().\n\x09@param Index The index of the mesh section in the ProceduralMeshComponent that was updated.\n\x09@param Vertices List of all vertices in the updated mesh section.\n\x09@param Triangles List of all triangles in the updated mesh section.\n\x09@param Normals List of the normals of all triangles in the updated mesh section.\n\x09@param Confidence List of the confidence values per vertex in the updated mesh section. This can be used to determine if the user needs to scan more.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MockDataMeshTrackerComponent.h" },
		{ "ToolTip", "Delegate used by OnMeshUpdated().\n@param Index The index of the mesh section in the ProceduralMeshComponent that was updated.\n@param Vertices List of all vertices in the updated mesh section.\n@param Triangles List of all triangles in the updated mesh section.\n@param Normals List of the normals of all triangles in the updated mesh section.\n@param Confidence List of the confidence values per vertex in the updated mesh section. This can be used to determine if the user needs to scan more." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMockDataMeshTrackerComponent, nullptr, "OnMockDataMeshTrackerUpdated__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::MockDataMeshTrackerComponent_eventOnMockDataMeshTrackerUpdated_Parms), Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UMockDataMeshTrackerComponent::FOnMockDataMeshTrackerUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnMockDataMeshTrackerUpdated, int32 Index, TArray<FVector> const& Vertices, TArray<int32> const& Triangles, TArray<FVector> const& Normals, TArray<float> const& Confidence)
{
	struct MockDataMeshTrackerComponent_eventOnMockDataMeshTrackerUpdated_Parms
	{
		int32 Index;
		TArray<FVector> Vertices;
		TArray<int32> Triangles;
		TArray<FVector> Normals;
		TArray<float> Confidence;
	};
	MockDataMeshTrackerComponent_eventOnMockDataMeshTrackerUpdated_Parms Parms;
	Parms.Index=Index;
	Parms.Vertices=Vertices;
	Parms.Triangles=Triangles;
	Parms.Normals=Normals;
	Parms.Confidence=Confidence;
	OnMockDataMeshTrackerUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UMockDataMeshTrackerComponent::execDisconnectMRMesh)
	{
		P_GET_OBJECT(UMRMeshComponent,Z_Param_InMRMeshPtr);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisconnectMRMesh(Z_Param_InMRMeshPtr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMockDataMeshTrackerComponent::execConnectMRMesh)
	{
		P_GET_OBJECT(UMRMeshComponent,Z_Param_InMRMeshPtr);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConnectMRMesh(Z_Param_InMRMeshPtr);
		P_NATIVE_END;
	}
	void UMockDataMeshTrackerComponent::StaticRegisterNativesUMockDataMeshTrackerComponent()
	{
		UClass* Class = UMockDataMeshTrackerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConnectMRMesh", &UMockDataMeshTrackerComponent::execConnectMRMesh },
			{ "DisconnectMRMesh", &UMockDataMeshTrackerComponent::execDisconnectMRMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMockDataMeshTrackerComponent_ConnectMRMesh_Statics
	{
		struct MockDataMeshTrackerComponent_eventConnectMRMesh_Parms
		{
			UMRMeshComponent* InMRMeshPtr;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMRMeshPtr_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMRMeshPtr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMockDataMeshTrackerComponent_ConnectMRMesh_Statics::NewProp_InMRMeshPtr_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMockDataMeshTrackerComponent_ConnectMRMesh_Statics::NewProp_InMRMeshPtr = { "InMRMeshPtr", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MockDataMeshTrackerComponent_eventConnectMRMesh_Parms, InMRMeshPtr), Z_Construct_UClass_UMRMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMockDataMeshTrackerComponent_ConnectMRMesh_Statics::NewProp_InMRMeshPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMockDataMeshTrackerComponent_ConnectMRMesh_Statics::NewProp_InMRMeshPtr_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMockDataMeshTrackerComponent_ConnectMRMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMockDataMeshTrackerComponent_ConnectMRMesh_Statics::NewProp_InMRMeshPtr,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMockDataMeshTrackerComponent_ConnectMRMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "Comment", "/**\n\x09\x09Sets the procedural mesh component that will store and display the environmental mesh results.\n\x09\x09@param InMRMeshPtr The procedural mesh component to store the query result in.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MockDataMeshTrackerComponent.h" },
		{ "ToolTip", "Sets the procedural mesh component that will store and display the environmental mesh results.\n@param InMRMeshPtr The procedural mesh component to store the query result in." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMockDataMeshTrackerComponent_ConnectMRMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMockDataMeshTrackerComponent, nullptr, "ConnectMRMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMockDataMeshTrackerComponent_ConnectMRMesh_Statics::MockDataMeshTrackerComponent_eventConnectMRMesh_Parms), Z_Construct_UFunction_UMockDataMeshTrackerComponent_ConnectMRMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMockDataMeshTrackerComponent_ConnectMRMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMockDataMeshTrackerComponent_ConnectMRMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMockDataMeshTrackerComponent_ConnectMRMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMockDataMeshTrackerComponent_ConnectMRMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMockDataMeshTrackerComponent_ConnectMRMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMockDataMeshTrackerComponent_DisconnectMRMesh_Statics
	{
		struct MockDataMeshTrackerComponent_eventDisconnectMRMesh_Parms
		{
			UMRMeshComponent* InMRMeshPtr;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMRMeshPtr_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMRMeshPtr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMockDataMeshTrackerComponent_DisconnectMRMesh_Statics::NewProp_InMRMeshPtr_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMockDataMeshTrackerComponent_DisconnectMRMesh_Statics::NewProp_InMRMeshPtr = { "InMRMeshPtr", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MockDataMeshTrackerComponent_eventDisconnectMRMesh_Parms, InMRMeshPtr), Z_Construct_UClass_UMRMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMockDataMeshTrackerComponent_DisconnectMRMesh_Statics::NewProp_InMRMeshPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMockDataMeshTrackerComponent_DisconnectMRMesh_Statics::NewProp_InMRMeshPtr_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMockDataMeshTrackerComponent_DisconnectMRMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMockDataMeshTrackerComponent_DisconnectMRMesh_Statics::NewProp_InMRMeshPtr,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMockDataMeshTrackerComponent_DisconnectMRMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "Comment", "/**\n\x09\x09Unlinks the current procedural mesh component from the mesh tracking system.\n\x09\x09@param InMRMeshPtr The procedural mesh component to unlink from the mesh tracking system.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MockDataMeshTrackerComponent.h" },
		{ "ToolTip", "Unlinks the current procedural mesh component from the mesh tracking system.\n@param InMRMeshPtr The procedural mesh component to unlink from the mesh tracking system." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMockDataMeshTrackerComponent_DisconnectMRMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMockDataMeshTrackerComponent, nullptr, "DisconnectMRMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMockDataMeshTrackerComponent_DisconnectMRMesh_Statics::MockDataMeshTrackerComponent_eventDisconnectMRMesh_Parms), Z_Construct_UFunction_UMockDataMeshTrackerComponent_DisconnectMRMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMockDataMeshTrackerComponent_DisconnectMRMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMockDataMeshTrackerComponent_DisconnectMRMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMockDataMeshTrackerComponent_DisconnectMRMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMockDataMeshTrackerComponent_DisconnectMRMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMockDataMeshTrackerComponent_DisconnectMRMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMockDataMeshTrackerComponent);
	UClass* Z_Construct_UClass_UMockDataMeshTrackerComponent_NoRegister()
	{
		return UMockDataMeshTrackerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMeshTrackerUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMeshTrackerUpdated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScanWorld_MetaData[];
#endif
		static void NewProp_ScanWorld_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ScanWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestNormals_MetaData[];
#endif
		static void NewProp_RequestNormals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RequestNormals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestVertexConfidence_MetaData[];
#endif
		static void NewProp_RequestVertexConfidence_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RequestVertexConfidence;
		static const UECodeGen_Private::FBytePropertyParams NewProp_VertexColorMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexColorMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_VertexColorMode;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlockVertexColors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockVertexColors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BlockVertexColors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexColorFromConfidenceZero_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexColorFromConfidenceZero;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexColorFromConfidenceOne_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexColorFromConfidenceOne;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UpdateInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MRMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MRMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MRMesh,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMockDataMeshTrackerComponent_ConnectMRMesh, "ConnectMRMesh" }, // 130637133
		{ &Z_Construct_UFunction_UMockDataMeshTrackerComponent_DisconnectMRMesh, "DisconnectMRMesh" }, // 1894405732
		{ &Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature, "OnMockDataMeshTrackerUpdated__DelegateSignature" }, // 3576974488
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/**\n\x09The MeshTrackerComponent class manages requests for environmental mesh data, processes the results and provides\n\x09them to the calling system. The calling system is able request environmental mesh data within a specified area.\n\x09Various other search criteria can be set via this class's public properties.  Mesh data requests are processed\n\x09on a separate thread.  Once a mesh data request has been processed the calling system will be notified via an\n\x09""FOnMeshTrackerUpdated broadcast.\n*/" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "MockDataMeshTrackerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MockDataMeshTrackerComponent.h" },
		{ "ToolTip", "The MeshTrackerComponent class manages requests for environmental mesh data, processes the results and provides\nthem to the calling system. The calling system is able request environmental mesh data within a specified area.\nVarious other search criteria can be set via this class's public properties.  Mesh data requests are processed\non a separate thread.  Once a mesh data request has been processed the calling system will be notified via an\nFOnMeshTrackerUpdated broadcast." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_OnMeshTrackerUpdated_MetaData[] = {
		{ "Comment", "/** Activated whenever new information about this mesh tracker is detected. */" },
		{ "ModuleRelativePath", "Public/MockDataMeshTrackerComponent.h" },
		{ "ToolTip", "Activated whenever new information about this mesh tracker is detected." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_OnMeshTrackerUpdated = { "OnMeshTrackerUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMockDataMeshTrackerComponent, OnMeshTrackerUpdated), Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_OnMeshTrackerUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_OnMeshTrackerUpdated_MetaData)) }; // 3576974488
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_ScanWorld_MetaData[] = {
		{ "Category", "Meshing" },
		{ "Comment", "/** Set to true to start scanning the world for meshes. */" },
		{ "ModuleRelativePath", "Public/MockDataMeshTrackerComponent.h" },
		{ "ToolTip", "Set to true to start scanning the world for meshes." },
	};
#endif
	void Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_ScanWorld_SetBit(void* Obj)
	{
		((UMockDataMeshTrackerComponent*)Obj)->ScanWorld = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_ScanWorld = { "ScanWorld", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMockDataMeshTrackerComponent), &Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_ScanWorld_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_ScanWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_ScanWorld_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_RequestNormals_MetaData[] = {
		{ "Category", "Meshing" },
		{ "Comment", "/** If true, the system will generate normals for the triangle vertices. */" },
		{ "ModuleRelativePath", "Public/MockDataMeshTrackerComponent.h" },
		{ "ToolTip", "If true, the system will generate normals for the triangle vertices." },
	};
#endif
	void Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_RequestNormals_SetBit(void* Obj)
	{
		((UMockDataMeshTrackerComponent*)Obj)->RequestNormals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_RequestNormals = { "RequestNormals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMockDataMeshTrackerComponent), &Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_RequestNormals_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_RequestNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_RequestNormals_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_RequestVertexConfidence_MetaData[] = {
		{ "Category", "Meshing" },
		{ "Comment", "/**\n\x09\x09If true, the system will generate the mesh confidence values for the triangle vertices.\n\x09\x09These confidence values can be used to determine if the user needs to scan more.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MockDataMeshTrackerComponent.h" },
		{ "ToolTip", "If true, the system will generate the mesh confidence values for the triangle vertices.\nThese confidence values can be used to determine if the user needs to scan more." },
	};
#endif
	void Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_RequestVertexConfidence_SetBit(void* Obj)
	{
		((UMockDataMeshTrackerComponent*)Obj)->RequestVertexConfidence = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_RequestVertexConfidence = { "RequestVertexConfidence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMockDataMeshTrackerComponent), &Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_RequestVertexConfidence_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_RequestVertexConfidence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_RequestVertexConfidence_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_VertexColorMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_VertexColorMode_MetaData[] = {
		{ "Category", "Meshing" },
		{ "Comment", "/**\n\x09* Vertex Colors can be unused, or filled with several types of information.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MockDataMeshTrackerComponent.h" },
		{ "ToolTip", "Vertex Colors can be unused, or filled with several types of information." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_VertexColorMode = { "VertexColorMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMockDataMeshTrackerComponent, VertexColorMode), Z_Construct_UEnum_MRMesh_EMeshTrackerVertexColorMode, METADATA_PARAMS(Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_VertexColorMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_VertexColorMode_MetaData)) }; // 4161107147
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_BlockVertexColors_Inner = { "BlockVertexColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_BlockVertexColors_MetaData[] = {
		{ "Category", "Meshing" },
		{ "Comment", "/** Colors through which we cycle when setting vertex color by block. */" },
		{ "ModuleRelativePath", "Public/MockDataMeshTrackerComponent.h" },
		{ "ToolTip", "Colors through which we cycle when setting vertex color by block." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_BlockVertexColors = { "BlockVertexColors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMockDataMeshTrackerComponent, BlockVertexColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_BlockVertexColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_BlockVertexColors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_VertexColorFromConfidenceZero_MetaData[] = {
		{ "Category", "Meshing" },
		{ "Comment", "/** Color mapped to confidence value of zero. */" },
		{ "ModuleRelativePath", "Public/MockDataMeshTrackerComponent.h" },
		{ "ToolTip", "Color mapped to confidence value of zero." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_VertexColorFromConfidenceZero = { "VertexColorFromConfidenceZero", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMockDataMeshTrackerComponent, VertexColorFromConfidenceZero), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_VertexColorFromConfidenceZero_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_VertexColorFromConfidenceZero_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_VertexColorFromConfidenceOne_MetaData[] = {
		{ "Category", "Meshing" },
		{ "Comment", "/** Color mapped to confidence value of one. */" },
		{ "ModuleRelativePath", "Public/MockDataMeshTrackerComponent.h" },
		{ "ToolTip", "Color mapped to confidence value of one." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_VertexColorFromConfidenceOne = { "VertexColorFromConfidenceOne", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMockDataMeshTrackerComponent, VertexColorFromConfidenceOne), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_VertexColorFromConfidenceOne_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_VertexColorFromConfidenceOne_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_UpdateInterval_MetaData[] = {
		{ "Category", "Meshing|MockData" },
		{ "Comment", "/** Update Interval in Seconds. */" },
		{ "ModuleRelativePath", "Public/MockDataMeshTrackerComponent.h" },
		{ "ToolTip", "Update Interval in Seconds." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_UpdateInterval = { "UpdateInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMockDataMeshTrackerComponent, UpdateInterval), METADATA_PARAMS(Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_UpdateInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_UpdateInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_MRMesh_MetaData[] = {
		{ "Comment", "/** MRMeshComponent can render and provide collision based on the Mesh data. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MockDataMeshTrackerComponent.h" },
		{ "ToolTip", "MRMeshComponent can render and provide collision based on the Mesh data." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_MRMesh = { "MRMesh", nullptr, (EPropertyFlags)0x0014000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMockDataMeshTrackerComponent, MRMesh), Z_Construct_UClass_UMRMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_MRMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_MRMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_OnMeshTrackerUpdated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_ScanWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_RequestNormals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_RequestVertexConfidence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_VertexColorMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_VertexColorMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_BlockVertexColors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_BlockVertexColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_VertexColorFromConfidenceZero,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_VertexColorFromConfidenceOne,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_UpdateInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_MRMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMockDataMeshTrackerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::ClassParams = {
		&UMockDataMeshTrackerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMockDataMeshTrackerComponent()
	{
		if (!Z_Registration_Info_UClass_UMockDataMeshTrackerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMockDataMeshTrackerComponent.OuterSingleton, Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMockDataMeshTrackerComponent.OuterSingleton;
	}
	template<> MRMESH_API UClass* StaticClass<UMockDataMeshTrackerComponent>()
	{
		return UMockDataMeshTrackerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMockDataMeshTrackerComponent);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h_Statics::EnumInfo[] = {
		{ EMeshTrackerVertexColorMode_StaticEnum, TEXT("EMeshTrackerVertexColorMode"), &Z_Registration_Info_UEnum_EMeshTrackerVertexColorMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4161107147U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMockDataMeshTrackerComponent, UMockDataMeshTrackerComponent::StaticClass, TEXT("UMockDataMeshTrackerComponent"), &Z_Registration_Info_UClass_UMockDataMeshTrackerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMockDataMeshTrackerComponent), 1281955036U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h_831993694(TEXT("/Script/MRMesh"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
