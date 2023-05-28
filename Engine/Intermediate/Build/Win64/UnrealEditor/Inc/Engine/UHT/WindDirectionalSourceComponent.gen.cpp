// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Components/WindDirectionalSourceComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWindDirectionalSourceComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UClass* Z_Construct_UClass_UWindDirectionalSourceComponent();
	ENGINE_API UClass* Z_Construct_UClass_UWindDirectionalSourceComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EWindSourceType();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWindSourceType;
	static UEnum* EWindSourceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWindSourceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWindSourceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EWindSourceType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EWindSourceType"));
		}
		return Z_Registration_Info_UEnum_EWindSourceType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EWindSourceType>()
	{
		return EWindSourceType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EWindSourceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EWindSourceType_Statics::Enumerators[] = {
		{ "EWindSourceType::Directional", (int64)EWindSourceType::Directional },
		{ "EWindSourceType::Point", (int64)EWindSourceType::Point },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EWindSourceType_Statics::Enum_MetaDataParams[] = {
		{ "Directional.Name", "EWindSourceType::Directional" },
		{ "ModuleRelativePath", "Classes/Components/WindDirectionalSourceComponent.h" },
		{ "Point.Name", "EWindSourceType::Point" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EWindSourceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EWindSourceType",
		"EWindSourceType",
		Z_Construct_UEnum_Engine_EWindSourceType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EWindSourceType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EWindSourceType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EWindSourceType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EWindSourceType()
	{
		if (!Z_Registration_Info_UEnum_EWindSourceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWindSourceType.InnerSingleton, Z_Construct_UEnum_Engine_EWindSourceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWindSourceType.InnerSingleton;
	}
	DEFINE_FUNCTION(UWindDirectionalSourceComponent::execSetWindType)
	{
		P_GET_ENUM(EWindSourceType,Z_Param_InNewType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWindType(EWindSourceType(Z_Param_InNewType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWindDirectionalSourceComponent::execSetRadius)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InNewRadius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRadius(Z_Param_InNewRadius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWindDirectionalSourceComponent::execSetMaximumGustAmount)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InNewMaxGust);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaximumGustAmount(Z_Param_InNewMaxGust);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWindDirectionalSourceComponent::execSetMinimumGustAmount)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InNewMinGust);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMinimumGustAmount(Z_Param_InNewMinGust);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWindDirectionalSourceComponent::execSetSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InNewSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpeed(Z_Param_InNewSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWindDirectionalSourceComponent::execSetStrength)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InNewStrength);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStrength(Z_Param_InNewStrength);
		P_NATIVE_END;
	}
	void UWindDirectionalSourceComponent::StaticRegisterNativesUWindDirectionalSourceComponent()
	{
		UClass* Class = UWindDirectionalSourceComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetMaximumGustAmount", &UWindDirectionalSourceComponent::execSetMaximumGustAmount },
			{ "SetMinimumGustAmount", &UWindDirectionalSourceComponent::execSetMinimumGustAmount },
			{ "SetRadius", &UWindDirectionalSourceComponent::execSetRadius },
			{ "SetSpeed", &UWindDirectionalSourceComponent::execSetSpeed },
			{ "SetStrength", &UWindDirectionalSourceComponent::execSetStrength },
			{ "SetWindType", &UWindDirectionalSourceComponent::execSetWindType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMaximumGustAmount_Statics
	{
		struct WindDirectionalSourceComponent_eventSetMaximumGustAmount_Parms
		{
			float InNewMaxGust;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InNewMaxGust;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMaximumGustAmount_Statics::NewProp_InNewMaxGust = { "InNewMaxGust", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WindDirectionalSourceComponent_eventSetMaximumGustAmount_Parms, InNewMaxGust), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMaximumGustAmount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMaximumGustAmount_Statics::NewProp_InNewMaxGust,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMaximumGustAmount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Wind" },
		{ "Comment", "/** Set maximum deviation for wind gusts */" },
		{ "ModuleRelativePath", "Classes/Components/WindDirectionalSourceComponent.h" },
		{ "ToolTip", "Set maximum deviation for wind gusts" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMaximumGustAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindDirectionalSourceComponent, nullptr, "SetMaximumGustAmount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMaximumGustAmount_Statics::WindDirectionalSourceComponent_eventSetMaximumGustAmount_Parms), Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMaximumGustAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMaximumGustAmount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMaximumGustAmount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMaximumGustAmount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMaximumGustAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMaximumGustAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMinimumGustAmount_Statics
	{
		struct WindDirectionalSourceComponent_eventSetMinimumGustAmount_Parms
		{
			float InNewMinGust;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InNewMinGust;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMinimumGustAmount_Statics::NewProp_InNewMinGust = { "InNewMinGust", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WindDirectionalSourceComponent_eventSetMinimumGustAmount_Parms, InNewMinGust), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMinimumGustAmount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMinimumGustAmount_Statics::NewProp_InNewMinGust,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMinimumGustAmount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Wind" },
		{ "Comment", "/** Set minimum deviation for wind gusts */" },
		{ "ModuleRelativePath", "Classes/Components/WindDirectionalSourceComponent.h" },
		{ "ToolTip", "Set minimum deviation for wind gusts" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMinimumGustAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindDirectionalSourceComponent, nullptr, "SetMinimumGustAmount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMinimumGustAmount_Statics::WindDirectionalSourceComponent_eventSetMinimumGustAmount_Parms), Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMinimumGustAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMinimumGustAmount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMinimumGustAmount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMinimumGustAmount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMinimumGustAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMinimumGustAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWindDirectionalSourceComponent_SetRadius_Statics
	{
		struct WindDirectionalSourceComponent_eventSetRadius_Parms
		{
			float InNewRadius;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InNewRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindDirectionalSourceComponent_SetRadius_Statics::NewProp_InNewRadius = { "InNewRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WindDirectionalSourceComponent_eventSetRadius_Parms, InNewRadius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindDirectionalSourceComponent_SetRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindDirectionalSourceComponent_SetRadius_Statics::NewProp_InNewRadius,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWindDirectionalSourceComponent_SetRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Wind" },
		{ "Comment", "/** Set the effect radius for point wind */" },
		{ "ModuleRelativePath", "Classes/Components/WindDirectionalSourceComponent.h" },
		{ "ToolTip", "Set the effect radius for point wind" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindDirectionalSourceComponent_SetRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindDirectionalSourceComponent, nullptr, "SetRadius", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWindDirectionalSourceComponent_SetRadius_Statics::WindDirectionalSourceComponent_eventSetRadius_Parms), Z_Construct_UFunction_UWindDirectionalSourceComponent_SetRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindDirectionalSourceComponent_SetRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWindDirectionalSourceComponent_SetRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindDirectionalSourceComponent_SetRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWindDirectionalSourceComponent_SetRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindDirectionalSourceComponent_SetRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWindDirectionalSourceComponent_SetSpeed_Statics
	{
		struct WindDirectionalSourceComponent_eventSetSpeed_Parms
		{
			float InNewSpeed;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InNewSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindDirectionalSourceComponent_SetSpeed_Statics::NewProp_InNewSpeed = { "InNewSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WindDirectionalSourceComponent_eventSetSpeed_Parms, InNewSpeed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindDirectionalSourceComponent_SetSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindDirectionalSourceComponent_SetSpeed_Statics::NewProp_InNewSpeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWindDirectionalSourceComponent_SetSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Wind" },
		{ "Comment", "/** Sets the windspeed of the generated wind */" },
		{ "ModuleRelativePath", "Classes/Components/WindDirectionalSourceComponent.h" },
		{ "ToolTip", "Sets the windspeed of the generated wind" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindDirectionalSourceComponent_SetSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindDirectionalSourceComponent, nullptr, "SetSpeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWindDirectionalSourceComponent_SetSpeed_Statics::WindDirectionalSourceComponent_eventSetSpeed_Parms), Z_Construct_UFunction_UWindDirectionalSourceComponent_SetSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindDirectionalSourceComponent_SetSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWindDirectionalSourceComponent_SetSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindDirectionalSourceComponent_SetSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWindDirectionalSourceComponent_SetSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindDirectionalSourceComponent_SetSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWindDirectionalSourceComponent_SetStrength_Statics
	{
		struct WindDirectionalSourceComponent_eventSetStrength_Parms
		{
			float InNewStrength;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InNewStrength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindDirectionalSourceComponent_SetStrength_Statics::NewProp_InNewStrength = { "InNewStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WindDirectionalSourceComponent_eventSetStrength_Parms, InNewStrength), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindDirectionalSourceComponent_SetStrength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindDirectionalSourceComponent_SetStrength_Statics::NewProp_InNewStrength,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWindDirectionalSourceComponent_SetStrength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Wind" },
		{ "Comment", "/** Sets the strength of the generated wind */" },
		{ "ModuleRelativePath", "Classes/Components/WindDirectionalSourceComponent.h" },
		{ "ToolTip", "Sets the strength of the generated wind" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindDirectionalSourceComponent_SetStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindDirectionalSourceComponent, nullptr, "SetStrength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWindDirectionalSourceComponent_SetStrength_Statics::WindDirectionalSourceComponent_eventSetStrength_Parms), Z_Construct_UFunction_UWindDirectionalSourceComponent_SetStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindDirectionalSourceComponent_SetStrength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWindDirectionalSourceComponent_SetStrength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindDirectionalSourceComponent_SetStrength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWindDirectionalSourceComponent_SetStrength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindDirectionalSourceComponent_SetStrength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWindDirectionalSourceComponent_SetWindType_Statics
	{
		struct WindDirectionalSourceComponent_eventSetWindType_Parms
		{
			EWindSourceType InNewType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InNewType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InNewType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWindDirectionalSourceComponent_SetWindType_Statics::NewProp_InNewType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWindDirectionalSourceComponent_SetWindType_Statics::NewProp_InNewType = { "InNewType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WindDirectionalSourceComponent_eventSetWindType_Parms, InNewType), Z_Construct_UEnum_Engine_EWindSourceType, METADATA_PARAMS(nullptr, 0) }; // 204978329
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindDirectionalSourceComponent_SetWindType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindDirectionalSourceComponent_SetWindType_Statics::NewProp_InNewType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindDirectionalSourceComponent_SetWindType_Statics::NewProp_InNewType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWindDirectionalSourceComponent_SetWindType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Wind" },
		{ "Comment", "/** Set the type of wind generator to use */" },
		{ "ModuleRelativePath", "Classes/Components/WindDirectionalSourceComponent.h" },
		{ "ToolTip", "Set the type of wind generator to use" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindDirectionalSourceComponent_SetWindType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindDirectionalSourceComponent, nullptr, "SetWindType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWindDirectionalSourceComponent_SetWindType_Statics::WindDirectionalSourceComponent_eventSetWindType_Parms), Z_Construct_UFunction_UWindDirectionalSourceComponent_SetWindType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindDirectionalSourceComponent_SetWindType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWindDirectionalSourceComponent_SetWindType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindDirectionalSourceComponent_SetWindType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWindDirectionalSourceComponent_SetWindType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindDirectionalSourceComponent_SetWindType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWindDirectionalSourceComponent);
	UClass* Z_Construct_UClass_UWindDirectionalSourceComponent_NoRegister()
	{
		return UWindDirectionalSourceComponent::StaticClass();
	}
	struct Z_Construct_UClass_UWindDirectionalSourceComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinGustAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinGustAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxGustAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxGustAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPointWind_MetaData[];
#endif
		static void NewProp_bPointWind_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPointWind;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMaximumGustAmount, "SetMaximumGustAmount" }, // 906002550
		{ &Z_Construct_UFunction_UWindDirectionalSourceComponent_SetMinimumGustAmount, "SetMinimumGustAmount" }, // 125727074
		{ &Z_Construct_UFunction_UWindDirectionalSourceComponent_SetRadius, "SetRadius" }, // 1652664940
		{ &Z_Construct_UFunction_UWindDirectionalSourceComponent_SetSpeed, "SetSpeed" }, // 3728345433
		{ &Z_Construct_UFunction_UWindDirectionalSourceComponent_SetStrength, "SetStrength" }, // 1026141350
		{ &Z_Construct_UFunction_UWindDirectionalSourceComponent_SetWindType, "SetWindType" }, // 2581425972
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Component that provides a directional wind source. Only affects SpeedTree assets. */" },
		{ "HideCategories", "Object Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "Components/WindDirectionalSourceComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/WindDirectionalSourceComponent.h" },
		{ "ToolTip", "Component that provides a directional wind source. Only affects SpeedTree assets." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_Strength_MetaData[] = {
		{ "Category", "WindDirectionalSourceComponent" },
		{ "ModuleRelativePath", "Classes/Components/WindDirectionalSourceComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWindDirectionalSourceComponent, Strength), METADATA_PARAMS(Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_Strength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_Strength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "WindDirectionalSourceComponent" },
		{ "ModuleRelativePath", "Classes/Components/WindDirectionalSourceComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWindDirectionalSourceComponent, Speed), METADATA_PARAMS(Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_MinGustAmount_MetaData[] = {
		{ "Category", "WindDirectionalSourceComponent" },
		{ "ModuleRelativePath", "Classes/Components/WindDirectionalSourceComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_MinGustAmount = { "MinGustAmount", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWindDirectionalSourceComponent, MinGustAmount), METADATA_PARAMS(Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_MinGustAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_MinGustAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_MaxGustAmount_MetaData[] = {
		{ "Category", "WindDirectionalSourceComponent" },
		{ "ModuleRelativePath", "Classes/Components/WindDirectionalSourceComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_MaxGustAmount = { "MaxGustAmount", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWindDirectionalSourceComponent, MaxGustAmount), METADATA_PARAMS(Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_MaxGustAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_MaxGustAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "WindDirectionalSourceComponent" },
		{ "ClampMin", "0.1" },
		{ "editcondition", "bSimulatePhysics" },
		{ "ModuleRelativePath", "Classes/Components/WindDirectionalSourceComponent.h" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWindDirectionalSourceComponent, Radius), METADATA_PARAMS(Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_bPointWind_MetaData[] = {
		{ "Category", "WindDirectionalSourceComponent" },
		{ "ModuleRelativePath", "Classes/Components/WindDirectionalSourceComponent.h" },
	};
#endif
	void Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_bPointWind_SetBit(void* Obj)
	{
		((UWindDirectionalSourceComponent*)Obj)->bPointWind = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_bPointWind = { "bPointWind", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UWindDirectionalSourceComponent), &Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_bPointWind_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_bPointWind_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_bPointWind_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_Strength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_MinGustAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_MaxGustAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::NewProp_bPointWind,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWindDirectionalSourceComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::ClassParams = {
		&UWindDirectionalSourceComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::PropPointers),
		0,
		0x00B030A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWindDirectionalSourceComponent()
	{
		if (!Z_Registration_Info_UClass_UWindDirectionalSourceComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWindDirectionalSourceComponent.OuterSingleton, Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWindDirectionalSourceComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UWindDirectionalSourceComponent>()
	{
		return UWindDirectionalSourceComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWindDirectionalSourceComponent);
	UWindDirectionalSourceComponent::~UWindDirectionalSourceComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_WindDirectionalSourceComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_WindDirectionalSourceComponent_h_Statics::EnumInfo[] = {
		{ EWindSourceType_StaticEnum, TEXT("EWindSourceType"), &Z_Registration_Info_UEnum_EWindSourceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 204978329U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_WindDirectionalSourceComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWindDirectionalSourceComponent, UWindDirectionalSourceComponent::StaticClass, TEXT("UWindDirectionalSourceComponent"), &Z_Registration_Info_UClass_UWindDirectionalSourceComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWindDirectionalSourceComponent), 3736948595U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_WindDirectionalSourceComponent_h_279061335(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_WindDirectionalSourceComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_WindDirectionalSourceComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_WindDirectionalSourceComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_WindDirectionalSourceComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
