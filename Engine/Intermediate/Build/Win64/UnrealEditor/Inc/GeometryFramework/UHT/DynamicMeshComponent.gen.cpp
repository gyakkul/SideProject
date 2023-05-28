// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/GeometryFramework/Public/Components/DynamicMeshComponent.h"
#include "../../Source/Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicMeshComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKAggregateGeom();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UBaseDynamicMeshComponent();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMeshComponent();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMeshComponent_NoRegister();
	GEOMETRYFRAMEWORK_API UEnum* Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentRenderUpdateMode();
	GEOMETRYFRAMEWORK_API UEnum* Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentTangentsMode();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag();
	UPackage* Z_Construct_UPackage__Script_GeometryFramework();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDynamicMeshComponentRenderUpdateMode;
	static UEnum* EDynamicMeshComponentRenderUpdateMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDynamicMeshComponentRenderUpdateMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDynamicMeshComponentRenderUpdateMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentRenderUpdateMode, (UObject*)Z_Construct_UPackage__Script_GeometryFramework(), TEXT("EDynamicMeshComponentRenderUpdateMode"));
		}
		return Z_Registration_Info_UEnum_EDynamicMeshComponentRenderUpdateMode.OuterSingleton;
	}
	template<> GEOMETRYFRAMEWORK_API UEnum* StaticEnum<EDynamicMeshComponentRenderUpdateMode>()
	{
		return EDynamicMeshComponentRenderUpdateMode_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentRenderUpdateMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentRenderUpdateMode_Statics::Enumerators[] = {
		{ "EDynamicMeshComponentRenderUpdateMode::NoUpdate", (int64)EDynamicMeshComponentRenderUpdateMode::NoUpdate },
		{ "EDynamicMeshComponentRenderUpdateMode::FullUpdate", (int64)EDynamicMeshComponentRenderUpdateMode::FullUpdate },
		{ "EDynamicMeshComponentRenderUpdateMode::FastUpdate", (int64)EDynamicMeshComponentRenderUpdateMode::FastUpdate },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentRenderUpdateMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Render data update hint */" },
		{ "FastUpdate.Comment", "/** Attempt to do partial update of render data if possible */" },
		{ "FastUpdate.Name", "EDynamicMeshComponentRenderUpdateMode::FastUpdate" },
		{ "FastUpdate.ToolTip", "Attempt to do partial update of render data if possible" },
		{ "FullUpdate.Comment", "/** Invalidate overlay of internal component, rebuilding all render data */" },
		{ "FullUpdate.Name", "EDynamicMeshComponentRenderUpdateMode::FullUpdate" },
		{ "FullUpdate.ToolTip", "Invalidate overlay of internal component, rebuilding all render data" },
		{ "ModuleRelativePath", "Public/Components/DynamicMeshComponent.h" },
		{ "NoUpdate.Comment", "/** Do not update render data */" },
		{ "NoUpdate.Name", "EDynamicMeshComponentRenderUpdateMode::NoUpdate" },
		{ "NoUpdate.ToolTip", "Do not update render data" },
		{ "ToolTip", "Render data update hint" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentRenderUpdateMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryFramework,
		nullptr,
		"EDynamicMeshComponentRenderUpdateMode",
		"EDynamicMeshComponentRenderUpdateMode",
		Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentRenderUpdateMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentRenderUpdateMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentRenderUpdateMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentRenderUpdateMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentRenderUpdateMode()
	{
		if (!Z_Registration_Info_UEnum_EDynamicMeshComponentRenderUpdateMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDynamicMeshComponentRenderUpdateMode.InnerSingleton, Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentRenderUpdateMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDynamicMeshComponentRenderUpdateMode.InnerSingleton;
	}
	DEFINE_FUNCTION(UDynamicMeshComponent::execUpdateCollision)
	{
		P_GET_UBOOL(Z_Param_bOnlyIfPending);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateCollision(Z_Param_bOnlyIfPending);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDynamicMeshComponent::execSetDeferredCollisionUpdatesEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_GET_UBOOL(Z_Param_bImmediateUpdate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDeferredCollisionUpdatesEnabled(Z_Param_bEnabled,Z_Param_bImmediateUpdate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDynamicMeshComponent::execSetComplexAsSimpleCollisionEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_GET_UBOOL(Z_Param_bImmediateUpdate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetComplexAsSimpleCollisionEnabled(Z_Param_bEnabled,Z_Param_bImmediateUpdate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDynamicMeshComponent::execEnableComplexAsSimpleCollision)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableComplexAsSimpleCollision();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDynamicMeshComponent::execGetTangentsType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDynamicMeshComponentTangentsMode*)Z_Param__Result=P_THIS->GetTangentsType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDynamicMeshComponent::execSetTangentsType)
	{
		P_GET_ENUM(EDynamicMeshComponentTangentsMode,Z_Param_NewTangentsType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTangentsType(EDynamicMeshComponentTangentsMode(Z_Param_NewTangentsType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDynamicMeshComponent::execValidateMaterialSlots)
	{
		P_GET_UBOOL(Z_Param_bCreateIfMissing);
		P_GET_UBOOL(Z_Param_bDeleteExtraSlots);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ValidateMaterialSlots(Z_Param_bCreateIfMissing,Z_Param_bDeleteExtraSlots);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDynamicMeshComponent::execConfigureMaterialSet)
	{
		P_GET_TARRAY_REF(UMaterialInterface*,Z_Param_Out_NewMaterialSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConfigureMaterialSet(Z_Param_Out_NewMaterialSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDynamicMeshComponent::execSetDynamicMesh)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_NewMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDynamicMesh(Z_Param_NewMesh);
		P_NATIVE_END;
	}
	void UDynamicMeshComponent::StaticRegisterNativesUDynamicMeshComponent()
	{
		UClass* Class = UDynamicMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConfigureMaterialSet", &UDynamicMeshComponent::execConfigureMaterialSet },
			{ "EnableComplexAsSimpleCollision", &UDynamicMeshComponent::execEnableComplexAsSimpleCollision },
			{ "GetTangentsType", &UDynamicMeshComponent::execGetTangentsType },
			{ "SetComplexAsSimpleCollisionEnabled", &UDynamicMeshComponent::execSetComplexAsSimpleCollisionEnabled },
			{ "SetDeferredCollisionUpdatesEnabled", &UDynamicMeshComponent::execSetDeferredCollisionUpdatesEnabled },
			{ "SetDynamicMesh", &UDynamicMeshComponent::execSetDynamicMesh },
			{ "SetTangentsType", &UDynamicMeshComponent::execSetTangentsType },
			{ "UpdateCollision", &UDynamicMeshComponent::execUpdateCollision },
			{ "ValidateMaterialSlots", &UDynamicMeshComponent::execValidateMaterialSlots },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDynamicMeshComponent_ConfigureMaterialSet_Statics
	{
		struct DynamicMeshComponent_eventConfigureMaterialSet_Parms
		{
			TArray<UMaterialInterface*> NewMaterialSet;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMaterialSet_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewMaterialSet_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NewMaterialSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDynamicMeshComponent_ConfigureMaterialSet_Statics::NewProp_NewMaterialSet_Inner = { "NewMaterialSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicMeshComponent_ConfigureMaterialSet_Statics::NewProp_NewMaterialSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDynamicMeshComponent_ConfigureMaterialSet_Statics::NewProp_NewMaterialSet = { "NewMaterialSet", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicMeshComponent_eventConfigureMaterialSet_Parms, NewMaterialSet), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDynamicMeshComponent_ConfigureMaterialSet_Statics::NewProp_NewMaterialSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshComponent_ConfigureMaterialSet_Statics::NewProp_NewMaterialSet_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicMeshComponent_ConfigureMaterialSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicMeshComponent_ConfigureMaterialSet_Statics::NewProp_NewMaterialSet_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicMeshComponent_ConfigureMaterialSet_Statics::NewProp_NewMaterialSet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicMeshComponent_ConfigureMaterialSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "Comment", "/**\n\x09 * Set new list of Materials for the Mesh. Dynamic Mesh Component does not have \n\x09 * Slot Names, so the size of the Material Set should be the same as the number of\n\x09 * different Material IDs on the mesh MaterialID attribute\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/DynamicMeshComponent.h" },
		{ "ToolTip", "Set new list of Materials for the Mesh. Dynamic Mesh Component does not have\nSlot Names, so the size of the Material Set should be the same as the number of\ndifferent Material IDs on the mesh MaterialID attribute" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicMeshComponent_ConfigureMaterialSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicMeshComponent, nullptr, "ConfigureMaterialSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDynamicMeshComponent_ConfigureMaterialSet_Statics::DynamicMeshComponent_eventConfigureMaterialSet_Parms), Z_Construct_UFunction_UDynamicMeshComponent_ConfigureMaterialSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshComponent_ConfigureMaterialSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynamicMeshComponent_ConfigureMaterialSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshComponent_ConfigureMaterialSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynamicMeshComponent_ConfigureMaterialSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicMeshComponent_ConfigureMaterialSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDynamicMeshComponent_EnableComplexAsSimpleCollision_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicMeshComponent_EnableComplexAsSimpleCollision_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "Comment", "/**\n\x09 * calls SetComplexAsSimpleCollisionEnabled(true, true)\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/DynamicMeshComponent.h" },
		{ "ToolTip", "calls SetComplexAsSimpleCollisionEnabled(true, true)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicMeshComponent_EnableComplexAsSimpleCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicMeshComponent, nullptr, "EnableComplexAsSimpleCollision", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynamicMeshComponent_EnableComplexAsSimpleCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshComponent_EnableComplexAsSimpleCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynamicMeshComponent_EnableComplexAsSimpleCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicMeshComponent_EnableComplexAsSimpleCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsType_Statics
	{
		struct DynamicMeshComponent_eventGetTangentsType_Parms
		{
			EDynamicMeshComponentTangentsMode ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicMeshComponent_eventGetTangentsType_Parms, ReturnValue), Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentTangentsMode, METADATA_PARAMS(nullptr, 0) }; // 4168816382
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "ModuleRelativePath", "Public/Components/DynamicMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicMeshComponent, nullptr, "GetTangentsType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsType_Statics::DynamicMeshComponent_eventGetTangentsType_Parms), Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDynamicMeshComponent_SetComplexAsSimpleCollisionEnabled_Statics
	{
		struct DynamicMeshComponent_eventSetComplexAsSimpleCollisionEnabled_Parms
		{
			bool bEnabled;
			bool bImmediateUpdate;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static void NewProp_bImmediateUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImmediateUpdate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDynamicMeshComponent_SetComplexAsSimpleCollisionEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((DynamicMeshComponent_eventSetComplexAsSimpleCollisionEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDynamicMeshComponent_SetComplexAsSimpleCollisionEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DynamicMeshComponent_eventSetComplexAsSimpleCollisionEnabled_Parms), &Z_Construct_UFunction_UDynamicMeshComponent_SetComplexAsSimpleCollisionEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDynamicMeshComponent_SetComplexAsSimpleCollisionEnabled_Statics::NewProp_bImmediateUpdate_SetBit(void* Obj)
	{
		((DynamicMeshComponent_eventSetComplexAsSimpleCollisionEnabled_Parms*)Obj)->bImmediateUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDynamicMeshComponent_SetComplexAsSimpleCollisionEnabled_Statics::NewProp_bImmediateUpdate = { "bImmediateUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DynamicMeshComponent_eventSetComplexAsSimpleCollisionEnabled_Parms), &Z_Construct_UFunction_UDynamicMeshComponent_SetComplexAsSimpleCollisionEnabled_Statics::NewProp_bImmediateUpdate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicMeshComponent_SetComplexAsSimpleCollisionEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicMeshComponent_SetComplexAsSimpleCollisionEnabled_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicMeshComponent_SetComplexAsSimpleCollisionEnabled_Statics::NewProp_bImmediateUpdate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicMeshComponent_SetComplexAsSimpleCollisionEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "Comment", "/**\n\x09 * If bEnabled=true, sets bEnableComplexCollision=true and CollisionType=CTF_UseComplexAsSimple\n\x09 * If bEnabled=true, sets bEnableComplexCollision=false and CollisionType=CTF_UseDefault\n\x09 * @param bImmediateUpdate if true, UpdateCollision(true) is called\n\x09 */" },
		{ "CPP_Default_bImmediateUpdate", "true" },
		{ "ModuleRelativePath", "Public/Components/DynamicMeshComponent.h" },
		{ "ToolTip", "If bEnabled=true, sets bEnableComplexCollision=true and CollisionType=CTF_UseComplexAsSimple\nIf bEnabled=true, sets bEnableComplexCollision=false and CollisionType=CTF_UseDefault\n@param bImmediateUpdate if true, UpdateCollision(true) is called" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicMeshComponent_SetComplexAsSimpleCollisionEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicMeshComponent, nullptr, "SetComplexAsSimpleCollisionEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDynamicMeshComponent_SetComplexAsSimpleCollisionEnabled_Statics::DynamicMeshComponent_eventSetComplexAsSimpleCollisionEnabled_Parms), Z_Construct_UFunction_UDynamicMeshComponent_SetComplexAsSimpleCollisionEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshComponent_SetComplexAsSimpleCollisionEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynamicMeshComponent_SetComplexAsSimpleCollisionEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshComponent_SetComplexAsSimpleCollisionEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynamicMeshComponent_SetComplexAsSimpleCollisionEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicMeshComponent_SetComplexAsSimpleCollisionEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDynamicMeshComponent_SetDeferredCollisionUpdatesEnabled_Statics
	{
		struct DynamicMeshComponent_eventSetDeferredCollisionUpdatesEnabled_Parms
		{
			bool bEnabled;
			bool bImmediateUpdate;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static void NewProp_bImmediateUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImmediateUpdate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDynamicMeshComponent_SetDeferredCollisionUpdatesEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((DynamicMeshComponent_eventSetDeferredCollisionUpdatesEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDynamicMeshComponent_SetDeferredCollisionUpdatesEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DynamicMeshComponent_eventSetDeferredCollisionUpdatesEnabled_Parms), &Z_Construct_UFunction_UDynamicMeshComponent_SetDeferredCollisionUpdatesEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDynamicMeshComponent_SetDeferredCollisionUpdatesEnabled_Statics::NewProp_bImmediateUpdate_SetBit(void* Obj)
	{
		((DynamicMeshComponent_eventSetDeferredCollisionUpdatesEnabled_Parms*)Obj)->bImmediateUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDynamicMeshComponent_SetDeferredCollisionUpdatesEnabled_Statics::NewProp_bImmediateUpdate = { "bImmediateUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DynamicMeshComponent_eventSetDeferredCollisionUpdatesEnabled_Parms), &Z_Construct_UFunction_UDynamicMeshComponent_SetDeferredCollisionUpdatesEnabled_Statics::NewProp_bImmediateUpdate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicMeshComponent_SetDeferredCollisionUpdatesEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicMeshComponent_SetDeferredCollisionUpdatesEnabled_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicMeshComponent_SetDeferredCollisionUpdatesEnabled_Statics::NewProp_bImmediateUpdate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicMeshComponent_SetDeferredCollisionUpdatesEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "Comment", "/**\n\x09 * Set value of bDeferCollisionUpdates, when enabled, collision is not automatically recomputed each time the mesh changes.\n\x09 * @param bImmediateUpdate if true, UpdateCollision(true) is called if bEnabled=false, ie to force a collision rebuild\n\x09 */" },
		{ "CPP_Default_bImmediateUpdate", "true" },
		{ "ModuleRelativePath", "Public/Components/DynamicMeshComponent.h" },
		{ "ToolTip", "Set value of bDeferCollisionUpdates, when enabled, collision is not automatically recomputed each time the mesh changes.\n@param bImmediateUpdate if true, UpdateCollision(true) is called if bEnabled=false, ie to force a collision rebuild" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicMeshComponent_SetDeferredCollisionUpdatesEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicMeshComponent, nullptr, "SetDeferredCollisionUpdatesEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDynamicMeshComponent_SetDeferredCollisionUpdatesEnabled_Statics::DynamicMeshComponent_eventSetDeferredCollisionUpdatesEnabled_Parms), Z_Construct_UFunction_UDynamicMeshComponent_SetDeferredCollisionUpdatesEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshComponent_SetDeferredCollisionUpdatesEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynamicMeshComponent_SetDeferredCollisionUpdatesEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshComponent_SetDeferredCollisionUpdatesEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynamicMeshComponent_SetDeferredCollisionUpdatesEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicMeshComponent_SetDeferredCollisionUpdatesEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDynamicMeshComponent_SetDynamicMesh_Statics
	{
		struct DynamicMeshComponent_eventSetDynamicMesh_Parms
		{
			UDynamicMesh* NewMesh;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDynamicMeshComponent_SetDynamicMesh_Statics::NewProp_NewMesh = { "NewMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicMeshComponent_eventSetDynamicMesh_Parms, NewMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicMeshComponent_SetDynamicMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicMeshComponent_SetDynamicMesh_Statics::NewProp_NewMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicMeshComponent_SetDynamicMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "Comment", "/**\n\x09 * Set the child UDynamicMesh. This can be used to 'share' a UDynamicMesh between Component instances.\n\x09 * @warning Currently this is somewhat risky, it is on the caller/clients to make sure that the actual mesh is not being simultaneously modified on multiple threads\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/DynamicMeshComponent.h" },
		{ "ToolTip", "Set the child UDynamicMesh. This can be used to 'share' a UDynamicMesh between Component instances.\n@warning Currently this is somewhat risky, it is on the caller/clients to make sure that the actual mesh is not being simultaneously modified on multiple threads" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicMeshComponent_SetDynamicMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicMeshComponent, nullptr, "SetDynamicMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDynamicMeshComponent_SetDynamicMesh_Statics::DynamicMeshComponent_eventSetDynamicMesh_Parms), Z_Construct_UFunction_UDynamicMeshComponent_SetDynamicMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshComponent_SetDynamicMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynamicMeshComponent_SetDynamicMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshComponent_SetDynamicMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynamicMeshComponent_SetDynamicMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicMeshComponent_SetDynamicMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDynamicMeshComponent_SetTangentsType_Statics
	{
		struct DynamicMeshComponent_eventSetTangentsType_Parms
		{
			EDynamicMeshComponentTangentsMode NewTangentsType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewTangentsType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewTangentsType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDynamicMeshComponent_SetTangentsType_Statics::NewProp_NewTangentsType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDynamicMeshComponent_SetTangentsType_Statics::NewProp_NewTangentsType = { "NewTangentsType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicMeshComponent_eventSetTangentsType_Parms, NewTangentsType), Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentTangentsMode, METADATA_PARAMS(nullptr, 0) }; // 4168816382
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicMeshComponent_SetTangentsType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicMeshComponent_SetTangentsType_Statics::NewProp_NewTangentsType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicMeshComponent_SetTangentsType_Statics::NewProp_NewTangentsType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicMeshComponent_SetTangentsType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "ModuleRelativePath", "Public/Components/DynamicMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicMeshComponent_SetTangentsType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicMeshComponent, nullptr, "SetTangentsType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDynamicMeshComponent_SetTangentsType_Statics::DynamicMeshComponent_eventSetTangentsType_Parms), Z_Construct_UFunction_UDynamicMeshComponent_SetTangentsType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshComponent_SetTangentsType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynamicMeshComponent_SetTangentsType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshComponent_SetTangentsType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynamicMeshComponent_SetTangentsType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicMeshComponent_SetTangentsType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDynamicMeshComponent_UpdateCollision_Statics
	{
		struct DynamicMeshComponent_eventUpdateCollision_Parms
		{
			bool bOnlyIfPending;
		};
		static void NewProp_bOnlyIfPending_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyIfPending;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDynamicMeshComponent_UpdateCollision_Statics::NewProp_bOnlyIfPending_SetBit(void* Obj)
	{
		((DynamicMeshComponent_eventUpdateCollision_Parms*)Obj)->bOnlyIfPending = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDynamicMeshComponent_UpdateCollision_Statics::NewProp_bOnlyIfPending = { "bOnlyIfPending", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DynamicMeshComponent_eventUpdateCollision_Parms), &Z_Construct_UFunction_UDynamicMeshComponent_UpdateCollision_Statics::NewProp_bOnlyIfPending_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicMeshComponent_UpdateCollision_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicMeshComponent_UpdateCollision_Statics::NewProp_bOnlyIfPending,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicMeshComponent_UpdateCollision_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "Comment", "/**\n\x09 * Force an update of the Collision/Physics data for this Component.\n\x09 * @param bOnlyIfPending only update if a collision update is pending, ie the underlying DynamicMesh changed and bDeferCollisionUpdates is enabled\n\x09 */" },
		{ "CPP_Default_bOnlyIfPending", "true" },
		{ "ModuleRelativePath", "Public/Components/DynamicMeshComponent.h" },
		{ "ToolTip", "Force an update of the Collision/Physics data for this Component.\n@param bOnlyIfPending only update if a collision update is pending, ie the underlying DynamicMesh changed and bDeferCollisionUpdates is enabled" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicMeshComponent_UpdateCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicMeshComponent, nullptr, "UpdateCollision", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDynamicMeshComponent_UpdateCollision_Statics::DynamicMeshComponent_eventUpdateCollision_Parms), Z_Construct_UFunction_UDynamicMeshComponent_UpdateCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshComponent_UpdateCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynamicMeshComponent_UpdateCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshComponent_UpdateCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynamicMeshComponent_UpdateCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicMeshComponent_UpdateCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots_Statics
	{
		struct DynamicMeshComponent_eventValidateMaterialSlots_Parms
		{
			bool bCreateIfMissing;
			bool bDeleteExtraSlots;
			bool ReturnValue;
		};
		static void NewProp_bCreateIfMissing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateIfMissing;
		static void NewProp_bDeleteExtraSlots_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeleteExtraSlots;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots_Statics::NewProp_bCreateIfMissing_SetBit(void* Obj)
	{
		((DynamicMeshComponent_eventValidateMaterialSlots_Parms*)Obj)->bCreateIfMissing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots_Statics::NewProp_bCreateIfMissing = { "bCreateIfMissing", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DynamicMeshComponent_eventValidateMaterialSlots_Parms), &Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots_Statics::NewProp_bCreateIfMissing_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots_Statics::NewProp_bDeleteExtraSlots_SetBit(void* Obj)
	{
		((DynamicMeshComponent_eventValidateMaterialSlots_Parms*)Obj)->bDeleteExtraSlots = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots_Statics::NewProp_bDeleteExtraSlots = { "bDeleteExtraSlots", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DynamicMeshComponent_eventValidateMaterialSlots_Parms), &Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots_Statics::NewProp_bDeleteExtraSlots_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DynamicMeshComponent_eventValidateMaterialSlots_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DynamicMeshComponent_eventValidateMaterialSlots_Parms), &Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots_Statics::NewProp_bCreateIfMissing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots_Statics::NewProp_bDeleteExtraSlots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "Comment", "/**\n\x09 * Compute the maximum MaterialID on the DynamicMesh, and ensure that Material Slots match.\n\x09 * Pass both arguments as false to just do a check.\n\x09 * @param bCreateIfMissing if true, add extra (empty) Material Slots to match max MaterialID\n\x09 * @param bDeleteExtraSlots if true, extra Material Slots beyond max MaterialID are removed\n\x09 * @return true if at the end of this function, Material Slot Count == Max MaterialID\n\x09 */" },
		{ "CPP_Default_bCreateIfMissing", "true" },
		{ "CPP_Default_bDeleteExtraSlots", "true" },
		{ "ModuleRelativePath", "Public/Components/DynamicMeshComponent.h" },
		{ "ToolTip", "Compute the maximum MaterialID on the DynamicMesh, and ensure that Material Slots match.\nPass both arguments as false to just do a check.\n@param bCreateIfMissing if true, add extra (empty) Material Slots to match max MaterialID\n@param bDeleteExtraSlots if true, extra Material Slots beyond max MaterialID are removed\n@return true if at the end of this function, Material Slot Count == Max MaterialID" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicMeshComponent, nullptr, "ValidateMaterialSlots", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots_Statics::DynamicMeshComponent_eventValidateMaterialSlots_Parms), Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDynamicMeshComponent);
	UClass* Z_Construct_UClass_UDynamicMeshComponent_NoRegister()
	{
		return UDynamicMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDynamicMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeshObject;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TangentsType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TangentsType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TangentsType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAsyncCooking_MetaData[];
#endif
		static void NewProp_bUseAsyncCooking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAsyncCooking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableComplexCollision_MetaData[];
#endif
		static void NewProp_bEnableComplexCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableComplexCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeferCollisionUpdates_MetaData[];
#endif
		static void NewProp_bDeferCollisionUpdates_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeferCollisionUpdates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshBodySetup_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeshBodySetup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AggGeom_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AggGeom;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AsyncBodySetupQueue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AsyncBodySetupQueue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AsyncBodySetupQueue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDynamicMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseDynamicMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDynamicMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDynamicMeshComponent_ConfigureMaterialSet, "ConfigureMaterialSet" }, // 1150608052
		{ &Z_Construct_UFunction_UDynamicMeshComponent_EnableComplexAsSimpleCollision, "EnableComplexAsSimpleCollision" }, // 1219855603
		{ &Z_Construct_UFunction_UDynamicMeshComponent_GetTangentsType, "GetTangentsType" }, // 1627174604
		{ &Z_Construct_UFunction_UDynamicMeshComponent_SetComplexAsSimpleCollisionEnabled, "SetComplexAsSimpleCollisionEnabled" }, // 542850226
		{ &Z_Construct_UFunction_UDynamicMeshComponent_SetDeferredCollisionUpdatesEnabled, "SetDeferredCollisionUpdatesEnabled" }, // 647919684
		{ &Z_Construct_UFunction_UDynamicMeshComponent_SetDynamicMesh, "SetDynamicMesh" }, // 953505655
		{ &Z_Construct_UFunction_UDynamicMeshComponent_SetTangentsType, "SetTangentsType" }, // 2520607344
		{ &Z_Construct_UFunction_UDynamicMeshComponent_UpdateCollision, "UpdateCollision" }, // 3420126234
		{ &Z_Construct_UFunction_UDynamicMeshComponent_ValidateMaterialSlots, "ValidateMaterialSlots" }, // 2159454205
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/** \n * UDynamicMeshComponent is a mesh component similar to UProceduralMeshComponent,\n * except it bases the renderable geometry off an internal UDynamicMesh instance (which\n * encapsulates a FDynamicMesh3). \n * \n * There is extensive support for partial updates to render buffers, customizing colors,\n * internally decomposing the mesh into separate chunks for more efficient render updates,\n * and support for attaching a 'Postprocessor' to generate a render mesh on-the-fly\n * See comment sections below for details.\n * \n */" },
		{ "HideCategories", "LOD LOD Mobility Trigger" },
		{ "IncludePath", "Components/DynamicMeshComponent.h" },
		{ "ModuleRelativePath", "Public/Components/DynamicMeshComponent.h" },
		{ "ToolTip", "UDynamicMeshComponent is a mesh component similar to UProceduralMeshComponent,\nexcept it bases the renderable geometry off an internal UDynamicMesh instance (which\nencapsulates a FDynamicMesh3).\n\nThere is extensive support for partial updates to render buffers, customizing colors,\ninternally decomposing the mesh into separate chunks for more efficient render updates,\nand support for attaching a 'Postprocessor' to generate a render mesh on-the-fly\nSee comment sections below for details." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_MeshObject_MetaData[] = {
		{ "Comment", "/**\n\x09 * Internal FDynamicMesh is stored inside a UDynamicMesh container, which allows it to be\n\x09 * used from BP, shared with other UObjects, and so on\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/DynamicMeshComponent.h" },
		{ "ToolTip", "Internal FDynamicMesh is stored inside a UDynamicMesh container, which allows it to be\nused from BP, shared with other UObjects, and so on" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_MeshObject = { "MeshObject", nullptr, (EPropertyFlags)0x0026080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDynamicMeshComponent, MeshObject), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_MeshObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_MeshObject_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_TangentsType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_TangentsType_MetaData[] = {
		{ "Comment", "/** How should Tangents be calculated/handled */" },
		{ "ModuleRelativePath", "Public/Components/DynamicMeshComponent.h" },
		{ "ToolTip", "How should Tangents be calculated/handled" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_TangentsType = { "TangentsType", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDynamicMeshComponent, TangentsType), Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentTangentsMode, METADATA_PARAMS(Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_TangentsType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_TangentsType_MetaData)) }; // 4168816382
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_CollisionType_MetaData[] = {
		{ "Category", "Dynamic Mesh Component|Collision" },
		{ "Comment", "/** Type of Collision Geometry to use for this Mesh */" },
		{ "ModuleRelativePath", "Public/Components/DynamicMeshComponent.h" },
		{ "ToolTip", "Type of Collision Geometry to use for this Mesh" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_CollisionType = { "CollisionType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDynamicMeshComponent, CollisionType), Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag, METADATA_PARAMS(Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_CollisionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_CollisionType_MetaData)) }; // 3043805667
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_bUseAsyncCooking_MetaData[] = {
		{ "Category", "Dynamic Mesh Component|Collision" },
		{ "Comment", "/**\n\x09 *\x09""Controls whether the physics cooking should be done off the game thread.\n\x09 *  This should be used when collision geometry doesn't have to be immediately up to date (For example streaming in far away objects)\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/DynamicMeshComponent.h" },
		{ "ToolTip", "Controls whether the physics cooking should be done off the game thread.\nThis should be used when collision geometry doesn't have to be immediately up to date (For example streaming in far away objects)" },
	};
#endif
	void Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_bUseAsyncCooking_SetBit(void* Obj)
	{
		((UDynamicMeshComponent*)Obj)->bUseAsyncCooking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_bUseAsyncCooking = { "bUseAsyncCooking", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDynamicMeshComponent), &Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_bUseAsyncCooking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_bUseAsyncCooking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_bUseAsyncCooking_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_bEnableComplexCollision_MetaData[] = {
		{ "Category", "Dynamic Mesh Component|Collision" },
		{ "Comment", "/** \n\x09 * If true, current mesh will be used as Complex Collision source mesh. \n\x09 * This is independent of the CollisionType setting, ie, even if Complex collision is enabled, if this is false, then the Complex Collision mesh will be empty\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/DynamicMeshComponent.h" },
		{ "ToolTip", "If true, current mesh will be used as Complex Collision source mesh.\nThis is independent of the CollisionType setting, ie, even if Complex collision is enabled, if this is false, then the Complex Collision mesh will be empty" },
	};
#endif
	void Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_bEnableComplexCollision_SetBit(void* Obj)
	{
		((UDynamicMeshComponent*)Obj)->bEnableComplexCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_bEnableComplexCollision = { "bEnableComplexCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDynamicMeshComponent), &Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_bEnableComplexCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_bEnableComplexCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_bEnableComplexCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_bDeferCollisionUpdates_MetaData[] = {
		{ "Category", "Dynamic Mesh Component|Collision" },
		{ "Comment", "/** If true, updates to the mesh will not result in immediate collision regeneration. Useful when the mesh will be modified multiple times before collision is needed. */" },
		{ "ModuleRelativePath", "Public/Components/DynamicMeshComponent.h" },
		{ "ToolTip", "If true, updates to the mesh will not result in immediate collision regeneration. Useful when the mesh will be modified multiple times before collision is needed." },
	};
#endif
	void Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_bDeferCollisionUpdates_SetBit(void* Obj)
	{
		((UDynamicMeshComponent*)Obj)->bDeferCollisionUpdates = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_bDeferCollisionUpdates = { "bDeferCollisionUpdates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDynamicMeshComponent), &Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_bDeferCollisionUpdates_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_bDeferCollisionUpdates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_bDeferCollisionUpdates_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_MeshBodySetup_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/DynamicMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_MeshBodySetup = { "MeshBodySetup", nullptr, (EPropertyFlags)0x0026080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDynamicMeshComponent, MeshBodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_MeshBodySetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_MeshBodySetup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_AggGeom_MetaData[] = {
		{ "Category", "BodySetup" },
		{ "Comment", "/** Simplified collision representation for the mesh component  */" },
		{ "DisplayName", "Primitives" },
		{ "ModuleRelativePath", "Public/Components/DynamicMeshComponent.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Simplified collision representation for the mesh component" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_AggGeom = { "AggGeom", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDynamicMeshComponent, AggGeom), Z_Construct_UScriptStruct_FKAggregateGeom, METADATA_PARAMS(Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_AggGeom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_AggGeom_MetaData)) }; // 1732694976
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_AsyncBodySetupQueue_Inner = { "AsyncBodySetupQueue", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_AsyncBodySetupQueue_MetaData[] = {
		{ "Comment", "/** Queue for async body setups that are being cooked */" },
		{ "ModuleRelativePath", "Public/Components/DynamicMeshComponent.h" },
		{ "ToolTip", "Queue for async body setups that are being cooked" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_AsyncBodySetupQueue = { "AsyncBodySetupQueue", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDynamicMeshComponent, AsyncBodySetupQueue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_AsyncBodySetupQueue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_AsyncBodySetupQueue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDynamicMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_MeshObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_TangentsType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_TangentsType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_CollisionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_bUseAsyncCooking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_bEnableComplexCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_bDeferCollisionUpdates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_MeshBodySetup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_AggGeom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_AsyncBodySetupQueue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshComponent_Statics::NewProp_AsyncBodySetupQueue,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDynamicMeshComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister, (int32)VTABLE_OFFSET(UDynamicMeshComponent, IInterface_CollisionDataProvider), false },  // 1866130202
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDynamicMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDynamicMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDynamicMeshComponent_Statics::ClassParams = {
		&UDynamicMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDynamicMeshComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDynamicMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDynamicMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UDynamicMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDynamicMeshComponent.OuterSingleton, Z_Construct_UClass_UDynamicMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDynamicMeshComponent.OuterSingleton;
	}
	template<> GEOMETRYFRAMEWORK_API UClass* StaticClass<UDynamicMeshComponent>()
	{
		return UDynamicMeshComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDynamicMeshComponent);
	UDynamicMeshComponent::~UDynamicMeshComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Components_DynamicMeshComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Components_DynamicMeshComponent_h_Statics::EnumInfo[] = {
		{ EDynamicMeshComponentRenderUpdateMode_StaticEnum, TEXT("EDynamicMeshComponentRenderUpdateMode"), &Z_Registration_Info_UEnum_EDynamicMeshComponentRenderUpdateMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3422075767U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Components_DynamicMeshComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDynamicMeshComponent, UDynamicMeshComponent::StaticClass, TEXT("UDynamicMeshComponent"), &Z_Registration_Info_UClass_UDynamicMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDynamicMeshComponent), 1269506758U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Components_DynamicMeshComponent_h_4241913800(TEXT("/Script/GeometryFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Components_DynamicMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Components_DynamicMeshComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Components_DynamicMeshComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Components_DynamicMeshComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
