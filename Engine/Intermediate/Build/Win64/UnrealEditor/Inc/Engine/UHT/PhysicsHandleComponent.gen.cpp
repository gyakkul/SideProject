// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/PhysicsEngine/PhysicsHandleComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsHandleComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsHandleComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsHandleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(UPhysicsHandleComponent::execSetInterpolationSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewInterpolationSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInterpolationSpeed(Z_Param_NewInterpolationSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsHandleComponent::execSetAngularStiffness)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewAngularStiffness);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAngularStiffness(Z_Param_NewAngularStiffness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsHandleComponent::execSetAngularDamping)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewAngularDamping);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAngularDamping(Z_Param_NewAngularDamping);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsHandleComponent::execSetLinearStiffness)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewLinearStiffness);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLinearStiffness(Z_Param_NewLinearStiffness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsHandleComponent::execSetLinearDamping)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewLinearDamping);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLinearDamping(Z_Param_NewLinearDamping);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsHandleComponent::execGetTargetLocationAndRotation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetLocation);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_TargetRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTargetLocationAndRotation(Z_Param_Out_TargetLocation,Z_Param_Out_TargetRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsHandleComponent::execSetTargetLocationAndRotation)
	{
		P_GET_STRUCT(FVector,Z_Param_NewLocation);
		P_GET_STRUCT(FRotator,Z_Param_NewRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTargetLocationAndRotation(Z_Param_NewLocation,Z_Param_NewRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsHandleComponent::execSetTargetRotation)
	{
		P_GET_STRUCT(FRotator,Z_Param_NewRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTargetRotation(Z_Param_NewRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsHandleComponent::execSetTargetLocation)
	{
		P_GET_STRUCT(FVector,Z_Param_NewLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTargetLocation(Z_Param_NewLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsHandleComponent::execGetGrabbedComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPrimitiveComponent**)Z_Param__Result=P_THIS->GetGrabbedComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsHandleComponent::execReleaseComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReleaseComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsHandleComponent::execGrabComponentAtLocationWithRotation)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component);
		P_GET_PROPERTY(FNameProperty,Z_Param_InBoneName);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GrabComponentAtLocationWithRotation(Z_Param_Component,Z_Param_InBoneName,Z_Param_Location,Z_Param_Rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsHandleComponent::execGrabComponentAtLocation)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component);
		P_GET_PROPERTY(FNameProperty,Z_Param_InBoneName);
		P_GET_STRUCT(FVector,Z_Param_GrabLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GrabComponentAtLocation(Z_Param_Component,Z_Param_InBoneName,Z_Param_GrabLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsHandleComponent::execGrabComponent)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component);
		P_GET_PROPERTY(FNameProperty,Z_Param_InBoneName);
		P_GET_STRUCT(FVector,Z_Param_GrabLocation);
		P_GET_UBOOL(Z_Param_bConstrainRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GrabComponent(Z_Param_Component,Z_Param_InBoneName,Z_Param_GrabLocation,Z_Param_bConstrainRotation);
		P_NATIVE_END;
	}
	void UPhysicsHandleComponent::StaticRegisterNativesUPhysicsHandleComponent()
	{
		UClass* Class = UPhysicsHandleComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGrabbedComponent", &UPhysicsHandleComponent::execGetGrabbedComponent },
			{ "GetTargetLocationAndRotation", &UPhysicsHandleComponent::execGetTargetLocationAndRotation },
			{ "GrabComponent", &UPhysicsHandleComponent::execGrabComponent },
			{ "GrabComponentAtLocation", &UPhysicsHandleComponent::execGrabComponentAtLocation },
			{ "GrabComponentAtLocationWithRotation", &UPhysicsHandleComponent::execGrabComponentAtLocationWithRotation },
			{ "ReleaseComponent", &UPhysicsHandleComponent::execReleaseComponent },
			{ "SetAngularDamping", &UPhysicsHandleComponent::execSetAngularDamping },
			{ "SetAngularStiffness", &UPhysicsHandleComponent::execSetAngularStiffness },
			{ "SetInterpolationSpeed", &UPhysicsHandleComponent::execSetInterpolationSpeed },
			{ "SetLinearDamping", &UPhysicsHandleComponent::execSetLinearDamping },
			{ "SetLinearStiffness", &UPhysicsHandleComponent::execSetLinearStiffness },
			{ "SetTargetLocation", &UPhysicsHandleComponent::execSetTargetLocation },
			{ "SetTargetLocationAndRotation", &UPhysicsHandleComponent::execSetTargetLocationAndRotation },
			{ "SetTargetRotation", &UPhysicsHandleComponent::execSetTargetRotation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent_Statics
	{
		struct PhysicsHandleComponent_eventGetGrabbedComponent_Parms
		{
			UPrimitiveComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventGetGrabbedComponent_Parms, ReturnValue), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsHandle" },
		{ "Comment", "/** Returns the currently grabbed component, or null if nothing is grabbed. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Returns the currently grabbed component, or null if nothing is grabbed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, nullptr, "GetGrabbedComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent_Statics::PhysicsHandleComponent_eventGetGrabbedComponent_Parms), Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation_Statics
	{
		struct PhysicsHandleComponent_eventGetTargetLocationAndRotation_Parms
		{
			FVector TargetLocation;
			FRotator TargetRotation;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventGetTargetLocationAndRotation_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation_Statics::NewProp_TargetRotation = { "TargetRotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventGetTargetLocationAndRotation_Parms, TargetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation_Statics::NewProp_TargetLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation_Statics::NewProp_TargetRotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsHandle" },
		{ "Comment", "/** Get the current location and rotation */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Get the current location and rotation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, nullptr, "GetTargetLocationAndRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation_Statics::PhysicsHandleComponent_eventGetTargetLocationAndRotation_Parms), Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics
	{
		struct PhysicsHandleComponent_eventGrabComponent_Parms
		{
			UPrimitiveComponent* Component;
			FName InBoneName;
			FVector GrabLocation;
			bool bConstrainRotation;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InBoneName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrabLocation;
		static void NewProp_bConstrainRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConstrainRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventGrabComponent_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::NewProp_Component_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::NewProp_InBoneName = { "InBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventGrabComponent_Parms, InBoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::NewProp_GrabLocation = { "GrabLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventGrabComponent_Parms, GrabLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::NewProp_bConstrainRotation_SetBit(void* Obj)
	{
		((PhysicsHandleComponent_eventGrabComponent_Parms*)Obj)->bConstrainRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::NewProp_bConstrainRotation = { "bConstrainRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsHandleComponent_eventGrabComponent_Parms), &Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::NewProp_bConstrainRotation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::NewProp_InBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::NewProp_GrabLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::NewProp_bConstrainRotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsHandle" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use GrabComponentAtLocation or GrabComponentAtLocationWithRotation" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, nullptr, "GrabComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::PhysicsHandleComponent_eventGrabComponent_Parms), Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics
	{
		struct PhysicsHandleComponent_eventGrabComponentAtLocation_Parms
		{
			UPrimitiveComponent* Component;
			FName InBoneName;
			FVector GrabLocation;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InBoneName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrabLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventGrabComponentAtLocation_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::NewProp_Component_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::NewProp_InBoneName = { "InBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventGrabComponentAtLocation_Parms, InBoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::NewProp_GrabLocation = { "GrabLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventGrabComponentAtLocation_Parms, GrabLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::NewProp_InBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::NewProp_GrabLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsHandle" },
		{ "Comment", "/** Grab the specified component at a given location. Does NOT constraint rotation which means the handle will pivot about GrabLocation.*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Grab the specified component at a given location. Does NOT constraint rotation which means the handle will pivot about GrabLocation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, nullptr, "GrabComponentAtLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::PhysicsHandleComponent_eventGrabComponentAtLocation_Parms), Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics
	{
		struct PhysicsHandleComponent_eventGrabComponentAtLocationWithRotation_Parms
		{
			UPrimitiveComponent* Component;
			FName InBoneName;
			FVector Location;
			FRotator Rotation;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InBoneName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventGrabComponentAtLocationWithRotation_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::NewProp_Component_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::NewProp_InBoneName = { "InBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventGrabComponentAtLocationWithRotation_Parms, InBoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventGrabComponentAtLocationWithRotation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventGrabComponentAtLocationWithRotation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::NewProp_InBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::NewProp_Rotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsHandle" },
		{ "Comment", "/** Grab the specified component at a given location and rotation. Constrains rotation.*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Grab the specified component at a given location and rotation. Constrains rotation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, nullptr, "GrabComponentAtLocationWithRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::PhysicsHandleComponent_eventGrabComponentAtLocationWithRotation_Parms), Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsHandleComponent_ReleaseComponent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_ReleaseComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsHandle" },
		{ "Comment", "/** Release the currently held component */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Release the currently held component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsHandleComponent_ReleaseComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, nullptr, "ReleaseComponent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_ReleaseComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_ReleaseComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_ReleaseComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsHandleComponent_ReleaseComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularDamping_Statics
	{
		struct PhysicsHandleComponent_eventSetAngularDamping_Parms
		{
			float NewAngularDamping;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewAngularDamping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularDamping_Statics::NewProp_NewAngularDamping = { "NewAngularDamping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventSetAngularDamping_Parms, NewAngularDamping), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularDamping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularDamping_Statics::NewProp_NewAngularDamping,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularDamping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsHandle" },
		{ "Comment", "/** Set angular damping */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Set angular damping" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularDamping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, nullptr, "SetAngularDamping", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularDamping_Statics::PhysicsHandleComponent_eventSetAngularDamping_Parms), Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularDamping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularDamping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularDamping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularDamping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularDamping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularDamping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularStiffness_Statics
	{
		struct PhysicsHandleComponent_eventSetAngularStiffness_Parms
		{
			float NewAngularStiffness;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewAngularStiffness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularStiffness_Statics::NewProp_NewAngularStiffness = { "NewAngularStiffness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventSetAngularStiffness_Parms, NewAngularStiffness), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularStiffness_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularStiffness_Statics::NewProp_NewAngularStiffness,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularStiffness_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsHandle" },
		{ "Comment", "/** Set angular stiffness */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Set angular stiffness" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularStiffness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, nullptr, "SetAngularStiffness", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularStiffness_Statics::PhysicsHandleComponent_eventSetAngularStiffness_Parms), Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularStiffness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularStiffness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularStiffness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularStiffness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularStiffness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularStiffness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsHandleComponent_SetInterpolationSpeed_Statics
	{
		struct PhysicsHandleComponent_eventSetInterpolationSpeed_Parms
		{
			float NewInterpolationSpeed;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewInterpolationSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_SetInterpolationSpeed_Statics::NewProp_NewInterpolationSpeed = { "NewInterpolationSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventSetInterpolationSpeed_Parms, NewInterpolationSpeed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsHandleComponent_SetInterpolationSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_SetInterpolationSpeed_Statics::NewProp_NewInterpolationSpeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_SetInterpolationSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsHandle" },
		{ "Comment", "/** Set interpolation speed */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Set interpolation speed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsHandleComponent_SetInterpolationSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, nullptr, "SetInterpolationSpeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsHandleComponent_SetInterpolationSpeed_Statics::PhysicsHandleComponent_eventSetInterpolationSpeed_Parms), Z_Construct_UFunction_UPhysicsHandleComponent_SetInterpolationSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_SetInterpolationSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_SetInterpolationSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_SetInterpolationSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetInterpolationSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsHandleComponent_SetInterpolationSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearDamping_Statics
	{
		struct PhysicsHandleComponent_eventSetLinearDamping_Parms
		{
			float NewLinearDamping;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewLinearDamping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearDamping_Statics::NewProp_NewLinearDamping = { "NewLinearDamping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventSetLinearDamping_Parms, NewLinearDamping), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearDamping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearDamping_Statics::NewProp_NewLinearDamping,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearDamping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsHandle" },
		{ "Comment", "/** Set linear damping */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Set linear damping" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearDamping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, nullptr, "SetLinearDamping", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearDamping_Statics::PhysicsHandleComponent_eventSetLinearDamping_Parms), Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearDamping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearDamping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearDamping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearDamping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearDamping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearDamping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearStiffness_Statics
	{
		struct PhysicsHandleComponent_eventSetLinearStiffness_Parms
		{
			float NewLinearStiffness;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewLinearStiffness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearStiffness_Statics::NewProp_NewLinearStiffness = { "NewLinearStiffness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventSetLinearStiffness_Parms, NewLinearStiffness), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearStiffness_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearStiffness_Statics::NewProp_NewLinearStiffness,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearStiffness_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsHandle" },
		{ "Comment", "/** Set linear stiffness */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Set linear stiffness" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearStiffness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, nullptr, "SetLinearStiffness", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearStiffness_Statics::PhysicsHandleComponent_eventSetLinearStiffness_Parms), Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearStiffness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearStiffness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearStiffness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearStiffness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearStiffness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearStiffness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocation_Statics
	{
		struct PhysicsHandleComponent_eventSetTargetLocation_Parms
		{
			FVector NewLocation;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocation_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventSetTargetLocation_Parms, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocation_Statics::NewProp_NewLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsHandle" },
		{ "Comment", "/** Set the target location */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Set the target location" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, nullptr, "SetTargetLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocation_Statics::PhysicsHandleComponent_eventSetTargetLocation_Parms), Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation_Statics
	{
		struct PhysicsHandleComponent_eventSetTargetLocationAndRotation_Parms
		{
			FVector NewLocation;
			FRotator NewRotation;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventSetTargetLocationAndRotation_Parms, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventSetTargetLocationAndRotation_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation_Statics::NewProp_NewLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation_Statics::NewProp_NewRotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsHandle" },
		{ "Comment", "/** Set target location and rotation */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Set target location and rotation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, nullptr, "SetTargetLocationAndRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation_Statics::PhysicsHandleComponent_eventSetTargetLocationAndRotation_Parms), Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetRotation_Statics
	{
		struct PhysicsHandleComponent_eventSetTargetRotation_Parms
		{
			FRotator NewRotation;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetRotation_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventSetTargetRotation_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetRotation_Statics::NewProp_NewRotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsHandle" },
		{ "Comment", "/** Set the target rotation */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Set the target rotation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, nullptr, "SetTargetRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetRotation_Statics::PhysicsHandleComponent_eventSetTargetRotation_Parms), Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicsHandleComponent);
	UClass* Z_Construct_UClass_UPhysicsHandleComponent_NoRegister()
	{
		return UPhysicsHandleComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicsHandleComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrabbedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GrabbedComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSoftAngularConstraint_MetaData[];
#endif
		static void NewProp_bSoftAngularConstraint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSoftAngularConstraint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSoftLinearConstraint_MetaData[];
#endif
		static void NewProp_bSoftLinearConstraint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSoftLinearConstraint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInterpolateTarget_MetaData[];
#endif
		static void NewProp_bInterpolateTarget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterpolateTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpolationSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicsHandleComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPhysicsHandleComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent, "GetGrabbedComponent" }, // 526226425
		{ &Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation, "GetTargetLocationAndRotation" }, // 2464588219
		{ &Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent, "GrabComponent" }, // 2498295445
		{ &Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation, "GrabComponentAtLocation" }, // 3508462679
		{ &Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation, "GrabComponentAtLocationWithRotation" }, // 489618828
		{ &Z_Construct_UFunction_UPhysicsHandleComponent_ReleaseComponent, "ReleaseComponent" }, // 3647052081
		{ &Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularDamping, "SetAngularDamping" }, // 1280623317
		{ &Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularStiffness, "SetAngularStiffness" }, // 3456837203
		{ &Z_Construct_UFunction_UPhysicsHandleComponent_SetInterpolationSpeed, "SetInterpolationSpeed" }, // 2204568337
		{ &Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearDamping, "SetLinearDamping" }, // 478037347
		{ &Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearStiffness, "SetLinearStiffness" }, // 3940433608
		{ &Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocation, "SetTargetLocation" }, // 1424807352
		{ &Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation, "SetTargetLocationAndRotation" }, // 2540961687
		{ &Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetRotation, "SetTargetRotation" }, // 885446660
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsHandleComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Physics" },
		{ "Comment", "/**\n *\x09Utility object for moving physics objects around.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Utility object for moving physics objects around." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_GrabbedComponent_MetaData[] = {
		{ "Comment", "/** Component we are currently holding */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Component we are currently holding" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_GrabbedComponent = { "GrabbedComponent", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsHandleComponent, GrabbedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_GrabbedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_GrabbedComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bSoftAngularConstraint_MetaData[] = {
		{ "Category", "PhysicsHandle" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bSoftAngularConstraint_SetBit(void* Obj)
	{
		((UPhysicsHandleComponent*)Obj)->bSoftAngularConstraint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bSoftAngularConstraint = { "bSoftAngularConstraint", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UPhysicsHandleComponent), &Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bSoftAngularConstraint_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bSoftAngularConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bSoftAngularConstraint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bSoftLinearConstraint_MetaData[] = {
		{ "Category", "PhysicsHandle" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bSoftLinearConstraint_SetBit(void* Obj)
	{
		((UPhysicsHandleComponent*)Obj)->bSoftLinearConstraint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bSoftLinearConstraint = { "bSoftLinearConstraint", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UPhysicsHandleComponent), &Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bSoftLinearConstraint_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bSoftLinearConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bSoftLinearConstraint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bInterpolateTarget_MetaData[] = {
		{ "Category", "PhysicsHandle" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bInterpolateTarget_SetBit(void* Obj)
	{
		((UPhysicsHandleComponent*)Obj)->bInterpolateTarget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bInterpolateTarget = { "bInterpolateTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UPhysicsHandleComponent), &Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bInterpolateTarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bInterpolateTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bInterpolateTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_LinearDamping_MetaData[] = {
		{ "Category", "PhysicsHandle" },
		{ "Comment", "/** Linear damping of the handle spring. */" },
		{ "EditCondition", "bSoftLinearConstraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Linear damping of the handle spring." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_LinearDamping = { "LinearDamping", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsHandleComponent, LinearDamping), METADATA_PARAMS(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_LinearDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_LinearDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_LinearStiffness_MetaData[] = {
		{ "Category", "PhysicsHandle" },
		{ "Comment", "/** Linear stiffness of the handle spring */" },
		{ "EditCondition", "bSoftLinearConstraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Linear stiffness of the handle spring" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_LinearStiffness = { "LinearStiffness", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsHandleComponent, LinearStiffness), METADATA_PARAMS(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_LinearStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_LinearStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_AngularDamping_MetaData[] = {
		{ "Category", "PhysicsHandle" },
		{ "Comment", "/** Angular damping of the handle spring */" },
		{ "EditCondition", "bSoftAngularConstraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Angular damping of the handle spring" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_AngularDamping = { "AngularDamping", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsHandleComponent, AngularDamping), METADATA_PARAMS(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_AngularDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_AngularDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_AngularStiffness_MetaData[] = {
		{ "Category", "PhysicsHandle" },
		{ "Comment", "/** Angular stiffness of the handle spring */" },
		{ "EditCondition", "bSoftAngularConstraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Angular stiffness of the handle spring" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_AngularStiffness = { "AngularStiffness", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsHandleComponent, AngularStiffness), METADATA_PARAMS(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_AngularStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_AngularStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_InterpolationSpeed_MetaData[] = {
		{ "Category", "PhysicsHandle" },
		{ "Comment", "/** How quickly we interpolate the physics target transform */" },
		{ "EditCondition", "bInterpolateTarget" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "How quickly we interpolate the physics target transform" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_InterpolationSpeed = { "InterpolationSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsHandleComponent, InterpolationSpeed), METADATA_PARAMS(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_InterpolationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_InterpolationSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicsHandleComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_GrabbedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bSoftAngularConstraint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bSoftLinearConstraint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bInterpolateTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_LinearDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_LinearStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_AngularDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_AngularStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_InterpolationSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicsHandleComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsHandleComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsHandleComponent_Statics::ClassParams = {
		&UPhysicsHandleComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPhysicsHandleComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsHandleComponent_Statics::PropPointers),
		0,
		0x00B020A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPhysicsHandleComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsHandleComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicsHandleComponent()
	{
		if (!Z_Registration_Info_UClass_UPhysicsHandleComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsHandleComponent.OuterSingleton, Z_Construct_UClass_UPhysicsHandleComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPhysicsHandleComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UPhysicsHandleComponent>()
	{
		return UPhysicsHandleComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsHandleComponent);
	UPhysicsHandleComponent::~UPhysicsHandleComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicsHandleComponent, UPhysicsHandleComponent::StaticClass, TEXT("UPhysicsHandleComponent"), &Z_Registration_Info_UClass_UPhysicsHandleComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsHandleComponent), 209905811U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_918193021(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
