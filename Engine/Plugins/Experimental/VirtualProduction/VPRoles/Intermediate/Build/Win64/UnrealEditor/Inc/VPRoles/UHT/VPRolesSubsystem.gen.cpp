// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VPRolesSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVPRolesSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	UPackage* Z_Construct_UPackage__Script_VPRoles();
	VPROLES_API UClass* Z_Construct_UClass_UVirtualProductionRolesSubsystem();
	VPROLES_API UClass* Z_Construct_UClass_UVirtualProductionRolesSubsystem_NoRegister();
	VPROLES_API UFunction* Z_Construct_UDelegateFunction_UVirtualProductionRolesSubsystem_OnRolesChanged__DelegateSignature();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UVirtualProductionRolesSubsystem_OnRolesChanged__DelegateSignature_Statics
	{
		struct VirtualProductionRolesSubsystem_eventOnRolesChanged_Parms
		{
			TArray<FString> EnabledRoles;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_EnabledRoles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnabledRoles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EnabledRoles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UVirtualProductionRolesSubsystem_OnRolesChanged__DelegateSignature_Statics::NewProp_EnabledRoles_Inner = { "EnabledRoles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UVirtualProductionRolesSubsystem_OnRolesChanged__DelegateSignature_Statics::NewProp_EnabledRoles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UVirtualProductionRolesSubsystem_OnRolesChanged__DelegateSignature_Statics::NewProp_EnabledRoles = { "EnabledRoles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualProductionRolesSubsystem_eventOnRolesChanged_Parms, EnabledRoles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_UVirtualProductionRolesSubsystem_OnRolesChanged__DelegateSignature_Statics::NewProp_EnabledRoles_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVirtualProductionRolesSubsystem_OnRolesChanged__DelegateSignature_Statics::NewProp_EnabledRoles_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UVirtualProductionRolesSubsystem_OnRolesChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UVirtualProductionRolesSubsystem_OnRolesChanged__DelegateSignature_Statics::NewProp_EnabledRoles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UVirtualProductionRolesSubsystem_OnRolesChanged__DelegateSignature_Statics::NewProp_EnabledRoles,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UVirtualProductionRolesSubsystem_OnRolesChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VPRolesSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UVirtualProductionRolesSubsystem_OnRolesChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualProductionRolesSubsystem, nullptr, "OnRolesChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UVirtualProductionRolesSubsystem_OnRolesChanged__DelegateSignature_Statics::VirtualProductionRolesSubsystem_eventOnRolesChanged_Parms), Z_Construct_UDelegateFunction_UVirtualProductionRolesSubsystem_OnRolesChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVirtualProductionRolesSubsystem_OnRolesChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UVirtualProductionRolesSubsystem_OnRolesChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVirtualProductionRolesSubsystem_OnRolesChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UVirtualProductionRolesSubsystem_OnRolesChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UVirtualProductionRolesSubsystem_OnRolesChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UVirtualProductionRolesSubsystem::FOnRolesChanged_DelegateWrapper(const FMulticastScriptDelegate& OnRolesChanged, TArray<FString> const& EnabledRoles)
{
	struct VirtualProductionRolesSubsystem_eventOnRolesChanged_Parms
	{
		TArray<FString> EnabledRoles;
	};
	VirtualProductionRolesSubsystem_eventOnRolesChanged_Parms Parms;
	Parms.EnabledRoles=EnabledRoles;
	OnRolesChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UVirtualProductionRolesSubsystem::execGetAllRoles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetAllRoles();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualProductionRolesSubsystem::execSetActiveRoles)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_Roles);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActiveRoles(Z_Param_Out_Roles);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualProductionRolesSubsystem::execGetActiveRolesString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetActiveRolesString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualProductionRolesSubsystem::execHasActiveRole)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Role);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasActiveRole(Z_Param_Role);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualProductionRolesSubsystem::execGetActiveRoles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetActiveRoles();
		P_NATIVE_END;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(UVirtualProductionRolesSubsystem::execRemoveRole)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_RoleName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveRole(Z_Param_RoleName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualProductionRolesSubsystem::execAddRole)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_RoleName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddRole(Z_Param_RoleName);
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UVirtualProductionRolesSubsystem::StaticRegisterNativesUVirtualProductionRolesSubsystem()
	{
		UClass* Class = UVirtualProductionRolesSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
#if WITH_EDITOR
			{ "AddRole", &UVirtualProductionRolesSubsystem::execAddRole },
#endif // WITH_EDITOR
			{ "GetActiveRoles", &UVirtualProductionRolesSubsystem::execGetActiveRoles },
			{ "GetActiveRolesString", &UVirtualProductionRolesSubsystem::execGetActiveRolesString },
			{ "GetAllRoles", &UVirtualProductionRolesSubsystem::execGetAllRoles },
			{ "HasActiveRole", &UVirtualProductionRolesSubsystem::execHasActiveRole },
#if WITH_EDITOR
			{ "RemoveRole", &UVirtualProductionRolesSubsystem::execRemoveRole },
#endif // WITH_EDITOR
			{ "SetActiveRoles", &UVirtualProductionRolesSubsystem::execSetActiveRoles },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UVirtualProductionRolesSubsystem_AddRole_Statics
	{
		struct VirtualProductionRolesSubsystem_eventAddRole_Parms
		{
			FString RoleName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoleName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RoleName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualProductionRolesSubsystem_AddRole_Statics::NewProp_RoleName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVirtualProductionRolesSubsystem_AddRole_Statics::NewProp_RoleName = { "RoleName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualProductionRolesSubsystem_eventAddRole_Parms, RoleName), METADATA_PARAMS(Z_Construct_UFunction_UVirtualProductionRolesSubsystem_AddRole_Statics::NewProp_RoleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualProductionRolesSubsystem_AddRole_Statics::NewProp_RoleName_MetaData)) };
	void Z_Construct_UFunction_UVirtualProductionRolesSubsystem_AddRole_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VirtualProductionRolesSubsystem_eventAddRole_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVirtualProductionRolesSubsystem_AddRole_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualProductionRolesSubsystem_eventAddRole_Parms), &Z_Construct_UFunction_UVirtualProductionRolesSubsystem_AddRole_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualProductionRolesSubsystem_AddRole_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualProductionRolesSubsystem_AddRole_Statics::NewProp_RoleName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualProductionRolesSubsystem_AddRole_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualProductionRolesSubsystem_AddRole_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production|Roles" },
		{ "Comment", "/**\n\x09 * Add a new virtual production role.\n\x09 * @param RoleName the name of the role to add.\n\x09 * @return Whether the operation succeeded.\n\x09 * @note This will attempt to modify the underlying VProles.ini file so it must be checked out or made writable or the operation will fail.\n\x09 */" },
		{ "ModuleRelativePath", "Public/VPRolesSubsystem.h" },
		{ "ToolTip", "Add a new virtual production role.\n@param RoleName the name of the role to add.\n@return Whether the operation succeeded.\n@note This will attempt to modify the underlying VProles.ini file so it must be checked out or made writable or the operation will fail." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualProductionRolesSubsystem_AddRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualProductionRolesSubsystem, nullptr, "AddRole", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVirtualProductionRolesSubsystem_AddRole_Statics::VirtualProductionRolesSubsystem_eventAddRole_Parms), Z_Construct_UFunction_UVirtualProductionRolesSubsystem_AddRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualProductionRolesSubsystem_AddRole_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualProductionRolesSubsystem_AddRole_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualProductionRolesSubsystem_AddRole_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualProductionRolesSubsystem_AddRole()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualProductionRolesSubsystem_AddRole_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UVirtualProductionRolesSubsystem_GetActiveRoles_Statics
	{
		struct VirtualProductionRolesSubsystem_eventGetActiveRoles_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVirtualProductionRolesSubsystem_GetActiveRoles_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVirtualProductionRolesSubsystem_GetActiveRoles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualProductionRolesSubsystem_eventGetActiveRoles_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualProductionRolesSubsystem_GetActiveRoles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualProductionRolesSubsystem_GetActiveRoles_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualProductionRolesSubsystem_GetActiveRoles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualProductionRolesSubsystem_GetActiveRoles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production|Roles" },
		{ "Comment", "/**\n\x09 * Get the currently active Virtual Production roles.\n\x09 * @return The names of the current virtual production roles.\n\x09 */" },
		{ "ModuleRelativePath", "Public/VPRolesSubsystem.h" },
		{ "ToolTip", "Get the currently active Virtual Production roles.\n@return The names of the current virtual production roles." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualProductionRolesSubsystem_GetActiveRoles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualProductionRolesSubsystem, nullptr, "GetActiveRoles", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVirtualProductionRolesSubsystem_GetActiveRoles_Statics::VirtualProductionRolesSubsystem_eventGetActiveRoles_Parms), Z_Construct_UFunction_UVirtualProductionRolesSubsystem_GetActiveRoles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualProductionRolesSubsystem_GetActiveRoles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualProductionRolesSubsystem_GetActiveRoles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualProductionRolesSubsystem_GetActiveRoles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualProductionRolesSubsystem_GetActiveRoles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualProductionRolesSubsystem_GetActiveRoles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualProductionRolesSubsystem_GetActiveRolesString_Statics
	{
		struct VirtualProductionRolesSubsystem_eventGetActiveRolesString_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVirtualProductionRolesSubsystem_GetActiveRolesString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualProductionRolesSubsystem_eventGetActiveRolesString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualProductionRolesSubsystem_GetActiveRolesString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualProductionRolesSubsystem_GetActiveRolesString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualProductionRolesSubsystem_GetActiveRolesString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production|Roles" },
		{ "Comment", "/**\n\x09 * @return the currently active Virtual Production roles as a comma separated string representation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/VPRolesSubsystem.h" },
		{ "ToolTip", "@return the currently active Virtual Production roles as a comma separated string representation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualProductionRolesSubsystem_GetActiveRolesString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualProductionRolesSubsystem, nullptr, "GetActiveRolesString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVirtualProductionRolesSubsystem_GetActiveRolesString_Statics::VirtualProductionRolesSubsystem_eventGetActiveRolesString_Parms), Z_Construct_UFunction_UVirtualProductionRolesSubsystem_GetActiveRolesString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualProductionRolesSubsystem_GetActiveRolesString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualProductionRolesSubsystem_GetActiveRolesString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualProductionRolesSubsystem_GetActiveRolesString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualProductionRolesSubsystem_GetActiveRolesString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualProductionRolesSubsystem_GetActiveRolesString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualProductionRolesSubsystem_GetAllRoles_Statics
	{
		struct VirtualProductionRolesSubsystem_eventGetAllRoles_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVirtualProductionRolesSubsystem_GetAllRoles_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVirtualProductionRolesSubsystem_GetAllRoles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualProductionRolesSubsystem_eventGetAllRoles_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualProductionRolesSubsystem_GetAllRoles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualProductionRolesSubsystem_GetAllRoles_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualProductionRolesSubsystem_GetAllRoles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualProductionRolesSubsystem_GetAllRoles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production|Roles" },
		{ "Comment", "/**\n\x09 * Get all available roles that can be set as current.\n\x09 * @return The available roles.\n\x09 */" },
		{ "ModuleRelativePath", "Public/VPRolesSubsystem.h" },
		{ "ToolTip", "Get all available roles that can be set as current.\n@return The available roles." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualProductionRolesSubsystem_GetAllRoles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualProductionRolesSubsystem, nullptr, "GetAllRoles", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVirtualProductionRolesSubsystem_GetAllRoles_Statics::VirtualProductionRolesSubsystem_eventGetAllRoles_Parms), Z_Construct_UFunction_UVirtualProductionRolesSubsystem_GetAllRoles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualProductionRolesSubsystem_GetAllRoles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualProductionRolesSubsystem_GetAllRoles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualProductionRolesSubsystem_GetAllRoles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualProductionRolesSubsystem_GetAllRoles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualProductionRolesSubsystem_GetAllRoles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualProductionRolesSubsystem_HasActiveRole_Statics
	{
		struct VirtualProductionRolesSubsystem_eventHasActiveRole_Parms
		{
			FString Role;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Role_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Role;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualProductionRolesSubsystem_HasActiveRole_Statics::NewProp_Role_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVirtualProductionRolesSubsystem_HasActiveRole_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualProductionRolesSubsystem_eventHasActiveRole_Parms, Role), METADATA_PARAMS(Z_Construct_UFunction_UVirtualProductionRolesSubsystem_HasActiveRole_Statics::NewProp_Role_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualProductionRolesSubsystem_HasActiveRole_Statics::NewProp_Role_MetaData)) };
	void Z_Construct_UFunction_UVirtualProductionRolesSubsystem_HasActiveRole_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VirtualProductionRolesSubsystem_eventHasActiveRole_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVirtualProductionRolesSubsystem_HasActiveRole_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualProductionRolesSubsystem_eventHasActiveRole_Parms), &Z_Construct_UFunction_UVirtualProductionRolesSubsystem_HasActiveRole_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualProductionRolesSubsystem_HasActiveRole_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualProductionRolesSubsystem_HasActiveRole_Statics::NewProp_Role,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualProductionRolesSubsystem_HasActiveRole_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualProductionRolesSubsystem_HasActiveRole_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production|Roles" },
		{ "Comment", "/**\n\x09 * @return Whether a role is currently active.\n\x09 */" },
		{ "ModuleRelativePath", "Public/VPRolesSubsystem.h" },
		{ "ToolTip", "@return Whether a role is currently active." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualProductionRolesSubsystem_HasActiveRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualProductionRolesSubsystem, nullptr, "HasActiveRole", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVirtualProductionRolesSubsystem_HasActiveRole_Statics::VirtualProductionRolesSubsystem_eventHasActiveRole_Parms), Z_Construct_UFunction_UVirtualProductionRolesSubsystem_HasActiveRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualProductionRolesSubsystem_HasActiveRole_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualProductionRolesSubsystem_HasActiveRole_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualProductionRolesSubsystem_HasActiveRole_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualProductionRolesSubsystem_HasActiveRole()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualProductionRolesSubsystem_HasActiveRole_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UVirtualProductionRolesSubsystem_RemoveRole_Statics
	{
		struct VirtualProductionRolesSubsystem_eventRemoveRole_Parms
		{
			FString RoleName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoleName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RoleName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualProductionRolesSubsystem_RemoveRole_Statics::NewProp_RoleName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVirtualProductionRolesSubsystem_RemoveRole_Statics::NewProp_RoleName = { "RoleName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualProductionRolesSubsystem_eventRemoveRole_Parms, RoleName), METADATA_PARAMS(Z_Construct_UFunction_UVirtualProductionRolesSubsystem_RemoveRole_Statics::NewProp_RoleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualProductionRolesSubsystem_RemoveRole_Statics::NewProp_RoleName_MetaData)) };
	void Z_Construct_UFunction_UVirtualProductionRolesSubsystem_RemoveRole_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VirtualProductionRolesSubsystem_eventRemoveRole_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVirtualProductionRolesSubsystem_RemoveRole_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualProductionRolesSubsystem_eventRemoveRole_Parms), &Z_Construct_UFunction_UVirtualProductionRolesSubsystem_RemoveRole_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualProductionRolesSubsystem_RemoveRole_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualProductionRolesSubsystem_RemoveRole_Statics::NewProp_RoleName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualProductionRolesSubsystem_RemoveRole_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualProductionRolesSubsystem_RemoveRole_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production|Roles" },
		{ "Comment", "/**\n\x09 * Remove a virtual production role.\n\x09 * @param RoleName the name of the role to remove.\n\x09 * @return Whether the operation succeeded.\n\x09 * @note This will attempt to modify the underlying VProles.ini file so it must be checked out or made writable or the operation will fail.\n\x09 */" },
		{ "ModuleRelativePath", "Public/VPRolesSubsystem.h" },
		{ "ToolTip", "Remove a virtual production role.\n@param RoleName the name of the role to remove.\n@return Whether the operation succeeded.\n@note This will attempt to modify the underlying VProles.ini file so it must be checked out or made writable or the operation will fail." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualProductionRolesSubsystem_RemoveRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualProductionRolesSubsystem, nullptr, "RemoveRole", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVirtualProductionRolesSubsystem_RemoveRole_Statics::VirtualProductionRolesSubsystem_eventRemoveRole_Parms), Z_Construct_UFunction_UVirtualProductionRolesSubsystem_RemoveRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualProductionRolesSubsystem_RemoveRole_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualProductionRolesSubsystem_RemoveRole_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualProductionRolesSubsystem_RemoveRole_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualProductionRolesSubsystem_RemoveRole()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualProductionRolesSubsystem_RemoveRole_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UVirtualProductionRolesSubsystem_SetActiveRoles_Statics
	{
		struct VirtualProductionRolesSubsystem_eventSetActiveRoles_Parms
		{
			TArray<FString> Roles;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Roles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Roles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Roles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVirtualProductionRolesSubsystem_SetActiveRoles_Statics::NewProp_Roles_Inner = { "Roles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualProductionRolesSubsystem_SetActiveRoles_Statics::NewProp_Roles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVirtualProductionRolesSubsystem_SetActiveRoles_Statics::NewProp_Roles = { "Roles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualProductionRolesSubsystem_eventSetActiveRoles_Parms, Roles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVirtualProductionRolesSubsystem_SetActiveRoles_Statics::NewProp_Roles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualProductionRolesSubsystem_SetActiveRoles_Statics::NewProp_Roles_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualProductionRolesSubsystem_SetActiveRoles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualProductionRolesSubsystem_SetActiveRoles_Statics::NewProp_Roles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualProductionRolesSubsystem_SetActiveRoles_Statics::NewProp_Roles,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualProductionRolesSubsystem_SetActiveRoles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production|Roles" },
		{ "Comment", "/**\n\x09 * Set the current Virtual Production roles.\n\x09 * @param Roles the list of roles to set as active.\n\x09 * @note The roles must already have been added either through the UI or through AddRole.\n\x09 * @note This will clear the previous current roles.\n\x09 */" },
		{ "ModuleRelativePath", "Public/VPRolesSubsystem.h" },
		{ "ToolTip", "Set the current Virtual Production roles.\n@param Roles the list of roles to set as active.\n@note The roles must already have been added either through the UI or through AddRole.\n@note This will clear the previous current roles." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualProductionRolesSubsystem_SetActiveRoles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualProductionRolesSubsystem, nullptr, "SetActiveRoles", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVirtualProductionRolesSubsystem_SetActiveRoles_Statics::VirtualProductionRolesSubsystem_eventSetActiveRoles_Parms), Z_Construct_UFunction_UVirtualProductionRolesSubsystem_SetActiveRoles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualProductionRolesSubsystem_SetActiveRoles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualProductionRolesSubsystem_SetActiveRoles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualProductionRolesSubsystem_SetActiveRoles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualProductionRolesSubsystem_SetActiveRoles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualProductionRolesSubsystem_SetActiveRoles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVirtualProductionRolesSubsystem);
	UClass* Z_Construct_UClass_UVirtualProductionRolesSubsystem_NoRegister()
	{
		return UVirtualProductionRolesSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UVirtualProductionRolesSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRolesChangedBP_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRolesChangedBP;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVirtualProductionRolesSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_VPRoles,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVirtualProductionRolesSubsystem_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UVirtualProductionRolesSubsystem_AddRole, "AddRole" }, // 464574773
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UVirtualProductionRolesSubsystem_GetActiveRoles, "GetActiveRoles" }, // 3762398039
		{ &Z_Construct_UFunction_UVirtualProductionRolesSubsystem_GetActiveRolesString, "GetActiveRolesString" }, // 4190344216
		{ &Z_Construct_UFunction_UVirtualProductionRolesSubsystem_GetAllRoles, "GetAllRoles" }, // 1189591231
		{ &Z_Construct_UFunction_UVirtualProductionRolesSubsystem_HasActiveRole, "HasActiveRole" }, // 4206053477
		{ &Z_Construct_UDelegateFunction_UVirtualProductionRolesSubsystem_OnRolesChanged__DelegateSignature, "OnRolesChanged__DelegateSignature" }, // 2590565295
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UVirtualProductionRolesSubsystem_RemoveRole, "RemoveRole" }, // 1317306513
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UVirtualProductionRolesSubsystem_SetActiveRoles, "SetActiveRoles" }, // 1276887114
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualProductionRolesSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Subsystem for common Virtual Production roles operations.\n * The machine role(s) in a virtual production context read from the command line.\n * ie. \"-VPRole=[Role.SubRole1|Role.SubRole2]\"\n */" },
		{ "IncludePath", "VPRolesSubsystem.h" },
		{ "ModuleRelativePath", "Public/VPRolesSubsystem.h" },
		{ "ToolTip", "Subsystem for common Virtual Production roles operations.\nThe machine role(s) in a virtual production context read from the command line.\nie. \"-VPRole=[Role.SubRole1|Role.SubRole2]\"" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualProductionRolesSubsystem_Statics::NewProp_OnRolesChangedBP_MetaData[] = {
		{ "Category", "Virtual Production|Roles" },
		{ "Comment", "/**\n\x09 * Delegate called when the roles are modified, ie. role is added, current roles are replaced, etc.\n\x09 */" },
		{ "ModuleRelativePath", "Public/VPRolesSubsystem.h" },
		{ "ScriptName", "OnRolesChanged" },
		{ "ToolTip", "Delegate called when the roles are modified, ie. role is added, current roles are replaced, etc." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVirtualProductionRolesSubsystem_Statics::NewProp_OnRolesChangedBP = { "OnRolesChangedBP", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualProductionRolesSubsystem, OnRolesChangedBP), Z_Construct_UDelegateFunction_UVirtualProductionRolesSubsystem_OnRolesChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVirtualProductionRolesSubsystem_Statics::NewProp_OnRolesChangedBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualProductionRolesSubsystem_Statics::NewProp_OnRolesChangedBP_MetaData)) }; // 2590565295
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVirtualProductionRolesSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualProductionRolesSubsystem_Statics::NewProp_OnRolesChangedBP,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVirtualProductionRolesSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVirtualProductionRolesSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVirtualProductionRolesSubsystem_Statics::ClassParams = {
		&UVirtualProductionRolesSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVirtualProductionRolesSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualProductionRolesSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVirtualProductionRolesSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualProductionRolesSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVirtualProductionRolesSubsystem()
	{
		if (!Z_Registration_Info_UClass_UVirtualProductionRolesSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVirtualProductionRolesSubsystem.OuterSingleton, Z_Construct_UClass_UVirtualProductionRolesSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVirtualProductionRolesSubsystem.OuterSingleton;
	}
	template<> VPROLES_API UClass* StaticClass<UVirtualProductionRolesSubsystem>()
	{
		return UVirtualProductionRolesSubsystem::StaticClass();
	}
	UVirtualProductionRolesSubsystem::UVirtualProductionRolesSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVirtualProductionRolesSubsystem);
	UVirtualProductionRolesSubsystem::~UVirtualProductionRolesSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Public_VPRolesSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Public_VPRolesSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVirtualProductionRolesSubsystem, UVirtualProductionRolesSubsystem::StaticClass, TEXT("UVirtualProductionRolesSubsystem"), &Z_Registration_Info_UClass_UVirtualProductionRolesSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVirtualProductionRolesSubsystem), 3387133691U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Public_VPRolesSubsystem_h_3193288315(TEXT("/Script/VPRoles"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Public_VPRolesSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Public_VPRolesSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
