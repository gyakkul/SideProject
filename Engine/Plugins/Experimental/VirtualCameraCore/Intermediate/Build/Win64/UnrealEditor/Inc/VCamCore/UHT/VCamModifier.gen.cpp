// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modifier/VCamModifier.h"
#include "Roles/LiveLinkCameraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVCamModifier() {}
// Cross Module References
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_UCineCameraComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData();
	UPackage* Z_Construct_UPackage__Script_VCamCore();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamBlueprintModifier();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamBlueprintModifier_NoRegister();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamComponent_NoRegister();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamModifier();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamModifier_NoRegister();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamModifierContext_NoRegister();
	VCAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FVCamModifierConnectionPoint();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VCamModifierConnectionPoint;
class UScriptStruct* FVCamModifierConnectionPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VCamModifierConnectionPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VCamModifierConnectionPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVCamModifierConnectionPoint, (UObject*)Z_Construct_UPackage__Script_VCamCore(), TEXT("VCamModifierConnectionPoint"));
	}
	return Z_Registration_Info_UScriptStruct_VCamModifierConnectionPoint.OuterSingleton;
}
template<> VCAMCORE_API UScriptStruct* StaticStruct<FVCamModifierConnectionPoint>()
{
	return FVCamModifierConnectionPoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVCamModifierConnectionPoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssociatedAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssociatedAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVCamModifierConnectionPoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Modifier/VCamModifier.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVCamModifierConnectionPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVCamModifierConnectionPoint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVCamModifierConnectionPoint_Statics::NewProp_AssociatedAction_MetaData[] = {
		{ "Category", "Connection" },
		{ "Comment", "// An optional action to associate with this connection point\n" },
		{ "ModuleRelativePath", "Public/Modifier/VCamModifier.h" },
		{ "ToolTip", "An optional action to associate with this connection point" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FVCamModifierConnectionPoint_Statics::NewProp_AssociatedAction = { "AssociatedAction", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVCamModifierConnectionPoint, AssociatedAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVCamModifierConnectionPoint_Statics::NewProp_AssociatedAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVCamModifierConnectionPoint_Statics::NewProp_AssociatedAction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVCamModifierConnectionPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVCamModifierConnectionPoint_Statics::NewProp_AssociatedAction,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVCamModifierConnectionPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VCamCore,
		nullptr,
		&NewStructOps,
		"VCamModifierConnectionPoint",
		sizeof(FVCamModifierConnectionPoint),
		alignof(FVCamModifierConnectionPoint),
		Z_Construct_UScriptStruct_FVCamModifierConnectionPoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVCamModifierConnectionPoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVCamModifierConnectionPoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVCamModifierConnectionPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVCamModifierConnectionPoint()
	{
		if (!Z_Registration_Info_UScriptStruct_VCamModifierConnectionPoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VCamModifierConnectionPoint.InnerSingleton, Z_Construct_UScriptStruct_FVCamModifierConnectionPoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VCamModifierConnectionPoint.InnerSingleton;
	}
	DEFINE_FUNCTION(UVCamModifier::execGetStackEntryName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetStackEntryName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamModifier::execSetStackEntryName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NewName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetStackEntryName(Z_Param_NewName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamModifier::execIsEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamModifier::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_bNewEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnabled(Z_Param_bNewEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamModifier::execGetCurrentLiveLinkDataFromOwningComponent)
	{
		P_GET_STRUCT_REF(FLiveLinkCameraBlueprintData,Z_Param_Out_LiveLinkData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCurrentLiveLinkDataFromOwningComponent(Z_Param_Out_LiveLinkData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamModifier::execGetOwningVCamComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVCamComponent**)Z_Param__Result=P_THIS->GetOwningVCamComponent();
		P_NATIVE_END;
	}
	void UVCamModifier::StaticRegisterNativesUVCamModifier()
	{
		UClass* Class = UVCamModifier::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentLiveLinkDataFromOwningComponent", &UVCamModifier::execGetCurrentLiveLinkDataFromOwningComponent },
			{ "GetOwningVCamComponent", &UVCamModifier::execGetOwningVCamComponent },
			{ "GetStackEntryName", &UVCamModifier::execGetStackEntryName },
			{ "IsEnabled", &UVCamModifier::execIsEnabled },
			{ "SetEnabled", &UVCamModifier::execSetEnabled },
			{ "SetStackEntryName", &UVCamModifier::execSetStackEntryName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVCamModifier_GetCurrentLiveLinkDataFromOwningComponent_Statics
	{
		struct VCamModifier_eventGetCurrentLiveLinkDataFromOwningComponent_Parms
		{
			FLiveLinkCameraBlueprintData LiveLinkData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LiveLinkData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVCamModifier_GetCurrentLiveLinkDataFromOwningComponent_Statics::NewProp_LiveLinkData = { "LiveLinkData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamModifier_eventGetCurrentLiveLinkDataFromOwningComponent_Parms, LiveLinkData), Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData, METADATA_PARAMS(nullptr, 0) }; // 3001212355
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamModifier_GetCurrentLiveLinkDataFromOwningComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamModifier_GetCurrentLiveLinkDataFromOwningComponent_Statics::NewProp_LiveLinkData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamModifier_GetCurrentLiveLinkDataFromOwningComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "ModuleRelativePath", "Public/Modifier/VCamModifier.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamModifier_GetCurrentLiveLinkDataFromOwningComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamModifier, nullptr, "GetCurrentLiveLinkDataFromOwningComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamModifier_GetCurrentLiveLinkDataFromOwningComponent_Statics::VCamModifier_eventGetCurrentLiveLinkDataFromOwningComponent_Parms), Z_Construct_UFunction_UVCamModifier_GetCurrentLiveLinkDataFromOwningComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamModifier_GetCurrentLiveLinkDataFromOwningComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamModifier_GetCurrentLiveLinkDataFromOwningComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamModifier_GetCurrentLiveLinkDataFromOwningComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamModifier_GetCurrentLiveLinkDataFromOwningComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamModifier_GetCurrentLiveLinkDataFromOwningComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamModifier_GetOwningVCamComponent_Statics
	{
		struct VCamModifier_eventGetOwningVCamComponent_Parms
		{
			UVCamComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamModifier_GetOwningVCamComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVCamModifier_GetOwningVCamComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamModifier_eventGetOwningVCamComponent_Parms, ReturnValue), Z_Construct_UClass_UVCamComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVCamModifier_GetOwningVCamComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamModifier_GetOwningVCamComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamModifier_GetOwningVCamComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamModifier_GetOwningVCamComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamModifier_GetOwningVCamComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "ModuleRelativePath", "Public/Modifier/VCamModifier.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamModifier_GetOwningVCamComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamModifier, nullptr, "GetOwningVCamComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamModifier_GetOwningVCamComponent_Statics::VCamModifier_eventGetOwningVCamComponent_Parms), Z_Construct_UFunction_UVCamModifier_GetOwningVCamComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamModifier_GetOwningVCamComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamModifier_GetOwningVCamComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamModifier_GetOwningVCamComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamModifier_GetOwningVCamComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamModifier_GetOwningVCamComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamModifier_GetStackEntryName_Statics
	{
		struct VCamModifier_eventGetStackEntryName_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVCamModifier_GetStackEntryName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamModifier_eventGetStackEntryName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamModifier_GetStackEntryName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamModifier_GetStackEntryName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamModifier_GetStackEntryName_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "// Gets the name of the modifier in the associated modifier stack\n" },
		{ "ModuleRelativePath", "Public/Modifier/VCamModifier.h" },
		{ "ReturnDisplayName", "Name" },
		{ "ToolTip", "Gets the name of the modifier in the associated modifier stack" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamModifier_GetStackEntryName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamModifier, nullptr, "GetStackEntryName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamModifier_GetStackEntryName_Statics::VCamModifier_eventGetStackEntryName_Parms), Z_Construct_UFunction_UVCamModifier_GetStackEntryName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamModifier_GetStackEntryName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamModifier_GetStackEntryName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamModifier_GetStackEntryName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamModifier_GetStackEntryName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamModifier_GetStackEntryName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamModifier_IsEnabled_Statics
	{
		struct VCamModifier_eventIsEnabled_Parms
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
	void Z_Construct_UFunction_UVCamModifier_IsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VCamModifier_eventIsEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVCamModifier_IsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VCamModifier_eventIsEnabled_Parms), &Z_Construct_UFunction_UVCamModifier_IsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamModifier_IsEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamModifier_IsEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamModifier_IsEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "ModuleRelativePath", "Public/Modifier/VCamModifier.h" },
		{ "ReturnDisplayName", "Enabled" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamModifier_IsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamModifier, nullptr, "IsEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamModifier_IsEnabled_Statics::VCamModifier_eventIsEnabled_Parms), Z_Construct_UFunction_UVCamModifier_IsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamModifier_IsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamModifier_IsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamModifier_IsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamModifier_IsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamModifier_IsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamModifier_SetEnabled_Statics
	{
		struct VCamModifier_eventSetEnabled_Parms
		{
			bool bNewEnabled;
		};
		static void NewProp_bNewEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVCamModifier_SetEnabled_Statics::NewProp_bNewEnabled_SetBit(void* Obj)
	{
		((VCamModifier_eventSetEnabled_Parms*)Obj)->bNewEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVCamModifier_SetEnabled_Statics::NewProp_bNewEnabled = { "bNewEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VCamModifier_eventSetEnabled_Parms), &Z_Construct_UFunction_UVCamModifier_SetEnabled_Statics::NewProp_bNewEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamModifier_SetEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamModifier_SetEnabled_Statics::NewProp_bNewEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamModifier_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "ModuleRelativePath", "Public/Modifier/VCamModifier.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamModifier_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamModifier, nullptr, "SetEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamModifier_SetEnabled_Statics::VCamModifier_eventSetEnabled_Parms), Z_Construct_UFunction_UVCamModifier_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamModifier_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamModifier_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamModifier_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamModifier_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamModifier_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamModifier_SetStackEntryName_Statics
	{
		struct VCamModifier_eventSetStackEntryName_Parms
		{
			FName NewName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVCamModifier_SetStackEntryName_Statics::NewProp_NewName = { "NewName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamModifier_eventSetStackEntryName_Parms, NewName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVCamModifier_SetStackEntryName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VCamModifier_eventSetStackEntryName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVCamModifier_SetStackEntryName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VCamModifier_eventSetStackEntryName_Parms), &Z_Construct_UFunction_UVCamModifier_SetStackEntryName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamModifier_SetStackEntryName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamModifier_SetStackEntryName_Statics::NewProp_NewName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamModifier_SetStackEntryName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamModifier_SetStackEntryName_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "// Sets the name of the modifier in the associated modifier stack\n// Returns a bool for whether \n" },
		{ "ModuleRelativePath", "Public/Modifier/VCamModifier.h" },
		{ "ReturnDisplayName", "Success" },
		{ "ToolTip", "Sets the name of the modifier in the associated modifier stack\nReturns a bool for whether" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamModifier_SetStackEntryName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamModifier, nullptr, "SetStackEntryName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamModifier_SetStackEntryName_Statics::VCamModifier_eventSetStackEntryName_Parms), Z_Construct_UFunction_UVCamModifier_SetStackEntryName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamModifier_SetStackEntryName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamModifier_SetStackEntryName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamModifier_SetStackEntryName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamModifier_SetStackEntryName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamModifier_SetStackEntryName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVCamModifier);
	UClass* Z_Construct_UClass_UVCamModifier_NoRegister()
	{
		return UVCamModifier::StaticClass();
	}
	struct Z_Construct_UClass_UVCamModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputContextPriority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InputContextPriority;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConnectionPoints_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ConnectionPoints_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionPoints_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ConnectionPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInitialized_MetaData[];
#endif
		static void NewProp_bIsInitialized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInitialized;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVCamModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VCamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVCamModifier_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVCamModifier_GetCurrentLiveLinkDataFromOwningComponent, "GetCurrentLiveLinkDataFromOwningComponent" }, // 1633793565
		{ &Z_Construct_UFunction_UVCamModifier_GetOwningVCamComponent, "GetOwningVCamComponent" }, // 1148325402
		{ &Z_Construct_UFunction_UVCamModifier_GetStackEntryName, "GetStackEntryName" }, // 596574857
		{ &Z_Construct_UFunction_UVCamModifier_IsEnabled, "IsEnabled" }, // 3096623785
		{ &Z_Construct_UFunction_UVCamModifier_SetEnabled, "SetEnabled" }, // 3022305740
		{ &Z_Construct_UFunction_UVCamModifier_SetStackEntryName, "SetStackEntryName" }, // 3204980876
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamModifier_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Modifier/VCamModifier.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Modifier/VCamModifier.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamModifier_Statics::NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "VCam Input" },
		{ "Comment", "// If an Input Mapping Context is specified then that Context will be automatically added to the input system when this Modifier is Initialized \n" },
		{ "EditCondition", "bRegisterForInput" },
		{ "ModuleRelativePath", "Public/Modifier/VCamModifier.h" },
		{ "ToolTip", "If an Input Mapping Context is specified then that Context will be automatically added to the input system when this Modifier is Initialized" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVCamModifier_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamModifier, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVCamModifier_Statics::NewProp_InputMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamModifier_Statics::NewProp_InputMappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamModifier_Statics::NewProp_InputContextPriority_MetaData[] = {
		{ "Category", "VCam Input" },
		{ "Comment", "// If an Input Mapping Context is provided then this value defines the priority level that the context is added to the input system with\n" },
		{ "EditCondition", "bRegisterForInput" },
		{ "ModuleRelativePath", "Public/Modifier/VCamModifier.h" },
		{ "ToolTip", "If an Input Mapping Context is provided then this value defines the priority level that the context is added to the input system with" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVCamModifier_Statics::NewProp_InputContextPriority = { "InputContextPriority", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamModifier, InputContextPriority), METADATA_PARAMS(Z_Construct_UClass_UVCamModifier_Statics::NewProp_InputContextPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamModifier_Statics::NewProp_InputContextPriority_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVCamModifier_Statics::NewProp_ConnectionPoints_ValueProp = { "ConnectionPoints", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FVCamModifierConnectionPoint, METADATA_PARAMS(nullptr, 0) }; // 195368410
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVCamModifier_Statics::NewProp_ConnectionPoints_Key_KeyProp = { "ConnectionPoints_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamModifier_Statics::NewProp_ConnectionPoints_MetaData[] = {
		{ "Category", "VCam Connection Points" },
		{ "ModuleRelativePath", "Public/Modifier/VCamModifier.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVCamModifier_Statics::NewProp_ConnectionPoints = { "ConnectionPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamModifier, ConnectionPoints), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVCamModifier_Statics::NewProp_ConnectionPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamModifier_Statics::NewProp_ConnectionPoints_MetaData)) }; // 195368410
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamModifier_Statics::NewProp_bIsInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/Modifier/VCamModifier.h" },
	};
#endif
	void Z_Construct_UClass_UVCamModifier_Statics::NewProp_bIsInitialized_SetBit(void* Obj)
	{
		((UVCamModifier*)Obj)->bIsInitialized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVCamModifier_Statics::NewProp_bIsInitialized = { "bIsInitialized", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVCamModifier), &Z_Construct_UClass_UVCamModifier_Statics::NewProp_bIsInitialized_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVCamModifier_Statics::NewProp_bIsInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamModifier_Statics::NewProp_bIsInitialized_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVCamModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamModifier_Statics::NewProp_InputMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamModifier_Statics::NewProp_InputContextPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamModifier_Statics::NewProp_ConnectionPoints_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamModifier_Statics::NewProp_ConnectionPoints_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamModifier_Statics::NewProp_ConnectionPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamModifier_Statics::NewProp_bIsInitialized,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVCamModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVCamModifier>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVCamModifier_Statics::ClassParams = {
		&UVCamModifier::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVCamModifier_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVCamModifier_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVCamModifier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamModifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVCamModifier()
	{
		if (!Z_Registration_Info_UClass_UVCamModifier.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVCamModifier.OuterSingleton, Z_Construct_UClass_UVCamModifier_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVCamModifier.OuterSingleton;
	}
	template<> VCAMCORE_API UClass* StaticClass<UVCamModifier>()
	{
		return UVCamModifier::StaticClass();
	}
	UVCamModifier::UVCamModifier(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVCamModifier);
	UVCamModifier::~UVCamModifier() {}
	struct VCamBlueprintModifier_eventOnApply_Parms
	{
		UVCamModifierContext* Context;
		UCineCameraComponent* CameraComponent;
		float DeltaTime;
	};
	struct VCamBlueprintModifier_eventOnInitialize_Parms
	{
		UVCamModifierContext* Context;
	};
	static FName NAME_UVCamBlueprintModifier_GetInputMappingContextAndPriority = FName(TEXT("GetInputMappingContextAndPriority"));
	void UVCamBlueprintModifier::GetInputMappingContextAndPriority() const
	{
		const_cast<UVCamBlueprintModifier*>(this)->ProcessEvent(FindFunctionChecked(NAME_UVCamBlueprintModifier_GetInputMappingContextAndPriority),NULL);
	}
	static FName NAME_UVCamBlueprintModifier_OnApply = FName(TEXT("OnApply"));
	void UVCamBlueprintModifier::OnApply(UVCamModifierContext* Context, UCineCameraComponent* CameraComponent, const float DeltaTime)
	{
		VCamBlueprintModifier_eventOnApply_Parms Parms;
		Parms.Context=Context;
		Parms.CameraComponent=CameraComponent;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UVCamBlueprintModifier_OnApply),&Parms);
	}
	static FName NAME_UVCamBlueprintModifier_OnDeinitialize = FName(TEXT("OnDeinitialize"));
	void UVCamBlueprintModifier::OnDeinitialize()
	{
		ProcessEvent(FindFunctionChecked(NAME_UVCamBlueprintModifier_OnDeinitialize),NULL);
	}
	static FName NAME_UVCamBlueprintModifier_OnInitialize = FName(TEXT("OnInitialize"));
	void UVCamBlueprintModifier::OnInitialize(UVCamModifierContext* Context)
	{
		VCamBlueprintModifier_eventOnInitialize_Parms Parms;
		Parms.Context=Context;
		ProcessEvent(FindFunctionChecked(NAME_UVCamBlueprintModifier_OnInitialize),&Parms);
	}
	void UVCamBlueprintModifier::StaticRegisterNativesUVCamBlueprintModifier()
	{
	}
	struct Z_Construct_UFunction_UVCamBlueprintModifier_GetInputMappingContextAndPriority_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamBlueprintModifier_GetInputMappingContextAndPriority_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "// This function is deliberately non-working to force cleanup of Input Contexts\n// Please move any previous values to the new properties in Class Defaults\n" },
		{ "ModuleRelativePath", "Public/Modifier/VCamModifier.h" },
		{ "ToolTip", "This function is deliberately non-working to force cleanup of Input Contexts\nPlease move any previous values to the new properties in Class Defaults" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamBlueprintModifier_GetInputMappingContextAndPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamBlueprintModifier, nullptr, "GetInputMappingContextAndPriority", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamBlueprintModifier_GetInputMappingContextAndPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamBlueprintModifier_GetInputMappingContextAndPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamBlueprintModifier_GetInputMappingContextAndPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamBlueprintModifier_GetInputMappingContextAndPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamBlueprintModifier_OnApply_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVCamBlueprintModifier_OnApply_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamBlueprintModifier_eventOnApply_Parms, Context), Z_Construct_UClass_UVCamModifierContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamBlueprintModifier_OnApply_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVCamBlueprintModifier_OnApply_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamBlueprintModifier_eventOnApply_Parms, CameraComponent), Z_Construct_UClass_UCineCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVCamBlueprintModifier_OnApply_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamBlueprintModifier_OnApply_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamBlueprintModifier_OnApply_Statics::NewProp_DeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVCamBlueprintModifier_OnApply_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamBlueprintModifier_eventOnApply_Parms, DeltaTime), METADATA_PARAMS(Z_Construct_UFunction_UVCamBlueprintModifier_OnApply_Statics::NewProp_DeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamBlueprintModifier_OnApply_Statics::NewProp_DeltaTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamBlueprintModifier_OnApply_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamBlueprintModifier_OnApply_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamBlueprintModifier_OnApply_Statics::NewProp_CameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamBlueprintModifier_OnApply_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamBlueprintModifier_OnApply_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "ModuleRelativePath", "Public/Modifier/VCamModifier.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamBlueprintModifier_OnApply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamBlueprintModifier, nullptr, "OnApply", nullptr, nullptr, sizeof(VCamBlueprintModifier_eventOnApply_Parms), Z_Construct_UFunction_UVCamBlueprintModifier_OnApply_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamBlueprintModifier_OnApply_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamBlueprintModifier_OnApply_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamBlueprintModifier_OnApply_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamBlueprintModifier_OnApply()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamBlueprintModifier_OnApply_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamBlueprintModifier_OnDeinitialize_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamBlueprintModifier_OnDeinitialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "ModuleRelativePath", "Public/Modifier/VCamModifier.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamBlueprintModifier_OnDeinitialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamBlueprintModifier, nullptr, "OnDeinitialize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamBlueprintModifier_OnDeinitialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamBlueprintModifier_OnDeinitialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamBlueprintModifier_OnDeinitialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamBlueprintModifier_OnDeinitialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamBlueprintModifier_OnInitialize_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVCamBlueprintModifier_OnInitialize_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamBlueprintModifier_eventOnInitialize_Parms, Context), Z_Construct_UClass_UVCamModifierContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamBlueprintModifier_OnInitialize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamBlueprintModifier_OnInitialize_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamBlueprintModifier_OnInitialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "ModuleRelativePath", "Public/Modifier/VCamModifier.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamBlueprintModifier_OnInitialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamBlueprintModifier, nullptr, "OnInitialize", nullptr, nullptr, sizeof(VCamBlueprintModifier_eventOnInitialize_Parms), Z_Construct_UFunction_UVCamBlueprintModifier_OnInitialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamBlueprintModifier_OnInitialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamBlueprintModifier_OnInitialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamBlueprintModifier_OnInitialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamBlueprintModifier_OnInitialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamBlueprintModifier_OnInitialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVCamBlueprintModifier);
	UClass* Z_Construct_UClass_UVCamBlueprintModifier_NoRegister()
	{
		return UVCamBlueprintModifier::StaticClass();
	}
	struct Z_Construct_UClass_UVCamBlueprintModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVCamBlueprintModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVCamModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_VCamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVCamBlueprintModifier_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVCamBlueprintModifier_GetInputMappingContextAndPriority, "GetInputMappingContextAndPriority" }, // 944837215
		{ &Z_Construct_UFunction_UVCamBlueprintModifier_OnApply, "OnApply" }, // 1539340685
		{ &Z_Construct_UFunction_UVCamBlueprintModifier_OnDeinitialize, "OnDeinitialize" }, // 1945765862
		{ &Z_Construct_UFunction_UVCamBlueprintModifier_OnInitialize, "OnInitialize" }, // 1988722396
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamBlueprintModifier_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Modifier/VCamModifier.h" },
		{ "ModuleRelativePath", "Public/Modifier/VCamModifier.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVCamBlueprintModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVCamBlueprintModifier>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVCamBlueprintModifier_Statics::ClassParams = {
		&UVCamBlueprintModifier::StaticClass,
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
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVCamBlueprintModifier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamBlueprintModifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVCamBlueprintModifier()
	{
		if (!Z_Registration_Info_UClass_UVCamBlueprintModifier.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVCamBlueprintModifier.OuterSingleton, Z_Construct_UClass_UVCamBlueprintModifier_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVCamBlueprintModifier.OuterSingleton;
	}
	template<> VCAMCORE_API UClass* StaticClass<UVCamBlueprintModifier>()
	{
		return UVCamBlueprintModifier::StaticClass();
	}
	UVCamBlueprintModifier::UVCamBlueprintModifier(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVCamBlueprintModifier);
	UVCamBlueprintModifier::~UVCamBlueprintModifier() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_Statics::ScriptStructInfo[] = {
		{ FVCamModifierConnectionPoint::StaticStruct, Z_Construct_UScriptStruct_FVCamModifierConnectionPoint_Statics::NewStructOps, TEXT("VCamModifierConnectionPoint"), &Z_Registration_Info_UScriptStruct_VCamModifierConnectionPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVCamModifierConnectionPoint), 195368410U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVCamModifier, UVCamModifier::StaticClass, TEXT("UVCamModifier"), &Z_Registration_Info_UClass_UVCamModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVCamModifier), 1596425011U) },
		{ Z_Construct_UClass_UVCamBlueprintModifier, UVCamBlueprintModifier::StaticClass, TEXT("UVCamBlueprintModifier"), &Z_Registration_Info_UClass_UVCamBlueprintModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVCamBlueprintModifier), 863842139U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_388641004(TEXT("/Script/VCamCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifier_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
