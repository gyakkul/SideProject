// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkPredictionExtrasCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetworkPredictionExtrasCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_ANetworkPredictionExtrasCharacter();
	NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_ANetworkPredictionExtrasCharacter_MockAbility();
	NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_ANetworkPredictionExtrasCharacter_MockAbility_NoRegister();
	NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_ANetworkPredictionExtrasCharacter_NoRegister();
	NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_UCharacterMotionComponent_NoRegister();
	NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_UMockCharacterAbilityComponent_NoRegister();
	NETWORKPREDICTIONEXTRAS_API UEnum* Z_Construct_UEnum_NetworkPredictionExtras_ENetworkPredictionExtrasCharacterInputPreset();
	NETWORKPREDICTIONEXTRAS_API UEnum* Z_Construct_UEnum_NetworkPredictionExtras_ENetworkPredictionExtrasMockCharacterAbilityInputPreset();
	UPackage* Z_Construct_UPackage__Script_NetworkPredictionExtras();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENetworkPredictionExtrasCharacterInputPreset;
	static UEnum* ENetworkPredictionExtrasCharacterInputPreset_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENetworkPredictionExtrasCharacterInputPreset.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENetworkPredictionExtrasCharacterInputPreset.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NetworkPredictionExtras_ENetworkPredictionExtrasCharacterInputPreset, (UObject*)Z_Construct_UPackage__Script_NetworkPredictionExtras(), TEXT("ENetworkPredictionExtrasCharacterInputPreset"));
		}
		return Z_Registration_Info_UEnum_ENetworkPredictionExtrasCharacterInputPreset.OuterSingleton;
	}
	template<> NETWORKPREDICTIONEXTRAS_API UEnum* StaticEnum<ENetworkPredictionExtrasCharacterInputPreset>()
	{
		return ENetworkPredictionExtrasCharacterInputPreset_StaticEnum();
	}
	struct Z_Construct_UEnum_NetworkPredictionExtras_ENetworkPredictionExtrasCharacterInputPreset_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NetworkPredictionExtras_ENetworkPredictionExtrasCharacterInputPreset_Statics::Enumerators[] = {
		{ "ENetworkPredictionExtrasCharacterInputPreset::None", (int64)ENetworkPredictionExtrasCharacterInputPreset::None },
		{ "ENetworkPredictionExtrasCharacterInputPreset::Forward", (int64)ENetworkPredictionExtrasCharacterInputPreset::Forward },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NetworkPredictionExtras_ENetworkPredictionExtrasCharacterInputPreset_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// -------------------------------------------------------------------------------------------------------------------------------\n//\x09""ANetworkPredictionExtrasCharacter\n//\n//\x09This provides a minimal pawn class that uses UCharacterMotionCompnent. This isn't really intended to be used in shipping games,\n//\x09rather just to serve as standalone example of using the system, contained completely in the NetworkPredictionExtras plugin.\n//\x09""Apart from the most basic glue/setup, this class provides an example of turning UE input event callbacks into the input commands\n//\x09that are used by the Character movement simulation. This includes some basic camera/aiming code.\n//\n//\x09Highlights:\n//\x09\x09""CharacterMotion::FMovementSystem::SimulationTick\x09\x09\x09\x09The \"core update\" function of the Character movement simulation.\n//\x09\x09""ANetworkPredictionExtrasCharacter::GenerateLocalInput\x09\x09""Function that generates local input commands that are fed into the movement system.\n//\n//\x09Usage:\n//\x09\x09You should be able to just use this pawn like you would any other pawn. You can specify it as your pawn class in your game mode, or manually override in world settings, etc.\n//\x09\x09""Alternatively, you can just load the NetworkPredictionExtras/Content/TestMap.umap which will have everything setup.\n//\n//\x09Once spawned, there are some useful console commands:\n//\x09\x09NetworkPredictionExtras.Character.CameraSyle [0-3]\x09\x09\x09""Changes camera mode style.\n//\x09\x09nms.Debug.LocallyControlledPawn 1\x09\x09\x09\x09\x09\x09\x09""Enables debug hud. binds to '9' by default, see ANetworkPredictionExtrasCharacter()\n//\x09\x09nms.Debug.ToggleContinous 1\x09\x09\x09\x09\x09\x09\x09\x09\x09Toggles continuous updates of the debug hud. binds to '0' by default, see ANetworkPredictionExtrasCharacter()\n//\n// -------------------------------------------------------------------------------------------------------------------------------\n" },
		{ "Forward.Comment", "/** Just moves forward */" },
		{ "Forward.Name", "ENetworkPredictionExtrasCharacterInputPreset::Forward" },
		{ "Forward.ToolTip", "Just moves forward" },
		{ "ModuleRelativePath", "Public/NetworkPredictionExtrasCharacter.h" },
		{ "None.Comment", "/** No input */" },
		{ "None.Name", "ENetworkPredictionExtrasCharacterInputPreset::None" },
		{ "None.ToolTip", "No input" },
		{ "ToolTip", "ANetworkPredictionExtrasCharacter\n\nThis provides a minimal pawn class that uses UCharacterMotionCompnent. This isn't really intended to be used in shipping games,\nrather just to serve as standalone example of using the system, contained completely in the NetworkPredictionExtras plugin.\nApart from the most basic glue/setup, this class provides an example of turning UE input event callbacks into the input commands\nthat are used by the Character movement simulation. This includes some basic camera/aiming code.\n\nHighlights:\n        CharacterMotion::FMovementSystem::SimulationTick                                The \"core update\" function of the Character movement simulation.\n        ANetworkPredictionExtrasCharacter::GenerateLocalInput           Function that generates local input commands that are fed into the movement system.\n\nUsage:\n        You should be able to just use this pawn like you would any other pawn. You can specify it as your pawn class in your game mode, or manually override in world settings, etc.\n        Alternatively, you can just load the NetworkPredictionExtras/Content/TestMap.umap which will have everything setup.\n\nOnce spawned, there are some useful console commands:\n        NetworkPredictionExtras.Character.CameraSyle [0-3]                      Changes camera mode style.\n        nms.Debug.LocallyControlledPawn 1                                                       Enables debug hud. binds to '9' by default, see ANetworkPredictionExtrasCharacter()\n        nms.Debug.ToggleContinous 1                                                                     Toggles continuous updates of the debug hud. binds to '0' by default, see ANetworkPredictionExtrasCharacter()" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NetworkPredictionExtras_ENetworkPredictionExtrasCharacterInputPreset_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NetworkPredictionExtras,
		nullptr,
		"ENetworkPredictionExtrasCharacterInputPreset",
		"ENetworkPredictionExtrasCharacterInputPreset",
		Z_Construct_UEnum_NetworkPredictionExtras_ENetworkPredictionExtrasCharacterInputPreset_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NetworkPredictionExtras_ENetworkPredictionExtrasCharacterInputPreset_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NetworkPredictionExtras_ENetworkPredictionExtrasCharacterInputPreset_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NetworkPredictionExtras_ENetworkPredictionExtrasCharacterInputPreset_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NetworkPredictionExtras_ENetworkPredictionExtrasCharacterInputPreset()
	{
		if (!Z_Registration_Info_UEnum_ENetworkPredictionExtrasCharacterInputPreset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENetworkPredictionExtrasCharacterInputPreset.InnerSingleton, Z_Construct_UEnum_NetworkPredictionExtras_ENetworkPredictionExtrasCharacterInputPreset_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENetworkPredictionExtrasCharacterInputPreset.InnerSingleton;
	}
	DEFINE_FUNCTION(ANetworkPredictionExtrasCharacter::execAddMaxMoveSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AdditiveMaxMoveSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddMaxMoveSpeed(Z_Param_AdditiveMaxMoveSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANetworkPredictionExtrasCharacter::execSetMaxMoveSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewMaxMoveSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxMoveSpeed(Z_Param_NewMaxMoveSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANetworkPredictionExtrasCharacter::execGetMaxMoveSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxMoveSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANetworkPredictionExtrasCharacter::execPrintDebug)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrintDebug();
		P_NATIVE_END;
	}
	void ANetworkPredictionExtrasCharacter::StaticRegisterNativesANetworkPredictionExtrasCharacter()
	{
		UClass* Class = ANetworkPredictionExtrasCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddMaxMoveSpeed", &ANetworkPredictionExtrasCharacter::execAddMaxMoveSpeed },
			{ "GetMaxMoveSpeed", &ANetworkPredictionExtrasCharacter::execGetMaxMoveSpeed },
			{ "PrintDebug", &ANetworkPredictionExtrasCharacter::execPrintDebug },
			{ "SetMaxMoveSpeed", &ANetworkPredictionExtrasCharacter::execSetMaxMoveSpeed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_AddMaxMoveSpeed_Statics
	{
		struct NetworkPredictionExtrasCharacter_eventAddMaxMoveSpeed_Parms
		{
			float AdditiveMaxMoveSpeed;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AdditiveMaxMoveSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_AddMaxMoveSpeed_Statics::NewProp_AdditiveMaxMoveSpeed = { "AdditiveMaxMoveSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NetworkPredictionExtrasCharacter_eventAddMaxMoveSpeed_Parms, AdditiveMaxMoveSpeed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_AddMaxMoveSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_AddMaxMoveSpeed_Statics::NewProp_AdditiveMaxMoveSpeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_AddMaxMoveSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/NetworkPredictionExtrasCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_AddMaxMoveSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetworkPredictionExtrasCharacter, nullptr, "AddMaxMoveSpeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_AddMaxMoveSpeed_Statics::NetworkPredictionExtrasCharacter_eventAddMaxMoveSpeed_Parms), Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_AddMaxMoveSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_AddMaxMoveSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_AddMaxMoveSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_AddMaxMoveSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_AddMaxMoveSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_AddMaxMoveSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_GetMaxMoveSpeed_Statics
	{
		struct NetworkPredictionExtrasCharacter_eventGetMaxMoveSpeed_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_GetMaxMoveSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NetworkPredictionExtrasCharacter_eventGetMaxMoveSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_GetMaxMoveSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_GetMaxMoveSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_GetMaxMoveSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/NetworkPredictionExtrasCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_GetMaxMoveSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetworkPredictionExtrasCharacter, nullptr, "GetMaxMoveSpeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_GetMaxMoveSpeed_Statics::NetworkPredictionExtrasCharacter_eventGetMaxMoveSpeed_Parms), Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_GetMaxMoveSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_GetMaxMoveSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_GetMaxMoveSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_GetMaxMoveSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_GetMaxMoveSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_GetMaxMoveSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_PrintDebug_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_PrintDebug_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/NetworkPredictionExtrasCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_PrintDebug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetworkPredictionExtrasCharacter, nullptr, "PrintDebug", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_PrintDebug_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_PrintDebug_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_PrintDebug()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_PrintDebug_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_SetMaxMoveSpeed_Statics
	{
		struct NetworkPredictionExtrasCharacter_eventSetMaxMoveSpeed_Parms
		{
			float NewMaxMoveSpeed;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMaxMoveSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_SetMaxMoveSpeed_Statics::NewProp_NewMaxMoveSpeed = { "NewMaxMoveSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NetworkPredictionExtrasCharacter_eventSetMaxMoveSpeed_Parms, NewMaxMoveSpeed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_SetMaxMoveSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_SetMaxMoveSpeed_Statics::NewProp_NewMaxMoveSpeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_SetMaxMoveSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/NetworkPredictionExtrasCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_SetMaxMoveSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetworkPredictionExtrasCharacter, nullptr, "SetMaxMoveSpeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_SetMaxMoveSpeed_Statics::NetworkPredictionExtrasCharacter_eventSetMaxMoveSpeed_Parms), Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_SetMaxMoveSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_SetMaxMoveSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_SetMaxMoveSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_SetMaxMoveSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_SetMaxMoveSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_SetMaxMoveSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANetworkPredictionExtrasCharacter);
	UClass* Z_Construct_UClass_ANetworkPredictionExtrasCharacter_NoRegister()
	{
		return ANetworkPredictionExtrasCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ANetworkPredictionExtrasCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputPreset_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputPreset_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InputPreset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFakeAutonomousProxy_MetaData[];
#endif
		static void NewProp_bFakeAutonomousProxy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFakeAutonomousProxy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterMotionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CharacterMotionComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANetworkPredictionExtrasCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkPredictionExtras,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANetworkPredictionExtrasCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_AddMaxMoveSpeed, "AddMaxMoveSpeed" }, // 1844054475
		{ &Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_GetMaxMoveSpeed, "GetMaxMoveSpeed" }, // 923208233
		{ &Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_PrintDebug, "PrintDebug" }, // 2185008568
		{ &Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_SetMaxMoveSpeed, "SetMaxMoveSpeed" }, // 1302941309
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetworkPredictionExtrasCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Sample pawn that uses UCharacterMotionComponent. The main thing this provides is actually producing user input for the component/simulation to consume. */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NetworkPredictionExtrasCharacter.h" },
		{ "ModuleRelativePath", "Public/NetworkPredictionExtrasCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Sample pawn that uses UCharacterMotionComponent. The main thing this provides is actually producing user input for the component/simulation to consume." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ANetworkPredictionExtrasCharacter_Statics::NewProp_InputPreset_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetworkPredictionExtrasCharacter_Statics::NewProp_InputPreset_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "// For bFakeAutonomousProxy only\n" },
		{ "ModuleRelativePath", "Public/NetworkPredictionExtrasCharacter.h" },
		{ "ToolTip", "For bFakeAutonomousProxy only" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ANetworkPredictionExtrasCharacter_Statics::NewProp_InputPreset = { "InputPreset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANetworkPredictionExtrasCharacter, InputPreset), Z_Construct_UEnum_NetworkPredictionExtras_ENetworkPredictionExtrasCharacterInputPreset, METADATA_PARAMS(Z_Construct_UClass_ANetworkPredictionExtrasCharacter_Statics::NewProp_InputPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANetworkPredictionExtrasCharacter_Statics::NewProp_InputPreset_MetaData)) }; // 3712380663
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetworkPredictionExtrasCharacter_Statics::NewProp_bFakeAutonomousProxy_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/** Actor will behave like autonomous proxy even though not posessed by an APlayercontroller. To be used in conjuction with InputPreset. */" },
		{ "ModuleRelativePath", "Public/NetworkPredictionExtrasCharacter.h" },
		{ "ToolTip", "Actor will behave like autonomous proxy even though not posessed by an APlayercontroller. To be used in conjuction with InputPreset." },
	};
#endif
	void Z_Construct_UClass_ANetworkPredictionExtrasCharacter_Statics::NewProp_bFakeAutonomousProxy_SetBit(void* Obj)
	{
		((ANetworkPredictionExtrasCharacter*)Obj)->bFakeAutonomousProxy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANetworkPredictionExtrasCharacter_Statics::NewProp_bFakeAutonomousProxy = { "bFakeAutonomousProxy", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ANetworkPredictionExtrasCharacter), &Z_Construct_UClass_ANetworkPredictionExtrasCharacter_Statics::NewProp_bFakeAutonomousProxy_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANetworkPredictionExtrasCharacter_Statics::NewProp_bFakeAutonomousProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANetworkPredictionExtrasCharacter_Statics::NewProp_bFakeAutonomousProxy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetworkPredictionExtrasCharacter_Statics::NewProp_CharacterMotionComponent_MetaData[] = {
		{ "Category", "Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NetworkPredictionExtrasCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ANetworkPredictionExtrasCharacter_Statics::NewProp_CharacterMotionComponent = { "CharacterMotionComponent", nullptr, (EPropertyFlags)0x00240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANetworkPredictionExtrasCharacter, CharacterMotionComponent), Z_Construct_UClass_UCharacterMotionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANetworkPredictionExtrasCharacter_Statics::NewProp_CharacterMotionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANetworkPredictionExtrasCharacter_Statics::NewProp_CharacterMotionComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANetworkPredictionExtrasCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetworkPredictionExtrasCharacter_Statics::NewProp_InputPreset_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetworkPredictionExtrasCharacter_Statics::NewProp_InputPreset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetworkPredictionExtrasCharacter_Statics::NewProp_bFakeAutonomousProxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetworkPredictionExtrasCharacter_Statics::NewProp_CharacterMotionComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANetworkPredictionExtrasCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANetworkPredictionExtrasCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANetworkPredictionExtrasCharacter_Statics::ClassParams = {
		&ANetworkPredictionExtrasCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANetworkPredictionExtrasCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANetworkPredictionExtrasCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANetworkPredictionExtrasCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANetworkPredictionExtrasCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANetworkPredictionExtrasCharacter()
	{
		if (!Z_Registration_Info_UClass_ANetworkPredictionExtrasCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANetworkPredictionExtrasCharacter.OuterSingleton, Z_Construct_UClass_ANetworkPredictionExtrasCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANetworkPredictionExtrasCharacter.OuterSingleton;
	}
	template<> NETWORKPREDICTIONEXTRAS_API UClass* StaticClass<ANetworkPredictionExtrasCharacter>()
	{
		return ANetworkPredictionExtrasCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANetworkPredictionExtrasCharacter);
	ANetworkPredictionExtrasCharacter::~ANetworkPredictionExtrasCharacter() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENetworkPredictionExtrasMockCharacterAbilityInputPreset;
	static UEnum* ENetworkPredictionExtrasMockCharacterAbilityInputPreset_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENetworkPredictionExtrasMockCharacterAbilityInputPreset.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENetworkPredictionExtrasMockCharacterAbilityInputPreset.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NetworkPredictionExtras_ENetworkPredictionExtrasMockCharacterAbilityInputPreset, (UObject*)Z_Construct_UPackage__Script_NetworkPredictionExtras(), TEXT("ENetworkPredictionExtrasMockCharacterAbilityInputPreset"));
		}
		return Z_Registration_Info_UEnum_ENetworkPredictionExtrasMockCharacterAbilityInputPreset.OuterSingleton;
	}
	template<> NETWORKPREDICTIONEXTRAS_API UEnum* StaticEnum<ENetworkPredictionExtrasMockCharacterAbilityInputPreset>()
	{
		return ENetworkPredictionExtrasMockCharacterAbilityInputPreset_StaticEnum();
	}
	struct Z_Construct_UEnum_NetworkPredictionExtras_ENetworkPredictionExtrasMockCharacterAbilityInputPreset_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NetworkPredictionExtras_ENetworkPredictionExtrasMockCharacterAbilityInputPreset_Statics::Enumerators[] = {
		{ "ENetworkPredictionExtrasMockCharacterAbilityInputPreset::None", (int64)ENetworkPredictionExtrasMockCharacterAbilityInputPreset::None },
		{ "ENetworkPredictionExtrasMockCharacterAbilityInputPreset::Sprint", (int64)ENetworkPredictionExtrasMockCharacterAbilityInputPreset::Sprint },
		{ "ENetworkPredictionExtrasMockCharacterAbilityInputPreset::Dash", (int64)ENetworkPredictionExtrasMockCharacterAbilityInputPreset::Dash },
		{ "ENetworkPredictionExtrasMockCharacterAbilityInputPreset::Blink", (int64)ENetworkPredictionExtrasMockCharacterAbilityInputPreset::Blink },
		{ "ENetworkPredictionExtrasMockCharacterAbilityInputPreset::Jump", (int64)ENetworkPredictionExtrasMockCharacterAbilityInputPreset::Jump },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NetworkPredictionExtras_ENetworkPredictionExtrasMockCharacterAbilityInputPreset_Statics::Enum_MetaDataParams[] = {
		{ "Blink.Name", "ENetworkPredictionExtrasMockCharacterAbilityInputPreset::Blink" },
		{ "Dash.Name", "ENetworkPredictionExtrasMockCharacterAbilityInputPreset::Dash" },
		{ "Jump.Name", "ENetworkPredictionExtrasMockCharacterAbilityInputPreset::Jump" },
		{ "ModuleRelativePath", "Public/NetworkPredictionExtrasCharacter.h" },
		{ "None.Comment", "/** No input */" },
		{ "None.Name", "ENetworkPredictionExtrasMockCharacterAbilityInputPreset::None" },
		{ "None.ToolTip", "No input" },
		{ "Sprint.Name", "ENetworkPredictionExtrasMockCharacterAbilityInputPreset::Sprint" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NetworkPredictionExtras_ENetworkPredictionExtrasMockCharacterAbilityInputPreset_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NetworkPredictionExtras,
		nullptr,
		"ENetworkPredictionExtrasMockCharacterAbilityInputPreset",
		"ENetworkPredictionExtrasMockCharacterAbilityInputPreset",
		Z_Construct_UEnum_NetworkPredictionExtras_ENetworkPredictionExtrasMockCharacterAbilityInputPreset_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NetworkPredictionExtras_ENetworkPredictionExtrasMockCharacterAbilityInputPreset_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NetworkPredictionExtras_ENetworkPredictionExtrasMockCharacterAbilityInputPreset_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NetworkPredictionExtras_ENetworkPredictionExtrasMockCharacterAbilityInputPreset_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NetworkPredictionExtras_ENetworkPredictionExtrasMockCharacterAbilityInputPreset()
	{
		if (!Z_Registration_Info_UEnum_ENetworkPredictionExtrasMockCharacterAbilityInputPreset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENetworkPredictionExtrasMockCharacterAbilityInputPreset.InnerSingleton, Z_Construct_UEnum_NetworkPredictionExtras_ENetworkPredictionExtrasMockCharacterAbilityInputPreset_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENetworkPredictionExtrasMockCharacterAbilityInputPreset.InnerSingleton;
	}
	DEFINE_FUNCTION(ANetworkPredictionExtrasCharacter_MockAbility::execGetMaxStamina)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxStamina();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANetworkPredictionExtrasCharacter_MockAbility::execGetStamina)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetStamina();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANetworkPredictionExtrasCharacter_MockAbility::execGetMockCharacterAbilityComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMockCharacterAbilityComponent**)Z_Param__Result=P_THIS->GetMockCharacterAbilityComponent();
		P_NATIVE_END;
	}
	void ANetworkPredictionExtrasCharacter_MockAbility::StaticRegisterNativesANetworkPredictionExtrasCharacter_MockAbility()
	{
		UClass* Class = ANetworkPredictionExtrasCharacter_MockAbility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMaxStamina", &ANetworkPredictionExtrasCharacter_MockAbility::execGetMaxStamina },
			{ "GetMockCharacterAbilityComponent", &ANetworkPredictionExtrasCharacter_MockAbility::execGetMockCharacterAbilityComponent },
			{ "GetStamina", &ANetworkPredictionExtrasCharacter_MockAbility::execGetStamina },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_MockAbility_GetMaxStamina_Statics
	{
		struct NetworkPredictionExtrasCharacter_MockAbility_eventGetMaxStamina_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_MockAbility_GetMaxStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NetworkPredictionExtrasCharacter_MockAbility_eventGetMaxStamina_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_MockAbility_GetMaxStamina_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_MockAbility_GetMaxStamina_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_MockAbility_GetMaxStamina_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/NetworkPredictionExtrasCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_MockAbility_GetMaxStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetworkPredictionExtrasCharacter_MockAbility, nullptr, "GetMaxStamina", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_MockAbility_GetMaxStamina_Statics::NetworkPredictionExtrasCharacter_MockAbility_eventGetMaxStamina_Parms), Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_MockAbility_GetMaxStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_MockAbility_GetMaxStamina_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_MockAbility_GetMaxStamina_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_MockAbility_GetMaxStamina_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_MockAbility_GetMaxStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_MockAbility_GetMaxStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_MockAbility_GetMockCharacterAbilityComponent_Statics
	{
		struct NetworkPredictionExtrasCharacter_MockAbility_eventGetMockCharacterAbilityComponent_Parms
		{
			UMockCharacterAbilityComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_MockAbility_GetMockCharacterAbilityComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_MockAbility_GetMockCharacterAbilityComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NetworkPredictionExtrasCharacter_MockAbility_eventGetMockCharacterAbilityComponent_Parms, ReturnValue), Z_Construct_UClass_UMockCharacterAbilityComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_MockAbility_GetMockCharacterAbilityComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_MockAbility_GetMockCharacterAbilityComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_MockAbility_GetMockCharacterAbilityComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_MockAbility_GetMockCharacterAbilityComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_MockAbility_GetMockCharacterAbilityComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/NetworkPredictionExtrasCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_MockAbility_GetMockCharacterAbilityComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetworkPredictionExtrasCharacter_MockAbility, nullptr, "GetMockCharacterAbilityComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_MockAbility_GetMockCharacterAbilityComponent_Statics::NetworkPredictionExtrasCharacter_MockAbility_eventGetMockCharacterAbilityComponent_Parms), Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_MockAbility_GetMockCharacterAbilityComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_MockAbility_GetMockCharacterAbilityComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_MockAbility_GetMockCharacterAbilityComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_MockAbility_GetMockCharacterAbilityComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_MockAbility_GetMockCharacterAbilityComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_MockAbility_GetMockCharacterAbilityComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_MockAbility_GetStamina_Statics
	{
		struct NetworkPredictionExtrasCharacter_MockAbility_eventGetStamina_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_MockAbility_GetStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NetworkPredictionExtrasCharacter_MockAbility_eventGetStamina_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_MockAbility_GetStamina_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_MockAbility_GetStamina_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_MockAbility_GetStamina_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/NetworkPredictionExtrasCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_MockAbility_GetStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetworkPredictionExtrasCharacter_MockAbility, nullptr, "GetStamina", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_MockAbility_GetStamina_Statics::NetworkPredictionExtrasCharacter_MockAbility_eventGetStamina_Parms), Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_MockAbility_GetStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_MockAbility_GetStamina_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_MockAbility_GetStamina_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_MockAbility_GetStamina_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_MockAbility_GetStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_MockAbility_GetStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANetworkPredictionExtrasCharacter_MockAbility);
	UClass* Z_Construct_UClass_ANetworkPredictionExtrasCharacter_MockAbility_NoRegister()
	{
		return ANetworkPredictionExtrasCharacter_MockAbility::StaticClass();
	}
	struct Z_Construct_UClass_ANetworkPredictionExtrasCharacter_MockAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AbilityInputPreset_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityInputPreset_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AbilityInputPreset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANetworkPredictionExtrasCharacter_MockAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANetworkPredictionExtrasCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkPredictionExtras,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANetworkPredictionExtrasCharacter_MockAbility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_MockAbility_GetMaxStamina, "GetMaxStamina" }, // 3674373130
		{ &Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_MockAbility_GetMockCharacterAbilityComponent, "GetMockCharacterAbilityComponent" }, // 3974836123
		{ &Z_Construct_UFunction_ANetworkPredictionExtrasCharacter_MockAbility_GetStamina, "GetStamina" }, // 3278660806
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetworkPredictionExtrasCharacter_MockAbility_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Example subclass of ANetworkPredictionExtrasCharacter that uses the MockAbility simulation\n" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NetworkPredictionExtrasCharacter.h" },
		{ "ModuleRelativePath", "Public/NetworkPredictionExtrasCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Example subclass of ANetworkPredictionExtrasCharacter that uses the MockAbility simulation" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ANetworkPredictionExtrasCharacter_MockAbility_Statics::NewProp_AbilityInputPreset_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetworkPredictionExtrasCharacter_MockAbility_Statics::NewProp_AbilityInputPreset_MetaData[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Public/NetworkPredictionExtrasCharacter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ANetworkPredictionExtrasCharacter_MockAbility_Statics::NewProp_AbilityInputPreset = { "AbilityInputPreset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANetworkPredictionExtrasCharacter_MockAbility, AbilityInputPreset), Z_Construct_UEnum_NetworkPredictionExtras_ENetworkPredictionExtrasMockCharacterAbilityInputPreset, METADATA_PARAMS(Z_Construct_UClass_ANetworkPredictionExtrasCharacter_MockAbility_Statics::NewProp_AbilityInputPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANetworkPredictionExtrasCharacter_MockAbility_Statics::NewProp_AbilityInputPreset_MetaData)) }; // 2468835766
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANetworkPredictionExtrasCharacter_MockAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetworkPredictionExtrasCharacter_MockAbility_Statics::NewProp_AbilityInputPreset_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetworkPredictionExtrasCharacter_MockAbility_Statics::NewProp_AbilityInputPreset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANetworkPredictionExtrasCharacter_MockAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANetworkPredictionExtrasCharacter_MockAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANetworkPredictionExtrasCharacter_MockAbility_Statics::ClassParams = {
		&ANetworkPredictionExtrasCharacter_MockAbility::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANetworkPredictionExtrasCharacter_MockAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANetworkPredictionExtrasCharacter_MockAbility_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANetworkPredictionExtrasCharacter_MockAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANetworkPredictionExtrasCharacter_MockAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANetworkPredictionExtrasCharacter_MockAbility()
	{
		if (!Z_Registration_Info_UClass_ANetworkPredictionExtrasCharacter_MockAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANetworkPredictionExtrasCharacter_MockAbility.OuterSingleton, Z_Construct_UClass_ANetworkPredictionExtrasCharacter_MockAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANetworkPredictionExtrasCharacter_MockAbility.OuterSingleton;
	}
	template<> NETWORKPREDICTIONEXTRAS_API UClass* StaticClass<ANetworkPredictionExtrasCharacter_MockAbility>()
	{
		return ANetworkPredictionExtrasCharacter_MockAbility::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANetworkPredictionExtrasCharacter_MockAbility);
	ANetworkPredictionExtrasCharacter_MockAbility::~ANetworkPredictionExtrasCharacter_MockAbility() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasCharacter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasCharacter_h_Statics::EnumInfo[] = {
		{ ENetworkPredictionExtrasCharacterInputPreset_StaticEnum, TEXT("ENetworkPredictionExtrasCharacterInputPreset"), &Z_Registration_Info_UEnum_ENetworkPredictionExtrasCharacterInputPreset, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3712380663U) },
		{ ENetworkPredictionExtrasMockCharacterAbilityInputPreset_StaticEnum, TEXT("ENetworkPredictionExtrasMockCharacterAbilityInputPreset"), &Z_Registration_Info_UEnum_ENetworkPredictionExtrasMockCharacterAbilityInputPreset, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2468835766U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANetworkPredictionExtrasCharacter, ANetworkPredictionExtrasCharacter::StaticClass, TEXT("ANetworkPredictionExtrasCharacter"), &Z_Registration_Info_UClass_ANetworkPredictionExtrasCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANetworkPredictionExtrasCharacter), 974472476U) },
		{ Z_Construct_UClass_ANetworkPredictionExtrasCharacter_MockAbility, ANetworkPredictionExtrasCharacter_MockAbility::StaticClass, TEXT("ANetworkPredictionExtrasCharacter_MockAbility"), &Z_Registration_Info_UClass_ANetworkPredictionExtrasCharacter_MockAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANetworkPredictionExtrasCharacter_MockAbility), 3689615820U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasCharacter_h_4042560996(TEXT("/Script/NetworkPredictionExtras"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasCharacter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasCharacter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
