// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VCamInputSettings.h"
#include "InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVCamInputSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	UPackage* Z_Construct_UPackage__Script_VCamInput();
	VCAMINPUT_API UClass* Z_Construct_UClass_UVCamInputSettings();
	VCAMINPUT_API UClass* Z_Construct_UClass_UVCamInputSettings_NoRegister();
	VCAMINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FVCamInputProfile();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VCamInputProfile;
class UScriptStruct* FVCamInputProfile::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VCamInputProfile.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VCamInputProfile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVCamInputProfile, (UObject*)Z_Construct_UPackage__Script_VCamInput(), TEXT("VCamInputProfile"));
	}
	return Z_Registration_Info_UScriptStruct_VCamInputProfile.OuterSingleton;
}
template<> VCAMINPUT_API UScriptStruct* StaticStruct<FVCamInputProfile>()
{
	return FVCamInputProfile::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVCamInputProfile_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_MappableKeyOverrides_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_MappableKeyOverrides_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MappableKeyOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MappableKeyOverrides;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVCamInputProfile_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VCamInputSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVCamInputProfile_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVCamInputProfile>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVCamInputProfile_Statics::NewProp_MappableKeyOverrides_ValueProp = { "MappableKeyOverrides", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVCamInputProfile_Statics::NewProp_MappableKeyOverrides_Key_KeyProp = { "MappableKeyOverrides_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVCamInputProfile_Statics::NewProp_MappableKeyOverrides_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/VCamInputSettings.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FVCamInputProfile_Statics::NewProp_MappableKeyOverrides = { "MappableKeyOverrides", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVCamInputProfile, MappableKeyOverrides), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVCamInputProfile_Statics::NewProp_MappableKeyOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVCamInputProfile_Statics::NewProp_MappableKeyOverrides_MetaData)) }; // 2101135134
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVCamInputProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVCamInputProfile_Statics::NewProp_MappableKeyOverrides_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVCamInputProfile_Statics::NewProp_MappableKeyOverrides_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVCamInputProfile_Statics::NewProp_MappableKeyOverrides,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVCamInputProfile_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VCamInput,
		nullptr,
		&NewStructOps,
		"VCamInputProfile",
		sizeof(FVCamInputProfile),
		alignof(FVCamInputProfile),
		Z_Construct_UScriptStruct_FVCamInputProfile_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVCamInputProfile_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVCamInputProfile_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVCamInputProfile_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVCamInputProfile()
	{
		if (!Z_Registration_Info_UScriptStruct_VCamInputProfile.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VCamInputProfile.InnerSingleton, Z_Construct_UScriptStruct_FVCamInputProfile_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VCamInputProfile.InnerSingleton;
	}
	DEFINE_FUNCTION(UVCamInputSettings::execGetInputProfileNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetInputProfileNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamInputSettings::execSetInputProfiles)
	{
		P_GET_TMAP_REF(FName,FVCamInputProfile,Z_Param_Out_NewInputProfiles);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInputProfiles(Z_Param_Out_NewInputProfiles);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamInputSettings::execSetDefaultInputProfile)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NewDefaultInputProfile);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultInputProfile(Z_Param_NewDefaultInputProfile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamInputSettings::execGetVCamInputSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVCamInputSettings**)Z_Param__Result=UVCamInputSettings::GetVCamInputSettings();
		P_NATIVE_END;
	}
	void UVCamInputSettings::StaticRegisterNativesUVCamInputSettings()
	{
		UClass* Class = UVCamInputSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInputProfileNames", &UVCamInputSettings::execGetInputProfileNames },
			{ "GetVCamInputSettings", &UVCamInputSettings::execGetVCamInputSettings },
			{ "SetDefaultInputProfile", &UVCamInputSettings::execSetDefaultInputProfile },
			{ "SetInputProfiles", &UVCamInputSettings::execSetInputProfiles },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVCamInputSettings_GetInputProfileNames_Statics
	{
		struct VCamInputSettings_eventGetInputProfileNames_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVCamInputSettings_GetInputProfileNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVCamInputSettings_GetInputProfileNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamInputSettings_eventGetInputProfileNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamInputSettings_GetInputProfileNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamInputSettings_GetInputProfileNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamInputSettings_GetInputProfileNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamInputSettings_GetInputProfileNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "VCam Input" },
		{ "ModuleRelativePath", "Public/VCamInputSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamInputSettings_GetInputProfileNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamInputSettings, nullptr, "GetInputProfileNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamInputSettings_GetInputProfileNames_Statics::VCamInputSettings_eventGetInputProfileNames_Parms), Z_Construct_UFunction_UVCamInputSettings_GetInputProfileNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamInputSettings_GetInputProfileNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamInputSettings_GetInputProfileNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamInputSettings_GetInputProfileNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamInputSettings_GetInputProfileNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamInputSettings_GetInputProfileNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamInputSettings_GetVCamInputSettings_Statics
	{
		struct VCamInputSettings_eventGetVCamInputSettings_Parms
		{
			UVCamInputSettings* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVCamInputSettings_GetVCamInputSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamInputSettings_eventGetVCamInputSettings_Parms, ReturnValue), Z_Construct_UClass_UVCamInputSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamInputSettings_GetVCamInputSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamInputSettings_GetVCamInputSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamInputSettings_GetVCamInputSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "VCam" },
		{ "ModuleRelativePath", "Public/VCamInputSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamInputSettings_GetVCamInputSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamInputSettings, nullptr, "GetVCamInputSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamInputSettings_GetVCamInputSettings_Statics::VCamInputSettings_eventGetVCamInputSettings_Parms), Z_Construct_UFunction_UVCamInputSettings_GetVCamInputSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamInputSettings_GetVCamInputSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamInputSettings_GetVCamInputSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamInputSettings_GetVCamInputSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamInputSettings_GetVCamInputSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamInputSettings_GetVCamInputSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamInputSettings_SetDefaultInputProfile_Statics
	{
		struct VCamInputSettings_eventSetDefaultInputProfile_Parms
		{
			FName NewDefaultInputProfile;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewDefaultInputProfile_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewDefaultInputProfile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamInputSettings_SetDefaultInputProfile_Statics::NewProp_NewDefaultInputProfile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVCamInputSettings_SetDefaultInputProfile_Statics::NewProp_NewDefaultInputProfile = { "NewDefaultInputProfile", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamInputSettings_eventSetDefaultInputProfile_Parms, NewDefaultInputProfile), METADATA_PARAMS(Z_Construct_UFunction_UVCamInputSettings_SetDefaultInputProfile_Statics::NewProp_NewDefaultInputProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamInputSettings_SetDefaultInputProfile_Statics::NewProp_NewDefaultInputProfile_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamInputSettings_SetDefaultInputProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamInputSettings_SetDefaultInputProfile_Statics::NewProp_NewDefaultInputProfile,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamInputSettings_SetDefaultInputProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "VCam Input" },
		{ "ModuleRelativePath", "Public/VCamInputSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamInputSettings_SetDefaultInputProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamInputSettings, nullptr, "SetDefaultInputProfile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamInputSettings_SetDefaultInputProfile_Statics::VCamInputSettings_eventSetDefaultInputProfile_Parms), Z_Construct_UFunction_UVCamInputSettings_SetDefaultInputProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamInputSettings_SetDefaultInputProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamInputSettings_SetDefaultInputProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamInputSettings_SetDefaultInputProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamInputSettings_SetDefaultInputProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamInputSettings_SetDefaultInputProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamInputSettings_SetInputProfiles_Statics
	{
		struct VCamInputSettings_eventSetInputProfiles_Parms
		{
			TMap<FName,FVCamInputProfile> NewInputProfiles;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewInputProfiles_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewInputProfiles_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewInputProfiles_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_NewInputProfiles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVCamInputSettings_SetInputProfiles_Statics::NewProp_NewInputProfiles_ValueProp = { "NewInputProfiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FVCamInputProfile, METADATA_PARAMS(nullptr, 0) }; // 2324690633
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVCamInputSettings_SetInputProfiles_Statics::NewProp_NewInputProfiles_Key_KeyProp = { "NewInputProfiles_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamInputSettings_SetInputProfiles_Statics::NewProp_NewInputProfiles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVCamInputSettings_SetInputProfiles_Statics::NewProp_NewInputProfiles = { "NewInputProfiles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamInputSettings_eventSetInputProfiles_Parms, NewInputProfiles), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVCamInputSettings_SetInputProfiles_Statics::NewProp_NewInputProfiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamInputSettings_SetInputProfiles_Statics::NewProp_NewInputProfiles_MetaData)) }; // 2324690633
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamInputSettings_SetInputProfiles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamInputSettings_SetInputProfiles_Statics::NewProp_NewInputProfiles_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamInputSettings_SetInputProfiles_Statics::NewProp_NewInputProfiles_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamInputSettings_SetInputProfiles_Statics::NewProp_NewInputProfiles,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamInputSettings_SetInputProfiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "VCam Input" },
		{ "ModuleRelativePath", "Public/VCamInputSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamInputSettings_SetInputProfiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamInputSettings, nullptr, "SetInputProfiles", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamInputSettings_SetInputProfiles_Statics::VCamInputSettings_eventSetInputProfiles_Parms), Z_Construct_UFunction_UVCamInputSettings_SetInputProfiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamInputSettings_SetInputProfiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamInputSettings_SetInputProfiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamInputSettings_SetInputProfiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamInputSettings_SetInputProfiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamInputSettings_SetInputProfiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVCamInputSettings);
	UClass* Z_Construct_UClass_UVCamInputSettings_NoRegister()
	{
		return UVCamInputSettings::StaticClass();
	}
	struct Z_Construct_UClass_UVCamInputSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInputProfile_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DefaultInputProfile;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputProfiles_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InputProfiles_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputProfiles_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InputProfiles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVCamInputSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_VCamInput,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVCamInputSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVCamInputSettings_GetInputProfileNames, "GetInputProfileNames" }, // 795422514
		{ &Z_Construct_UFunction_UVCamInputSettings_GetVCamInputSettings, "GetVCamInputSettings" }, // 2228393483
		{ &Z_Construct_UFunction_UVCamInputSettings_SetDefaultInputProfile, "SetDefaultInputProfile" }, // 829677156
		{ &Z_Construct_UFunction_UVCamInputSettings_SetInputProfiles, "SetInputProfiles" }, // 1783016347
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamInputSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VCamInputSettings.h" },
		{ "ModuleRelativePath", "Public/VCamInputSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamInputSettings_Statics::NewProp_DefaultInputProfile_MetaData[] = {
		{ "BlueprintSetter", "SetDefaultInputProfile" },
		{ "Category", "Input" },
		{ "GetOptions", "GetInputProfileNames" },
		{ "ModuleRelativePath", "Public/VCamInputSettings.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVCamInputSettings_Statics::NewProp_DefaultInputProfile = { "DefaultInputProfile", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamInputSettings, DefaultInputProfile), METADATA_PARAMS(Z_Construct_UClass_UVCamInputSettings_Statics::NewProp_DefaultInputProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamInputSettings_Statics::NewProp_DefaultInputProfile_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVCamInputSettings_Statics::NewProp_InputProfiles_ValueProp = { "InputProfiles", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FVCamInputProfile, METADATA_PARAMS(nullptr, 0) }; // 2324690633
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVCamInputSettings_Statics::NewProp_InputProfiles_Key_KeyProp = { "InputProfiles_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamInputSettings_Statics::NewProp_InputProfiles_MetaData[] = {
		{ "BlueprintSetter", "SetInputProfiles" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/VCamInputSettings.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVCamInputSettings_Statics::NewProp_InputProfiles = { "InputProfiles", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamInputSettings, InputProfiles), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVCamInputSettings_Statics::NewProp_InputProfiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamInputSettings_Statics::NewProp_InputProfiles_MetaData)) }; // 2324690633
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVCamInputSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamInputSettings_Statics::NewProp_DefaultInputProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamInputSettings_Statics::NewProp_InputProfiles_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamInputSettings_Statics::NewProp_InputProfiles_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamInputSettings_Statics::NewProp_InputProfiles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVCamInputSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVCamInputSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVCamInputSettings_Statics::ClassParams = {
		&UVCamInputSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVCamInputSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVCamInputSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVCamInputSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamInputSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVCamInputSettings()
	{
		if (!Z_Registration_Info_UClass_UVCamInputSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVCamInputSettings.OuterSingleton, Z_Construct_UClass_UVCamInputSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVCamInputSettings.OuterSingleton;
	}
	template<> VCAMINPUT_API UClass* StaticClass<UVCamInputSettings>()
	{
		return UVCamInputSettings::StaticClass();
	}
	UVCamInputSettings::UVCamInputSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVCamInputSettings);
	UVCamInputSettings::~UVCamInputSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSettings_h_Statics::ScriptStructInfo[] = {
		{ FVCamInputProfile::StaticStruct, Z_Construct_UScriptStruct_FVCamInputProfile_Statics::NewStructOps, TEXT("VCamInputProfile"), &Z_Registration_Info_UScriptStruct_VCamInputProfile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVCamInputProfile), 2324690633U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVCamInputSettings, UVCamInputSettings::StaticClass, TEXT("UVCamInputSettings"), &Z_Registration_Info_UClass_UVCamInputSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVCamInputSettings), 3490845193U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSettings_h_1478553735(TEXT("/Script/VCamInput"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
