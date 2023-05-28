// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshReconstructorBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshReconstructorBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MRMESH_API UClass* Z_Construct_UClass_UMeshReconstructorBase();
	MRMESH_API UClass* Z_Construct_UClass_UMeshReconstructorBase_NoRegister();
	MRMESH_API UClass* Z_Construct_UClass_UMRMeshComponent_NoRegister();
	MRMESH_API UScriptStruct* Z_Construct_UScriptStruct_FMRMeshConfiguration();
	UPackage* Z_Construct_UPackage__Script_MRMesh();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MRMeshConfiguration;
class UScriptStruct* FMRMeshConfiguration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MRMeshConfiguration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MRMeshConfiguration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMRMeshConfiguration, (UObject*)Z_Construct_UPackage__Script_MRMesh(), TEXT("MRMeshConfiguration"));
	}
	return Z_Registration_Info_UScriptStruct_MRMeshConfiguration.OuterSingleton;
}
template<> MRMESH_API UScriptStruct* StaticStruct<FMRMeshConfiguration>()
{
	return FMRMeshConfiguration::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMRMeshConfiguration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMRMeshConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MeshReconstructorBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMRMeshConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMRMeshConfiguration>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMRMeshConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MRMesh,
		nullptr,
		&NewStructOps,
		"MRMeshConfiguration",
		sizeof(FMRMeshConfiguration),
		alignof(FMRMeshConfiguration),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMRMeshConfiguration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMRMeshConfiguration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMRMeshConfiguration()
	{
		if (!Z_Registration_Info_UScriptStruct_MRMeshConfiguration.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MRMeshConfiguration.InnerSingleton, Z_Construct_UScriptStruct_FMRMeshConfiguration_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MRMeshConfiguration.InnerSingleton;
	}
	DEFINE_FUNCTION(UMeshReconstructorBase::execDisconnectMRMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisconnectMRMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshReconstructorBase::execConnectMRMesh)
	{
		P_GET_OBJECT(UMRMeshComponent,Z_Param_Mesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConnectMRMesh(Z_Param_Mesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshReconstructorBase::execIsReconstructionPaused)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsReconstructionPaused();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshReconstructorBase::execIsReconstructionStarted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsReconstructionStarted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshReconstructorBase::execPauseReconstruction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PauseReconstruction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshReconstructorBase::execStopReconstruction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopReconstruction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshReconstructorBase::execStartReconstruction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartReconstruction();
		P_NATIVE_END;
	}
	void UMeshReconstructorBase::StaticRegisterNativesUMeshReconstructorBase()
	{
		UClass* Class = UMeshReconstructorBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConnectMRMesh", &UMeshReconstructorBase::execConnectMRMesh },
			{ "DisconnectMRMesh", &UMeshReconstructorBase::execDisconnectMRMesh },
			{ "IsReconstructionPaused", &UMeshReconstructorBase::execIsReconstructionPaused },
			{ "IsReconstructionStarted", &UMeshReconstructorBase::execIsReconstructionStarted },
			{ "PauseReconstruction", &UMeshReconstructorBase::execPauseReconstruction },
			{ "StartReconstruction", &UMeshReconstructorBase::execStartReconstruction },
			{ "StopReconstruction", &UMeshReconstructorBase::execStopReconstruction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics
	{
		struct MeshReconstructorBase_eventConnectMRMesh_Parms
		{
			UMRMeshComponent* Mesh;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MeshReconstructorBase_eventConnectMRMesh_Parms, Mesh), Z_Construct_UClass_UMRMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::NewProp_Mesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::NewProp_Mesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeshReconstructorBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshReconstructorBase, nullptr, "ConnectMRMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::MeshReconstructorBase_eventConnectMRMesh_Parms), Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshReconstructorBase_DisconnectMRMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshReconstructorBase_DisconnectMRMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeshReconstructorBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshReconstructorBase_DisconnectMRMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshReconstructorBase, nullptr, "DisconnectMRMesh", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshReconstructorBase_DisconnectMRMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshReconstructorBase_DisconnectMRMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshReconstructorBase_DisconnectMRMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshReconstructorBase_DisconnectMRMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics
	{
		struct MeshReconstructorBase_eventIsReconstructionPaused_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MeshReconstructorBase_eventIsReconstructionPaused_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MeshReconstructorBase_eventIsReconstructionPaused_Parms), &Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "ModuleRelativePath", "Public/MeshReconstructorBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshReconstructorBase, nullptr, "IsReconstructionPaused", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::MeshReconstructorBase_eventIsReconstructionPaused_Parms), Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics
	{
		struct MeshReconstructorBase_eventIsReconstructionStarted_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MeshReconstructorBase_eventIsReconstructionStarted_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MeshReconstructorBase_eventIsReconstructionStarted_Parms), &Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "ModuleRelativePath", "Public/MeshReconstructorBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshReconstructorBase, nullptr, "IsReconstructionStarted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::MeshReconstructorBase_eventIsReconstructionStarted_Parms), Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshReconstructorBase_PauseReconstruction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshReconstructorBase_PauseReconstruction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "ModuleRelativePath", "Public/MeshReconstructorBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshReconstructorBase_PauseReconstruction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshReconstructorBase, nullptr, "PauseReconstruction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshReconstructorBase_PauseReconstruction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshReconstructorBase_PauseReconstruction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshReconstructorBase_PauseReconstruction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshReconstructorBase_PauseReconstruction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshReconstructorBase_StartReconstruction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshReconstructorBase_StartReconstruction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "ModuleRelativePath", "Public/MeshReconstructorBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshReconstructorBase_StartReconstruction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshReconstructorBase, nullptr, "StartReconstruction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshReconstructorBase_StartReconstruction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshReconstructorBase_StartReconstruction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshReconstructorBase_StartReconstruction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshReconstructorBase_StartReconstruction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshReconstructorBase_StopReconstruction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshReconstructorBase_StopReconstruction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "ModuleRelativePath", "Public/MeshReconstructorBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshReconstructorBase_StopReconstruction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshReconstructorBase, nullptr, "StopReconstruction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshReconstructorBase_StopReconstruction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshReconstructorBase_StopReconstruction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshReconstructorBase_StopReconstruction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshReconstructorBase_StopReconstruction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshReconstructorBase);
	UClass* Z_Construct_UClass_UMeshReconstructorBase_NoRegister()
	{
		return UMeshReconstructorBase::StaticClass();
	}
	struct Z_Construct_UClass_UMeshReconstructorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshReconstructorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MRMesh,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMeshReconstructorBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh, "ConnectMRMesh" }, // 1834499513
		{ &Z_Construct_UFunction_UMeshReconstructorBase_DisconnectMRMesh, "DisconnectMRMesh" }, // 2840381893
		{ &Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused, "IsReconstructionPaused" }, // 3225523752
		{ &Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted, "IsReconstructionStarted" }, // 543902855
		{ &Z_Construct_UFunction_UMeshReconstructorBase_PauseReconstruction, "PauseReconstruction" }, // 3104168205
		{ &Z_Construct_UFunction_UMeshReconstructorBase_StartReconstruction, "StartReconstruction" }, // 3921954447
		{ &Z_Construct_UFunction_UMeshReconstructorBase_StopReconstruction, "StopReconstruction" }, // 3221837700
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshReconstructorBase_Statics::Class_MetaDataParams[] = {
		{ "Experimental", "" },
		{ "IncludePath", "MeshReconstructorBase.h" },
		{ "ModuleRelativePath", "Public/MeshReconstructorBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshReconstructorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshReconstructorBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshReconstructorBase_Statics::ClassParams = {
		&UMeshReconstructorBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshReconstructorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshReconstructorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshReconstructorBase()
	{
		if (!Z_Registration_Info_UClass_UMeshReconstructorBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshReconstructorBase.OuterSingleton, Z_Construct_UClass_UMeshReconstructorBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshReconstructorBase.OuterSingleton;
	}
	template<> MRMESH_API UClass* StaticClass<UMeshReconstructorBase>()
	{
		return UMeshReconstructorBase::StaticClass();
	}
	UMeshReconstructorBase::UMeshReconstructorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshReconstructorBase);
	UMeshReconstructorBase::~UMeshReconstructorBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MRMesh_Public_MeshReconstructorBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MRMesh_Public_MeshReconstructorBase_h_Statics::ScriptStructInfo[] = {
		{ FMRMeshConfiguration::StaticStruct, Z_Construct_UScriptStruct_FMRMeshConfiguration_Statics::NewStructOps, TEXT("MRMeshConfiguration"), &Z_Registration_Info_UScriptStruct_MRMeshConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMRMeshConfiguration), 3434953072U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MRMesh_Public_MeshReconstructorBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMeshReconstructorBase, UMeshReconstructorBase::StaticClass, TEXT("UMeshReconstructorBase"), &Z_Registration_Info_UClass_UMeshReconstructorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshReconstructorBase), 46209912U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MRMesh_Public_MeshReconstructorBase_h_2450204094(TEXT("/Script/MRMesh"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MRMesh_Public_MeshReconstructorBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MRMesh_Public_MeshReconstructorBase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MRMesh_Public_MeshReconstructorBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MRMesh_Public_MeshReconstructorBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
