// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/OculusMR_PlaneMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusMR_PlaneMeshComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	OCULUSMR_API UClass* Z_Construct_UClass_UOculusMR_PlaneMeshComponent();
	OCULUSMR_API UClass* Z_Construct_UClass_UOculusMR_PlaneMeshComponent_NoRegister();
	OCULUSMR_API UScriptStruct* Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle();
	UPackage* Z_Construct_UPackage__Script_OculusMR();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OculusMR_PlaneMeshTriangle;
class UScriptStruct* FOculusMR_PlaneMeshTriangle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OculusMR_PlaneMeshTriangle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OculusMR_PlaneMeshTriangle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle, (UObject*)Z_Construct_UPackage__Script_OculusMR(), TEXT("OculusMR_PlaneMeshTriangle"));
	}
	return Z_Registration_Info_UScriptStruct_OculusMR_PlaneMeshTriangle.OuterSingleton;
}
template<> OCULUSMR_API UScriptStruct* StaticStruct<FOculusMR_PlaneMeshTriangle>()
{
	return FOculusMR_PlaneMeshTriangle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vertex0_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertex0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV0_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vertex1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertex1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vertex2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertex2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV2;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/OculusMR_PlaneMeshComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusMR_PlaneMeshTriangle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_Vertex0_MetaData[] = {
		{ "ModuleRelativePath", "Private/OculusMR_PlaneMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_Vertex0 = { "Vertex0", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOculusMR_PlaneMeshTriangle, Vertex0), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_Vertex0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_Vertex0_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_UV0_MetaData[] = {
		{ "ModuleRelativePath", "Private/OculusMR_PlaneMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOculusMR_PlaneMeshTriangle, UV0), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_UV0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_UV0_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_Vertex1_MetaData[] = {
		{ "ModuleRelativePath", "Private/OculusMR_PlaneMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_Vertex1 = { "Vertex1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOculusMR_PlaneMeshTriangle, Vertex1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_Vertex1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_Vertex1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_UV1_MetaData[] = {
		{ "ModuleRelativePath", "Private/OculusMR_PlaneMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_UV1 = { "UV1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOculusMR_PlaneMeshTriangle, UV1), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_UV1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_UV1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_Vertex2_MetaData[] = {
		{ "ModuleRelativePath", "Private/OculusMR_PlaneMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_Vertex2 = { "Vertex2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOculusMR_PlaneMeshTriangle, Vertex2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_Vertex2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_Vertex2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_UV2_MetaData[] = {
		{ "ModuleRelativePath", "Private/OculusMR_PlaneMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_UV2 = { "UV2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOculusMR_PlaneMeshTriangle, UV2), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_UV2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_UV2_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_Vertex0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_UV0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_Vertex1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_UV1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_Vertex2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_UV2,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusMR,
		nullptr,
		&NewStructOps,
		"OculusMR_PlaneMeshTriangle",
		sizeof(FOculusMR_PlaneMeshTriangle),
		alignof(FOculusMR_PlaneMeshTriangle),
		Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle()
	{
		if (!Z_Registration_Info_UScriptStruct_OculusMR_PlaneMeshTriangle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OculusMR_PlaneMeshTriangle.InnerSingleton, Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OculusMR_PlaneMeshTriangle.InnerSingleton;
	}
	DEFINE_FUNCTION(UOculusMR_PlaneMeshComponent::execClearCustomMeshTriangles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearCustomMeshTriangles();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusMR_PlaneMeshComponent::execAddCustomMeshTriangles)
	{
		P_GET_TARRAY_REF(FOculusMR_PlaneMeshTriangle,Z_Param_Out_Triangles);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCustomMeshTriangles(Z_Param_Out_Triangles);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusMR_PlaneMeshComponent::execSetCustomMeshTriangles)
	{
		P_GET_TARRAY_REF(FOculusMR_PlaneMeshTriangle,Z_Param_Out_Triangles);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomMeshTriangles(Z_Param_Out_Triangles);
		P_NATIVE_END;
	}
	void UOculusMR_PlaneMeshComponent::StaticRegisterNativesUOculusMR_PlaneMeshComponent()
	{
		UClass* Class = UOculusMR_PlaneMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCustomMeshTriangles", &UOculusMR_PlaneMeshComponent::execAddCustomMeshTriangles },
			{ "ClearCustomMeshTriangles", &UOculusMR_PlaneMeshComponent::execClearCustomMeshTriangles },
			{ "SetCustomMeshTriangles", &UOculusMR_PlaneMeshComponent::execSetCustomMeshTriangles },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics
	{
		struct OculusMR_PlaneMeshComponent_eventAddCustomMeshTriangles_Parms
		{
			TArray<FOculusMR_PlaneMeshTriangle> Triangles;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Triangles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle, METADATA_PARAMS(nullptr, 0) }; // 1260742184
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics::NewProp_Triangles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OculusMR_PlaneMeshComponent_eventAddCustomMeshTriangles_Parms, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics::NewProp_Triangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics::NewProp_Triangles_MetaData)) }; // 1260742184
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics::NewProp_Triangles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics::NewProp_Triangles,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|CustomMesh" },
		{ "Comment", "/** Add to the geometry to use on this triangle mesh.  This may cause an allocation.  Use SetCustomMeshTriangles() instead when possible to reduce allocations. */" },
		{ "ModuleRelativePath", "Private/OculusMR_PlaneMeshComponent.h" },
		{ "ToolTip", "Add to the geometry to use on this triangle mesh.  This may cause an allocation.  Use SetCustomMeshTriangles() instead when possible to reduce allocations." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusMR_PlaneMeshComponent, nullptr, "AddCustomMeshTriangles", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics::OculusMR_PlaneMeshComponent_eventAddCustomMeshTriangles_Parms), Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_AddCustomMeshTriangles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_ClearCustomMeshTriangles_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_ClearCustomMeshTriangles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|CustomMesh" },
		{ "Comment", "/** Removes all geometry from this triangle mesh.  Does not deallocate memory, allowing new geometry to reuse the existing allocation. */" },
		{ "ModuleRelativePath", "Private/OculusMR_PlaneMeshComponent.h" },
		{ "ToolTip", "Removes all geometry from this triangle mesh.  Does not deallocate memory, allowing new geometry to reuse the existing allocation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_ClearCustomMeshTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusMR_PlaneMeshComponent, nullptr, "ClearCustomMeshTriangles", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_ClearCustomMeshTriangles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_ClearCustomMeshTriangles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_ClearCustomMeshTriangles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_ClearCustomMeshTriangles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics
	{
		struct OculusMR_PlaneMeshComponent_eventSetCustomMeshTriangles_Parms
		{
			TArray<FOculusMR_PlaneMeshTriangle> Triangles;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Triangles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle, METADATA_PARAMS(nullptr, 0) }; // 1260742184
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::NewProp_Triangles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OculusMR_PlaneMeshComponent_eventSetCustomMeshTriangles_Parms, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::NewProp_Triangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::NewProp_Triangles_MetaData)) }; // 1260742184
	void Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusMR_PlaneMeshComponent_eventSetCustomMeshTriangles_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OculusMR_PlaneMeshComponent_eventSetCustomMeshTriangles_Parms), &Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::NewProp_Triangles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::NewProp_Triangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|CustomMesh" },
		{ "Comment", "/** Set the geometry to use on this triangle mesh */" },
		{ "ModuleRelativePath", "Private/OculusMR_PlaneMeshComponent.h" },
		{ "ToolTip", "Set the geometry to use on this triangle mesh" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusMR_PlaneMeshComponent, nullptr, "SetCustomMeshTriangles", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::OculusMR_PlaneMeshComponent_eventSetCustomMeshTriangles_Parms), Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusMR_PlaneMeshComponent);
	UClass* Z_Construct_UClass_UOculusMR_PlaneMeshComponent_NoRegister()
	{
		return UOculusMR_PlaneMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOculusMR_PlaneMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusMR_PlaneMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusMR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOculusMR_PlaneMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_AddCustomMeshTriangles, "AddCustomMeshTriangles" }, // 1769894701
		{ &Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_ClearCustomMeshTriangles, "ClearCustomMeshTriangles" }, // 287742124
		{ &Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles, "SetCustomMeshTriangles" }, // 33422013
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusMR_PlaneMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/** Component that allows you to specify custom triangle mesh geometry */" },
		{ "HideCategories", "Object LOD Physics Collision Mobility Trigger" },
		{ "IncludePath", "OculusMR_PlaneMeshComponent.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/OculusMR_PlaneMeshComponent.h" },
		{ "ToolTip", "Component that allows you to specify custom triangle mesh geometry" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusMR_PlaneMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusMR_PlaneMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusMR_PlaneMeshComponent_Statics::ClassParams = {
		&UOculusMR_PlaneMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00A012A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOculusMR_PlaneMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusMR_PlaneMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOculusMR_PlaneMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UOculusMR_PlaneMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusMR_PlaneMeshComponent.OuterSingleton, Z_Construct_UClass_UOculusMR_PlaneMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusMR_PlaneMeshComponent.OuterSingleton;
	}
	template<> OCULUSMR_API UClass* StaticClass<UOculusMR_PlaneMeshComponent>()
	{
		return UOculusMR_PlaneMeshComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusMR_PlaneMeshComponent);
	UOculusMR_PlaneMeshComponent::~UOculusMR_PlaneMeshComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_PlaneMeshComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_PlaneMeshComponent_h_Statics::ScriptStructInfo[] = {
		{ FOculusMR_PlaneMeshTriangle::StaticStruct, Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewStructOps, TEXT("OculusMR_PlaneMeshTriangle"), &Z_Registration_Info_UScriptStruct_OculusMR_PlaneMeshTriangle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusMR_PlaneMeshTriangle), 1260742184U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_PlaneMeshComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOculusMR_PlaneMeshComponent, UOculusMR_PlaneMeshComponent::StaticClass, TEXT("UOculusMR_PlaneMeshComponent"), &Z_Registration_Info_UClass_UOculusMR_PlaneMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusMR_PlaneMeshComponent), 4075811016U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_PlaneMeshComponent_h_2332372298(TEXT("/Script/OculusMR"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_PlaneMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_PlaneMeshComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_PlaneMeshComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_PlaneMeshComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
