// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/NiagaraFunctionLibrary.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraFunctionLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2DArray_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVolumeTexture_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachLocation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFXSystemSpawnParameters();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraFunctionLibrary();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraFunctionLibrary_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraParameterCollection_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraParameterCollectionInstance_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENCPoolMethod();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	DEFINE_FUNCTION(UNiagaraFunctionLibrary::execReleaseNiagaraGPURayTracedCollisionGroup)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_CollisionGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraFunctionLibrary::ReleaseNiagaraGPURayTracedCollisionGroup(Z_Param_WorldContextObject,Z_Param_CollisionGroup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraFunctionLibrary::execAcquireNiagaraGPURayTracedCollisionGroup)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UNiagaraFunctionLibrary::AcquireNiagaraGPURayTracedCollisionGroup(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraFunctionLibrary::execSetActorNiagaraGPURayTracedCollisionGroup)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FIntProperty,Z_Param_CollisionGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraFunctionLibrary::SetActorNiagaraGPURayTracedCollisionGroup(Z_Param_WorldContextObject,Z_Param_Actor,Z_Param_CollisionGroup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraFunctionLibrary::execSetComponentNiagaraGPURayTracedCollisionGroup)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Primitive);
		P_GET_PROPERTY(FIntProperty,Z_Param_CollisionGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraFunctionLibrary::SetComponentNiagaraGPURayTracedCollisionGroup(Z_Param_WorldContextObject,Z_Param_Primitive,Z_Param_CollisionGroup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraFunctionLibrary::execGetNiagaraParameterCollection)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UNiagaraParameterCollection,Z_Param_Collection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNiagaraParameterCollectionInstance**)Z_Param__Result=UNiagaraFunctionLibrary::GetNiagaraParameterCollection(Z_Param_WorldContextObject,Z_Param_Collection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraFunctionLibrary::execSetVolumeTextureObject)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FStrProperty,Z_Param_OverrideName);
		P_GET_OBJECT(UVolumeTexture,Z_Param_Texture);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraFunctionLibrary::SetVolumeTextureObject(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Texture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraFunctionLibrary::execSetTexture2DArrayObject)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FStrProperty,Z_Param_OverrideName);
		P_GET_OBJECT(UTexture2DArray,Z_Param_Texture);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraFunctionLibrary::SetTexture2DArrayObject(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Texture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraFunctionLibrary::execSetTextureObject)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FStrProperty,Z_Param_OverrideName);
		P_GET_OBJECT(UTexture,Z_Param_Texture);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraFunctionLibrary::SetTextureObject(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Texture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraFunctionLibrary::execSetSkeletalMeshDataInterfaceFilteredSockets)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FStrProperty,Z_Param_OverrideName);
		P_GET_TARRAY_REF(FName,Z_Param_Out_FilteredSockets);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraFunctionLibrary::SetSkeletalMeshDataInterfaceFilteredSockets(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Out_FilteredSockets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraFunctionLibrary::execSetSkeletalMeshDataInterfaceFilteredBones)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FStrProperty,Z_Param_OverrideName);
		P_GET_TARRAY_REF(FName,Z_Param_Out_FilteredBones);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraFunctionLibrary::SetSkeletalMeshDataInterfaceFilteredBones(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Out_FilteredBones);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraFunctionLibrary::execSetSkeletalMeshDataInterfaceSamplingRegions)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FStrProperty,Z_Param_OverrideName);
		P_GET_TARRAY_REF(FName,Z_Param_Out_SamplingRegions);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraFunctionLibrary::SetSkeletalMeshDataInterfaceSamplingRegions(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Out_SamplingRegions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraFunctionLibrary::execOverrideSystemUserVariableSkeletalMeshComponent)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FStrProperty,Z_Param_OverrideName);
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkeletalMeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraFunctionLibrary::OverrideSystemUserVariableSkeletalMeshComponent(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_SkeletalMeshComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraFunctionLibrary::execOverrideSystemUserVariableStaticMesh)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FStrProperty,Z_Param_OverrideName);
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraFunctionLibrary::OverrideSystemUserVariableStaticMesh(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_StaticMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraFunctionLibrary::execOverrideSystemUserVariableStaticMeshComponent)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FStrProperty,Z_Param_OverrideName);
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraFunctionLibrary::OverrideSystemUserVariableStaticMeshComponent(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_StaticMeshComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraFunctionLibrary::execSpawnSystemAttached)
	{
		P_GET_OBJECT(UNiagaraSystem,Z_Param_SystemTemplate);
		P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttachPointName);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_PROPERTY(FByteProperty,Z_Param_LocationType);
		P_GET_UBOOL(Z_Param_bAutoDestroy);
		P_GET_UBOOL(Z_Param_bAutoActivate);
		P_GET_ENUM(ENCPoolMethod,Z_Param_PoolingMethod);
		P_GET_UBOOL(Z_Param_bPreCullCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNiagaraComponent**)Z_Param__Result=UNiagaraFunctionLibrary::SpawnSystemAttached(Z_Param_SystemTemplate,Z_Param_AttachToComponent,Z_Param_AttachPointName,Z_Param_Location,Z_Param_Rotation,EAttachLocation::Type(Z_Param_LocationType),Z_Param_bAutoDestroy,Z_Param_bAutoActivate,ENCPoolMethod(Z_Param_PoolingMethod),Z_Param_bPreCullCheck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraFunctionLibrary::execSpawnSystemAtLocation)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UNiagaraSystem,Z_Param_SystemTemplate);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_STRUCT(FVector,Z_Param_Scale);
		P_GET_UBOOL(Z_Param_bAutoDestroy);
		P_GET_UBOOL(Z_Param_bAutoActivate);
		P_GET_ENUM(ENCPoolMethod,Z_Param_PoolingMethod);
		P_GET_UBOOL(Z_Param_bPreCullCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNiagaraComponent**)Z_Param__Result=UNiagaraFunctionLibrary::SpawnSystemAtLocation(Z_Param_WorldContextObject,Z_Param_SystemTemplate,Z_Param_Location,Z_Param_Rotation,Z_Param_Scale,Z_Param_bAutoDestroy,Z_Param_bAutoActivate,ENCPoolMethod(Z_Param_PoolingMethod),Z_Param_bPreCullCheck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraFunctionLibrary::execSpawnSystemAttachedWithParams)
	{
		P_GET_STRUCT_REF(FFXSystemSpawnParameters,Z_Param_Out_SpawnParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNiagaraComponent**)Z_Param__Result=UNiagaraFunctionLibrary::SpawnSystemAttachedWithParams(Z_Param_Out_SpawnParams);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraFunctionLibrary::execSpawnSystemAtLocationWithParams)
	{
		P_GET_STRUCT_REF(FFXSystemSpawnParameters,Z_Param_Out_SpawnParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNiagaraComponent**)Z_Param__Result=UNiagaraFunctionLibrary::SpawnSystemAtLocationWithParams(Z_Param_Out_SpawnParams);
		P_NATIVE_END;
	}
	void UNiagaraFunctionLibrary::StaticRegisterNativesUNiagaraFunctionLibrary()
	{
		UClass* Class = UNiagaraFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AcquireNiagaraGPURayTracedCollisionGroup", &UNiagaraFunctionLibrary::execAcquireNiagaraGPURayTracedCollisionGroup },
			{ "GetNiagaraParameterCollection", &UNiagaraFunctionLibrary::execGetNiagaraParameterCollection },
			{ "OverrideSystemUserVariableSkeletalMeshComponent", &UNiagaraFunctionLibrary::execOverrideSystemUserVariableSkeletalMeshComponent },
			{ "OverrideSystemUserVariableStaticMesh", &UNiagaraFunctionLibrary::execOverrideSystemUserVariableStaticMesh },
			{ "OverrideSystemUserVariableStaticMeshComponent", &UNiagaraFunctionLibrary::execOverrideSystemUserVariableStaticMeshComponent },
			{ "ReleaseNiagaraGPURayTracedCollisionGroup", &UNiagaraFunctionLibrary::execReleaseNiagaraGPURayTracedCollisionGroup },
			{ "SetActorNiagaraGPURayTracedCollisionGroup", &UNiagaraFunctionLibrary::execSetActorNiagaraGPURayTracedCollisionGroup },
			{ "SetComponentNiagaraGPURayTracedCollisionGroup", &UNiagaraFunctionLibrary::execSetComponentNiagaraGPURayTracedCollisionGroup },
			{ "SetSkeletalMeshDataInterfaceFilteredBones", &UNiagaraFunctionLibrary::execSetSkeletalMeshDataInterfaceFilteredBones },
			{ "SetSkeletalMeshDataInterfaceFilteredSockets", &UNiagaraFunctionLibrary::execSetSkeletalMeshDataInterfaceFilteredSockets },
			{ "SetSkeletalMeshDataInterfaceSamplingRegions", &UNiagaraFunctionLibrary::execSetSkeletalMeshDataInterfaceSamplingRegions },
			{ "SetTexture2DArrayObject", &UNiagaraFunctionLibrary::execSetTexture2DArrayObject },
			{ "SetTextureObject", &UNiagaraFunctionLibrary::execSetTextureObject },
			{ "SetVolumeTextureObject", &UNiagaraFunctionLibrary::execSetVolumeTextureObject },
			{ "SpawnSystemAtLocation", &UNiagaraFunctionLibrary::execSpawnSystemAtLocation },
			{ "SpawnSystemAtLocationWithParams", &UNiagaraFunctionLibrary::execSpawnSystemAtLocationWithParams },
			{ "SpawnSystemAttached", &UNiagaraFunctionLibrary::execSpawnSystemAttached },
			{ "SpawnSystemAttachedWithParams", &UNiagaraFunctionLibrary::execSpawnSystemAttachedWithParams },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNiagaraFunctionLibrary_AcquireNiagaraGPURayTracedCollisionGroup_Statics
	{
		struct NiagaraFunctionLibrary_eventAcquireNiagaraGPURayTracedCollisionGroup_Parms
		{
			UObject* WorldContextObject;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_AcquireNiagaraGPURayTracedCollisionGroup_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventAcquireNiagaraGPURayTracedCollisionGroup_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_AcquireNiagaraGPURayTracedCollisionGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventAcquireNiagaraGPURayTracedCollisionGroup_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraFunctionLibrary_AcquireNiagaraGPURayTracedCollisionGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_AcquireNiagaraGPURayTracedCollisionGroup_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_AcquireNiagaraGPURayTracedCollisionGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_AcquireNiagaraGPURayTracedCollisionGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Returns a free collision group for use in HWRT collision group filtering. Returns -1 on failure. */" },
		{ "Keywords", "niagara collision ray tracing" },
		{ "ModuleRelativePath", "Public/NiagaraFunctionLibrary.h" },
		{ "ToolTip", "Returns a free collision group for use in HWRT collision group filtering. Returns -1 on failure." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraFunctionLibrary_AcquireNiagaraGPURayTracedCollisionGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraFunctionLibrary, nullptr, "AcquireNiagaraGPURayTracedCollisionGroup", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraFunctionLibrary_AcquireNiagaraGPURayTracedCollisionGroup_Statics::NiagaraFunctionLibrary_eventAcquireNiagaraGPURayTracedCollisionGroup_Parms), Z_Construct_UFunction_UNiagaraFunctionLibrary_AcquireNiagaraGPURayTracedCollisionGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_AcquireNiagaraGPURayTracedCollisionGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_AcquireNiagaraGPURayTracedCollisionGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_AcquireNiagaraGPURayTracedCollisionGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraFunctionLibrary_AcquireNiagaraGPURayTracedCollisionGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraFunctionLibrary_AcquireNiagaraGPURayTracedCollisionGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Statics
	{
		struct NiagaraFunctionLibrary_eventGetNiagaraParameterCollection_Parms
		{
			UObject* WorldContextObject;
			UNiagaraParameterCollection* Collection;
			UNiagaraParameterCollectionInstance* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Collection;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventGetNiagaraParameterCollection_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventGetNiagaraParameterCollection_Parms, Collection), Z_Construct_UClass_UNiagaraParameterCollection_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventGetNiagaraParameterCollection_Parms, ReturnValue), Z_Construct_UClass_UNiagaraParameterCollectionInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "//This is gonna be totally reworked\n// \x09UFUNCTION(BlueprintCallable, Category = Niagara, meta = (Keywords = \"niagara System\", UnsafeDuringActorConstruction = \"true\"))\n// \x09static void SetUpdateScriptConstant(UNiagaraComponent* Component, FName EmitterName, FName ConstantName, FVector Value);\n" },
		{ "Keywords", "niagara parameter collection" },
		{ "ModuleRelativePath", "Public/NiagaraFunctionLibrary.h" },
		{ "ToolTip", "This is gonna be totally reworked\n       UFUNCTION(BlueprintCallable, Category = Niagara, meta = (Keywords = \"niagara System\", UnsafeDuringActorConstruction = \"true\"))\n       static void SetUpdateScriptConstant(UNiagaraComponent* Component, FName EmitterName, FName ConstantName, FVector Value);" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraFunctionLibrary, nullptr, "GetNiagaraParameterCollection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Statics::NiagaraFunctionLibrary_eventGetNiagaraParameterCollection_Parms), Z_Construct_UFunction_UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraFunctionLibrary_GetNiagaraParameterCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Statics
	{
		struct NiagaraFunctionLibrary_eventOverrideSystemUserVariableSkeletalMeshComponent_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FString OverrideName;
			USkeletalMeshComponent* SkeletalMeshComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OverrideName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventOverrideSystemUserVariableSkeletalMeshComponent_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Statics::NewProp_NiagaraSystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Statics::NewProp_OverrideName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventOverrideSystemUserVariableSkeletalMeshComponent_Parms, OverrideName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Statics::NewProp_OverrideName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Statics::NewProp_OverrideName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Statics::NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventOverrideSystemUserVariableSkeletalMeshComponent_Parms, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Statics::NewProp_SkeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Statics::NewProp_SkeletalMeshComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Statics::NewProp_SkeletalMeshComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a Niagara StaticMesh parameter by name, overriding locally if necessary.*/" },
		{ "DisplayName", "Set Niagara Skeletal Mesh Component" },
		{ "ModuleRelativePath", "Public/NiagaraFunctionLibrary.h" },
		{ "ToolTip", "Sets a Niagara StaticMesh parameter by name, overriding locally if necessary." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraFunctionLibrary, nullptr, "OverrideSystemUserVariableSkeletalMeshComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Statics::NiagaraFunctionLibrary_eventOverrideSystemUserVariableSkeletalMeshComponent_Parms), Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Statics
	{
		struct NiagaraFunctionLibrary_eventOverrideSystemUserVariableStaticMesh_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FString OverrideName;
			UStaticMesh* StaticMesh;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OverrideName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventOverrideSystemUserVariableStaticMesh_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Statics::NewProp_NiagaraSystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Statics::NewProp_OverrideName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventOverrideSystemUserVariableStaticMesh_Parms, OverrideName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Statics::NewProp_OverrideName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Statics::NewProp_OverrideName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventOverrideSystemUserVariableStaticMesh_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Statics::NewProp_StaticMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Set Niagara Static Mesh Directly" },
		{ "ModuleRelativePath", "Public/NiagaraFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraFunctionLibrary, nullptr, "OverrideSystemUserVariableStaticMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Statics::NiagaraFunctionLibrary_eventOverrideSystemUserVariableStaticMesh_Parms), Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Statics
	{
		struct NiagaraFunctionLibrary_eventOverrideSystemUserVariableStaticMeshComponent_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FString OverrideName;
			UStaticMeshComponent* StaticMeshComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OverrideName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventOverrideSystemUserVariableStaticMeshComponent_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Statics::NewProp_NiagaraSystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Statics::NewProp_OverrideName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventOverrideSystemUserVariableStaticMeshComponent_Parms, OverrideName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Statics::NewProp_OverrideName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Statics::NewProp_OverrideName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventOverrideSystemUserVariableStaticMeshComponent_Parms, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Statics::NewProp_StaticMeshComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Statics::NewProp_StaticMeshComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a Niagara StaticMesh parameter by name, overriding locally if necessary.*/" },
		{ "DisplayName", "Set Niagara Static Mesh Component" },
		{ "ModuleRelativePath", "Public/NiagaraFunctionLibrary.h" },
		{ "ToolTip", "Sets a Niagara StaticMesh parameter by name, overriding locally if necessary." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraFunctionLibrary, nullptr, "OverrideSystemUserVariableStaticMeshComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Statics::NiagaraFunctionLibrary_eventOverrideSystemUserVariableStaticMeshComponent_Parms), Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraFunctionLibrary_ReleaseNiagaraGPURayTracedCollisionGroup_Statics
	{
		struct NiagaraFunctionLibrary_eventReleaseNiagaraGPURayTracedCollisionGroup_Parms
		{
			UObject* WorldContextObject;
			int32 CollisionGroup;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CollisionGroup;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_ReleaseNiagaraGPURayTracedCollisionGroup_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventReleaseNiagaraGPURayTracedCollisionGroup_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_ReleaseNiagaraGPURayTracedCollisionGroup_Statics::NewProp_CollisionGroup = { "CollisionGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventReleaseNiagaraGPURayTracedCollisionGroup_Parms, CollisionGroup), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraFunctionLibrary_ReleaseNiagaraGPURayTracedCollisionGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_ReleaseNiagaraGPURayTracedCollisionGroup_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_ReleaseNiagaraGPURayTracedCollisionGroup_Statics::NewProp_CollisionGroup,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_ReleaseNiagaraGPURayTracedCollisionGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Releases a collision group back to the system for use by ohers. */" },
		{ "Keywords", "niagara collision ray tracing" },
		{ "ModuleRelativePath", "Public/NiagaraFunctionLibrary.h" },
		{ "ToolTip", "Releases a collision group back to the system for use by ohers." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraFunctionLibrary_ReleaseNiagaraGPURayTracedCollisionGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraFunctionLibrary, nullptr, "ReleaseNiagaraGPURayTracedCollisionGroup", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraFunctionLibrary_ReleaseNiagaraGPURayTracedCollisionGroup_Statics::NiagaraFunctionLibrary_eventReleaseNiagaraGPURayTracedCollisionGroup_Parms), Z_Construct_UFunction_UNiagaraFunctionLibrary_ReleaseNiagaraGPURayTracedCollisionGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_ReleaseNiagaraGPURayTracedCollisionGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_ReleaseNiagaraGPURayTracedCollisionGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_ReleaseNiagaraGPURayTracedCollisionGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraFunctionLibrary_ReleaseNiagaraGPURayTracedCollisionGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraFunctionLibrary_ReleaseNiagaraGPURayTracedCollisionGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraFunctionLibrary_SetActorNiagaraGPURayTracedCollisionGroup_Statics
	{
		struct NiagaraFunctionLibrary_eventSetActorNiagaraGPURayTracedCollisionGroup_Parms
		{
			UObject* WorldContextObject;
			AActor* Actor;
			int32 CollisionGroup;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CollisionGroup;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SetActorNiagaraGPURayTracedCollisionGroup_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSetActorNiagaraGPURayTracedCollisionGroup_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SetActorNiagaraGPURayTracedCollisionGroup_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSetActorNiagaraGPURayTracedCollisionGroup_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SetActorNiagaraGPURayTracedCollisionGroup_Statics::NewProp_CollisionGroup = { "CollisionGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSetActorNiagaraGPURayTracedCollisionGroup_Parms, CollisionGroup), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraFunctionLibrary_SetActorNiagaraGPURayTracedCollisionGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SetActorNiagaraGPURayTracedCollisionGroup_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SetActorNiagaraGPURayTracedCollisionGroup_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SetActorNiagaraGPURayTracedCollisionGroup_Statics::NewProp_CollisionGroup,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_SetActorNiagaraGPURayTracedCollisionGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets the Niagara GPU ray traced collision group for all primitive components on the given actor. */" },
		{ "Keywords", "niagara collision ray tracing" },
		{ "ModuleRelativePath", "Public/NiagaraFunctionLibrary.h" },
		{ "ToolTip", "Sets the Niagara GPU ray traced collision group for all primitive components on the given actor." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SetActorNiagaraGPURayTracedCollisionGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraFunctionLibrary, nullptr, "SetActorNiagaraGPURayTracedCollisionGroup", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetActorNiagaraGPURayTracedCollisionGroup_Statics::NiagaraFunctionLibrary_eventSetActorNiagaraGPURayTracedCollisionGroup_Parms), Z_Construct_UFunction_UNiagaraFunctionLibrary_SetActorNiagaraGPURayTracedCollisionGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetActorNiagaraGPURayTracedCollisionGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetActorNiagaraGPURayTracedCollisionGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetActorNiagaraGPURayTracedCollisionGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraFunctionLibrary_SetActorNiagaraGPURayTracedCollisionGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraFunctionLibrary_SetActorNiagaraGPURayTracedCollisionGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraFunctionLibrary_SetComponentNiagaraGPURayTracedCollisionGroup_Statics
	{
		struct NiagaraFunctionLibrary_eventSetComponentNiagaraGPURayTracedCollisionGroup_Parms
		{
			UObject* WorldContextObject;
			UPrimitiveComponent* Primitive;
			int32 CollisionGroup;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Primitive_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Primitive;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CollisionGroup;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SetComponentNiagaraGPURayTracedCollisionGroup_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSetComponentNiagaraGPURayTracedCollisionGroup_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_SetComponentNiagaraGPURayTracedCollisionGroup_Statics::NewProp_Primitive_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SetComponentNiagaraGPURayTracedCollisionGroup_Statics::NewProp_Primitive = { "Primitive", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSetComponentNiagaraGPURayTracedCollisionGroup_Parms, Primitive), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetComponentNiagaraGPURayTracedCollisionGroup_Statics::NewProp_Primitive_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetComponentNiagaraGPURayTracedCollisionGroup_Statics::NewProp_Primitive_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SetComponentNiagaraGPURayTracedCollisionGroup_Statics::NewProp_CollisionGroup = { "CollisionGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSetComponentNiagaraGPURayTracedCollisionGroup_Parms, CollisionGroup), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraFunctionLibrary_SetComponentNiagaraGPURayTracedCollisionGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SetComponentNiagaraGPURayTracedCollisionGroup_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SetComponentNiagaraGPURayTracedCollisionGroup_Statics::NewProp_Primitive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SetComponentNiagaraGPURayTracedCollisionGroup_Statics::NewProp_CollisionGroup,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_SetComponentNiagaraGPURayTracedCollisionGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets the Niagara GPU ray traced collision group for the give primitive component. */" },
		{ "Keywords", "niagara collision ray tracing" },
		{ "ModuleRelativePath", "Public/NiagaraFunctionLibrary.h" },
		{ "ToolTip", "Sets the Niagara GPU ray traced collision group for the give primitive component." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SetComponentNiagaraGPURayTracedCollisionGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraFunctionLibrary, nullptr, "SetComponentNiagaraGPURayTracedCollisionGroup", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetComponentNiagaraGPURayTracedCollisionGroup_Statics::NiagaraFunctionLibrary_eventSetComponentNiagaraGPURayTracedCollisionGroup_Parms), Z_Construct_UFunction_UNiagaraFunctionLibrary_SetComponentNiagaraGPURayTracedCollisionGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetComponentNiagaraGPURayTracedCollisionGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetComponentNiagaraGPURayTracedCollisionGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetComponentNiagaraGPURayTracedCollisionGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraFunctionLibrary_SetComponentNiagaraGPURayTracedCollisionGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraFunctionLibrary_SetComponentNiagaraGPURayTracedCollisionGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredBones_Statics
	{
		struct NiagaraFunctionLibrary_eventSetSkeletalMeshDataInterfaceFilteredBones_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FString OverrideName;
			TArray<FName> FilteredBones;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OverrideName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_FilteredBones_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilteredBones_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FilteredBones;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredBones_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredBones_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSetSkeletalMeshDataInterfaceFilteredBones_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredBones_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredBones_Statics::NewProp_NiagaraSystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredBones_Statics::NewProp_OverrideName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredBones_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSetSkeletalMeshDataInterfaceFilteredBones_Parms, OverrideName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredBones_Statics::NewProp_OverrideName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredBones_Statics::NewProp_OverrideName_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredBones_Statics::NewProp_FilteredBones_Inner = { "FilteredBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredBones_Statics::NewProp_FilteredBones_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredBones_Statics::NewProp_FilteredBones = { "FilteredBones", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSetSkeletalMeshDataInterfaceFilteredBones_Parms, FilteredBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredBones_Statics::NewProp_FilteredBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredBones_Statics::NewProp_FilteredBones_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredBones_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredBones_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredBones_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredBones_Statics::NewProp_FilteredBones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredBones_Statics::NewProp_FilteredBones,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredBones_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets the Filtered Bones to use on the skeletal mesh data interface, this is destructive as it modifies the data interface. */" },
		{ "ModuleRelativePath", "Public/NiagaraFunctionLibrary.h" },
		{ "ToolTip", "Sets the Filtered Bones to use on the skeletal mesh data interface, this is destructive as it modifies the data interface." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredBones_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraFunctionLibrary, nullptr, "SetSkeletalMeshDataInterfaceFilteredBones", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredBones_Statics::NiagaraFunctionLibrary_eventSetSkeletalMeshDataInterfaceFilteredBones_Parms), Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredBones_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredBones_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredBones_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredBones_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredBones()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredBones_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredSockets_Statics
	{
		struct NiagaraFunctionLibrary_eventSetSkeletalMeshDataInterfaceFilteredSockets_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FString OverrideName;
			TArray<FName> FilteredSockets;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OverrideName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_FilteredSockets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilteredSockets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FilteredSockets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredSockets_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredSockets_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSetSkeletalMeshDataInterfaceFilteredSockets_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredSockets_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredSockets_Statics::NewProp_NiagaraSystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredSockets_Statics::NewProp_OverrideName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredSockets_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSetSkeletalMeshDataInterfaceFilteredSockets_Parms, OverrideName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredSockets_Statics::NewProp_OverrideName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredSockets_Statics::NewProp_OverrideName_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredSockets_Statics::NewProp_FilteredSockets_Inner = { "FilteredSockets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredSockets_Statics::NewProp_FilteredSockets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredSockets_Statics::NewProp_FilteredSockets = { "FilteredSockets", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSetSkeletalMeshDataInterfaceFilteredSockets_Parms, FilteredSockets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredSockets_Statics::NewProp_FilteredSockets_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredSockets_Statics::NewProp_FilteredSockets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredSockets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredSockets_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredSockets_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredSockets_Statics::NewProp_FilteredSockets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredSockets_Statics::NewProp_FilteredSockets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredSockets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets the Filtered Sockets to use on the skeletal mesh data interface, this is destructive as it modifies the data interface. */" },
		{ "ModuleRelativePath", "Public/NiagaraFunctionLibrary.h" },
		{ "ToolTip", "Sets the Filtered Sockets to use on the skeletal mesh data interface, this is destructive as it modifies the data interface." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredSockets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraFunctionLibrary, nullptr, "SetSkeletalMeshDataInterfaceFilteredSockets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredSockets_Statics::NiagaraFunctionLibrary_eventSetSkeletalMeshDataInterfaceFilteredSockets_Parms), Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredSockets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredSockets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredSockets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredSockets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredSockets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredSockets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceSamplingRegions_Statics
	{
		struct NiagaraFunctionLibrary_eventSetSkeletalMeshDataInterfaceSamplingRegions_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FString OverrideName;
			TArray<FName> SamplingRegions;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OverrideName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SamplingRegions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplingRegions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SamplingRegions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceSamplingRegions_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceSamplingRegions_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSetSkeletalMeshDataInterfaceSamplingRegions_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceSamplingRegions_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceSamplingRegions_Statics::NewProp_NiagaraSystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceSamplingRegions_Statics::NewProp_OverrideName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceSamplingRegions_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSetSkeletalMeshDataInterfaceSamplingRegions_Parms, OverrideName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceSamplingRegions_Statics::NewProp_OverrideName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceSamplingRegions_Statics::NewProp_OverrideName_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceSamplingRegions_Statics::NewProp_SamplingRegions_Inner = { "SamplingRegions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceSamplingRegions_Statics::NewProp_SamplingRegions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceSamplingRegions_Statics::NewProp_SamplingRegions = { "SamplingRegions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSetSkeletalMeshDataInterfaceSamplingRegions_Parms, SamplingRegions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceSamplingRegions_Statics::NewProp_SamplingRegions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceSamplingRegions_Statics::NewProp_SamplingRegions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceSamplingRegions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceSamplingRegions_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceSamplingRegions_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceSamplingRegions_Statics::NewProp_SamplingRegions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceSamplingRegions_Statics::NewProp_SamplingRegions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceSamplingRegions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets the SamplingRegion to use on the skeletal mesh data interface, this is destructive as it modifies the data interface. */" },
		{ "ModuleRelativePath", "Public/NiagaraFunctionLibrary.h" },
		{ "ToolTip", "Sets the SamplingRegion to use on the skeletal mesh data interface, this is destructive as it modifies the data interface." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceSamplingRegions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraFunctionLibrary, nullptr, "SetSkeletalMeshDataInterfaceSamplingRegions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceSamplingRegions_Statics::NiagaraFunctionLibrary_eventSetSkeletalMeshDataInterfaceSamplingRegions_Parms), Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceSamplingRegions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceSamplingRegions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceSamplingRegions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceSamplingRegions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceSamplingRegions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceSamplingRegions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTexture2DArrayObject_Statics
	{
		struct NiagaraFunctionLibrary_eventSetTexture2DArrayObject_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FString OverrideName;
			UTexture2DArray* Texture;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OverrideName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTexture2DArrayObject_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTexture2DArrayObject_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSetTexture2DArrayObject_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTexture2DArrayObject_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTexture2DArrayObject_Statics::NewProp_NiagaraSystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTexture2DArrayObject_Statics::NewProp_OverrideName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTexture2DArrayObject_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSetTexture2DArrayObject_Parms, OverrideName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTexture2DArrayObject_Statics::NewProp_OverrideName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTexture2DArrayObject_Statics::NewProp_OverrideName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTexture2DArrayObject_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSetTexture2DArrayObject_Parms, Texture), Z_Construct_UClass_UTexture2DArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTexture2DArrayObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTexture2DArrayObject_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTexture2DArrayObject_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTexture2DArrayObject_Statics::NewProp_Texture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTexture2DArrayObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Overrides the 2D Array Texture for a Niagara 2D Array Texture Data Interface User Parameter.*/" },
		{ "ModuleRelativePath", "Public/NiagaraFunctionLibrary.h" },
		{ "ToolTip", "Overrides the 2D Array Texture for a Niagara 2D Array Texture Data Interface User Parameter." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTexture2DArrayObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraFunctionLibrary, nullptr, "SetTexture2DArrayObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTexture2DArrayObject_Statics::NiagaraFunctionLibrary_eventSetTexture2DArrayObject_Parms), Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTexture2DArrayObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTexture2DArrayObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTexture2DArrayObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTexture2DArrayObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTexture2DArrayObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTexture2DArrayObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTextureObject_Statics
	{
		struct NiagaraFunctionLibrary_eventSetTextureObject_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FString OverrideName;
			UTexture* Texture;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OverrideName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTextureObject_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTextureObject_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSetTextureObject_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTextureObject_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTextureObject_Statics::NewProp_NiagaraSystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTextureObject_Statics::NewProp_OverrideName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTextureObject_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSetTextureObject_Parms, OverrideName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTextureObject_Statics::NewProp_OverrideName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTextureObject_Statics::NewProp_OverrideName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTextureObject_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSetTextureObject_Parms, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTextureObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTextureObject_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTextureObject_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTextureObject_Statics::NewProp_Texture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTextureObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Overrides the Texture Object for a Niagara Texture Data Interface User Parameter.*/" },
		{ "ModuleRelativePath", "Public/NiagaraFunctionLibrary.h" },
		{ "ToolTip", "Overrides the Texture Object for a Niagara Texture Data Interface User Parameter." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTextureObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraFunctionLibrary, nullptr, "SetTextureObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTextureObject_Statics::NiagaraFunctionLibrary_eventSetTextureObject_Parms), Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTextureObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTextureObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTextureObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTextureObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTextureObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTextureObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraFunctionLibrary_SetVolumeTextureObject_Statics
	{
		struct NiagaraFunctionLibrary_eventSetVolumeTextureObject_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FString OverrideName;
			UVolumeTexture* Texture;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OverrideName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_SetVolumeTextureObject_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SetVolumeTextureObject_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSetVolumeTextureObject_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetVolumeTextureObject_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetVolumeTextureObject_Statics::NewProp_NiagaraSystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_SetVolumeTextureObject_Statics::NewProp_OverrideName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SetVolumeTextureObject_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSetVolumeTextureObject_Parms, OverrideName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetVolumeTextureObject_Statics::NewProp_OverrideName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetVolumeTextureObject_Statics::NewProp_OverrideName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SetVolumeTextureObject_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSetVolumeTextureObject_Parms, Texture), Z_Construct_UClass_UVolumeTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraFunctionLibrary_SetVolumeTextureObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SetVolumeTextureObject_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SetVolumeTextureObject_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SetVolumeTextureObject_Statics::NewProp_Texture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_SetVolumeTextureObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Overrides the Volume Texture for a Niagara Volume Texture Data Interface User Parameter.*/" },
		{ "ModuleRelativePath", "Public/NiagaraFunctionLibrary.h" },
		{ "ToolTip", "Overrides the Volume Texture for a Niagara Volume Texture Data Interface User Parameter." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SetVolumeTextureObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraFunctionLibrary, nullptr, "SetVolumeTextureObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetVolumeTextureObject_Statics::NiagaraFunctionLibrary_eventSetVolumeTextureObject_Parms), Z_Construct_UFunction_UNiagaraFunctionLibrary_SetVolumeTextureObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetVolumeTextureObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetVolumeTextureObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SetVolumeTextureObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraFunctionLibrary_SetVolumeTextureObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraFunctionLibrary_SetVolumeTextureObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics
	{
		struct NiagaraFunctionLibrary_eventSpawnSystemAtLocation_Parms
		{
			const UObject* WorldContextObject;
			UNiagaraSystem* SystemTemplate;
			FVector Location;
			FRotator Rotation;
			FVector Scale;
			bool bAutoDestroy;
			bool bAutoActivate;
			ENCPoolMethod PoolingMethod;
			bool bPreCullCheck;
			UNiagaraComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SystemTemplate;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
		static void NewProp_bAutoActivate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoActivate;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PoolingMethod_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PoolingMethod;
		static void NewProp_bPreCullCheck_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreCullCheck;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSpawnSystemAtLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_SystemTemplate = { "SystemTemplate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSpawnSystemAtLocation_Parms, SystemTemplate), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSpawnSystemAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSpawnSystemAtLocation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSpawnSystemAtLocation_Parms, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((NiagaraFunctionLibrary_eventSpawnSystemAtLocation_Parms*)Obj)->bAutoDestroy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraFunctionLibrary_eventSpawnSystemAtLocation_Parms), &Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_bAutoActivate_SetBit(void* Obj)
	{
		((NiagaraFunctionLibrary_eventSpawnSystemAtLocation_Parms*)Obj)->bAutoActivate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_bAutoActivate = { "bAutoActivate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraFunctionLibrary_eventSpawnSystemAtLocation_Parms), &Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_bAutoActivate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_PoolingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_PoolingMethod = { "PoolingMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSpawnSystemAtLocation_Parms, PoolingMethod), Z_Construct_UEnum_Niagara_ENCPoolMethod, METADATA_PARAMS(nullptr, 0) }; // 852487868
	void Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_bPreCullCheck_SetBit(void* Obj)
	{
		((NiagaraFunctionLibrary_eventSpawnSystemAtLocation_Parms*)Obj)->bPreCullCheck = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_bPreCullCheck = { "bPreCullCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraFunctionLibrary_eventSpawnSystemAtLocation_Parms), &Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_bPreCullCheck_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSpawnSystemAtLocation_Parms, ReturnValue), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_SystemTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_bAutoDestroy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_bAutoActivate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_PoolingMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_PoolingMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_bPreCullCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/**\n\x09* Spawns a Niagara System at the specified world location/rotation\n\x09* @return\x09\x09\x09The spawned UNiagaraComponent\n\x09*/" },
		{ "CPP_Default_bAutoActivate", "true" },
		{ "CPP_Default_bAutoDestroy", "true" },
		{ "CPP_Default_bPreCullCheck", "true" },
		{ "CPP_Default_PoolingMethod", "None" },
		{ "CPP_Default_Rotation", "" },
		{ "CPP_Default_Scale", "1.000000,1.000000,1.000000" },
		{ "Keywords", "niagara System" },
		{ "ModuleRelativePath", "Public/NiagaraFunctionLibrary.h" },
		{ "ToolTip", "Spawns a Niagara System at the specified world location/rotation\n@return                       The spawned UNiagaraComponent" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraFunctionLibrary, nullptr, "SpawnSystemAtLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::NiagaraFunctionLibrary_eventSpawnSystemAtLocation_Parms), Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocationWithParams_Statics
	{
		struct NiagaraFunctionLibrary_eventSpawnSystemAtLocationWithParams_Parms
		{
			FFXSystemSpawnParameters SpawnParams;
			UNiagaraComponent* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnParams;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocationWithParams_Statics::NewProp_SpawnParams = { "SpawnParams", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSpawnSystemAtLocationWithParams_Parms, SpawnParams), Z_Construct_UScriptStruct_FFXSystemSpawnParameters, METADATA_PARAMS(nullptr, 0) }; // 902604475
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocationWithParams_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocationWithParams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSpawnSystemAtLocationWithParams_Parms, ReturnValue), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocationWithParams_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocationWithParams_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocationWithParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocationWithParams_Statics::NewProp_SpawnParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocationWithParams_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocationWithParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Keywords", "niagara System" },
		{ "ModuleRelativePath", "Public/NiagaraFunctionLibrary.h" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocationWithParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraFunctionLibrary, nullptr, "SpawnSystemAtLocationWithParams", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocationWithParams_Statics::NiagaraFunctionLibrary_eventSpawnSystemAtLocationWithParams_Parms), Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocationWithParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocationWithParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocationWithParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocationWithParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocationWithParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocationWithParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics
	{
		struct NiagaraFunctionLibrary_eventSpawnSystemAttached_Parms
		{
			UNiagaraSystem* SystemTemplate;
			USceneComponent* AttachToComponent;
			FName AttachPointName;
			FVector Location;
			FRotator Rotation;
			TEnumAsByte<EAttachLocation::Type> LocationType;
			bool bAutoDestroy;
			bool bAutoActivate;
			ENCPoolMethod PoolingMethod;
			bool bPreCullCheck;
			UNiagaraComponent* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SystemTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachToComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachToComponent;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttachPointName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LocationType;
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
		static void NewProp_bAutoActivate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoActivate;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PoolingMethod_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PoolingMethod;
		static void NewProp_bPreCullCheck_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreCullCheck;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_SystemTemplate = { "SystemTemplate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSpawnSystemAttached_Parms, SystemTemplate), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_AttachToComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_AttachToComponent = { "AttachToComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSpawnSystemAttached_Parms, AttachToComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_AttachToComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_AttachToComponent_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_AttachPointName = { "AttachPointName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSpawnSystemAttached_Parms, AttachPointName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSpawnSystemAttached_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSpawnSystemAttached_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_LocationType = { "LocationType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSpawnSystemAttached_Parms, LocationType), Z_Construct_UEnum_Engine_EAttachLocation, METADATA_PARAMS(nullptr, 0) }; // 1954919674
	void Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((NiagaraFunctionLibrary_eventSpawnSystemAttached_Parms*)Obj)->bAutoDestroy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraFunctionLibrary_eventSpawnSystemAttached_Parms), &Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_bAutoActivate_SetBit(void* Obj)
	{
		((NiagaraFunctionLibrary_eventSpawnSystemAttached_Parms*)Obj)->bAutoActivate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_bAutoActivate = { "bAutoActivate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraFunctionLibrary_eventSpawnSystemAttached_Parms), &Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_bAutoActivate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_PoolingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_PoolingMethod = { "PoolingMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSpawnSystemAttached_Parms, PoolingMethod), Z_Construct_UEnum_Niagara_ENCPoolMethod, METADATA_PARAMS(nullptr, 0) }; // 852487868
	void Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_bPreCullCheck_SetBit(void* Obj)
	{
		((NiagaraFunctionLibrary_eventSpawnSystemAttached_Parms*)Obj)->bPreCullCheck = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_bPreCullCheck = { "bPreCullCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraFunctionLibrary_eventSpawnSystemAttached_Parms), &Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_bPreCullCheck_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSpawnSystemAttached_Parms, ReturnValue), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_SystemTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_AttachToComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_AttachPointName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_LocationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_bAutoDestroy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_bAutoActivate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_PoolingMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_PoolingMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_bPreCullCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "CPP_Default_bAutoActivate", "true" },
		{ "CPP_Default_bPreCullCheck", "true" },
		{ "CPP_Default_PoolingMethod", "None" },
		{ "Keywords", "niagara System" },
		{ "ModuleRelativePath", "Public/NiagaraFunctionLibrary.h" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraFunctionLibrary, nullptr, "SpawnSystemAttached", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::NiagaraFunctionLibrary_eventSpawnSystemAttached_Parms), Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttachedWithParams_Statics
	{
		struct NiagaraFunctionLibrary_eventSpawnSystemAttachedWithParams_Parms
		{
			FFXSystemSpawnParameters SpawnParams;
			UNiagaraComponent* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnParams;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttachedWithParams_Statics::NewProp_SpawnParams = { "SpawnParams", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSpawnSystemAttachedWithParams_Parms, SpawnParams), Z_Construct_UScriptStruct_FFXSystemSpawnParameters, METADATA_PARAMS(nullptr, 0) }; // 902604475
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttachedWithParams_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttachedWithParams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraFunctionLibrary_eventSpawnSystemAttachedWithParams_Parms, ReturnValue), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttachedWithParams_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttachedWithParams_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttachedWithParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttachedWithParams_Statics::NewProp_SpawnParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttachedWithParams_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttachedWithParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Keywords", "niagara System" },
		{ "ModuleRelativePath", "Public/NiagaraFunctionLibrary.h" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttachedWithParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraFunctionLibrary, nullptr, "SpawnSystemAttachedWithParams", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttachedWithParams_Statics::NiagaraFunctionLibrary_eventSpawnSystemAttachedWithParams_Parms), Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttachedWithParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttachedWithParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttachedWithParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttachedWithParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttachedWithParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttachedWithParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraFunctionLibrary);
	UClass* Z_Construct_UClass_UNiagaraFunctionLibrary_NoRegister()
	{
		return UNiagaraFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNiagaraFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNiagaraFunctionLibrary_AcquireNiagaraGPURayTracedCollisionGroup, "AcquireNiagaraGPURayTracedCollisionGroup" }, // 3703086770
		{ &Z_Construct_UFunction_UNiagaraFunctionLibrary_GetNiagaraParameterCollection, "GetNiagaraParameterCollection" }, // 330691007
		{ &Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent, "OverrideSystemUserVariableSkeletalMeshComponent" }, // 3548557997
		{ &Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh, "OverrideSystemUserVariableStaticMesh" }, // 2292988606
		{ &Z_Construct_UFunction_UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent, "OverrideSystemUserVariableStaticMeshComponent" }, // 1424021906
		{ &Z_Construct_UFunction_UNiagaraFunctionLibrary_ReleaseNiagaraGPURayTracedCollisionGroup, "ReleaseNiagaraGPURayTracedCollisionGroup" }, // 3060949852
		{ &Z_Construct_UFunction_UNiagaraFunctionLibrary_SetActorNiagaraGPURayTracedCollisionGroup, "SetActorNiagaraGPURayTracedCollisionGroup" }, // 69058111
		{ &Z_Construct_UFunction_UNiagaraFunctionLibrary_SetComponentNiagaraGPURayTracedCollisionGroup, "SetComponentNiagaraGPURayTracedCollisionGroup" }, // 1226522713
		{ &Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredBones, "SetSkeletalMeshDataInterfaceFilteredBones" }, // 3945764157
		{ &Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredSockets, "SetSkeletalMeshDataInterfaceFilteredSockets" }, // 649068262
		{ &Z_Construct_UFunction_UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceSamplingRegions, "SetSkeletalMeshDataInterfaceSamplingRegions" }, // 3405941637
		{ &Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTexture2DArrayObject, "SetTexture2DArrayObject" }, // 1041603420
		{ &Z_Construct_UFunction_UNiagaraFunctionLibrary_SetTextureObject, "SetTextureObject" }, // 1911332858
		{ &Z_Construct_UFunction_UNiagaraFunctionLibrary_SetVolumeTextureObject, "SetVolumeTextureObject" }, // 2345737663
		{ &Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocation, "SpawnSystemAtLocation" }, // 3179981936
		{ &Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAtLocationWithParams, "SpawnSystemAtLocationWithParams" }, // 1729707353
		{ &Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttached, "SpawnSystemAttached" }, // 1598400389
		{ &Z_Construct_UFunction_UNiagaraFunctionLibrary_SpawnSystemAttachedWithParams, "SpawnSystemAttachedWithParams" }, // 892681775
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* A C++ and Blueprint accessible library of utility functions for accessing Niagara simulations\n* All positions & orientations are returned in Unreal reference frame & units, assuming the Leap device is located at the origin.\n*/" },
		{ "IncludePath", "NiagaraFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/NiagaraFunctionLibrary.h" },
		{ "ToolTip", "A C++ and Blueprint accessible library of utility functions for accessing Niagara simulations\nAll positions & orientations are returned in Unreal reference frame & units, assuming the Leap device is located at the origin." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraFunctionLibrary_Statics::ClassParams = {
		&UNiagaraFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UNiagaraFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraFunctionLibrary.OuterSingleton, Z_Construct_UClass_UNiagaraFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraFunctionLibrary.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraFunctionLibrary>()
	{
		return UNiagaraFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraFunctionLibrary);
	UNiagaraFunctionLibrary::~UNiagaraFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraFunctionLibrary, UNiagaraFunctionLibrary::StaticClass, TEXT("UNiagaraFunctionLibrary"), &Z_Registration_Info_UClass_UNiagaraFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraFunctionLibrary), 35244736U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraFunctionLibrary_h_407205110(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
