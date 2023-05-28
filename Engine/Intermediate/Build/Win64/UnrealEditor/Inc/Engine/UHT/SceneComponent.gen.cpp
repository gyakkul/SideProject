// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Components/SceneComponent.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APhysicsVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachLocation();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachmentRule();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EComponentMobility();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDetachmentRule();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDetailMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERelativeTransformSpace();
	ENGINE_API UFunction* Z_Construct_USparseDelegateFunction_Engine_IsRootComponentChanged__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_USparseDelegateFunction_Engine_PhysicsVolumeChanged__DelegateSignature();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorComponentInstanceData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSceneComponentInstanceData();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDetailMode;
	static UEnum* EDetailMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDetailMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDetailMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDetailMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EDetailMode"));
		}
		return Z_Registration_Info_UEnum_EDetailMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EDetailMode>()
	{
		return EDetailMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EDetailMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EDetailMode_Statics::Enumerators[] = {
		{ "DM_Low", (int64)DM_Low },
		{ "DM_Medium", (int64)DM_Medium },
		{ "DM_High", (int64)DM_High },
		{ "DM_MAX", (int64)DM_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EDetailMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Detail mode for scene component rendering, corresponds with the integer value of UWorld::GetDetailMode() */" },
		{ "DM_High.DisplayName", "High" },
		{ "DM_High.Name", "DM_High" },
		{ "DM_Low.DisplayName", "Low" },
		{ "DM_Low.Name", "DM_Low" },
		{ "DM_MAX.Name", "DM_MAX" },
		{ "DM_Medium.DisplayName", "Medium" },
		{ "DM_Medium.Name", "DM_Medium" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "Detail mode for scene component rendering, corresponds with the integer value of UWorld::GetDetailMode()" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EDetailMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EDetailMode",
		"EDetailMode",
		Z_Construct_UEnum_Engine_EDetailMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDetailMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EDetailMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDetailMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EDetailMode()
	{
		if (!Z_Registration_Info_UEnum_EDetailMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDetailMode.InnerSingleton, Z_Construct_UEnum_Engine_EDetailMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDetailMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERelativeTransformSpace;
	static UEnum* ERelativeTransformSpace_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERelativeTransformSpace.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERelativeTransformSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERelativeTransformSpace, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ERelativeTransformSpace"));
		}
		return Z_Registration_Info_UEnum_ERelativeTransformSpace.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ERelativeTransformSpace>()
	{
		return ERelativeTransformSpace_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ERelativeTransformSpace_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ERelativeTransformSpace_Statics::Enumerators[] = {
		{ "RTS_World", (int64)RTS_World },
		{ "RTS_Actor", (int64)RTS_Actor },
		{ "RTS_Component", (int64)RTS_Component },
		{ "RTS_ParentBoneSpace", (int64)RTS_ParentBoneSpace },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ERelativeTransformSpace_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** The space for the transform */" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "RTS_Actor.Comment", "/** Actor space transform. */" },
		{ "RTS_Actor.Name", "RTS_Actor" },
		{ "RTS_Actor.ToolTip", "Actor space transform." },
		{ "RTS_Component.Comment", "/** Component space transform. */" },
		{ "RTS_Component.Name", "RTS_Component" },
		{ "RTS_Component.ToolTip", "Component space transform." },
		{ "RTS_ParentBoneSpace.Comment", "/** Parent bone space transform */" },
		{ "RTS_ParentBoneSpace.Name", "RTS_ParentBoneSpace" },
		{ "RTS_ParentBoneSpace.ToolTip", "Parent bone space transform" },
		{ "RTS_World.Comment", "/** World space transform. */" },
		{ "RTS_World.Name", "RTS_World" },
		{ "RTS_World.ToolTip", "World space transform." },
		{ "ToolTip", "The space for the transform" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ERelativeTransformSpace_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ERelativeTransformSpace",
		"ERelativeTransformSpace",
		Z_Construct_UEnum_Engine_ERelativeTransformSpace_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERelativeTransformSpace_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ERelativeTransformSpace_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERelativeTransformSpace_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ERelativeTransformSpace()
	{
		if (!Z_Registration_Info_UEnum_ERelativeTransformSpace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERelativeTransformSpace.InnerSingleton, Z_Construct_UEnum_Engine_ERelativeTransformSpace_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERelativeTransformSpace.InnerSingleton;
	}
	struct Z_Construct_USparseDelegateFunction_Engine_PhysicsVolumeChanged__DelegateSignature_Statics
	{
		struct _Script_Engine_eventPhysicsVolumeChanged_Parms
		{
			APhysicsVolume* NewVolume;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewVolume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_PhysicsVolumeChanged__DelegateSignature_Statics::NewProp_NewVolume = { "NewVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventPhysicsVolumeChanged_Parms, NewVolume), Z_Construct_UClass_APhysicsVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_Engine_PhysicsVolumeChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_PhysicsVolumeChanged__DelegateSignature_Statics::NewProp_NewVolume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_Engine_PhysicsVolumeChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Engine_PhysicsVolumeChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "PhysicsVolumeChanged__DelegateSignature", "SceneComponent", "PhysicsVolumeChangedDelegate", sizeof(Z_Construct_USparseDelegateFunction_Engine_PhysicsVolumeChanged__DelegateSignature_Statics::_Script_Engine_eventPhysicsVolumeChanged_Parms), Z_Construct_USparseDelegateFunction_Engine_PhysicsVolumeChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_PhysicsVolumeChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_USparseDelegateFunction_Engine_PhysicsVolumeChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_PhysicsVolumeChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_USparseDelegateFunction_Engine_PhysicsVolumeChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_Engine_PhysicsVolumeChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPhysicsVolumeChanged_DelegateWrapper(const FMulticastScriptDelegate& PhysicsVolumeChanged, APhysicsVolume* NewVolume)
{
	struct _Script_Engine_eventPhysicsVolumeChanged_Parms
	{
		APhysicsVolume* NewVolume;
	};
	_Script_Engine_eventPhysicsVolumeChanged_Parms Parms;
	Parms.NewVolume=NewVolume;
	PhysicsVolumeChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_USparseDelegateFunction_Engine_IsRootComponentChanged__DelegateSignature_Statics
	{
		struct _Script_Engine_eventIsRootComponentChanged_Parms
		{
			USceneComponent* UpdatedComponent;
			bool bIsRootComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdatedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UpdatedComponent;
		static void NewProp_bIsRootComponent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRootComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_Engine_IsRootComponentChanged__DelegateSignature_Statics::NewProp_UpdatedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_IsRootComponentChanged__DelegateSignature_Statics::NewProp_UpdatedComponent = { "UpdatedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventIsRootComponentChanged_Parms, UpdatedComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_USparseDelegateFunction_Engine_IsRootComponentChanged__DelegateSignature_Statics::NewProp_UpdatedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_IsRootComponentChanged__DelegateSignature_Statics::NewProp_UpdatedComponent_MetaData)) };
	void Z_Construct_USparseDelegateFunction_Engine_IsRootComponentChanged__DelegateSignature_Statics::NewProp_bIsRootComponent_SetBit(void* Obj)
	{
		((_Script_Engine_eventIsRootComponentChanged_Parms*)Obj)->bIsRootComponent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_USparseDelegateFunction_Engine_IsRootComponentChanged__DelegateSignature_Statics::NewProp_bIsRootComponent = { "bIsRootComponent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_Engine_eventIsRootComponentChanged_Parms), &Z_Construct_USparseDelegateFunction_Engine_IsRootComponentChanged__DelegateSignature_Statics::NewProp_bIsRootComponent_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_Engine_IsRootComponentChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_IsRootComponentChanged__DelegateSignature_Statics::NewProp_UpdatedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_IsRootComponentChanged__DelegateSignature_Statics::NewProp_bIsRootComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_Engine_IsRootComponentChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Engine_IsRootComponentChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "IsRootComponentChanged__DelegateSignature", "SceneComponent", "IsRootComponentChanged", sizeof(Z_Construct_USparseDelegateFunction_Engine_IsRootComponentChanged__DelegateSignature_Statics::_Script_Engine_eventIsRootComponentChanged_Parms), Z_Construct_USparseDelegateFunction_Engine_IsRootComponentChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_IsRootComponentChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_USparseDelegateFunction_Engine_IsRootComponentChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_IsRootComponentChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_USparseDelegateFunction_Engine_IsRootComponentChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_Engine_IsRootComponentChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FIsRootComponentChanged_DelegateWrapper(const FMulticastScriptDelegate& IsRootComponentChanged, USceneComponent* UpdatedComponent, bool bIsRootComponent)
{
	struct _Script_Engine_eventIsRootComponentChanged_Parms
	{
		USceneComponent* UpdatedComponent;
		bool bIsRootComponent;
	};
	_Script_Engine_eventIsRootComponentChanged_Parms Parms;
	Parms.UpdatedComponent=UpdatedComponent;
	Parms.bIsRootComponent=bIsRootComponent ? true : false;
	IsRootComponentChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(USceneComponent::execSetMobility)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_NewMobility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMobility(EComponentMobility::Type(Z_Param_NewMobility));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execK2_SetWorldLocationAndRotation)
	{
		P_GET_STRUCT(FVector,Z_Param_NewLocation);
		P_GET_STRUCT(FRotator,Z_Param_NewRotation);
		P_GET_UBOOL(Z_Param_bSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
		P_GET_UBOOL(Z_Param_bTeleport);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_SetWorldLocationAndRotation(Z_Param_NewLocation,Z_Param_NewRotation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execSetAbsolute)
	{
		P_GET_UBOOL(Z_Param_bNewAbsoluteLocation);
		P_GET_UBOOL(Z_Param_bNewAbsoluteRotation);
		P_GET_UBOOL(Z_Param_bNewAbsoluteScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAbsolute(Z_Param_bNewAbsoluteLocation,Z_Param_bNewAbsoluteRotation,Z_Param_bNewAbsoluteScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execK2_SetRelativeLocationAndRotation)
	{
		P_GET_STRUCT(FVector,Z_Param_NewLocation);
		P_GET_STRUCT(FRotator,Z_Param_NewRotation);
		P_GET_UBOOL(Z_Param_bSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
		P_GET_UBOOL(Z_Param_bTeleport);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_SetRelativeLocationAndRotation(Z_Param_NewLocation,Z_Param_NewRotation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execGetPhysicsVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APhysicsVolume**)Z_Param__Result=P_THIS->GetPhysicsVolume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execSetHiddenInGame)
	{
		P_GET_UBOOL(Z_Param_NewHidden);
		P_GET_UBOOL(Z_Param_bPropagateToChildren);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHiddenInGame(Z_Param_NewHidden,Z_Param_bPropagateToChildren);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execToggleVisibility)
	{
		P_GET_UBOOL(Z_Param_bPropagateToChildren);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleVisibility(Z_Param_bPropagateToChildren);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execSetVisibility)
	{
		P_GET_UBOOL(Z_Param_bNewVisibility);
		P_GET_UBOOL(Z_Param_bPropagateToChildren);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibility(Z_Param_bNewVisibility,Z_Param_bPropagateToChildren);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execIsVisible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsVisible();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execGetComponentVelocity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetComponentVelocity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execDoesSocketExist)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InSocketName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoesSocketExist(Z_Param_InSocketName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execGetSocketQuaternion)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InSocketName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=P_THIS->GetSocketQuaternion(Z_Param_InSocketName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execGetSocketRotation)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InSocketName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetSocketRotation(Z_Param_InSocketName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execGetSocketLocation)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InSocketName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetSocketLocation(Z_Param_InSocketName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execGetSocketTransform)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InSocketName);
		P_GET_PROPERTY(FByteProperty,Z_Param_TransformSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetSocketTransform(Z_Param_InSocketName,ERelativeTransformSpace(Z_Param_TransformSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execGetAllSocketNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetAllSocketNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execK2_DetachFromComponent)
	{
		P_GET_ENUM(EDetachmentRule,Z_Param_LocationRule);
		P_GET_ENUM(EDetachmentRule,Z_Param_RotationRule);
		P_GET_ENUM(EDetachmentRule,Z_Param_ScaleRule);
		P_GET_UBOOL(Z_Param_bCallModify);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_DetachFromComponent(EDetachmentRule(Z_Param_LocationRule),EDetachmentRule(Z_Param_RotationRule),EDetachmentRule(Z_Param_ScaleRule),Z_Param_bCallModify);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execDetachFromParent)
	{
		P_GET_UBOOL(Z_Param_bMaintainWorldPosition);
		P_GET_UBOOL(Z_Param_bCallModify);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DetachFromParent(Z_Param_bMaintainWorldPosition,Z_Param_bCallModify);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execK2_AttachToComponent)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_Parent);
		P_GET_PROPERTY(FNameProperty,Z_Param_SocketName);
		P_GET_ENUM(EAttachmentRule,Z_Param_LocationRule);
		P_GET_ENUM(EAttachmentRule,Z_Param_RotationRule);
		P_GET_ENUM(EAttachmentRule,Z_Param_ScaleRule);
		P_GET_UBOOL(Z_Param_bWeldSimulatedBodies);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->K2_AttachToComponent(Z_Param_Parent,Z_Param_SocketName,EAttachmentRule(Z_Param_LocationRule),EAttachmentRule(Z_Param_RotationRule),EAttachmentRule(Z_Param_ScaleRule),Z_Param_bWeldSimulatedBodies);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execK2_AttachTo)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_InParent);
		P_GET_PROPERTY(FNameProperty,Z_Param_InSocketName);
		P_GET_PROPERTY(FByteProperty,Z_Param_AttachType);
		P_GET_UBOOL(Z_Param_bWeldSimulatedBodies);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->K2_AttachTo(Z_Param_InParent,Z_Param_InSocketName,EAttachLocation::Type(Z_Param_AttachType),Z_Param_bWeldSimulatedBodies);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execGetChildrenComponents)
	{
		P_GET_UBOOL(Z_Param_bIncludeAllDescendants);
		P_GET_TARRAY_REF(USceneComponent*,Z_Param_Out_Children);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetChildrenComponents(Z_Param_bIncludeAllDescendants,Z_Param_Out_Children);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execGetChildComponent)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ChildIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USceneComponent**)Z_Param__Result=P_THIS->GetChildComponent(Z_Param_ChildIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execGetNumChildrenComponents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumChildrenComponents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execGetParentComponents)
	{
		P_GET_TARRAY_REF(USceneComponent*,Z_Param_Out_Parents);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetParentComponents(Z_Param_Out_Parents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execGetAttachSocketName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetAttachSocketName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execGetAttachParent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USceneComponent**)Z_Param__Result=P_THIS->GetAttachParent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execIsAnySimulatingPhysics)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAnySimulatingPhysics();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execIsSimulatingPhysics)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSimulatingPhysics(Z_Param_BoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execGetRightVector)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetRightVector();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execGetUpVector)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetUpVector();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execGetForwardVector)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetForwardVector();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execK2_GetComponentToWorld)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->K2_GetComponentToWorld();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execK2_GetComponentScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->K2_GetComponentScale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execK2_GetComponentRotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->K2_GetComponentRotation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execK2_GetComponentLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->K2_GetComponentLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execK2_AddWorldTransformKeepScale)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_DeltaTransform);
		P_GET_UBOOL(Z_Param_bSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
		P_GET_UBOOL(Z_Param_bTeleport);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_AddWorldTransformKeepScale(Z_Param_Out_DeltaTransform,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execK2_AddWorldTransform)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_DeltaTransform);
		P_GET_UBOOL(Z_Param_bSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
		P_GET_UBOOL(Z_Param_bTeleport);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_AddWorldTransform(Z_Param_Out_DeltaTransform,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execK2_AddWorldRotation)
	{
		P_GET_STRUCT(FRotator,Z_Param_DeltaRotation);
		P_GET_UBOOL(Z_Param_bSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
		P_GET_UBOOL(Z_Param_bTeleport);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_AddWorldRotation(Z_Param_DeltaRotation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execK2_AddWorldOffset)
	{
		P_GET_STRUCT(FVector,Z_Param_DeltaLocation);
		P_GET_UBOOL(Z_Param_bSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
		P_GET_UBOOL(Z_Param_bTeleport);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_AddWorldOffset(Z_Param_DeltaLocation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execK2_SetWorldTransform)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewTransform);
		P_GET_UBOOL(Z_Param_bSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
		P_GET_UBOOL(Z_Param_bTeleport);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_SetWorldTransform(Z_Param_Out_NewTransform,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execSetWorldScale3D)
	{
		P_GET_STRUCT(FVector,Z_Param_NewScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWorldScale3D(Z_Param_NewScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execK2_SetWorldRotation)
	{
		P_GET_STRUCT(FRotator,Z_Param_NewRotation);
		P_GET_UBOOL(Z_Param_bSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
		P_GET_UBOOL(Z_Param_bTeleport);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_SetWorldRotation(Z_Param_NewRotation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execK2_SetWorldLocation)
	{
		P_GET_STRUCT(FVector,Z_Param_NewLocation);
		P_GET_UBOOL(Z_Param_bSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
		P_GET_UBOOL(Z_Param_bTeleport);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_SetWorldLocation(Z_Param_NewLocation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execK2_AddLocalTransform)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_DeltaTransform);
		P_GET_UBOOL(Z_Param_bSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
		P_GET_UBOOL(Z_Param_bTeleport);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_AddLocalTransform(Z_Param_Out_DeltaTransform,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execK2_AddLocalRotation)
	{
		P_GET_STRUCT(FRotator,Z_Param_DeltaRotation);
		P_GET_UBOOL(Z_Param_bSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
		P_GET_UBOOL(Z_Param_bTeleport);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_AddLocalRotation(Z_Param_DeltaRotation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execK2_AddLocalOffset)
	{
		P_GET_STRUCT(FVector,Z_Param_DeltaLocation);
		P_GET_UBOOL(Z_Param_bSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
		P_GET_UBOOL(Z_Param_bTeleport);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_AddLocalOffset(Z_Param_DeltaLocation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execK2_AddRelativeRotation)
	{
		P_GET_STRUCT(FRotator,Z_Param_DeltaRotation);
		P_GET_UBOOL(Z_Param_bSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
		P_GET_UBOOL(Z_Param_bTeleport);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_AddRelativeRotation(Z_Param_DeltaRotation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execK2_AddRelativeLocation)
	{
		P_GET_STRUCT(FVector,Z_Param_DeltaLocation);
		P_GET_UBOOL(Z_Param_bSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
		P_GET_UBOOL(Z_Param_bTeleport);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_AddRelativeLocation(Z_Param_DeltaLocation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execSetRelativeScale3D)
	{
		P_GET_STRUCT(FVector,Z_Param_NewScale3D);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRelativeScale3D(Z_Param_NewScale3D);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execResetRelativeTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetRelativeTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execGetRelativeTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetRelativeTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execK2_SetRelativeTransform)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewTransform);
		P_GET_UBOOL(Z_Param_bSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
		P_GET_UBOOL(Z_Param_bTeleport);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_SetRelativeTransform(Z_Param_Out_NewTransform,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execK2_SetRelativeRotation)
	{
		P_GET_STRUCT(FRotator,Z_Param_NewRotation);
		P_GET_UBOOL(Z_Param_bSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
		P_GET_UBOOL(Z_Param_bTeleport);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_SetRelativeRotation(Z_Param_NewRotation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execK2_SetRelativeLocation)
	{
		P_GET_STRUCT(FVector,Z_Param_NewLocation);
		P_GET_UBOOL(Z_Param_bSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
		P_GET_UBOOL(Z_Param_bTeleport);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_SetRelativeLocation(Z_Param_NewLocation,Z_Param_bSweep,Z_Param_Out_SweepHitResult,Z_Param_bTeleport);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execOnRep_Visibility)
	{
		P_GET_UBOOL(Z_Param_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Visibility(Z_Param_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execOnRep_AttachSocketName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_AttachSocketName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execOnRep_AttachChildren)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_AttachChildren();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execOnRep_AttachParent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_AttachParent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execOnRep_Transform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Transform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execSetShouldUpdatePhysicsVolume)
	{
		P_GET_UBOOL(Z_Param_bInShouldUpdatePhysicsVolume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShouldUpdatePhysicsVolume(Z_Param_bInShouldUpdatePhysicsVolume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneComponent::execGetShouldUpdatePhysicsVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetShouldUpdatePhysicsVolume();
		P_NATIVE_END;
	}
	void USceneComponent::StaticRegisterNativesUSceneComponent()
	{
		UClass* Class = USceneComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DetachFromParent", &USceneComponent::execDetachFromParent },
			{ "DoesSocketExist", &USceneComponent::execDoesSocketExist },
			{ "GetAllSocketNames", &USceneComponent::execGetAllSocketNames },
			{ "GetAttachParent", &USceneComponent::execGetAttachParent },
			{ "GetAttachSocketName", &USceneComponent::execGetAttachSocketName },
			{ "GetChildComponent", &USceneComponent::execGetChildComponent },
			{ "GetChildrenComponents", &USceneComponent::execGetChildrenComponents },
			{ "GetComponentVelocity", &USceneComponent::execGetComponentVelocity },
			{ "GetForwardVector", &USceneComponent::execGetForwardVector },
			{ "GetNumChildrenComponents", &USceneComponent::execGetNumChildrenComponents },
			{ "GetParentComponents", &USceneComponent::execGetParentComponents },
			{ "GetPhysicsVolume", &USceneComponent::execGetPhysicsVolume },
			{ "GetRelativeTransform", &USceneComponent::execGetRelativeTransform },
			{ "GetRightVector", &USceneComponent::execGetRightVector },
			{ "GetShouldUpdatePhysicsVolume", &USceneComponent::execGetShouldUpdatePhysicsVolume },
			{ "GetSocketLocation", &USceneComponent::execGetSocketLocation },
			{ "GetSocketQuaternion", &USceneComponent::execGetSocketQuaternion },
			{ "GetSocketRotation", &USceneComponent::execGetSocketRotation },
			{ "GetSocketTransform", &USceneComponent::execGetSocketTransform },
			{ "GetUpVector", &USceneComponent::execGetUpVector },
			{ "IsAnySimulatingPhysics", &USceneComponent::execIsAnySimulatingPhysics },
			{ "IsSimulatingPhysics", &USceneComponent::execIsSimulatingPhysics },
			{ "IsVisible", &USceneComponent::execIsVisible },
			{ "K2_AddLocalOffset", &USceneComponent::execK2_AddLocalOffset },
			{ "K2_AddLocalRotation", &USceneComponent::execK2_AddLocalRotation },
			{ "K2_AddLocalTransform", &USceneComponent::execK2_AddLocalTransform },
			{ "K2_AddRelativeLocation", &USceneComponent::execK2_AddRelativeLocation },
			{ "K2_AddRelativeRotation", &USceneComponent::execK2_AddRelativeRotation },
			{ "K2_AddWorldOffset", &USceneComponent::execK2_AddWorldOffset },
			{ "K2_AddWorldRotation", &USceneComponent::execK2_AddWorldRotation },
			{ "K2_AddWorldTransform", &USceneComponent::execK2_AddWorldTransform },
			{ "K2_AddWorldTransformKeepScale", &USceneComponent::execK2_AddWorldTransformKeepScale },
			{ "K2_AttachTo", &USceneComponent::execK2_AttachTo },
			{ "K2_AttachToComponent", &USceneComponent::execK2_AttachToComponent },
			{ "K2_DetachFromComponent", &USceneComponent::execK2_DetachFromComponent },
			{ "K2_GetComponentLocation", &USceneComponent::execK2_GetComponentLocation },
			{ "K2_GetComponentRotation", &USceneComponent::execK2_GetComponentRotation },
			{ "K2_GetComponentScale", &USceneComponent::execK2_GetComponentScale },
			{ "K2_GetComponentToWorld", &USceneComponent::execK2_GetComponentToWorld },
			{ "K2_SetRelativeLocation", &USceneComponent::execK2_SetRelativeLocation },
			{ "K2_SetRelativeLocationAndRotation", &USceneComponent::execK2_SetRelativeLocationAndRotation },
			{ "K2_SetRelativeRotation", &USceneComponent::execK2_SetRelativeRotation },
			{ "K2_SetRelativeTransform", &USceneComponent::execK2_SetRelativeTransform },
			{ "K2_SetWorldLocation", &USceneComponent::execK2_SetWorldLocation },
			{ "K2_SetWorldLocationAndRotation", &USceneComponent::execK2_SetWorldLocationAndRotation },
			{ "K2_SetWorldRotation", &USceneComponent::execK2_SetWorldRotation },
			{ "K2_SetWorldTransform", &USceneComponent::execK2_SetWorldTransform },
			{ "OnRep_AttachChildren", &USceneComponent::execOnRep_AttachChildren },
			{ "OnRep_AttachParent", &USceneComponent::execOnRep_AttachParent },
			{ "OnRep_AttachSocketName", &USceneComponent::execOnRep_AttachSocketName },
			{ "OnRep_Transform", &USceneComponent::execOnRep_Transform },
			{ "OnRep_Visibility", &USceneComponent::execOnRep_Visibility },
			{ "ResetRelativeTransform", &USceneComponent::execResetRelativeTransform },
			{ "SetAbsolute", &USceneComponent::execSetAbsolute },
			{ "SetHiddenInGame", &USceneComponent::execSetHiddenInGame },
			{ "SetMobility", &USceneComponent::execSetMobility },
			{ "SetRelativeScale3D", &USceneComponent::execSetRelativeScale3D },
			{ "SetShouldUpdatePhysicsVolume", &USceneComponent::execSetShouldUpdatePhysicsVolume },
			{ "SetVisibility", &USceneComponent::execSetVisibility },
			{ "SetWorldScale3D", &USceneComponent::execSetWorldScale3D },
			{ "ToggleVisibility", &USceneComponent::execToggleVisibility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USceneComponent_DetachFromParent_Statics
	{
		struct SceneComponent_eventDetachFromParent_Parms
		{
			bool bMaintainWorldPosition;
			bool bCallModify;
		};
		static void NewProp_bMaintainWorldPosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaintainWorldPosition;
		static void NewProp_bCallModify_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCallModify;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USceneComponent_DetachFromParent_Statics::NewProp_bMaintainWorldPosition_SetBit(void* Obj)
	{
		((SceneComponent_eventDetachFromParent_Parms*)Obj)->bMaintainWorldPosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_DetachFromParent_Statics::NewProp_bMaintainWorldPosition = { "bMaintainWorldPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventDetachFromParent_Parms), &Z_Construct_UFunction_USceneComponent_DetachFromParent_Statics::NewProp_bMaintainWorldPosition_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USceneComponent_DetachFromParent_Statics::NewProp_bCallModify_SetBit(void* Obj)
	{
		((SceneComponent_eventDetachFromParent_Parms*)Obj)->bCallModify = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_DetachFromParent_Statics::NewProp_bCallModify = { "bCallModify", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventDetachFromParent_Parms), &Z_Construct_UFunction_USceneComponent_DetachFromParent_Statics::NewProp_bCallModify_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_DetachFromParent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_DetachFromParent_Statics::NewProp_bMaintainWorldPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_DetachFromParent_Statics::NewProp_bCallModify,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_DetachFromParent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "CPP_Default_bCallModify", "true" },
		{ "CPP_Default_bMaintainWorldPosition", "false" },
		{ "DisplayName", "DetachFromParent (Deprecated)" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_DetachFromParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "DetachFromParent", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_DetachFromParent_Statics::SceneComponent_eventDetachFromParent_Parms), Z_Construct_UFunction_USceneComponent_DetachFromParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_DetachFromParent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_DetachFromParent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_DetachFromParent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_DetachFromParent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_DetachFromParent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_DoesSocketExist_Statics
	{
		struct SceneComponent_eventDoesSocketExist_Parms
		{
			FName InSocketName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InSocketName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USceneComponent_DoesSocketExist_Statics::NewProp_InSocketName = { "InSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventDoesSocketExist_Parms, InSocketName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USceneComponent_DoesSocketExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SceneComponent_eventDoesSocketExist_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_DoesSocketExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventDoesSocketExist_Parms), &Z_Construct_UFunction_USceneComponent_DoesSocketExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_DoesSocketExist_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_DoesSocketExist_Statics::NewProp_InSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_DoesSocketExist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_DoesSocketExist_Statics::Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/** \n\x09 * Return true if socket with the given name exists\n\x09 * @param InSocketName Name of the socket or the bone to get the transform \n\x09 */" },
		{ "Keywords", "Bone" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "Return true if socket with the given name exists\n@param InSocketName Name of the socket or the bone to get the transform" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_DoesSocketExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "DoesSocketExist", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_DoesSocketExist_Statics::SceneComponent_eventDoesSocketExist_Parms), Z_Construct_UFunction_USceneComponent_DoesSocketExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_DoesSocketExist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_DoesSocketExist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_DoesSocketExist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_DoesSocketExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_DoesSocketExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_GetAllSocketNames_Statics
	{
		struct SceneComponent_eventGetAllSocketNames_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USceneComponent_GetAllSocketNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USceneComponent_GetAllSocketNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventGetAllSocketNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_GetAllSocketNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_GetAllSocketNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_GetAllSocketNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_GetAllSocketNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/** \n\x09 * Gets the names of all the sockets on the component.\n\x09 * @return Get the names of all the sockets on the component.\n\x09 */" },
		{ "Keywords", "Bone" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "Gets the names of all the sockets on the component.\n@return Get the names of all the sockets on the component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_GetAllSocketNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "GetAllSocketNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_GetAllSocketNames_Statics::SceneComponent_eventGetAllSocketNames_Parms), Z_Construct_UFunction_USceneComponent_GetAllSocketNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_GetAllSocketNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_GetAllSocketNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_GetAllSocketNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_GetAllSocketNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_GetAllSocketNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_GetAttachParent_Statics
	{
		struct SceneComponent_eventGetAttachParent_Parms
		{
			USceneComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_GetAttachParent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USceneComponent_GetAttachParent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventGetAttachParent_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_GetAttachParent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_GetAttachParent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_GetAttachParent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_GetAttachParent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_GetAttachParent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/** Get the SceneComponent we are attached to. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "Get the SceneComponent we are attached to." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_GetAttachParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "GetAttachParent", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_GetAttachParent_Statics::SceneComponent_eventGetAttachParent_Parms), Z_Construct_UFunction_USceneComponent_GetAttachParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_GetAttachParent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_GetAttachParent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_GetAttachParent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_GetAttachParent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_GetAttachParent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_GetAttachSocketName_Statics
	{
		struct SceneComponent_eventGetAttachSocketName_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USceneComponent_GetAttachSocketName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventGetAttachSocketName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_GetAttachSocketName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_GetAttachSocketName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_GetAttachSocketName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/** Get the socket we are attached to. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "Get the socket we are attached to." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_GetAttachSocketName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "GetAttachSocketName", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_GetAttachSocketName_Statics::SceneComponent_eventGetAttachSocketName_Parms), Z_Construct_UFunction_USceneComponent_GetAttachSocketName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_GetAttachSocketName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_GetAttachSocketName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_GetAttachSocketName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_GetAttachSocketName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_GetAttachSocketName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_GetChildComponent_Statics
	{
		struct SceneComponent_eventGetChildComponent_Parms
		{
			int32 ChildIndex;
			USceneComponent* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChildIndex;
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USceneComponent_GetChildComponent_Statics::NewProp_ChildIndex = { "ChildIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventGetChildComponent_Parms, ChildIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_GetChildComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USceneComponent_GetChildComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventGetChildComponent_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_GetChildComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_GetChildComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_GetChildComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_GetChildComponent_Statics::NewProp_ChildIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_GetChildComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_GetChildComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components" },
		{ "Comment", "/** Gets the attached child component at the specified location */" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "Gets the attached child component at the specified location" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_GetChildComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "GetChildComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_GetChildComponent_Statics::SceneComponent_eventGetChildComponent_Parms), Z_Construct_UFunction_USceneComponent_GetChildComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_GetChildComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_GetChildComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_GetChildComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_GetChildComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_GetChildComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_GetChildrenComponents_Statics
	{
		struct SceneComponent_eventGetChildrenComponents_Parms
		{
			bool bIncludeAllDescendants;
			TArray<USceneComponent*> Children;
		};
		static void NewProp_bIncludeAllDescendants_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeAllDescendants;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Children_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Children;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USceneComponent_GetChildrenComponents_Statics::NewProp_bIncludeAllDescendants_SetBit(void* Obj)
	{
		((SceneComponent_eventGetChildrenComponents_Parms*)Obj)->bIncludeAllDescendants = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_GetChildrenComponents_Statics::NewProp_bIncludeAllDescendants = { "bIncludeAllDescendants", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventGetChildrenComponents_Parms), &Z_Construct_UFunction_USceneComponent_GetChildrenComponents_Statics::NewProp_bIncludeAllDescendants_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USceneComponent_GetChildrenComponents_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_GetChildrenComponents_Statics::NewProp_Children_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USceneComponent_GetChildrenComponents_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventGetChildrenComponents_Parms, Children), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_GetChildrenComponents_Statics::NewProp_Children_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_GetChildrenComponents_Statics::NewProp_Children_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_GetChildrenComponents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_GetChildrenComponents_Statics::NewProp_bIncludeAllDescendants,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_GetChildrenComponents_Statics::NewProp_Children_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_GetChildrenComponents_Statics::NewProp_Children,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_GetChildrenComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components" },
		{ "Comment", "/** \n\x09 * Gets all components that are attached to this component, possibly recursively\n\x09 * @param bIncludeAllDescendants Whether to include all descendants in the list of children (i.e. grandchildren, great grandchildren, etc.)\n\x09 * @param Children The list of attached child components\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "Gets all components that are attached to this component, possibly recursively\n@param bIncludeAllDescendants Whether to include all descendants in the list of children (i.e. grandchildren, great grandchildren, etc.)\n@param Children The list of attached child components" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_GetChildrenComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "GetChildrenComponents", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_GetChildrenComponents_Statics::SceneComponent_eventGetChildrenComponents_Parms), Z_Construct_UFunction_USceneComponent_GetChildrenComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_GetChildrenComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_GetChildrenComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_GetChildrenComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_GetChildrenComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_GetChildrenComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_GetComponentVelocity_Statics
	{
		struct SceneComponent_eventGetComponentVelocity_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneComponent_GetComponentVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventGetComponentVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_GetComponentVelocity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_GetComponentVelocity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_GetComponentVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/** \n\x09 * Get velocity of the component: either ComponentVelocity, or the velocity of the physics body if simulating physics.\n\x09 * @return Velocity of the component\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "Get velocity of the component: either ComponentVelocity, or the velocity of the physics body if simulating physics.\n@return Velocity of the component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_GetComponentVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "GetComponentVelocity", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_GetComponentVelocity_Statics::SceneComponent_eventGetComponentVelocity_Parms), Z_Construct_UFunction_USceneComponent_GetComponentVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_GetComponentVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_GetComponentVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_GetComponentVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_GetComponentVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_GetComponentVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_GetForwardVector_Statics
	{
		struct SceneComponent_eventGetForwardVector_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneComponent_GetForwardVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventGetForwardVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_GetForwardVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_GetForwardVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_GetForwardVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/** Get the forward (X) unit direction vector from this component, in world space.  */" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "Get the forward (X) unit direction vector from this component, in world space." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_GetForwardVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "GetForwardVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_GetForwardVector_Statics::SceneComponent_eventGetForwardVector_Parms), Z_Construct_UFunction_USceneComponent_GetForwardVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_GetForwardVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_GetForwardVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_GetForwardVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_GetForwardVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_GetForwardVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_GetNumChildrenComponents_Statics
	{
		struct SceneComponent_eventGetNumChildrenComponents_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USceneComponent_GetNumChildrenComponents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventGetNumChildrenComponents_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_GetNumChildrenComponents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_GetNumChildrenComponents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_GetNumChildrenComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components" },
		{ "Comment", "/** Gets the number of attached children components */" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "Gets the number of attached children components" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_GetNumChildrenComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "GetNumChildrenComponents", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_GetNumChildrenComponents_Statics::SceneComponent_eventGetNumChildrenComponents_Parms), Z_Construct_UFunction_USceneComponent_GetNumChildrenComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_GetNumChildrenComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_GetNumChildrenComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_GetNumChildrenComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_GetNumChildrenComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_GetNumChildrenComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_GetParentComponents_Statics
	{
		struct SceneComponent_eventGetParentComponents_Parms
		{
			TArray<USceneComponent*> Parents;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Parents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Parents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USceneComponent_GetParentComponents_Statics::NewProp_Parents_Inner = { "Parents", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_GetParentComponents_Statics::NewProp_Parents_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USceneComponent_GetParentComponents_Statics::NewProp_Parents = { "Parents", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventGetParentComponents_Parms, Parents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_GetParentComponents_Statics::NewProp_Parents_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_GetParentComponents_Statics::NewProp_Parents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_GetParentComponents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_GetParentComponents_Statics::NewProp_Parents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_GetParentComponents_Statics::NewProp_Parents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_GetParentComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components" },
		{ "Comment", "/** Gets all attachment parent components up to and including the root component */" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "Gets all attachment parent components up to and including the root component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_GetParentComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "GetParentComponents", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_GetParentComponents_Statics::SceneComponent_eventGetParentComponents_Parms), Z_Construct_UFunction_USceneComponent_GetParentComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_GetParentComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_GetParentComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_GetParentComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_GetParentComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_GetParentComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_GetPhysicsVolume_Statics
	{
		struct SceneComponent_eventGetPhysicsVolume_Parms
		{
			APhysicsVolume* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USceneComponent_GetPhysicsVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventGetPhysicsVolume_Parms, ReturnValue), Z_Construct_UClass_APhysicsVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_GetPhysicsVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_GetPhysicsVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_GetPhysicsVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "PhysicsVolume" },
		{ "Comment", "/** \n\x09 * Get the PhysicsVolume overlapping this component.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "Get the PhysicsVolume overlapping this component." },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_GetPhysicsVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "GetPhysicsVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_GetPhysicsVolume_Statics::SceneComponent_eventGetPhysicsVolume_Parms), Z_Construct_UFunction_USceneComponent_GetPhysicsVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_GetPhysicsVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_GetPhysicsVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_GetPhysicsVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_GetPhysicsVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_GetPhysicsVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_GetRelativeTransform_Statics
	{
		struct SceneComponent_eventGetRelativeTransform_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneComponent_GetRelativeTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventGetRelativeTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_GetRelativeTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_GetRelativeTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_GetRelativeTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/** Returns the transform of the component relative to its parent */" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "Returns the transform of the component relative to its parent" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_GetRelativeTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "GetRelativeTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_GetRelativeTransform_Statics::SceneComponent_eventGetRelativeTransform_Parms), Z_Construct_UFunction_USceneComponent_GetRelativeTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_GetRelativeTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_GetRelativeTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_GetRelativeTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_GetRelativeTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_GetRelativeTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_GetRightVector_Statics
	{
		struct SceneComponent_eventGetRightVector_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneComponent_GetRightVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventGetRightVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_GetRightVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_GetRightVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_GetRightVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/** Get the right (Y) unit direction vector from this component, in world space.  */" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "Get the right (Y) unit direction vector from this component, in world space." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_GetRightVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "GetRightVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_GetRightVector_Statics::SceneComponent_eventGetRightVector_Parms), Z_Construct_UFunction_USceneComponent_GetRightVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_GetRightVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_GetRightVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_GetRightVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_GetRightVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_GetRightVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_GetShouldUpdatePhysicsVolume_Statics
	{
		struct SceneComponent_eventGetShouldUpdatePhysicsVolume_Parms
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
	void Z_Construct_UFunction_USceneComponent_GetShouldUpdatePhysicsVolume_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SceneComponent_eventGetShouldUpdatePhysicsVolume_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_GetShouldUpdatePhysicsVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventGetShouldUpdatePhysicsVolume_Parms), &Z_Construct_UFunction_USceneComponent_GetShouldUpdatePhysicsVolume_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_GetShouldUpdatePhysicsVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_GetShouldUpdatePhysicsVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_GetShouldUpdatePhysicsVolume_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Comment", "/** Gets whether or not the cached PhysicsVolume this component overlaps should be updated when the component is moved.\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "Gets whether or not the cached PhysicsVolume this component overlaps should be updated when the component is moved." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_GetShouldUpdatePhysicsVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "GetShouldUpdatePhysicsVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_GetShouldUpdatePhysicsVolume_Statics::SceneComponent_eventGetShouldUpdatePhysicsVolume_Parms), Z_Construct_UFunction_USceneComponent_GetShouldUpdatePhysicsVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_GetShouldUpdatePhysicsVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_GetShouldUpdatePhysicsVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_GetShouldUpdatePhysicsVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_GetShouldUpdatePhysicsVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_GetShouldUpdatePhysicsVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_GetSocketLocation_Statics
	{
		struct SceneComponent_eventGetSocketLocation_Parms
		{
			FName InSocketName;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InSocketName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USceneComponent_GetSocketLocation_Statics::NewProp_InSocketName = { "InSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventGetSocketLocation_Parms, InSocketName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneComponent_GetSocketLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventGetSocketLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_GetSocketLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_GetSocketLocation_Statics::NewProp_InSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_GetSocketLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_GetSocketLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/** \n\x09 * Get world-space socket or bone location.\n\x09 * @param InSocketName Name of the socket or the bone to get the transform \n\x09 * @return Socket transform in world space if socket if found. Otherwise it will return component's transform in world space.\n\x09 */" },
		{ "Keywords", "Bone" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "Get world-space socket or bone location.\n@param InSocketName Name of the socket or the bone to get the transform\n@return Socket transform in world space if socket if found. Otherwise it will return component's transform in world space." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_GetSocketLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "GetSocketLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_GetSocketLocation_Statics::SceneComponent_eventGetSocketLocation_Parms), Z_Construct_UFunction_USceneComponent_GetSocketLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_GetSocketLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_GetSocketLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_GetSocketLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_GetSocketLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_GetSocketLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_GetSocketQuaternion_Statics
	{
		struct SceneComponent_eventGetSocketQuaternion_Parms
		{
			FName InSocketName;
			FQuat ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InSocketName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USceneComponent_GetSocketQuaternion_Statics::NewProp_InSocketName = { "InSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventGetSocketQuaternion_Parms, InSocketName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneComponent_GetSocketQuaternion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventGetSocketQuaternion_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_GetSocketQuaternion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_GetSocketQuaternion_Statics::NewProp_InSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_GetSocketQuaternion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_GetSocketQuaternion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/** \n\x09 * Get world-space socket or bone FQuat rotation.\n\x09 * @param InSocketName Name of the socket or the bone to get the transform \n\x09 * @return Socket transform in world space if socket if found. Otherwise it will return component's transform in world space.\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GetSocketRotation instead, Quat is not fully supported in blueprints." },
		{ "Keywords", "Bone" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "Get world-space socket or bone FQuat rotation.\n@param InSocketName Name of the socket or the bone to get the transform\n@return Socket transform in world space if socket if found. Otherwise it will return component's transform in world space." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_GetSocketQuaternion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "GetSocketQuaternion", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_GetSocketQuaternion_Statics::SceneComponent_eventGetSocketQuaternion_Parms), Z_Construct_UFunction_USceneComponent_GetSocketQuaternion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_GetSocketQuaternion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_GetSocketQuaternion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_GetSocketQuaternion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_GetSocketQuaternion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_GetSocketQuaternion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_GetSocketRotation_Statics
	{
		struct SceneComponent_eventGetSocketRotation_Parms
		{
			FName InSocketName;
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InSocketName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USceneComponent_GetSocketRotation_Statics::NewProp_InSocketName = { "InSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventGetSocketRotation_Parms, InSocketName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneComponent_GetSocketRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventGetSocketRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_GetSocketRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_GetSocketRotation_Statics::NewProp_InSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_GetSocketRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_GetSocketRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/** \n\x09 * Get world-space socket or bone  FRotator rotation.\n\x09 * @param InSocketName Name of the socket or the bone to get the transform \n\x09 * @return Socket transform in world space if socket if found. Otherwise it will return component's transform in world space.\n\x09 */" },
		{ "Keywords", "Bone" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "Get world-space socket or bone  FRotator rotation.\n@param InSocketName Name of the socket or the bone to get the transform\n@return Socket transform in world space if socket if found. Otherwise it will return component's transform in world space." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_GetSocketRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "GetSocketRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_GetSocketRotation_Statics::SceneComponent_eventGetSocketRotation_Parms), Z_Construct_UFunction_USceneComponent_GetSocketRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_GetSocketRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_GetSocketRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_GetSocketRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_GetSocketRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_GetSocketRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_GetSocketTransform_Statics
	{
		struct SceneComponent_eventGetSocketTransform_Parms
		{
			FName InSocketName;
			TEnumAsByte<ERelativeTransformSpace> TransformSpace;
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InSocketName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TransformSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USceneComponent_GetSocketTransform_Statics::NewProp_InSocketName = { "InSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventGetSocketTransform_Parms, InSocketName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USceneComponent_GetSocketTransform_Statics::NewProp_TransformSpace = { "TransformSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventGetSocketTransform_Parms, TransformSpace), Z_Construct_UEnum_Engine_ERelativeTransformSpace, METADATA_PARAMS(nullptr, 0) }; // 3685529446
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneComponent_GetSocketTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventGetSocketTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_GetSocketTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_GetSocketTransform_Statics::NewProp_InSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_GetSocketTransform_Statics::NewProp_TransformSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_GetSocketTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_GetSocketTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/** \n\x09 * Get world-space socket transform.\n\x09 * @param InSocketName Name of the socket or the bone to get the transform \n\x09 * @return Socket transform in world space if socket if found. Otherwise it will return component's transform in world space.\n\x09 */" },
		{ "CPP_Default_TransformSpace", "RTS_World" },
		{ "Keywords", "Bone" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "Get world-space socket transform.\n@param InSocketName Name of the socket or the bone to get the transform\n@return Socket transform in world space if socket if found. Otherwise it will return component's transform in world space." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_GetSocketTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "GetSocketTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_GetSocketTransform_Statics::SceneComponent_eventGetSocketTransform_Parms), Z_Construct_UFunction_USceneComponent_GetSocketTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_GetSocketTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_GetSocketTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_GetSocketTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_GetSocketTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_GetSocketTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_GetUpVector_Statics
	{
		struct SceneComponent_eventGetUpVector_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneComponent_GetUpVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventGetUpVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_GetUpVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_GetUpVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_GetUpVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/** Get the up (Z) unit direction vector from this component, in world space.  */" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "Get the up (Z) unit direction vector from this component, in world space." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_GetUpVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "GetUpVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_GetUpVector_Statics::SceneComponent_eventGetUpVector_Parms), Z_Construct_UFunction_USceneComponent_GetUpVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_GetUpVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_GetUpVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_GetUpVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_GetUpVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_GetUpVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_IsAnySimulatingPhysics_Statics
	{
		struct SceneComponent_eventIsAnySimulatingPhysics_Parms
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
	void Z_Construct_UFunction_USceneComponent_IsAnySimulatingPhysics_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SceneComponent_eventIsAnySimulatingPhysics_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_IsAnySimulatingPhysics_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventIsAnySimulatingPhysics_Parms), &Z_Construct_UFunction_USceneComponent_IsAnySimulatingPhysics_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_IsAnySimulatingPhysics_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_IsAnySimulatingPhysics_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_IsAnySimulatingPhysics_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Returns whether the specified body is currently using physics simulation */" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "Returns whether the specified body is currently using physics simulation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_IsAnySimulatingPhysics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "IsAnySimulatingPhysics", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_IsAnySimulatingPhysics_Statics::SceneComponent_eventIsAnySimulatingPhysics_Parms), Z_Construct_UFunction_USceneComponent_IsAnySimulatingPhysics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_IsAnySimulatingPhysics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_IsAnySimulatingPhysics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_IsAnySimulatingPhysics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_IsAnySimulatingPhysics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_IsAnySimulatingPhysics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_IsSimulatingPhysics_Statics
	{
		struct SceneComponent_eventIsSimulatingPhysics_Parms
		{
			FName BoneName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USceneComponent_IsSimulatingPhysics_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventIsSimulatingPhysics_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USceneComponent_IsSimulatingPhysics_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SceneComponent_eventIsSimulatingPhysics_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_IsSimulatingPhysics_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventIsSimulatingPhysics_Parms), &Z_Construct_UFunction_USceneComponent_IsSimulatingPhysics_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_IsSimulatingPhysics_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_IsSimulatingPhysics_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_IsSimulatingPhysics_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_IsSimulatingPhysics_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Returns whether the specified body is currently using physics simulation */" },
		{ "CPP_Default_BoneName", "None" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "Returns whether the specified body is currently using physics simulation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_IsSimulatingPhysics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "IsSimulatingPhysics", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_IsSimulatingPhysics_Statics::SceneComponent_eventIsSimulatingPhysics_Parms), Z_Construct_UFunction_USceneComponent_IsSimulatingPhysics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_IsSimulatingPhysics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_IsSimulatingPhysics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_IsSimulatingPhysics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_IsSimulatingPhysics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_IsSimulatingPhysics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_IsVisible_Statics
	{
		struct SceneComponent_eventIsVisible_Parms
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
	void Z_Construct_UFunction_USceneComponent_IsVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SceneComponent_eventIsVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_IsVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventIsVisible_Parms), &Z_Construct_UFunction_USceneComponent_IsVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_IsVisible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_IsVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_IsVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Returns true if this component is visible in the current context */" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "Returns true if this component is visible in the current context" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_IsVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "IsVisible", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_IsVisible_Statics::SceneComponent_eventIsVisible_Parms), Z_Construct_UFunction_USceneComponent_IsVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_IsVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_IsVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_IsVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_IsVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_IsVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_K2_AddLocalOffset_Statics
	{
		struct SceneComponent_eventK2_AddLocalOffset_Parms
		{
			FVector DeltaLocation;
			bool bSweep;
			FHitResult SweepHitResult;
			bool bTeleport;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeltaLocation;
		static void NewProp_bSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSweep;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
		static void NewProp_bTeleport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneComponent_K2_AddLocalOffset_Statics::NewProp_DeltaLocation = { "DeltaLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventK2_AddLocalOffset_Parms, DeltaLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USceneComponent_K2_AddLocalOffset_Statics::NewProp_bSweep_SetBit(void* Obj)
	{
		((SceneComponent_eventK2_AddLocalOffset_Parms*)Obj)->bSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_K2_AddLocalOffset_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventK2_AddLocalOffset_Parms), &Z_Construct_UFunction_USceneComponent_K2_AddLocalOffset_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneComponent_K2_AddLocalOffset_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventK2_AddLocalOffset_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
	void Z_Construct_UFunction_USceneComponent_K2_AddLocalOffset_Statics::NewProp_bTeleport_SetBit(void* Obj)
	{
		((SceneComponent_eventK2_AddLocalOffset_Parms*)Obj)->bTeleport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_K2_AddLocalOffset_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventK2_AddLocalOffset_Parms), &Z_Construct_UFunction_USceneComponent_K2_AddLocalOffset_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_K2_AddLocalOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_AddLocalOffset_Statics::NewProp_DeltaLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_AddLocalOffset_Statics::NewProp_bSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_AddLocalOffset_Statics::NewProp_SweepHitResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_AddLocalOffset_Statics::NewProp_bTeleport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_K2_AddLocalOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/**\n\x09 * Adds a delta to the location of the component in its local reference frame\n\x09 * @param DeltaLocation\x09\x09""Change in location of the component in its local reference frame.\n\x09 * @param SweepHitResult\x09Hit result from any impact if sweep is true.\n\x09 * @param bSweep\x09\x09\x09Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n\x09 *\x09\x09\x09\x09\x09\x09\x09Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n\x09 * @param bTeleport\x09\x09\x09Whether we teleport the physics state (if physics collision is enabled for this object).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If CCD is on and not teleporting, this will affect objects along the entire sweep volume.\n\x09 */" },
		{ "DisplayName", "Add Local Offset" },
		{ "Keywords", "location position" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ScriptName", "AddLocalOffset" },
		{ "ToolTip", "Adds a delta to the location of the component in its local reference frame\n@param DeltaLocation         Change in location of the component in its local reference frame.\n@param SweepHitResult        Hit result from any impact if sweep is true.\n@param bSweep                        Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n                                                     Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n@param bTeleport                     Whether we teleport the physics state (if physics collision is enabled for this object).\n                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n                                                     If CCD is on and not teleporting, this will affect objects along the entire sweep volume." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_K2_AddLocalOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "K2_AddLocalOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_K2_AddLocalOffset_Statics::SceneComponent_eventK2_AddLocalOffset_Parms), Z_Construct_UFunction_USceneComponent_K2_AddLocalOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_AddLocalOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_K2_AddLocalOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_AddLocalOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_K2_AddLocalOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_K2_AddLocalOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_K2_AddLocalRotation_Statics
	{
		struct SceneComponent_eventK2_AddLocalRotation_Parms
		{
			FRotator DeltaRotation;
			bool bSweep;
			FHitResult SweepHitResult;
			bool bTeleport;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeltaRotation;
		static void NewProp_bSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSweep;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
		static void NewProp_bTeleport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneComponent_K2_AddLocalRotation_Statics::NewProp_DeltaRotation = { "DeltaRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventK2_AddLocalRotation_Parms, DeltaRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USceneComponent_K2_AddLocalRotation_Statics::NewProp_bSweep_SetBit(void* Obj)
	{
		((SceneComponent_eventK2_AddLocalRotation_Parms*)Obj)->bSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_K2_AddLocalRotation_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventK2_AddLocalRotation_Parms), &Z_Construct_UFunction_USceneComponent_K2_AddLocalRotation_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneComponent_K2_AddLocalRotation_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010048000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventK2_AddLocalRotation_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
	void Z_Construct_UFunction_USceneComponent_K2_AddLocalRotation_Statics::NewProp_bTeleport_SetBit(void* Obj)
	{
		((SceneComponent_eventK2_AddLocalRotation_Parms*)Obj)->bTeleport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_K2_AddLocalRotation_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventK2_AddLocalRotation_Parms), &Z_Construct_UFunction_USceneComponent_K2_AddLocalRotation_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_K2_AddLocalRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_AddLocalRotation_Statics::NewProp_DeltaRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_AddLocalRotation_Statics::NewProp_bSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_AddLocalRotation_Statics::NewProp_SweepHitResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_AddLocalRotation_Statics::NewProp_bTeleport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_K2_AddLocalRotation_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bSweep,SweepHitResult,bTeleport" },
		{ "Category", "Transformation" },
		{ "Comment", "/**\n\x09 * Adds a delta to the rotation of the component in its local reference frame\n\x09 * @param DeltaRotation\x09\x09""Change in rotation of the component in its local reference frame.\n\x09 * @param SweepHitResult\x09Hit result from any impact if sweep is true.\n\x09 * @param bSweep\x09\x09\x09Whether we sweep to the destination (currently not supported for rotation).\n\x09 * @param bTeleport\x09\x09\x09Whether we teleport the physics state (if physics collision is enabled for this object).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n\x09 */" },
		{ "DisplayName", "Add Local Rotation" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ScriptName", "AddLocalRotation" },
		{ "ToolTip", "Adds a delta to the rotation of the component in its local reference frame\n@param DeltaRotation         Change in rotation of the component in its local reference frame.\n@param SweepHitResult        Hit result from any impact if sweep is true.\n@param bSweep                        Whether we sweep to the destination (currently not supported for rotation).\n@param bTeleport                     Whether we teleport the physics state (if physics collision is enabled for this object).\n                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_K2_AddLocalRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "K2_AddLocalRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_K2_AddLocalRotation_Statics::SceneComponent_eventK2_AddLocalRotation_Parms), Z_Construct_UFunction_USceneComponent_K2_AddLocalRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_AddLocalRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_K2_AddLocalRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_AddLocalRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_K2_AddLocalRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_K2_AddLocalRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_K2_AddLocalTransform_Statics
	{
		struct SceneComponent_eventK2_AddLocalTransform_Parms
		{
			FTransform DeltaTransform;
			bool bSweep;
			FHitResult SweepHitResult;
			bool bTeleport;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeltaTransform;
		static void NewProp_bSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSweep;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
		static void NewProp_bTeleport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_K2_AddLocalTransform_Statics::NewProp_DeltaTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneComponent_K2_AddLocalTransform_Statics::NewProp_DeltaTransform = { "DeltaTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventK2_AddLocalTransform_Parms, DeltaTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_K2_AddLocalTransform_Statics::NewProp_DeltaTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_AddLocalTransform_Statics::NewProp_DeltaTransform_MetaData)) };
	void Z_Construct_UFunction_USceneComponent_K2_AddLocalTransform_Statics::NewProp_bSweep_SetBit(void* Obj)
	{
		((SceneComponent_eventK2_AddLocalTransform_Parms*)Obj)->bSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_K2_AddLocalTransform_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventK2_AddLocalTransform_Parms), &Z_Construct_UFunction_USceneComponent_K2_AddLocalTransform_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneComponent_K2_AddLocalTransform_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventK2_AddLocalTransform_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
	void Z_Construct_UFunction_USceneComponent_K2_AddLocalTransform_Statics::NewProp_bTeleport_SetBit(void* Obj)
	{
		((SceneComponent_eventK2_AddLocalTransform_Parms*)Obj)->bTeleport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_K2_AddLocalTransform_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventK2_AddLocalTransform_Parms), &Z_Construct_UFunction_USceneComponent_K2_AddLocalTransform_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_K2_AddLocalTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_AddLocalTransform_Statics::NewProp_DeltaTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_AddLocalTransform_Statics::NewProp_bSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_AddLocalTransform_Statics::NewProp_SweepHitResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_AddLocalTransform_Statics::NewProp_bTeleport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_K2_AddLocalTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/**\n\x09 * Adds a delta to the transform of the component in its local reference frame. Scale is unchanged.\n\x09 * @param DeltaTransform\x09""Change in transform of the component in its local reference frame. Scale is unchanged.\n\x09 * @param SweepHitResult\x09Hit result from any impact if sweep is true.\n\x09 * @param bSweep\x09\x09\x09Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n\x09 *\x09\x09\x09\x09\x09\x09\x09Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n\x09 * @param bTeleport\x09\x09\x09Whether we teleport the physics state (if physics collision is enabled for this object).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If CCD is on and not teleporting, this will affect objects along the entire sweep volume.\n\x09 */" },
		{ "DisplayName", "Add Local Transform" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ScriptName", "AddLocalTransform" },
		{ "ToolTip", "Adds a delta to the transform of the component in its local reference frame. Scale is unchanged.\n@param DeltaTransform        Change in transform of the component in its local reference frame. Scale is unchanged.\n@param SweepHitResult        Hit result from any impact if sweep is true.\n@param bSweep                        Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n                                                     Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n@param bTeleport                     Whether we teleport the physics state (if physics collision is enabled for this object).\n                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n                                                     If CCD is on and not teleporting, this will affect objects along the entire sweep volume." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_K2_AddLocalTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "K2_AddLocalTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_K2_AddLocalTransform_Statics::SceneComponent_eventK2_AddLocalTransform_Parms), Z_Construct_UFunction_USceneComponent_K2_AddLocalTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_AddLocalTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_K2_AddLocalTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_AddLocalTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_K2_AddLocalTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_K2_AddLocalTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_K2_AddRelativeLocation_Statics
	{
		struct SceneComponent_eventK2_AddRelativeLocation_Parms
		{
			FVector DeltaLocation;
			bool bSweep;
			FHitResult SweepHitResult;
			bool bTeleport;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeltaLocation;
		static void NewProp_bSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSweep;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
		static void NewProp_bTeleport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneComponent_K2_AddRelativeLocation_Statics::NewProp_DeltaLocation = { "DeltaLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventK2_AddRelativeLocation_Parms, DeltaLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USceneComponent_K2_AddRelativeLocation_Statics::NewProp_bSweep_SetBit(void* Obj)
	{
		((SceneComponent_eventK2_AddRelativeLocation_Parms*)Obj)->bSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_K2_AddRelativeLocation_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventK2_AddRelativeLocation_Parms), &Z_Construct_UFunction_USceneComponent_K2_AddRelativeLocation_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneComponent_K2_AddRelativeLocation_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventK2_AddRelativeLocation_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
	void Z_Construct_UFunction_USceneComponent_K2_AddRelativeLocation_Statics::NewProp_bTeleport_SetBit(void* Obj)
	{
		((SceneComponent_eventK2_AddRelativeLocation_Parms*)Obj)->bTeleport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_K2_AddRelativeLocation_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventK2_AddRelativeLocation_Parms), &Z_Construct_UFunction_USceneComponent_K2_AddRelativeLocation_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_K2_AddRelativeLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_AddRelativeLocation_Statics::NewProp_DeltaLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_AddRelativeLocation_Statics::NewProp_bSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_AddRelativeLocation_Statics::NewProp_SweepHitResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_AddRelativeLocation_Statics::NewProp_bTeleport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_K2_AddRelativeLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/**\n\x09 * Adds a delta to the translation of the component relative to its parent\n\x09 * @param DeltaLocation\x09\x09""Change in location of the component relative to its parent\n\x09 * @param SweepHitResult\x09Hit result from any impact if sweep is true.\n\x09 * @param bSweep\x09\x09\x09Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n\x09 *\x09\x09\x09\x09\x09\x09\x09Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n\x09 * @param bTeleport\x09\x09\x09Whether we teleport the physics state (if physics collision is enabled for this object).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If CCD is on and not teleporting, this will affect objects along the entire sweep volume.\n\x09 */" },
		{ "DisplayName", "Add Relative Location" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ScriptName", "AddRelativeLocation" },
		{ "ToolTip", "Adds a delta to the translation of the component relative to its parent\n@param DeltaLocation         Change in location of the component relative to its parent\n@param SweepHitResult        Hit result from any impact if sweep is true.\n@param bSweep                        Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n                                                     Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n@param bTeleport                     Whether we teleport the physics state (if physics collision is enabled for this object).\n                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n                                                     If CCD is on and not teleporting, this will affect objects along the entire sweep volume." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_K2_AddRelativeLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "K2_AddRelativeLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_K2_AddRelativeLocation_Statics::SceneComponent_eventK2_AddRelativeLocation_Parms), Z_Construct_UFunction_USceneComponent_K2_AddRelativeLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_AddRelativeLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_K2_AddRelativeLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_AddRelativeLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_K2_AddRelativeLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_K2_AddRelativeLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_K2_AddRelativeRotation_Statics
	{
		struct SceneComponent_eventK2_AddRelativeRotation_Parms
		{
			FRotator DeltaRotation;
			bool bSweep;
			FHitResult SweepHitResult;
			bool bTeleport;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeltaRotation;
		static void NewProp_bSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSweep;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
		static void NewProp_bTeleport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneComponent_K2_AddRelativeRotation_Statics::NewProp_DeltaRotation = { "DeltaRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventK2_AddRelativeRotation_Parms, DeltaRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USceneComponent_K2_AddRelativeRotation_Statics::NewProp_bSweep_SetBit(void* Obj)
	{
		((SceneComponent_eventK2_AddRelativeRotation_Parms*)Obj)->bSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_K2_AddRelativeRotation_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventK2_AddRelativeRotation_Parms), &Z_Construct_UFunction_USceneComponent_K2_AddRelativeRotation_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneComponent_K2_AddRelativeRotation_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010048000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventK2_AddRelativeRotation_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
	void Z_Construct_UFunction_USceneComponent_K2_AddRelativeRotation_Statics::NewProp_bTeleport_SetBit(void* Obj)
	{
		((SceneComponent_eventK2_AddRelativeRotation_Parms*)Obj)->bTeleport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_K2_AddRelativeRotation_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventK2_AddRelativeRotation_Parms), &Z_Construct_UFunction_USceneComponent_K2_AddRelativeRotation_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_K2_AddRelativeRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_AddRelativeRotation_Statics::NewProp_DeltaRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_AddRelativeRotation_Statics::NewProp_bSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_AddRelativeRotation_Statics::NewProp_SweepHitResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_AddRelativeRotation_Statics::NewProp_bTeleport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_K2_AddRelativeRotation_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bSweep,SweepHitResult,bTeleport" },
		{ "Category", "Transformation" },
		{ "Comment", "/**\n\x09 * Adds a delta the rotation of the component relative to its parent\n\x09 * @param DeltaRotation\x09\x09""Change in rotation of the component relative to is parent.\n\x09 * @param SweepHitResult\x09Hit result from any impact if sweep is true.\n\x09 * @param bSweep\x09\x09\x09Whether we sweep to the destination (currently not supported for rotation).\n\x09 * @param bTeleport\x09\x09\x09Whether we teleport the physics state (if physics collision is enabled for this object).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n\x09 */" },
		{ "DisplayName", "Add Relative Rotation" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ScriptName", "AddRelativeRotation" },
		{ "ToolTip", "Adds a delta the rotation of the component relative to its parent\n@param DeltaRotation         Change in rotation of the component relative to is parent.\n@param SweepHitResult        Hit result from any impact if sweep is true.\n@param bSweep                        Whether we sweep to the destination (currently not supported for rotation).\n@param bTeleport                     Whether we teleport the physics state (if physics collision is enabled for this object).\n                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_K2_AddRelativeRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "K2_AddRelativeRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_K2_AddRelativeRotation_Statics::SceneComponent_eventK2_AddRelativeRotation_Parms), Z_Construct_UFunction_USceneComponent_K2_AddRelativeRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_AddRelativeRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_K2_AddRelativeRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_AddRelativeRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_K2_AddRelativeRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_K2_AddRelativeRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_K2_AddWorldOffset_Statics
	{
		struct SceneComponent_eventK2_AddWorldOffset_Parms
		{
			FVector DeltaLocation;
			bool bSweep;
			FHitResult SweepHitResult;
			bool bTeleport;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeltaLocation;
		static void NewProp_bSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSweep;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
		static void NewProp_bTeleport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneComponent_K2_AddWorldOffset_Statics::NewProp_DeltaLocation = { "DeltaLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventK2_AddWorldOffset_Parms, DeltaLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USceneComponent_K2_AddWorldOffset_Statics::NewProp_bSweep_SetBit(void* Obj)
	{
		((SceneComponent_eventK2_AddWorldOffset_Parms*)Obj)->bSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_K2_AddWorldOffset_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventK2_AddWorldOffset_Parms), &Z_Construct_UFunction_USceneComponent_K2_AddWorldOffset_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneComponent_K2_AddWorldOffset_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventK2_AddWorldOffset_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
	void Z_Construct_UFunction_USceneComponent_K2_AddWorldOffset_Statics::NewProp_bTeleport_SetBit(void* Obj)
	{
		((SceneComponent_eventK2_AddWorldOffset_Parms*)Obj)->bTeleport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_K2_AddWorldOffset_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventK2_AddWorldOffset_Parms), &Z_Construct_UFunction_USceneComponent_K2_AddWorldOffset_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_K2_AddWorldOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_AddWorldOffset_Statics::NewProp_DeltaLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_AddWorldOffset_Statics::NewProp_bSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_AddWorldOffset_Statics::NewProp_SweepHitResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_AddWorldOffset_Statics::NewProp_bTeleport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_K2_AddWorldOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/**\n\x09 * Adds a delta to the location of the component in world space.\n\x09 * @param DeltaLocation\x09\x09""Change in location in world space for the component.\n\x09 * @param SweepHitResult\x09Hit result from any impact if sweep is true.\n\x09 * @param bSweep\x09\x09\x09Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n\x09 *\x09\x09\x09\x09\x09\x09\x09Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n\x09 * @param bTeleport\x09\x09\x09Whether we teleport the physics state (if physics collision is enabled for this object).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If CCD is on and not teleporting, this will affect objects along the entire sweep volume.\n\x09 */" },
		{ "DisplayName", "Add World Offset" },
		{ "Keywords", "location position" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ScriptName", "AddWorldOffset" },
		{ "ToolTip", "Adds a delta to the location of the component in world space.\n@param DeltaLocation         Change in location in world space for the component.\n@param SweepHitResult        Hit result from any impact if sweep is true.\n@param bSweep                        Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n                                                     Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n@param bTeleport                     Whether we teleport the physics state (if physics collision is enabled for this object).\n                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n                                                     If CCD is on and not teleporting, this will affect objects along the entire sweep volume." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_K2_AddWorldOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "K2_AddWorldOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_K2_AddWorldOffset_Statics::SceneComponent_eventK2_AddWorldOffset_Parms), Z_Construct_UFunction_USceneComponent_K2_AddWorldOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_AddWorldOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_K2_AddWorldOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_AddWorldOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_K2_AddWorldOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_K2_AddWorldOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_K2_AddWorldRotation_Statics
	{
		struct SceneComponent_eventK2_AddWorldRotation_Parms
		{
			FRotator DeltaRotation;
			bool bSweep;
			FHitResult SweepHitResult;
			bool bTeleport;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeltaRotation;
		static void NewProp_bSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSweep;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
		static void NewProp_bTeleport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneComponent_K2_AddWorldRotation_Statics::NewProp_DeltaRotation = { "DeltaRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventK2_AddWorldRotation_Parms, DeltaRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USceneComponent_K2_AddWorldRotation_Statics::NewProp_bSweep_SetBit(void* Obj)
	{
		((SceneComponent_eventK2_AddWorldRotation_Parms*)Obj)->bSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_K2_AddWorldRotation_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventK2_AddWorldRotation_Parms), &Z_Construct_UFunction_USceneComponent_K2_AddWorldRotation_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneComponent_K2_AddWorldRotation_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010048000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventK2_AddWorldRotation_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
	void Z_Construct_UFunction_USceneComponent_K2_AddWorldRotation_Statics::NewProp_bTeleport_SetBit(void* Obj)
	{
		((SceneComponent_eventK2_AddWorldRotation_Parms*)Obj)->bTeleport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_K2_AddWorldRotation_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventK2_AddWorldRotation_Parms), &Z_Construct_UFunction_USceneComponent_K2_AddWorldRotation_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_K2_AddWorldRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_AddWorldRotation_Statics::NewProp_DeltaRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_AddWorldRotation_Statics::NewProp_bSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_AddWorldRotation_Statics::NewProp_SweepHitResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_AddWorldRotation_Statics::NewProp_bTeleport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_K2_AddWorldRotation_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bSweep,SweepHitResult,bTeleport" },
		{ "Category", "Transformation" },
		{ "Comment", "/**\n\x09 * Adds a delta to the rotation of the component in world space.\n\x09 * @param DeltaRotation\x09\x09""Change in rotation in world space for the component.\n\x09 * @param SweepHitResult\x09Hit result from any impact if sweep is true.\n\x09 * @param bSweep\x09\x09\x09Whether we sweep to the destination (currently not supported for rotation).\n\x09 * @param bTeleport\x09\x09\x09Whether we teleport the physics state (if physics collision is enabled for this object).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If CCD is on and not teleporting, this will affect objects along the entire sweep volume.\n\x09 */" },
		{ "DisplayName", "Add World Rotation" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ScriptName", "AddWorldRotation" },
		{ "ToolTip", "Adds a delta to the rotation of the component in world space.\n@param DeltaRotation         Change in rotation in world space for the component.\n@param SweepHitResult        Hit result from any impact if sweep is true.\n@param bSweep                        Whether we sweep to the destination (currently not supported for rotation).\n@param bTeleport                     Whether we teleport the physics state (if physics collision is enabled for this object).\n                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n                                                     If CCD is on and not teleporting, this will affect objects along the entire sweep volume." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_K2_AddWorldRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "K2_AddWorldRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_K2_AddWorldRotation_Statics::SceneComponent_eventK2_AddWorldRotation_Parms), Z_Construct_UFunction_USceneComponent_K2_AddWorldRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_AddWorldRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_K2_AddWorldRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_AddWorldRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_K2_AddWorldRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_K2_AddWorldRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_K2_AddWorldTransform_Statics
	{
		struct SceneComponent_eventK2_AddWorldTransform_Parms
		{
			FTransform DeltaTransform;
			bool bSweep;
			FHitResult SweepHitResult;
			bool bTeleport;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeltaTransform;
		static void NewProp_bSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSweep;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
		static void NewProp_bTeleport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_K2_AddWorldTransform_Statics::NewProp_DeltaTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneComponent_K2_AddWorldTransform_Statics::NewProp_DeltaTransform = { "DeltaTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventK2_AddWorldTransform_Parms, DeltaTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_K2_AddWorldTransform_Statics::NewProp_DeltaTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_AddWorldTransform_Statics::NewProp_DeltaTransform_MetaData)) };
	void Z_Construct_UFunction_USceneComponent_K2_AddWorldTransform_Statics::NewProp_bSweep_SetBit(void* Obj)
	{
		((SceneComponent_eventK2_AddWorldTransform_Parms*)Obj)->bSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_K2_AddWorldTransform_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventK2_AddWorldTransform_Parms), &Z_Construct_UFunction_USceneComponent_K2_AddWorldTransform_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneComponent_K2_AddWorldTransform_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventK2_AddWorldTransform_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
	void Z_Construct_UFunction_USceneComponent_K2_AddWorldTransform_Statics::NewProp_bTeleport_SetBit(void* Obj)
	{
		((SceneComponent_eventK2_AddWorldTransform_Parms*)Obj)->bTeleport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_K2_AddWorldTransform_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventK2_AddWorldTransform_Parms), &Z_Construct_UFunction_USceneComponent_K2_AddWorldTransform_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_K2_AddWorldTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_AddWorldTransform_Statics::NewProp_DeltaTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_AddWorldTransform_Statics::NewProp_bSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_AddWorldTransform_Statics::NewProp_SweepHitResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_AddWorldTransform_Statics::NewProp_bTeleport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_K2_AddWorldTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/**\n\x09 * Adds a delta to the transform of the component in world space. Ignores scale and sets it to (1,1,1).\n\x09 * @param DeltaTransform\x09""Change in transform in world space for the component. Scale is ignored.\n\x09 * @param SweepHitResult\x09Hit result from any impact if sweep is true.\n\x09 * @param bSweep\x09\x09\x09Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n\x09 *\x09\x09\x09\x09\x09\x09\x09Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n\x09 * @param bTeleport\x09\x09\x09Whether we teleport the physics state (if physics collision is enabled for this object).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If CCD is on and not teleporting, this will affect objects along the entire sweep volume.\n\x09 */" },
		{ "DisplayName", "Add World Transform" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ScriptName", "AddWorldTransform" },
		{ "ToolTip", "Adds a delta to the transform of the component in world space. Ignores scale and sets it to (1,1,1).\n@param DeltaTransform        Change in transform in world space for the component. Scale is ignored.\n@param SweepHitResult        Hit result from any impact if sweep is true.\n@param bSweep                        Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n                                                     Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n@param bTeleport                     Whether we teleport the physics state (if physics collision is enabled for this object).\n                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n                                                     If CCD is on and not teleporting, this will affect objects along the entire sweep volume." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_K2_AddWorldTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "K2_AddWorldTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_K2_AddWorldTransform_Statics::SceneComponent_eventK2_AddWorldTransform_Parms), Z_Construct_UFunction_USceneComponent_K2_AddWorldTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_AddWorldTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_K2_AddWorldTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_AddWorldTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_K2_AddWorldTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_K2_AddWorldTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_K2_AddWorldTransformKeepScale_Statics
	{
		struct SceneComponent_eventK2_AddWorldTransformKeepScale_Parms
		{
			FTransform DeltaTransform;
			bool bSweep;
			FHitResult SweepHitResult;
			bool bTeleport;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeltaTransform;
		static void NewProp_bSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSweep;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
		static void NewProp_bTeleport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_K2_AddWorldTransformKeepScale_Statics::NewProp_DeltaTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneComponent_K2_AddWorldTransformKeepScale_Statics::NewProp_DeltaTransform = { "DeltaTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventK2_AddWorldTransformKeepScale_Parms, DeltaTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_K2_AddWorldTransformKeepScale_Statics::NewProp_DeltaTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_AddWorldTransformKeepScale_Statics::NewProp_DeltaTransform_MetaData)) };
	void Z_Construct_UFunction_USceneComponent_K2_AddWorldTransformKeepScale_Statics::NewProp_bSweep_SetBit(void* Obj)
	{
		((SceneComponent_eventK2_AddWorldTransformKeepScale_Parms*)Obj)->bSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_K2_AddWorldTransformKeepScale_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventK2_AddWorldTransformKeepScale_Parms), &Z_Construct_UFunction_USceneComponent_K2_AddWorldTransformKeepScale_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneComponent_K2_AddWorldTransformKeepScale_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventK2_AddWorldTransformKeepScale_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
	void Z_Construct_UFunction_USceneComponent_K2_AddWorldTransformKeepScale_Statics::NewProp_bTeleport_SetBit(void* Obj)
	{
		((SceneComponent_eventK2_AddWorldTransformKeepScale_Parms*)Obj)->bTeleport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_K2_AddWorldTransformKeepScale_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventK2_AddWorldTransformKeepScale_Parms), &Z_Construct_UFunction_USceneComponent_K2_AddWorldTransformKeepScale_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_K2_AddWorldTransformKeepScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_AddWorldTransformKeepScale_Statics::NewProp_DeltaTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_AddWorldTransformKeepScale_Statics::NewProp_bSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_AddWorldTransformKeepScale_Statics::NewProp_SweepHitResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_AddWorldTransformKeepScale_Statics::NewProp_bTeleport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_K2_AddWorldTransformKeepScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/**\n\x09 * Adds a delta to the transform of the component in world space. Scale is unchanged.\n\x09 * @param DeltaTransform\x09""Change in transform in world space for the component. Scale is ignored since we preserve the original scale.\n\x09 * @param SweepHitResult\x09Hit result from any impact if sweep is true.\n\x09 * @param bSweep\x09\x09\x09Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n\x09 *\x09\x09\x09\x09\x09\x09\x09Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n\x09 * @param bTeleport\x09\x09\x09Whether we teleport the physics state (if physics collision is enabled for this object).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If CCD is on and not teleporting, this will affect objects along the entire sweep volume.\n\x09 */" },
		{ "DisplayName", "Add World Transform Keep Scale" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ScriptName", "AddWorldTransformKeepScale" },
		{ "ToolTip", "Adds a delta to the transform of the component in world space. Scale is unchanged.\n@param DeltaTransform        Change in transform in world space for the component. Scale is ignored since we preserve the original scale.\n@param SweepHitResult        Hit result from any impact if sweep is true.\n@param bSweep                        Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n                                                     Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n@param bTeleport                     Whether we teleport the physics state (if physics collision is enabled for this object).\n                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n                                                     If CCD is on and not teleporting, this will affect objects along the entire sweep volume." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_K2_AddWorldTransformKeepScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "K2_AddWorldTransformKeepScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_K2_AddWorldTransformKeepScale_Statics::SceneComponent_eventK2_AddWorldTransformKeepScale_Parms), Z_Construct_UFunction_USceneComponent_K2_AddWorldTransformKeepScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_AddWorldTransformKeepScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_K2_AddWorldTransformKeepScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_AddWorldTransformKeepScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_K2_AddWorldTransformKeepScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_K2_AddWorldTransformKeepScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_K2_AttachTo_Statics
	{
		struct SceneComponent_eventK2_AttachTo_Parms
		{
			USceneComponent* InParent;
			FName InSocketName;
			TEnumAsByte<EAttachLocation::Type> AttachType;
			bool bWeldSimulatedBodies;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InParent;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InSocketName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttachType;
		static void NewProp_bWeldSimulatedBodies_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWeldSimulatedBodies;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_K2_AttachTo_Statics::NewProp_InParent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USceneComponent_K2_AttachTo_Statics::NewProp_InParent = { "InParent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventK2_AttachTo_Parms, InParent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_K2_AttachTo_Statics::NewProp_InParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_AttachTo_Statics::NewProp_InParent_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USceneComponent_K2_AttachTo_Statics::NewProp_InSocketName = { "InSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventK2_AttachTo_Parms, InSocketName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USceneComponent_K2_AttachTo_Statics::NewProp_AttachType = { "AttachType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventK2_AttachTo_Parms, AttachType), Z_Construct_UEnum_Engine_EAttachLocation, METADATA_PARAMS(nullptr, 0) }; // 1954919674
	void Z_Construct_UFunction_USceneComponent_K2_AttachTo_Statics::NewProp_bWeldSimulatedBodies_SetBit(void* Obj)
	{
		((SceneComponent_eventK2_AttachTo_Parms*)Obj)->bWeldSimulatedBodies = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_K2_AttachTo_Statics::NewProp_bWeldSimulatedBodies = { "bWeldSimulatedBodies", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventK2_AttachTo_Parms), &Z_Construct_UFunction_USceneComponent_K2_AttachTo_Statics::NewProp_bWeldSimulatedBodies_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USceneComponent_K2_AttachTo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SceneComponent_eventK2_AttachTo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_K2_AttachTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventK2_AttachTo_Parms), &Z_Construct_UFunction_USceneComponent_K2_AttachTo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_K2_AttachTo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_AttachTo_Statics::NewProp_InParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_AttachTo_Statics::NewProp_InSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_AttachTo_Statics::NewProp_AttachType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_AttachTo_Statics::NewProp_bWeldSimulatedBodies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_AttachTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_K2_AttachTo_Statics::Function_MetaDataParams[] = {
		{ "AttachType", "KeepRelativeOffset" },
		{ "Category", "Transformation" },
		{ "CPP_Default_AttachType", "KeepRelativeOffset" },
		{ "CPP_Default_bWeldSimulatedBodies", "true" },
		{ "CPP_Default_InSocketName", "None" },
		{ "DeprecationMessage", "OVERRIDE BAD MESSAGE" },
		{ "DisplayName", "AttachTo (Deprecated)" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_K2_AttachTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "K2_AttachTo", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_K2_AttachTo_Statics::SceneComponent_eventK2_AttachTo_Parms), Z_Construct_UFunction_USceneComponent_K2_AttachTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_AttachTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_K2_AttachTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_AttachTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_K2_AttachTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_K2_AttachTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_K2_AttachToComponent_Statics
	{
		struct SceneComponent_eventK2_AttachToComponent_Parms
		{
			USceneComponent* Parent;
			FName SocketName;
			EAttachmentRule LocationRule;
			EAttachmentRule RotationRule;
			EAttachmentRule ScaleRule;
			bool bWeldSimulatedBodies;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LocationRule_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LocationRule;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationRule_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationRule;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ScaleRule_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ScaleRule;
		static void NewProp_bWeldSimulatedBodies_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWeldSimulatedBodies;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_K2_AttachToComponent_Statics::NewProp_Parent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USceneComponent_K2_AttachToComponent_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventK2_AttachToComponent_Parms, Parent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_K2_AttachToComponent_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_AttachToComponent_Statics::NewProp_Parent_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USceneComponent_K2_AttachToComponent_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventK2_AttachToComponent_Parms, SocketName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USceneComponent_K2_AttachToComponent_Statics::NewProp_LocationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USceneComponent_K2_AttachToComponent_Statics::NewProp_LocationRule = { "LocationRule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventK2_AttachToComponent_Parms, LocationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(nullptr, 0) }; // 1532071077
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USceneComponent_K2_AttachToComponent_Statics::NewProp_RotationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USceneComponent_K2_AttachToComponent_Statics::NewProp_RotationRule = { "RotationRule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventK2_AttachToComponent_Parms, RotationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(nullptr, 0) }; // 1532071077
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USceneComponent_K2_AttachToComponent_Statics::NewProp_ScaleRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USceneComponent_K2_AttachToComponent_Statics::NewProp_ScaleRule = { "ScaleRule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventK2_AttachToComponent_Parms, ScaleRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(nullptr, 0) }; // 1532071077
	void Z_Construct_UFunction_USceneComponent_K2_AttachToComponent_Statics::NewProp_bWeldSimulatedBodies_SetBit(void* Obj)
	{
		((SceneComponent_eventK2_AttachToComponent_Parms*)Obj)->bWeldSimulatedBodies = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_K2_AttachToComponent_Statics::NewProp_bWeldSimulatedBodies = { "bWeldSimulatedBodies", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventK2_AttachToComponent_Parms), &Z_Construct_UFunction_USceneComponent_K2_AttachToComponent_Statics::NewProp_bWeldSimulatedBodies_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USceneComponent_K2_AttachToComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SceneComponent_eventK2_AttachToComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_K2_AttachToComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventK2_AttachToComponent_Parms), &Z_Construct_UFunction_USceneComponent_K2_AttachToComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_K2_AttachToComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_AttachToComponent_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_AttachToComponent_Statics::NewProp_SocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_AttachToComponent_Statics::NewProp_LocationRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_AttachToComponent_Statics::NewProp_LocationRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_AttachToComponent_Statics::NewProp_RotationRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_AttachToComponent_Statics::NewProp_RotationRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_AttachToComponent_Statics::NewProp_ScaleRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_AttachToComponent_Statics::NewProp_ScaleRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_AttachToComponent_Statics::NewProp_bWeldSimulatedBodies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_AttachToComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_K2_AttachToComponent_Statics::Function_MetaDataParams[] = {
		{ "bWeldSimulatedBodies", "TRUE" },
		{ "Category", "Transformation" },
		{ "Comment", "/**\n\x09* Attach this component to another scene component, optionally at a named socket. It is valid to call this on components whether or not they have been Registered.\n\x09* @param  Parent\x09\x09\x09\x09\x09Parent to attach to.\n\x09* @param  SocketName\x09\x09\x09\x09Optional socket to attach to on the parent.\n\x09* @param  LocationRule\x09\x09\x09\x09How to handle translation when attaching.\n\x09* @param  RotationRule\x09\x09\x09\x09How to handle rotation when attaching.\n\x09* @param  ScaleRule\x09\x09\x09\x09\x09How to handle scale when attaching.\n\x09* @param  bWeldSimulatedBodies\x09\x09Whether to weld together simulated physics bodies.\n\x09* @return True if attachment is successful (or already attached to requested parent/socket), false if attachment is rejected and there is no change in AttachParent.\n\x09*/" },
		{ "DisplayName", "Attach Component To Component" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ScriptName", "AttachToComponent" },
		{ "ToolTip", "Attach this component to another scene component, optionally at a named socket. It is valid to call this on components whether or not they have been Registered.\n@param  Parent                                        Parent to attach to.\n@param  SocketName                            Optional socket to attach to on the parent.\n@param  LocationRule                          How to handle translation when attaching.\n@param  RotationRule                          How to handle rotation when attaching.\n@param  ScaleRule                                     How to handle scale when attaching.\n@param  bWeldSimulatedBodies          Whether to weld together simulated physics bodies.\n@return True if attachment is successful (or already attached to requested parent/socket), false if attachment is rejected and there is no change in AttachParent." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_K2_AttachToComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "K2_AttachToComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_K2_AttachToComponent_Statics::SceneComponent_eventK2_AttachToComponent_Parms), Z_Construct_UFunction_USceneComponent_K2_AttachToComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_AttachToComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_K2_AttachToComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_AttachToComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_K2_AttachToComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_K2_AttachToComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_K2_DetachFromComponent_Statics
	{
		struct SceneComponent_eventK2_DetachFromComponent_Parms
		{
			EDetachmentRule LocationRule;
			EDetachmentRule RotationRule;
			EDetachmentRule ScaleRule;
			bool bCallModify;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_LocationRule_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LocationRule;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationRule_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationRule;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ScaleRule_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ScaleRule;
		static void NewProp_bCallModify_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCallModify;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USceneComponent_K2_DetachFromComponent_Statics::NewProp_LocationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USceneComponent_K2_DetachFromComponent_Statics::NewProp_LocationRule = { "LocationRule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventK2_DetachFromComponent_Parms, LocationRule), Z_Construct_UEnum_Engine_EDetachmentRule, METADATA_PARAMS(nullptr, 0) }; // 1263074275
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USceneComponent_K2_DetachFromComponent_Statics::NewProp_RotationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USceneComponent_K2_DetachFromComponent_Statics::NewProp_RotationRule = { "RotationRule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventK2_DetachFromComponent_Parms, RotationRule), Z_Construct_UEnum_Engine_EDetachmentRule, METADATA_PARAMS(nullptr, 0) }; // 1263074275
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USceneComponent_K2_DetachFromComponent_Statics::NewProp_ScaleRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USceneComponent_K2_DetachFromComponent_Statics::NewProp_ScaleRule = { "ScaleRule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventK2_DetachFromComponent_Parms, ScaleRule), Z_Construct_UEnum_Engine_EDetachmentRule, METADATA_PARAMS(nullptr, 0) }; // 1263074275
	void Z_Construct_UFunction_USceneComponent_K2_DetachFromComponent_Statics::NewProp_bCallModify_SetBit(void* Obj)
	{
		((SceneComponent_eventK2_DetachFromComponent_Parms*)Obj)->bCallModify = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_K2_DetachFromComponent_Statics::NewProp_bCallModify = { "bCallModify", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventK2_DetachFromComponent_Parms), &Z_Construct_UFunction_USceneComponent_K2_DetachFromComponent_Statics::NewProp_bCallModify_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_K2_DetachFromComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_DetachFromComponent_Statics::NewProp_LocationRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_DetachFromComponent_Statics::NewProp_LocationRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_DetachFromComponent_Statics::NewProp_RotationRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_DetachFromComponent_Statics::NewProp_RotationRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_DetachFromComponent_Statics::NewProp_ScaleRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_DetachFromComponent_Statics::NewProp_ScaleRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_DetachFromComponent_Statics::NewProp_bCallModify,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_K2_DetachFromComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/** \n\x09 * Detach this component from whatever it is attached to. Automatically unwelds components that are welded together (See WeldTo)\n\x09 * @param LocationRule\x09\x09\x09\x09How to handle translations when detaching.\n\x09 * @param RotationRule\x09\x09\x09\x09How to handle rotation when detaching.\n\x09 * @param ScaleRule\x09\x09\x09\x09\x09How to handle scales when detaching.\n\x09 * @param bCallModify\x09\x09\x09\x09If true, call Modify() on the component and the current attach parent component\n\x09 */" },
		{ "CPP_Default_bCallModify", "true" },
		{ "CPP_Default_LocationRule", "KeepRelative" },
		{ "CPP_Default_RotationRule", "KeepRelative" },
		{ "CPP_Default_ScaleRule", "KeepRelative" },
		{ "DisplayName", "Detach From Component" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ScriptName", "DetachFromComponent" },
		{ "ToolTip", "Detach this component from whatever it is attached to. Automatically unwelds components that are welded together (See WeldTo)\n@param LocationRule                          How to handle translations when detaching.\n@param RotationRule                          How to handle rotation when detaching.\n@param ScaleRule                                     How to handle scales when detaching.\n@param bCallModify                           If true, call Modify() on the component and the current attach parent component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_K2_DetachFromComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "K2_DetachFromComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_K2_DetachFromComponent_Statics::SceneComponent_eventK2_DetachFromComponent_Parms), Z_Construct_UFunction_USceneComponent_K2_DetachFromComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_DetachFromComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_K2_DetachFromComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_DetachFromComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_K2_DetachFromComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_K2_DetachFromComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_K2_GetComponentLocation_Statics
	{
		struct SceneComponent_eventK2_GetComponentLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneComponent_K2_GetComponentLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventK2_GetComponentLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_K2_GetComponentLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_GetComponentLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_K2_GetComponentLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/** Return location of the component, in world space */" },
		{ "DisplayName", "Get World Location" },
		{ "Keywords", "position" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ScriptName", "GetWorldLocation" },
		{ "ToolTip", "Return location of the component, in world space" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_K2_GetComponentLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "K2_GetComponentLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_K2_GetComponentLocation_Statics::SceneComponent_eventK2_GetComponentLocation_Parms), Z_Construct_UFunction_USceneComponent_K2_GetComponentLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_GetComponentLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_K2_GetComponentLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_GetComponentLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_K2_GetComponentLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_K2_GetComponentLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_K2_GetComponentRotation_Statics
	{
		struct SceneComponent_eventK2_GetComponentRotation_Parms
		{
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneComponent_K2_GetComponentRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventK2_GetComponentRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_K2_GetComponentRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_GetComponentRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_K2_GetComponentRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/** Returns rotation of the component, in world space. */" },
		{ "DisplayName", "Get World Rotation" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ScriptName", "GetWorldRotation" },
		{ "ToolTip", "Returns rotation of the component, in world space." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_K2_GetComponentRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "K2_GetComponentRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_K2_GetComponentRotation_Statics::SceneComponent_eventK2_GetComponentRotation_Parms), Z_Construct_UFunction_USceneComponent_K2_GetComponentRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_GetComponentRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_K2_GetComponentRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_GetComponentRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_K2_GetComponentRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_K2_GetComponentRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_K2_GetComponentScale_Statics
	{
		struct SceneComponent_eventK2_GetComponentScale_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneComponent_K2_GetComponentScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventK2_GetComponentScale_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_K2_GetComponentScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_GetComponentScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_K2_GetComponentScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/** Returns scale of the component, in world space. */" },
		{ "DisplayName", "Get World Scale" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ScriptName", "GetWorldScale" },
		{ "ToolTip", "Returns scale of the component, in world space." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_K2_GetComponentScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "K2_GetComponentScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_K2_GetComponentScale_Statics::SceneComponent_eventK2_GetComponentScale_Parms), Z_Construct_UFunction_USceneComponent_K2_GetComponentScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_GetComponentScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_K2_GetComponentScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_GetComponentScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_K2_GetComponentScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_K2_GetComponentScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_K2_GetComponentToWorld_Statics
	{
		struct SceneComponent_eventK2_GetComponentToWorld_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneComponent_K2_GetComponentToWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventK2_GetComponentToWorld_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_K2_GetComponentToWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_GetComponentToWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_K2_GetComponentToWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/** Get the current component-to-world transform for this component */" },
		{ "DisplayName", "Get World Transform" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ScriptName", "GetWorldTransform" },
		{ "ToolTip", "Get the current component-to-world transform for this component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_K2_GetComponentToWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "K2_GetComponentToWorld", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_K2_GetComponentToWorld_Statics::SceneComponent_eventK2_GetComponentToWorld_Parms), Z_Construct_UFunction_USceneComponent_K2_GetComponentToWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_GetComponentToWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_K2_GetComponentToWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_GetComponentToWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_K2_GetComponentToWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_K2_GetComponentToWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_K2_SetRelativeLocation_Statics
	{
		struct SceneComponent_eventK2_SetRelativeLocation_Parms
		{
			FVector NewLocation;
			bool bSweep;
			FHitResult SweepHitResult;
			bool bTeleport;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewLocation;
		static void NewProp_bSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSweep;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
		static void NewProp_bTeleport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneComponent_K2_SetRelativeLocation_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventK2_SetRelativeLocation_Parms, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USceneComponent_K2_SetRelativeLocation_Statics::NewProp_bSweep_SetBit(void* Obj)
	{
		((SceneComponent_eventK2_SetRelativeLocation_Parms*)Obj)->bSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_K2_SetRelativeLocation_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventK2_SetRelativeLocation_Parms), &Z_Construct_UFunction_USceneComponent_K2_SetRelativeLocation_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneComponent_K2_SetRelativeLocation_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventK2_SetRelativeLocation_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
	void Z_Construct_UFunction_USceneComponent_K2_SetRelativeLocation_Statics::NewProp_bTeleport_SetBit(void* Obj)
	{
		((SceneComponent_eventK2_SetRelativeLocation_Parms*)Obj)->bTeleport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_K2_SetRelativeLocation_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventK2_SetRelativeLocation_Parms), &Z_Construct_UFunction_USceneComponent_K2_SetRelativeLocation_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_K2_SetRelativeLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_SetRelativeLocation_Statics::NewProp_NewLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_SetRelativeLocation_Statics::NewProp_bSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_SetRelativeLocation_Statics::NewProp_SweepHitResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_SetRelativeLocation_Statics::NewProp_bTeleport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_K2_SetRelativeLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/**\n\x09 * Set the location of the component relative to its parent\n\x09 * @param NewLocation\x09\x09New location of the component relative to its parent.\x09\x09\n\x09 * @param SweepHitResult\x09Hit result from any impact if sweep is true.\n\x09 * @param bSweep\x09\x09\x09Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n\x09 *\x09\x09\x09\x09\x09\x09\x09Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n\x09 * @param bTeleport\x09\x09\x09Whether we teleport the physics state (if physics collision is enabled for this object).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If CCD is on and not teleporting, this will affect objects along the entire sweep volume.\n\x09 */" },
		{ "DisplayName", "Set Relative Location" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ScriptName", "SetRelativeLocation" },
		{ "ToolTip", "Set the location of the component relative to its parent\n@param NewLocation           New location of the component relative to its parent.\n@param SweepHitResult        Hit result from any impact if sweep is true.\n@param bSweep                        Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n                                                     Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n@param bTeleport                     Whether we teleport the physics state (if physics collision is enabled for this object).\n                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n                                                     If CCD is on and not teleporting, this will affect objects along the entire sweep volume." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_K2_SetRelativeLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "K2_SetRelativeLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_K2_SetRelativeLocation_Statics::SceneComponent_eventK2_SetRelativeLocation_Parms), Z_Construct_UFunction_USceneComponent_K2_SetRelativeLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_SetRelativeLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_K2_SetRelativeLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_SetRelativeLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_K2_SetRelativeLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_K2_SetRelativeLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_K2_SetRelativeLocationAndRotation_Statics
	{
		struct SceneComponent_eventK2_SetRelativeLocationAndRotation_Parms
		{
			FVector NewLocation;
			FRotator NewRotation;
			bool bSweep;
			FHitResult SweepHitResult;
			bool bTeleport;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewRotation;
		static void NewProp_bSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSweep;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
		static void NewProp_bTeleport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneComponent_K2_SetRelativeLocationAndRotation_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventK2_SetRelativeLocationAndRotation_Parms, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneComponent_K2_SetRelativeLocationAndRotation_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventK2_SetRelativeLocationAndRotation_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USceneComponent_K2_SetRelativeLocationAndRotation_Statics::NewProp_bSweep_SetBit(void* Obj)
	{
		((SceneComponent_eventK2_SetRelativeLocationAndRotation_Parms*)Obj)->bSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_K2_SetRelativeLocationAndRotation_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventK2_SetRelativeLocationAndRotation_Parms), &Z_Construct_UFunction_USceneComponent_K2_SetRelativeLocationAndRotation_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneComponent_K2_SetRelativeLocationAndRotation_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventK2_SetRelativeLocationAndRotation_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
	void Z_Construct_UFunction_USceneComponent_K2_SetRelativeLocationAndRotation_Statics::NewProp_bTeleport_SetBit(void* Obj)
	{
		((SceneComponent_eventK2_SetRelativeLocationAndRotation_Parms*)Obj)->bTeleport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_K2_SetRelativeLocationAndRotation_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventK2_SetRelativeLocationAndRotation_Parms), &Z_Construct_UFunction_USceneComponent_K2_SetRelativeLocationAndRotation_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_K2_SetRelativeLocationAndRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_SetRelativeLocationAndRotation_Statics::NewProp_NewLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_SetRelativeLocationAndRotation_Statics::NewProp_NewRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_SetRelativeLocationAndRotation_Statics::NewProp_bSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_SetRelativeLocationAndRotation_Statics::NewProp_SweepHitResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_SetRelativeLocationAndRotation_Statics::NewProp_bTeleport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_K2_SetRelativeLocationAndRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/**\n\x09 * Set the location and rotation of the component relative to its parent\n\x09 * @param NewLocation\x09\x09New location of the component relative to its parent.\n\x09 * @param NewRotation\x09\x09New rotation of the component relative to its parent.\n\x09 * @param SweepHitResult\x09Hit result from any impact if sweep is true.\n\x09 * @param bSweep\x09\x09\x09Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n\x09 *\x09\x09\x09\x09\x09\x09\x09Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n\x09 * @param bTeleport\x09\x09\x09Whether we teleport the physics state (if physics collision is enabled for this object).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If CCD is on and not teleporting, this will affect objects along the entire sweep volume.\n\x09 */" },
		{ "DisplayName", "Set Relative Location And Rotation" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ScriptName", "SetRelativeLocationAndRotation" },
		{ "ToolTip", "Set the location and rotation of the component relative to its parent\n@param NewLocation           New location of the component relative to its parent.\n@param NewRotation           New rotation of the component relative to its parent.\n@param SweepHitResult        Hit result from any impact if sweep is true.\n@param bSweep                        Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n                                                     Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n@param bTeleport                     Whether we teleport the physics state (if physics collision is enabled for this object).\n                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n                                                     If CCD is on and not teleporting, this will affect objects along the entire sweep volume." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_K2_SetRelativeLocationAndRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "K2_SetRelativeLocationAndRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_K2_SetRelativeLocationAndRotation_Statics::SceneComponent_eventK2_SetRelativeLocationAndRotation_Parms), Z_Construct_UFunction_USceneComponent_K2_SetRelativeLocationAndRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_SetRelativeLocationAndRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_K2_SetRelativeLocationAndRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_SetRelativeLocationAndRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_K2_SetRelativeLocationAndRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_K2_SetRelativeLocationAndRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_K2_SetRelativeRotation_Statics
	{
		struct SceneComponent_eventK2_SetRelativeRotation_Parms
		{
			FRotator NewRotation;
			bool bSweep;
			FHitResult SweepHitResult;
			bool bTeleport;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewRotation;
		static void NewProp_bSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSweep;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
		static void NewProp_bTeleport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneComponent_K2_SetRelativeRotation_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventK2_SetRelativeRotation_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USceneComponent_K2_SetRelativeRotation_Statics::NewProp_bSweep_SetBit(void* Obj)
	{
		((SceneComponent_eventK2_SetRelativeRotation_Parms*)Obj)->bSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_K2_SetRelativeRotation_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventK2_SetRelativeRotation_Parms), &Z_Construct_UFunction_USceneComponent_K2_SetRelativeRotation_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneComponent_K2_SetRelativeRotation_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010048000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventK2_SetRelativeRotation_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
	void Z_Construct_UFunction_USceneComponent_K2_SetRelativeRotation_Statics::NewProp_bTeleport_SetBit(void* Obj)
	{
		((SceneComponent_eventK2_SetRelativeRotation_Parms*)Obj)->bTeleport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_K2_SetRelativeRotation_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventK2_SetRelativeRotation_Parms), &Z_Construct_UFunction_USceneComponent_K2_SetRelativeRotation_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_K2_SetRelativeRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_SetRelativeRotation_Statics::NewProp_NewRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_SetRelativeRotation_Statics::NewProp_bSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_SetRelativeRotation_Statics::NewProp_SweepHitResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_SetRelativeRotation_Statics::NewProp_bTeleport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_K2_SetRelativeRotation_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bSweep,SweepHitResult,bTeleport" },
		{ "Category", "Transformation" },
		{ "Comment", "/**\n\x09 * Set the rotation of the component relative to its parent\n\x09 * @param NewRotation\x09\x09New rotation of the component relative to its parent\n\x09 * @param SweepHitResult\x09Hit result from any impact if sweep is true.\n\x09 * @param bSweep\x09\x09\x09Whether we sweep to the destination (currently not supported for rotation).\n\x09 * @param bTeleport\x09\x09\x09Whether we teleport the physics state (if physics collision is enabled for this object).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n\x09 */" },
		{ "DisplayName", "Set Relative Rotation" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ScriptName", "SetRelativeRotation" },
		{ "ToolTip", "Set the rotation of the component relative to its parent\n@param NewRotation           New rotation of the component relative to its parent\n@param SweepHitResult        Hit result from any impact if sweep is true.\n@param bSweep                        Whether we sweep to the destination (currently not supported for rotation).\n@param bTeleport                     Whether we teleport the physics state (if physics collision is enabled for this object).\n                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_K2_SetRelativeRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "K2_SetRelativeRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_K2_SetRelativeRotation_Statics::SceneComponent_eventK2_SetRelativeRotation_Parms), Z_Construct_UFunction_USceneComponent_K2_SetRelativeRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_SetRelativeRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_K2_SetRelativeRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_SetRelativeRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_K2_SetRelativeRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_K2_SetRelativeRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_K2_SetRelativeTransform_Statics
	{
		struct SceneComponent_eventK2_SetRelativeTransform_Parms
		{
			FTransform NewTransform;
			bool bSweep;
			FHitResult SweepHitResult;
			bool bTeleport;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewTransform;
		static void NewProp_bSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSweep;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
		static void NewProp_bTeleport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_K2_SetRelativeTransform_Statics::NewProp_NewTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneComponent_K2_SetRelativeTransform_Statics::NewProp_NewTransform = { "NewTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventK2_SetRelativeTransform_Parms, NewTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_K2_SetRelativeTransform_Statics::NewProp_NewTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_SetRelativeTransform_Statics::NewProp_NewTransform_MetaData)) };
	void Z_Construct_UFunction_USceneComponent_K2_SetRelativeTransform_Statics::NewProp_bSweep_SetBit(void* Obj)
	{
		((SceneComponent_eventK2_SetRelativeTransform_Parms*)Obj)->bSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_K2_SetRelativeTransform_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventK2_SetRelativeTransform_Parms), &Z_Construct_UFunction_USceneComponent_K2_SetRelativeTransform_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneComponent_K2_SetRelativeTransform_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventK2_SetRelativeTransform_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
	void Z_Construct_UFunction_USceneComponent_K2_SetRelativeTransform_Statics::NewProp_bTeleport_SetBit(void* Obj)
	{
		((SceneComponent_eventK2_SetRelativeTransform_Parms*)Obj)->bTeleport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_K2_SetRelativeTransform_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventK2_SetRelativeTransform_Parms), &Z_Construct_UFunction_USceneComponent_K2_SetRelativeTransform_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_K2_SetRelativeTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_SetRelativeTransform_Statics::NewProp_NewTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_SetRelativeTransform_Statics::NewProp_bSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_SetRelativeTransform_Statics::NewProp_SweepHitResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_SetRelativeTransform_Statics::NewProp_bTeleport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_K2_SetRelativeTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/**\n\x09 * Set the transform of the component relative to its parent\n\x09 * @param NewTransform\x09\x09New transform of the component relative to its parent.\n\x09 * @param SweepHitResult\x09Hit result from any impact if sweep is true.\n\x09 * @param bSweep\x09\x09\x09Whether we sweep to the destination (currently not supported for rotation).\n\x09 * @param bTeleport\x09\x09\x09Whether we teleport the physics state (if physics collision is enabled for this object).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n\x09 */" },
		{ "DisplayName", "Set Relative Transform" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ScriptName", "SetRelativeTransform" },
		{ "ToolTip", "Set the transform of the component relative to its parent\n@param NewTransform          New transform of the component relative to its parent.\n@param SweepHitResult        Hit result from any impact if sweep is true.\n@param bSweep                        Whether we sweep to the destination (currently not supported for rotation).\n@param bTeleport                     Whether we teleport the physics state (if physics collision is enabled for this object).\n                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_K2_SetRelativeTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "K2_SetRelativeTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_K2_SetRelativeTransform_Statics::SceneComponent_eventK2_SetRelativeTransform_Parms), Z_Construct_UFunction_USceneComponent_K2_SetRelativeTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_SetRelativeTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_K2_SetRelativeTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_SetRelativeTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_K2_SetRelativeTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_K2_SetRelativeTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_K2_SetWorldLocation_Statics
	{
		struct SceneComponent_eventK2_SetWorldLocation_Parms
		{
			FVector NewLocation;
			bool bSweep;
			FHitResult SweepHitResult;
			bool bTeleport;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewLocation;
		static void NewProp_bSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSweep;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
		static void NewProp_bTeleport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneComponent_K2_SetWorldLocation_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventK2_SetWorldLocation_Parms, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USceneComponent_K2_SetWorldLocation_Statics::NewProp_bSweep_SetBit(void* Obj)
	{
		((SceneComponent_eventK2_SetWorldLocation_Parms*)Obj)->bSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_K2_SetWorldLocation_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventK2_SetWorldLocation_Parms), &Z_Construct_UFunction_USceneComponent_K2_SetWorldLocation_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneComponent_K2_SetWorldLocation_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventK2_SetWorldLocation_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
	void Z_Construct_UFunction_USceneComponent_K2_SetWorldLocation_Statics::NewProp_bTeleport_SetBit(void* Obj)
	{
		((SceneComponent_eventK2_SetWorldLocation_Parms*)Obj)->bTeleport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_K2_SetWorldLocation_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventK2_SetWorldLocation_Parms), &Z_Construct_UFunction_USceneComponent_K2_SetWorldLocation_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_K2_SetWorldLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_SetWorldLocation_Statics::NewProp_NewLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_SetWorldLocation_Statics::NewProp_bSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_SetWorldLocation_Statics::NewProp_SweepHitResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_SetWorldLocation_Statics::NewProp_bTeleport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_K2_SetWorldLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/**\n\x09 * Put this component at the specified location in world space. Updates relative location to achieve the final world location.\n\x09 * @param NewLocation\x09\x09New location in world space for the component.\n\x09 * @param SweepHitResult\x09Hit result from any impact if sweep is true.\n\x09 * @param bSweep\x09\x09\x09Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n\x09 *\x09\x09\x09\x09\x09\x09\x09Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n\x09 * @param bTeleport\x09\x09\x09Whether we teleport the physics state (if physics collision is enabled for this object).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If CCD is on and not teleporting, this will affect objects along the entire sweep volume.\n\x09 */" },
		{ "DisplayName", "Set World Location" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ScriptName", "SetWorldLocation" },
		{ "ToolTip", "Put this component at the specified location in world space. Updates relative location to achieve the final world location.\n@param NewLocation           New location in world space for the component.\n@param SweepHitResult        Hit result from any impact if sweep is true.\n@param bSweep                        Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n                                                     Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n@param bTeleport                     Whether we teleport the physics state (if physics collision is enabled for this object).\n                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n                                                     If CCD is on and not teleporting, this will affect objects along the entire sweep volume." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_K2_SetWorldLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "K2_SetWorldLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_K2_SetWorldLocation_Statics::SceneComponent_eventK2_SetWorldLocation_Parms), Z_Construct_UFunction_USceneComponent_K2_SetWorldLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_SetWorldLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_K2_SetWorldLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_SetWorldLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_K2_SetWorldLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_K2_SetWorldLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_K2_SetWorldLocationAndRotation_Statics
	{
		struct SceneComponent_eventK2_SetWorldLocationAndRotation_Parms
		{
			FVector NewLocation;
			FRotator NewRotation;
			bool bSweep;
			FHitResult SweepHitResult;
			bool bTeleport;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewRotation;
		static void NewProp_bSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSweep;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
		static void NewProp_bTeleport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneComponent_K2_SetWorldLocationAndRotation_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventK2_SetWorldLocationAndRotation_Parms, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneComponent_K2_SetWorldLocationAndRotation_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventK2_SetWorldLocationAndRotation_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USceneComponent_K2_SetWorldLocationAndRotation_Statics::NewProp_bSweep_SetBit(void* Obj)
	{
		((SceneComponent_eventK2_SetWorldLocationAndRotation_Parms*)Obj)->bSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_K2_SetWorldLocationAndRotation_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventK2_SetWorldLocationAndRotation_Parms), &Z_Construct_UFunction_USceneComponent_K2_SetWorldLocationAndRotation_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneComponent_K2_SetWorldLocationAndRotation_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventK2_SetWorldLocationAndRotation_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
	void Z_Construct_UFunction_USceneComponent_K2_SetWorldLocationAndRotation_Statics::NewProp_bTeleport_SetBit(void* Obj)
	{
		((SceneComponent_eventK2_SetWorldLocationAndRotation_Parms*)Obj)->bTeleport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_K2_SetWorldLocationAndRotation_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventK2_SetWorldLocationAndRotation_Parms), &Z_Construct_UFunction_USceneComponent_K2_SetWorldLocationAndRotation_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_K2_SetWorldLocationAndRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_SetWorldLocationAndRotation_Statics::NewProp_NewLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_SetWorldLocationAndRotation_Statics::NewProp_NewRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_SetWorldLocationAndRotation_Statics::NewProp_bSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_SetWorldLocationAndRotation_Statics::NewProp_SweepHitResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_SetWorldLocationAndRotation_Statics::NewProp_bTeleport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_K2_SetWorldLocationAndRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/**\n\x09 * Set the relative location and rotation of the component to put it at the supplied pose in world space.\n\x09 * @param NewLocation\x09\x09New location in world space for the component.\n\x09 * @param NewRotation\x09\x09New rotation in world space for the component.\n\x09 * @param SweepHitResult\x09Hit result from any impact if sweep is true.\n\x09 * @param bSweep\x09\x09\x09Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n\x09 *\x09\x09\x09\x09\x09\x09\x09Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n\x09 * @param bTeleport\x09\x09\x09Whether we teleport the physics state (if physics collision is enabled for this object).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If CCD is on and not teleporting, this will affect objects along the entire sweep volume.\n\x09 */" },
		{ "DisplayName", "Set World Location And Rotation" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ScriptName", "SetWorldLocationAndRotation" },
		{ "ToolTip", "Set the relative location and rotation of the component to put it at the supplied pose in world space.\n@param NewLocation           New location in world space for the component.\n@param NewRotation           New rotation in world space for the component.\n@param SweepHitResult        Hit result from any impact if sweep is true.\n@param bSweep                        Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n                                                     Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n@param bTeleport                     Whether we teleport the physics state (if physics collision is enabled for this object).\n                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n                                                     If CCD is on and not teleporting, this will affect objects along the entire sweep volume." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_K2_SetWorldLocationAndRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "K2_SetWorldLocationAndRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_K2_SetWorldLocationAndRotation_Statics::SceneComponent_eventK2_SetWorldLocationAndRotation_Parms), Z_Construct_UFunction_USceneComponent_K2_SetWorldLocationAndRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_SetWorldLocationAndRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_K2_SetWorldLocationAndRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_SetWorldLocationAndRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_K2_SetWorldLocationAndRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_K2_SetWorldLocationAndRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_K2_SetWorldRotation_Statics
	{
		struct SceneComponent_eventK2_SetWorldRotation_Parms
		{
			FRotator NewRotation;
			bool bSweep;
			FHitResult SweepHitResult;
			bool bTeleport;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewRotation;
		static void NewProp_bSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSweep;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
		static void NewProp_bTeleport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneComponent_K2_SetWorldRotation_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventK2_SetWorldRotation_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USceneComponent_K2_SetWorldRotation_Statics::NewProp_bSweep_SetBit(void* Obj)
	{
		((SceneComponent_eventK2_SetWorldRotation_Parms*)Obj)->bSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_K2_SetWorldRotation_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventK2_SetWorldRotation_Parms), &Z_Construct_UFunction_USceneComponent_K2_SetWorldRotation_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneComponent_K2_SetWorldRotation_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010048000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventK2_SetWorldRotation_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
	void Z_Construct_UFunction_USceneComponent_K2_SetWorldRotation_Statics::NewProp_bTeleport_SetBit(void* Obj)
	{
		((SceneComponent_eventK2_SetWorldRotation_Parms*)Obj)->bTeleport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_K2_SetWorldRotation_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventK2_SetWorldRotation_Parms), &Z_Construct_UFunction_USceneComponent_K2_SetWorldRotation_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_K2_SetWorldRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_SetWorldRotation_Statics::NewProp_NewRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_SetWorldRotation_Statics::NewProp_bSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_SetWorldRotation_Statics::NewProp_SweepHitResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_SetWorldRotation_Statics::NewProp_bTeleport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_K2_SetWorldRotation_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bSweep,SweepHitResult,bTeleport" },
		{ "Category", "Transformation" },
		{ "Comment", "/*\n\x09 * Put this component at the specified rotation in world space. Updates relative rotation to achieve the final world rotation.\n\x09 * @param NewRotation\x09\x09New rotation in world space for the component.\n\x09 * @param SweepHitResult\x09Hit result from any impact if sweep is true.\n\x09 * @param bSweep\x09\x09\x09Whether we sweep to the destination (currently not supported for rotation).\n\x09 * @param bTeleport\x09\x09\x09Whether we teleport the physics state (if physics collision is enabled for this object).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If CCD is on and not teleporting, this will affect objects along the entire sweep volume.\n\x09 */" },
		{ "DisplayName", "Set World Rotation" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ScriptName", "SetWorldRotation" },
		{ "ToolTip", "* Put this component at the specified rotation in world space. Updates relative rotation to achieve the final world rotation.\n* @param NewRotation           New rotation in world space for the component.\n* @param SweepHitResult        Hit result from any impact if sweep is true.\n* @param bSweep                        Whether we sweep to the destination (currently not supported for rotation).\n* @param bTeleport                     Whether we teleport the physics state (if physics collision is enabled for this object).\n*                                                      If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n*                                                      If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n*                                                      If CCD is on and not teleporting, this will affect objects along the entire sweep volume." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_K2_SetWorldRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "K2_SetWorldRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_K2_SetWorldRotation_Statics::SceneComponent_eventK2_SetWorldRotation_Parms), Z_Construct_UFunction_USceneComponent_K2_SetWorldRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_SetWorldRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_K2_SetWorldRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_SetWorldRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_K2_SetWorldRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_K2_SetWorldRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_K2_SetWorldTransform_Statics
	{
		struct SceneComponent_eventK2_SetWorldTransform_Parms
		{
			FTransform NewTransform;
			bool bSweep;
			FHitResult SweepHitResult;
			bool bTeleport;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewTransform;
		static void NewProp_bSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSweep;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
		static void NewProp_bTeleport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_K2_SetWorldTransform_Statics::NewProp_NewTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneComponent_K2_SetWorldTransform_Statics::NewProp_NewTransform = { "NewTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventK2_SetWorldTransform_Parms, NewTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_K2_SetWorldTransform_Statics::NewProp_NewTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_SetWorldTransform_Statics::NewProp_NewTransform_MetaData)) };
	void Z_Construct_UFunction_USceneComponent_K2_SetWorldTransform_Statics::NewProp_bSweep_SetBit(void* Obj)
	{
		((SceneComponent_eventK2_SetWorldTransform_Parms*)Obj)->bSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_K2_SetWorldTransform_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventK2_SetWorldTransform_Parms), &Z_Construct_UFunction_USceneComponent_K2_SetWorldTransform_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneComponent_K2_SetWorldTransform_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventK2_SetWorldTransform_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
	void Z_Construct_UFunction_USceneComponent_K2_SetWorldTransform_Statics::NewProp_bTeleport_SetBit(void* Obj)
	{
		((SceneComponent_eventK2_SetWorldTransform_Parms*)Obj)->bTeleport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_K2_SetWorldTransform_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventK2_SetWorldTransform_Parms), &Z_Construct_UFunction_USceneComponent_K2_SetWorldTransform_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_K2_SetWorldTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_SetWorldTransform_Statics::NewProp_NewTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_SetWorldTransform_Statics::NewProp_bSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_SetWorldTransform_Statics::NewProp_SweepHitResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_K2_SetWorldTransform_Statics::NewProp_bTeleport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_K2_SetWorldTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/**\n\x09 * Set the transform of the component in world space.\n\x09 * @param NewTransform\x09\x09New transform in world space for the component.\n\x09 * @param SweepHitResult\x09Hit result from any impact if sweep is true.\n\x09 * @param bSweep\x09\x09\x09Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n\x09 *\x09\x09\x09\x09\x09\x09\x09Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n\x09 * @param bTeleport\x09\x09\x09Whether we teleport the physics state (if physics collision is enabled for this object).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n\x09 *\x09\x09\x09\x09\x09\x09\x09If CCD is on and not teleporting, this will affect objects along the entire sweep volume.\n\x09 */" },
		{ "DisplayName", "Set World Transform" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ScriptName", "SetWorldTransform" },
		{ "ToolTip", "Set the transform of the component in world space.\n@param NewTransform          New transform in world space for the component.\n@param SweepHitResult        Hit result from any impact if sweep is true.\n@param bSweep                        Whether we sweep to the destination location, triggering overlaps along the way and stopping short of the target if blocked by something.\n                                                     Only the root component is swept and checked for blocking collision, child components move without sweeping. If collision is off, this has no effect.\n@param bTeleport                     Whether we teleport the physics state (if physics collision is enabled for this object).\n                                                     If true, physics velocity for this object is unchanged (so ragdoll parts are not affected by change in location).\n                                                     If false, physics velocity is updated based on the change in position (affecting ragdoll parts).\n                                                     If CCD is on and not teleporting, this will affect objects along the entire sweep volume." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_K2_SetWorldTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "K2_SetWorldTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_K2_SetWorldTransform_Statics::SceneComponent_eventK2_SetWorldTransform_Parms), Z_Construct_UFunction_USceneComponent_K2_SetWorldTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_SetWorldTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_K2_SetWorldTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_K2_SetWorldTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_K2_SetWorldTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_K2_SetWorldTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_OnRep_AttachChildren_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_OnRep_AttachChildren_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_OnRep_AttachChildren_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "OnRep_AttachChildren", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_OnRep_AttachChildren_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_OnRep_AttachChildren_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_OnRep_AttachChildren()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_OnRep_AttachChildren_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_OnRep_AttachParent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_OnRep_AttachParent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_OnRep_AttachParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "OnRep_AttachParent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_OnRep_AttachParent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_OnRep_AttachParent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_OnRep_AttachParent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_OnRep_AttachParent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_OnRep_AttachSocketName_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_OnRep_AttachSocketName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_OnRep_AttachSocketName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "OnRep_AttachSocketName", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_OnRep_AttachSocketName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_OnRep_AttachSocketName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_OnRep_AttachSocketName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_OnRep_AttachSocketName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_OnRep_Transform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_OnRep_Transform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_OnRep_Transform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "OnRep_Transform", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_OnRep_Transform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_OnRep_Transform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_OnRep_Transform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_OnRep_Transform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_OnRep_Visibility_Statics
	{
		struct SceneComponent_eventOnRep_Visibility_Parms
		{
			bool OldValue;
		};
		static void NewProp_OldValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OldValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USceneComponent_OnRep_Visibility_Statics::NewProp_OldValue_SetBit(void* Obj)
	{
		((SceneComponent_eventOnRep_Visibility_Parms*)Obj)->OldValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_OnRep_Visibility_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventOnRep_Visibility_Parms), &Z_Construct_UFunction_USceneComponent_OnRep_Visibility_Statics::NewProp_OldValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_OnRep_Visibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_OnRep_Visibility_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_OnRep_Visibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_OnRep_Visibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "OnRep_Visibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_OnRep_Visibility_Statics::SceneComponent_eventOnRep_Visibility_Parms), Z_Construct_UFunction_USceneComponent_OnRep_Visibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_OnRep_Visibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_OnRep_Visibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_OnRep_Visibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_OnRep_Visibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_OnRep_Visibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_ResetRelativeTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_ResetRelativeTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/** Reset the transform of the component relative to its parent. Sets relative location to zero, relative rotation to no rotation, and Scale to 1. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "Reset the transform of the component relative to its parent. Sets relative location to zero, relative rotation to no rotation, and Scale to 1." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_ResetRelativeTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "ResetRelativeTransform", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_ResetRelativeTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_ResetRelativeTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_ResetRelativeTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_ResetRelativeTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_SetAbsolute_Statics
	{
		struct SceneComponent_eventSetAbsolute_Parms
		{
			bool bNewAbsoluteLocation;
			bool bNewAbsoluteRotation;
			bool bNewAbsoluteScale;
		};
		static void NewProp_bNewAbsoluteLocation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewAbsoluteLocation;
		static void NewProp_bNewAbsoluteRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewAbsoluteRotation;
		static void NewProp_bNewAbsoluteScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewAbsoluteScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USceneComponent_SetAbsolute_Statics::NewProp_bNewAbsoluteLocation_SetBit(void* Obj)
	{
		((SceneComponent_eventSetAbsolute_Parms*)Obj)->bNewAbsoluteLocation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_SetAbsolute_Statics::NewProp_bNewAbsoluteLocation = { "bNewAbsoluteLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventSetAbsolute_Parms), &Z_Construct_UFunction_USceneComponent_SetAbsolute_Statics::NewProp_bNewAbsoluteLocation_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USceneComponent_SetAbsolute_Statics::NewProp_bNewAbsoluteRotation_SetBit(void* Obj)
	{
		((SceneComponent_eventSetAbsolute_Parms*)Obj)->bNewAbsoluteRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_SetAbsolute_Statics::NewProp_bNewAbsoluteRotation = { "bNewAbsoluteRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventSetAbsolute_Parms), &Z_Construct_UFunction_USceneComponent_SetAbsolute_Statics::NewProp_bNewAbsoluteRotation_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USceneComponent_SetAbsolute_Statics::NewProp_bNewAbsoluteScale_SetBit(void* Obj)
	{
		((SceneComponent_eventSetAbsolute_Parms*)Obj)->bNewAbsoluteScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_SetAbsolute_Statics::NewProp_bNewAbsoluteScale = { "bNewAbsoluteScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventSetAbsolute_Parms), &Z_Construct_UFunction_USceneComponent_SetAbsolute_Statics::NewProp_bNewAbsoluteScale_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_SetAbsolute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_SetAbsolute_Statics::NewProp_bNewAbsoluteLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_SetAbsolute_Statics::NewProp_bNewAbsoluteRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_SetAbsolute_Statics::NewProp_bNewAbsoluteScale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_SetAbsolute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/** Set which parts of the relative transform should be relative to parent, and which should be relative to world */" },
		{ "CPP_Default_bNewAbsoluteLocation", "false" },
		{ "CPP_Default_bNewAbsoluteRotation", "false" },
		{ "CPP_Default_bNewAbsoluteScale", "false" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "Set which parts of the relative transform should be relative to parent, and which should be relative to world" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_SetAbsolute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "SetAbsolute", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_SetAbsolute_Statics::SceneComponent_eventSetAbsolute_Parms), Z_Construct_UFunction_USceneComponent_SetAbsolute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_SetAbsolute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_SetAbsolute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_SetAbsolute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_SetAbsolute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_SetAbsolute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_SetHiddenInGame_Statics
	{
		struct SceneComponent_eventSetHiddenInGame_Parms
		{
			bool NewHidden;
			bool bPropagateToChildren;
		};
		static void NewProp_NewHidden_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NewHidden;
		static void NewProp_bPropagateToChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateToChildren;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USceneComponent_SetHiddenInGame_Statics::NewProp_NewHidden_SetBit(void* Obj)
	{
		((SceneComponent_eventSetHiddenInGame_Parms*)Obj)->NewHidden = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_SetHiddenInGame_Statics::NewProp_NewHidden = { "NewHidden", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventSetHiddenInGame_Parms), &Z_Construct_UFunction_USceneComponent_SetHiddenInGame_Statics::NewProp_NewHidden_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USceneComponent_SetHiddenInGame_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
	{
		((SceneComponent_eventSetHiddenInGame_Parms*)Obj)->bPropagateToChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_SetHiddenInGame_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventSetHiddenInGame_Parms), &Z_Construct_UFunction_USceneComponent_SetHiddenInGame_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_SetHiddenInGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_SetHiddenInGame_Statics::NewProp_NewHidden,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_SetHiddenInGame_Statics::NewProp_bPropagateToChildren,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_SetHiddenInGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development" },
		{ "Comment", "/** Changes the value of bHiddenInGame, if false this will disable Visibility during gameplay */" },
		{ "CPP_Default_bPropagateToChildren", "false" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "Changes the value of bHiddenInGame, if false this will disable Visibility during gameplay" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_SetHiddenInGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "SetHiddenInGame", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_SetHiddenInGame_Statics::SceneComponent_eventSetHiddenInGame_Parms), Z_Construct_UFunction_USceneComponent_SetHiddenInGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_SetHiddenInGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_SetHiddenInGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_SetHiddenInGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_SetHiddenInGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_SetHiddenInGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_SetMobility_Statics
	{
		struct SceneComponent_eventSetMobility_Parms
		{
			TEnumAsByte<EComponentMobility::Type> NewMobility;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewMobility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USceneComponent_SetMobility_Statics::NewProp_NewMobility = { "NewMobility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventSetMobility_Parms, NewMobility), Z_Construct_UEnum_Engine_EComponentMobility, METADATA_PARAMS(nullptr, 0) }; // 3258784245
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_SetMobility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_SetMobility_Statics::NewProp_NewMobility,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_SetMobility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/** Set how often this component is allowed to move during runtime. Causes a component re-register if the component is already registered */" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "Set how often this component is allowed to move during runtime. Causes a component re-register if the component is already registered" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_SetMobility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "SetMobility", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_SetMobility_Statics::SceneComponent_eventSetMobility_Parms), Z_Construct_UFunction_USceneComponent_SetMobility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_SetMobility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_SetMobility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_SetMobility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_SetMobility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_SetMobility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_SetRelativeScale3D_Statics
	{
		struct SceneComponent_eventSetRelativeScale3D_Parms
		{
			FVector NewScale3D;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewScale3D;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneComponent_SetRelativeScale3D_Statics::NewProp_NewScale3D = { "NewScale3D", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventSetRelativeScale3D_Parms, NewScale3D), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_SetRelativeScale3D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_SetRelativeScale3D_Statics::NewProp_NewScale3D,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_SetRelativeScale3D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/** Set the non-uniform scale of the component relative to its parent */" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "Set the non-uniform scale of the component relative to its parent" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_SetRelativeScale3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "SetRelativeScale3D", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_SetRelativeScale3D_Statics::SceneComponent_eventSetRelativeScale3D_Parms), Z_Construct_UFunction_USceneComponent_SetRelativeScale3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_SetRelativeScale3D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_SetRelativeScale3D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_SetRelativeScale3D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_SetRelativeScale3D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_SetRelativeScale3D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_SetShouldUpdatePhysicsVolume_Statics
	{
		struct SceneComponent_eventSetShouldUpdatePhysicsVolume_Parms
		{
			bool bInShouldUpdatePhysicsVolume;
		};
		static void NewProp_bInShouldUpdatePhysicsVolume_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInShouldUpdatePhysicsVolume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USceneComponent_SetShouldUpdatePhysicsVolume_Statics::NewProp_bInShouldUpdatePhysicsVolume_SetBit(void* Obj)
	{
		((SceneComponent_eventSetShouldUpdatePhysicsVolume_Parms*)Obj)->bInShouldUpdatePhysicsVolume = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_SetShouldUpdatePhysicsVolume_Statics::NewProp_bInShouldUpdatePhysicsVolume = { "bInShouldUpdatePhysicsVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventSetShouldUpdatePhysicsVolume_Parms), &Z_Construct_UFunction_USceneComponent_SetShouldUpdatePhysicsVolume_Statics::NewProp_bInShouldUpdatePhysicsVolume_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_SetShouldUpdatePhysicsVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_SetShouldUpdatePhysicsVolume_Statics::NewProp_bInShouldUpdatePhysicsVolume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_SetShouldUpdatePhysicsVolume_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Comment", "/** Sets whether or not the cached PhysicsVolume this component overlaps should be updated when the component is moved. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "Sets whether or not the cached PhysicsVolume this component overlaps should be updated when the component is moved." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_SetShouldUpdatePhysicsVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "SetShouldUpdatePhysicsVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_SetShouldUpdatePhysicsVolume_Statics::SceneComponent_eventSetShouldUpdatePhysicsVolume_Parms), Z_Construct_UFunction_USceneComponent_SetShouldUpdatePhysicsVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_SetShouldUpdatePhysicsVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_SetShouldUpdatePhysicsVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_SetShouldUpdatePhysicsVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_SetShouldUpdatePhysicsVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_SetShouldUpdatePhysicsVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_SetVisibility_Statics
	{
		struct SceneComponent_eventSetVisibility_Parms
		{
			bool bNewVisibility;
			bool bPropagateToChildren;
		};
		static void NewProp_bNewVisibility_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewVisibility;
		static void NewProp_bPropagateToChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateToChildren;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USceneComponent_SetVisibility_Statics::NewProp_bNewVisibility_SetBit(void* Obj)
	{
		((SceneComponent_eventSetVisibility_Parms*)Obj)->bNewVisibility = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_SetVisibility_Statics::NewProp_bNewVisibility = { "bNewVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventSetVisibility_Parms), &Z_Construct_UFunction_USceneComponent_SetVisibility_Statics::NewProp_bNewVisibility_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USceneComponent_SetVisibility_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
	{
		((SceneComponent_eventSetVisibility_Parms*)Obj)->bPropagateToChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_SetVisibility_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventSetVisibility_Parms), &Z_Construct_UFunction_USceneComponent_SetVisibility_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_SetVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_SetVisibility_Statics::NewProp_bNewVisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_SetVisibility_Statics::NewProp_bPropagateToChildren,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_SetVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** \n\x09 * Set visibility of the component, if during game use this to turn on/off\n\x09 */" },
		{ "CPP_Default_bPropagateToChildren", "false" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "Set visibility of the component, if during game use this to turn on/off" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_SetVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "SetVisibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_SetVisibility_Statics::SceneComponent_eventSetVisibility_Parms), Z_Construct_UFunction_USceneComponent_SetVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_SetVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_SetVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_SetVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_SetVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_SetVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_SetWorldScale3D_Statics
	{
		struct SceneComponent_eventSetWorldScale3D_Parms
		{
			FVector NewScale;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USceneComponent_SetWorldScale3D_Statics::NewProp_NewScale = { "NewScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneComponent_eventSetWorldScale3D_Parms, NewScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_SetWorldScale3D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_SetWorldScale3D_Statics::NewProp_NewScale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_SetWorldScale3D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Transformation" },
		{ "Comment", "/**\n\x09 * Set the relative scale of the component to put it at the supplied scale in world space.\n\x09 * @param NewScale\x09\x09New scale in world space for this component.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "Set the relative scale of the component to put it at the supplied scale in world space.\n@param NewScale              New scale in world space for this component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_SetWorldScale3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "SetWorldScale3D", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_SetWorldScale3D_Statics::SceneComponent_eventSetWorldScale3D_Parms), Z_Construct_UFunction_USceneComponent_SetWorldScale3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_SetWorldScale3D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_SetWorldScale3D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_SetWorldScale3D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_SetWorldScale3D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_SetWorldScale3D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneComponent_ToggleVisibility_Statics
	{
		struct SceneComponent_eventToggleVisibility_Parms
		{
			bool bPropagateToChildren;
		};
		static void NewProp_bPropagateToChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateToChildren;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USceneComponent_ToggleVisibility_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
	{
		((SceneComponent_eventToggleVisibility_Parms*)Obj)->bPropagateToChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USceneComponent_ToggleVisibility_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneComponent_eventToggleVisibility_Parms), &Z_Construct_UFunction_USceneComponent_ToggleVisibility_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneComponent_ToggleVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneComponent_ToggleVisibility_Statics::NewProp_bPropagateToChildren,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneComponent_ToggleVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** \n\x09 * Toggle visibility of the component\n\x09 */" },
		{ "CPP_Default_bPropagateToChildren", "false" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "Toggle visibility of the component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneComponent_ToggleVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneComponent, nullptr, "ToggleVisibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneComponent_ToggleVisibility_Statics::SceneComponent_eventToggleVisibility_Parms), Z_Construct_UFunction_USceneComponent_ToggleVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_ToggleVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneComponent_ToggleVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneComponent_ToggleVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneComponent_ToggleVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneComponent_ToggleVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USceneComponent);
	UClass* Z_Construct_UClass_USceneComponent_NoRegister()
	{
		return USceneComponent::StaticClass();
	}
	struct Z_Construct_UClass_USceneComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsVolume_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_PhysicsVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachParent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttachParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttachSocketName;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttachChildren_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachChildren_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttachChildren;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ClientAttachedChildren_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientAttachedChildren_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ClientAttachedChildren;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeScale3D_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeScale3D;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bComponentToWorldUpdated_MetaData[];
#endif
		static void NewProp_bComponentToWorldUpdated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bComponentToWorldUpdated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAbsoluteLocation_MetaData[];
#endif
		static void NewProp_bAbsoluteLocation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAbsoluteLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAbsoluteRotation_MetaData[];
#endif
		static void NewProp_bAbsoluteRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAbsoluteRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAbsoluteScale_MetaData[];
#endif
		static void NewProp_bAbsoluteScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAbsoluteScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[];
#endif
		static void NewProp_bVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldBeAttached_MetaData[];
#endif
		static void NewProp_bShouldBeAttached_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldBeAttached;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldSnapLocationWhenAttached_MetaData[];
#endif
		static void NewProp_bShouldSnapLocationWhenAttached_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldSnapLocationWhenAttached;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldSnapRotationWhenAttached_MetaData[];
#endif
		static void NewProp_bShouldSnapRotationWhenAttached_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldSnapRotationWhenAttached;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldSnapScaleWhenAttached_MetaData[];
#endif
		static void NewProp_bShouldSnapScaleWhenAttached_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldSnapScaleWhenAttached;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldUpdatePhysicsVolume_MetaData[];
#endif
		static void NewProp_bShouldUpdatePhysicsVolume_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldUpdatePhysicsVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHiddenInGame_MetaData[];
#endif
		static void NewProp_bHiddenInGame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHiddenInGame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBoundsChangeTriggersStreamingDataRebuild_MetaData[];
#endif
		static void NewProp_bBoundsChangeTriggersStreamingDataRebuild_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBoundsChangeTriggersStreamingDataRebuild;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAttachParentBound_MetaData[];
#endif
		static void NewProp_bUseAttachParentBound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAttachParentBound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bComputeFastLocalBounds_MetaData[];
#endif
		static void NewProp_bComputeFastLocalBounds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bComputeFastLocalBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bComputeBoundsOnceForGame_MetaData[];
#endif
		static void NewProp_bComputeBoundsOnceForGame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bComputeBoundsOnceForGame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bComputedBoundsOnceForGame_MetaData[];
#endif
		static void NewProp_bComputedBoundsOnceForGame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bComputedBoundsOnceForGame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsNotRenderAttachmentRoot_MetaData[];
#endif
		static void NewProp_bIsNotRenderAttachmentRoot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsNotRenderAttachmentRoot;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVisualizeComponent_MetaData[];
#endif
		static void NewProp_bVisualizeComponent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisualizeComponent;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mobility_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mobility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DetailMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DetailMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsVolumeChangedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_PhysicsVolumeChangedDelegate;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplacementSceneComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReplacementSceneComponent;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USceneComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USceneComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USceneComponent_DetachFromParent, "DetachFromParent" }, // 2294867610
		{ &Z_Construct_UFunction_USceneComponent_DoesSocketExist, "DoesSocketExist" }, // 3108677569
		{ &Z_Construct_UFunction_USceneComponent_GetAllSocketNames, "GetAllSocketNames" }, // 3754790900
		{ &Z_Construct_UFunction_USceneComponent_GetAttachParent, "GetAttachParent" }, // 3259233377
		{ &Z_Construct_UFunction_USceneComponent_GetAttachSocketName, "GetAttachSocketName" }, // 2010635612
		{ &Z_Construct_UFunction_USceneComponent_GetChildComponent, "GetChildComponent" }, // 155080640
		{ &Z_Construct_UFunction_USceneComponent_GetChildrenComponents, "GetChildrenComponents" }, // 2149274487
		{ &Z_Construct_UFunction_USceneComponent_GetComponentVelocity, "GetComponentVelocity" }, // 2836397030
		{ &Z_Construct_UFunction_USceneComponent_GetForwardVector, "GetForwardVector" }, // 4291116331
		{ &Z_Construct_UFunction_USceneComponent_GetNumChildrenComponents, "GetNumChildrenComponents" }, // 739336721
		{ &Z_Construct_UFunction_USceneComponent_GetParentComponents, "GetParentComponents" }, // 2153127686
		{ &Z_Construct_UFunction_USceneComponent_GetPhysicsVolume, "GetPhysicsVolume" }, // 3911724428
		{ &Z_Construct_UFunction_USceneComponent_GetRelativeTransform, "GetRelativeTransform" }, // 2369437182
		{ &Z_Construct_UFunction_USceneComponent_GetRightVector, "GetRightVector" }, // 821460986
		{ &Z_Construct_UFunction_USceneComponent_GetShouldUpdatePhysicsVolume, "GetShouldUpdatePhysicsVolume" }, // 1978457091
		{ &Z_Construct_UFunction_USceneComponent_GetSocketLocation, "GetSocketLocation" }, // 2015204952
		{ &Z_Construct_UFunction_USceneComponent_GetSocketQuaternion, "GetSocketQuaternion" }, // 3506528375
		{ &Z_Construct_UFunction_USceneComponent_GetSocketRotation, "GetSocketRotation" }, // 248290430
		{ &Z_Construct_UFunction_USceneComponent_GetSocketTransform, "GetSocketTransform" }, // 4223967930
		{ &Z_Construct_UFunction_USceneComponent_GetUpVector, "GetUpVector" }, // 688876228
		{ &Z_Construct_UFunction_USceneComponent_IsAnySimulatingPhysics, "IsAnySimulatingPhysics" }, // 3806592804
		{ &Z_Construct_UFunction_USceneComponent_IsSimulatingPhysics, "IsSimulatingPhysics" }, // 46031052
		{ &Z_Construct_UFunction_USceneComponent_IsVisible, "IsVisible" }, // 3403710382
		{ &Z_Construct_UFunction_USceneComponent_K2_AddLocalOffset, "K2_AddLocalOffset" }, // 4044024167
		{ &Z_Construct_UFunction_USceneComponent_K2_AddLocalRotation, "K2_AddLocalRotation" }, // 1791696652
		{ &Z_Construct_UFunction_USceneComponent_K2_AddLocalTransform, "K2_AddLocalTransform" }, // 3371868946
		{ &Z_Construct_UFunction_USceneComponent_K2_AddRelativeLocation, "K2_AddRelativeLocation" }, // 1944007533
		{ &Z_Construct_UFunction_USceneComponent_K2_AddRelativeRotation, "K2_AddRelativeRotation" }, // 2275129384
		{ &Z_Construct_UFunction_USceneComponent_K2_AddWorldOffset, "K2_AddWorldOffset" }, // 3168640033
		{ &Z_Construct_UFunction_USceneComponent_K2_AddWorldRotation, "K2_AddWorldRotation" }, // 1177644906
		{ &Z_Construct_UFunction_USceneComponent_K2_AddWorldTransform, "K2_AddWorldTransform" }, // 1284149070
		{ &Z_Construct_UFunction_USceneComponent_K2_AddWorldTransformKeepScale, "K2_AddWorldTransformKeepScale" }, // 2183886047
		{ &Z_Construct_UFunction_USceneComponent_K2_AttachTo, "K2_AttachTo" }, // 1889515635
		{ &Z_Construct_UFunction_USceneComponent_K2_AttachToComponent, "K2_AttachToComponent" }, // 1773080923
		{ &Z_Construct_UFunction_USceneComponent_K2_DetachFromComponent, "K2_DetachFromComponent" }, // 3189432664
		{ &Z_Construct_UFunction_USceneComponent_K2_GetComponentLocation, "K2_GetComponentLocation" }, // 2204836008
		{ &Z_Construct_UFunction_USceneComponent_K2_GetComponentRotation, "K2_GetComponentRotation" }, // 1124962777
		{ &Z_Construct_UFunction_USceneComponent_K2_GetComponentScale, "K2_GetComponentScale" }, // 1487460301
		{ &Z_Construct_UFunction_USceneComponent_K2_GetComponentToWorld, "K2_GetComponentToWorld" }, // 2027887792
		{ &Z_Construct_UFunction_USceneComponent_K2_SetRelativeLocation, "K2_SetRelativeLocation" }, // 1401434786
		{ &Z_Construct_UFunction_USceneComponent_K2_SetRelativeLocationAndRotation, "K2_SetRelativeLocationAndRotation" }, // 3057905895
		{ &Z_Construct_UFunction_USceneComponent_K2_SetRelativeRotation, "K2_SetRelativeRotation" }, // 3569270872
		{ &Z_Construct_UFunction_USceneComponent_K2_SetRelativeTransform, "K2_SetRelativeTransform" }, // 877649901
		{ &Z_Construct_UFunction_USceneComponent_K2_SetWorldLocation, "K2_SetWorldLocation" }, // 1581518563
		{ &Z_Construct_UFunction_USceneComponent_K2_SetWorldLocationAndRotation, "K2_SetWorldLocationAndRotation" }, // 1100592933
		{ &Z_Construct_UFunction_USceneComponent_K2_SetWorldRotation, "K2_SetWorldRotation" }, // 2210793270
		{ &Z_Construct_UFunction_USceneComponent_K2_SetWorldTransform, "K2_SetWorldTransform" }, // 1841342191
		{ &Z_Construct_UFunction_USceneComponent_OnRep_AttachChildren, "OnRep_AttachChildren" }, // 1162264186
		{ &Z_Construct_UFunction_USceneComponent_OnRep_AttachParent, "OnRep_AttachParent" }, // 2725538467
		{ &Z_Construct_UFunction_USceneComponent_OnRep_AttachSocketName, "OnRep_AttachSocketName" }, // 335991195
		{ &Z_Construct_UFunction_USceneComponent_OnRep_Transform, "OnRep_Transform" }, // 2278268724
		{ &Z_Construct_UFunction_USceneComponent_OnRep_Visibility, "OnRep_Visibility" }, // 2360160494
		{ &Z_Construct_UFunction_USceneComponent_ResetRelativeTransform, "ResetRelativeTransform" }, // 2220242263
		{ &Z_Construct_UFunction_USceneComponent_SetAbsolute, "SetAbsolute" }, // 3668964794
		{ &Z_Construct_UFunction_USceneComponent_SetHiddenInGame, "SetHiddenInGame" }, // 3113233606
		{ &Z_Construct_UFunction_USceneComponent_SetMobility, "SetMobility" }, // 2223656870
		{ &Z_Construct_UFunction_USceneComponent_SetRelativeScale3D, "SetRelativeScale3D" }, // 2729213280
		{ &Z_Construct_UFunction_USceneComponent_SetShouldUpdatePhysicsVolume, "SetShouldUpdatePhysicsVolume" }, // 510760872
		{ &Z_Construct_UFunction_USceneComponent_SetVisibility, "SetVisibility" }, // 2093043083
		{ &Z_Construct_UFunction_USceneComponent_SetWorldScale3D, "SetWorldScale3D" }, // 2531005092
		{ &Z_Construct_UFunction_USceneComponent_ToggleVisibility, "ToggleVisibility" }, // 885455076
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Utility Common" },
		{ "Comment", "/**\n * A SceneComponent has a transform and supports attachment, but has no rendering or collision capabilities.\n * Useful as a 'dummy' component in the hierarchy to offset others.\n * @see [Scene Components](https://docs.unrealengine.com/latest/INT/Programming/UnrealArchitecture/Actors/Components/index.html#scenecomponents)\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IgnoreCategoryKeywordsInSubclasses", "" },
		{ "IncludePath", "Components/SceneComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShortTooltip", "A Scene Component is a component that has a scene transform and can be attached to other scene components." },
		{ "ToolTip", "A SceneComponent has a transform and supports attachment, but has no rendering or collision capabilities.\nUseful as a 'dummy' component in the hierarchy to offset others.\n@see [Scene Components](https://docs.unrealengine.com/latest/INT/Programming/UnrealArchitecture/Actors/Components/index.html#scenecomponents)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneComponent_Statics::NewProp_PhysicsVolume_MetaData[] = {
		{ "Comment", "/** Physics Volume in which this SceneComponent is located **/" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "Physics Volume in which this SceneComponent is located *" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USceneComponent_Statics::NewProp_PhysicsVolume = { "PhysicsVolume", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USceneComponent, PhysicsVolume), Z_Construct_UClass_APhysicsVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USceneComponent_Statics::NewProp_PhysicsVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneComponent_Statics::NewProp_PhysicsVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneComponent_Statics::NewProp_AttachParent_MetaData[] = {
		{ "Comment", "/** What we are currently attached to. If valid, RelativeLocation etc. are used relative to this object */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "What we are currently attached to. If valid, RelativeLocation etc. are used relative to this object" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USceneComponent_Statics::NewProp_AttachParent = { "AttachParent", "OnRep_AttachParent", (EPropertyFlags)0x0044000100080028, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USceneComponent, AttachParent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USceneComponent_Statics::NewProp_AttachParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneComponent_Statics::NewProp_AttachParent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneComponent_Statics::NewProp_AttachSocketName_MetaData[] = {
		{ "Comment", "/** Optional socket name on AttachParent that we are attached to. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "Optional socket name on AttachParent that we are attached to." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USceneComponent_Statics::NewProp_AttachSocketName = { "AttachSocketName", "OnRep_AttachSocketName", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USceneComponent, AttachSocketName), METADATA_PARAMS(Z_Construct_UClass_USceneComponent_Statics::NewProp_AttachSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneComponent_Statics::NewProp_AttachSocketName_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USceneComponent_Statics::NewProp_AttachChildren_Inner = { "AttachChildren", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneComponent_Statics::NewProp_AttachChildren_MetaData[] = {
		{ "Comment", "/** List of child SceneComponents that are attached to us. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "List of child SceneComponents that are attached to us." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USceneComponent_Statics::NewProp_AttachChildren = { "AttachChildren", "OnRep_AttachChildren", (EPropertyFlags)0x0044008100002028, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USceneComponent, AttachChildren), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USceneComponent_Statics::NewProp_AttachChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneComponent_Statics::NewProp_AttachChildren_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USceneComponent_Statics::NewProp_ClientAttachedChildren_Inner = { "ClientAttachedChildren", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneComponent_Statics::NewProp_ClientAttachedChildren_MetaData[] = {
		{ "Comment", "/** Set of attached SceneComponents that were attached by the client so we can fix up AttachChildren when it is replicated to us. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "Set of attached SceneComponents that were attached by the client so we can fix up AttachChildren when it is replicated to us." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USceneComponent_Statics::NewProp_ClientAttachedChildren = { "ClientAttachedChildren", nullptr, (EPropertyFlags)0x0044008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USceneComponent, ClientAttachedChildren), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USceneComponent_Statics::NewProp_ClientAttachedChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneComponent_Statics::NewProp_ClientAttachedChildren_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneComponent_Statics::NewProp_RelativeLocation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Transform" },
		{ "Comment", "/** Location of the component relative to its parent */" },
		{ "Delta", "1.0" },
		{ "LinearDeltaSensitivity", "1" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "Location of the component relative to its parent" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USceneComponent_Statics::NewProp_RelativeLocation = { "RelativeLocation", "OnRep_Transform", (EPropertyFlags)0x0040000100000035, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USceneComponent, RelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USceneComponent_Statics::NewProp_RelativeLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneComponent_Statics::NewProp_RelativeLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneComponent_Statics::NewProp_RelativeRotation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Transform" },
		{ "Comment", "/** Rotation of the component relative to its parent */" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "Rotation of the component relative to its parent" },
		{ "UIMax", "359.999" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USceneComponent_Statics::NewProp_RelativeRotation = { "RelativeRotation", "OnRep_Transform", (EPropertyFlags)0x0040000100000035, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USceneComponent, RelativeRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_USceneComponent_Statics::NewProp_RelativeRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneComponent_Statics::NewProp_RelativeRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneComponent_Statics::NewProp_RelativeScale3D_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Transform" },
		{ "Comment", "/**\n\x09*\x09Non-uniform scaling of the component relative to its parent.\n\x09*\x09Note that scaling is always applied in local space (no shearing etc)\n\x09*/" },
		{ "Delta", "0.0025" },
		{ "LinearDeltaSensitivity", "1" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "Non-uniform scaling of the component relative to its parent.\nNote that scaling is always applied in local space (no shearing etc)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USceneComponent_Statics::NewProp_RelativeScale3D = { "RelativeScale3D", "OnRep_Transform", (EPropertyFlags)0x0040000100000035, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USceneComponent, RelativeScale3D), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USceneComponent_Statics::NewProp_RelativeScale3D_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneComponent_Statics::NewProp_RelativeScale3D_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneComponent_Statics::NewProp_ComponentVelocity_MetaData[] = {
		{ "Comment", "/**\n\x09* Velocity of the component.\n\x09* @see GetComponentVelocity()\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "Velocity of the component.\n@see GetComponentVelocity()" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USceneComponent_Statics::NewProp_ComponentVelocity = { "ComponentVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USceneComponent, ComponentVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USceneComponent_Statics::NewProp_ComponentVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneComponent_Statics::NewProp_ComponentVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneComponent_Statics::NewProp_bComponentToWorldUpdated_MetaData[] = {
		{ "Comment", "/** True if we have ever updated ComponentToWorld based on RelativeLocation/Rotation/Scale. Used at startup to make sure it is initialized. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "True if we have ever updated ComponentToWorld based on RelativeLocation/Rotation/Scale. Used at startup to make sure it is initialized." },
	};
#endif
	void Z_Construct_UClass_USceneComponent_Statics::NewProp_bComponentToWorldUpdated_SetBit(void* Obj)
	{
		((USceneComponent*)Obj)->bComponentToWorldUpdated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneComponent_Statics::NewProp_bComponentToWorldUpdated = { "bComponentToWorldUpdated", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USceneComponent), &Z_Construct_UClass_USceneComponent_Statics::NewProp_bComponentToWorldUpdated_SetBit, METADATA_PARAMS(Z_Construct_UClass_USceneComponent_Statics::NewProp_bComponentToWorldUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneComponent_Statics::NewProp_bComponentToWorldUpdated_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneComponent_Statics::NewProp_bAbsoluteLocation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Transform" },
		{ "Comment", "/** If RelativeLocation should be considered relative to the world, rather than the parent */" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "If RelativeLocation should be considered relative to the world, rather than the parent" },
	};
#endif
	void Z_Construct_UClass_USceneComponent_Statics::NewProp_bAbsoluteLocation_SetBit(void* Obj)
	{
		((USceneComponent*)Obj)->bAbsoluteLocation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneComponent_Statics::NewProp_bAbsoluteLocation = { "bAbsoluteLocation", "OnRep_Transform", (EPropertyFlags)0x0040040100000025, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USceneComponent), &Z_Construct_UClass_USceneComponent_Statics::NewProp_bAbsoluteLocation_SetBit, METADATA_PARAMS(Z_Construct_UClass_USceneComponent_Statics::NewProp_bAbsoluteLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneComponent_Statics::NewProp_bAbsoluteLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneComponent_Statics::NewProp_bAbsoluteRotation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Transform" },
		{ "Comment", "/** If RelativeRotation should be considered relative to the world, rather than the parent */" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "If RelativeRotation should be considered relative to the world, rather than the parent" },
	};
#endif
	void Z_Construct_UClass_USceneComponent_Statics::NewProp_bAbsoluteRotation_SetBit(void* Obj)
	{
		((USceneComponent*)Obj)->bAbsoluteRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneComponent_Statics::NewProp_bAbsoluteRotation = { "bAbsoluteRotation", "OnRep_Transform", (EPropertyFlags)0x0040040100000025, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USceneComponent), &Z_Construct_UClass_USceneComponent_Statics::NewProp_bAbsoluteRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_USceneComponent_Statics::NewProp_bAbsoluteRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneComponent_Statics::NewProp_bAbsoluteRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneComponent_Statics::NewProp_bAbsoluteScale_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Transform" },
		{ "Comment", "/** If RelativeScale3D should be considered relative to the world, rather than the parent */" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "If RelativeScale3D should be considered relative to the world, rather than the parent" },
	};
#endif
	void Z_Construct_UClass_USceneComponent_Statics::NewProp_bAbsoluteScale_SetBit(void* Obj)
	{
		((USceneComponent*)Obj)->bAbsoluteScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneComponent_Statics::NewProp_bAbsoluteScale = { "bAbsoluteScale", "OnRep_Transform", (EPropertyFlags)0x0040040100000025, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USceneComponent), &Z_Construct_UClass_USceneComponent_Statics::NewProp_bAbsoluteScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_USceneComponent_Statics::NewProp_bAbsoluteScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneComponent_Statics::NewProp_bAbsoluteScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneComponent_Statics::NewProp_bVisible_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Rendering" },
		{ "Comment", "/** Whether to completely draw the primitive; if false, the primitive is not drawn, does not cast a shadow. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "Whether to completely draw the primitive; if false, the primitive is not drawn, does not cast a shadow." },
	};
#endif
	void Z_Construct_UClass_USceneComponent_Statics::NewProp_bVisible_SetBit(void* Obj)
	{
		((USceneComponent*)Obj)->bVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneComponent_Statics::NewProp_bVisible = { "bVisible", "OnRep_Visibility", (EPropertyFlags)0x0040000100000035, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USceneComponent), &Z_Construct_UClass_USceneComponent_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_USceneComponent_Statics::NewProp_bVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneComponent_Statics::NewProp_bVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneComponent_Statics::NewProp_bShouldBeAttached_MetaData[] = {
		{ "Comment", "/** Whether or not we should be attached. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "Whether or not we should be attached." },
	};
#endif
	void Z_Construct_UClass_USceneComponent_Statics::NewProp_bShouldBeAttached_SetBit(void* Obj)
	{
		((USceneComponent*)Obj)->bShouldBeAttached = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneComponent_Statics::NewProp_bShouldBeAttached = { "bShouldBeAttached", nullptr, (EPropertyFlags)0x0040000000002020, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USceneComponent), &Z_Construct_UClass_USceneComponent_Statics::NewProp_bShouldBeAttached_SetBit, METADATA_PARAMS(Z_Construct_UClass_USceneComponent_Statics::NewProp_bShouldBeAttached_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneComponent_Statics::NewProp_bShouldBeAttached_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneComponent_Statics::NewProp_bShouldSnapLocationWhenAttached_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
	};
#endif
	void Z_Construct_UClass_USceneComponent_Statics::NewProp_bShouldSnapLocationWhenAttached_SetBit(void* Obj)
	{
		((USceneComponent*)Obj)->bShouldSnapLocationWhenAttached = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneComponent_Statics::NewProp_bShouldSnapLocationWhenAttached = { "bShouldSnapLocationWhenAttached", nullptr, (EPropertyFlags)0x0040000000002020, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USceneComponent), &Z_Construct_UClass_USceneComponent_Statics::NewProp_bShouldSnapLocationWhenAttached_SetBit, METADATA_PARAMS(Z_Construct_UClass_USceneComponent_Statics::NewProp_bShouldSnapLocationWhenAttached_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneComponent_Statics::NewProp_bShouldSnapLocationWhenAttached_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneComponent_Statics::NewProp_bShouldSnapRotationWhenAttached_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
	};
#endif
	void Z_Construct_UClass_USceneComponent_Statics::NewProp_bShouldSnapRotationWhenAttached_SetBit(void* Obj)
	{
		((USceneComponent*)Obj)->bShouldSnapRotationWhenAttached = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneComponent_Statics::NewProp_bShouldSnapRotationWhenAttached = { "bShouldSnapRotationWhenAttached", nullptr, (EPropertyFlags)0x0040000000002020, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USceneComponent), &Z_Construct_UClass_USceneComponent_Statics::NewProp_bShouldSnapRotationWhenAttached_SetBit, METADATA_PARAMS(Z_Construct_UClass_USceneComponent_Statics::NewProp_bShouldSnapRotationWhenAttached_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneComponent_Statics::NewProp_bShouldSnapRotationWhenAttached_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneComponent_Statics::NewProp_bShouldSnapScaleWhenAttached_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
	};
#endif
	void Z_Construct_UClass_USceneComponent_Statics::NewProp_bShouldSnapScaleWhenAttached_SetBit(void* Obj)
	{
		((USceneComponent*)Obj)->bShouldSnapScaleWhenAttached = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneComponent_Statics::NewProp_bShouldSnapScaleWhenAttached = { "bShouldSnapScaleWhenAttached", nullptr, (EPropertyFlags)0x0040000000002020, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USceneComponent), &Z_Construct_UClass_USceneComponent_Statics::NewProp_bShouldSnapScaleWhenAttached_SetBit, METADATA_PARAMS(Z_Construct_UClass_USceneComponent_Statics::NewProp_bShouldSnapScaleWhenAttached_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneComponent_Statics::NewProp_bShouldSnapScaleWhenAttached_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneComponent_Statics::NewProp_bShouldUpdatePhysicsVolume_MetaData[] = {
		{ "BlueprintGetter", "GetShouldUpdatePhysicsVolume" },
		{ "BlueprintSetter", "SetShouldUpdatePhysicsVolume" },
		{ "Category", "Physics" },
		{ "Comment", "/**\n\x09 * Whether or not the cached PhysicsVolume this component overlaps should be updated when the component is moved.\n\x09 * @see GetPhysicsVolume()\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "Whether or not the cached PhysicsVolume this component overlaps should be updated when the component is moved.\n@see GetPhysicsVolume()" },
	};
#endif
	void Z_Construct_UClass_USceneComponent_Statics::NewProp_bShouldUpdatePhysicsVolume_SetBit(void* Obj)
	{
		((USceneComponent*)Obj)->bShouldUpdatePhysicsVolume = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneComponent_Statics::NewProp_bShouldUpdatePhysicsVolume = { "bShouldUpdatePhysicsVolume", nullptr, (EPropertyFlags)0x0040040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USceneComponent), &Z_Construct_UClass_USceneComponent_Statics::NewProp_bShouldUpdatePhysicsVolume_SetBit, METADATA_PARAMS(Z_Construct_UClass_USceneComponent_Statics::NewProp_bShouldUpdatePhysicsVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneComponent_Statics::NewProp_bShouldUpdatePhysicsVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneComponent_Statics::NewProp_bHiddenInGame_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Whether to hide the primitive in game, if the primitive is Visible. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "SequencerTrackClass", "/Script/MovieSceneTracks.MovieSceneVisibilityTrack" },
		{ "ToolTip", "Whether to hide the primitive in game, if the primitive is Visible." },
	};
#endif
	void Z_Construct_UClass_USceneComponent_Statics::NewProp_bHiddenInGame_SetBit(void* Obj)
	{
		((USceneComponent*)Obj)->bHiddenInGame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneComponent_Statics::NewProp_bHiddenInGame = { "bHiddenInGame", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USceneComponent), &Z_Construct_UClass_USceneComponent_Statics::NewProp_bHiddenInGame_SetBit, METADATA_PARAMS(Z_Construct_UClass_USceneComponent_Statics::NewProp_bHiddenInGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneComponent_Statics::NewProp_bHiddenInGame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneComponent_Statics::NewProp_bBoundsChangeTriggersStreamingDataRebuild_MetaData[] = {
		{ "Comment", "/** If true, a change in the bounds of the component will call trigger a streaming data rebuild */" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "If true, a change in the bounds of the component will call trigger a streaming data rebuild" },
	};
#endif
	void Z_Construct_UClass_USceneComponent_Statics::NewProp_bBoundsChangeTriggersStreamingDataRebuild_SetBit(void* Obj)
	{
		((USceneComponent*)Obj)->bBoundsChangeTriggersStreamingDataRebuild = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneComponent_Statics::NewProp_bBoundsChangeTriggersStreamingDataRebuild = { "bBoundsChangeTriggersStreamingDataRebuild", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USceneComponent), &Z_Construct_UClass_USceneComponent_Statics::NewProp_bBoundsChangeTriggersStreamingDataRebuild_SetBit, METADATA_PARAMS(Z_Construct_UClass_USceneComponent_Statics::NewProp_bBoundsChangeTriggersStreamingDataRebuild_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneComponent_Statics::NewProp_bBoundsChangeTriggersStreamingDataRebuild_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneComponent_Statics::NewProp_bUseAttachParentBound_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** If true, this component uses its parents bounds when attached.\n\x09 *  This can be a significant optimization with many components attached together.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "If true, this component uses its parents bounds when attached.\nThis can be a significant optimization with many components attached together." },
	};
#endif
	void Z_Construct_UClass_USceneComponent_Statics::NewProp_bUseAttachParentBound_SetBit(void* Obj)
	{
		((USceneComponent*)Obj)->bUseAttachParentBound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneComponent_Statics::NewProp_bUseAttachParentBound = { "bUseAttachParentBound", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USceneComponent), &Z_Construct_UClass_USceneComponent_Statics::NewProp_bUseAttachParentBound_SetBit, METADATA_PARAMS(Z_Construct_UClass_USceneComponent_Statics::NewProp_bUseAttachParentBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneComponent_Statics::NewProp_bUseAttachParentBound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneComponent_Statics::NewProp_bComputeFastLocalBounds_MetaData[] = {
		{ "Comment", "/** If true, this component will use its current bounds transformed back into local space instead of calling CalcBounds with an identity transform. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "If true, this component will use its current bounds transformed back into local space instead of calling CalcBounds with an identity transform." },
	};
#endif
	void Z_Construct_UClass_USceneComponent_Statics::NewProp_bComputeFastLocalBounds_SetBit(void* Obj)
	{
		((USceneComponent*)Obj)->bComputeFastLocalBounds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneComponent_Statics::NewProp_bComputeFastLocalBounds = { "bComputeFastLocalBounds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USceneComponent), &Z_Construct_UClass_USceneComponent_Statics::NewProp_bComputeFastLocalBounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_USceneComponent_Statics::NewProp_bComputeFastLocalBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneComponent_Statics::NewProp_bComputeFastLocalBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneComponent_Statics::NewProp_bComputeBoundsOnceForGame_MetaData[] = {
		{ "Comment", "/** If true, this component will cache its bounds during cooking or in PIE and never recompute it again. This is for components that are known to be static. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "If true, this component will cache its bounds during cooking or in PIE and never recompute it again. This is for components that are known to be static." },
	};
#endif
	void Z_Construct_UClass_USceneComponent_Statics::NewProp_bComputeBoundsOnceForGame_SetBit(void* Obj)
	{
		((USceneComponent*)Obj)->bComputeBoundsOnceForGame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneComponent_Statics::NewProp_bComputeBoundsOnceForGame = { "bComputeBoundsOnceForGame", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USceneComponent), &Z_Construct_UClass_USceneComponent_Statics::NewProp_bComputeBoundsOnceForGame_SetBit, METADATA_PARAMS(Z_Construct_UClass_USceneComponent_Statics::NewProp_bComputeBoundsOnceForGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneComponent_Statics::NewProp_bComputeBoundsOnceForGame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneComponent_Statics::NewProp_bComputedBoundsOnceForGame_MetaData[] = {
		{ "Comment", "/** If true, this component has already cached its bounds during cooking or in PIE and will never recompute it again.  */" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "If true, this component has already cached its bounds during cooking or in PIE and will never recompute it again." },
	};
#endif
	void Z_Construct_UClass_USceneComponent_Statics::NewProp_bComputedBoundsOnceForGame_SetBit(void* Obj)
	{
		((USceneComponent*)Obj)->bComputedBoundsOnceForGame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneComponent_Statics::NewProp_bComputedBoundsOnceForGame = { "bComputedBoundsOnceForGame", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USceneComponent), &Z_Construct_UClass_USceneComponent_Statics::NewProp_bComputedBoundsOnceForGame_SetBit, METADATA_PARAMS(Z_Construct_UClass_USceneComponent_Statics::NewProp_bComputedBoundsOnceForGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneComponent_Statics::NewProp_bComputedBoundsOnceForGame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneComponent_Statics::NewProp_bIsNotRenderAttachmentRoot_MetaData[] = {
		{ "Comment", "/** If true, this component stops the the walk up the attachment chain in GetActorPositionForRenderer(). Instead this component's child will be used as the attachment root. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "If true, this component stops the the walk up the attachment chain in GetActorPositionForRenderer(). Instead this component's child will be used as the attachment root." },
	};
#endif
	void Z_Construct_UClass_USceneComponent_Statics::NewProp_bIsNotRenderAttachmentRoot_SetBit(void* Obj)
	{
		((USceneComponent*)Obj)->bIsNotRenderAttachmentRoot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneComponent_Statics::NewProp_bIsNotRenderAttachmentRoot = { "bIsNotRenderAttachmentRoot", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USceneComponent), &Z_Construct_UClass_USceneComponent_Statics::NewProp_bIsNotRenderAttachmentRoot_SetBit, METADATA_PARAMS(Z_Construct_UClass_USceneComponent_Statics::NewProp_bIsNotRenderAttachmentRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneComponent_Statics::NewProp_bIsNotRenderAttachmentRoot_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneComponent_Statics::NewProp_bVisualizeComponent_MetaData[] = {
		{ "Comment", "/** This component should create a sprite component for visualization in the editor */" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "This component should create a sprite component for visualization in the editor" },
	};
#endif
	void Z_Construct_UClass_USceneComponent_Statics::NewProp_bVisualizeComponent_SetBit(void* Obj)
	{
		((USceneComponent*)Obj)->bVisualizeComponent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneComponent_Statics::NewProp_bVisualizeComponent = { "bVisualizeComponent", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USceneComponent), &Z_Construct_UClass_USceneComponent_Statics::NewProp_bVisualizeComponent_SetBit, METADATA_PARAMS(Z_Construct_UClass_USceneComponent_Statics::NewProp_bVisualizeComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneComponent_Statics::NewProp_bVisualizeComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneComponent_Statics::NewProp_Mobility_MetaData[] = {
		{ "Category", "Mobility" },
		{ "Comment", "/** How often this component is allowed to move, used to make various optimizations. Only safe to set in constructor. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "How often this component is allowed to move, used to make various optimizations. Only safe to set in constructor." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USceneComponent_Statics::NewProp_Mobility = { "Mobility", nullptr, (EPropertyFlags)0x0010000000000035, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USceneComponent, Mobility), Z_Construct_UEnum_Engine_EComponentMobility, METADATA_PARAMS(Z_Construct_UClass_USceneComponent_Statics::NewProp_Mobility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneComponent_Statics::NewProp_Mobility_MetaData)) }; // 3258784245
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneComponent_Statics::NewProp_DetailMode_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "/** If detail mode is >= system detail mode, primitive won't be rendered. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "If detail mode is >= system detail mode, primitive won't be rendered." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USceneComponent_Statics::NewProp_DetailMode = { "DetailMode", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USceneComponent, DetailMode), Z_Construct_UEnum_Engine_EDetailMode, METADATA_PARAMS(Z_Construct_UClass_USceneComponent_Statics::NewProp_DetailMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneComponent_Statics::NewProp_DetailMode_MetaData)) }; // 3777735330
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneComponent_Statics::NewProp_PhysicsVolumeChangedDelegate_MetaData[] = {
		{ "Category", "PhysicsVolume" },
		{ "Comment", "/** Delegate that will be called when PhysicsVolume has been changed **/" },
		{ "DisplayName", "Physics Volume Changed" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "Delegate that will be called when PhysicsVolume has been changed *" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USceneComponent_Statics::NewProp_PhysicsVolumeChangedDelegate = { "PhysicsVolumeChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USceneComponent, PhysicsVolumeChangedDelegate), Z_Construct_USparseDelegateFunction_Engine_PhysicsVolumeChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USceneComponent_Statics::NewProp_PhysicsVolumeChangedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneComponent_Statics::NewProp_PhysicsVolumeChangedDelegate_MetaData)) }; // 131101755
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneComponent_Statics::NewProp_ReplacementSceneComponent_MetaData[] = {
		{ "Comment", "/**\n\x09 * @todo_ow: This is needed because of order of registration of Actors\n\x09 * \n\x09 * In World Partition Levels loaded actors are Registered in an atomic fashion meaning we register all their\n\x09 * components and then call RerunConstructionScripts before loading the next actor. This means that a Parent can be Reconstructed and trash its components\n\x09 * without notifying its attached actors.\n\x09 * \n\x09 * In Non World Partition Levels when adding actors to world we sort all actors based on hierarchy, register all actors and then RerunConstructionScripts on all actors\n\x09 * which allows handling of Attachments as attached actors are already registered when the parent gets reconstructed and so attachment is preserved.\n\x09 * \n\x09 * ReplacementSceneComponent is there as a temp solution to allow finding of the replacement component of a trashed scene component. \n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "@todo_ow: This is needed because of order of registration of Actors\n\nIn World Partition Levels loaded actors are Registered in an atomic fashion meaning we register all their\ncomponents and then call RerunConstructionScripts before loading the next actor. This means that a Parent can be Reconstructed and trash its components\nwithout notifying its attached actors.\n\nIn Non World Partition Levels when adding actors to world we sort all actors based on hierarchy, register all actors and then RerunConstructionScripts on all actors\nwhich allows handling of Attachments as attached actors are already registered when the parent gets reconstructed and so attachment is preserved.\n\nReplacementSceneComponent is there as a temp solution to allow finding of the replacement component of a trashed scene component." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USceneComponent_Statics::NewProp_ReplacementSceneComponent = { "ReplacementSceneComponent", nullptr, (EPropertyFlags)0x0014000800082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USceneComponent, ReplacementSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USceneComponent_Statics::NewProp_ReplacementSceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneComponent_Statics::NewProp_ReplacementSceneComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USceneComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneComponent_Statics::NewProp_PhysicsVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneComponent_Statics::NewProp_AttachParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneComponent_Statics::NewProp_AttachSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneComponent_Statics::NewProp_AttachChildren_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneComponent_Statics::NewProp_AttachChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneComponent_Statics::NewProp_ClientAttachedChildren_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneComponent_Statics::NewProp_ClientAttachedChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneComponent_Statics::NewProp_RelativeLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneComponent_Statics::NewProp_RelativeRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneComponent_Statics::NewProp_RelativeScale3D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneComponent_Statics::NewProp_ComponentVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneComponent_Statics::NewProp_bComponentToWorldUpdated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneComponent_Statics::NewProp_bAbsoluteLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneComponent_Statics::NewProp_bAbsoluteRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneComponent_Statics::NewProp_bAbsoluteScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneComponent_Statics::NewProp_bVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneComponent_Statics::NewProp_bShouldBeAttached,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneComponent_Statics::NewProp_bShouldSnapLocationWhenAttached,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneComponent_Statics::NewProp_bShouldSnapRotationWhenAttached,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneComponent_Statics::NewProp_bShouldSnapScaleWhenAttached,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneComponent_Statics::NewProp_bShouldUpdatePhysicsVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneComponent_Statics::NewProp_bHiddenInGame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneComponent_Statics::NewProp_bBoundsChangeTriggersStreamingDataRebuild,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneComponent_Statics::NewProp_bUseAttachParentBound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneComponent_Statics::NewProp_bComputeFastLocalBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneComponent_Statics::NewProp_bComputeBoundsOnceForGame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneComponent_Statics::NewProp_bComputedBoundsOnceForGame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneComponent_Statics::NewProp_bIsNotRenderAttachmentRoot,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneComponent_Statics::NewProp_bVisualizeComponent,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneComponent_Statics::NewProp_Mobility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneComponent_Statics::NewProp_DetailMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneComponent_Statics::NewProp_PhysicsVolumeChangedDelegate,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneComponent_Statics::NewProp_ReplacementSceneComponent,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USceneComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USceneComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USceneComponent_Statics::ClassParams = {
		&USceneComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USceneComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USceneComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USceneComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USceneComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USceneComponent()
	{
		if (!Z_Registration_Info_UClass_USceneComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USceneComponent.OuterSingleton, Z_Construct_UClass_USceneComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USceneComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USceneComponent>()
	{
		return USceneComponent::StaticClass();
	}

	void USceneComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_AttachParent(TEXT("AttachParent"));
		static const FName Name_AttachSocketName(TEXT("AttachSocketName"));
		static const FName Name_AttachChildren(TEXT("AttachChildren"));
		static const FName Name_RelativeLocation(TEXT("RelativeLocation"));
		static const FName Name_RelativeRotation(TEXT("RelativeRotation"));
		static const FName Name_RelativeScale3D(TEXT("RelativeScale3D"));
		static const FName Name_bAbsoluteLocation(TEXT("bAbsoluteLocation"));
		static const FName Name_bAbsoluteRotation(TEXT("bAbsoluteRotation"));
		static const FName Name_bAbsoluteScale(TEXT("bAbsoluteScale"));
		static const FName Name_bVisible(TEXT("bVisible"));
		static const FName Name_bShouldBeAttached(TEXT("bShouldBeAttached"));
		static const FName Name_bShouldSnapLocationWhenAttached(TEXT("bShouldSnapLocationWhenAttached"));
		static const FName Name_bShouldSnapRotationWhenAttached(TEXT("bShouldSnapRotationWhenAttached"));
		static const FName Name_bShouldSnapScaleWhenAttached(TEXT("bShouldSnapScaleWhenAttached"));
		static const FName Name_Mobility(TEXT("Mobility"));

		const bool bIsValid = true
			&& Name_AttachParent == ClassReps[(int32)ENetFields_Private::AttachParent].Property->GetFName()
			&& Name_AttachSocketName == ClassReps[(int32)ENetFields_Private::AttachSocketName].Property->GetFName()
			&& Name_AttachChildren == ClassReps[(int32)ENetFields_Private::AttachChildren].Property->GetFName()
			&& Name_RelativeLocation == ClassReps[(int32)ENetFields_Private::RelativeLocation].Property->GetFName()
			&& Name_RelativeRotation == ClassReps[(int32)ENetFields_Private::RelativeRotation].Property->GetFName()
			&& Name_RelativeScale3D == ClassReps[(int32)ENetFields_Private::RelativeScale3D].Property->GetFName()
			&& Name_bAbsoluteLocation == ClassReps[(int32)ENetFields_Private::bAbsoluteLocation].Property->GetFName()
			&& Name_bAbsoluteRotation == ClassReps[(int32)ENetFields_Private::bAbsoluteRotation].Property->GetFName()
			&& Name_bAbsoluteScale == ClassReps[(int32)ENetFields_Private::bAbsoluteScale].Property->GetFName()
			&& Name_bVisible == ClassReps[(int32)ENetFields_Private::bVisible].Property->GetFName()
			&& Name_bShouldBeAttached == ClassReps[(int32)ENetFields_Private::bShouldBeAttached].Property->GetFName()
			&& Name_bShouldSnapLocationWhenAttached == ClassReps[(int32)ENetFields_Private::bShouldSnapLocationWhenAttached].Property->GetFName()
			&& Name_bShouldSnapRotationWhenAttached == ClassReps[(int32)ENetFields_Private::bShouldSnapRotationWhenAttached].Property->GetFName()
			&& Name_bShouldSnapScaleWhenAttached == ClassReps[(int32)ENetFields_Private::bShouldSnapScaleWhenAttached].Property->GetFName()
			&& Name_Mobility == ClassReps[(int32)ENetFields_Private::Mobility].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USceneComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USceneComponent);
	USceneComponent::~USceneComponent() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USceneComponent)

static_assert(std::is_polymorphic<FSceneComponentInstanceData>() == std::is_polymorphic<FActorComponentInstanceData>(), "USTRUCT FSceneComponentInstanceData cannot be polymorphic unless super FActorComponentInstanceData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SceneComponentInstanceData;
class UScriptStruct* FSceneComponentInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SceneComponentInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SceneComponentInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSceneComponentInstanceData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SceneComponentInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_SceneComponentInstanceData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSceneComponentInstanceData>()
{
	return FSceneComponentInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSceneComponentInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttachedInstanceComponents_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttachedInstanceComponents_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachedInstanceComponents_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AttachedInstanceComponents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSceneComponentInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \n *  Component instance cached data base class for scene components. \n *  Stores a list of instance components attached to the \n */" },
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
		{ "ToolTip", "Component instance cached data base class for scene components.\nStores a list of instance components attached to the" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSceneComponentInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSceneComponentInstanceData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSceneComponentInstanceData_Statics::NewProp_AttachedInstanceComponents_ValueProp = { "AttachedInstanceComponents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSceneComponentInstanceData_Statics::NewProp_AttachedInstanceComponents_Key_KeyProp = { "AttachedInstanceComponents_Key", nullptr, (EPropertyFlags)0x0004000000080000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSceneComponentInstanceData_Statics::NewProp_AttachedInstanceComponents_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SceneComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSceneComponentInstanceData_Statics::NewProp_AttachedInstanceComponents = { "AttachedInstanceComponents", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSceneComponentInstanceData, AttachedInstanceComponents), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSceneComponentInstanceData_Statics::NewProp_AttachedInstanceComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSceneComponentInstanceData_Statics::NewProp_AttachedInstanceComponents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSceneComponentInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSceneComponentInstanceData_Statics::NewProp_AttachedInstanceComponents_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSceneComponentInstanceData_Statics::NewProp_AttachedInstanceComponents_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSceneComponentInstanceData_Statics::NewProp_AttachedInstanceComponents,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSceneComponentInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FActorComponentInstanceData,
		&NewStructOps,
		"SceneComponentInstanceData",
		sizeof(FSceneComponentInstanceData),
		alignof(FSceneComponentInstanceData),
		Z_Construct_UScriptStruct_FSceneComponentInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSceneComponentInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSceneComponentInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSceneComponentInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSceneComponentInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_SceneComponentInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SceneComponentInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FSceneComponentInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SceneComponentInstanceData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_Statics::EnumInfo[] = {
		{ EDetailMode_StaticEnum, TEXT("EDetailMode"), &Z_Registration_Info_UEnum_EDetailMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3777735330U) },
		{ ERelativeTransformSpace_StaticEnum, TEXT("ERelativeTransformSpace"), &Z_Registration_Info_UEnum_ERelativeTransformSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3685529446U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_Statics::ScriptStructInfo[] = {
		{ FSceneComponentInstanceData::StaticStruct, Z_Construct_UScriptStruct_FSceneComponentInstanceData_Statics::NewStructOps, TEXT("SceneComponentInstanceData"), &Z_Registration_Info_UScriptStruct_SceneComponentInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSceneComponentInstanceData), 1111041049U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USceneComponent, USceneComponent::StaticClass, TEXT("USceneComponent"), &Z_Registration_Info_UClass_USceneComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USceneComponent), 898209083U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_3630346794(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
