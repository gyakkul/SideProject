// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/GeometryFramework/Public/DynamicMeshActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicMeshActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_ADynamicMeshActor();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_ADynamicMeshActor_NoRegister();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMeshComponent_NoRegister();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMeshPool_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GeometryFramework();
// End Cross Module References
	DEFINE_FUNCTION(ADynamicMeshActor::execFreeAllComputeMeshes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FreeAllComputeMeshes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADynamicMeshActor::execReleaseAllComputeMeshes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReleaseAllComputeMeshes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADynamicMeshActor::execReleaseComputeMesh)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_Mesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReleaseComputeMesh(Z_Param_Mesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADynamicMeshActor::execAllocateComputeMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=P_THIS->AllocateComputeMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADynamicMeshActor::execGetComputeMeshPool)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMeshPool**)Z_Param__Result=P_THIS->GetComputeMeshPool();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADynamicMeshActor::execGetDynamicMeshComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMeshComponent**)Z_Param__Result=P_THIS->GetDynamicMeshComponent();
		P_NATIVE_END;
	}
	void ADynamicMeshActor::StaticRegisterNativesADynamicMeshActor()
	{
		UClass* Class = ADynamicMeshActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AllocateComputeMesh", &ADynamicMeshActor::execAllocateComputeMesh },
			{ "FreeAllComputeMeshes", &ADynamicMeshActor::execFreeAllComputeMeshes },
			{ "GetComputeMeshPool", &ADynamicMeshActor::execGetComputeMeshPool },
			{ "GetDynamicMeshComponent", &ADynamicMeshActor::execGetDynamicMeshComponent },
			{ "ReleaseAllComputeMeshes", &ADynamicMeshActor::execReleaseAllComputeMeshes },
			{ "ReleaseComputeMesh", &ADynamicMeshActor::execReleaseComputeMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADynamicMeshActor_AllocateComputeMesh_Statics
	{
		struct DynamicMeshActor_eventAllocateComputeMesh_Parms
		{
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADynamicMeshActor_AllocateComputeMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicMeshActor_eventAllocateComputeMesh_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADynamicMeshActor_AllocateComputeMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicMeshActor_AllocateComputeMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADynamicMeshActor_AllocateComputeMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "DynamicMeshActor" },
		{ "Comment", "/** Request a compute mesh from the Pool, which will return a previously-allocated mesh or add and return a new one. If the Pool is disabled, a new UDynamicMesh will be allocated and returned. */" },
		{ "ModuleRelativePath", "Public/DynamicMeshActor.h" },
		{ "ToolTip", "Request a compute mesh from the Pool, which will return a previously-allocated mesh or add and return a new one. If the Pool is disabled, a new UDynamicMesh will be allocated and returned." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADynamicMeshActor_AllocateComputeMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADynamicMeshActor, nullptr, "AllocateComputeMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADynamicMeshActor_AllocateComputeMesh_Statics::DynamicMeshActor_eventAllocateComputeMesh_Parms), Z_Construct_UFunction_ADynamicMeshActor_AllocateComputeMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADynamicMeshActor_AllocateComputeMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADynamicMeshActor_AllocateComputeMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADynamicMeshActor_AllocateComputeMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADynamicMeshActor_AllocateComputeMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADynamicMeshActor_AllocateComputeMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADynamicMeshActor_FreeAllComputeMeshes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADynamicMeshActor_FreeAllComputeMeshes_Statics::Function_MetaDataParams[] = {
		{ "Category", "DynamicMeshActor" },
		{ "Comment", "/** Release all compute meshes that the Pool has allocated, and then release them from the Pool, so that they will be garbage-collected */" },
		{ "ModuleRelativePath", "Public/DynamicMeshActor.h" },
		{ "ToolTip", "Release all compute meshes that the Pool has allocated, and then release them from the Pool, so that they will be garbage-collected" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADynamicMeshActor_FreeAllComputeMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADynamicMeshActor, nullptr, "FreeAllComputeMeshes", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADynamicMeshActor_FreeAllComputeMeshes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADynamicMeshActor_FreeAllComputeMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADynamicMeshActor_FreeAllComputeMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADynamicMeshActor_FreeAllComputeMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADynamicMeshActor_GetComputeMeshPool_Statics
	{
		struct DynamicMeshActor_eventGetComputeMeshPool_Parms
		{
			UDynamicMeshPool* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADynamicMeshActor_GetComputeMeshPool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicMeshActor_eventGetComputeMeshPool_Parms, ReturnValue), Z_Construct_UClass_UDynamicMeshPool_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADynamicMeshActor_GetComputeMeshPool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicMeshActor_GetComputeMeshPool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADynamicMeshActor_GetComputeMeshPool_Statics::Function_MetaDataParams[] = {
		{ "Category", "DynamicMeshActor" },
		{ "Comment", "/** Access the compute mesh pool */" },
		{ "ModuleRelativePath", "Public/DynamicMeshActor.h" },
		{ "ToolTip", "Access the compute mesh pool" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADynamicMeshActor_GetComputeMeshPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADynamicMeshActor, nullptr, "GetComputeMeshPool", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADynamicMeshActor_GetComputeMeshPool_Statics::DynamicMeshActor_eventGetComputeMeshPool_Parms), Z_Construct_UFunction_ADynamicMeshActor_GetComputeMeshPool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADynamicMeshActor_GetComputeMeshPool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADynamicMeshActor_GetComputeMeshPool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADynamicMeshActor_GetComputeMeshPool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADynamicMeshActor_GetComputeMeshPool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADynamicMeshActor_GetComputeMeshPool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADynamicMeshActor_GetDynamicMeshComponent_Statics
	{
		struct DynamicMeshActor_eventGetDynamicMeshComponent_Parms
		{
			UDynamicMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADynamicMeshActor_GetDynamicMeshComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADynamicMeshActor_GetDynamicMeshComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicMeshActor_eventGetDynamicMeshComponent_Parms, ReturnValue), Z_Construct_UClass_UDynamicMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADynamicMeshActor_GetDynamicMeshComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADynamicMeshActor_GetDynamicMeshComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADynamicMeshActor_GetDynamicMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicMeshActor_GetDynamicMeshComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADynamicMeshActor_GetDynamicMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "DynamicMeshActor" },
		{ "ModuleRelativePath", "Public/DynamicMeshActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADynamicMeshActor_GetDynamicMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADynamicMeshActor, nullptr, "GetDynamicMeshComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADynamicMeshActor_GetDynamicMeshComponent_Statics::DynamicMeshActor_eventGetDynamicMeshComponent_Parms), Z_Construct_UFunction_ADynamicMeshActor_GetDynamicMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADynamicMeshActor_GetDynamicMeshComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADynamicMeshActor_GetDynamicMeshComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADynamicMeshActor_GetDynamicMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADynamicMeshActor_GetDynamicMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADynamicMeshActor_GetDynamicMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADynamicMeshActor_ReleaseAllComputeMeshes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADynamicMeshActor_ReleaseAllComputeMeshes_Statics::Function_MetaDataParams[] = {
		{ "Category", "DynamicMeshActor" },
		{ "Comment", "/** Release all compute meshes that the Pool has allocated */" },
		{ "ModuleRelativePath", "Public/DynamicMeshActor.h" },
		{ "ToolTip", "Release all compute meshes that the Pool has allocated" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADynamicMeshActor_ReleaseAllComputeMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADynamicMeshActor, nullptr, "ReleaseAllComputeMeshes", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADynamicMeshActor_ReleaseAllComputeMeshes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADynamicMeshActor_ReleaseAllComputeMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADynamicMeshActor_ReleaseAllComputeMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADynamicMeshActor_ReleaseAllComputeMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADynamicMeshActor_ReleaseComputeMesh_Statics
	{
		struct DynamicMeshActor_eventReleaseComputeMesh_Parms
		{
			UDynamicMesh* Mesh;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADynamicMeshActor_ReleaseComputeMesh_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicMeshActor_eventReleaseComputeMesh_Parms, Mesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADynamicMeshActor_ReleaseComputeMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DynamicMeshActor_eventReleaseComputeMesh_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADynamicMeshActor_ReleaseComputeMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DynamicMeshActor_eventReleaseComputeMesh_Parms), &Z_Construct_UFunction_ADynamicMeshActor_ReleaseComputeMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADynamicMeshActor_ReleaseComputeMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicMeshActor_ReleaseComputeMesh_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADynamicMeshActor_ReleaseComputeMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADynamicMeshActor_ReleaseComputeMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "DynamicMeshActor" },
		{ "Comment", "/** Release a compute mesh back to the Pool */" },
		{ "ModuleRelativePath", "Public/DynamicMeshActor.h" },
		{ "ToolTip", "Release a compute mesh back to the Pool" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADynamicMeshActor_ReleaseComputeMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADynamicMeshActor, nullptr, "ReleaseComputeMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADynamicMeshActor_ReleaseComputeMesh_Statics::DynamicMeshActor_eventReleaseComputeMesh_Parms), Z_Construct_UFunction_ADynamicMeshActor_ReleaseComputeMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADynamicMeshActor_ReleaseComputeMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADynamicMeshActor_ReleaseComputeMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADynamicMeshActor_ReleaseComputeMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADynamicMeshActor_ReleaseComputeMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADynamicMeshActor_ReleaseComputeMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADynamicMeshActor);
	UClass* Z_Construct_UClass_ADynamicMeshActor_NoRegister()
	{
		return ADynamicMeshActor::StaticClass();
	}
	struct Z_Construct_UClass_ADynamicMeshActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DynamicMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableComputeMeshPool_MetaData[];
#endif
		static void NewProp_bEnableComputeMeshPool_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableComputeMeshPool;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMeshPool_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DynamicMeshPool;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADynamicMeshActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADynamicMeshActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADynamicMeshActor_AllocateComputeMesh, "AllocateComputeMesh" }, // 1184204545
		{ &Z_Construct_UFunction_ADynamicMeshActor_FreeAllComputeMeshes, "FreeAllComputeMeshes" }, // 2099642490
		{ &Z_Construct_UFunction_ADynamicMeshActor_GetComputeMeshPool, "GetComputeMeshPool" }, // 2179032213
		{ &Z_Construct_UFunction_ADynamicMeshActor_GetDynamicMeshComponent, "GetDynamicMeshComponent" }, // 2666018661
		{ &Z_Construct_UFunction_ADynamicMeshActor_ReleaseAllComputeMeshes, "ReleaseAllComputeMeshes" }, // 134931894
		{ &Z_Construct_UFunction_ADynamicMeshActor_ReleaseComputeMesh, "ReleaseComputeMesh" }, // 2414302323
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADynamicMeshActor_Statics::Class_MetaDataParams[] = {
		{ "ChildCanTick", "" },
		{ "ClassGroupNames", "DynamicMesh" },
		{ "Comment", "/**\n * ADynamicMeshActor is an Actor that has a USimpleDynamicMeshComponent as it's RootObject.\n */" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "DynamicMeshActor.h" },
		{ "IsConversionRoot", "true" },
		{ "ModuleRelativePath", "Public/DynamicMeshActor.h" },
		{ "ToolTip", "ADynamicMeshActor is an Actor that has a USimpleDynamicMeshComponent as it's RootObject." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADynamicMeshActor_Statics::NewProp_DynamicMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "DynamicMeshActor" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Mesh,Rendering,Physics,Components|StaticMesh" },
		{ "ModuleRelativePath", "Public/DynamicMeshActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADynamicMeshActor_Statics::NewProp_DynamicMeshComponent = { "DynamicMeshComponent", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADynamicMeshActor, DynamicMeshComponent), Z_Construct_UClass_UDynamicMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADynamicMeshActor_Statics::NewProp_DynamicMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicMeshActor_Statics::NewProp_DynamicMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADynamicMeshActor_Statics::NewProp_bEnableComputeMeshPool_MetaData[] = {
		{ "Category", "DynamicMeshActor|Advanced" },
		{ "Comment", "/** Control whether the DynamicMeshPool will be created when requested via GetComputeMeshPool() */" },
		{ "ModuleRelativePath", "Public/DynamicMeshActor.h" },
		{ "ToolTip", "Control whether the DynamicMeshPool will be created when requested via GetComputeMeshPool()" },
	};
#endif
	void Z_Construct_UClass_ADynamicMeshActor_Statics::NewProp_bEnableComputeMeshPool_SetBit(void* Obj)
	{
		((ADynamicMeshActor*)Obj)->bEnableComputeMeshPool = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADynamicMeshActor_Statics::NewProp_bEnableComputeMeshPool = { "bEnableComputeMeshPool", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ADynamicMeshActor), &Z_Construct_UClass_ADynamicMeshActor_Statics::NewProp_bEnableComputeMeshPool_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADynamicMeshActor_Statics::NewProp_bEnableComputeMeshPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicMeshActor_Statics::NewProp_bEnableComputeMeshPool_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADynamicMeshActor_Statics::NewProp_DynamicMeshPool_MetaData[] = {
		{ "Comment", "/** The internal Mesh Pool, for use in DynamicMeshActor BPs. Use GetComputeMeshPool() to access this, as it will only be created on-demand if bEnableComputeMeshPool = true */" },
		{ "ModuleRelativePath", "Public/DynamicMeshActor.h" },
		{ "ToolTip", "The internal Mesh Pool, for use in DynamicMeshActor BPs. Use GetComputeMeshPool() to access this, as it will only be created on-demand if bEnableComputeMeshPool = true" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADynamicMeshActor_Statics::NewProp_DynamicMeshPool = { "DynamicMeshPool", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADynamicMeshActor, DynamicMeshPool), Z_Construct_UClass_UDynamicMeshPool_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADynamicMeshActor_Statics::NewProp_DynamicMeshPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicMeshActor_Statics::NewProp_DynamicMeshPool_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADynamicMeshActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADynamicMeshActor_Statics::NewProp_DynamicMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADynamicMeshActor_Statics::NewProp_bEnableComputeMeshPool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADynamicMeshActor_Statics::NewProp_DynamicMeshPool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADynamicMeshActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADynamicMeshActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADynamicMeshActor_Statics::ClassParams = {
		&ADynamicMeshActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADynamicMeshActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicMeshActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADynamicMeshActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicMeshActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADynamicMeshActor()
	{
		if (!Z_Registration_Info_UClass_ADynamicMeshActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADynamicMeshActor.OuterSingleton, Z_Construct_UClass_ADynamicMeshActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADynamicMeshActor.OuterSingleton;
	}
	template<> GEOMETRYFRAMEWORK_API UClass* StaticClass<ADynamicMeshActor>()
	{
		return ADynamicMeshActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADynamicMeshActor);
	ADynamicMeshActor::~ADynamicMeshActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADynamicMeshActor, ADynamicMeshActor::StaticClass, TEXT("ADynamicMeshActor"), &Z_Registration_Info_UClass_ADynamicMeshActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADynamicMeshActor), 1946298895U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshActor_h_755349822(TEXT("/Script/GeometryFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_DynamicMeshActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
