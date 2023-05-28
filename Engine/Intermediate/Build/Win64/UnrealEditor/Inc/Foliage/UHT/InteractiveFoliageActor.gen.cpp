// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveFoliageActor.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractiveFoliageActor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	FOLIAGE_API UClass* Z_Construct_UClass_AInteractiveFoliageActor();
	FOLIAGE_API UClass* Z_Construct_UClass_AInteractiveFoliageActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Foliage();
// End Cross Module References
	DEFINE_FUNCTION(AInteractiveFoliageActor::execCapsuleTouched)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_Other);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OverlapInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CapsuleTouched(Z_Param_OverlappedComp,Z_Param_Other,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_OverlapInfo);
		P_NATIVE_END;
	}
	void AInteractiveFoliageActor::StaticRegisterNativesAInteractiveFoliageActor()
	{
		UClass* Class = AInteractiveFoliageActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CapsuleTouched", &AInteractiveFoliageActor::execCapsuleTouched },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics
	{
		struct InteractiveFoliageActor_eventCapsuleTouched_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* Other;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult OverlapInfo;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Other;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlapInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OverlapInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InteractiveFoliageActor_eventCapsuleTouched_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_OverlappedComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InteractiveFoliageActor_eventCapsuleTouched_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InteractiveFoliageActor_eventCapsuleTouched_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InteractiveFoliageActor_eventCapsuleTouched_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((InteractiveFoliageActor_eventCapsuleTouched_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InteractiveFoliageActor_eventCapsuleTouched_Parms), &Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_OverlapInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_OverlapInfo = { "OverlapInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InteractiveFoliageActor_eventCapsuleTouched_Parms, OverlapInfo), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_OverlapInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_OverlapInfo_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_Other,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_OverlapInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called when capsule is touched */" },
		{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
		{ "ToolTip", "Called when capsule is touched" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractiveFoliageActor, nullptr, "CapsuleTouched", nullptr, nullptr, sizeof(Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::InteractiveFoliageActor_eventCapsuleTouched_Parms), Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInteractiveFoliageActor);
	UClass* Z_Construct_UClass_AInteractiveFoliageActor_NoRegister()
	{
		return AInteractiveFoliageActor::StaticClass();
	}
	struct Z_Construct_UClass_AInteractiveFoliageActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CapsuleComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TouchingActorEntryPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TouchingActorEntryPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoliageVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FoliageVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoliageForce_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FoliageForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoliagePosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FoliagePosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoliageDamageImpulseScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FoliageDamageImpulseScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoliageTouchImpulseScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FoliageTouchImpulseScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoliageStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FoliageStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoliageStiffnessQuadratic_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FoliageStiffnessQuadratic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoliageDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FoliageDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDamageImpulse_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDamageImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTouchImpulse_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTouchImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInteractiveFoliageActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AInteractiveFoliageActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched, "CapsuleTouched" }, // 3131015870
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractiveFoliageActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input" },
		{ "IncludePath", "InteractiveFoliageActor.h" },
		{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_CapsuleComponent_MetaData[] = {
		{ "Comment", "/** Collision cylinder */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
		{ "ToolTip", "Collision cylinder" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_CapsuleComponent = { "CapsuleComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AInteractiveFoliageActor, CapsuleComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_CapsuleComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_CapsuleComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_TouchingActorEntryPosition_MetaData[] = {
		{ "Comment", "/**\n\x09 * Position of the last actor to enter the collision cylinder.\n\x09 * This currently does not handle multiple actors affecting the foliage simultaneously.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
		{ "ToolTip", "Position of the last actor to enter the collision cylinder.\nThis currently does not handle multiple actors affecting the foliage simultaneously." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_TouchingActorEntryPosition = { "TouchingActorEntryPosition", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AInteractiveFoliageActor, TouchingActorEntryPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_TouchingActorEntryPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_TouchingActorEntryPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageVelocity_MetaData[] = {
		{ "Comment", "/** Simulated physics state */" },
		{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
		{ "ToolTip", "Simulated physics state" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageVelocity = { "FoliageVelocity", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AInteractiveFoliageActor, FoliageVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageForce_MetaData[] = {
		{ "Comment", "/** @todo document */" },
		{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageForce = { "FoliageForce", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AInteractiveFoliageActor, FoliageForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageForce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliagePosition_MetaData[] = {
		{ "Comment", "/** @todo document */" },
		{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliagePosition = { "FoliagePosition", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AInteractiveFoliageActor, FoliagePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliagePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliagePosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageDamageImpulseScale_MetaData[] = {
		{ "Category", "FoliagePhysics" },
		{ "Comment", "/** Scales forces applied from damage events. */" },
		{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
		{ "ToolTip", "Scales forces applied from damage events." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageDamageImpulseScale = { "FoliageDamageImpulseScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AInteractiveFoliageActor, FoliageDamageImpulseScale), METADATA_PARAMS(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageDamageImpulseScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageDamageImpulseScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageTouchImpulseScale_MetaData[] = {
		{ "Category", "FoliagePhysics" },
		{ "Comment", "/** Scales forces applied from touch events. */" },
		{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
		{ "ToolTip", "Scales forces applied from touch events." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageTouchImpulseScale = { "FoliageTouchImpulseScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AInteractiveFoliageActor, FoliageTouchImpulseScale), METADATA_PARAMS(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageTouchImpulseScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageTouchImpulseScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageStiffness_MetaData[] = {
		{ "Category", "FoliagePhysics" },
		{ "Comment", "/** Determines how strong the force that pushes toward the spring's center will be. */" },
		{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
		{ "ToolTip", "Determines how strong the force that pushes toward the spring's center will be." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageStiffness = { "FoliageStiffness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AInteractiveFoliageActor, FoliageStiffness), METADATA_PARAMS(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageStiffnessQuadratic_MetaData[] = {
		{ "Category", "FoliagePhysics" },
		{ "Comment", "/**\n\x09 * Same as FoliageStiffness, but the strength of this force increases with the square of the distance to the spring's center.\n\x09 * This force is used to prevent the spring from extending past a certain point due to touch and damage forces.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
		{ "ToolTip", "Same as FoliageStiffness, but the strength of this force increases with the square of the distance to the spring's center.\nThis force is used to prevent the spring from extending past a certain point due to touch and damage forces." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageStiffnessQuadratic = { "FoliageStiffnessQuadratic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AInteractiveFoliageActor, FoliageStiffnessQuadratic), METADATA_PARAMS(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageStiffnessQuadratic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageStiffnessQuadratic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageDamping_MetaData[] = {
		{ "Category", "FoliagePhysics" },
		{ "Comment", "/**\n\x09 * Determines the amount of energy lost by the spring as it oscillates.\n\x09 * This force is similar to air friction.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
		{ "ToolTip", "Determines the amount of energy lost by the spring as it oscillates.\nThis force is similar to air friction." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageDamping = { "FoliageDamping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AInteractiveFoliageActor, FoliageDamping), METADATA_PARAMS(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_MaxDamageImpulse_MetaData[] = {
		{ "Category", "FoliagePhysics" },
		{ "Comment", "/** Clamps the magnitude of each damage force applied. */" },
		{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
		{ "ToolTip", "Clamps the magnitude of each damage force applied." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_MaxDamageImpulse = { "MaxDamageImpulse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AInteractiveFoliageActor, MaxDamageImpulse), METADATA_PARAMS(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_MaxDamageImpulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_MaxDamageImpulse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_MaxTouchImpulse_MetaData[] = {
		{ "Category", "FoliagePhysics" },
		{ "Comment", "/** Clamps the magnitude of each touch force applied. */" },
		{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
		{ "ToolTip", "Clamps the magnitude of each touch force applied." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_MaxTouchImpulse = { "MaxTouchImpulse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AInteractiveFoliageActor, MaxTouchImpulse), METADATA_PARAMS(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_MaxTouchImpulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_MaxTouchImpulse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_MaxForce_MetaData[] = {
		{ "Category", "FoliagePhysics" },
		{ "Comment", "/** Clamps the magnitude of combined forces applied each update. */" },
		{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
		{ "ToolTip", "Clamps the magnitude of combined forces applied each update." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_MaxForce = { "MaxForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AInteractiveFoliageActor, MaxForce), METADATA_PARAMS(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_MaxForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_MaxForce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_Mass_MetaData[] = {
		{ "Comment", "//@todo - hook this up\x09/** @todo document */\n" },
		{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
		{ "ToolTip", "@todo - hook this up     @todo document" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AInteractiveFoliageActor, Mass), METADATA_PARAMS(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_Mass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_Mass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractiveFoliageActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_CapsuleComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_TouchingActorEntryPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliagePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageDamageImpulseScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageTouchImpulseScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageStiffnessQuadratic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_MaxDamageImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_MaxTouchImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_MaxForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_Mass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractiveFoliageActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractiveFoliageActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AInteractiveFoliageActor_Statics::ClassParams = {
		&AInteractiveFoliageActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AInteractiveFoliageActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AInteractiveFoliageActor_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInteractiveFoliageActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractiveFoliageActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInteractiveFoliageActor()
	{
		if (!Z_Registration_Info_UClass_AInteractiveFoliageActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInteractiveFoliageActor.OuterSingleton, Z_Construct_UClass_AInteractiveFoliageActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AInteractiveFoliageActor.OuterSingleton;
	}
	template<> FOLIAGE_API UClass* StaticClass<AInteractiveFoliageActor>()
	{
		return AInteractiveFoliageActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractiveFoliageActor);
	AInteractiveFoliageActor::~AInteractiveFoliageActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_InteractiveFoliageActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_InteractiveFoliageActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AInteractiveFoliageActor, AInteractiveFoliageActor::StaticClass, TEXT("AInteractiveFoliageActor"), &Z_Registration_Info_UClass_AInteractiveFoliageActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInteractiveFoliageActor), 325848773U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_InteractiveFoliageActor_h_769967105(TEXT("/Script/Foliage"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_InteractiveFoliageActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_InteractiveFoliageActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
