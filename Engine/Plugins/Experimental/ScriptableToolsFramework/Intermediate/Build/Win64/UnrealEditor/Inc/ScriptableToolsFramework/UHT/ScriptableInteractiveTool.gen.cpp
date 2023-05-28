// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScriptableInteractiveTool.h"
#include "InputState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScriptableInteractiveTool() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmo_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EToolShutdownType();
	INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FInputRayHit();
	SCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScriptableInteractiveTool();
	SCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScriptableInteractiveTool_NoRegister();
	SCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScriptableInteractiveToolPropertySet();
	SCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScriptableInteractiveToolPropertySet_NoRegister();
	SCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScriptableTool_HUDAPI();
	SCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScriptableTool_HUDAPI_NoRegister();
	SCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScriptableTool_RenderAPI();
	SCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScriptableTool_RenderAPI_NoRegister();
	SCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScriptableToolsUtilityLibrary();
	SCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScriptableToolsUtilityLibrary_NoRegister();
	SCRIPTABLETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoCoordinateSystem();
	SCRIPTABLETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoMode();
	SCRIPTABLETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoRotation();
	SCRIPTABLETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoScale();
	SCRIPTABLETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoTranslation();
	SCRIPTABLETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolShutdownType();
	SCRIPTABLETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_ScriptableToolsFramework_EToolsFrameworkOutcomePins();
	SCRIPTABLETOOLSFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolBoolPropertyModifiedDelegate__DelegateSignature();
	SCRIPTABLETOOLSFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolEnumPropertyModifiedDelegate__DelegateSignature();
	SCRIPTABLETOOLSFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolFloatPropertyModifiedDelegate__DelegateSignature();
	SCRIPTABLETOOLSFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolFNamePropertyModifiedDelegate__DelegateSignature();
	SCRIPTABLETOOLSFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolIntPropertyModifiedDelegate__DelegateSignature();
	SCRIPTABLETOOLSFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolObjectPropertyModifiedDelegate__DelegateSignature();
	SCRIPTABLETOOLSFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolPropertyModifiedDelegate__DelegateSignature();
	SCRIPTABLETOOLSFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolStringPropertyModifiedDelegate__DelegateSignature();
	SCRIPTABLETOOLSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FScriptableToolGizmoOptions();
	SCRIPTABLETOOLSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FScriptableToolModifierStates();
	UPackage* Z_Construct_UPackage__Script_ScriptableToolsFramework();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EToolsFrameworkOutcomePins;
	static UEnum* EToolsFrameworkOutcomePins_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EToolsFrameworkOutcomePins.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EToolsFrameworkOutcomePins.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ScriptableToolsFramework_EToolsFrameworkOutcomePins, (UObject*)Z_Construct_UPackage__Script_ScriptableToolsFramework(), TEXT("EToolsFrameworkOutcomePins"));
		}
		return Z_Registration_Info_UEnum_EToolsFrameworkOutcomePins.OuterSingleton;
	}
	template<> SCRIPTABLETOOLSFRAMEWORK_API UEnum* StaticEnum<EToolsFrameworkOutcomePins>()
	{
		return EToolsFrameworkOutcomePins_StaticEnum();
	}
	struct Z_Construct_UEnum_ScriptableToolsFramework_EToolsFrameworkOutcomePins_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ScriptableToolsFramework_EToolsFrameworkOutcomePins_Statics::Enumerators[] = {
		{ "EToolsFrameworkOutcomePins::Success", (int64)EToolsFrameworkOutcomePins::Success },
		{ "EToolsFrameworkOutcomePins::Failure", (int64)EToolsFrameworkOutcomePins::Failure },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ScriptableToolsFramework_EToolsFrameworkOutcomePins_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Failure.Name", "EToolsFrameworkOutcomePins::Failure" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "Success.Name", "EToolsFrameworkOutcomePins::Success" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ScriptableToolsFramework_EToolsFrameworkOutcomePins_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ScriptableToolsFramework,
		nullptr,
		"EToolsFrameworkOutcomePins",
		"EToolsFrameworkOutcomePins",
		Z_Construct_UEnum_ScriptableToolsFramework_EToolsFrameworkOutcomePins_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ScriptableToolsFramework_EToolsFrameworkOutcomePins_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ScriptableToolsFramework_EToolsFrameworkOutcomePins_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ScriptableToolsFramework_EToolsFrameworkOutcomePins_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ScriptableToolsFramework_EToolsFrameworkOutcomePins()
	{
		if (!Z_Registration_Info_UEnum_EToolsFrameworkOutcomePins.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EToolsFrameworkOutcomePins.InnerSingleton, Z_Construct_UEnum_ScriptableToolsFramework_EToolsFrameworkOutcomePins_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EToolsFrameworkOutcomePins.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EScriptableToolShutdownType;
	static UEnum* EScriptableToolShutdownType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EScriptableToolShutdownType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EScriptableToolShutdownType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolShutdownType, (UObject*)Z_Construct_UPackage__Script_ScriptableToolsFramework(), TEXT("EScriptableToolShutdownType"));
		}
		return Z_Registration_Info_UEnum_EScriptableToolShutdownType.OuterSingleton;
	}
	template<> SCRIPTABLETOOLSFRAMEWORK_API UEnum* StaticEnum<EScriptableToolShutdownType>()
	{
		return EScriptableToolShutdownType_StaticEnum();
	}
	struct Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolShutdownType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolShutdownType_Statics::Enumerators[] = {
		{ "EScriptableToolShutdownType::Complete", (int64)EScriptableToolShutdownType::Complete },
		{ "EScriptableToolShutdownType::AcceptCancel", (int64)EScriptableToolShutdownType::AcceptCancel },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolShutdownType_Statics::Enum_MetaDataParams[] = {
		{ "AcceptCancel.Name", "EScriptableToolShutdownType::AcceptCancel" },
		{ "BlueprintType", "true" },
		{ "Complete.Name", "EScriptableToolShutdownType::Complete" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolShutdownType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ScriptableToolsFramework,
		nullptr,
		"EScriptableToolShutdownType",
		"EScriptableToolShutdownType",
		Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolShutdownType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolShutdownType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolShutdownType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolShutdownType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolShutdownType()
	{
		if (!Z_Registration_Info_UEnum_EScriptableToolShutdownType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EScriptableToolShutdownType.InnerSingleton, Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolShutdownType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EScriptableToolShutdownType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScriptableToolModifierStates;
class UScriptStruct* FScriptableToolModifierStates::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScriptableToolModifierStates.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScriptableToolModifierStates.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScriptableToolModifierStates, (UObject*)Z_Construct_UPackage__Script_ScriptableToolsFramework(), TEXT("ScriptableToolModifierStates"));
	}
	return Z_Registration_Info_UScriptStruct_ScriptableToolModifierStates.OuterSingleton;
}
template<> SCRIPTABLETOOLSFRAMEWORK_API UScriptStruct* StaticStruct<FScriptableToolModifierStates>()
{
	return FScriptableToolModifierStates::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FScriptableToolModifierStates_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShiftDown_MetaData[];
#endif
		static void NewProp_bShiftDown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShiftDown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCtrlDown_MetaData[];
#endif
		static void NewProp_bCtrlDown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCtrlDown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAltDown_MetaData[];
#endif
		static void NewProp_bAltDown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAltDown;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScriptableToolModifierStates_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FScriptableToolModifierStates_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScriptableToolModifierStates>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScriptableToolModifierStates_Statics::NewProp_bShiftDown_MetaData[] = {
		{ "Category", "Modifiers" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FScriptableToolModifierStates_Statics::NewProp_bShiftDown_SetBit(void* Obj)
	{
		((FScriptableToolModifierStates*)Obj)->bShiftDown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FScriptableToolModifierStates_Statics::NewProp_bShiftDown = { "bShiftDown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FScriptableToolModifierStates), &Z_Construct_UScriptStruct_FScriptableToolModifierStates_Statics::NewProp_bShiftDown_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FScriptableToolModifierStates_Statics::NewProp_bShiftDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptableToolModifierStates_Statics::NewProp_bShiftDown_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScriptableToolModifierStates_Statics::NewProp_bCtrlDown_MetaData[] = {
		{ "Category", "Modifiers" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FScriptableToolModifierStates_Statics::NewProp_bCtrlDown_SetBit(void* Obj)
	{
		((FScriptableToolModifierStates*)Obj)->bCtrlDown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FScriptableToolModifierStates_Statics::NewProp_bCtrlDown = { "bCtrlDown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FScriptableToolModifierStates), &Z_Construct_UScriptStruct_FScriptableToolModifierStates_Statics::NewProp_bCtrlDown_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FScriptableToolModifierStates_Statics::NewProp_bCtrlDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptableToolModifierStates_Statics::NewProp_bCtrlDown_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScriptableToolModifierStates_Statics::NewProp_bAltDown_MetaData[] = {
		{ "Category", "Modifiers" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FScriptableToolModifierStates_Statics::NewProp_bAltDown_SetBit(void* Obj)
	{
		((FScriptableToolModifierStates*)Obj)->bAltDown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FScriptableToolModifierStates_Statics::NewProp_bAltDown = { "bAltDown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FScriptableToolModifierStates), &Z_Construct_UScriptStruct_FScriptableToolModifierStates_Statics::NewProp_bAltDown_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FScriptableToolModifierStates_Statics::NewProp_bAltDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptableToolModifierStates_Statics::NewProp_bAltDown_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScriptableToolModifierStates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScriptableToolModifierStates_Statics::NewProp_bShiftDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScriptableToolModifierStates_Statics::NewProp_bCtrlDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScriptableToolModifierStates_Statics::NewProp_bAltDown,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScriptableToolModifierStates_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ScriptableToolsFramework,
		nullptr,
		&NewStructOps,
		"ScriptableToolModifierStates",
		sizeof(FScriptableToolModifierStates),
		alignof(FScriptableToolModifierStates),
		Z_Construct_UScriptStruct_FScriptableToolModifierStates_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptableToolModifierStates_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScriptableToolModifierStates_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptableToolModifierStates_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScriptableToolModifierStates()
	{
		if (!Z_Registration_Info_UScriptStruct_ScriptableToolModifierStates.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScriptableToolModifierStates.InnerSingleton, Z_Construct_UScriptStruct_FScriptableToolModifierStates_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ScriptableToolModifierStates.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EScriptableToolGizmoMode;
	static UEnum* EScriptableToolGizmoMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EScriptableToolGizmoMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EScriptableToolGizmoMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoMode, (UObject*)Z_Construct_UPackage__Script_ScriptableToolsFramework(), TEXT("EScriptableToolGizmoMode"));
		}
		return Z_Registration_Info_UEnum_EScriptableToolGizmoMode.OuterSingleton;
	}
	template<> SCRIPTABLETOOLSFRAMEWORK_API UEnum* StaticEnum<EScriptableToolGizmoMode>()
	{
		return EScriptableToolGizmoMode_StaticEnum();
	}
	struct Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoMode_Statics::Enumerators[] = {
		{ "EScriptableToolGizmoMode::TranslationOnly", (int64)EScriptableToolGizmoMode::TranslationOnly },
		{ "EScriptableToolGizmoMode::RotationOnly", (int64)EScriptableToolGizmoMode::RotationOnly },
		{ "EScriptableToolGizmoMode::ScaleOnly", (int64)EScriptableToolGizmoMode::ScaleOnly },
		{ "EScriptableToolGizmoMode::Combined", (int64)EScriptableToolGizmoMode::Combined },
		{ "EScriptableToolGizmoMode::FromViewportSettings", (int64)EScriptableToolGizmoMode::FromViewportSettings },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Combined.Name", "EScriptableToolGizmoMode::Combined" },
		{ "FromViewportSettings.Name", "EScriptableToolGizmoMode::FromViewportSettings" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "RotationOnly.Name", "EScriptableToolGizmoMode::RotationOnly" },
		{ "ScaleOnly.Name", "EScriptableToolGizmoMode::ScaleOnly" },
		{ "TranslationOnly.Name", "EScriptableToolGizmoMode::TranslationOnly" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ScriptableToolsFramework,
		nullptr,
		"EScriptableToolGizmoMode",
		"EScriptableToolGizmoMode",
		Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoMode()
	{
		if (!Z_Registration_Info_UEnum_EScriptableToolGizmoMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EScriptableToolGizmoMode.InnerSingleton, Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EScriptableToolGizmoMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EScriptableToolGizmoCoordinateSystem;
	static UEnum* EScriptableToolGizmoCoordinateSystem_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EScriptableToolGizmoCoordinateSystem.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EScriptableToolGizmoCoordinateSystem.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoCoordinateSystem, (UObject*)Z_Construct_UPackage__Script_ScriptableToolsFramework(), TEXT("EScriptableToolGizmoCoordinateSystem"));
		}
		return Z_Registration_Info_UEnum_EScriptableToolGizmoCoordinateSystem.OuterSingleton;
	}
	template<> SCRIPTABLETOOLSFRAMEWORK_API UEnum* StaticEnum<EScriptableToolGizmoCoordinateSystem>()
	{
		return EScriptableToolGizmoCoordinateSystem_StaticEnum();
	}
	struct Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoCoordinateSystem_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoCoordinateSystem_Statics::Enumerators[] = {
		{ "EScriptableToolGizmoCoordinateSystem::World", (int64)EScriptableToolGizmoCoordinateSystem::World },
		{ "EScriptableToolGizmoCoordinateSystem::Local", (int64)EScriptableToolGizmoCoordinateSystem::Local },
		{ "EScriptableToolGizmoCoordinateSystem::FromViewportSettings", (int64)EScriptableToolGizmoCoordinateSystem::FromViewportSettings },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoCoordinateSystem_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FromViewportSettings.Name", "EScriptableToolGizmoCoordinateSystem::FromViewportSettings" },
		{ "Local.Name", "EScriptableToolGizmoCoordinateSystem::Local" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "World.Name", "EScriptableToolGizmoCoordinateSystem::World" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoCoordinateSystem_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ScriptableToolsFramework,
		nullptr,
		"EScriptableToolGizmoCoordinateSystem",
		"EScriptableToolGizmoCoordinateSystem",
		Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoCoordinateSystem_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoCoordinateSystem_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoCoordinateSystem_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoCoordinateSystem_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoCoordinateSystem()
	{
		if (!Z_Registration_Info_UEnum_EScriptableToolGizmoCoordinateSystem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EScriptableToolGizmoCoordinateSystem.InnerSingleton, Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoCoordinateSystem_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EScriptableToolGizmoCoordinateSystem.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EScriptableToolGizmoTranslation;
	static UEnum* EScriptableToolGizmoTranslation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EScriptableToolGizmoTranslation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EScriptableToolGizmoTranslation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoTranslation, (UObject*)Z_Construct_UPackage__Script_ScriptableToolsFramework(), TEXT("EScriptableToolGizmoTranslation"));
		}
		return Z_Registration_Info_UEnum_EScriptableToolGizmoTranslation.OuterSingleton;
	}
	template<> SCRIPTABLETOOLSFRAMEWORK_API UEnum* StaticEnum<EScriptableToolGizmoTranslation>()
	{
		return EScriptableToolGizmoTranslation_StaticEnum();
	}
	struct Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoTranslation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoTranslation_Statics::Enumerators[] = {
		{ "EScriptableToolGizmoTranslation::None", (int64)EScriptableToolGizmoTranslation::None },
		{ "EScriptableToolGizmoTranslation::TranslateAxisX", (int64)EScriptableToolGizmoTranslation::TranslateAxisX },
		{ "EScriptableToolGizmoTranslation::TranslateAxisY", (int64)EScriptableToolGizmoTranslation::TranslateAxisY },
		{ "EScriptableToolGizmoTranslation::TranslateAxisZ", (int64)EScriptableToolGizmoTranslation::TranslateAxisZ },
		{ "EScriptableToolGizmoTranslation::TranslatePlaneXY", (int64)EScriptableToolGizmoTranslation::TranslatePlaneXY },
		{ "EScriptableToolGizmoTranslation::TranslatePlaneXZ", (int64)EScriptableToolGizmoTranslation::TranslatePlaneXZ },
		{ "EScriptableToolGizmoTranslation::TranslatePlaneYZ", (int64)EScriptableToolGizmoTranslation::TranslatePlaneYZ },
		{ "EScriptableToolGizmoTranslation::All", (int64)EScriptableToolGizmoTranslation::All },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoTranslation_Statics::Enum_MetaDataParams[] = {
		{ "All.Hidden", "" },
		{ "All.Name", "EScriptableToolGizmoTranslation::All" },
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "None.Name", "EScriptableToolGizmoTranslation::None" },
		{ "TranslateAxisX.Name", "EScriptableToolGizmoTranslation::TranslateAxisX" },
		{ "TranslateAxisY.Name", "EScriptableToolGizmoTranslation::TranslateAxisY" },
		{ "TranslateAxisZ.Name", "EScriptableToolGizmoTranslation::TranslateAxisZ" },
		{ "TranslatePlaneXY.Name", "EScriptableToolGizmoTranslation::TranslatePlaneXY" },
		{ "TranslatePlaneXZ.Name", "EScriptableToolGizmoTranslation::TranslatePlaneXZ" },
		{ "TranslatePlaneYZ.Name", "EScriptableToolGizmoTranslation::TranslatePlaneYZ" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoTranslation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ScriptableToolsFramework,
		nullptr,
		"EScriptableToolGizmoTranslation",
		"EScriptableToolGizmoTranslation",
		Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoTranslation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoTranslation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoTranslation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoTranslation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoTranslation()
	{
		if (!Z_Registration_Info_UEnum_EScriptableToolGizmoTranslation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EScriptableToolGizmoTranslation.InnerSingleton, Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoTranslation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EScriptableToolGizmoTranslation.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EScriptableToolGizmoRotation;
	static UEnum* EScriptableToolGizmoRotation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EScriptableToolGizmoRotation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EScriptableToolGizmoRotation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoRotation, (UObject*)Z_Construct_UPackage__Script_ScriptableToolsFramework(), TEXT("EScriptableToolGizmoRotation"));
		}
		return Z_Registration_Info_UEnum_EScriptableToolGizmoRotation.OuterSingleton;
	}
	template<> SCRIPTABLETOOLSFRAMEWORK_API UEnum* StaticEnum<EScriptableToolGizmoRotation>()
	{
		return EScriptableToolGizmoRotation_StaticEnum();
	}
	struct Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoRotation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoRotation_Statics::Enumerators[] = {
		{ "EScriptableToolGizmoRotation::None", (int64)EScriptableToolGizmoRotation::None },
		{ "EScriptableToolGizmoRotation::RotateAxisX", (int64)EScriptableToolGizmoRotation::RotateAxisX },
		{ "EScriptableToolGizmoRotation::RotateAxisY", (int64)EScriptableToolGizmoRotation::RotateAxisY },
		{ "EScriptableToolGizmoRotation::RotateAxisZ", (int64)EScriptableToolGizmoRotation::RotateAxisZ },
		{ "EScriptableToolGizmoRotation::All", (int64)EScriptableToolGizmoRotation::All },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoRotation_Statics::Enum_MetaDataParams[] = {
		{ "All.Hidden", "" },
		{ "All.Name", "EScriptableToolGizmoRotation::All" },
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "None.Name", "EScriptableToolGizmoRotation::None" },
		{ "RotateAxisX.Name", "EScriptableToolGizmoRotation::RotateAxisX" },
		{ "RotateAxisY.Name", "EScriptableToolGizmoRotation::RotateAxisY" },
		{ "RotateAxisZ.Name", "EScriptableToolGizmoRotation::RotateAxisZ" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoRotation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ScriptableToolsFramework,
		nullptr,
		"EScriptableToolGizmoRotation",
		"EScriptableToolGizmoRotation",
		Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoRotation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoRotation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoRotation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoRotation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoRotation()
	{
		if (!Z_Registration_Info_UEnum_EScriptableToolGizmoRotation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EScriptableToolGizmoRotation.InnerSingleton, Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoRotation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EScriptableToolGizmoRotation.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EScriptableToolGizmoScale;
	static UEnum* EScriptableToolGizmoScale_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EScriptableToolGizmoScale.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EScriptableToolGizmoScale.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoScale, (UObject*)Z_Construct_UPackage__Script_ScriptableToolsFramework(), TEXT("EScriptableToolGizmoScale"));
		}
		return Z_Registration_Info_UEnum_EScriptableToolGizmoScale.OuterSingleton;
	}
	template<> SCRIPTABLETOOLSFRAMEWORK_API UEnum* StaticEnum<EScriptableToolGizmoScale>()
	{
		return EScriptableToolGizmoScale_StaticEnum();
	}
	struct Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoScale_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoScale_Statics::Enumerators[] = {
		{ "EScriptableToolGizmoScale::None", (int64)EScriptableToolGizmoScale::None },
		{ "EScriptableToolGizmoScale::ScaleAxisX", (int64)EScriptableToolGizmoScale::ScaleAxisX },
		{ "EScriptableToolGizmoScale::ScaleAxisY", (int64)EScriptableToolGizmoScale::ScaleAxisY },
		{ "EScriptableToolGizmoScale::ScaleAxisZ", (int64)EScriptableToolGizmoScale::ScaleAxisZ },
		{ "EScriptableToolGizmoScale::ScalePlaneXY", (int64)EScriptableToolGizmoScale::ScalePlaneXY },
		{ "EScriptableToolGizmoScale::ScalePlaneXZ", (int64)EScriptableToolGizmoScale::ScalePlaneXZ },
		{ "EScriptableToolGizmoScale::ScalePlaneYZ", (int64)EScriptableToolGizmoScale::ScalePlaneYZ },
		{ "EScriptableToolGizmoScale::ScaleUniform", (int64)EScriptableToolGizmoScale::ScaleUniform },
		{ "EScriptableToolGizmoScale::All", (int64)EScriptableToolGizmoScale::All },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoScale_Statics::Enum_MetaDataParams[] = {
		{ "All.Hidden", "" },
		{ "All.Name", "EScriptableToolGizmoScale::All" },
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "None.Name", "EScriptableToolGizmoScale::None" },
		{ "ScaleAxisX.Name", "EScriptableToolGizmoScale::ScaleAxisX" },
		{ "ScaleAxisY.Name", "EScriptableToolGizmoScale::ScaleAxisY" },
		{ "ScaleAxisZ.Name", "EScriptableToolGizmoScale::ScaleAxisZ" },
		{ "ScalePlaneXY.Name", "EScriptableToolGizmoScale::ScalePlaneXY" },
		{ "ScalePlaneXZ.Name", "EScriptableToolGizmoScale::ScalePlaneXZ" },
		{ "ScalePlaneYZ.Name", "EScriptableToolGizmoScale::ScalePlaneYZ" },
		{ "ScaleUniform.Name", "EScriptableToolGizmoScale::ScaleUniform" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoScale_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ScriptableToolsFramework,
		nullptr,
		"EScriptableToolGizmoScale",
		"EScriptableToolGizmoScale",
		Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoScale_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoScale_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoScale_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoScale_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoScale()
	{
		if (!Z_Registration_Info_UEnum_EScriptableToolGizmoScale.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EScriptableToolGizmoScale.InnerSingleton, Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoScale_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EScriptableToolGizmoScale.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScriptableToolGizmoOptions;
class UScriptStruct* FScriptableToolGizmoOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScriptableToolGizmoOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScriptableToolGizmoOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScriptableToolGizmoOptions, (UObject*)Z_Construct_UPackage__Script_ScriptableToolsFramework(), TEXT("ScriptableToolGizmoOptions"));
	}
	return Z_Registration_Info_UScriptStruct_ScriptableToolGizmoOptions.OuterSingleton;
}
template<> SCRIPTABLETOOLSFRAMEWORK_API UScriptStruct* StaticStruct<FScriptableToolGizmoOptions>()
{
	return FScriptableToolGizmoOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_GizmoMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GizmoMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GizmoMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslationParts_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TranslationParts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationParts_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RotationParts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleParts_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ScaleParts;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordSystem_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CoordSystem_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CoordSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSnapTranslation_MetaData[];
#endif
		static void NewProp_bSnapTranslation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapTranslation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSnapRotation_MetaData[];
#endif
		static void NewProp_bSnapRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRepositionable_MetaData[];
#endif
		static void NewProp_bRepositionable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRepositionable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowNegativeScaling_MetaData[];
#endif
		static void NewProp_bAllowNegativeScaling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowNegativeScaling;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FScriptableToolGizmoOptions is a configuration struct passed to the CreateTRSGizmo function\n * of UScriptableInteractiveTool. \n */" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "ToolTip", "FScriptableToolGizmoOptions is a configuration struct passed to the CreateTRSGizmo function\nof UScriptableInteractiveTool." },
	};
#endif
	void* Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScriptableToolGizmoOptions>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_GizmoMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_GizmoMode_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_GizmoMode = { "GizmoMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScriptableToolGizmoOptions, GizmoMode), Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_GizmoMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_GizmoMode_MetaData)) }; // 1968345091
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_TranslationParts_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/ScriptableToolsFramework.EScriptableToolGizmoTranslation" },
		{ "Category", "Gizmo" },
		{ "DisplayName", "Translation Elements" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "ValidEnumValues", "TranslateAxisX, TranslateAxisY, TranslateAxisZ, TranslatePlaneXY, TranslatePlaneXZ, TranslatePlaneYZ" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_TranslationParts = { "TranslationParts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScriptableToolGizmoOptions, TranslationParts), METADATA_PARAMS(Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_TranslationParts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_TranslationParts_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_RotationParts_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/ScriptableToolsFramework.EScriptableToolGizmoRotation" },
		{ "Category", "Gizmo" },
		{ "DisplayName", "Rotation Elements" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "ValidEnumValues", "RotateAxisX, RotateAxisY, RotateAxisZ" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_RotationParts = { "RotationParts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScriptableToolGizmoOptions, RotationParts), METADATA_PARAMS(Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_RotationParts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_RotationParts_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_ScaleParts_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/ScriptableToolsFramework.EScriptableToolGizmoScale" },
		{ "Category", "Gizmo" },
		{ "DisplayName", "Scale Elements" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "ValidEnumValues", "ScaleAxisX, ScaleAxisY, ScaleAxisZ, ScalePlaneXY, ScalePlaneXZ, ScalePlaneYZ" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_ScaleParts = { "ScaleParts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScriptableToolGizmoOptions, ScaleParts), METADATA_PARAMS(Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_ScaleParts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_ScaleParts_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_CoordSystem_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_CoordSystem_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_CoordSystem = { "CoordSystem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScriptableToolGizmoOptions, CoordSystem), Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolGizmoCoordinateSystem, METADATA_PARAMS(Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_CoordSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_CoordSystem_MetaData)) }; // 3932158487
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_bSnapTranslation_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_bSnapTranslation_SetBit(void* Obj)
	{
		((FScriptableToolGizmoOptions*)Obj)->bSnapTranslation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_bSnapTranslation = { "bSnapTranslation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FScriptableToolGizmoOptions), &Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_bSnapTranslation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_bSnapTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_bSnapTranslation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_bSnapRotation_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_bSnapRotation_SetBit(void* Obj)
	{
		((FScriptableToolGizmoOptions*)Obj)->bSnapRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_bSnapRotation = { "bSnapRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FScriptableToolGizmoOptions), &Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_bSnapRotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_bSnapRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_bSnapRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_bRepositionable_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_bRepositionable_SetBit(void* Obj)
	{
		((FScriptableToolGizmoOptions*)Obj)->bRepositionable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_bRepositionable = { "bRepositionable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FScriptableToolGizmoOptions), &Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_bRepositionable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_bRepositionable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_bRepositionable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_bAllowNegativeScaling_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_bAllowNegativeScaling_SetBit(void* Obj)
	{
		((FScriptableToolGizmoOptions*)Obj)->bAllowNegativeScaling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_bAllowNegativeScaling = { "bAllowNegativeScaling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FScriptableToolGizmoOptions), &Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_bAllowNegativeScaling_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_bAllowNegativeScaling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_bAllowNegativeScaling_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_GizmoMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_GizmoMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_TranslationParts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_RotationParts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_ScaleParts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_CoordSystem_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_CoordSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_bSnapTranslation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_bSnapRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_bRepositionable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewProp_bAllowNegativeScaling,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ScriptableToolsFramework,
		nullptr,
		&NewStructOps,
		"ScriptableToolGizmoOptions",
		sizeof(FScriptableToolGizmoOptions),
		alignof(FScriptableToolGizmoOptions),
		Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScriptableToolGizmoOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_ScriptableToolGizmoOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScriptableToolGizmoOptions.InnerSingleton, Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ScriptableToolGizmoOptions.InnerSingleton;
	}
	DEFINE_FUNCTION(UScriptableTool_RenderAPI::execDrawRectWidthHeightXY)
	{
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Width);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Height);
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LineThickness);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DepthBias);
		P_GET_UBOOL(Z_Param_bDepthTested);
		P_GET_UBOOL(Z_Param_bCentered);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UScriptableTool_RenderAPI**)Z_Param__Result=P_THIS->DrawRectWidthHeightXY(Z_Param_Transform,Z_Param_Width,Z_Param_Height,Z_Param_Color,Z_Param_LineThickness,Z_Param_DepthBias,Z_Param_bDepthTested,Z_Param_bCentered);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableTool_RenderAPI::execDrawLine)
	{
		P_GET_STRUCT(FVector,Z_Param_Start);
		P_GET_STRUCT(FVector,Z_Param_End);
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DepthBias);
		P_GET_UBOOL(Z_Param_bDepthTested);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UScriptableTool_RenderAPI**)Z_Param__Result=P_THIS->DrawLine(Z_Param_Start,Z_Param_End,Z_Param_Color,Z_Param_Thickness,Z_Param_DepthBias,Z_Param_bDepthTested);
		P_NATIVE_END;
	}
	void UScriptableTool_RenderAPI::StaticRegisterNativesUScriptableTool_RenderAPI()
	{
		UClass* Class = UScriptableTool_RenderAPI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DrawLine", &UScriptableTool_RenderAPI::execDrawLine },
			{ "DrawRectWidthHeightXY", &UScriptableTool_RenderAPI::execDrawRectWidthHeightXY },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawLine_Statics
	{
		struct ScriptableTool_RenderAPI_eventDrawLine_Parms
		{
			FVector Start;
			FVector End;
			FLinearColor Color;
			float Thickness;
			float DepthBias;
			bool bDepthTested;
			UScriptableTool_RenderAPI* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
		static const UECodeGen_Private::FStructPropertyParams NewProp_End;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DepthBias;
		static void NewProp_bDepthTested_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDepthTested;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawLine_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableTool_RenderAPI_eventDrawLine_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawLine_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableTool_RenderAPI_eventDrawLine_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawLine_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableTool_RenderAPI_eventDrawLine_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawLine_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableTool_RenderAPI_eventDrawLine_Parms, Thickness), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawLine_Statics::NewProp_DepthBias = { "DepthBias", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableTool_RenderAPI_eventDrawLine_Parms, DepthBias), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawLine_Statics::NewProp_bDepthTested_SetBit(void* Obj)
	{
		((ScriptableTool_RenderAPI_eventDrawLine_Parms*)Obj)->bDepthTested = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawLine_Statics::NewProp_bDepthTested = { "bDepthTested", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ScriptableTool_RenderAPI_eventDrawLine_Parms), &Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawLine_Statics::NewProp_bDepthTested_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawLine_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Render Object" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawLine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableTool_RenderAPI_eventDrawLine_Parms, ReturnValue), Z_Construct_UClass_UScriptableTool_RenderAPI_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawLine_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawLine_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawLine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawLine_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawLine_Statics::NewProp_End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawLine_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawLine_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawLine_Statics::NewProp_DepthBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawLine_Statics::NewProp_bDepthTested,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawLine_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool|Render" },
		{ "CPP_Default_bDepthTested", "true" },
		{ "CPP_Default_DepthBias", "0.000000" },
		{ "CPP_Default_Thickness", "1.000000" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableTool_RenderAPI, nullptr, "DrawLine", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawLine_Statics::ScriptableTool_RenderAPI_eventDrawLine_Parms), Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawLine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawRectWidthHeightXY_Statics
	{
		struct ScriptableTool_RenderAPI_eventDrawRectWidthHeightXY_Parms
		{
			FTransform Transform;
			double Width;
			double Height;
			FLinearColor Color;
			float LineThickness;
			float DepthBias;
			bool bDepthTested;
			bool bCentered;
			UScriptableTool_RenderAPI* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Width;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Height;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LineThickness;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DepthBias;
		static void NewProp_bDepthTested_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDepthTested;
		static void NewProp_bCentered_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCentered;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawRectWidthHeightXY_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableTool_RenderAPI_eventDrawRectWidthHeightXY_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawRectWidthHeightXY_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableTool_RenderAPI_eventDrawRectWidthHeightXY_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawRectWidthHeightXY_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableTool_RenderAPI_eventDrawRectWidthHeightXY_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawRectWidthHeightXY_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableTool_RenderAPI_eventDrawRectWidthHeightXY_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawRectWidthHeightXY_Statics::NewProp_LineThickness = { "LineThickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableTool_RenderAPI_eventDrawRectWidthHeightXY_Parms, LineThickness), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawRectWidthHeightXY_Statics::NewProp_DepthBias = { "DepthBias", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableTool_RenderAPI_eventDrawRectWidthHeightXY_Parms, DepthBias), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawRectWidthHeightXY_Statics::NewProp_bDepthTested_SetBit(void* Obj)
	{
		((ScriptableTool_RenderAPI_eventDrawRectWidthHeightXY_Parms*)Obj)->bDepthTested = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawRectWidthHeightXY_Statics::NewProp_bDepthTested = { "bDepthTested", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ScriptableTool_RenderAPI_eventDrawRectWidthHeightXY_Parms), &Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawRectWidthHeightXY_Statics::NewProp_bDepthTested_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawRectWidthHeightXY_Statics::NewProp_bCentered_SetBit(void* Obj)
	{
		((ScriptableTool_RenderAPI_eventDrawRectWidthHeightXY_Parms*)Obj)->bCentered = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawRectWidthHeightXY_Statics::NewProp_bCentered = { "bCentered", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ScriptableTool_RenderAPI_eventDrawRectWidthHeightXY_Parms), &Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawRectWidthHeightXY_Statics::NewProp_bCentered_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawRectWidthHeightXY_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Render Object" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawRectWidthHeightXY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableTool_RenderAPI_eventDrawRectWidthHeightXY_Parms, ReturnValue), Z_Construct_UClass_UScriptableTool_RenderAPI_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawRectWidthHeightXY_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawRectWidthHeightXY_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawRectWidthHeightXY_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawRectWidthHeightXY_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawRectWidthHeightXY_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawRectWidthHeightXY_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawRectWidthHeightXY_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawRectWidthHeightXY_Statics::NewProp_LineThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawRectWidthHeightXY_Statics::NewProp_DepthBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawRectWidthHeightXY_Statics::NewProp_bDepthTested,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawRectWidthHeightXY_Statics::NewProp_bCentered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawRectWidthHeightXY_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawRectWidthHeightXY_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool|Render" },
		{ "CPP_Default_bCentered", "true" },
		{ "CPP_Default_bDepthTested", "true" },
		{ "CPP_Default_DepthBias", "0.000000" },
		{ "CPP_Default_LineThickness", "1.000000" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawRectWidthHeightXY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableTool_RenderAPI, nullptr, "DrawRectWidthHeightXY", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawRectWidthHeightXY_Statics::ScriptableTool_RenderAPI_eventDrawRectWidthHeightXY_Parms), Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawRectWidthHeightXY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawRectWidthHeightXY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawRectWidthHeightXY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawRectWidthHeightXY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawRectWidthHeightXY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawRectWidthHeightXY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScriptableTool_RenderAPI);
	UClass* Z_Construct_UClass_UScriptableTool_RenderAPI_NoRegister()
	{
		return UScriptableTool_RenderAPI::StaticClass();
	}
	struct Z_Construct_UClass_UScriptableTool_RenderAPI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScriptableTool_RenderAPI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ScriptableToolsFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UScriptableTool_RenderAPI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawLine, "DrawLine" }, // 495031792
		{ &Z_Construct_UFunction_UScriptableTool_RenderAPI_DrawRectWidthHeightXY, "DrawRectWidthHeightXY" }, // 1286692694
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScriptableTool_RenderAPI_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UScriptableTool_RenderAPI is helper Object that is created internally by a UScriptableInteractiveTool\n * to allow Blueprints to access basic 3D rendering functionality, in the context of a specific Tool.\n * The OnScriptRender event is called with an instance of this type.\n */" },
		{ "IncludePath", "ScriptableInteractiveTool.h" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "ToolTip", "UScriptableTool_RenderAPI is helper Object that is created internally by a UScriptableInteractiveTool\nto allow Blueprints to access basic 3D rendering functionality, in the context of a specific Tool.\nThe OnScriptRender event is called with an instance of this type." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScriptableTool_RenderAPI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScriptableTool_RenderAPI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UScriptableTool_RenderAPI_Statics::ClassParams = {
		&UScriptableTool_RenderAPI::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UScriptableTool_RenderAPI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScriptableTool_RenderAPI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScriptableTool_RenderAPI()
	{
		if (!Z_Registration_Info_UClass_UScriptableTool_RenderAPI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScriptableTool_RenderAPI.OuterSingleton, Z_Construct_UClass_UScriptableTool_RenderAPI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UScriptableTool_RenderAPI.OuterSingleton;
	}
	template<> SCRIPTABLETOOLSFRAMEWORK_API UClass* StaticClass<UScriptableTool_RenderAPI>()
	{
		return UScriptableTool_RenderAPI::StaticClass();
	}
	UScriptableTool_RenderAPI::UScriptableTool_RenderAPI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScriptableTool_RenderAPI);
	UScriptableTool_RenderAPI::~UScriptableTool_RenderAPI() {}
	DEFINE_FUNCTION(UScriptableTool_HUDAPI::execGetCanvasLocation)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_CanvasLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UScriptableTool_HUDAPI**)Z_Param__Result=P_THIS->GetCanvasLocation(Z_Param_Location,Z_Param_Out_CanvasLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableTool_HUDAPI::execDrawTextArrayAtLocation)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_TARRAY(FString,Z_Param_Strings);
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_GET_UBOOL(Z_Param_bCentered);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ShiftRowsY);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UScriptableTool_HUDAPI**)Z_Param__Result=P_THIS->DrawTextArrayAtLocation(Z_Param_Location,Z_Param_Strings,Z_Param_Color,Z_Param_bCentered,Z_Param_ShiftRowsY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableTool_HUDAPI::execDrawTextAtLocation)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_PROPERTY(FStrProperty,Z_Param_String);
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_GET_UBOOL(Z_Param_bCentered);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ShiftRowsY);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UScriptableTool_HUDAPI**)Z_Param__Result=P_THIS->DrawTextAtLocation(Z_Param_Location,Z_Param_String,Z_Param_Color,Z_Param_bCentered,Z_Param_ShiftRowsY);
		P_NATIVE_END;
	}
	void UScriptableTool_HUDAPI::StaticRegisterNativesUScriptableTool_HUDAPI()
	{
		UClass* Class = UScriptableTool_HUDAPI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DrawTextArrayAtLocation", &UScriptableTool_HUDAPI::execDrawTextArrayAtLocation },
			{ "DrawTextAtLocation", &UScriptableTool_HUDAPI::execDrawTextAtLocation },
			{ "GetCanvasLocation", &UScriptableTool_HUDAPI::execGetCanvasLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextArrayAtLocation_Statics
	{
		struct ScriptableTool_HUDAPI_eventDrawTextArrayAtLocation_Parms
		{
			FVector Location;
			TArray<FString> Strings;
			FLinearColor Color;
			bool bCentered;
			float ShiftRowsY;
			UScriptableTool_HUDAPI* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Strings_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Strings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static void NewProp_bCentered_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCentered;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShiftRowsY;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextArrayAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableTool_HUDAPI_eventDrawTextArrayAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextArrayAtLocation_Statics::NewProp_Strings_Inner = { "Strings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextArrayAtLocation_Statics::NewProp_Strings = { "Strings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableTool_HUDAPI_eventDrawTextArrayAtLocation_Parms, Strings), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextArrayAtLocation_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableTool_HUDAPI_eventDrawTextArrayAtLocation_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextArrayAtLocation_Statics::NewProp_bCentered_SetBit(void* Obj)
	{
		((ScriptableTool_HUDAPI_eventDrawTextArrayAtLocation_Parms*)Obj)->bCentered = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextArrayAtLocation_Statics::NewProp_bCentered = { "bCentered", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ScriptableTool_HUDAPI_eventDrawTextArrayAtLocation_Parms), &Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextArrayAtLocation_Statics::NewProp_bCentered_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextArrayAtLocation_Statics::NewProp_ShiftRowsY = { "ShiftRowsY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableTool_HUDAPI_eventDrawTextArrayAtLocation_Parms, ShiftRowsY), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextArrayAtLocation_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "HUD Object" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextArrayAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableTool_HUDAPI_eventDrawTextArrayAtLocation_Parms, ReturnValue), Z_Construct_UClass_UScriptableTool_HUDAPI_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextArrayAtLocation_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextArrayAtLocation_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextArrayAtLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextArrayAtLocation_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextArrayAtLocation_Statics::NewProp_Strings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextArrayAtLocation_Statics::NewProp_Strings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextArrayAtLocation_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextArrayAtLocation_Statics::NewProp_bCentered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextArrayAtLocation_Statics::NewProp_ShiftRowsY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextArrayAtLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextArrayAtLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool|DrawHUD" },
		{ "Color", "(R=1.0,G=1.0,B=1.0,A=1.0)" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextArrayAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableTool_HUDAPI, nullptr, "DrawTextArrayAtLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextArrayAtLocation_Statics::ScriptableTool_HUDAPI_eventDrawTextArrayAtLocation_Parms), Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextArrayAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextArrayAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextArrayAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextArrayAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextArrayAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextArrayAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextAtLocation_Statics
	{
		struct ScriptableTool_HUDAPI_eventDrawTextAtLocation_Parms
		{
			FVector Location;
			FString String;
			FLinearColor Color;
			bool bCentered;
			float ShiftRowsY;
			UScriptableTool_HUDAPI* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStrPropertyParams NewProp_String;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static void NewProp_bCentered_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCentered;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShiftRowsY;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableTool_HUDAPI_eventDrawTextAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextAtLocation_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableTool_HUDAPI_eventDrawTextAtLocation_Parms, String), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextAtLocation_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableTool_HUDAPI_eventDrawTextAtLocation_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextAtLocation_Statics::NewProp_bCentered_SetBit(void* Obj)
	{
		((ScriptableTool_HUDAPI_eventDrawTextAtLocation_Parms*)Obj)->bCentered = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextAtLocation_Statics::NewProp_bCentered = { "bCentered", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ScriptableTool_HUDAPI_eventDrawTextAtLocation_Parms), &Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextAtLocation_Statics::NewProp_bCentered_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextAtLocation_Statics::NewProp_ShiftRowsY = { "ShiftRowsY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableTool_HUDAPI_eventDrawTextAtLocation_Parms, ShiftRowsY), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextAtLocation_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "HUD Object" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableTool_HUDAPI_eventDrawTextAtLocation_Parms, ReturnValue), Z_Construct_UClass_UScriptableTool_HUDAPI_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextAtLocation_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextAtLocation_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextAtLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextAtLocation_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextAtLocation_Statics::NewProp_String,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextAtLocation_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextAtLocation_Statics::NewProp_bCentered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextAtLocation_Statics::NewProp_ShiftRowsY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextAtLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextAtLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool|DrawHUD" },
		{ "Color", "(R=1.0,G=1.0,B=1.0,A=1.0)" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableTool_HUDAPI, nullptr, "DrawTextAtLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextAtLocation_Statics::ScriptableTool_HUDAPI_eventDrawTextAtLocation_Parms), Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableTool_HUDAPI_GetCanvasLocation_Statics
	{
		struct ScriptableTool_HUDAPI_eventGetCanvasLocation_Parms
		{
			FVector Location;
			FVector2D CanvasLocation;
			UScriptableTool_HUDAPI* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CanvasLocation;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptableTool_HUDAPI_GetCanvasLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableTool_HUDAPI_eventGetCanvasLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptableTool_HUDAPI_GetCanvasLocation_Statics::NewProp_CanvasLocation = { "CanvasLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableTool_HUDAPI_eventGetCanvasLocation_Parms, CanvasLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableTool_HUDAPI_GetCanvasLocation_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "HUD Object" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScriptableTool_HUDAPI_GetCanvasLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableTool_HUDAPI_eventGetCanvasLocation_Parms, ReturnValue), Z_Construct_UClass_UScriptableTool_HUDAPI_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UScriptableTool_HUDAPI_GetCanvasLocation_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableTool_HUDAPI_GetCanvasLocation_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableTool_HUDAPI_GetCanvasLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableTool_HUDAPI_GetCanvasLocation_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableTool_HUDAPI_GetCanvasLocation_Statics::NewProp_CanvasLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableTool_HUDAPI_GetCanvasLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableTool_HUDAPI_GetCanvasLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool|DrawHUD" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableTool_HUDAPI_GetCanvasLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableTool_HUDAPI, nullptr, "GetCanvasLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScriptableTool_HUDAPI_GetCanvasLocation_Statics::ScriptableTool_HUDAPI_eventGetCanvasLocation_Parms), Z_Construct_UFunction_UScriptableTool_HUDAPI_GetCanvasLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableTool_HUDAPI_GetCanvasLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableTool_HUDAPI_GetCanvasLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableTool_HUDAPI_GetCanvasLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableTool_HUDAPI_GetCanvasLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableTool_HUDAPI_GetCanvasLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScriptableTool_HUDAPI);
	UClass* Z_Construct_UClass_UScriptableTool_HUDAPI_NoRegister()
	{
		return UScriptableTool_HUDAPI::StaticClass();
	}
	struct Z_Construct_UClass_UScriptableTool_HUDAPI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScriptableTool_HUDAPI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ScriptableToolsFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UScriptableTool_HUDAPI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextArrayAtLocation, "DrawTextArrayAtLocation" }, // 3372653681
		{ &Z_Construct_UFunction_UScriptableTool_HUDAPI_DrawTextAtLocation, "DrawTextAtLocation" }, // 3286260421
		{ &Z_Construct_UFunction_UScriptableTool_HUDAPI_GetCanvasLocation, "GetCanvasLocation" }, // 1173341651
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScriptableTool_HUDAPI_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UScriptableTool_HUDAPI is helper Object that is created internally by a UScriptableInteractiveTool\n * to allow Blueprints to access basic 2D rendering functionality, in the context of a specific Tool.\n * The OnScriptDrawHUD event is called with an instance of this type.\n */" },
		{ "IncludePath", "ScriptableInteractiveTool.h" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "ToolTip", "UScriptableTool_HUDAPI is helper Object that is created internally by a UScriptableInteractiveTool\nto allow Blueprints to access basic 2D rendering functionality, in the context of a specific Tool.\nThe OnScriptDrawHUD event is called with an instance of this type." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScriptableTool_HUDAPI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScriptableTool_HUDAPI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UScriptableTool_HUDAPI_Statics::ClassParams = {
		&UScriptableTool_HUDAPI::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UScriptableTool_HUDAPI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScriptableTool_HUDAPI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScriptableTool_HUDAPI()
	{
		if (!Z_Registration_Info_UClass_UScriptableTool_HUDAPI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScriptableTool_HUDAPI.OuterSingleton, Z_Construct_UClass_UScriptableTool_HUDAPI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UScriptableTool_HUDAPI.OuterSingleton;
	}
	template<> SCRIPTABLETOOLSFRAMEWORK_API UClass* StaticClass<UScriptableTool_HUDAPI>()
	{
		return UScriptableTool_HUDAPI::StaticClass();
	}
	UScriptableTool_HUDAPI::UScriptableTool_HUDAPI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScriptableTool_HUDAPI);
	UScriptableTool_HUDAPI::~UScriptableTool_HUDAPI() {}
	DEFINE_FUNCTION(UScriptableInteractiveToolPropertySet::execGetOwningTool)
	{
		P_GET_ENUM_REF(EToolsFrameworkOutcomePins,Z_Param_Out_Outcome);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UScriptableInteractiveTool**)Z_Param__Result=P_THIS->GetOwningTool((EToolsFrameworkOutcomePins&)(Z_Param_Out_Outcome));
		P_NATIVE_END;
	}
	void UScriptableInteractiveToolPropertySet::StaticRegisterNativesUScriptableInteractiveToolPropertySet()
	{
		UClass* Class = UScriptableInteractiveToolPropertySet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOwningTool", &UScriptableInteractiveToolPropertySet::execGetOwningTool },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UScriptableInteractiveToolPropertySet_GetOwningTool_Statics
	{
		struct ScriptableInteractiveToolPropertySet_eventGetOwningTool_Parms
		{
			EToolsFrameworkOutcomePins Outcome;
			UScriptableInteractiveTool* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Outcome_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Outcome;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UScriptableInteractiveToolPropertySet_GetOwningTool_Statics::NewProp_Outcome_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UScriptableInteractiveToolPropertySet_GetOwningTool_Statics::NewProp_Outcome = { "Outcome", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveToolPropertySet_eventGetOwningTool_Parms, Outcome), Z_Construct_UEnum_ScriptableToolsFramework_EToolsFrameworkOutcomePins, METADATA_PARAMS(nullptr, 0) }; // 2937799865
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScriptableInteractiveToolPropertySet_GetOwningTool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveToolPropertySet_eventGetOwningTool_Parms, ReturnValue), Z_Construct_UClass_UScriptableInteractiveTool_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableInteractiveToolPropertySet_GetOwningTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveToolPropertySet_GetOwningTool_Statics::NewProp_Outcome_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveToolPropertySet_GetOwningTool_Statics::NewProp_Outcome,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveToolPropertySet_GetOwningTool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveToolPropertySet_GetOwningTool_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool" },
		{ "Comment", "/** Access the Tool that owns this PropertySet */" },
		{ "ExpandEnumAsExecs", "Outcome" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "ToolTip", "Access the Tool that owns this PropertySet" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableInteractiveToolPropertySet_GetOwningTool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableInteractiveToolPropertySet, nullptr, "GetOwningTool", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScriptableInteractiveToolPropertySet_GetOwningTool_Statics::ScriptableInteractiveToolPropertySet_eventGetOwningTool_Parms), Z_Construct_UFunction_UScriptableInteractiveToolPropertySet_GetOwningTool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveToolPropertySet_GetOwningTool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveToolPropertySet_GetOwningTool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveToolPropertySet_GetOwningTool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableInteractiveToolPropertySet_GetOwningTool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableInteractiveToolPropertySet_GetOwningTool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScriptableInteractiveToolPropertySet);
	UClass* Z_Construct_UClass_UScriptableInteractiveToolPropertySet_NoRegister()
	{
		return UScriptableInteractiveToolPropertySet::StaticClass();
	}
	struct Z_Construct_UClass_UScriptableInteractiveToolPropertySet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScriptableInteractiveToolPropertySet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_ScriptableToolsFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UScriptableInteractiveToolPropertySet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UScriptableInteractiveToolPropertySet_GetOwningTool, "GetOwningTool" }, // 1318649344
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScriptableInteractiveToolPropertySet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * UScriptableInteractiveToolPropertySet is a Blueprintable extension of UInteractiveToolPropertySet.\n * This is a helper type meant to be used with UScriptableInteractiveTool. The intention is that\n * the \"Settings\" of a particular Tool are stored in UScriptableInteractiveToolPropertySet (\"Property Set\") instances.\n * The function UScriptableInteractiveTool::AddPropertySetOfType can be used to create and attach\n * a new Property Set. Then these settings can be automatically exposed by, for example, the Editor Mode UI, \n * similar to (eg) Modeling Mode in the UE Editor.\n * \n * In addition, UScriptableInteractiveTool has a set of functions like WatchFloatProperty, WatchBoolProperty, etc,\n * that can be used to detect and respond to changes in the Property Set. This works with both changes caused\n * by Editor UI (eg a Details Panel) as well as done directly in Blueprints or even C++ code. \n  * \n * Note, however, that this Property Set mechanism completely optional, a Tool builder is free to use any\n * method whatsoever to store/modify Tool settings.\n */" },
		{ "IncludePath", "ScriptableInteractiveTool.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "ToolTip", "UScriptableInteractiveToolPropertySet is a Blueprintable extension of UInteractiveToolPropertySet.\nThis is a helper type meant to be used with UScriptableInteractiveTool. The intention is that\nthe \"Settings\" of a particular Tool are stored in UScriptableInteractiveToolPropertySet (\"Property Set\") instances.\nThe function UScriptableInteractiveTool::AddPropertySetOfType can be used to create and attach\na new Property Set. Then these settings can be automatically exposed by, for example, the Editor Mode UI,\nsimilar to (eg) Modeling Mode in the UE Editor.\n\nIn addition, UScriptableInteractiveTool has a set of functions like WatchFloatProperty, WatchBoolProperty, etc,\nthat can be used to detect and respond to changes in the Property Set. This works with both changes caused\nby Editor UI (eg a Details Panel) as well as done directly in Blueprints or even C++ code.\n\nNote, however, that this Property Set mechanism completely optional, a Tool builder is free to use any\nmethod whatsoever to store/modify Tool settings." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScriptableInteractiveToolPropertySet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScriptableInteractiveToolPropertySet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UScriptableInteractiveToolPropertySet_Statics::ClassParams = {
		&UScriptableInteractiveToolPropertySet::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UScriptableInteractiveToolPropertySet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScriptableInteractiveToolPropertySet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScriptableInteractiveToolPropertySet()
	{
		if (!Z_Registration_Info_UClass_UScriptableInteractiveToolPropertySet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScriptableInteractiveToolPropertySet.OuterSingleton, Z_Construct_UClass_UScriptableInteractiveToolPropertySet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UScriptableInteractiveToolPropertySet.OuterSingleton;
	}
	template<> SCRIPTABLETOOLSFRAMEWORK_API UClass* StaticClass<UScriptableInteractiveToolPropertySet>()
	{
		return UScriptableInteractiveToolPropertySet::StaticClass();
	}
	UScriptableInteractiveToolPropertySet::UScriptableInteractiveToolPropertySet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScriptableInteractiveToolPropertySet);
	UScriptableInteractiveToolPropertySet::~UScriptableInteractiveToolPropertySet() {}
	struct Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolPropertyModifiedDelegate__DelegateSignature_Statics
	{
		struct _Script_ScriptableToolsFramework_eventToolPropertyModifiedDelegate_Parms
		{
			UScriptableInteractiveToolPropertySet* PropertySet;
			FString PropertyName;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PropertySet;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolPropertyModifiedDelegate__DelegateSignature_Statics::NewProp_PropertySet = { "PropertySet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ScriptableToolsFramework_eventToolPropertyModifiedDelegate_Parms, PropertySet), Z_Construct_UClass_UScriptableInteractiveToolPropertySet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolPropertyModifiedDelegate__DelegateSignature_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ScriptableToolsFramework_eventToolPropertyModifiedDelegate_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolPropertyModifiedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolPropertyModifiedDelegate__DelegateSignature_Statics::NewProp_PropertySet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolPropertyModifiedDelegate__DelegateSignature_Statics::NewProp_PropertyName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolPropertyModifiedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// these are delegates for the various property-watchers below\n" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "ToolTip", "these are delegates for the various property-watchers below" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolPropertyModifiedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ScriptableToolsFramework, nullptr, "ToolPropertyModifiedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolPropertyModifiedDelegate__DelegateSignature_Statics::_Script_ScriptableToolsFramework_eventToolPropertyModifiedDelegate_Parms), Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolPropertyModifiedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolPropertyModifiedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolPropertyModifiedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolPropertyModifiedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolPropertyModifiedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolPropertyModifiedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FToolPropertyModifiedDelegate_DelegateWrapper(const FScriptDelegate& ToolPropertyModifiedDelegate, UScriptableInteractiveToolPropertySet* PropertySet, const FString& PropertyName)
{
	struct _Script_ScriptableToolsFramework_eventToolPropertyModifiedDelegate_Parms
	{
		UScriptableInteractiveToolPropertySet* PropertySet;
		FString PropertyName;
	};
	_Script_ScriptableToolsFramework_eventToolPropertyModifiedDelegate_Parms Parms;
	Parms.PropertySet=PropertySet;
	Parms.PropertyName=PropertyName;
	ToolPropertyModifiedDelegate.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolFloatPropertyModifiedDelegate__DelegateSignature_Statics
	{
		struct _Script_ScriptableToolsFramework_eventToolFloatPropertyModifiedDelegate_Parms
		{
			UScriptableInteractiveToolPropertySet* PropertySet;
			FString PropertyName;
			double NewValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PropertySet;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolFloatPropertyModifiedDelegate__DelegateSignature_Statics::NewProp_PropertySet = { "PropertySet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ScriptableToolsFramework_eventToolFloatPropertyModifiedDelegate_Parms, PropertySet), Z_Construct_UClass_UScriptableInteractiveToolPropertySet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolFloatPropertyModifiedDelegate__DelegateSignature_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ScriptableToolsFramework_eventToolFloatPropertyModifiedDelegate_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolFloatPropertyModifiedDelegate__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ScriptableToolsFramework_eventToolFloatPropertyModifiedDelegate_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolFloatPropertyModifiedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolFloatPropertyModifiedDelegate__DelegateSignature_Statics::NewProp_PropertySet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolFloatPropertyModifiedDelegate__DelegateSignature_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolFloatPropertyModifiedDelegate__DelegateSignature_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolFloatPropertyModifiedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolFloatPropertyModifiedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ScriptableToolsFramework, nullptr, "ToolFloatPropertyModifiedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolFloatPropertyModifiedDelegate__DelegateSignature_Statics::_Script_ScriptableToolsFramework_eventToolFloatPropertyModifiedDelegate_Parms), Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolFloatPropertyModifiedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolFloatPropertyModifiedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolFloatPropertyModifiedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolFloatPropertyModifiedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolFloatPropertyModifiedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolFloatPropertyModifiedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FToolFloatPropertyModifiedDelegate_DelegateWrapper(const FScriptDelegate& ToolFloatPropertyModifiedDelegate, UScriptableInteractiveToolPropertySet* PropertySet, const FString& PropertyName, double NewValue)
{
	struct _Script_ScriptableToolsFramework_eventToolFloatPropertyModifiedDelegate_Parms
	{
		UScriptableInteractiveToolPropertySet* PropertySet;
		FString PropertyName;
		double NewValue;
	};
	_Script_ScriptableToolsFramework_eventToolFloatPropertyModifiedDelegate_Parms Parms;
	Parms.PropertySet=PropertySet;
	Parms.PropertyName=PropertyName;
	Parms.NewValue=NewValue;
	ToolFloatPropertyModifiedDelegate.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolIntPropertyModifiedDelegate__DelegateSignature_Statics
	{
		struct _Script_ScriptableToolsFramework_eventToolIntPropertyModifiedDelegate_Parms
		{
			UScriptableInteractiveToolPropertySet* PropertySet;
			FString PropertyName;
			int32 NewValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PropertySet;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolIntPropertyModifiedDelegate__DelegateSignature_Statics::NewProp_PropertySet = { "PropertySet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ScriptableToolsFramework_eventToolIntPropertyModifiedDelegate_Parms, PropertySet), Z_Construct_UClass_UScriptableInteractiveToolPropertySet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolIntPropertyModifiedDelegate__DelegateSignature_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ScriptableToolsFramework_eventToolIntPropertyModifiedDelegate_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolIntPropertyModifiedDelegate__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ScriptableToolsFramework_eventToolIntPropertyModifiedDelegate_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolIntPropertyModifiedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolIntPropertyModifiedDelegate__DelegateSignature_Statics::NewProp_PropertySet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolIntPropertyModifiedDelegate__DelegateSignature_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolIntPropertyModifiedDelegate__DelegateSignature_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolIntPropertyModifiedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolIntPropertyModifiedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ScriptableToolsFramework, nullptr, "ToolIntPropertyModifiedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolIntPropertyModifiedDelegate__DelegateSignature_Statics::_Script_ScriptableToolsFramework_eventToolIntPropertyModifiedDelegate_Parms), Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolIntPropertyModifiedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolIntPropertyModifiedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolIntPropertyModifiedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolIntPropertyModifiedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolIntPropertyModifiedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolIntPropertyModifiedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FToolIntPropertyModifiedDelegate_DelegateWrapper(const FScriptDelegate& ToolIntPropertyModifiedDelegate, UScriptableInteractiveToolPropertySet* PropertySet, const FString& PropertyName, int32 NewValue)
{
	struct _Script_ScriptableToolsFramework_eventToolIntPropertyModifiedDelegate_Parms
	{
		UScriptableInteractiveToolPropertySet* PropertySet;
		FString PropertyName;
		int32 NewValue;
	};
	_Script_ScriptableToolsFramework_eventToolIntPropertyModifiedDelegate_Parms Parms;
	Parms.PropertySet=PropertySet;
	Parms.PropertyName=PropertyName;
	Parms.NewValue=NewValue;
	ToolIntPropertyModifiedDelegate.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolBoolPropertyModifiedDelegate__DelegateSignature_Statics
	{
		struct _Script_ScriptableToolsFramework_eventToolBoolPropertyModifiedDelegate_Parms
		{
			UScriptableInteractiveToolPropertySet* PropertySet;
			FString PropertyName;
			bool bNewValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PropertySet;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolBoolPropertyModifiedDelegate__DelegateSignature_Statics::NewProp_PropertySet = { "PropertySet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ScriptableToolsFramework_eventToolBoolPropertyModifiedDelegate_Parms, PropertySet), Z_Construct_UClass_UScriptableInteractiveToolPropertySet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolBoolPropertyModifiedDelegate__DelegateSignature_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ScriptableToolsFramework_eventToolBoolPropertyModifiedDelegate_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolBoolPropertyModifiedDelegate__DelegateSignature_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((_Script_ScriptableToolsFramework_eventToolBoolPropertyModifiedDelegate_Parms*)Obj)->bNewValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolBoolPropertyModifiedDelegate__DelegateSignature_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_ScriptableToolsFramework_eventToolBoolPropertyModifiedDelegate_Parms), &Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolBoolPropertyModifiedDelegate__DelegateSignature_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolBoolPropertyModifiedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolBoolPropertyModifiedDelegate__DelegateSignature_Statics::NewProp_PropertySet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolBoolPropertyModifiedDelegate__DelegateSignature_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolBoolPropertyModifiedDelegate__DelegateSignature_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolBoolPropertyModifiedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolBoolPropertyModifiedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ScriptableToolsFramework, nullptr, "ToolBoolPropertyModifiedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolBoolPropertyModifiedDelegate__DelegateSignature_Statics::_Script_ScriptableToolsFramework_eventToolBoolPropertyModifiedDelegate_Parms), Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolBoolPropertyModifiedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolBoolPropertyModifiedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolBoolPropertyModifiedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolBoolPropertyModifiedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolBoolPropertyModifiedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolBoolPropertyModifiedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FToolBoolPropertyModifiedDelegate_DelegateWrapper(const FScriptDelegate& ToolBoolPropertyModifiedDelegate, UScriptableInteractiveToolPropertySet* PropertySet, const FString& PropertyName, bool bNewValue)
{
	struct _Script_ScriptableToolsFramework_eventToolBoolPropertyModifiedDelegate_Parms
	{
		UScriptableInteractiveToolPropertySet* PropertySet;
		FString PropertyName;
		bool bNewValue;
	};
	_Script_ScriptableToolsFramework_eventToolBoolPropertyModifiedDelegate_Parms Parms;
	Parms.PropertySet=PropertySet;
	Parms.PropertyName=PropertyName;
	Parms.bNewValue=bNewValue ? true : false;
	ToolBoolPropertyModifiedDelegate.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolEnumPropertyModifiedDelegate__DelegateSignature_Statics
	{
		struct _Script_ScriptableToolsFramework_eventToolEnumPropertyModifiedDelegate_Parms
		{
			UScriptableInteractiveToolPropertySet* PropertySet;
			FString PropertyName;
			uint8 NewValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PropertySet;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolEnumPropertyModifiedDelegate__DelegateSignature_Statics::NewProp_PropertySet = { "PropertySet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ScriptableToolsFramework_eventToolEnumPropertyModifiedDelegate_Parms, PropertySet), Z_Construct_UClass_UScriptableInteractiveToolPropertySet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolEnumPropertyModifiedDelegate__DelegateSignature_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ScriptableToolsFramework_eventToolEnumPropertyModifiedDelegate_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolEnumPropertyModifiedDelegate__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ScriptableToolsFramework_eventToolEnumPropertyModifiedDelegate_Parms, NewValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolEnumPropertyModifiedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolEnumPropertyModifiedDelegate__DelegateSignature_Statics::NewProp_PropertySet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolEnumPropertyModifiedDelegate__DelegateSignature_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolEnumPropertyModifiedDelegate__DelegateSignature_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolEnumPropertyModifiedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolEnumPropertyModifiedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ScriptableToolsFramework, nullptr, "ToolEnumPropertyModifiedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolEnumPropertyModifiedDelegate__DelegateSignature_Statics::_Script_ScriptableToolsFramework_eventToolEnumPropertyModifiedDelegate_Parms), Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolEnumPropertyModifiedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolEnumPropertyModifiedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolEnumPropertyModifiedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolEnumPropertyModifiedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolEnumPropertyModifiedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolEnumPropertyModifiedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FToolEnumPropertyModifiedDelegate_DelegateWrapper(const FScriptDelegate& ToolEnumPropertyModifiedDelegate, UScriptableInteractiveToolPropertySet* PropertySet, const FString& PropertyName, uint8 NewValue)
{
	struct _Script_ScriptableToolsFramework_eventToolEnumPropertyModifiedDelegate_Parms
	{
		UScriptableInteractiveToolPropertySet* PropertySet;
		FString PropertyName;
		uint8 NewValue;
	};
	_Script_ScriptableToolsFramework_eventToolEnumPropertyModifiedDelegate_Parms Parms;
	Parms.PropertySet=PropertySet;
	Parms.PropertyName=PropertyName;
	Parms.NewValue=NewValue;
	ToolEnumPropertyModifiedDelegate.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolStringPropertyModifiedDelegate__DelegateSignature_Statics
	{
		struct _Script_ScriptableToolsFramework_eventToolStringPropertyModifiedDelegate_Parms
		{
			UScriptableInteractiveToolPropertySet* PropertySet;
			FString PropertyName;
			FString NewValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PropertySet;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolStringPropertyModifiedDelegate__DelegateSignature_Statics::NewProp_PropertySet = { "PropertySet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ScriptableToolsFramework_eventToolStringPropertyModifiedDelegate_Parms, PropertySet), Z_Construct_UClass_UScriptableInteractiveToolPropertySet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolStringPropertyModifiedDelegate__DelegateSignature_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ScriptableToolsFramework_eventToolStringPropertyModifiedDelegate_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolStringPropertyModifiedDelegate__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ScriptableToolsFramework_eventToolStringPropertyModifiedDelegate_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolStringPropertyModifiedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolStringPropertyModifiedDelegate__DelegateSignature_Statics::NewProp_PropertySet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolStringPropertyModifiedDelegate__DelegateSignature_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolStringPropertyModifiedDelegate__DelegateSignature_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolStringPropertyModifiedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolStringPropertyModifiedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ScriptableToolsFramework, nullptr, "ToolStringPropertyModifiedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolStringPropertyModifiedDelegate__DelegateSignature_Statics::_Script_ScriptableToolsFramework_eventToolStringPropertyModifiedDelegate_Parms), Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolStringPropertyModifiedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolStringPropertyModifiedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolStringPropertyModifiedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolStringPropertyModifiedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolStringPropertyModifiedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolStringPropertyModifiedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FToolStringPropertyModifiedDelegate_DelegateWrapper(const FScriptDelegate& ToolStringPropertyModifiedDelegate, UScriptableInteractiveToolPropertySet* PropertySet, const FString& PropertyName, const FString& NewValue)
{
	struct _Script_ScriptableToolsFramework_eventToolStringPropertyModifiedDelegate_Parms
	{
		UScriptableInteractiveToolPropertySet* PropertySet;
		FString PropertyName;
		FString NewValue;
	};
	_Script_ScriptableToolsFramework_eventToolStringPropertyModifiedDelegate_Parms Parms;
	Parms.PropertySet=PropertySet;
	Parms.PropertyName=PropertyName;
	Parms.NewValue=NewValue;
	ToolStringPropertyModifiedDelegate.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolFNamePropertyModifiedDelegate__DelegateSignature_Statics
	{
		struct _Script_ScriptableToolsFramework_eventToolFNamePropertyModifiedDelegate_Parms
		{
			UScriptableInteractiveToolPropertySet* PropertySet;
			FString PropertyName;
			FName NewValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PropertySet;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolFNamePropertyModifiedDelegate__DelegateSignature_Statics::NewProp_PropertySet = { "PropertySet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ScriptableToolsFramework_eventToolFNamePropertyModifiedDelegate_Parms, PropertySet), Z_Construct_UClass_UScriptableInteractiveToolPropertySet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolFNamePropertyModifiedDelegate__DelegateSignature_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ScriptableToolsFramework_eventToolFNamePropertyModifiedDelegate_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolFNamePropertyModifiedDelegate__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ScriptableToolsFramework_eventToolFNamePropertyModifiedDelegate_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolFNamePropertyModifiedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolFNamePropertyModifiedDelegate__DelegateSignature_Statics::NewProp_PropertySet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolFNamePropertyModifiedDelegate__DelegateSignature_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolFNamePropertyModifiedDelegate__DelegateSignature_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolFNamePropertyModifiedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolFNamePropertyModifiedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ScriptableToolsFramework, nullptr, "ToolFNamePropertyModifiedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolFNamePropertyModifiedDelegate__DelegateSignature_Statics::_Script_ScriptableToolsFramework_eventToolFNamePropertyModifiedDelegate_Parms), Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolFNamePropertyModifiedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolFNamePropertyModifiedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolFNamePropertyModifiedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolFNamePropertyModifiedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolFNamePropertyModifiedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolFNamePropertyModifiedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FToolFNamePropertyModifiedDelegate_DelegateWrapper(const FScriptDelegate& ToolFNamePropertyModifiedDelegate, UScriptableInteractiveToolPropertySet* PropertySet, const FString& PropertyName, FName NewValue)
{
	struct _Script_ScriptableToolsFramework_eventToolFNamePropertyModifiedDelegate_Parms
	{
		UScriptableInteractiveToolPropertySet* PropertySet;
		FString PropertyName;
		FName NewValue;
	};
	_Script_ScriptableToolsFramework_eventToolFNamePropertyModifiedDelegate_Parms Parms;
	Parms.PropertySet=PropertySet;
	Parms.PropertyName=PropertyName;
	Parms.NewValue=NewValue;
	ToolFNamePropertyModifiedDelegate.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolObjectPropertyModifiedDelegate__DelegateSignature_Statics
	{
		struct _Script_ScriptableToolsFramework_eventToolObjectPropertyModifiedDelegate_Parms
		{
			UScriptableInteractiveToolPropertySet* PropertySet;
			FString PropertyName;
			UObject* NewValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PropertySet;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolObjectPropertyModifiedDelegate__DelegateSignature_Statics::NewProp_PropertySet = { "PropertySet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ScriptableToolsFramework_eventToolObjectPropertyModifiedDelegate_Parms, PropertySet), Z_Construct_UClass_UScriptableInteractiveToolPropertySet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolObjectPropertyModifiedDelegate__DelegateSignature_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ScriptableToolsFramework_eventToolObjectPropertyModifiedDelegate_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolObjectPropertyModifiedDelegate__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ScriptableToolsFramework_eventToolObjectPropertyModifiedDelegate_Parms, NewValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolObjectPropertyModifiedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolObjectPropertyModifiedDelegate__DelegateSignature_Statics::NewProp_PropertySet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolObjectPropertyModifiedDelegate__DelegateSignature_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolObjectPropertyModifiedDelegate__DelegateSignature_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolObjectPropertyModifiedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolObjectPropertyModifiedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ScriptableToolsFramework, nullptr, "ToolObjectPropertyModifiedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolObjectPropertyModifiedDelegate__DelegateSignature_Statics::_Script_ScriptableToolsFramework_eventToolObjectPropertyModifiedDelegate_Parms), Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolObjectPropertyModifiedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolObjectPropertyModifiedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolObjectPropertyModifiedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolObjectPropertyModifiedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolObjectPropertyModifiedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolObjectPropertyModifiedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FToolObjectPropertyModifiedDelegate_DelegateWrapper(const FScriptDelegate& ToolObjectPropertyModifiedDelegate, UScriptableInteractiveToolPropertySet* PropertySet, const FString& PropertyName, UObject* NewValue)
{
	struct _Script_ScriptableToolsFramework_eventToolObjectPropertyModifiedDelegate_Parms
	{
		UScriptableInteractiveToolPropertySet* PropertySet;
		FString PropertyName;
		UObject* NewValue;
	};
	_Script_ScriptableToolsFramework_eventToolObjectPropertyModifiedDelegate_Parms Parms;
	Parms.PropertySet=PropertySet;
	Parms.PropertyName=PropertyName;
	Parms.NewValue=NewValue;
	ToolObjectPropertyModifiedDelegate.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UScriptableInteractiveTool::execClearUserMessages)
	{
		P_GET_UBOOL(Z_Param_bHelpMessage);
		P_GET_UBOOL(Z_Param_bWarningMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearUserMessages(Z_Param_bHelpMessage,Z_Param_bWarningMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableInteractiveTool::execDisplayUserWarningMessage)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisplayUserWarningMessage(Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableInteractiveTool::execDisplayUserHelpMessage)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisplayUserHelpMessage(Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableInteractiveTool::execAddLogMessage)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_Message);
		P_GET_UBOOL(Z_Param_bHighlighted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddLogMessage(Z_Param_Message,Z_Param_bHighlighted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableInteractiveTool::execGetGizmoTransform)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetGizmoTransform(Z_Param_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableInteractiveTool::execSetGizmoTransform)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
		P_GET_STRUCT(FTransform,Z_Param_NewTransform);
		P_GET_UBOOL(Z_Param_bUndoable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGizmoTransform(Z_Param_Identifier,Z_Param_NewTransform,Z_Param_bUndoable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableInteractiveTool::execSetGizmoVisible)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
		P_GET_UBOOL(Z_Param_bVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGizmoVisible(Z_Param_Identifier,Z_Param_bVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableInteractiveTool::execDestroyTRSGizmo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
		P_GET_ENUM_REF(EToolsFrameworkOutcomePins,Z_Param_Out_Outcome);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyTRSGizmo(Z_Param_Identifier,(EToolsFrameworkOutcomePins&)(Z_Param_Out_Outcome));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableInteractiveTool::execCreateTRSGizmo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
		P_GET_STRUCT(FTransform,Z_Param_InitialTransform);
		P_GET_STRUCT(FScriptableToolGizmoOptions,Z_Param_GizmoOptions);
		P_GET_ENUM_REF(EToolsFrameworkOutcomePins,Z_Param_Out_Outcome);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateTRSGizmo(Z_Param_Identifier,Z_Param_InitialTransform,Z_Param_GizmoOptions,(EToolsFrameworkOutcomePins&)(Z_Param_Out_Outcome));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableInteractiveTool::execWatchProperty)
	{
		P_GET_OBJECT(UScriptableInteractiveToolPropertySet,Z_Param_PropertySet);
		P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnModified);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UScriptableInteractiveToolPropertySet**)Z_Param__Result=P_THIS->WatchProperty(Z_Param_PropertySet,Z_Param_PropertyName,FToolPropertyModifiedDelegate(Z_Param_Out_OnModified));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableInteractiveTool::execWatchObjectProperty)
	{
		P_GET_OBJECT(UScriptableInteractiveToolPropertySet,Z_Param_PropertySet);
		P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnModified);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UScriptableInteractiveToolPropertySet**)Z_Param__Result=P_THIS->WatchObjectProperty(Z_Param_PropertySet,Z_Param_PropertyName,FToolObjectPropertyModifiedDelegate(Z_Param_Out_OnModified));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableInteractiveTool::execWatchNameProperty)
	{
		P_GET_OBJECT(UScriptableInteractiveToolPropertySet,Z_Param_PropertySet);
		P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnModified);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UScriptableInteractiveToolPropertySet**)Z_Param__Result=P_THIS->WatchNameProperty(Z_Param_PropertySet,Z_Param_PropertyName,FToolFNamePropertyModifiedDelegate(Z_Param_Out_OnModified));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableInteractiveTool::execWatchStringProperty)
	{
		P_GET_OBJECT(UScriptableInteractiveToolPropertySet,Z_Param_PropertySet);
		P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnModified);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UScriptableInteractiveToolPropertySet**)Z_Param__Result=P_THIS->WatchStringProperty(Z_Param_PropertySet,Z_Param_PropertyName,FToolStringPropertyModifiedDelegate(Z_Param_Out_OnModified));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableInteractiveTool::execWatchEnumProperty)
	{
		P_GET_OBJECT(UScriptableInteractiveToolPropertySet,Z_Param_PropertySet);
		P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnModified);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UScriptableInteractiveToolPropertySet**)Z_Param__Result=P_THIS->WatchEnumProperty(Z_Param_PropertySet,Z_Param_PropertyName,FToolEnumPropertyModifiedDelegate(Z_Param_Out_OnModified));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableInteractiveTool::execWatchBoolProperty)
	{
		P_GET_OBJECT(UScriptableInteractiveToolPropertySet,Z_Param_PropertySet);
		P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnModified);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UScriptableInteractiveToolPropertySet**)Z_Param__Result=P_THIS->WatchBoolProperty(Z_Param_PropertySet,Z_Param_PropertyName,FToolBoolPropertyModifiedDelegate(Z_Param_Out_OnModified));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableInteractiveTool::execWatchIntProperty)
	{
		P_GET_OBJECT(UScriptableInteractiveToolPropertySet,Z_Param_PropertySet);
		P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnModified);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UScriptableInteractiveToolPropertySet**)Z_Param__Result=P_THIS->WatchIntProperty(Z_Param_PropertySet,Z_Param_PropertyName,FToolIntPropertyModifiedDelegate(Z_Param_Out_OnModified));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableInteractiveTool::execWatchFloatProperty)
	{
		P_GET_OBJECT(UScriptableInteractiveToolPropertySet,Z_Param_PropertySet);
		P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnModified);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UScriptableInteractiveToolPropertySet**)Z_Param__Result=P_THIS->WatchFloatProperty(Z_Param_PropertySet,Z_Param_PropertyName,FToolFloatPropertyModifiedDelegate(Z_Param_Out_OnModified));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableInteractiveTool::execSavePropertySetSettings)
	{
		P_GET_OBJECT(UScriptableInteractiveToolPropertySet,Z_Param_PropertySet);
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UScriptableInteractiveToolPropertySet**)Z_Param__Result=P_THIS->SavePropertySetSettings(Z_Param_PropertySet,Z_Param_SaveKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableInteractiveTool::execRestorePropertySetSettings)
	{
		P_GET_OBJECT(UScriptableInteractiveToolPropertySet,Z_Param_PropertySet);
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UScriptableInteractiveToolPropertySet**)Z_Param__Result=P_THIS->RestorePropertySetSettings(Z_Param_PropertySet,Z_Param_SaveKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableInteractiveTool::execForcePropertySetUpdateByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForcePropertySetUpdateByName(Z_Param_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableInteractiveTool::execSetPropertySetVisibleByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
		P_GET_UBOOL(Z_Param_bVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertySetVisibleByName(Z_Param_Identifier,Z_Param_bVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableInteractiveTool::execRemovePropertySetByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
		P_GET_ENUM_REF(EToolsFrameworkOutcomePins,Z_Param_Out_Outcome);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemovePropertySetByName(Z_Param_Identifier,(EToolsFrameworkOutcomePins&)(Z_Param_Out_Outcome));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableInteractiveTool::execAddPropertySetOfType)
	{
		P_GET_OBJECT(UClass,Z_Param_PropertySetType);
		P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
		P_GET_ENUM_REF(EToolsFrameworkOutcomePins,Z_Param_Out_Outcome);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UScriptableInteractiveToolPropertySet**)Z_Param__Result=P_THIS->AddPropertySetOfType(Z_Param_PropertySetType,Z_Param_Identifier,(EToolsFrameworkOutcomePins&)(Z_Param_Out_Outcome));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableInteractiveTool::execGetToolWorld)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWorld**)Z_Param__Result=P_THIS->GetToolWorld();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableInteractiveTool::execRequestToolShutdown)
	{
		P_GET_UBOOL(Z_Param_bAccept);
		P_GET_UBOOL(Z_Param_bShowUserPopupMessage);
		P_GET_PROPERTY(FTextProperty,Z_Param_UserMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestToolShutdown(Z_Param_bAccept,Z_Param_bShowUserPopupMessage,Z_Param_UserMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableInteractiveTool::execOnScriptCanAccept)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnScriptCanAccept_Implementation();
		P_NATIVE_END;
	}
	struct ScriptableInteractiveTool_eventOnGizmoTransformChanged_Parms
	{
		FString GizmoIdentifier;
		FTransform NewTransform;
	};
	struct ScriptableInteractiveTool_eventOnScriptCanAccept_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		ScriptableInteractiveTool_eventOnScriptCanAccept_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct ScriptableInteractiveTool_eventOnScriptDrawHUD_Parms
	{
		UScriptableTool_HUDAPI* DrawHUDAPI;
	};
	struct ScriptableInteractiveTool_eventOnScriptRender_Parms
	{
		UScriptableTool_RenderAPI* RenderAPI;
	};
	struct ScriptableInteractiveTool_eventOnScriptShutdown_Parms
	{
		EToolShutdownType ShutdownType;
	};
	struct ScriptableInteractiveTool_eventOnScriptTick_Parms
	{
		float DeltaTime;
	};
	static FName NAME_UScriptableInteractiveTool_OnGizmoTransformChanged = FName(TEXT("OnGizmoTransformChanged"));
	void UScriptableInteractiveTool::OnGizmoTransformChanged(const FString& GizmoIdentifier, FTransform NewTransform)
	{
		ScriptableInteractiveTool_eventOnGizmoTransformChanged_Parms Parms;
		Parms.GizmoIdentifier=GizmoIdentifier;
		Parms.NewTransform=NewTransform;
		ProcessEvent(FindFunctionChecked(NAME_UScriptableInteractiveTool_OnGizmoTransformChanged),&Parms);
	}
	static FName NAME_UScriptableInteractiveTool_OnScriptCanAccept = FName(TEXT("OnScriptCanAccept"));
	bool UScriptableInteractiveTool::OnScriptCanAccept() const
	{
		ScriptableInteractiveTool_eventOnScriptCanAccept_Parms Parms;
		const_cast<UScriptableInteractiveTool*>(this)->ProcessEvent(FindFunctionChecked(NAME_UScriptableInteractiveTool_OnScriptCanAccept),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UScriptableInteractiveTool_OnScriptDrawHUD = FName(TEXT("OnScriptDrawHUD"));
	void UScriptableInteractiveTool::OnScriptDrawHUD(UScriptableTool_HUDAPI* DrawHUDAPI)
	{
		ScriptableInteractiveTool_eventOnScriptDrawHUD_Parms Parms;
		Parms.DrawHUDAPI=DrawHUDAPI;
		ProcessEvent(FindFunctionChecked(NAME_UScriptableInteractiveTool_OnScriptDrawHUD),&Parms);
	}
	static FName NAME_UScriptableInteractiveTool_OnScriptRender = FName(TEXT("OnScriptRender"));
	void UScriptableInteractiveTool::OnScriptRender(UScriptableTool_RenderAPI* RenderAPI)
	{
		ScriptableInteractiveTool_eventOnScriptRender_Parms Parms;
		Parms.RenderAPI=RenderAPI;
		ProcessEvent(FindFunctionChecked(NAME_UScriptableInteractiveTool_OnScriptRender),&Parms);
	}
	static FName NAME_UScriptableInteractiveTool_OnScriptSetup = FName(TEXT("OnScriptSetup"));
	void UScriptableInteractiveTool::OnScriptSetup()
	{
		ProcessEvent(FindFunctionChecked(NAME_UScriptableInteractiveTool_OnScriptSetup),NULL);
	}
	static FName NAME_UScriptableInteractiveTool_OnScriptShutdown = FName(TEXT("OnScriptShutdown"));
	void UScriptableInteractiveTool::OnScriptShutdown(EToolShutdownType ShutdownType)
	{
		ScriptableInteractiveTool_eventOnScriptShutdown_Parms Parms;
		Parms.ShutdownType=ShutdownType;
		ProcessEvent(FindFunctionChecked(NAME_UScriptableInteractiveTool_OnScriptShutdown),&Parms);
	}
	static FName NAME_UScriptableInteractiveTool_OnScriptTick = FName(TEXT("OnScriptTick"));
	void UScriptableInteractiveTool::OnScriptTick(float DeltaTime)
	{
		ScriptableInteractiveTool_eventOnScriptTick_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UScriptableInteractiveTool_OnScriptTick),&Parms);
	}
	void UScriptableInteractiveTool::StaticRegisterNativesUScriptableInteractiveTool()
	{
		UClass* Class = UScriptableInteractiveTool::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddLogMessage", &UScriptableInteractiveTool::execAddLogMessage },
			{ "AddPropertySetOfType", &UScriptableInteractiveTool::execAddPropertySetOfType },
			{ "ClearUserMessages", &UScriptableInteractiveTool::execClearUserMessages },
			{ "CreateTRSGizmo", &UScriptableInteractiveTool::execCreateTRSGizmo },
			{ "DestroyTRSGizmo", &UScriptableInteractiveTool::execDestroyTRSGizmo },
			{ "DisplayUserHelpMessage", &UScriptableInteractiveTool::execDisplayUserHelpMessage },
			{ "DisplayUserWarningMessage", &UScriptableInteractiveTool::execDisplayUserWarningMessage },
			{ "ForcePropertySetUpdateByName", &UScriptableInteractiveTool::execForcePropertySetUpdateByName },
			{ "GetGizmoTransform", &UScriptableInteractiveTool::execGetGizmoTransform },
			{ "GetToolWorld", &UScriptableInteractiveTool::execGetToolWorld },
			{ "OnScriptCanAccept", &UScriptableInteractiveTool::execOnScriptCanAccept },
			{ "RemovePropertySetByName", &UScriptableInteractiveTool::execRemovePropertySetByName },
			{ "RequestToolShutdown", &UScriptableInteractiveTool::execRequestToolShutdown },
			{ "RestorePropertySetSettings", &UScriptableInteractiveTool::execRestorePropertySetSettings },
			{ "SavePropertySetSettings", &UScriptableInteractiveTool::execSavePropertySetSettings },
			{ "SetGizmoTransform", &UScriptableInteractiveTool::execSetGizmoTransform },
			{ "SetGizmoVisible", &UScriptableInteractiveTool::execSetGizmoVisible },
			{ "SetPropertySetVisibleByName", &UScriptableInteractiveTool::execSetPropertySetVisibleByName },
			{ "WatchBoolProperty", &UScriptableInteractiveTool::execWatchBoolProperty },
			{ "WatchEnumProperty", &UScriptableInteractiveTool::execWatchEnumProperty },
			{ "WatchFloatProperty", &UScriptableInteractiveTool::execWatchFloatProperty },
			{ "WatchIntProperty", &UScriptableInteractiveTool::execWatchIntProperty },
			{ "WatchNameProperty", &UScriptableInteractiveTool::execWatchNameProperty },
			{ "WatchObjectProperty", &UScriptableInteractiveTool::execWatchObjectProperty },
			{ "WatchProperty", &UScriptableInteractiveTool::execWatchProperty },
			{ "WatchStringProperty", &UScriptableInteractiveTool::execWatchStringProperty },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UScriptableInteractiveTool_AddLogMessage_Statics
	{
		struct ScriptableInteractiveTool_eventAddLogMessage_Parms
		{
			FText Message;
			bool bHighlighted;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_Message;
		static void NewProp_bHighlighted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHighlighted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_AddLogMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventAddLogMessage_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UScriptableInteractiveTool_AddLogMessage_Statics::NewProp_bHighlighted_SetBit(void* Obj)
	{
		((ScriptableInteractiveTool_eventAddLogMessage_Parms*)Obj)->bHighlighted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_AddLogMessage_Statics::NewProp_bHighlighted = { "bHighlighted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ScriptableInteractiveTool_eventAddLogMessage_Parms), &Z_Construct_UFunction_UScriptableInteractiveTool_AddLogMessage_Statics::NewProp_bHighlighted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableInteractiveTool_AddLogMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_AddLogMessage_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_AddLogMessage_Statics::NewProp_bHighlighted,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_AddLogMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool|Messaging" },
		{ "Comment", "/**\n\x09 * Append a Message to the UE Editor Log. \n\x09 * @param bHighlighted if true, the message is emitted as a Warning, otherwise as a Log (normal)\n\x09 */" },
		{ "CPP_Default_bHighlighted", "false" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "ToolTip", "Append a Message to the UE Editor Log.\n@param bHighlighted if true, the message is emitted as a Warning, otherwise as a Log (normal)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableInteractiveTool_AddLogMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableInteractiveTool, nullptr, "AddLogMessage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScriptableInteractiveTool_AddLogMessage_Statics::ScriptableInteractiveTool_eventAddLogMessage_Parms), Z_Construct_UFunction_UScriptableInteractiveTool_AddLogMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_AddLogMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_AddLogMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_AddLogMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableInteractiveTool_AddLogMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableInteractiveTool_AddLogMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableInteractiveTool_AddPropertySetOfType_Statics
	{
		struct ScriptableInteractiveTool_eventAddPropertySetOfType_Parms
		{
			TSubclassOf<UScriptableInteractiveToolPropertySet>  PropertySetType;
			FString Identifier;
			EToolsFrameworkOutcomePins Outcome;
			UScriptableInteractiveToolPropertySet* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_PropertySetType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Outcome_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Outcome;
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
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_AddPropertySetOfType_Statics::NewProp_PropertySetType = { "PropertySetType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventAddPropertySetOfType_Parms, PropertySetType), Z_Construct_UClass_UClass, Z_Construct_UClass_UScriptableInteractiveToolPropertySet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_AddPropertySetOfType_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventAddPropertySetOfType_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_AddPropertySetOfType_Statics::NewProp_Outcome_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_AddPropertySetOfType_Statics::NewProp_Outcome = { "Outcome", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventAddPropertySetOfType_Parms, Outcome), Z_Construct_UEnum_ScriptableToolsFramework_EToolsFrameworkOutcomePins, METADATA_PARAMS(nullptr, 0) }; // 2937799865
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_AddPropertySetOfType_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "New Property Set" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_AddPropertySetOfType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventAddPropertySetOfType_Parms, ReturnValue), Z_Construct_UClass_UScriptableInteractiveToolPropertySet_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_AddPropertySetOfType_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_AddPropertySetOfType_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableInteractiveTool_AddPropertySetOfType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_AddPropertySetOfType_Statics::NewProp_PropertySetType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_AddPropertySetOfType_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_AddPropertySetOfType_Statics::NewProp_Outcome_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_AddPropertySetOfType_Statics::NewProp_Outcome,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_AddPropertySetOfType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_AddPropertySetOfType_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool|PropertySets" },
		{ "Comment", "/**\n\x09 * Create a new Tool Property Set (ie BP subclass of UScriptableInteractiveToolPropertySet) with the given string Identifier\n\x09 * and attach it to the Tool. The public variables of this Property Set object will appear in (eg) Mode Details Panels, etc.\n\x09 * Multiple Property Sets of the same Type can be attached to a Tool, but each must have a unique Identifier.\n\x09 */" },
		{ "ExpandEnumAsExecs", "Outcome" },
		{ "Identifier", "Settings" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "ToolTip", "Create a new Tool Property Set (ie BP subclass of UScriptableInteractiveToolPropertySet) with the given string Identifier\nand attach it to the Tool. The public variables of this Property Set object will appear in (eg) Mode Details Panels, etc.\nMultiple Property Sets of the same Type can be attached to a Tool, but each must have a unique Identifier." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableInteractiveTool_AddPropertySetOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableInteractiveTool, nullptr, "AddPropertySetOfType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScriptableInteractiveTool_AddPropertySetOfType_Statics::ScriptableInteractiveTool_eventAddPropertySetOfType_Parms), Z_Construct_UFunction_UScriptableInteractiveTool_AddPropertySetOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_AddPropertySetOfType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_AddPropertySetOfType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_AddPropertySetOfType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableInteractiveTool_AddPropertySetOfType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableInteractiveTool_AddPropertySetOfType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableInteractiveTool_ClearUserMessages_Statics
	{
		struct ScriptableInteractiveTool_eventClearUserMessages_Parms
		{
			bool bHelpMessage;
			bool bWarningMessage;
		};
		static void NewProp_bHelpMessage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHelpMessage;
		static void NewProp_bWarningMessage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWarningMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UScriptableInteractiveTool_ClearUserMessages_Statics::NewProp_bHelpMessage_SetBit(void* Obj)
	{
		((ScriptableInteractiveTool_eventClearUserMessages_Parms*)Obj)->bHelpMessage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_ClearUserMessages_Statics::NewProp_bHelpMessage = { "bHelpMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ScriptableInteractiveTool_eventClearUserMessages_Parms), &Z_Construct_UFunction_UScriptableInteractiveTool_ClearUserMessages_Statics::NewProp_bHelpMessage_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UScriptableInteractiveTool_ClearUserMessages_Statics::NewProp_bWarningMessage_SetBit(void* Obj)
	{
		((ScriptableInteractiveTool_eventClearUserMessages_Parms*)Obj)->bWarningMessage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_ClearUserMessages_Statics::NewProp_bWarningMessage = { "bWarningMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ScriptableInteractiveTool_eventClearUserMessages_Parms), &Z_Construct_UFunction_UScriptableInteractiveTool_ClearUserMessages_Statics::NewProp_bWarningMessage_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableInteractiveTool_ClearUserMessages_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_ClearUserMessages_Statics::NewProp_bHelpMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_ClearUserMessages_Statics::NewProp_bWarningMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_ClearUserMessages_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool|Messaging" },
		{ "Comment", "/**\n\x09 * Clear any active message shown via DisplayUserHelpMessage and/or DisplayUserWarningMessage\n\x09 */" },
		{ "CPP_Default_bHelpMessage", "true" },
		{ "CPP_Default_bWarningMessage", "true" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "ToolTip", "Clear any active message shown via DisplayUserHelpMessage and/or DisplayUserWarningMessage" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableInteractiveTool_ClearUserMessages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableInteractiveTool, nullptr, "ClearUserMessages", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScriptableInteractiveTool_ClearUserMessages_Statics::ScriptableInteractiveTool_eventClearUserMessages_Parms), Z_Construct_UFunction_UScriptableInteractiveTool_ClearUserMessages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_ClearUserMessages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_ClearUserMessages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_ClearUserMessages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableInteractiveTool_ClearUserMessages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableInteractiveTool_ClearUserMessages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableInteractiveTool_CreateTRSGizmo_Statics
	{
		struct ScriptableInteractiveTool_eventCreateTRSGizmo_Parms
		{
			FString Identifier;
			FTransform InitialTransform;
			FScriptableToolGizmoOptions GizmoOptions;
			EToolsFrameworkOutcomePins Outcome;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialTransform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GizmoOptions;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Outcome_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Outcome;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_CreateTRSGizmo_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventCreateTRSGizmo_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_CreateTRSGizmo_Statics::NewProp_InitialTransform = { "InitialTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventCreateTRSGizmo_Parms, InitialTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_CreateTRSGizmo_Statics::NewProp_GizmoOptions = { "GizmoOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventCreateTRSGizmo_Parms, GizmoOptions), Z_Construct_UScriptStruct_FScriptableToolGizmoOptions, METADATA_PARAMS(nullptr, 0) }; // 2231529458
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_CreateTRSGizmo_Statics::NewProp_Outcome_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_CreateTRSGizmo_Statics::NewProp_Outcome = { "Outcome", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventCreateTRSGizmo_Parms, Outcome), Z_Construct_UEnum_ScriptableToolsFramework_EToolsFrameworkOutcomePins, METADATA_PARAMS(nullptr, 0) }; // 2937799865
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableInteractiveTool_CreateTRSGizmo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_CreateTRSGizmo_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_CreateTRSGizmo_Statics::NewProp_InitialTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_CreateTRSGizmo_Statics::NewProp_GizmoOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_CreateTRSGizmo_Statics::NewProp_Outcome_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_CreateTRSGizmo_Statics::NewProp_Outcome,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_CreateTRSGizmo_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool|Gizmos" },
		{ "Comment", "/**\n\x09 * Create a Translate/Rotate/Scale Gizmo with the given Options at the specified InitialTransform.\n\x09 * The Gizmo must be given a unique Identifier, which will be used to access it in other functions.\n\x09 * The Gizmo can be explicitly destroyed with DestroyTRSGizmo(), or it will be\n\x09 * automatically destroyed when the Tool exits\n\x09 */" },
		{ "ExpandEnumAsExecs", "Outcome" },
		{ "Identifier", "Gizmo1" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "ToolTip", "Create a Translate/Rotate/Scale Gizmo with the given Options at the specified InitialTransform.\nThe Gizmo must be given a unique Identifier, which will be used to access it in other functions.\nThe Gizmo can be explicitly destroyed with DestroyTRSGizmo(), or it will be\nautomatically destroyed when the Tool exits" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableInteractiveTool_CreateTRSGizmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableInteractiveTool, nullptr, "CreateTRSGizmo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScriptableInteractiveTool_CreateTRSGizmo_Statics::ScriptableInteractiveTool_eventCreateTRSGizmo_Parms), Z_Construct_UFunction_UScriptableInteractiveTool_CreateTRSGizmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_CreateTRSGizmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_CreateTRSGizmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_CreateTRSGizmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableInteractiveTool_CreateTRSGizmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableInteractiveTool_CreateTRSGizmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableInteractiveTool_DestroyTRSGizmo_Statics
	{
		struct ScriptableInteractiveTool_eventDestroyTRSGizmo_Parms
		{
			FString Identifier;
			EToolsFrameworkOutcomePins Outcome;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Outcome_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Outcome;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_DestroyTRSGizmo_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventDestroyTRSGizmo_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_DestroyTRSGizmo_Statics::NewProp_Outcome_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_DestroyTRSGizmo_Statics::NewProp_Outcome = { "Outcome", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventDestroyTRSGizmo_Parms, Outcome), Z_Construct_UEnum_ScriptableToolsFramework_EToolsFrameworkOutcomePins, METADATA_PARAMS(nullptr, 0) }; // 2937799865
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableInteractiveTool_DestroyTRSGizmo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_DestroyTRSGizmo_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_DestroyTRSGizmo_Statics::NewProp_Outcome_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_DestroyTRSGizmo_Statics::NewProp_Outcome,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_DestroyTRSGizmo_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool|Gizmos" },
		{ "Comment", "/**\n\x09 * Destroy a created Gizmo by name Identifier\n\x09 */" },
		{ "ExpandEnumAsExecs", "Outcome" },
		{ "Identifier", "Gizmo1" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "ToolTip", "Destroy a created Gizmo by name Identifier" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableInteractiveTool_DestroyTRSGizmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableInteractiveTool, nullptr, "DestroyTRSGizmo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScriptableInteractiveTool_DestroyTRSGizmo_Statics::ScriptableInteractiveTool_eventDestroyTRSGizmo_Parms), Z_Construct_UFunction_UScriptableInteractiveTool_DestroyTRSGizmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_DestroyTRSGizmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_DestroyTRSGizmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_DestroyTRSGizmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableInteractiveTool_DestroyTRSGizmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableInteractiveTool_DestroyTRSGizmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableInteractiveTool_DisplayUserHelpMessage_Statics
	{
		struct ScriptableInteractiveTool_eventDisplayUserHelpMessage_Parms
		{
			FText Message;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_DisplayUserHelpMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventDisplayUserHelpMessage_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableInteractiveTool_DisplayUserHelpMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_DisplayUserHelpMessage_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_DisplayUserHelpMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool|Messaging" },
		{ "Comment", "/**\n\x09 * Display a short Help message for the user, ie to guide them in Tool usage.\n\x09 * In the UE5 Editor this message appears in the bottom bar of the window.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "ToolTip", "Display a short Help message for the user, ie to guide them in Tool usage.\nIn the UE5 Editor this message appears in the bottom bar of the window." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableInteractiveTool_DisplayUserHelpMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableInteractiveTool, nullptr, "DisplayUserHelpMessage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScriptableInteractiveTool_DisplayUserHelpMessage_Statics::ScriptableInteractiveTool_eventDisplayUserHelpMessage_Parms), Z_Construct_UFunction_UScriptableInteractiveTool_DisplayUserHelpMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_DisplayUserHelpMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_DisplayUserHelpMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_DisplayUserHelpMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableInteractiveTool_DisplayUserHelpMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableInteractiveTool_DisplayUserHelpMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableInteractiveTool_DisplayUserWarningMessage_Statics
	{
		struct ScriptableInteractiveTool_eventDisplayUserWarningMessage_Parms
		{
			FText Message;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_DisplayUserWarningMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventDisplayUserWarningMessage_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableInteractiveTool_DisplayUserWarningMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_DisplayUserWarningMessage_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_DisplayUserWarningMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool|Messaging" },
		{ "Comment", "/**\n\x09 * Display a Warning message to the user, ie to indicate a problem/issue occurred. \n\x09 */" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "ToolTip", "Display a Warning message to the user, ie to indicate a problem/issue occurred." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableInteractiveTool_DisplayUserWarningMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableInteractiveTool, nullptr, "DisplayUserWarningMessage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScriptableInteractiveTool_DisplayUserWarningMessage_Statics::ScriptableInteractiveTool_eventDisplayUserWarningMessage_Parms), Z_Construct_UFunction_UScriptableInteractiveTool_DisplayUserWarningMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_DisplayUserWarningMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_DisplayUserWarningMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_DisplayUserWarningMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableInteractiveTool_DisplayUserWarningMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableInteractiveTool_DisplayUserWarningMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableInteractiveTool_ForcePropertySetUpdateByName_Statics
	{
		struct ScriptableInteractiveTool_eventForcePropertySetUpdateByName_Parms
		{
			FString Identifier;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_ForcePropertySetUpdateByName_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventForcePropertySetUpdateByName_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableInteractiveTool_ForcePropertySetUpdateByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_ForcePropertySetUpdateByName_Statics::NewProp_Identifier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_ForcePropertySetUpdateByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool|PropertySets" },
		{ "Comment", "/**\n\x09 * Force the Property Set associated with the given Identifier to be updated. \n\x09 * This may be necessary if you change the Property Set values directly via Blueprints, and want to\n\x09 * see your changes reflected in (eg) a Details Panel showing the Tool Property values. \n\x09 * Currently these changes cannot be detected automatically, necessitating this function.\n\x09 */" },
		{ "Identifier", "Settings" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "ToolTip", "Force the Property Set associated with the given Identifier to be updated.\nThis may be necessary if you change the Property Set values directly via Blueprints, and want to\nsee your changes reflected in (eg) a Details Panel showing the Tool Property values.\nCurrently these changes cannot be detected automatically, necessitating this function." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableInteractiveTool_ForcePropertySetUpdateByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableInteractiveTool, nullptr, "ForcePropertySetUpdateByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScriptableInteractiveTool_ForcePropertySetUpdateByName_Statics::ScriptableInteractiveTool_eventForcePropertySetUpdateByName_Parms), Z_Construct_UFunction_UScriptableInteractiveTool_ForcePropertySetUpdateByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_ForcePropertySetUpdateByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_ForcePropertySetUpdateByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_ForcePropertySetUpdateByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableInteractiveTool_ForcePropertySetUpdateByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableInteractiveTool_ForcePropertySetUpdateByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableInteractiveTool_GetGizmoTransform_Statics
	{
		struct ScriptableInteractiveTool_eventGetGizmoTransform_Parms
		{
			FString Identifier;
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Identifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_GetGizmoTransform_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventGetGizmoTransform_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_GetGizmoTransform_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Transform" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_GetGizmoTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventGetGizmoTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_GetGizmoTransform_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_GetGizmoTransform_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableInteractiveTool_GetGizmoTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_GetGizmoTransform_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_GetGizmoTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_GetGizmoTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool|Gizmos" },
		{ "Comment", "/**\n\x09 * Get the current Transform on the Gizmo specified by the name Identifier\n\x09 */" },
		{ "Identifier", "Gizmo1" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "ToolTip", "Get the current Transform on the Gizmo specified by the name Identifier" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableInteractiveTool_GetGizmoTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableInteractiveTool, nullptr, "GetGizmoTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScriptableInteractiveTool_GetGizmoTransform_Statics::ScriptableInteractiveTool_eventGetGizmoTransform_Parms), Z_Construct_UFunction_UScriptableInteractiveTool_GetGizmoTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_GetGizmoTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_GetGizmoTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_GetGizmoTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableInteractiveTool_GetGizmoTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableInteractiveTool_GetGizmoTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableInteractiveTool_GetToolWorld_Statics
	{
		struct ScriptableInteractiveTool_eventGetToolWorld_Parms
		{
			UWorld* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_GetToolWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventGetToolWorld_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableInteractiveTool_GetToolWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_GetToolWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_GetToolWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool" },
		{ "Comment", "/**\n\x09 * Access the World this Tool is currently operating on.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "ToolTip", "Access the World this Tool is currently operating on." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableInteractiveTool_GetToolWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableInteractiveTool, nullptr, "GetToolWorld", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScriptableInteractiveTool_GetToolWorld_Statics::ScriptableInteractiveTool_eventGetToolWorld_Parms), Z_Construct_UFunction_UScriptableInteractiveTool_GetToolWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_GetToolWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_GetToolWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_GetToolWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableInteractiveTool_GetToolWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableInteractiveTool_GetToolWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableInteractiveTool_OnGizmoTransformChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GizmoIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GizmoIdentifier;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_OnGizmoTransformChanged_Statics::NewProp_GizmoIdentifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_OnGizmoTransformChanged_Statics::NewProp_GizmoIdentifier = { "GizmoIdentifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventOnGizmoTransformChanged_Parms, GizmoIdentifier), METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_OnGizmoTransformChanged_Statics::NewProp_GizmoIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_OnGizmoTransformChanged_Statics::NewProp_GizmoIdentifier_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_OnGizmoTransformChanged_Statics::NewProp_NewTransform = { "NewTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventOnGizmoTransformChanged_Parms, NewTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableInteractiveTool_OnGizmoTransformChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_OnGizmoTransformChanged_Statics::NewProp_GizmoIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_OnGizmoTransformChanged_Statics::NewProp_NewTransform,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_OnGizmoTransformChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool|Events" },
		{ "Comment", "/**\n\x09 * The OnGizmoTransformChanged event fires whenever the transform on any Gizmo created by CreateTRSGizmo() is modified.\n\x09 * The GizmoIdentifier can be used to disambiguate multiple active Gizmos.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "ToolTip", "The OnGizmoTransformChanged event fires whenever the transform on any Gizmo created by CreateTRSGizmo() is modified.\nThe GizmoIdentifier can be used to disambiguate multiple active Gizmos." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableInteractiveTool_OnGizmoTransformChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableInteractiveTool, nullptr, "OnGizmoTransformChanged", nullptr, nullptr, sizeof(ScriptableInteractiveTool_eventOnGizmoTransformChanged_Parms), Z_Construct_UFunction_UScriptableInteractiveTool_OnGizmoTransformChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_OnGizmoTransformChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_OnGizmoTransformChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_OnGizmoTransformChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableInteractiveTool_OnGizmoTransformChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableInteractiveTool_OnGizmoTransformChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptCanAccept_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptCanAccept_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ScriptableInteractiveTool_eventOnScriptCanAccept_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptCanAccept_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ScriptableInteractiveTool_eventOnScriptCanAccept_Parms), &Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptCanAccept_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptCanAccept_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptCanAccept_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptCanAccept_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool|Events" },
		{ "Comment", "/**\n\x09 * CanAccept function. Implement this function for AcceptCancel Tools, and return\n\x09 * true when it is valid for the Tool Accept button to be active. Defaults to always true.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "ToolTip", "CanAccept function. Implement this function for AcceptCancel Tools, and return\ntrue when it is valid for the Tool Accept button to be active. Defaults to always true." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptCanAccept_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableInteractiveTool, nullptr, "OnScriptCanAccept", nullptr, nullptr, sizeof(ScriptableInteractiveTool_eventOnScriptCanAccept_Parms), Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptCanAccept_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptCanAccept_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptCanAccept_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptCanAccept_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptCanAccept()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptCanAccept_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptDrawHUD_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawHUDAPI_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DrawHUDAPI;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptDrawHUD_Statics::NewProp_DrawHUDAPI_MetaData[] = {
		{ "DisplayName", "HUD Object" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptDrawHUD_Statics::NewProp_DrawHUDAPI = { "DrawHUDAPI", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventOnScriptDrawHUD_Parms, DrawHUDAPI), Z_Construct_UClass_UScriptableTool_HUDAPI_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptDrawHUD_Statics::NewProp_DrawHUDAPI_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptDrawHUD_Statics::NewProp_DrawHUDAPI_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptDrawHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptDrawHUD_Statics::NewProp_DrawHUDAPI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptDrawHUD_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool|Events" },
		{ "Comment", "/**\n\x09 * OnScriptDrawHUD is called every frame. Use the DrawHUDAPI to draw various\n\x09 * simple HUD elements like text. This drawing is not very efficient but\n\x09 * is useful for basic Tool visualization/feedback.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "ToolTip", "OnScriptDrawHUD is called every frame. Use the DrawHUDAPI to draw various\nsimple HUD elements like text. This drawing is not very efficient but\nis useful for basic Tool visualization/feedback." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptDrawHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableInteractiveTool, nullptr, "OnScriptDrawHUD", nullptr, nullptr, sizeof(ScriptableInteractiveTool_eventOnScriptDrawHUD_Parms), Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptDrawHUD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptDrawHUD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptDrawHUD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptDrawHUD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptDrawHUD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptDrawHUD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptRender_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderAPI_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderAPI;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptRender_Statics::NewProp_RenderAPI_MetaData[] = {
		{ "DisplayName", "Render Object" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptRender_Statics::NewProp_RenderAPI = { "RenderAPI", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventOnScriptRender_Parms, RenderAPI), Z_Construct_UClass_UScriptableTool_RenderAPI_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptRender_Statics::NewProp_RenderAPI_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptRender_Statics::NewProp_RenderAPI_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptRender_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptRender_Statics::NewProp_RenderAPI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptRender_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool|Events" },
		{ "Comment", "/**\n\x09 * OnScriptRender is called every frame. Use the RenderAPI object to draw\n\x09 * various simple geometric elements like lines and points. This drawing\n\x09 * is not very efficient but is useful for basic Tool visualization/feedback.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "ToolTip", "OnScriptRender is called every frame. Use the RenderAPI object to draw\nvarious simple geometric elements like lines and points. This drawing\nis not very efficient but is useful for basic Tool visualization/feedback." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptRender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableInteractiveTool, nullptr, "OnScriptRender", nullptr, nullptr, sizeof(ScriptableInteractiveTool_eventOnScriptRender_Parms), Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptRender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptRender_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptRender_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptRender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptRender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptRender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptSetup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptSetup_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool|Events" },
		{ "Comment", "/**\n\x09 * Implement OnScriptSetup to do initial setup/configuration of the Tool, such as adding\n\x09 * Property Sets, creating Gizmos, etc\n\x09 */" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "ToolTip", "Implement OnScriptSetup to do initial setup/configuration of the Tool, such as adding\nProperty Sets, creating Gizmos, etc" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptSetup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableInteractiveTool, nullptr, "OnScriptSetup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptSetup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptSetup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptSetup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptSetup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptShutdown_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_ShutdownType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ShutdownType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptShutdown_Statics::NewProp_ShutdownType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptShutdown_Statics::NewProp_ShutdownType = { "ShutdownType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventOnScriptShutdown_Parms, ShutdownType), Z_Construct_UEnum_InteractiveToolsFramework_EToolShutdownType, METADATA_PARAMS(nullptr, 0) }; // 2744993379
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptShutdown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptShutdown_Statics::NewProp_ShutdownType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptShutdown_Statics::NewProp_ShutdownType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptShutdown_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool|Events" },
		{ "Comment", "/**\n\x09 * OnScriptShutdown is called when the Tool is shutting down. The ShutdownType defines\n\x09 * what the Tool should do. For Complete-style Tools, there is no difference, but for\n\x09 * Accept/Cancel-style Tools, on Accept the Tool should \"commit\" whatever it is previewing/etc,\n\x09 * and on Cancel it should roll back / do-nothing. Which of these occurs is based on the\n\x09 * ToolShutdownType property.\n\x09 * \n\x09 * Tool Shutdown cannot be interrupted/aborted\n\x09 */" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "ToolTip", "OnScriptShutdown is called when the Tool is shutting down. The ShutdownType defines\nwhat the Tool should do. For Complete-style Tools, there is no difference, but for\nAccept/Cancel-style Tools, on Accept the Tool should \"commit\" whatever it is previewing/etc,\nand on Cancel it should roll back / do-nothing. Which of these occurs is based on the\nToolShutdownType property.\n\nTool Shutdown cannot be interrupted/aborted" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptShutdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableInteractiveTool, nullptr, "OnScriptShutdown", nullptr, nullptr, sizeof(ScriptableInteractiveTool_eventOnScriptShutdown_Parms), Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptShutdown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptShutdown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptShutdown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptShutdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptShutdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptShutdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptTick_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptTick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventOnScriptTick_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptTick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptTick_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptTick_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool|Events" },
		{ "Comment", "/**\n\x09 * OnScriptTick is called every Editor Tick, ie basically every frame.\n\x09 * Implement per-frame processing here.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "ToolTip", "OnScriptTick is called every Editor Tick, ie basically every frame.\nImplement per-frame processing here." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableInteractiveTool, nullptr, "OnScriptTick", nullptr, nullptr, sizeof(ScriptableInteractiveTool_eventOnScriptTick_Parms), Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableInteractiveTool_RemovePropertySetByName_Statics
	{
		struct ScriptableInteractiveTool_eventRemovePropertySetByName_Parms
		{
			FString Identifier;
			EToolsFrameworkOutcomePins Outcome;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Outcome_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Outcome;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_RemovePropertySetByName_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventRemovePropertySetByName_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_RemovePropertySetByName_Statics::NewProp_Outcome_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_RemovePropertySetByName_Statics::NewProp_Outcome = { "Outcome", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventRemovePropertySetByName_Parms, Outcome), Z_Construct_UEnum_ScriptableToolsFramework_EToolsFrameworkOutcomePins, METADATA_PARAMS(nullptr, 0) }; // 2937799865
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableInteractiveTool_RemovePropertySetByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_RemovePropertySetByName_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_RemovePropertySetByName_Statics::NewProp_Outcome_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_RemovePropertySetByName_Statics::NewProp_Outcome,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_RemovePropertySetByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool|PropertySets" },
		{ "Comment", "/**\n\x09 * Remove a Property Set from the current Tool, found via it's unique Identifier.\n\x09 * Unless the Property Set absolutely needs to stop existing, it is likely preferable to use SetPropertySetVisibleByName() to simply hide it.\n\x09 */" },
		{ "ExpandEnumAsExecs", "Outcome" },
		{ "Identifier", "Settings" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "ToolTip", "Remove a Property Set from the current Tool, found via it's unique Identifier.\nUnless the Property Set absolutely needs to stop existing, it is likely preferable to use SetPropertySetVisibleByName() to simply hide it." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableInteractiveTool_RemovePropertySetByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableInteractiveTool, nullptr, "RemovePropertySetByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScriptableInteractiveTool_RemovePropertySetByName_Statics::ScriptableInteractiveTool_eventRemovePropertySetByName_Parms), Z_Construct_UFunction_UScriptableInteractiveTool_RemovePropertySetByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_RemovePropertySetByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_RemovePropertySetByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_RemovePropertySetByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableInteractiveTool_RemovePropertySetByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableInteractiveTool_RemovePropertySetByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableInteractiveTool_RequestToolShutdown_Statics
	{
		struct ScriptableInteractiveTool_eventRequestToolShutdown_Parms
		{
			bool bAccept;
			bool bShowUserPopupMessage;
			FText UserMessage;
		};
		static void NewProp_bAccept_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAccept;
		static void NewProp_bShowUserPopupMessage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowUserPopupMessage;
		static const UECodeGen_Private::FTextPropertyParams NewProp_UserMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UScriptableInteractiveTool_RequestToolShutdown_Statics::NewProp_bAccept_SetBit(void* Obj)
	{
		((ScriptableInteractiveTool_eventRequestToolShutdown_Parms*)Obj)->bAccept = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_RequestToolShutdown_Statics::NewProp_bAccept = { "bAccept", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ScriptableInteractiveTool_eventRequestToolShutdown_Parms), &Z_Construct_UFunction_UScriptableInteractiveTool_RequestToolShutdown_Statics::NewProp_bAccept_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UScriptableInteractiveTool_RequestToolShutdown_Statics::NewProp_bShowUserPopupMessage_SetBit(void* Obj)
	{
		((ScriptableInteractiveTool_eventRequestToolShutdown_Parms*)Obj)->bShowUserPopupMessage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_RequestToolShutdown_Statics::NewProp_bShowUserPopupMessage = { "bShowUserPopupMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ScriptableInteractiveTool_eventRequestToolShutdown_Parms), &Z_Construct_UFunction_UScriptableInteractiveTool_RequestToolShutdown_Statics::NewProp_bShowUserPopupMessage_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_RequestToolShutdown_Statics::NewProp_UserMessage = { "UserMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventRequestToolShutdown_Parms, UserMessage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableInteractiveTool_RequestToolShutdown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_RequestToolShutdown_Statics::NewProp_bAccept,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_RequestToolShutdown_Statics::NewProp_bShowUserPopupMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_RequestToolShutdown_Statics::NewProp_UserMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_RequestToolShutdown_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool" },
		{ "Comment", "/**\n\x09 * Request that the active Tool be shut down. The Tool can post this to shut itself down (eg in a Tool where\n\x09 * the interaction paradigm is \"click to do something and exit\"). \n\x09 * @param bAccept if this is an Accept/Cancel Tool, Accept it, otherwise Cancel. Ignored for Complete-type Tools.\n\x09 */" },
		{ "Identifier", "Settings" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "ToolTip", "Request that the active Tool be shut down. The Tool can post this to shut itself down (eg in a Tool where\nthe interaction paradigm is \"click to do something and exit\").\n@param bAccept if this is an Accept/Cancel Tool, Accept it, otherwise Cancel. Ignored for Complete-type Tools." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableInteractiveTool_RequestToolShutdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableInteractiveTool, nullptr, "RequestToolShutdown", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScriptableInteractiveTool_RequestToolShutdown_Statics::ScriptableInteractiveTool_eventRequestToolShutdown_Parms), Z_Construct_UFunction_UScriptableInteractiveTool_RequestToolShutdown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_RequestToolShutdown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_RequestToolShutdown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_RequestToolShutdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableInteractiveTool_RequestToolShutdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableInteractiveTool_RequestToolShutdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableInteractiveTool_RestorePropertySetSettings_Statics
	{
		struct ScriptableInteractiveTool_eventRestorePropertySetSettings_Parms
		{
			UScriptableInteractiveToolPropertySet* PropertySet;
			FString SaveKey;
			UScriptableInteractiveToolPropertySet* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PropertySet;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveKey;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_RestorePropertySetSettings_Statics::NewProp_PropertySet = { "PropertySet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventRestorePropertySetSettings_Parms, PropertySet), Z_Construct_UClass_UScriptableInteractiveToolPropertySet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_RestorePropertySetSettings_Statics::NewProp_SaveKey = { "SaveKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventRestorePropertySetSettings_Parms, SaveKey), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_RestorePropertySetSettings_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Property Set" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_RestorePropertySetSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventRestorePropertySetSettings_Parms, ReturnValue), Z_Construct_UClass_UScriptableInteractiveToolPropertySet_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_RestorePropertySetSettings_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_RestorePropertySetSettings_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableInteractiveTool_RestorePropertySetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_RestorePropertySetSettings_Statics::NewProp_PropertySet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_RestorePropertySetSettings_Statics::NewProp_SaveKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_RestorePropertySetSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_RestorePropertySetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool|PropertySets" },
		{ "Comment", "/**\n\x09 * Restore the values of the specified PropertySet, optionally with a specific SaveKey string.\n\x09 * This will have no effect unless SavePropertySetSettings() has been called on a compatible Property Set\n\x09 * in the same Engine session (ie in a previous invocation of the Tool, or another Tool that uses the same Property Set)\n\x09 */" },
		{ "Identifier", "Settings" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "ToolTip", "Restore the values of the specified PropertySet, optionally with a specific SaveKey string.\nThis will have no effect unless SavePropertySetSettings() has been called on a compatible Property Set\nin the same Engine session (ie in a previous invocation of the Tool, or another Tool that uses the same Property Set)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableInteractiveTool_RestorePropertySetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableInteractiveTool, nullptr, "RestorePropertySetSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScriptableInteractiveTool_RestorePropertySetSettings_Statics::ScriptableInteractiveTool_eventRestorePropertySetSettings_Parms), Z_Construct_UFunction_UScriptableInteractiveTool_RestorePropertySetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_RestorePropertySetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_RestorePropertySetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_RestorePropertySetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableInteractiveTool_RestorePropertySetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableInteractiveTool_RestorePropertySetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableInteractiveTool_SavePropertySetSettings_Statics
	{
		struct ScriptableInteractiveTool_eventSavePropertySetSettings_Parms
		{
			UScriptableInteractiveToolPropertySet* PropertySet;
			FString SaveKey;
			UScriptableInteractiveToolPropertySet* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PropertySet;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveKey;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_SavePropertySetSettings_Statics::NewProp_PropertySet = { "PropertySet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventSavePropertySetSettings_Parms, PropertySet), Z_Construct_UClass_UScriptableInteractiveToolPropertySet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_SavePropertySetSettings_Statics::NewProp_SaveKey = { "SaveKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventSavePropertySetSettings_Parms, SaveKey), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_SavePropertySetSettings_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Property Set" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_SavePropertySetSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventSavePropertySetSettings_Parms, ReturnValue), Z_Construct_UClass_UScriptableInteractiveToolPropertySet_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_SavePropertySetSettings_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_SavePropertySetSettings_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableInteractiveTool_SavePropertySetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_SavePropertySetSettings_Statics::NewProp_PropertySet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_SavePropertySetSettings_Statics::NewProp_SaveKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_SavePropertySetSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_SavePropertySetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool|PropertySets" },
		{ "Comment", "/**\n\x09 * Save the values of the specified PropertySet, optionally with a specific SaveKey string.\n\x09 * These saved values can be restored in future Tool invocations based on the SaveKey.\n\x09 */" },
		{ "Identifier", "Settings" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "ToolTip", "Save the values of the specified PropertySet, optionally with a specific SaveKey string.\nThese saved values can be restored in future Tool invocations based on the SaveKey." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableInteractiveTool_SavePropertySetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableInteractiveTool, nullptr, "SavePropertySetSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScriptableInteractiveTool_SavePropertySetSettings_Statics::ScriptableInteractiveTool_eventSavePropertySetSettings_Parms), Z_Construct_UFunction_UScriptableInteractiveTool_SavePropertySetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_SavePropertySetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_SavePropertySetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_SavePropertySetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableInteractiveTool_SavePropertySetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableInteractiveTool_SavePropertySetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableInteractiveTool_SetGizmoTransform_Statics
	{
		struct ScriptableInteractiveTool_eventSetGizmoTransform_Parms
		{
			FString Identifier;
			FTransform NewTransform;
			bool bUndoable;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewTransform;
		static void NewProp_bUndoable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUndoable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_SetGizmoTransform_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventSetGizmoTransform_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_SetGizmoTransform_Statics::NewProp_NewTransform = { "NewTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventSetGizmoTransform_Parms, NewTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UScriptableInteractiveTool_SetGizmoTransform_Statics::NewProp_bUndoable_SetBit(void* Obj)
	{
		((ScriptableInteractiveTool_eventSetGizmoTransform_Parms*)Obj)->bUndoable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_SetGizmoTransform_Statics::NewProp_bUndoable = { "bUndoable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ScriptableInteractiveTool_eventSetGizmoTransform_Parms), &Z_Construct_UFunction_UScriptableInteractiveTool_SetGizmoTransform_Statics::NewProp_bUndoable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableInteractiveTool_SetGizmoTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_SetGizmoTransform_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_SetGizmoTransform_Statics::NewProp_NewTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_SetGizmoTransform_Statics::NewProp_bUndoable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_SetGizmoTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool|Gizmos" },
		{ "Comment", "/**\n\x09 * Update the Transform on the Gizmo specified by the name Identifier\n\x09 * @param bUndoable if true, this transform change will be transacted into the undo/redo history, ie undoable\n\x09 */" },
		{ "Identifier", "Gizmo1" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "ToolTip", "Update the Transform on the Gizmo specified by the name Identifier\n@param bUndoable if true, this transform change will be transacted into the undo/redo history, ie undoable" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableInteractiveTool_SetGizmoTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableInteractiveTool, nullptr, "SetGizmoTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScriptableInteractiveTool_SetGizmoTransform_Statics::ScriptableInteractiveTool_eventSetGizmoTransform_Parms), Z_Construct_UFunction_UScriptableInteractiveTool_SetGizmoTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_SetGizmoTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_SetGizmoTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_SetGizmoTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableInteractiveTool_SetGizmoTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableInteractiveTool_SetGizmoTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableInteractiveTool_SetGizmoVisible_Statics
	{
		struct ScriptableInteractiveTool_eventSetGizmoVisible_Parms
		{
			FString Identifier;
			bool bVisible;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Identifier;
		static void NewProp_bVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_SetGizmoVisible_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventSetGizmoVisible_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UScriptableInteractiveTool_SetGizmoVisible_Statics::NewProp_bVisible_SetBit(void* Obj)
	{
		((ScriptableInteractiveTool_eventSetGizmoVisible_Parms*)Obj)->bVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_SetGizmoVisible_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ScriptableInteractiveTool_eventSetGizmoVisible_Parms), &Z_Construct_UFunction_UScriptableInteractiveTool_SetGizmoVisible_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableInteractiveTool_SetGizmoVisible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_SetGizmoVisible_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_SetGizmoVisible_Statics::NewProp_bVisible,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_SetGizmoVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool|Gizmos" },
		{ "Comment", "/**\n\x09 * Set an existing Gizmo visible/hidden based on its name Identifier\n\x09 */" },
		{ "Identifier", "Gizmo1" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "ToolTip", "Set an existing Gizmo visible/hidden based on its name Identifier" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableInteractiveTool_SetGizmoVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableInteractiveTool, nullptr, "SetGizmoVisible", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScriptableInteractiveTool_SetGizmoVisible_Statics::ScriptableInteractiveTool_eventSetGizmoVisible_Parms), Z_Construct_UFunction_UScriptableInteractiveTool_SetGizmoVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_SetGizmoVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_SetGizmoVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_SetGizmoVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableInteractiveTool_SetGizmoVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableInteractiveTool_SetGizmoVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableInteractiveTool_SetPropertySetVisibleByName_Statics
	{
		struct ScriptableInteractiveTool_eventSetPropertySetVisibleByName_Parms
		{
			FString Identifier;
			bool bVisible;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Identifier;
		static void NewProp_bVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_SetPropertySetVisibleByName_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventSetPropertySetVisibleByName_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UScriptableInteractiveTool_SetPropertySetVisibleByName_Statics::NewProp_bVisible_SetBit(void* Obj)
	{
		((ScriptableInteractiveTool_eventSetPropertySetVisibleByName_Parms*)Obj)->bVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_SetPropertySetVisibleByName_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ScriptableInteractiveTool_eventSetPropertySetVisibleByName_Parms), &Z_Construct_UFunction_UScriptableInteractiveTool_SetPropertySetVisibleByName_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableInteractiveTool_SetPropertySetVisibleByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_SetPropertySetVisibleByName_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_SetPropertySetVisibleByName_Statics::NewProp_bVisible,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_SetPropertySetVisibleByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool|PropertySets" },
		{ "Comment", "/**\n\x09 * Set the visibility of a Property Set that is paired with the given unique Identifier.\n\x09 */" },
		{ "Identifier", "Settings" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "ToolTip", "Set the visibility of a Property Set that is paired with the given unique Identifier." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableInteractiveTool_SetPropertySetVisibleByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableInteractiveTool, nullptr, "SetPropertySetVisibleByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScriptableInteractiveTool_SetPropertySetVisibleByName_Statics::ScriptableInteractiveTool_eventSetPropertySetVisibleByName_Parms), Z_Construct_UFunction_UScriptableInteractiveTool_SetPropertySetVisibleByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_SetPropertySetVisibleByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_SetPropertySetVisibleByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_SetPropertySetVisibleByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableInteractiveTool_SetPropertySetVisibleByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableInteractiveTool_SetPropertySetVisibleByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableInteractiveTool_WatchBoolProperty_Statics
	{
		struct ScriptableInteractiveTool_eventWatchBoolProperty_Parms
		{
			UScriptableInteractiveToolPropertySet* PropertySet;
			FString PropertyName;
			FScriptDelegate OnModified;
			UScriptableInteractiveToolPropertySet* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PropertySet;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnModified_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnModified;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_WatchBoolProperty_Statics::NewProp_PropertySet = { "PropertySet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventWatchBoolProperty_Parms, PropertySet), Z_Construct_UClass_UScriptableInteractiveToolPropertySet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_WatchBoolProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventWatchBoolProperty_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_WatchBoolProperty_Statics::NewProp_OnModified_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_WatchBoolProperty_Statics::NewProp_OnModified = { "OnModified", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventWatchBoolProperty_Parms, OnModified), Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolBoolPropertyModifiedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_WatchBoolProperty_Statics::NewProp_OnModified_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_WatchBoolProperty_Statics::NewProp_OnModified_MetaData)) }; // 1943359386
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_WatchBoolProperty_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Property Set" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_WatchBoolProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventWatchBoolProperty_Parms, ReturnValue), Z_Construct_UClass_UScriptableInteractiveToolPropertySet_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_WatchBoolProperty_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_WatchBoolProperty_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableInteractiveTool_WatchBoolProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_WatchBoolProperty_Statics::NewProp_PropertySet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_WatchBoolProperty_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_WatchBoolProperty_Statics::NewProp_OnModified,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_WatchBoolProperty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_WatchBoolProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool|PropertySets" },
		{ "Comment", "/**\n\x09 * Watch a Bool-valued Property for changes\n\x09 * @param PropertySet the Property Set which contains the desired Property to watch.\n\x09 * @param PropertyName the string name of the Property in the given Property Set\n\x09 * @param OnModified this delegate will be called if the Property value changes.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "ToolTip", "Watch a Bool-valued Property for changes\n@param PropertySet the Property Set which contains the desired Property to watch.\n@param PropertyName the string name of the Property in the given Property Set\n@param OnModified this delegate will be called if the Property value changes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableInteractiveTool_WatchBoolProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableInteractiveTool, nullptr, "WatchBoolProperty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScriptableInteractiveTool_WatchBoolProperty_Statics::ScriptableInteractiveTool_eventWatchBoolProperty_Parms), Z_Construct_UFunction_UScriptableInteractiveTool_WatchBoolProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_WatchBoolProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_WatchBoolProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_WatchBoolProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableInteractiveTool_WatchBoolProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableInteractiveTool_WatchBoolProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableInteractiveTool_WatchEnumProperty_Statics
	{
		struct ScriptableInteractiveTool_eventWatchEnumProperty_Parms
		{
			UScriptableInteractiveToolPropertySet* PropertySet;
			FString PropertyName;
			FScriptDelegate OnModified;
			UScriptableInteractiveToolPropertySet* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PropertySet;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnModified_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnModified;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_WatchEnumProperty_Statics::NewProp_PropertySet = { "PropertySet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventWatchEnumProperty_Parms, PropertySet), Z_Construct_UClass_UScriptableInteractiveToolPropertySet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_WatchEnumProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventWatchEnumProperty_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_WatchEnumProperty_Statics::NewProp_OnModified_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_WatchEnumProperty_Statics::NewProp_OnModified = { "OnModified", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventWatchEnumProperty_Parms, OnModified), Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolEnumPropertyModifiedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_WatchEnumProperty_Statics::NewProp_OnModified_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_WatchEnumProperty_Statics::NewProp_OnModified_MetaData)) }; // 2901748911
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_WatchEnumProperty_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Property Set" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_WatchEnumProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventWatchEnumProperty_Parms, ReturnValue), Z_Construct_UClass_UScriptableInteractiveToolPropertySet_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_WatchEnumProperty_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_WatchEnumProperty_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableInteractiveTool_WatchEnumProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_WatchEnumProperty_Statics::NewProp_PropertySet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_WatchEnumProperty_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_WatchEnumProperty_Statics::NewProp_OnModified,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_WatchEnumProperty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_WatchEnumProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool|PropertySets" },
		{ "Comment", "/**\n\x09 * Watch an Enum-valued Property for changes. Note that in this case the OnModified\n\x09 * delegate will be called with a uint8 integer, which can be cast back to the original Enum type.\n\x09 * @param PropertySet the Property Set which contains the desired Property to watch.\n\x09 * @param PropertyName the string name of the Property in the given Property Set\n\x09 * @param OnModified this delegate will be called if the Property value changes.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "ToolTip", "Watch an Enum-valued Property for changes. Note that in this case the OnModified\ndelegate will be called with a uint8 integer, which can be cast back to the original Enum type.\n@param PropertySet the Property Set which contains the desired Property to watch.\n@param PropertyName the string name of the Property in the given Property Set\n@param OnModified this delegate will be called if the Property value changes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableInteractiveTool_WatchEnumProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableInteractiveTool, nullptr, "WatchEnumProperty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScriptableInteractiveTool_WatchEnumProperty_Statics::ScriptableInteractiveTool_eventWatchEnumProperty_Parms), Z_Construct_UFunction_UScriptableInteractiveTool_WatchEnumProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_WatchEnumProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_WatchEnumProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_WatchEnumProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableInteractiveTool_WatchEnumProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableInteractiveTool_WatchEnumProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableInteractiveTool_WatchFloatProperty_Statics
	{
		struct ScriptableInteractiveTool_eventWatchFloatProperty_Parms
		{
			UScriptableInteractiveToolPropertySet* PropertySet;
			FString PropertyName;
			FScriptDelegate OnModified;
			UScriptableInteractiveToolPropertySet* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PropertySet;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnModified_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnModified;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_WatchFloatProperty_Statics::NewProp_PropertySet = { "PropertySet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventWatchFloatProperty_Parms, PropertySet), Z_Construct_UClass_UScriptableInteractiveToolPropertySet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_WatchFloatProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventWatchFloatProperty_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_WatchFloatProperty_Statics::NewProp_OnModified_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_WatchFloatProperty_Statics::NewProp_OnModified = { "OnModified", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventWatchFloatProperty_Parms, OnModified), Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolFloatPropertyModifiedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_WatchFloatProperty_Statics::NewProp_OnModified_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_WatchFloatProperty_Statics::NewProp_OnModified_MetaData)) }; // 2043727725
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_WatchFloatProperty_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Property Set" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_WatchFloatProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventWatchFloatProperty_Parms, ReturnValue), Z_Construct_UClass_UScriptableInteractiveToolPropertySet_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_WatchFloatProperty_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_WatchFloatProperty_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableInteractiveTool_WatchFloatProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_WatchFloatProperty_Statics::NewProp_PropertySet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_WatchFloatProperty_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_WatchFloatProperty_Statics::NewProp_OnModified,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_WatchFloatProperty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_WatchFloatProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool|PropertySets" },
		{ "Comment", "/**\n\x09 * Watch a Float-valued Property for changes (double precision)\n\x09 * @param PropertySet the Property Set which contains the desired Property to watch.\n\x09 * @param PropertyName the string name of the Property in the given Property Set\n\x09 * @param OnModified this delegate will be called if the Property value changes.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "ToolTip", "Watch a Float-valued Property for changes (double precision)\n@param PropertySet the Property Set which contains the desired Property to watch.\n@param PropertyName the string name of the Property in the given Property Set\n@param OnModified this delegate will be called if the Property value changes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableInteractiveTool_WatchFloatProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableInteractiveTool, nullptr, "WatchFloatProperty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScriptableInteractiveTool_WatchFloatProperty_Statics::ScriptableInteractiveTool_eventWatchFloatProperty_Parms), Z_Construct_UFunction_UScriptableInteractiveTool_WatchFloatProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_WatchFloatProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_WatchFloatProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_WatchFloatProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableInteractiveTool_WatchFloatProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableInteractiveTool_WatchFloatProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableInteractiveTool_WatchIntProperty_Statics
	{
		struct ScriptableInteractiveTool_eventWatchIntProperty_Parms
		{
			UScriptableInteractiveToolPropertySet* PropertySet;
			FString PropertyName;
			FScriptDelegate OnModified;
			UScriptableInteractiveToolPropertySet* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PropertySet;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnModified_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnModified;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_WatchIntProperty_Statics::NewProp_PropertySet = { "PropertySet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventWatchIntProperty_Parms, PropertySet), Z_Construct_UClass_UScriptableInteractiveToolPropertySet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_WatchIntProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventWatchIntProperty_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_WatchIntProperty_Statics::NewProp_OnModified_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_WatchIntProperty_Statics::NewProp_OnModified = { "OnModified", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventWatchIntProperty_Parms, OnModified), Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolIntPropertyModifiedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_WatchIntProperty_Statics::NewProp_OnModified_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_WatchIntProperty_Statics::NewProp_OnModified_MetaData)) }; // 615025573
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_WatchIntProperty_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Property Set" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_WatchIntProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventWatchIntProperty_Parms, ReturnValue), Z_Construct_UClass_UScriptableInteractiveToolPropertySet_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_WatchIntProperty_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_WatchIntProperty_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableInteractiveTool_WatchIntProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_WatchIntProperty_Statics::NewProp_PropertySet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_WatchIntProperty_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_WatchIntProperty_Statics::NewProp_OnModified,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_WatchIntProperty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_WatchIntProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool|PropertySets" },
		{ "Comment", "/**\n\x09 * Watch an Integer-valued Property for changes\n\x09 * @param PropertySet the Property Set which contains the desired Property to watch.\n\x09 * @param PropertyName the string name of the Property in the given Property Set\n\x09 * @param OnModified this delegate will be called if the Property value changes.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "ToolTip", "Watch an Integer-valued Property for changes\n@param PropertySet the Property Set which contains the desired Property to watch.\n@param PropertyName the string name of the Property in the given Property Set\n@param OnModified this delegate will be called if the Property value changes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableInteractiveTool_WatchIntProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableInteractiveTool, nullptr, "WatchIntProperty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScriptableInteractiveTool_WatchIntProperty_Statics::ScriptableInteractiveTool_eventWatchIntProperty_Parms), Z_Construct_UFunction_UScriptableInteractiveTool_WatchIntProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_WatchIntProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_WatchIntProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_WatchIntProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableInteractiveTool_WatchIntProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableInteractiveTool_WatchIntProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableInteractiveTool_WatchNameProperty_Statics
	{
		struct ScriptableInteractiveTool_eventWatchNameProperty_Parms
		{
			UScriptableInteractiveToolPropertySet* PropertySet;
			FString PropertyName;
			FScriptDelegate OnModified;
			UScriptableInteractiveToolPropertySet* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PropertySet;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnModified_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnModified;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_WatchNameProperty_Statics::NewProp_PropertySet = { "PropertySet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventWatchNameProperty_Parms, PropertySet), Z_Construct_UClass_UScriptableInteractiveToolPropertySet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_WatchNameProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventWatchNameProperty_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_WatchNameProperty_Statics::NewProp_OnModified_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_WatchNameProperty_Statics::NewProp_OnModified = { "OnModified", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventWatchNameProperty_Parms, OnModified), Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolFNamePropertyModifiedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_WatchNameProperty_Statics::NewProp_OnModified_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_WatchNameProperty_Statics::NewProp_OnModified_MetaData)) }; // 3872618833
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_WatchNameProperty_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Property Set" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_WatchNameProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventWatchNameProperty_Parms, ReturnValue), Z_Construct_UClass_UScriptableInteractiveToolPropertySet_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_WatchNameProperty_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_WatchNameProperty_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableInteractiveTool_WatchNameProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_WatchNameProperty_Statics::NewProp_PropertySet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_WatchNameProperty_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_WatchNameProperty_Statics::NewProp_OnModified,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_WatchNameProperty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_WatchNameProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool|PropertySets" },
		{ "Comment", "/**\n\x09 * Watch an (F)Name-valued Property for changes\n\x09 * @param PropertySet the Property Set which contains the desired Property to watch.\n\x09 * @param PropertyName the string name of the Property in the given Property Set\n\x09 * @param OnModified this delegate will be called if the Property value changes.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "ToolTip", "Watch an (F)Name-valued Property for changes\n@param PropertySet the Property Set which contains the desired Property to watch.\n@param PropertyName the string name of the Property in the given Property Set\n@param OnModified this delegate will be called if the Property value changes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableInteractiveTool_WatchNameProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableInteractiveTool, nullptr, "WatchNameProperty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScriptableInteractiveTool_WatchNameProperty_Statics::ScriptableInteractiveTool_eventWatchNameProperty_Parms), Z_Construct_UFunction_UScriptableInteractiveTool_WatchNameProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_WatchNameProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_WatchNameProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_WatchNameProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableInteractiveTool_WatchNameProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableInteractiveTool_WatchNameProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableInteractiveTool_WatchObjectProperty_Statics
	{
		struct ScriptableInteractiveTool_eventWatchObjectProperty_Parms
		{
			UScriptableInteractiveToolPropertySet* PropertySet;
			FString PropertyName;
			FScriptDelegate OnModified;
			UScriptableInteractiveToolPropertySet* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PropertySet;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnModified_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnModified;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_WatchObjectProperty_Statics::NewProp_PropertySet = { "PropertySet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventWatchObjectProperty_Parms, PropertySet), Z_Construct_UClass_UScriptableInteractiveToolPropertySet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_WatchObjectProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventWatchObjectProperty_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_WatchObjectProperty_Statics::NewProp_OnModified_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_WatchObjectProperty_Statics::NewProp_OnModified = { "OnModified", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventWatchObjectProperty_Parms, OnModified), Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolObjectPropertyModifiedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_WatchObjectProperty_Statics::NewProp_OnModified_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_WatchObjectProperty_Statics::NewProp_OnModified_MetaData)) }; // 2492062879
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_WatchObjectProperty_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Property Set" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_WatchObjectProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventWatchObjectProperty_Parms, ReturnValue), Z_Construct_UClass_UScriptableInteractiveToolPropertySet_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_WatchObjectProperty_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_WatchObjectProperty_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableInteractiveTool_WatchObjectProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_WatchObjectProperty_Statics::NewProp_PropertySet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_WatchObjectProperty_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_WatchObjectProperty_Statics::NewProp_OnModified,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_WatchObjectProperty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_WatchObjectProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool|PropertySets" },
		{ "Comment", "/**\n\x09 * Watch an Object-valued Property for changes (ie UObject, UClass, etc)\n\x09 * @param PropertySet the Property Set which contains the desired Property to watch.\n\x09 * @param PropertyName the string name of the Property in the given Property Set\n\x09 * @param OnModified this delegate will be called if the Property value changes.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "ToolTip", "Watch an Object-valued Property for changes (ie UObject, UClass, etc)\n@param PropertySet the Property Set which contains the desired Property to watch.\n@param PropertyName the string name of the Property in the given Property Set\n@param OnModified this delegate will be called if the Property value changes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableInteractiveTool_WatchObjectProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableInteractiveTool, nullptr, "WatchObjectProperty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScriptableInteractiveTool_WatchObjectProperty_Statics::ScriptableInteractiveTool_eventWatchObjectProperty_Parms), Z_Construct_UFunction_UScriptableInteractiveTool_WatchObjectProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_WatchObjectProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_WatchObjectProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_WatchObjectProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableInteractiveTool_WatchObjectProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableInteractiveTool_WatchObjectProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableInteractiveTool_WatchProperty_Statics
	{
		struct ScriptableInteractiveTool_eventWatchProperty_Parms
		{
			UScriptableInteractiveToolPropertySet* PropertySet;
			FString PropertyName;
			FScriptDelegate OnModified;
			UScriptableInteractiveToolPropertySet* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PropertySet;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnModified_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnModified;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_WatchProperty_Statics::NewProp_PropertySet = { "PropertySet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventWatchProperty_Parms, PropertySet), Z_Construct_UClass_UScriptableInteractiveToolPropertySet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_WatchProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventWatchProperty_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_WatchProperty_Statics::NewProp_OnModified_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_WatchProperty_Statics::NewProp_OnModified = { "OnModified", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventWatchProperty_Parms, OnModified), Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolPropertyModifiedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_WatchProperty_Statics::NewProp_OnModified_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_WatchProperty_Statics::NewProp_OnModified_MetaData)) }; // 2830108458
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_WatchProperty_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Property Set" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_WatchProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventWatchProperty_Parms, ReturnValue), Z_Construct_UClass_UScriptableInteractiveToolPropertySet_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_WatchProperty_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_WatchProperty_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableInteractiveTool_WatchProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_WatchProperty_Statics::NewProp_PropertySet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_WatchProperty_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_WatchProperty_Statics::NewProp_OnModified,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_WatchProperty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_WatchProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool|PropertySets" },
		{ "Comment", "/**\n\x09 * Watch any Property in a PropertySet for changes. This function handles most basic\n\x09 * properties, as well as Struct and Array properties, at some cost. The OnModified\n\x09 * delegate cannot be passed the new property value, it must be fetched from the PropertySet.\n\x09 * \n\x09 * Note also that in the case of Structs and Arrays, changes are currently detected by hashes,\n\x09 * and there is always a small chance of hash collision.\n\x09 * \n\x09 * @param PropertySet the Property Set which contains the desired Property to watch.\n\x09 * @param PropertyName the string name of the Property in the given Property Set\n\x09 * @param OnModified this delegate will be called if the Property value changes.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "ToolTip", "Watch any Property in a PropertySet for changes. This function handles most basic\nproperties, as well as Struct and Array properties, at some cost. The OnModified\ndelegate cannot be passed the new property value, it must be fetched from the PropertySet.\n\nNote also that in the case of Structs and Arrays, changes are currently detected by hashes,\nand there is always a small chance of hash collision.\n\n@param PropertySet the Property Set which contains the desired Property to watch.\n@param PropertyName the string name of the Property in the given Property Set\n@param OnModified this delegate will be called if the Property value changes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableInteractiveTool_WatchProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableInteractiveTool, nullptr, "WatchProperty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScriptableInteractiveTool_WatchProperty_Statics::ScriptableInteractiveTool_eventWatchProperty_Parms), Z_Construct_UFunction_UScriptableInteractiveTool_WatchProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_WatchProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_WatchProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_WatchProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableInteractiveTool_WatchProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableInteractiveTool_WatchProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableInteractiveTool_WatchStringProperty_Statics
	{
		struct ScriptableInteractiveTool_eventWatchStringProperty_Parms
		{
			UScriptableInteractiveToolPropertySet* PropertySet;
			FString PropertyName;
			FScriptDelegate OnModified;
			UScriptableInteractiveToolPropertySet* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PropertySet;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnModified_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnModified;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_WatchStringProperty_Statics::NewProp_PropertySet = { "PropertySet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventWatchStringProperty_Parms, PropertySet), Z_Construct_UClass_UScriptableInteractiveToolPropertySet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_WatchStringProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventWatchStringProperty_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_WatchStringProperty_Statics::NewProp_OnModified_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_WatchStringProperty_Statics::NewProp_OnModified = { "OnModified", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventWatchStringProperty_Parms, OnModified), Z_Construct_UDelegateFunction_ScriptableToolsFramework_ToolStringPropertyModifiedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_WatchStringProperty_Statics::NewProp_OnModified_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_WatchStringProperty_Statics::NewProp_OnModified_MetaData)) }; // 4283394460
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_WatchStringProperty_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Property Set" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScriptableInteractiveTool_WatchStringProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableInteractiveTool_eventWatchStringProperty_Parms, ReturnValue), Z_Construct_UClass_UScriptableInteractiveToolPropertySet_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_WatchStringProperty_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_WatchStringProperty_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableInteractiveTool_WatchStringProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_WatchStringProperty_Statics::NewProp_PropertySet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_WatchStringProperty_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_WatchStringProperty_Statics::NewProp_OnModified,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableInteractiveTool_WatchStringProperty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableInteractiveTool_WatchStringProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool|PropertySets" },
		{ "Comment", "/**\n\x09 * Watch a String-valued Property for changes\n\x09 * @param PropertySet the Property Set which contains the desired Property to watch.\n\x09 * @param PropertyName the string name of the Property in the given Property Set\n\x09 * @param OnModified this delegate will be called if the Property value changes.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "ToolTip", "Watch a String-valued Property for changes\n@param PropertySet the Property Set which contains the desired Property to watch.\n@param PropertyName the string name of the Property in the given Property Set\n@param OnModified this delegate will be called if the Property value changes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableInteractiveTool_WatchStringProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableInteractiveTool, nullptr, "WatchStringProperty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScriptableInteractiveTool_WatchStringProperty_Statics::ScriptableInteractiveTool_eventWatchStringProperty_Parms), Z_Construct_UFunction_UScriptableInteractiveTool_WatchStringProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_WatchStringProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableInteractiveTool_WatchStringProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableInteractiveTool_WatchStringProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableInteractiveTool_WatchStringProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableInteractiveTool_WatchStringProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScriptableInteractiveTool);
	UClass* Z_Construct_UClass_UScriptableInteractiveTool_NoRegister()
	{
		return UScriptableInteractiveTool::StaticClass();
	}
	struct Z_Construct_UClass_UScriptableInteractiveTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ToolName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolLongName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ToolLongName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolCategory_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ToolCategory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolTooltip_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ToolTooltip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowToolInEditor_MetaData[];
#endif
		static void NewProp_bShowToolInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowToolInEditor;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ToolShutdownType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolShutdownType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ToolShutdownType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetWorld_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TargetWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderHelper_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RenderHelper;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawHUDHelper_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DrawHUDHelper;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Gizmos_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Gizmos_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gizmos_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Gizmos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScriptableInteractiveTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveTool,
		(UObject* (*)())Z_Construct_UPackage__Script_ScriptableToolsFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UScriptableInteractiveTool_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UScriptableInteractiveTool_AddLogMessage, "AddLogMessage" }, // 3379009319
		{ &Z_Construct_UFunction_UScriptableInteractiveTool_AddPropertySetOfType, "AddPropertySetOfType" }, // 1910647029
		{ &Z_Construct_UFunction_UScriptableInteractiveTool_ClearUserMessages, "ClearUserMessages" }, // 736250657
		{ &Z_Construct_UFunction_UScriptableInteractiveTool_CreateTRSGizmo, "CreateTRSGizmo" }, // 3390168746
		{ &Z_Construct_UFunction_UScriptableInteractiveTool_DestroyTRSGizmo, "DestroyTRSGizmo" }, // 3311444385
		{ &Z_Construct_UFunction_UScriptableInteractiveTool_DisplayUserHelpMessage, "DisplayUserHelpMessage" }, // 3424307508
		{ &Z_Construct_UFunction_UScriptableInteractiveTool_DisplayUserWarningMessage, "DisplayUserWarningMessage" }, // 1152792594
		{ &Z_Construct_UFunction_UScriptableInteractiveTool_ForcePropertySetUpdateByName, "ForcePropertySetUpdateByName" }, // 1831180388
		{ &Z_Construct_UFunction_UScriptableInteractiveTool_GetGizmoTransform, "GetGizmoTransform" }, // 1075612656
		{ &Z_Construct_UFunction_UScriptableInteractiveTool_GetToolWorld, "GetToolWorld" }, // 3351759849
		{ &Z_Construct_UFunction_UScriptableInteractiveTool_OnGizmoTransformChanged, "OnGizmoTransformChanged" }, // 2447066404
		{ &Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptCanAccept, "OnScriptCanAccept" }, // 3518541364
		{ &Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptDrawHUD, "OnScriptDrawHUD" }, // 2474494081
		{ &Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptRender, "OnScriptRender" }, // 1841519671
		{ &Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptSetup, "OnScriptSetup" }, // 3979213662
		{ &Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptShutdown, "OnScriptShutdown" }, // 679911337
		{ &Z_Construct_UFunction_UScriptableInteractiveTool_OnScriptTick, "OnScriptTick" }, // 2376699307
		{ &Z_Construct_UFunction_UScriptableInteractiveTool_RemovePropertySetByName, "RemovePropertySetByName" }, // 3832607773
		{ &Z_Construct_UFunction_UScriptableInteractiveTool_RequestToolShutdown, "RequestToolShutdown" }, // 2894966032
		{ &Z_Construct_UFunction_UScriptableInteractiveTool_RestorePropertySetSettings, "RestorePropertySetSettings" }, // 1180869744
		{ &Z_Construct_UFunction_UScriptableInteractiveTool_SavePropertySetSettings, "SavePropertySetSettings" }, // 1961119752
		{ &Z_Construct_UFunction_UScriptableInteractiveTool_SetGizmoTransform, "SetGizmoTransform" }, // 2442734886
		{ &Z_Construct_UFunction_UScriptableInteractiveTool_SetGizmoVisible, "SetGizmoVisible" }, // 2413930892
		{ &Z_Construct_UFunction_UScriptableInteractiveTool_SetPropertySetVisibleByName, "SetPropertySetVisibleByName" }, // 2360262670
		{ &Z_Construct_UFunction_UScriptableInteractiveTool_WatchBoolProperty, "WatchBoolProperty" }, // 1804686657
		{ &Z_Construct_UFunction_UScriptableInteractiveTool_WatchEnumProperty, "WatchEnumProperty" }, // 131109804
		{ &Z_Construct_UFunction_UScriptableInteractiveTool_WatchFloatProperty, "WatchFloatProperty" }, // 1528991047
		{ &Z_Construct_UFunction_UScriptableInteractiveTool_WatchIntProperty, "WatchIntProperty" }, // 170177389
		{ &Z_Construct_UFunction_UScriptableInteractiveTool_WatchNameProperty, "WatchNameProperty" }, // 2713439660
		{ &Z_Construct_UFunction_UScriptableInteractiveTool_WatchObjectProperty, "WatchObjectProperty" }, // 2020708788
		{ &Z_Construct_UFunction_UScriptableInteractiveTool_WatchProperty, "WatchProperty" }, // 1771589705
		{ &Z_Construct_UFunction_UScriptableInteractiveTool_WatchStringProperty, "WatchStringProperty" }, // 974155829
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScriptableInteractiveTool_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * UScriptableInteractiveTool is an extension of UInteractiveTool that allows the Tool functionality to be \n * defined via Blueprints. \n */" },
		{ "IncludePath", "ScriptableInteractiveTool.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "ToolTip", "UScriptableInteractiveTool is an extension of UInteractiveTool that allows the Tool functionality to be\ndefined via Blueprints." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_ToolName_MetaData[] = {
		{ "Category", "Scriptable Tool Settings" },
		{ "Comment", "/** Name of this Tool, will be used in (eg) Toolbars */" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "ToolTip", "Name of this Tool, will be used in (eg) Toolbars" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_ToolName = { "ToolName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScriptableInteractiveTool, ToolName), METADATA_PARAMS(Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_ToolName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_ToolName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_ToolLongName_MetaData[] = {
		{ "Category", "Scriptable Tool Settings" },
		{ "Comment", "/** Long Name of this Tool, will be used in (eg) longer labels like the Accept/Cancel toolbar */" },
		{ "DisplayName", "Long Name" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "ToolTip", "Long Name of this Tool, will be used in (eg) longer labels like the Accept/Cancel toolbar" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_ToolLongName = { "ToolLongName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScriptableInteractiveTool, ToolLongName), METADATA_PARAMS(Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_ToolLongName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_ToolLongName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_ToolCategory_MetaData[] = {
		{ "Category", "Scriptable Tool Settings" },
		{ "Comment", "/** Category of this Tool, will be used in (eg) Tool Palette Section headers */" },
		{ "DisplayName", "Category" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "ToolTip", "Category of this Tool, will be used in (eg) Tool Palette Section headers" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_ToolCategory = { "ToolCategory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScriptableInteractiveTool, ToolCategory), METADATA_PARAMS(Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_ToolCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_ToolCategory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_ToolTooltip_MetaData[] = {
		{ "Category", "Scriptable Tool Settings" },
		{ "Comment", "/** Tooltip used for this Tool in (eg) icons/etc */" },
		{ "DisplayName", "Tooltip" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "ToolTip", "Tooltip used for this Tool in (eg) icons/etc" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_ToolTooltip = { "ToolTooltip", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScriptableInteractiveTool, ToolTooltip), METADATA_PARAMS(Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_ToolTooltip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_ToolTooltip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_bShowToolInEditor_MetaData[] = {
		{ "Category", "Scriptable Tool Settings" },
		{ "Comment", "/** A generic flag to indicate whether this Tool should be shown in the UE Editor. This may be interpreted in different ways */" },
		{ "DisplayName", "Visible in Editor" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "ToolTip", "A generic flag to indicate whether this Tool should be shown in the UE Editor. This may be interpreted in different ways" },
	};
#endif
	void Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_bShowToolInEditor_SetBit(void* Obj)
	{
		((UScriptableInteractiveTool*)Obj)->bShowToolInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_bShowToolInEditor = { "bShowToolInEditor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UScriptableInteractiveTool), &Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_bShowToolInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_bShowToolInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_bShowToolInEditor_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_ToolShutdownType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_ToolShutdownType_MetaData[] = {
		{ "Category", "Scriptable Tool Settings" },
		{ "Comment", "/** Specifies how the user exits this Tool, either Accept/Cancel-style or Complete-style */" },
		{ "DisplayName", "Shutdown Type" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "ToolTip", "Specifies how the user exits this Tool, either Accept/Cancel-style or Complete-style" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_ToolShutdownType = { "ToolShutdownType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScriptableInteractiveTool, ToolShutdownType), Z_Construct_UEnum_ScriptableToolsFramework_EScriptableToolShutdownType, METADATA_PARAMS(Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_ToolShutdownType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_ToolShutdownType_MetaData)) }; // 2191396456
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_TargetWorld_MetaData[] = {
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_TargetWorld = { "TargetWorld", nullptr, (EPropertyFlags)0x00a4080400202000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScriptableInteractiveTool, TargetWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_TargetWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_TargetWorld_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_RenderHelper_MetaData[] = {
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_RenderHelper = { "RenderHelper", nullptr, (EPropertyFlags)0x00a4080400202000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScriptableInteractiveTool, RenderHelper), Z_Construct_UClass_UScriptableTool_RenderAPI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_RenderHelper_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_RenderHelper_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_DrawHUDHelper_MetaData[] = {
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_DrawHUDHelper = { "DrawHUDHelper", nullptr, (EPropertyFlags)0x00a4080400202000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScriptableInteractiveTool, DrawHUDHelper), Z_Construct_UClass_UScriptableTool_HUDAPI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_DrawHUDHelper_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_DrawHUDHelper_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_Gizmos_ValueProp = { "Gizmos", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UCombinedTransformGizmo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_Gizmos_Key_KeyProp = { "Gizmos_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_Gizmos_MetaData[] = {
		{ "Comment", "// trying to avoid making a UStruct for this internal stuff\n" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "ToolTip", "trying to avoid making a UStruct for this internal stuff" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_Gizmos = { "Gizmos", nullptr, (EPropertyFlags)0x00a4080400202000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScriptableInteractiveTool, Gizmos), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_Gizmos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_Gizmos_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScriptableInteractiveTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_ToolName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_ToolLongName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_ToolCategory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_ToolTooltip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_bShowToolInEditor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_ToolShutdownType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_ToolShutdownType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_TargetWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_RenderHelper,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_DrawHUDHelper,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_Gizmos_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_Gizmos_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScriptableInteractiveTool_Statics::NewProp_Gizmos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScriptableInteractiveTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScriptableInteractiveTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UScriptableInteractiveTool_Statics::ClassParams = {
		&UScriptableInteractiveTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UScriptableInteractiveTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UScriptableInteractiveTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UScriptableInteractiveTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScriptableInteractiveTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScriptableInteractiveTool()
	{
		if (!Z_Registration_Info_UClass_UScriptableInteractiveTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScriptableInteractiveTool.OuterSingleton, Z_Construct_UClass_UScriptableInteractiveTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UScriptableInteractiveTool.OuterSingleton;
	}
	template<> SCRIPTABLETOOLSFRAMEWORK_API UClass* StaticClass<UScriptableInteractiveTool>()
	{
		return UScriptableInteractiveTool::StaticClass();
	}
	UScriptableInteractiveTool::UScriptableInteractiveTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScriptableInteractiveTool);
	UScriptableInteractiveTool::~UScriptableInteractiveTool() {}
	DEFINE_FUNCTION(UScriptableToolsUtilityLibrary::execMakeInputRayHit)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_HitDepth);
		P_GET_OBJECT(UObject,Z_Param_OptionalHitObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputRayHit*)Z_Param__Result=UScriptableToolsUtilityLibrary::MakeInputRayHit(Z_Param_HitDepth,Z_Param_OptionalHitObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableToolsUtilityLibrary::execMakeInputRayHit_MaxDepth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputRayHit*)Z_Param__Result=UScriptableToolsUtilityLibrary::MakeInputRayHit_MaxDepth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableToolsUtilityLibrary::execMakeInputRayHit_Miss)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputRayHit*)Z_Param__Result=UScriptableToolsUtilityLibrary::MakeInputRayHit_Miss();
		P_NATIVE_END;
	}
	void UScriptableToolsUtilityLibrary::StaticRegisterNativesUScriptableToolsUtilityLibrary()
	{
		UClass* Class = UScriptableToolsUtilityLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MakeInputRayHit", &UScriptableToolsUtilityLibrary::execMakeInputRayHit },
			{ "MakeInputRayHit_MaxDepth", &UScriptableToolsUtilityLibrary::execMakeInputRayHit_MaxDepth },
			{ "MakeInputRayHit_Miss", &UScriptableToolsUtilityLibrary::execMakeInputRayHit_Miss },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_Statics
	{
		struct ScriptableToolsUtilityLibrary_eventMakeInputRayHit_Parms
		{
			double HitDepth;
			UObject* OptionalHitObject;
			FInputRayHit ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_HitDepth;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalHitObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_Statics::NewProp_HitDepth = { "HitDepth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableToolsUtilityLibrary_eventMakeInputRayHit_Parms, HitDepth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_Statics::NewProp_OptionalHitObject = { "OptionalHitObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableToolsUtilityLibrary_eventMakeInputRayHit_Parms, OptionalHitObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "RayHit Result" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableToolsUtilityLibrary_eventMakeInputRayHit_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputRayHit, METADATA_PARAMS(Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_Statics::NewProp_ReturnValue_MetaData)) }; // 1802974795
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_Statics::NewProp_HitDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_Statics::NewProp_OptionalHitObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool|Util" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableToolsUtilityLibrary, nullptr, "MakeInputRayHit", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_Statics::ScriptableToolsUtilityLibrary_eventMakeInputRayHit_Parms), Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_MaxDepth_Statics
	{
		struct ScriptableToolsUtilityLibrary_eventMakeInputRayHit_MaxDepth_Parms
		{
			FInputRayHit ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_MaxDepth_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "RayHit Result" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_MaxDepth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableToolsUtilityLibrary_eventMakeInputRayHit_MaxDepth_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputRayHit, METADATA_PARAMS(Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_MaxDepth_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_MaxDepth_Statics::NewProp_ReturnValue_MetaData)) }; // 1802974795
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_MaxDepth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_MaxDepth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_MaxDepth_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool|Util" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_MaxDepth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableToolsUtilityLibrary, nullptr, "MakeInputRayHit_MaxDepth", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_MaxDepth_Statics::ScriptableToolsUtilityLibrary_eventMakeInputRayHit_MaxDepth_Parms), Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_MaxDepth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_MaxDepth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_MaxDepth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_MaxDepth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_MaxDepth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_MaxDepth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_Miss_Statics
	{
		struct ScriptableToolsUtilityLibrary_eventMakeInputRayHit_Miss_Parms
		{
			FInputRayHit ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_Miss_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "RayHit Result" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_Miss_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableToolsUtilityLibrary_eventMakeInputRayHit_Miss_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputRayHit, METADATA_PARAMS(Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_Miss_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_Miss_Statics::NewProp_ReturnValue_MetaData)) }; // 1802974795
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_Miss_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_Miss_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_Miss_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool|Util" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_Miss_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableToolsUtilityLibrary, nullptr, "MakeInputRayHit_Miss", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_Miss_Statics::ScriptableToolsUtilityLibrary_eventMakeInputRayHit_Miss_Parms), Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_Miss_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_Miss_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_Miss_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_Miss_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_Miss()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_Miss_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScriptableToolsUtilityLibrary);
	UClass* Z_Construct_UClass_UScriptableToolsUtilityLibrary_NoRegister()
	{
		return UScriptableToolsUtilityLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UScriptableToolsUtilityLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScriptableToolsUtilityLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ScriptableToolsFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UScriptableToolsUtilityLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit, "MakeInputRayHit" }, // 4206512595
		{ &Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_MaxDepth, "MakeInputRayHit_MaxDepth" }, // 1987367167
		{ &Z_Construct_UFunction_UScriptableToolsUtilityLibrary_MakeInputRayHit_Miss, "MakeInputRayHit_Miss" }, // 1376494562
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScriptableToolsUtilityLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ScriptableInteractiveTool.h" },
		{ "ModuleRelativePath", "Public/ScriptableInteractiveTool.h" },
		{ "ScriptName", "ScriptableTools_Util" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScriptableToolsUtilityLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScriptableToolsUtilityLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UScriptableToolsUtilityLibrary_Statics::ClassParams = {
		&UScriptableToolsUtilityLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UScriptableToolsUtilityLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScriptableToolsUtilityLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScriptableToolsUtilityLibrary()
	{
		if (!Z_Registration_Info_UClass_UScriptableToolsUtilityLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScriptableToolsUtilityLibrary.OuterSingleton, Z_Construct_UClass_UScriptableToolsUtilityLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UScriptableToolsUtilityLibrary.OuterSingleton;
	}
	template<> SCRIPTABLETOOLSFRAMEWORK_API UClass* StaticClass<UScriptableToolsUtilityLibrary>()
	{
		return UScriptableToolsUtilityLibrary::StaticClass();
	}
	UScriptableToolsUtilityLibrary::UScriptableToolsUtilityLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScriptableToolsUtilityLibrary);
	UScriptableToolsUtilityLibrary::~UScriptableToolsUtilityLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_Statics::EnumInfo[] = {
		{ EToolsFrameworkOutcomePins_StaticEnum, TEXT("EToolsFrameworkOutcomePins"), &Z_Registration_Info_UEnum_EToolsFrameworkOutcomePins, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2937799865U) },
		{ EScriptableToolShutdownType_StaticEnum, TEXT("EScriptableToolShutdownType"), &Z_Registration_Info_UEnum_EScriptableToolShutdownType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2191396456U) },
		{ EScriptableToolGizmoMode_StaticEnum, TEXT("EScriptableToolGizmoMode"), &Z_Registration_Info_UEnum_EScriptableToolGizmoMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1968345091U) },
		{ EScriptableToolGizmoCoordinateSystem_StaticEnum, TEXT("EScriptableToolGizmoCoordinateSystem"), &Z_Registration_Info_UEnum_EScriptableToolGizmoCoordinateSystem, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3932158487U) },
		{ EScriptableToolGizmoTranslation_StaticEnum, TEXT("EScriptableToolGizmoTranslation"), &Z_Registration_Info_UEnum_EScriptableToolGizmoTranslation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2270128310U) },
		{ EScriptableToolGizmoRotation_StaticEnum, TEXT("EScriptableToolGizmoRotation"), &Z_Registration_Info_UEnum_EScriptableToolGizmoRotation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 813677910U) },
		{ EScriptableToolGizmoScale_StaticEnum, TEXT("EScriptableToolGizmoScale"), &Z_Registration_Info_UEnum_EScriptableToolGizmoScale, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 767726909U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_Statics::ScriptStructInfo[] = {
		{ FScriptableToolModifierStates::StaticStruct, Z_Construct_UScriptStruct_FScriptableToolModifierStates_Statics::NewStructOps, TEXT("ScriptableToolModifierStates"), &Z_Registration_Info_UScriptStruct_ScriptableToolModifierStates, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScriptableToolModifierStates), 1925515539U) },
		{ FScriptableToolGizmoOptions::StaticStruct, Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics::NewStructOps, TEXT("ScriptableToolGizmoOptions"), &Z_Registration_Info_UScriptStruct_ScriptableToolGizmoOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScriptableToolGizmoOptions), 2231529458U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UScriptableTool_RenderAPI, UScriptableTool_RenderAPI::StaticClass, TEXT("UScriptableTool_RenderAPI"), &Z_Registration_Info_UClass_UScriptableTool_RenderAPI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScriptableTool_RenderAPI), 1038189352U) },
		{ Z_Construct_UClass_UScriptableTool_HUDAPI, UScriptableTool_HUDAPI::StaticClass, TEXT("UScriptableTool_HUDAPI"), &Z_Registration_Info_UClass_UScriptableTool_HUDAPI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScriptableTool_HUDAPI), 4089979128U) },
		{ Z_Construct_UClass_UScriptableInteractiveToolPropertySet, UScriptableInteractiveToolPropertySet::StaticClass, TEXT("UScriptableInteractiveToolPropertySet"), &Z_Registration_Info_UClass_UScriptableInteractiveToolPropertySet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScriptableInteractiveToolPropertySet), 2163397930U) },
		{ Z_Construct_UClass_UScriptableInteractiveTool, UScriptableInteractiveTool::StaticClass, TEXT("UScriptableInteractiveTool"), &Z_Registration_Info_UClass_UScriptableInteractiveTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScriptableInteractiveTool), 2305358011U) },
		{ Z_Construct_UClass_UScriptableToolsUtilityLibrary, UScriptableToolsUtilityLibrary::StaticClass, TEXT("UScriptableToolsUtilityLibrary"), &Z_Registration_Info_UClass_UScriptableToolsUtilityLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScriptableToolsUtilityLibrary), 3537215318U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_2754709480(TEXT("/Script/ScriptableToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
