// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUISubsystemBase.h"
#include "../../Source/Runtime/Engine/Classes/Engine/DataTable.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonUISubsystemBase() {}
// Cross Module References
	COMMONINPUT_API UEnum* Z_Construct_UEnum_CommonInput_ECommonInputType();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUISubsystemBase();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUISubsystemBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayer_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	DEFINE_FUNCTION(UCommonUISubsystemBase::execGetEnhancedInputActionButtonIcon)
	{
		P_GET_OBJECT(UInputAction,Z_Param_InputAction);
		P_GET_OBJECT(ULocalPlayer,Z_Param_LocalPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSlateBrush*)Z_Param__Result=P_THIS->GetEnhancedInputActionButtonIcon(Z_Param_InputAction,Z_Param_LocalPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonUISubsystemBase::execGetInputActionButtonIcon)
	{
		P_GET_STRUCT_REF(FDataTableRowHandle,Z_Param_Out_InputActionRowHandle);
		P_GET_ENUM(ECommonInputType,Z_Param_InputType);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_GamepadName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSlateBrush*)Z_Param__Result=P_THIS->GetInputActionButtonIcon(Z_Param_Out_InputActionRowHandle,ECommonInputType(Z_Param_InputType),Z_Param_Out_GamepadName);
		P_NATIVE_END;
	}
	void UCommonUISubsystemBase::StaticRegisterNativesUCommonUISubsystemBase()
	{
		UClass* Class = UCommonUISubsystemBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEnhancedInputActionButtonIcon", &UCommonUISubsystemBase::execGetEnhancedInputActionButtonIcon },
			{ "GetInputActionButtonIcon", &UCommonUISubsystemBase::execGetInputActionButtonIcon },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonUISubsystemBase_GetEnhancedInputActionButtonIcon_Statics
	{
		struct CommonUISubsystemBase_eventGetEnhancedInputActionButtonIcon_Parms
		{
			const UInputAction* InputAction;
			const ULocalPlayer* LocalPlayer;
			FSlateBrush ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LocalPlayer;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonUISubsystemBase_GetEnhancedInputActionButtonIcon_Statics::NewProp_InputAction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonUISubsystemBase_GetEnhancedInputActionButtonIcon_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonUISubsystemBase_eventGetEnhancedInputActionButtonIcon_Parms, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonUISubsystemBase_GetEnhancedInputActionButtonIcon_Statics::NewProp_InputAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUISubsystemBase_GetEnhancedInputActionButtonIcon_Statics::NewProp_InputAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonUISubsystemBase_GetEnhancedInputActionButtonIcon_Statics::NewProp_LocalPlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonUISubsystemBase_GetEnhancedInputActionButtonIcon_Statics::NewProp_LocalPlayer = { "LocalPlayer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonUISubsystemBase_eventGetEnhancedInputActionButtonIcon_Parms, LocalPlayer), Z_Construct_UClass_ULocalPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonUISubsystemBase_GetEnhancedInputActionButtonIcon_Statics::NewProp_LocalPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUISubsystemBase_GetEnhancedInputActionButtonIcon_Statics::NewProp_LocalPlayer_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonUISubsystemBase_GetEnhancedInputActionButtonIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonUISubsystemBase_eventGetEnhancedInputActionButtonIcon_Parms, ReturnValue), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) }; // 4256420591
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonUISubsystemBase_GetEnhancedInputActionButtonIcon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUISubsystemBase_GetEnhancedInputActionButtonIcon_Statics::NewProp_InputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUISubsystemBase_GetEnhancedInputActionButtonIcon_Statics::NewProp_LocalPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUISubsystemBase_GetEnhancedInputActionButtonIcon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonUISubsystemBase_GetEnhancedInputActionButtonIcon_Statics::Function_MetaDataParams[] = {
		{ "Category", "CommonUISubsystem" },
		{ "Comment", "// Gets Action Button Icon for given action and player, enhanced input API currently does not allow input type specification\n" },
		{ "ModuleRelativePath", "Public/CommonUISubsystemBase.h" },
		{ "ToolTip", "Gets Action Button Icon for given action and player, enhanced input API currently does not allow input type specification" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonUISubsystemBase_GetEnhancedInputActionButtonIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonUISubsystemBase, nullptr, "GetEnhancedInputActionButtonIcon", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonUISubsystemBase_GetEnhancedInputActionButtonIcon_Statics::CommonUISubsystemBase_eventGetEnhancedInputActionButtonIcon_Parms), Z_Construct_UFunction_UCommonUISubsystemBase_GetEnhancedInputActionButtonIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUISubsystemBase_GetEnhancedInputActionButtonIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonUISubsystemBase_GetEnhancedInputActionButtonIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUISubsystemBase_GetEnhancedInputActionButtonIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonUISubsystemBase_GetEnhancedInputActionButtonIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonUISubsystemBase_GetEnhancedInputActionButtonIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonUISubsystemBase_GetInputActionButtonIcon_Statics
	{
		struct CommonUISubsystemBase_eventGetInputActionButtonIcon_Parms
		{
			FDataTableRowHandle InputActionRowHandle;
			ECommonInputType InputType;
			FName GamepadName;
			FSlateBrush ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputActionRowHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputActionRowHandle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InputType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GamepadName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GamepadName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonUISubsystemBase_GetInputActionButtonIcon_Statics::NewProp_InputActionRowHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonUISubsystemBase_GetInputActionButtonIcon_Statics::NewProp_InputActionRowHandle = { "InputActionRowHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonUISubsystemBase_eventGetInputActionButtonIcon_Parms, InputActionRowHandle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(Z_Construct_UFunction_UCommonUISubsystemBase_GetInputActionButtonIcon_Statics::NewProp_InputActionRowHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUISubsystemBase_GetInputActionButtonIcon_Statics::NewProp_InputActionRowHandle_MetaData)) }; // 2710926200
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCommonUISubsystemBase_GetInputActionButtonIcon_Statics::NewProp_InputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCommonUISubsystemBase_GetInputActionButtonIcon_Statics::NewProp_InputType = { "InputType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonUISubsystemBase_eventGetInputActionButtonIcon_Parms, InputType), Z_Construct_UEnum_CommonInput_ECommonInputType, METADATA_PARAMS(nullptr, 0) }; // 3567225506
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonUISubsystemBase_GetInputActionButtonIcon_Statics::NewProp_GamepadName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCommonUISubsystemBase_GetInputActionButtonIcon_Statics::NewProp_GamepadName = { "GamepadName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonUISubsystemBase_eventGetInputActionButtonIcon_Parms, GamepadName), METADATA_PARAMS(Z_Construct_UFunction_UCommonUISubsystemBase_GetInputActionButtonIcon_Statics::NewProp_GamepadName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUISubsystemBase_GetInputActionButtonIcon_Statics::NewProp_GamepadName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonUISubsystemBase_GetInputActionButtonIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonUISubsystemBase_eventGetInputActionButtonIcon_Parms, ReturnValue), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) }; // 4256420591
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonUISubsystemBase_GetInputActionButtonIcon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUISubsystemBase_GetInputActionButtonIcon_Statics::NewProp_InputActionRowHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUISubsystemBase_GetInputActionButtonIcon_Statics::NewProp_InputType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUISubsystemBase_GetInputActionButtonIcon_Statics::NewProp_InputType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUISubsystemBase_GetInputActionButtonIcon_Statics::NewProp_GamepadName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUISubsystemBase_GetInputActionButtonIcon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonUISubsystemBase_GetInputActionButtonIcon_Statics::Function_MetaDataParams[] = {
		{ "Category", "CommonUISubsystem" },
		{ "Comment", "// Gets Action Button Icon for current gamepad\n" },
		{ "ModuleRelativePath", "Public/CommonUISubsystemBase.h" },
		{ "ToolTip", "Gets Action Button Icon for current gamepad" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonUISubsystemBase_GetInputActionButtonIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonUISubsystemBase, nullptr, "GetInputActionButtonIcon", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonUISubsystemBase_GetInputActionButtonIcon_Statics::CommonUISubsystemBase_eventGetInputActionButtonIcon_Parms), Z_Construct_UFunction_UCommonUISubsystemBase_GetInputActionButtonIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUISubsystemBase_GetInputActionButtonIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonUISubsystemBase_GetInputActionButtonIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUISubsystemBase_GetInputActionButtonIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonUISubsystemBase_GetInputActionButtonIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonUISubsystemBase_GetInputActionButtonIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonUISubsystemBase);
	UClass* Z_Construct_UClass_UCommonUISubsystemBase_NoRegister()
	{
		return UCommonUISubsystemBase::StaticClass();
	}
	struct Z_Construct_UClass_UCommonUISubsystemBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonUISubsystemBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonUISubsystemBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonUISubsystemBase_GetEnhancedInputActionButtonIcon, "GetEnhancedInputActionButtonIcon" }, // 1207878017
		{ &Z_Construct_UFunction_UCommonUISubsystemBase_GetInputActionButtonIcon, "GetInputActionButtonIcon" }, // 1534598631
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUISubsystemBase_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "CommonUI" },
		{ "IncludePath", "CommonUISubsystemBase.h" },
		{ "ModuleRelativePath", "Public/CommonUISubsystemBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonUISubsystemBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonUISubsystemBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonUISubsystemBase_Statics::ClassParams = {
		&UCommonUISubsystemBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonUISubsystemBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUISubsystemBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonUISubsystemBase()
	{
		if (!Z_Registration_Info_UClass_UCommonUISubsystemBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonUISubsystemBase.OuterSingleton, Z_Construct_UClass_UCommonUISubsystemBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonUISubsystemBase.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonUISubsystemBase>()
	{
		return UCommonUISubsystemBase::StaticClass();
	}
	UCommonUISubsystemBase::UCommonUISubsystemBase() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonUISubsystemBase);
	UCommonUISubsystemBase::~UCommonUISubsystemBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUISubsystemBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUISubsystemBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonUISubsystemBase, UCommonUISubsystemBase::StaticClass, TEXT("UCommonUISubsystemBase"), &Z_Registration_Info_UClass_UCommonUISubsystemBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonUISubsystemBase), 3029012460U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUISubsystemBase_h_2692873225(TEXT("/Script/CommonUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUISubsystemBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUISubsystemBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
