// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MRMeshComponent.h"
#include "../../Source/Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMRMeshComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstance();
	MRMESH_API UClass* Z_Construct_UClass_UMRMeshBodyHolder();
	MRMESH_API UClass* Z_Construct_UClass_UMRMeshBodyHolder_NoRegister();
	MRMESH_API UClass* Z_Construct_UClass_UMRMeshComponent();
	MRMESH_API UClass* Z_Construct_UClass_UMRMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MRMesh();
// End Cross Module References
	void UMRMeshBodyHolder::StaticRegisterNativesUMRMeshBodyHolder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMRMeshBodyHolder);
	UClass* Z_Construct_UClass_UMRMeshBodyHolder_NoRegister()
	{
		return UMRMeshBodyHolder::StaticClass();
	}
	struct Z_Construct_UClass_UMRMeshBodyHolder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodySetup_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BodySetup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyInstance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BodyInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMRMeshBodyHolder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MRMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRMeshBodyHolder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Because physics cooking uses GetOuter() to get the IInterface_CollisionDataProvider and provides no way to determine which physics body it\n// is currently working on we are wrapping each body in this Holder so that it can be the Outer and provide the correct data.\n" },
		{ "IncludePath", "MRMeshComponent.h" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
		{ "ToolTip", "Because physics cooking uses GetOuter() to get the IInterface_CollisionDataProvider and provides no way to determine which physics body it\nis currently working on we are wrapping each body in this Holder so that it can be the Outer and provide the correct data." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRMeshBodyHolder_Statics::NewProp_BodySetup_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMRMeshBodyHolder_Statics::NewProp_BodySetup = { "BodySetup", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMRMeshBodyHolder, BodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMRMeshBodyHolder_Statics::NewProp_BodySetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMRMeshBodyHolder_Statics::NewProp_BodySetup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRMeshBodyHolder_Statics::NewProp_BodyInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMRMeshBodyHolder_Statics::NewProp_BodyInstance = { "BodyInstance", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMRMeshBodyHolder, BodyInstance), Z_Construct_UScriptStruct_FBodyInstance, METADATA_PARAMS(Z_Construct_UClass_UMRMeshBodyHolder_Statics::NewProp_BodyInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMRMeshBodyHolder_Statics::NewProp_BodyInstance_MetaData)) }; // 1519692163
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMRMeshBodyHolder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRMeshBodyHolder_Statics::NewProp_BodySetup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRMeshBodyHolder_Statics::NewProp_BodyInstance,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMRMeshBodyHolder_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister, (int32)VTABLE_OFFSET(UMRMeshBodyHolder, IInterface_CollisionDataProvider), false },  // 1866130202
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMRMeshBodyHolder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMRMeshBodyHolder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMRMeshBodyHolder_Statics::ClassParams = {
		&UMRMeshBodyHolder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMRMeshBodyHolder_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMRMeshBodyHolder_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMRMeshBodyHolder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMRMeshBodyHolder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMRMeshBodyHolder()
	{
		if (!Z_Registration_Info_UClass_UMRMeshBodyHolder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMRMeshBodyHolder.OuterSingleton, Z_Construct_UClass_UMRMeshBodyHolder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMRMeshBodyHolder.OuterSingleton;
	}
	template<> MRMESH_API UClass* StaticClass<UMRMeshBodyHolder>()
	{
		return UMRMeshBodyHolder::StaticClass();
	}
	UMRMeshBodyHolder::UMRMeshBodyHolder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMRMeshBodyHolder);
	UMRMeshBodyHolder::~UMRMeshBodyHolder() {}
	DEFINE_FUNCTION(UMRMeshComponent::execGetWireframeColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetWireframeColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMRMeshComponent::execSetWireframeColor)
	{
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_InColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWireframeColor(Z_Param_Out_InColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMRMeshComponent::execGetUseWireframe)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUseWireframe();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMRMeshComponent::execSetUseWireframe)
	{
		P_GET_UBOOL(Z_Param_bUseWireframe);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUseWireframe(Z_Param_bUseWireframe);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMRMeshComponent::execGetEnableMeshOcclusion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetEnableMeshOcclusion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMRMeshComponent::execSetEnableMeshOcclusion)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableMeshOcclusion(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMRMeshComponent::execSetWireframeMaterial)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_InMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWireframeMaterial(Z_Param_InMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMRMeshComponent::execClear)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Clear();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMRMeshComponent::execRequestNavMeshUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestNavMeshUpdate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMRMeshComponent::execForceNavMeshUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForceNavMeshUpdate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMRMeshComponent::execIsConnected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsConnected();
		P_NATIVE_END;
	}
	void UMRMeshComponent::StaticRegisterNativesUMRMeshComponent()
	{
		UClass* Class = UMRMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Clear", &UMRMeshComponent::execClear },
			{ "ForceNavMeshUpdate", &UMRMeshComponent::execForceNavMeshUpdate },
			{ "GetEnableMeshOcclusion", &UMRMeshComponent::execGetEnableMeshOcclusion },
			{ "GetUseWireframe", &UMRMeshComponent::execGetUseWireframe },
			{ "GetWireframeColor", &UMRMeshComponent::execGetWireframeColor },
			{ "IsConnected", &UMRMeshComponent::execIsConnected },
			{ "RequestNavMeshUpdate", &UMRMeshComponent::execRequestNavMeshUpdate },
			{ "SetEnableMeshOcclusion", &UMRMeshComponent::execSetEnableMeshOcclusion },
			{ "SetUseWireframe", &UMRMeshComponent::execSetUseWireframe },
			{ "SetWireframeColor", &UMRMeshComponent::execSetWireframeColor },
			{ "SetWireframeMaterial", &UMRMeshComponent::execSetWireframeMaterial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMRMeshComponent_Clear_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRMeshComponent_Clear_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRMeshComponent_Clear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRMeshComponent, nullptr, "Clear", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMRMeshComponent_Clear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_Clear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMRMeshComponent_Clear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRMeshComponent_Clear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRMeshComponent_ForceNavMeshUpdate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRMeshComponent_ForceNavMeshUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "Comment", "/**\n\x09* Force navmesh generation to run using the current collision data.  This will run even if the collision data has not been udpated! Unless you are changing navmesh settings or similar RequestNavMeshUpdate is reccomended.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
		{ "ToolTip", "Force navmesh generation to run using the current collision data.  This will run even if the collision data has not been udpated! Unless you are changing navmesh settings or similar RequestNavMeshUpdate is reccomended." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRMeshComponent_ForceNavMeshUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRMeshComponent, nullptr, "ForceNavMeshUpdate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMRMeshComponent_ForceNavMeshUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_ForceNavMeshUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMRMeshComponent_ForceNavMeshUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRMeshComponent_ForceNavMeshUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion_Statics
	{
		struct MRMeshComponent_eventGetEnableMeshOcclusion_Parms
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
	void Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MRMeshComponent_eventGetEnableMeshOcclusion_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MRMeshComponent_eventGetEnableMeshOcclusion_Parms), &Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRMeshComponent, nullptr, "GetEnableMeshOcclusion", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion_Statics::MRMeshComponent_eventGetEnableMeshOcclusion_Parms), Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe_Statics
	{
		struct MRMeshComponent_eventGetUseWireframe_Parms
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
	void Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MRMeshComponent_eventGetUseWireframe_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MRMeshComponent_eventGetUseWireframe_Parms), &Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRMeshComponent, nullptr, "GetUseWireframe", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe_Statics::MRMeshComponent_eventGetUseWireframe_Parms), Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRMeshComponent_GetWireframeColor_Statics
	{
		struct MRMeshComponent_eventGetWireframeColor_Parms
		{
			FLinearColor ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRMeshComponent_GetWireframeColor_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMRMeshComponent_GetWireframeColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MRMeshComponent_eventGetWireframeColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UMRMeshComponent_GetWireframeColor_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_GetWireframeColor_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRMeshComponent_GetWireframeColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRMeshComponent_GetWireframeColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRMeshComponent_GetWireframeColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRMeshComponent_GetWireframeColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRMeshComponent, nullptr, "GetWireframeColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMRMeshComponent_GetWireframeColor_Statics::MRMeshComponent_eventGetWireframeColor_Parms), Z_Construct_UFunction_UMRMeshComponent_GetWireframeColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_GetWireframeColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMRMeshComponent_GetWireframeColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_GetWireframeColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMRMeshComponent_GetWireframeColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRMeshComponent_GetWireframeColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics
	{
		struct MRMeshComponent_eventIsConnected_Parms
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
	void Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MRMeshComponent_eventIsConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MRMeshComponent_eventIsConnected_Parms), &Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRMeshComponent, nullptr, "IsConnected", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::MRMeshComponent_eventIsConnected_Parms), Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMRMeshComponent_IsConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRMeshComponent_IsConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRMeshComponent_RequestNavMeshUpdate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRMeshComponent_RequestNavMeshUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "Comment", "/**\n\x09* Generate nav mesh if collision data has changed since the last nav mesh generation.  \n\x09*/" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
		{ "ToolTip", "Generate nav mesh if collision data has changed since the last nav mesh generation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRMeshComponent_RequestNavMeshUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRMeshComponent, nullptr, "RequestNavMeshUpdate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMRMeshComponent_RequestNavMeshUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_RequestNavMeshUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMRMeshComponent_RequestNavMeshUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRMeshComponent_RequestNavMeshUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion_Statics
	{
		struct MRMeshComponent_eventSetEnableMeshOcclusion_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((MRMeshComponent_eventSetEnableMeshOcclusion_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MRMeshComponent_eventSetEnableMeshOcclusion_Parms), &Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRMeshComponent, nullptr, "SetEnableMeshOcclusion", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion_Statics::MRMeshComponent_eventSetEnableMeshOcclusion_Parms), Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe_Statics
	{
		struct MRMeshComponent_eventSetUseWireframe_Parms
		{
			bool bUseWireframe;
		};
		static void NewProp_bUseWireframe_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseWireframe;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe_Statics::NewProp_bUseWireframe_SetBit(void* Obj)
	{
		((MRMeshComponent_eventSetUseWireframe_Parms*)Obj)->bUseWireframe = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe_Statics::NewProp_bUseWireframe = { "bUseWireframe", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MRMeshComponent_eventSetUseWireframe_Parms), &Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe_Statics::NewProp_bUseWireframe_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe_Statics::NewProp_bUseWireframe,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRMeshComponent, nullptr, "SetUseWireframe", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe_Statics::MRMeshComponent_eventSetUseWireframe_Parms), Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRMeshComponent_SetWireframeColor_Statics
	{
		struct MRMeshComponent_eventSetWireframeColor_Parms
		{
			FLinearColor InColor;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRMeshComponent_SetWireframeColor_Statics::NewProp_InColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMRMeshComponent_SetWireframeColor_Statics::NewProp_InColor = { "InColor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MRMeshComponent_eventSetWireframeColor_Parms, InColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UMRMeshComponent_SetWireframeColor_Statics::NewProp_InColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_SetWireframeColor_Statics::NewProp_InColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRMeshComponent_SetWireframeColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRMeshComponent_SetWireframeColor_Statics::NewProp_InColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRMeshComponent_SetWireframeColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRMeshComponent_SetWireframeColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRMeshComponent, nullptr, "SetWireframeColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMRMeshComponent_SetWireframeColor_Statics::MRMeshComponent_eventSetWireframeColor_Parms), Z_Construct_UFunction_UMRMeshComponent_SetWireframeColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_SetWireframeColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMRMeshComponent_SetWireframeColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_SetWireframeColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMRMeshComponent_SetWireframeColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRMeshComponent_SetWireframeColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMRMeshComponent_SetWireframeMaterial_Statics
	{
		struct MRMeshComponent_eventSetWireframeMaterial_Parms
		{
			UMaterialInterface* InMaterial;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMRMeshComponent_SetWireframeMaterial_Statics::NewProp_InMaterial = { "InMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MRMeshComponent_eventSetWireframeMaterial_Parms, InMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRMeshComponent_SetWireframeMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRMeshComponent_SetWireframeMaterial_Statics::NewProp_InMaterial,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMRMeshComponent_SetWireframeMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "Comment", "// Set the wireframe material.\n" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
		{ "ToolTip", "Set the wireframe material." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRMeshComponent_SetWireframeMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRMeshComponent, nullptr, "SetWireframeMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMRMeshComponent_SetWireframeMaterial_Statics::MRMeshComponent_eventSetWireframeMaterial_Parms), Z_Construct_UFunction_UMRMeshComponent_SetWireframeMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_SetWireframeMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMRMeshComponent_SetWireframeMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRMeshComponent_SetWireframeMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMRMeshComponent_SetWireframeMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRMeshComponent_SetWireframeMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMRMeshComponent);
	UClass* Z_Construct_UClass_UMRMeshComponent_NoRegister()
	{
		return UMRMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMRMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WireframeMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WireframeMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreateMeshProxySections_MetaData[];
#endif
		static void NewProp_bCreateMeshProxySections_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateMeshProxySections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateNavMeshOnMeshUpdate_MetaData[];
#endif
		static void NewProp_bUpdateNavMeshOnMeshUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateNavMeshOnMeshUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNeverCreateCollisionMesh_MetaData[];
#endif
		static void NewProp_bNeverCreateCollisionMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeverCreateCollisionMesh;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BodyHolders_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyHolders_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BodyHolders;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMRMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MRMesh,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMRMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMRMeshComponent_Clear, "Clear" }, // 3569203426
		{ &Z_Construct_UFunction_UMRMeshComponent_ForceNavMeshUpdate, "ForceNavMeshUpdate" }, // 526471317
		{ &Z_Construct_UFunction_UMRMeshComponent_GetEnableMeshOcclusion, "GetEnableMeshOcclusion" }, // 3567131724
		{ &Z_Construct_UFunction_UMRMeshComponent_GetUseWireframe, "GetUseWireframe" }, // 3158540011
		{ &Z_Construct_UFunction_UMRMeshComponent_GetWireframeColor, "GetWireframeColor" }, // 3315885080
		{ &Z_Construct_UFunction_UMRMeshComponent_IsConnected, "IsConnected" }, // 1861748993
		{ &Z_Construct_UFunction_UMRMeshComponent_RequestNavMeshUpdate, "RequestNavMeshUpdate" }, // 3526542140
		{ &Z_Construct_UFunction_UMRMeshComponent_SetEnableMeshOcclusion, "SetEnableMeshOcclusion" }, // 2112515277
		{ &Z_Construct_UFunction_UMRMeshComponent_SetUseWireframe, "SetUseWireframe" }, // 3591451543
		{ &Z_Construct_UFunction_UMRMeshComponent_SetWireframeColor, "SetWireframeColor" }, // 93266988
		{ &Z_Construct_UFunction_UMRMeshComponent_SetWireframeMaterial, "SetWireframeMaterial" }, // 602876459
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "HideCategories", "Physics Mobility VirtualTexture Trigger" },
		{ "IncludePath", "MRMeshComponent.h" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMRMeshComponent, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_WireframeMaterial_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_WireframeMaterial = { "WireframeMaterial", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMRMeshComponent, WireframeMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_WireframeMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_WireframeMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bCreateMeshProxySections_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** If true, MRMesh will create a renderable mesh proxy.  If false it will not, but could still provide collision. */" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
		{ "ToolTip", "If true, MRMesh will create a renderable mesh proxy.  If false it will not, but could still provide collision." },
	};
#endif
	void Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bCreateMeshProxySections_SetBit(void* Obj)
	{
		((UMRMeshComponent*)Obj)->bCreateMeshProxySections = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bCreateMeshProxySections = { "bCreateMeshProxySections", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMRMeshComponent), &Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bCreateMeshProxySections_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bCreateMeshProxySections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bCreateMeshProxySections_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bUpdateNavMeshOnMeshUpdate_MetaData[] = {
		{ "Category", "MRMesh" },
		{ "Comment", "/** If true, MRMesh will automatically update its navmesh whenever any Mesh section is updated. This may be expensive. If this is disabled use ForceNavMeshUpdate to trigger a navmesh update when necessary.  Moving the component will also trigger a navmesh update.*/" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
		{ "ToolTip", "If true, MRMesh will automatically update its navmesh whenever any Mesh section is updated. This may be expensive. If this is disabled use ForceNavMeshUpdate to trigger a navmesh update when necessary.  Moving the component will also trigger a navmesh update." },
	};
#endif
	void Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bUpdateNavMeshOnMeshUpdate_SetBit(void* Obj)
	{
		((UMRMeshComponent*)Obj)->bUpdateNavMeshOnMeshUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bUpdateNavMeshOnMeshUpdate = { "bUpdateNavMeshOnMeshUpdate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMRMeshComponent), &Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bUpdateNavMeshOnMeshUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bUpdateNavMeshOnMeshUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bUpdateNavMeshOnMeshUpdate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bNeverCreateCollisionMesh_MetaData[] = {
		{ "Category", "MRMesh" },
		{ "Comment", "/** If true, MRMesh will not create a collidable ridgid body for each mesh section and can therefore never have collision.  Avoids the cost of generating collision.*/" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
		{ "ToolTip", "If true, MRMesh will not create a collidable ridgid body for each mesh section and can therefore never have collision.  Avoids the cost of generating collision." },
	};
#endif
	void Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bNeverCreateCollisionMesh_SetBit(void* Obj)
	{
		((UMRMeshComponent*)Obj)->bNeverCreateCollisionMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bNeverCreateCollisionMesh = { "bNeverCreateCollisionMesh", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMRMeshComponent), &Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bNeverCreateCollisionMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bNeverCreateCollisionMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bNeverCreateCollisionMesh_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_BodyHolders_Inner = { "BodyHolders", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMRMeshBodyHolder_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_BodyHolders_MetaData[] = {
		{ "Comment", "// Collision/Physics data\n" },
		{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
		{ "ToolTip", "Collision/Physics data" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_BodyHolders = { "BodyHolders", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMRMeshComponent, BodyHolders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_BodyHolders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_BodyHolders_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMRMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_WireframeMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bCreateMeshProxySections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bUpdateNavMeshOnMeshUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_bNeverCreateCollisionMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_BodyHolders_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRMeshComponent_Statics::NewProp_BodyHolders,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMRMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMRMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMRMeshComponent_Statics::ClassParams = {
		&UMRMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMRMeshComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMRMeshComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMRMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMRMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMRMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UMRMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMRMeshComponent.OuterSingleton, Z_Construct_UClass_UMRMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMRMeshComponent.OuterSingleton;
	}
	template<> MRMESH_API UClass* StaticClass<UMRMeshComponent>()
	{
		return UMRMeshComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMRMeshComponent);
	UMRMeshComponent::~UMRMeshComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMRMeshBodyHolder, UMRMeshBodyHolder::StaticClass, TEXT("UMRMeshBodyHolder"), &Z_Registration_Info_UClass_UMRMeshBodyHolder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMRMeshBodyHolder), 3725073113U) },
		{ Z_Construct_UClass_UMRMeshComponent, UMRMeshComponent::StaticClass, TEXT("UMRMeshComponent"), &Z_Registration_Info_UClass_UMRMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMRMeshComponent), 3856835019U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_167581514(TEXT("/Script/MRMesh"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
