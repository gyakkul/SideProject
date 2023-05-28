// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptionalMobileFeaturesBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptionalMobileFeaturesBPLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	OPTIONALMOBILEFEATURESBPLIBRARY_API UClass* Z_Construct_UClass_UOptionalMobileFeaturesBPLibrary();
	OPTIONALMOBILEFEATURESBPLIBRARY_API UClass* Z_Construct_UClass_UOptionalMobileFeaturesBPLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OptionalMobileFeaturesBPLibrary();
// End Cross Module References
	DEFINE_FUNCTION(UOptionalMobileFeaturesBPLibrary::execAreHeadphonesPluggedIn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOptionalMobileFeaturesBPLibrary::AreHeadphonesPluggedIn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptionalMobileFeaturesBPLibrary::execGetBatteryTemperature)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UOptionalMobileFeaturesBPLibrary::GetBatteryTemperature();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptionalMobileFeaturesBPLibrary::execGetBatteryLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UOptionalMobileFeaturesBPLibrary::GetBatteryLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptionalMobileFeaturesBPLibrary::execGetVolumeState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UOptionalMobileFeaturesBPLibrary::GetVolumeState();
		P_NATIVE_END;
	}
	void UOptionalMobileFeaturesBPLibrary::StaticRegisterNativesUOptionalMobileFeaturesBPLibrary()
	{
		UClass* Class = UOptionalMobileFeaturesBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AreHeadphonesPluggedIn", &UOptionalMobileFeaturesBPLibrary::execAreHeadphonesPluggedIn },
			{ "GetBatteryLevel", &UOptionalMobileFeaturesBPLibrary::execGetBatteryLevel },
			{ "GetBatteryTemperature", &UOptionalMobileFeaturesBPLibrary::execGetBatteryTemperature },
			{ "GetVolumeState", &UOptionalMobileFeaturesBPLibrary::execGetVolumeState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_AreHeadphonesPluggedIn_Statics
	{
		struct OptionalMobileFeaturesBPLibrary_eventAreHeadphonesPluggedIn_Parms
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
	void Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_AreHeadphonesPluggedIn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OptionalMobileFeaturesBPLibrary_eventAreHeadphonesPluggedIn_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_AreHeadphonesPluggedIn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OptionalMobileFeaturesBPLibrary_eventAreHeadphonesPluggedIn_Parms), &Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_AreHeadphonesPluggedIn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_AreHeadphonesPluggedIn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_AreHeadphonesPluggedIn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_AreHeadphonesPluggedIn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mobile" },
		{ "Comment", "/** Returns if headphones are plugged into the device */" },
		{ "ModuleRelativePath", "Classes/OptionalMobileFeaturesBPLibrary.h" },
		{ "ToolTip", "Returns if headphones are plugged into the device" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_AreHeadphonesPluggedIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptionalMobileFeaturesBPLibrary, nullptr, "AreHeadphonesPluggedIn", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_AreHeadphonesPluggedIn_Statics::OptionalMobileFeaturesBPLibrary_eventAreHeadphonesPluggedIn_Parms), Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_AreHeadphonesPluggedIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_AreHeadphonesPluggedIn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_AreHeadphonesPluggedIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_AreHeadphonesPluggedIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_AreHeadphonesPluggedIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_AreHeadphonesPluggedIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_GetBatteryLevel_Statics
	{
		struct OptionalMobileFeaturesBPLibrary_eventGetBatteryLevel_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_GetBatteryLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptionalMobileFeaturesBPLibrary_eventGetBatteryLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_GetBatteryLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_GetBatteryLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_GetBatteryLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mobile" },
		{ "Comment", "/** Returns the current battery level of the device in a range of [0, 100] */" },
		{ "ModuleRelativePath", "Classes/OptionalMobileFeaturesBPLibrary.h" },
		{ "ToolTip", "Returns the current battery level of the device in a range of [0, 100]" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_GetBatteryLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptionalMobileFeaturesBPLibrary, nullptr, "GetBatteryLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_GetBatteryLevel_Statics::OptionalMobileFeaturesBPLibrary_eventGetBatteryLevel_Parms), Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_GetBatteryLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_GetBatteryLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_GetBatteryLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_GetBatteryLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_GetBatteryLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_GetBatteryLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_GetBatteryTemperature_Statics
	{
		struct OptionalMobileFeaturesBPLibrary_eventGetBatteryTemperature_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_GetBatteryTemperature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptionalMobileFeaturesBPLibrary_eventGetBatteryTemperature_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_GetBatteryTemperature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_GetBatteryTemperature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_GetBatteryTemperature_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mobile" },
		{ "Comment", "/** Returns the device's temperature, in Celsius */" },
		{ "ModuleRelativePath", "Classes/OptionalMobileFeaturesBPLibrary.h" },
		{ "ToolTip", "Returns the device's temperature, in Celsius" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_GetBatteryTemperature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptionalMobileFeaturesBPLibrary, nullptr, "GetBatteryTemperature", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_GetBatteryTemperature_Statics::OptionalMobileFeaturesBPLibrary_eventGetBatteryTemperature_Parms), Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_GetBatteryTemperature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_GetBatteryTemperature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_GetBatteryTemperature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_GetBatteryTemperature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_GetBatteryTemperature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_GetBatteryTemperature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_GetVolumeState_Statics
	{
		struct OptionalMobileFeaturesBPLibrary_eventGetVolumeState_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_GetVolumeState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptionalMobileFeaturesBPLibrary_eventGetVolumeState_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_GetVolumeState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_GetVolumeState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_GetVolumeState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mobile" },
		{ "Comment", "/** Returns the current volume state of the device in a range of 0-100 (%)  */" },
		{ "ModuleRelativePath", "Classes/OptionalMobileFeaturesBPLibrary.h" },
		{ "ToolTip", "Returns the current volume state of the device in a range of 0-100 (%)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_GetVolumeState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptionalMobileFeaturesBPLibrary, nullptr, "GetVolumeState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_GetVolumeState_Statics::OptionalMobileFeaturesBPLibrary_eventGetVolumeState_Parms), Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_GetVolumeState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_GetVolumeState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_GetVolumeState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_GetVolumeState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_GetVolumeState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_GetVolumeState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptionalMobileFeaturesBPLibrary);
	UClass* Z_Construct_UClass_UOptionalMobileFeaturesBPLibrary_NoRegister()
	{
		return UOptionalMobileFeaturesBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UOptionalMobileFeaturesBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptionalMobileFeaturesBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OptionalMobileFeaturesBPLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOptionalMobileFeaturesBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_AreHeadphonesPluggedIn, "AreHeadphonesPluggedIn" }, // 3545562294
		{ &Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_GetBatteryLevel, "GetBatteryLevel" }, // 592149222
		{ &Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_GetBatteryTemperature, "GetBatteryTemperature" }, // 4029808607
		{ &Z_Construct_UFunction_UOptionalMobileFeaturesBPLibrary_GetVolumeState, "GetVolumeState" }, // 2527215499
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptionalMobileFeaturesBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OptionalMobileFeaturesBPLibrary.h" },
		{ "ModuleRelativePath", "Classes/OptionalMobileFeaturesBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptionalMobileFeaturesBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptionalMobileFeaturesBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptionalMobileFeaturesBPLibrary_Statics::ClassParams = {
		&UOptionalMobileFeaturesBPLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptionalMobileFeaturesBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptionalMobileFeaturesBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptionalMobileFeaturesBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UOptionalMobileFeaturesBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptionalMobileFeaturesBPLibrary.OuterSingleton, Z_Construct_UClass_UOptionalMobileFeaturesBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptionalMobileFeaturesBPLibrary.OuterSingleton;
	}
	template<> OPTIONALMOBILEFEATURESBPLIBRARY_API UClass* StaticClass<UOptionalMobileFeaturesBPLibrary>()
	{
		return UOptionalMobileFeaturesBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptionalMobileFeaturesBPLibrary);
	UOptionalMobileFeaturesBPLibrary::~UOptionalMobileFeaturesBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OptionalMobileFeaturesBPLibrary_Source_OptionalMobileFeaturesBPLibrary_Classes_OptionalMobileFeaturesBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OptionalMobileFeaturesBPLibrary_Source_OptionalMobileFeaturesBPLibrary_Classes_OptionalMobileFeaturesBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptionalMobileFeaturesBPLibrary, UOptionalMobileFeaturesBPLibrary::StaticClass, TEXT("UOptionalMobileFeaturesBPLibrary"), &Z_Registration_Info_UClass_UOptionalMobileFeaturesBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptionalMobileFeaturesBPLibrary), 2745723468U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OptionalMobileFeaturesBPLibrary_Source_OptionalMobileFeaturesBPLibrary_Classes_OptionalMobileFeaturesBPLibrary_h_4068030718(TEXT("/Script/OptionalMobileFeaturesBPLibrary"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OptionalMobileFeaturesBPLibrary_Source_OptionalMobileFeaturesBPLibrary_Classes_OptionalMobileFeaturesBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OptionalMobileFeaturesBPLibrary_Source_OptionalMobileFeaturesBPLibrary_Classes_OptionalMobileFeaturesBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
