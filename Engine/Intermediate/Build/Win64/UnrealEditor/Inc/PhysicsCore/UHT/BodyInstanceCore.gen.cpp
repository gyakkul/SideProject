// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BodyInstanceCore.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodyInstanceCore() {}
// Cross Module References
	PHYSICSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstanceCore();
	UPackage* Z_Construct_UPackage__Script_PhysicsCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BodyInstanceCore;
class UScriptStruct* FBodyInstanceCore::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BodyInstanceCore.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BodyInstanceCore.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBodyInstanceCore, (UObject*)Z_Construct_UPackage__Script_PhysicsCore(), TEXT("BodyInstanceCore"));
	}
	return Z_Registration_Info_UScriptStruct_BodyInstanceCore.OuterSingleton;
}
template<> PHYSICSCORE_API UScriptStruct* StaticStruct<FBodyInstanceCore>()
{
	return FBodyInstanceCore::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBodyInstanceCore_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSimulatePhysics_MetaData[];
#endif
		static void NewProp_bSimulatePhysics_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimulatePhysics;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideMass_MetaData[];
#endif
		static void NewProp_bOverrideMass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideMass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableGravity_MetaData[];
#endif
		static void NewProp_bEnableGravity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableGravity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoWeld_MetaData[];
#endif
		static void NewProp_bAutoWeld_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoWeld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStartAwake_MetaData[];
#endif
		static void NewProp_bStartAwake_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartAwake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateWakeEvents_MetaData[];
#endif
		static void NewProp_bGenerateWakeEvents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateWakeEvents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateMassWhenScaleChanges_MetaData[];
#endif
		static void NewProp_bUpdateMassWhenScaleChanges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateMassWhenScaleChanges;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BodyInstanceCore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBodyInstanceCore>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bSimulatePhysics_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** \n\x09 * If true, this body will use simulation. If false, will be 'fixed' (ie kinematic) and move where it is told. \n\x09 * For a Skeletal Mesh Component, simulating requires a physics asset setup and assigned on the SkeletalMesh asset.\n\x09 * For a Static Mesh Component, simulating requires simple collision to be setup on the StaticMesh asset.\n\x09 */" },
		{ "ModuleRelativePath", "Public/BodyInstanceCore.h" },
		{ "ToolTip", "If true, this body will use simulation. If false, will be 'fixed' (ie kinematic) and move where it is told.\nFor a Skeletal Mesh Component, simulating requires a physics asset setup and assigned on the SkeletalMesh asset.\nFor a Static Mesh Component, simulating requires simple collision to be setup on the StaticMesh asset." },
	};
#endif
	void Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bSimulatePhysics_SetBit(void* Obj)
	{
		((FBodyInstanceCore*)Obj)->bSimulatePhysics = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bSimulatePhysics = { "bSimulatePhysics", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FBodyInstanceCore), &Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bSimulatePhysics_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bSimulatePhysics_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bSimulatePhysics_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bOverrideMass_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** If true, mass will not be automatically computed and you must set it directly */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/BodyInstanceCore.h" },
		{ "ToolTip", "If true, mass will not be automatically computed and you must set it directly" },
	};
#endif
	void Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bOverrideMass_SetBit(void* Obj)
	{
		((FBodyInstanceCore*)Obj)->bOverrideMass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bOverrideMass = { "bOverrideMass", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FBodyInstanceCore), &Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bOverrideMass_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bOverrideMass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bOverrideMass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bEnableGravity_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** If object should have the force of gravity applied */" },
		{ "ModuleRelativePath", "Public/BodyInstanceCore.h" },
		{ "ToolTip", "If object should have the force of gravity applied" },
	};
