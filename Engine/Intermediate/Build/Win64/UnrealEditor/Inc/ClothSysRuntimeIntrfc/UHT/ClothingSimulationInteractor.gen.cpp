// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClothingSimulationInteractor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothingSimulationInteractor() {}
// Cross Module References
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingInteractor();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingInteractor_NoRegister();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingSimulationInteractor();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingSimulationInteractor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
// End Cross Module References
	void UClothingInteractor::StaticRegisterNativesUClothingInteractor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothingInteractor);
	UClass* Z_Construct_UClass_UClothingInteractor_NoRegister()
	{
		return UClothingInteractor::StaticClass();
	}
	struct Z_Construct_UClass_UClothingInteractor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothingInteractor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingInteractor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Abstract class to control clothing specific interaction.\n * Must be cast to the end used clothing simulation object before use.\n */" },
		{ "IncludePath", "ClothingSimulationInteractor.h" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Abstract class to control clothing specific interaction.\nMust be cast to the end used clothing simulation object before use." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothingInteractor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothingInteractor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothingInteractor_Statics::ClassParams = {
		&UClothingInteractor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UClothingInteractor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClothingInteractor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothingInteractor()
	{
		if (!Z_Registration_Info_UClass_UClothingInteractor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothingInteractor.OuterSingleton, Z_Construct_UClass_UClothingInteractor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClothingInteractor.OuterSingleton;
	}
	template<> CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* StaticClass<UClothingInteractor>()
	{
		return UClothingInteractor::StaticClass();
	}
	UClothingInteractor::UClothingInteractor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothingInteractor);
	UClothingInteractor::~UClothingInteractor() {}
	DEFINE_FUNCTION(UClothingSimulationInteractor::execGetClothingInteractor)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ClothingAssetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClothingInteractor**)Z_Param__Result=P_THIS->GetClothingInteractor(Z_Param_ClothingAssetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UClothingSimulationInteractor::execGetSimulationTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSimulationTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UClothingSimulationInteractor::execGetNumSubsteps)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumSubsteps();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UClothingSimulationInteractor::execGetNumIterations)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumIterations();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UClothingSimulationInteractor::execGetNumDynamicParticles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumDynamicParticles();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UClothingSimulationInteractor::execGetNumKinematicParticles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumKinematicParticles();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UClothingSimulationInteractor::execGetNumCloths)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumCloths();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UClothingSimulationInteractor::execSetNumSubsteps)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NumSubsteps);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNumSubsteps(Z_Param_NumSubsteps);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UClothingSimulationInteractor::execSetMaxNumIterations)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxNumIterations);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxNumIterations(Z_Param_MaxNumIterations);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UClothingSimulationInteractor::execSetNumIterations)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NumIterations);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNumIterations(Z_Param_NumIterations);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UClothingSimulationInteractor::execDisableGravityOverride)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableGravityOverride();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UClothingSimulationInteractor::execEnableGravityOverride)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InVector);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableGravityOverride(Z_Param_Out_InVector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UClothingSimulationInteractor::execSetAnimDriveSpringStiffness)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InStiffness);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAnimDriveSpringStiffness(Z_Param_InStiffness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UClothingSimulationInteractor::execClothConfigUpdated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClothConfigUpdated();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UClothingSimulationInteractor::execPhysicsAssetUpdated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PhysicsAssetUpdated();
		P_NATIVE_END;
	}
	void UClothingSimulationInteractor::StaticRegisterNativesUClothingSimulationInteractor()
	{
		UClass* Class = UClothingSimulationInteractor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClothConfigUpdated", &UClothingSimulationInteractor::execClothConfigUpdated },
			{ "DisableGravityOverride", &UClothingSimulationInteractor::execDisableGravityOverride },
			{ "EnableGravityOverride", &UClothingSimulationInteractor::execEnableGravityOverride },
			{ "GetClothingInteractor", &UClothingSimulationInteractor::execGetClothingInteractor },
			{ "GetNumCloths", &UClothingSimulationInteractor::execGetNumCloths },
			{ "GetNumDynamicParticles", &UClothingSimulationInteractor::execGetNumDynamicParticles },
			{ "GetNumIterations", &UClothingSimulationInteractor::execGetNumIterations },
			{ "GetNumKinematicParticles", &UClothingSimulationInteractor::execGetNumKinematicParticles },
			{ "GetNumSubsteps", &UClothingSimulationInteractor::execGetNumSubsteps },
			{ "GetSimulationTime", &UClothingSimulationInteractor::execGetSimulationTime },
			{ "PhysicsAssetUpdated", &UClothingSimulationInteractor::execPhysicsAssetUpdated },
			{ "SetAnimDriveSpringStiffness", &UClothingSimulationInteractor::execSetAnimDriveSpringStiffness },
			{ "SetMaxNumIterations", &UClothingSimulationInteractor::execSetMaxNumIterations },
			{ "SetNumIterations", &UClothingSimulationInteractor::execSetNumIterations },
			{ "SetNumSubsteps", &UClothingSimulationInteractor::execSetNumSubsteps },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UClothingSimulationInteractor_ClothConfigUpdated_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClothingSimulationInteractor_ClothConfigUpdated_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "/** Called to update the cloth config without restarting the simulation. */" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Called to update the cloth config without restarting the simulation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractor_ClothConfigUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractor, nullptr, "ClothConfigUpdated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClothingSimulationInteractor_ClothConfigUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_ClothConfigUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_ClothConfigUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractor_ClothConfigUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UClothingSimulationInteractor_DisableGravityOverride_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClothingSimulationInteractor_DisableGravityOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "/** Disable any currently set gravity override. */" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Disable any currently set gravity override." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractor_DisableGravityOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractor, nullptr, "DisableGravityOverride", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClothingSimulationInteractor_DisableGravityOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_DisableGravityOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_DisableGravityOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractor_DisableGravityOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics
	{
		struct ClothingSimulationInteractor_eventEnableGravityOverride_Parms
		{
			FVector InVector;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InVector;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::NewProp_InVector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::NewProp_InVector = { "InVector", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ClothingSimulationInteractor_eventEnableGravityOverride_Parms, InVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::NewProp_InVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::NewProp_InVector_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::NewProp_InVector,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "/** Set a new gravity override and enable the override. */" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Set a new gravity override and enable the override." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractor, nullptr, "EnableGravityOverride", nullptr, nullptr, sizeof(Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::ClothingSimulationInteractor_eventEnableGravityOverride_Parms), Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor_Statics
	{
		struct ClothingSimulationInteractor_eventGetClothingInteractor_Parms
		{
			FString ClothingAssetName;
			UClothingInteractor* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClothingAssetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClothingAssetName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor_Statics::NewProp_ClothingAssetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor_Statics::NewProp_ClothingAssetName = { "ClothingAssetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ClothingSimulationInteractor_eventGetClothingInteractor_Parms, ClothingAssetName), METADATA_PARAMS(Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor_Statics::NewProp_ClothingAssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor_Statics::NewProp_ClothingAssetName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ClothingSimulationInteractor_eventGetClothingInteractor_Parms, ReturnValue), Z_Construct_UClass_UClothingInteractor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor_Statics::NewProp_ClothingAssetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "/**Return a cloth interactor for this simulation. */" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Return a cloth interactor for this simulation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractor, nullptr, "GetClothingInteractor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor_Statics::ClothingSimulationInteractor_eventGetClothingInteractor_Parms), Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UClothingSimulationInteractor_GetNumCloths_Statics
	{
		struct ClothingSimulationInteractor_eventGetNumCloths_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UClothingSimulationInteractor_GetNumCloths_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ClothingSimulationInteractor_eventGetNumCloths_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClothingSimulationInteractor_GetNumCloths_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClothingSimulationInteractor_GetNumCloths_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClothingSimulationInteractor_GetNumCloths_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "/** Return the number of cloths run by the simulation. */" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Return the number of cloths run by the simulation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractor_GetNumCloths_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractor, nullptr, "GetNumCloths", nullptr, nullptr, sizeof(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumCloths_Statics::ClothingSimulationInteractor_eventGetNumCloths_Parms), Z_Construct_UFunction_UClothingSimulationInteractor_GetNumCloths_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumCloths_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumCloths_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumCloths_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_GetNumCloths()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractor_GetNumCloths_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UClothingSimulationInteractor_GetNumDynamicParticles_Statics
	{
		struct ClothingSimulationInteractor_eventGetNumDynamicParticles_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UClothingSimulationInteractor_GetNumDynamicParticles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ClothingSimulationInteractor_eventGetNumDynamicParticles_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClothingSimulationInteractor_GetNumDynamicParticles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClothingSimulationInteractor_GetNumDynamicParticles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClothingSimulationInteractor_GetNumDynamicParticles_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "/** Return the number of dynamic (simulated) particles. */" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Return the number of dynamic (simulated) particles." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractor_GetNumDynamicParticles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractor, nullptr, "GetNumDynamicParticles", nullptr, nullptr, sizeof(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumDynamicParticles_Statics::ClothingSimulationInteractor_eventGetNumDynamicParticles_Parms), Z_Construct_UFunction_UClothingSimulationInteractor_GetNumDynamicParticles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumDynamicParticles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumDynamicParticles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumDynamicParticles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_GetNumDynamicParticles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractor_GetNumDynamicParticles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UClothingSimulationInteractor_GetNumIterations_Statics
	{
		struct ClothingSimulationInteractor_eventGetNumIterations_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UClothingSimulationInteractor_GetNumIterations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ClothingSimulationInteractor_eventGetNumIterations_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClothingSimulationInteractor_GetNumIterations_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClothingSimulationInteractor_GetNumIterations_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClothingSimulationInteractor_GetNumIterations_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "/**\n\x09 * Return the solver number of iterations.\n\x09 * This could be different from the number set if the simulation hasn't updated yet.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Return the solver number of iterations.\nThis could be different from the number set if the simulation hasn't updated yet." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractor_GetNumIterations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractor, nullptr, "GetNumIterations", nullptr, nullptr, sizeof(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumIterations_Statics::ClothingSimulationInteractor_eventGetNumIterations_Parms), Z_Construct_UFunction_UClothingSimulationInteractor_GetNumIterations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumIterations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumIterations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumIterations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_GetNumIterations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractor_GetNumIterations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UClothingSimulationInteractor_GetNumKinematicParticles_Statics
	{
		struct ClothingSimulationInteractor_eventGetNumKinematicParticles_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UClothingSimulationInteractor_GetNumKinematicParticles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ClothingSimulationInteractor_eventGetNumKinematicParticles_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClothingSimulationInteractor_GetNumKinematicParticles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClothingSimulationInteractor_GetNumKinematicParticles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClothingSimulationInteractor_GetNumKinematicParticles_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "/** Return the number of kinematic (animated) particles. */" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Return the number of kinematic (animated) particles." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractor_GetNumKinematicParticles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractor, nullptr, "GetNumKinematicParticles", nullptr, nullptr, sizeof(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumKinematicParticles_Statics::ClothingSimulationInteractor_eventGetNumKinematicParticles_Parms), Z_Construct_UFunction_UClothingSimulationInteractor_GetNumKinematicParticles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumKinematicParticles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumKinematicParticles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumKinematicParticles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_GetNumKinematicParticles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractor_GetNumKinematicParticles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UClothingSimulationInteractor_GetNumSubsteps_Statics
	{
		struct ClothingSimulationInteractor_eventGetNumSubsteps_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UClothingSimulationInteractor_GetNumSubsteps_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ClothingSimulationInteractor_eventGetNumSubsteps_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClothingSimulationInteractor_GetNumSubsteps_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClothingSimulationInteractor_GetNumSubsteps_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClothingSimulationInteractor_GetNumSubsteps_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "/**\n\x09 * Return the solver number of subdivisions./\n\x09 * This could be different from the number set if the simulation hasn't updated yet.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Return the solver number of subdivisions./\nThis could be different from the number set if the simulation hasn't updated yet." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractor_GetNumSubsteps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractor, nullptr, "GetNumSubsteps", nullptr, nullptr, sizeof(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumSubsteps_Statics::ClothingSimulationInteractor_eventGetNumSubsteps_Parms), Z_Construct_UFunction_UClothingSimulationInteractor_GetNumSubsteps_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumSubsteps_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumSubsteps_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumSubsteps_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_GetNumSubsteps()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractor_GetNumSubsteps_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UClothingSimulationInteractor_GetSimulationTime_Statics
	{
		struct ClothingSimulationInteractor_eventGetSimulationTime_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UClothingSimulationInteractor_GetSimulationTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ClothingSimulationInteractor_eventGetSimulationTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClothingSimulationInteractor_GetSimulationTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClothingSimulationInteractor_GetSimulationTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClothingSimulationInteractor_GetSimulationTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "/** Return the instant average simulation time in ms. */" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Return the instant average simulation time in ms." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractor_GetSimulationTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractor, nullptr, "GetSimulationTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UClothingSimulationInteractor_GetSimulationTime_Statics::ClothingSimulationInteractor_eventGetSimulationTime_Parms), Z_Construct_UFunction_UClothingSimulationInteractor_GetSimulationTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_GetSimulationTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClothingSimulationInteractor_GetSimulationTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_GetSimulationTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_GetSimulationTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractor_GetSimulationTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UClothingSimulationInteractor_PhysicsAssetUpdated_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClothingSimulationInteractor_PhysicsAssetUpdated_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "/** Called to update collision status without restarting the simulation. */" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Called to update collision status without restarting the simulation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractor_PhysicsAssetUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractor, nullptr, "PhysicsAssetUpdated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClothingSimulationInteractor_PhysicsAssetUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_PhysicsAssetUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_PhysicsAssetUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractor_PhysicsAssetUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Statics
	{
		struct ClothingSimulationInteractor_eventSetAnimDriveSpringStiffness_Parms
		{
			float InStiffness;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InStiffness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Statics::NewProp_InStiffness = { "InStiffness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ClothingSimulationInteractor_eventSetAnimDriveSpringStiffness_Parms, InStiffness), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Statics::NewProp_InStiffness,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "/** Set the stiffness of the spring force for the animation drive. */" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Set the stiffness of the spring force for the animation drive." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractor, nullptr, "SetAnimDriveSpringStiffness", nullptr, nullptr, sizeof(Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Statics::ClothingSimulationInteractor_eventSetAnimDriveSpringStiffness_Parms), Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UClothingSimulationInteractor_SetMaxNumIterations_Statics
	{
		struct ClothingSimulationInteractor_eventSetMaxNumIterations_Parms
		{
			int32 MaxNumIterations;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNumIterations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UClothingSimulationInteractor_SetMaxNumIterations_Statics::NewProp_MaxNumIterations = { "MaxNumIterations", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ClothingSimulationInteractor_eventSetMaxNumIterations_Parms, MaxNumIterations), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClothingSimulationInteractor_SetMaxNumIterations_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClothingSimulationInteractor_SetMaxNumIterations_Statics::NewProp_MaxNumIterations,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClothingSimulationInteractor_SetMaxNumIterations_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "/** Set the maximum number of solver iterations. */" },
		{ "CPP_Default_MaxNumIterations", "10" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Set the maximum number of solver iterations." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractor_SetMaxNumIterations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractor, nullptr, "SetMaxNumIterations", nullptr, nullptr, sizeof(Z_Construct_UFunction_UClothingSimulationInteractor_SetMaxNumIterations_Statics::ClothingSimulationInteractor_eventSetMaxNumIterations_Parms), Z_Construct_UFunction_UClothingSimulationInteractor_SetMaxNumIterations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_SetMaxNumIterations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClothingSimulationInteractor_SetMaxNumIterations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_SetMaxNumIterations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_SetMaxNumIterations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractor_SetMaxNumIterations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UClothingSimulationInteractor_SetNumIterations_Statics
	{
		struct ClothingSimulationInteractor_eventSetNumIterations_Parms
		{
			int32 NumIterations;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumIterations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UClothingSimulationInteractor_SetNumIterations_Statics::NewProp_NumIterations = { "NumIterations", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ClothingSimulationInteractor_eventSetNumIterations_Parms, NumIterations), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClothingSimulationInteractor_SetNumIterations_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClothingSimulationInteractor_SetNumIterations_Statics::NewProp_NumIterations,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClothingSimulationInteractor_SetNumIterations_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "/** Set the number of time dependent solver iterations. */" },
		{ "CPP_Default_NumIterations", "1" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Set the number of time dependent solver iterations." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractor_SetNumIterations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractor, nullptr, "SetNumIterations", nullptr, nullptr, sizeof(Z_Construct_UFunction_UClothingSimulationInteractor_SetNumIterations_Statics::ClothingSimulationInteractor_eventSetNumIterations_Parms), Z_Construct_UFunction_UClothingSimulationInteractor_SetNumIterations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_SetNumIterations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClothingSimulationInteractor_SetNumIterations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_SetNumIterations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_SetNumIterations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractor_SetNumIterations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UClothingSimulationInteractor_SetNumSubsteps_Statics
	{
		struct ClothingSimulationInteractor_eventSetNumSubsteps_Parms
		{
			int32 NumSubsteps;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSubsteps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UClothingSimulationInteractor_SetNumSubsteps_Statics::NewProp_NumSubsteps = { "NumSubsteps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ClothingSimulationInteractor_eventSetNumSubsteps_Parms, NumSubsteps), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClothingSimulationInteractor_SetNumSubsteps_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClothingSimulationInteractor_SetNumSubsteps_Statics::NewProp_NumSubsteps,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClothingSimulationInteractor_SetNumSubsteps_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "/** Set the number of substeps or subdivisions. */" },
		{ "CPP_Default_NumSubsteps", "1" },
		{ "Keywords", "Subdivisions" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Set the number of substeps or subdivisions." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractor_SetNumSubsteps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractor, nullptr, "SetNumSubsteps", nullptr, nullptr, sizeof(Z_Construct_UFunction_UClothingSimulationInteractor_SetNumSubsteps_Statics::ClothingSimulationInteractor_eventSetNumSubsteps_Parms), Z_Construct_UFunction_UClothingSimulationInteractor_SetNumSubsteps_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_SetNumSubsteps_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClothingSimulationInteractor_SetNumSubsteps_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_SetNumSubsteps_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_SetNumSubsteps()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractor_SetNumSubsteps_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothingSimulationInteractor);
	UClass* Z_Construct_UClass_UClothingSimulationInteractor_NoRegister()
	{
		return UClothingSimulationInteractor::StaticClass();
	}
	struct Z_Construct_UClass_UClothingSimulationInteractor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ClothingInteractors_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ClothingInteractors_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClothingInteractors_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ClothingInteractors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothingSimulationInteractor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UClothingSimulationInteractor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UClothingSimulationInteractor_ClothConfigUpdated, "ClothConfigUpdated" }, // 1923490413
		{ &Z_Construct_UFunction_UClothingSimulationInteractor_DisableGravityOverride, "DisableGravityOverride" }, // 1197502751
		{ &Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride, "EnableGravityOverride" }, // 2065528495
		{ &Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor, "GetClothingInteractor" }, // 3455634165
		{ &Z_Construct_UFunction_UClothingSimulationInteractor_GetNumCloths, "GetNumCloths" }, // 1958088966
		{ &Z_Construct_UFunction_UClothingSimulationInteractor_GetNumDynamicParticles, "GetNumDynamicParticles" }, // 1142913266
		{ &Z_Construct_UFunction_UClothingSimulationInteractor_GetNumIterations, "GetNumIterations" }, // 2406100562
		{ &Z_Construct_UFunction_UClothingSimulationInteractor_GetNumKinematicParticles, "GetNumKinematicParticles" }, // 1208734613
		{ &Z_Construct_UFunction_UClothingSimulationInteractor_GetNumSubsteps, "GetNumSubsteps" }, // 3524615402
		{ &Z_Construct_UFunction_UClothingSimulationInteractor_GetSimulationTime, "GetSimulationTime" }, // 298745197
		{ &Z_Construct_UFunction_UClothingSimulationInteractor_PhysicsAssetUpdated, "PhysicsAssetUpdated" }, // 1738855817
		{ &Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness, "SetAnimDriveSpringStiffness" }, // 2745138529
		{ &Z_Construct_UFunction_UClothingSimulationInteractor_SetMaxNumIterations, "SetMaxNumIterations" }, // 3107096763
		{ &Z_Construct_UFunction_UClothingSimulationInteractor_SetNumIterations, "SetNumIterations" }, // 4102480145
		{ &Z_Construct_UFunction_UClothingSimulationInteractor_SetNumSubsteps, "SetNumSubsteps" }, // 2185318694
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingSimulationInteractor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * If a clothing simulation is able to be interacted with at runtime then a derived\n * interactor should be created, and at least the basic API implemented for that\n * simulation.\n * Only write to the simulation and context during the call to Sync, as that is\n * guaranteed to be a safe place to access this data.\n */" },
		{ "IncludePath", "ClothingSimulationInteractor.h" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "If a clothing simulation is able to be interacted with at runtime then a derived\ninteractor should be created, and at least the basic API implemented for that\nsimulation.\nOnly write to the simulation and context during the call to Sync, as that is\nguaranteed to be a safe place to access this data." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UClothingSimulationInteractor_Statics::NewProp_ClothingInteractors_ValueProp = { "ClothingInteractors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UClothingInteractor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UClothingSimulationInteractor_Statics::NewProp_ClothingInteractors_Key_KeyProp = { "ClothingInteractors_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingSimulationInteractor_Statics::NewProp_ClothingInteractors_MetaData[] = {
		{ "Comment", "/** Cloth interactors currently created. */" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Cloth interactors currently created." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UClothingSimulationInteractor_Statics::NewProp_ClothingInteractors = { "ClothingInteractors", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClothingSimulationInteractor, ClothingInteractors), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UClothingSimulationInteractor_Statics::NewProp_ClothingInteractors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothingSimulationInteractor_Statics::NewProp_ClothingInteractors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClothingSimulationInteractor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingSimulationInteractor_Statics::NewProp_ClothingInteractors_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingSimulationInteractor_Statics::NewProp_ClothingInteractors_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingSimulationInteractor_Statics::NewProp_ClothingInteractors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothingSimulationInteractor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothingSimulationInteractor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothingSimulationInteractor_Statics::ClassParams = {
		&UClothingSimulationInteractor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UClothingSimulationInteractor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UClothingSimulationInteractor_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UClothingSimulationInteractor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClothingSimulationInteractor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothingSimulationInteractor()
	{
		if (!Z_Registration_Info_UClass_UClothingSimulationInteractor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothingSimulationInteractor.OuterSingleton, Z_Construct_UClass_UClothingSimulationInteractor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClothingSimulationInteractor.OuterSingleton;
	}
	template<> CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* StaticClass<UClothingSimulationInteractor>()
	{
		return UClothingSimulationInteractor::StaticClass();
	}
	UClothingSimulationInteractor::UClothingSimulationInteractor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothingSimulationInteractor);
	UClothingSimulationInteractor::~UClothingSimulationInteractor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UClothingInteractor, UClothingInteractor::StaticClass, TEXT("UClothingInteractor"), &Z_Registration_Info_UClass_UClothingInteractor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothingInteractor), 1935936902U) },
		{ Z_Construct_UClass_UClothingSimulationInteractor, UClothingSimulationInteractor::StaticClass, TEXT("UClothingSimulationInteractor"), &Z_Registration_Info_UClass_UClothingSimulationInteractor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothingSimulationInteractor), 771172517U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_3428705769(TEXT("/Script/ClothingSystemRuntimeInterface"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
