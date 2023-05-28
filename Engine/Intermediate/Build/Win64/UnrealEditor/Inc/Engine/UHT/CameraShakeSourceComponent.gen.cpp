// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Camera/CameraShakeSourceComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraShakeSourceComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeSourceComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeSourceComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraShakeAttenuation();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraShakePlaySpace();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECameraShakeAttenuation;
	static UEnum* ECameraShakeAttenuation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECameraShakeAttenuation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECameraShakeAttenuation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECameraShakeAttenuation, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ECameraShakeAttenuation"));
		}
		return Z_Registration_Info_UEnum_ECameraShakeAttenuation.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ECameraShakeAttenuation>()
	{
		return ECameraShakeAttenuation_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ECameraShakeAttenuation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ECameraShakeAttenuation_Statics::Enumerators[] = {
		{ "ECameraShakeAttenuation::Linear", (int64)ECameraShakeAttenuation::Linear },
		{ "ECameraShakeAttenuation::Quadratic", (int64)ECameraShakeAttenuation::Quadratic },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ECameraShakeAttenuation_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Linear.Name", "ECameraShakeAttenuation::Linear" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeSourceComponent.h" },
		{ "Quadratic.Name", "ECameraShakeAttenuation::Quadratic" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ECameraShakeAttenuation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ECameraShakeAttenuation",
		"ECameraShakeAttenuation",
		Z_Construct_UEnum_Engine_ECameraShakeAttenuation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECameraShakeAttenuation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ECameraShakeAttenuation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECameraShakeAttenuation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ECameraShakeAttenuation()
	{
		if (!Z_Registration_Info_UEnum_ECameraShakeAttenuation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECameraShakeAttenuation.InnerSingleton, Z_Construct_UEnum_Engine_ECameraShakeAttenuation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECameraShakeAttenuation.InnerSingleton;
	}
	DEFINE_FUNCTION(UCameraShakeSourceComponent::execGetAttenuationFactor)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAttenuationFactor(Z_Param_Out_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraShakeSourceComponent::execStopAllCameraShakes)
	{
		P_GET_UBOOL(Z_Param_bImmediately);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAllCameraShakes(Z_Param_bImmediately);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraShakeSourceComponent::execStopAllCameraShakesOfType)
	{
		P_GET_OBJECT(UClass,Z_Param_InCameraShake);
		P_GET_UBOOL(Z_Param_bImmediately);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAllCameraShakesOfType(Z_Param_InCameraShake,Z_Param_bImmediately);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraShakeSourceComponent::execStartCameraShake)
	{
		P_GET_OBJECT(UClass,Z_Param_InCameraShake);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_ENUM(ECameraShakePlaySpace,Z_Param_PlaySpace);
		P_GET_STRUCT(FRotator,Z_Param_UserPlaySpaceRot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartCameraShake(Z_Param_InCameraShake,Z_Param_Scale,ECameraShakePlaySpace(Z_Param_PlaySpace),Z_Param_UserPlaySpaceRot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraShakeSourceComponent::execStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Start();
		P_NATIVE_END;
	}
	void UCameraShakeSourceComponent::StaticRegisterNativesUCameraShakeSourceComponent()
	{
		UClass* Class = UCameraShakeSourceComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttenuationFactor", &UCameraShakeSourceComponent::execGetAttenuationFactor },
			{ "Start", &UCameraShakeSourceComponent::execStart },
			{ "StartCameraShake", &UCameraShakeSourceComponent::execStartCameraShake },
			{ "StopAllCameraShakes", &UCameraShakeSourceComponent::execStopAllCameraShakes },
			{ "StopAllCameraShakesOfType", &UCameraShakeSourceComponent::execStopAllCameraShakesOfType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor_Statics
	{
		struct CameraShakeSourceComponent_eventGetAttenuationFactor_Parms
		{
			FVector Location;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraShakeSourceComponent_eventGetAttenuationFactor_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor_Statics::NewProp_Location_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraShakeSourceComponent_eventGetAttenuationFactor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor_Statics::Function_MetaDataParams[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** Computes an attenuation factor from this source */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeSourceComponent.h" },
		{ "ToolTip", "Computes an attenuation factor from this source" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraShakeSourceComponent, nullptr, "GetAttenuationFactor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor_Statics::CameraShakeSourceComponent_eventGetAttenuationFactor_Parms), Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraShakeSourceComponent_Start_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraShakeSourceComponent_Start_Statics::Function_MetaDataParams[] = {
		{ "Category", "CameraShake" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeSourceComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraShakeSourceComponent_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraShakeSourceComponent, nullptr, "Start", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraShakeSourceComponent_Start_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraShakeSourceComponent_Start_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraShakeSourceComponent_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraShakeSourceComponent_Start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics
	{
		struct CameraShakeSourceComponent_eventStartCameraShake_Parms
		{
			TSubclassOf<UCameraShakeBase>  InCameraShake;
			float Scale;
			ECameraShakePlaySpace PlaySpace;
			FRotator UserPlaySpaceRot;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_InCameraShake;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlaySpace_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PlaySpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserPlaySpaceRot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::NewProp_InCameraShake = { "InCameraShake", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraShakeSourceComponent_eventStartCameraShake_Parms, InCameraShake), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraShakeSourceComponent_eventStartCameraShake_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::NewProp_PlaySpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::NewProp_PlaySpace = { "PlaySpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraShakeSourceComponent_eventStartCameraShake_Parms, PlaySpace), Z_Construct_UEnum_Engine_ECameraShakePlaySpace, METADATA_PARAMS(nullptr, 0) }; // 1413967709
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::NewProp_UserPlaySpaceRot = { "UserPlaySpaceRot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraShakeSourceComponent_eventStartCameraShake_Parms, UserPlaySpaceRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::NewProp_InCameraShake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::NewProp_PlaySpace_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::NewProp_PlaySpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::NewProp_UserPlaySpaceRot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::Function_MetaDataParams[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** Starts a new camera shake originating from this source, and apply it on all player controllers */" },
		{ "CPP_Default_PlaySpace", "CameraLocal" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "CPP_Default_UserPlaySpaceRot", "" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeSourceComponent.h" },
		{ "ToolTip", "Starts a new camera shake originating from this source, and apply it on all player controllers" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraShakeSourceComponent, nullptr, "StartCameraShake", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::CameraShakeSourceComponent_eventStartCameraShake_Parms), Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakes_Statics
	{
		struct CameraShakeSourceComponent_eventStopAllCameraShakes_Parms
		{
			bool bImmediately;
		};
		static void NewProp_bImmediately_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImmediately;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakes_Statics::NewProp_bImmediately_SetBit(void* Obj)
	{
		((CameraShakeSourceComponent_eventStopAllCameraShakes_Parms*)Obj)->bImmediately = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakes_Statics::NewProp_bImmediately = { "bImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CameraShakeSourceComponent_eventStopAllCameraShakes_Parms), &Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakes_Statics::NewProp_bImmediately_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakes_Statics::NewProp_bImmediately,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakes_Statics::Function_MetaDataParams[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** Stops all currently active camera shakes that are originating from this source from all player controllers */" },
		{ "CPP_Default_bImmediately", "true" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeSourceComponent.h" },
		{ "ToolTip", "Stops all currently active camera shakes that are originating from this source from all player controllers" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraShakeSourceComponent, nullptr, "StopAllCameraShakes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakes_Statics::CameraShakeSourceComponent_eventStopAllCameraShakes_Parms), Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType_Statics
	{
		struct CameraShakeSourceComponent_eventStopAllCameraShakesOfType_Parms
		{
			TSubclassOf<UCameraShakeBase>  InCameraShake;
			bool bImmediately;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_InCameraShake;
		static void NewProp_bImmediately_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImmediately;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType_Statics::NewProp_InCameraShake = { "InCameraShake", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraShakeSourceComponent_eventStopAllCameraShakesOfType_Parms, InCameraShake), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType_Statics::NewProp_bImmediately_SetBit(void* Obj)
	{
		((CameraShakeSourceComponent_eventStopAllCameraShakesOfType_Parms*)Obj)->bImmediately = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType_Statics::NewProp_bImmediately = { "bImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CameraShakeSourceComponent_eventStopAllCameraShakesOfType_Parms), &Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType_Statics::NewProp_bImmediately_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType_Statics::NewProp_InCameraShake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType_Statics::NewProp_bImmediately,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType_Statics::Function_MetaDataParams[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** Stops a camera shake originating from this source */" },
		{ "CPP_Default_bImmediately", "true" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeSourceComponent.h" },
		{ "ToolTip", "Stops a camera shake originating from this source" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraShakeSourceComponent, nullptr, "StopAllCameraShakesOfType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType_Statics::CameraShakeSourceComponent_eventStopAllCameraShakesOfType_Parms), Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraShakeSourceComponent);
	UClass* Z_Construct_UClass_UCameraShakeSourceComponent_NoRegister()
	{
		return UCameraShakeSourceComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCameraShakeSourceComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Attenuation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attenuation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Attenuation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InnerAttenuationRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InnerAttenuationRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OuterAttenuationRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OuterAttenuationRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraShake_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CameraShake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoStart_MetaData[];
#endif
		static void NewProp_bAutoStart_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoStart;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorSpriteTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditorSpriteTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorSpriteTextureScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EditorSpriteTextureScale;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraShakeSourceComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCameraShakeSourceComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor, "GetAttenuationFactor" }, // 4171244940
		{ &Z_Construct_UFunction_UCameraShakeSourceComponent_Start, "Start" }, // 1366339885
		{ &Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake, "StartCameraShake" }, // 2756216956
		{ &Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakes, "StopAllCameraShakes" }, // 303599844
		{ &Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType, "StopAllCameraShakesOfType" }, // 2549058770
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShakeSourceComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Camera/CameraShakeSourceComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeSourceComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_Attenuation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_Attenuation_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** The attenuation profile for how camera shakes' intensity falls off with distance */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeSourceComponent.h" },
		{ "ToolTip", "The attenuation profile for how camera shakes' intensity falls off with distance" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_Attenuation = { "Attenuation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraShakeSourceComponent, Attenuation), Z_Construct_UEnum_Engine_ECameraShakeAttenuation, METADATA_PARAMS(Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_Attenuation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_Attenuation_MetaData)) }; // 446104656
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_InnerAttenuationRadius_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** Under this distance from the source, the camera shakes are at full intensity */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeSourceComponent.h" },
		{ "ToolTip", "Under this distance from the source, the camera shakes are at full intensity" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_InnerAttenuationRadius = { "InnerAttenuationRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraShakeSourceComponent, InnerAttenuationRadius), METADATA_PARAMS(Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_InnerAttenuationRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_InnerAttenuationRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_OuterAttenuationRadius_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** Outside of this distance from the source, the camera shakes don't apply at all */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeSourceComponent.h" },
		{ "ToolTip", "Outside of this distance from the source, the camera shakes don't apply at all" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_OuterAttenuationRadius = { "OuterAttenuationRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraShakeSourceComponent, OuterAttenuationRadius), METADATA_PARAMS(Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_OuterAttenuationRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_OuterAttenuationRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_CameraShake_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeSourceComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_CameraShake = { "CameraShake", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraShakeSourceComponent, CameraShake), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_CameraShake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_CameraShake_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_bAutoStart_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeSourceComponent.h" },
	};
#endif
	void Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_bAutoStart_SetBit(void* Obj)
	{
		((UCameraShakeSourceComponent*)Obj)->bAutoStart = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_bAutoStart = { "bAutoStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCameraShakeSourceComponent), &Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_bAutoStart_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_bAutoStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_bAutoStart_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_EditorSpriteTexture_MetaData[] = {
		{ "Comment", "/** Sprite to display in the editor. */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeSourceComponent.h" },
		{ "ToolTip", "Sprite to display in the editor." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_EditorSpriteTexture = { "EditorSpriteTexture", nullptr, (EPropertyFlags)0x0014000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraShakeSourceComponent, EditorSpriteTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_EditorSpriteTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_EditorSpriteTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_EditorSpriteTextureScale_MetaData[] = {
		{ "Comment", "/** Sprite scaling for display in the editor. */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeSourceComponent.h" },
		{ "ToolTip", "Sprite scaling for display in the editor." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_EditorSpriteTextureScale = { "EditorSpriteTextureScale", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraShakeSourceComponent, EditorSpriteTextureScale), METADATA_PARAMS(Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_EditorSpriteTextureScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_EditorSpriteTextureScale_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraShakeSourceComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_Attenuation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_Attenuation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_InnerAttenuationRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_OuterAttenuationRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_CameraShake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_bAutoStart,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_EditorSpriteTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_EditorSpriteTextureScale,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraShakeSourceComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraShakeSourceComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraShakeSourceComponent_Statics::ClassParams = {
		&UCameraShakeSourceComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCameraShakeSourceComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakeSourceComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCameraShakeSourceComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakeSourceComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraShakeSourceComponent()
	{
		if (!Z_Registration_Info_UClass_UCameraShakeSourceComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraShakeSourceComponent.OuterSingleton, Z_Construct_UClass_UCameraShakeSourceComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCameraShakeSourceComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UCameraShakeSourceComponent>()
	{
		return UCameraShakeSourceComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraShakeSourceComponent);
	UCameraShakeSourceComponent::~UCameraShakeSourceComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceComponent_h_Statics::EnumInfo[] = {
		{ ECameraShakeAttenuation_StaticEnum, TEXT("ECameraShakeAttenuation"), &Z_Registration_Info_UEnum_ECameraShakeAttenuation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 446104656U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCameraShakeSourceComponent, UCameraShakeSourceComponent::StaticClass, TEXT("UCameraShakeSourceComponent"), &Z_Registration_Info_UClass_UCameraShakeSourceComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraShakeSourceComponent), 1843147107U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceComponent_h_1878882508(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
