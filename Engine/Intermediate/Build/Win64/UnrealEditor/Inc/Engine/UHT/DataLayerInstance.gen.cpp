// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/DataLayer/DataLayerInstance.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/DataLayer/WorldDataLayers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataLayerInstance() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UDataLayerInstance();
	ENGINE_API UClass* Z_Construct_UClass_UDataLayerInstance_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDataLayerRuntimeState();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDataLayerType();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDataLayerRuntimeState;
	static UEnum* EDataLayerRuntimeState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDataLayerRuntimeState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDataLayerRuntimeState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDataLayerRuntimeState, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EDataLayerRuntimeState"));
		}
		return Z_Registration_Info_UEnum_EDataLayerRuntimeState.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EDataLayerRuntimeState>()
	{
		return EDataLayerRuntimeState_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EDataLayerRuntimeState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EDataLayerRuntimeState_Statics::Enumerators[] = {
		{ "EDataLayerRuntimeState::Unloaded", (int64)EDataLayerRuntimeState::Unloaded },
		{ "EDataLayerRuntimeState::Loaded", (int64)EDataLayerRuntimeState::Loaded },
		{ "EDataLayerRuntimeState::Activated", (int64)EDataLayerRuntimeState::Activated },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EDataLayerRuntimeState_Statics::Enum_MetaDataParams[] = {
		{ "Activated.Comment", "// Activated (meaning loaded and visible)\n" },
		{ "Activated.Name", "EDataLayerRuntimeState::Activated" },
		{ "Activated.ToolTip", "Activated (meaning loaded and visible)" },
		{ "BlueprintType", "true" },
		{ "Loaded.Comment", "// Loaded (meaning loaded but not visible)\n" },
		{ "Loaded.Name", "EDataLayerRuntimeState::Loaded" },
		{ "Loaded.ToolTip", "Loaded (meaning loaded but not visible)" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstance.h" },
		{ "Unloaded.Comment", "// Unloaded\n" },
		{ "Unloaded.Name", "EDataLayerRuntimeState::Unloaded" },
		{ "Unloaded.ToolTip", "Unloaded" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EDataLayerRuntimeState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EDataLayerRuntimeState",
		"EDataLayerRuntimeState",
		Z_Construct_UEnum_Engine_EDataLayerRuntimeState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDataLayerRuntimeState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EDataLayerRuntimeState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDataLayerRuntimeState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EDataLayerRuntimeState()
	{
		if (!Z_Registration_Info_UEnum_EDataLayerRuntimeState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDataLayerRuntimeState.InnerSingleton, Z_Construct_UEnum_Engine_EDataLayerRuntimeState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDataLayerRuntimeState.InnerSingleton;
	}
	DEFINE_FUNCTION(UDataLayerInstance::execGetInitialRuntimeState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDataLayerRuntimeState*)Z_Param__Result=P_THIS->GetInitialRuntimeState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerInstance::execGetDebugColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FColor*)Z_Param__Result=P_THIS->GetDebugColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerInstance::execIsRuntime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRuntime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerInstance::execIsEffectiveVisible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEffectiveVisible();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerInstance::execIsVisible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsVisible();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerInstance::execIsInitiallyVisible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInitiallyVisible();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerInstance::execGetType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDataLayerType*)Z_Param__Result=P_THIS->GetType();
		P_NATIVE_END;
	}
	void UDataLayerInstance::StaticRegisterNativesUDataLayerInstance()
	{
		UClass* Class = UDataLayerInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDebugColor", &UDataLayerInstance::execGetDebugColor },
			{ "GetInitialRuntimeState", &UDataLayerInstance::execGetInitialRuntimeState },
			{ "GetType", &UDataLayerInstance::execGetType },
			{ "IsEffectiveVisible", &UDataLayerInstance::execIsEffectiveVisible },
			{ "IsInitiallyVisible", &UDataLayerInstance::execIsInitiallyVisible },
			{ "IsRuntime", &UDataLayerInstance::execIsRuntime },
			{ "IsVisible", &UDataLayerInstance::execIsVisible },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDataLayerInstance_GetDebugColor_Statics
	{
		struct DataLayerInstance_eventGetDebugColor_Parms
		{
			FColor ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataLayerInstance_GetDebugColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerInstance_eventGetDebugColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerInstance_GetDebugColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerInstance_GetDebugColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerInstance_GetDebugColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data Layer|Runtime" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerInstance_GetDebugColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerInstance, nullptr, "GetDebugColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerInstance_GetDebugColor_Statics::DataLayerInstance_eventGetDebugColor_Parms), Z_Construct_UFunction_UDataLayerInstance_GetDebugColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerInstance_GetDebugColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerInstance_GetDebugColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerInstance_GetDebugColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerInstance_GetDebugColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerInstance_GetDebugColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerInstance_GetInitialRuntimeState_Statics
	{
		struct DataLayerInstance_eventGetInitialRuntimeState_Parms
		{
			EDataLayerRuntimeState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataLayerInstance_GetInitialRuntimeState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDataLayerInstance_GetInitialRuntimeState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerInstance_eventGetInitialRuntimeState_Parms, ReturnValue), Z_Construct_UEnum_Engine_EDataLayerRuntimeState, METADATA_PARAMS(nullptr, 0) }; // 1187585863
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerInstance_GetInitialRuntimeState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerInstance_GetInitialRuntimeState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerInstance_GetInitialRuntimeState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerInstance_GetInitialRuntimeState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data Layer|Runtime" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerInstance_GetInitialRuntimeState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerInstance, nullptr, "GetInitialRuntimeState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerInstance_GetInitialRuntimeState_Statics::DataLayerInstance_eventGetInitialRuntimeState_Parms), Z_Construct_UFunction_UDataLayerInstance_GetInitialRuntimeState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerInstance_GetInitialRuntimeState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerInstance_GetInitialRuntimeState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerInstance_GetInitialRuntimeState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerInstance_GetInitialRuntimeState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerInstance_GetInitialRuntimeState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerInstance_GetType_Statics
	{
		struct DataLayerInstance_eventGetType_Parms
		{
			EDataLayerType ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataLayerInstance_GetType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDataLayerInstance_GetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerInstance_eventGetType_Parms, ReturnValue), Z_Construct_UEnum_Engine_EDataLayerType, METADATA_PARAMS(nullptr, 0) }; // 3721880825
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerInstance_GetType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerInstance_GetType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerInstance_GetType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerInstance_GetType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data Layer" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerInstance_GetType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerInstance, nullptr, "GetType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerInstance_GetType_Statics::DataLayerInstance_eventGetType_Parms), Z_Construct_UFunction_UDataLayerInstance_GetType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerInstance_GetType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerInstance_GetType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerInstance_GetType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerInstance_GetType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerInstance_GetType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerInstance_IsEffectiveVisible_Statics
	{
		struct DataLayerInstance_eventIsEffectiveVisible_Parms
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
	void Z_Construct_UFunction_UDataLayerInstance_IsEffectiveVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataLayerInstance_eventIsEffectiveVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerInstance_IsEffectiveVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerInstance_eventIsEffectiveVisible_Parms), &Z_Construct_UFunction_UDataLayerInstance_IsEffectiveVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerInstance_IsEffectiveVisible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerInstance_IsEffectiveVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerInstance_IsEffectiveVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data Layer|Editor" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerInstance_IsEffectiveVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerInstance, nullptr, "IsEffectiveVisible", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerInstance_IsEffectiveVisible_Statics::DataLayerInstance_eventIsEffectiveVisible_Parms), Z_Construct_UFunction_UDataLayerInstance_IsEffectiveVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerInstance_IsEffectiveVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerInstance_IsEffectiveVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerInstance_IsEffectiveVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerInstance_IsEffectiveVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerInstance_IsEffectiveVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerInstance_IsInitiallyVisible_Statics
	{
		struct DataLayerInstance_eventIsInitiallyVisible_Parms
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
	void Z_Construct_UFunction_UDataLayerInstance_IsInitiallyVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataLayerInstance_eventIsInitiallyVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerInstance_IsInitiallyVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerInstance_eventIsInitiallyVisible_Parms), &Z_Construct_UFunction_UDataLayerInstance_IsInitiallyVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerInstance_IsInitiallyVisible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerInstance_IsInitiallyVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerInstance_IsInitiallyVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data Layer|Editor" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerInstance_IsInitiallyVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerInstance, nullptr, "IsInitiallyVisible", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerInstance_IsInitiallyVisible_Statics::DataLayerInstance_eventIsInitiallyVisible_Parms), Z_Construct_UFunction_UDataLayerInstance_IsInitiallyVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerInstance_IsInitiallyVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerInstance_IsInitiallyVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerInstance_IsInitiallyVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerInstance_IsInitiallyVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerInstance_IsInitiallyVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerInstance_IsRuntime_Statics
	{
		struct DataLayerInstance_eventIsRuntime_Parms
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
	void Z_Construct_UFunction_UDataLayerInstance_IsRuntime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataLayerInstance_eventIsRuntime_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerInstance_IsRuntime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerInstance_eventIsRuntime_Parms), &Z_Construct_UFunction_UDataLayerInstance_IsRuntime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerInstance_IsRuntime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerInstance_IsRuntime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerInstance_IsRuntime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data Layer|Runtime" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerInstance_IsRuntime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerInstance, nullptr, "IsRuntime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerInstance_IsRuntime_Statics::DataLayerInstance_eventIsRuntime_Parms), Z_Construct_UFunction_UDataLayerInstance_IsRuntime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerInstance_IsRuntime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerInstance_IsRuntime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerInstance_IsRuntime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerInstance_IsRuntime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerInstance_IsRuntime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerInstance_IsVisible_Statics
	{
		struct DataLayerInstance_eventIsVisible_Parms
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
	void Z_Construct_UFunction_UDataLayerInstance_IsVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataLayerInstance_eventIsVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerInstance_IsVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerInstance_eventIsVisible_Parms), &Z_Construct_UFunction_UDataLayerInstance_IsVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerInstance_IsVisible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerInstance_IsVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerInstance_IsVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data Layer|Editor" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerInstance_IsVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerInstance, nullptr, "IsVisible", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerInstance_IsVisible_Statics::DataLayerInstance_eventIsVisible_Parms), Z_Construct_UFunction_UDataLayerInstance_IsVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerInstance_IsVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerInstance_IsVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerInstance_IsVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerInstance_IsVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerInstance_IsVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataLayerInstance);
	UClass* Z_Construct_UClass_UDataLayerInstance_NoRegister()
	{
		return UDataLayerInstance::StaticClass();
	}
	struct Z_Construct_UClass_UDataLayerInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsVisible_MetaData[];
#endif
		static void NewProp_bIsVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInitiallyVisible_MetaData[];
#endif
		static void NewProp_bIsInitiallyVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInitiallyVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInitiallyLoadedInEditor_MetaData[];
#endif
		static void NewProp_bIsInitiallyLoadedInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInitiallyLoadedInEditor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLoadedInEditor_MetaData[];
#endif
		static void NewProp_bIsLoadedInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLoadedInEditor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLoadedInEditorChangedByUserOperation_MetaData[];
#endif
		static void NewProp_bIsLoadedInEditorChangedByUserOperation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLoadedInEditorChangedByUserOperation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLocked_MetaData[];
#endif
		static void NewProp_bIsLocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLocked;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBytePropertyParams NewProp_InitialRuntimeState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialRuntimeState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InitialRuntimeState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Parent;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Children_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Children;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataLayerInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDataLayerInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDataLayerInstance_GetDebugColor, "GetDebugColor" }, // 2497550970
		{ &Z_Construct_UFunction_UDataLayerInstance_GetInitialRuntimeState, "GetInitialRuntimeState" }, // 3243656550
		{ &Z_Construct_UFunction_UDataLayerInstance_GetType, "GetType" }, // 3914171917
		{ &Z_Construct_UFunction_UDataLayerInstance_IsEffectiveVisible, "IsEffectiveVisible" }, // 2533950188
		{ &Z_Construct_UFunction_UDataLayerInstance_IsInitiallyVisible, "IsInitiallyVisible" }, // 350729853
		{ &Z_Construct_UFunction_UDataLayerInstance_IsRuntime, "IsRuntime" }, // 1663972218
		{ &Z_Construct_UFunction_UDataLayerInstance_IsVisible, "IsVisible" }, // 3306597940
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataLayerInstance_Statics::Class_MetaDataParams[] = {
		{ "AutoCollapseCategories", "Data Layer|Advanced" },
		{ "AutoExpandCategories", "Data Layer|Editor Data Layer|Advanced|Runtime" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "WorldPartition/DataLayer/DataLayerInstance.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstance.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsVisible_MetaData[] = {
		{ "Comment", "/** Whether actors associated with the DataLayer are visible in the viewport */" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstance.h" },
		{ "ToolTip", "Whether actors associated with the DataLayer are visible in the viewport" },
	};
#endif
	void Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsVisible_SetBit(void* Obj)
	{
		((UDataLayerInstance*)Obj)->bIsVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0020080800002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDataLayerInstance), &Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsInitiallyVisible_MetaData[] = {
		{ "Category", "Data Layer|Editor" },
		{ "Comment", "/** Whether actors associated with the Data Layer should be initially visible in the viewport when loading the map */" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstance.h" },
		{ "ToolTip", "Whether actors associated with the Data Layer should be initially visible in the viewport when loading the map" },
	};
#endif
	void Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsInitiallyVisible_SetBit(void* Obj)
	{
		((UDataLayerInstance*)Obj)->bIsInitiallyVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsInitiallyVisible = { "bIsInitiallyVisible", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDataLayerInstance), &Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsInitiallyVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsInitiallyVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsInitiallyVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsInitiallyLoadedInEditor_MetaData[] = {
		{ "Category", "Data Layer|Editor" },
		{ "Comment", "/** Determines the default value of the data layer's loaded state in editor if it hasn't been changed in data layer outliner by the user */" },
		{ "DisplayName", "Is Initially Loaded" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstance.h" },
		{ "ToolTip", "Determines the default value of the data layer's loaded state in editor if it hasn't been changed in data layer outliner by the user" },
	};
#endif
	void Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsInitiallyLoadedInEditor_SetBit(void* Obj)
	{
		((UDataLayerInstance*)Obj)->bIsInitiallyLoadedInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsInitiallyLoadedInEditor = { "bIsInitiallyLoadedInEditor", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDataLayerInstance), &Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsInitiallyLoadedInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsInitiallyLoadedInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsInitiallyLoadedInEditor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsLoadedInEditor_MetaData[] = {
		{ "Comment", "/** Wheter the data layer is loaded in editor (user setting) */" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstance.h" },
		{ "ToolTip", "Wheter the data layer is loaded in editor (user setting)" },
	};
#endif
	void Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsLoadedInEditor_SetBit(void* Obj)
	{
		((UDataLayerInstance*)Obj)->bIsLoadedInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsLoadedInEditor = { "bIsLoadedInEditor", nullptr, (EPropertyFlags)0x0020080800002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDataLayerInstance), &Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsLoadedInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsLoadedInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsLoadedInEditor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsLoadedInEditorChangedByUserOperation_MetaData[] = {
		{ "Comment", "/** Whether this data layer editor visibility was changed by a user operation */" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstance.h" },
		{ "ToolTip", "Whether this data layer editor visibility was changed by a user operation" },
	};
#endif
	void Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsLoadedInEditorChangedByUserOperation_SetBit(void* Obj)
	{
		((UDataLayerInstance*)Obj)->bIsLoadedInEditorChangedByUserOperation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsLoadedInEditorChangedByUserOperation = { "bIsLoadedInEditorChangedByUserOperation", nullptr, (EPropertyFlags)0x0020080800002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDataLayerInstance), &Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsLoadedInEditorChangedByUserOperation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsLoadedInEditorChangedByUserOperation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsLoadedInEditorChangedByUserOperation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsLocked_MetaData[] = {
		{ "Comment", "/** Whether this data layer is locked, which means the user can't change actors assignation, remove or rename it */" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstance.h" },
		{ "ToolTip", "Whether this data layer is locked, which means the user can't change actors assignation, remove or rename it" },
	};
#endif
	void Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsLocked_SetBit(void* Obj)
	{
		((UDataLayerInstance*)Obj)->bIsLocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsLocked = { "bIsLocked", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDataLayerInstance), &Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsLocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsLocked_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_InitialRuntimeState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_InitialRuntimeState_MetaData[] = {
		{ "Category", "Data Layer|Advanced|Runtime" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstance.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_InitialRuntimeState = { "InitialRuntimeState", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataLayerInstance, InitialRuntimeState), Z_Construct_UEnum_Engine_EDataLayerRuntimeState, METADATA_PARAMS(Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_InitialRuntimeState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_InitialRuntimeState_MetaData)) }; // 1187585863
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_Parent_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataLayerInstance, Parent), Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_Parent_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_Children_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstance.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataLayerInstance, Children), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_Children_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_Children_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataLayerInstance_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsInitiallyVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsInitiallyLoadedInEditor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsLoadedInEditor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsLoadedInEditorChangedByUserOperation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsLocked,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_InitialRuntimeState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_InitialRuntimeState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_Children_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_Children,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataLayerInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataLayerInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataLayerInstance_Statics::ClassParams = {
		&UDataLayerInstance::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDataLayerInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerInstance_Statics::PropPointers),
		0,
		0x001004A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataLayerInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataLayerInstance()
	{
		if (!Z_Registration_Info_UClass_UDataLayerInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataLayerInstance.OuterSingleton, Z_Construct_UClass_UDataLayerInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataLayerInstance.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UDataLayerInstance>()
	{
		return UDataLayerInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataLayerInstance);
	UDataLayerInstance::~UDataLayerInstance() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstance_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstance_h_Statics::EnumInfo[] = {
		{ EDataLayerRuntimeState_StaticEnum, TEXT("EDataLayerRuntimeState"), &Z_Registration_Info_UEnum_EDataLayerRuntimeState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1187585863U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataLayerInstance, UDataLayerInstance::StaticClass, TEXT("UDataLayerInstance"), &Z_Registration_Info_UClass_UDataLayerInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataLayerInstance), 3020065780U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstance_h_1788125626(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstance_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstance_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstance_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