#endif
	void Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bEnableGravity_SetBit(void* Obj)
	{
		((FBodyInstanceCore*)Obj)->bEnableGravity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bEnableGravity = { "bEnableGravity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FBodyInstanceCore), &Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bEnableGravity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bEnableGravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bEnableGravity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bAutoWeld_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** If true and is attached to a parent, the two bodies will be joined into a single rigid body. Physical settings like collision profile and body settings are determined by the root */" },
		{ "editcondition", "!bSimulatePhysics" },
		{ "ModuleRelativePath", "Public/BodyInstanceCore.h" },
		{ "ToolTip", "If true and is attached to a parent, the two bodies will be joined into a single rigid body. Physical settings like collision profile and body settings are determined by the root" },
	};
#endif
	void Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bAutoWeld_SetBit(void* Obj)
	{
		((FBodyInstanceCore*)Obj)->bAutoWeld = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bAutoWeld = { "bAutoWeld", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FBodyInstanceCore), &Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bAutoWeld_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bAutoWeld_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bAutoWeld_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bStartAwake_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** If object should start awake, or if it should initially be sleeping */" },
		{ "editcondition", "bSimulatePhysics" },
		{ "ModuleRelativePath", "Public/BodyInstanceCore.h" },
		{ "ToolTip", "If object should start awake, or if it should initially be sleeping" },
	};
#endif
	void Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bStartAwake_SetBit(void* Obj)
	{
		((FBodyInstanceCore*)Obj)->bStartAwake = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bStartAwake = { "bStartAwake", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FBodyInstanceCore), &Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bStartAwake_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bStartAwake_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bStartAwake_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bGenerateWakeEvents_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/**\x09Should 'wake/sleep' events fire when this object is woken up or put to sleep by the physics simulation. */" },
		{ "ModuleRelativePath", "Public/BodyInstanceCore.h" },
		{ "ToolTip", "Should 'wake/sleep' events fire when this object is woken up or put to sleep by the physics simulation." },
	};
#endif
	void Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bGenerateWakeEvents_SetBit(void* Obj)
	{
		((FBodyInstanceCore*)Obj)->bGenerateWakeEvents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bGenerateWakeEvents = { "bGenerateWakeEvents", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FBodyInstanceCore), &Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bGenerateWakeEvents_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bGenerateWakeEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bGenerateWakeEvents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bUpdateMassWhenScaleChanges_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** If true, it will update mass when scale change **/" },
		{ "ModuleRelativePath", "Public/BodyInstanceCore.h" },
		{ "ToolTip", "If true, it will update mass when scale change *" },
	};
#endif
	void Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bUpdateMassWhenScaleChanges_SetBit(void* Obj)
	{
		((FBodyInstanceCore*)Obj)->bUpdateMassWhenScaleChanges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bUpdateMassWhenScaleChanges = { "bUpdateMassWhenScaleChanges", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FBodyInstanceCore), &Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bUpdateMassWhenScaleChanges_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bUpdateMassWhenScaleChanges_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bUpdateMassWhenScaleChanges_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bSimulatePhysics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bOverrideMass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bEnableGravity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bAutoWeld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bStartAwake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bGenerateWakeEvents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewProp_bUpdateMassWhenScaleChanges,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PhysicsCore,
		nullptr,
		&NewStructOps,
		"BodyInstanceCore",
		sizeof(FBodyInstanceCore),
		alignof(FBodyInstanceCore),
		Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBodyInstanceCore()
	{
		if (!Z_Registration_Info_UScriptStruct_BodyInstanceCore.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BodyInstanceCore.InnerSingleton, Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BodyInstanceCore.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_BodyInstanceCore_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_BodyInstanceCore_h_Statics::ScriptStructInfo[] = {
		{ FBodyInstanceCore::StaticStruct, Z_Construct_UScriptStruct_FBodyInstanceCore_Statics::NewStructOps, TEXT("BodyInstanceCore"), &Z_Registration_Info_UScriptStruct_BodyInstanceCore, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBodyInstanceCore), 183285404U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_BodyInstanceCore_h_1126555726(TEXT("/Script/PhysicsCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_BodyInstanceCore_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_BodyInstanceCore_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
