// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusMR_Settings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusMR_Settings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	OCULUSMR_API UClass* Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings();
	OCULUSMR_API UClass* Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_NoRegister();
	OCULUSMR_API UEnum* Z_Construct_UEnum_OculusMR_EOculusMR_CameraDeviceEnum();
	OCULUSMR_API UEnum* Z_Construct_UEnum_OculusMR_EOculusMR_ClippingReference();
	OCULUSMR_API UEnum* Z_Construct_UEnum_OculusMR_EOculusMR_CompositionMethod();
	OCULUSMR_API UEnum* Z_Construct_UEnum_OculusMR_EOculusMR_PostProcessEffects();
	UPackage* Z_Construct_UPackage__Script_OculusMR();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusMR_CameraDeviceEnum;
	static UEnum* EOculusMR_CameraDeviceEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusMR_CameraDeviceEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusMR_CameraDeviceEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusMR_EOculusMR_CameraDeviceEnum, (UObject*)Z_Construct_UPackage__Script_OculusMR(), TEXT("EOculusMR_CameraDeviceEnum"));
		}
		return Z_Registration_Info_UEnum_EOculusMR_CameraDeviceEnum.OuterSingleton;
	}
	template<> OCULUSMR_API UEnum* StaticEnum<EOculusMR_CameraDeviceEnum>()
	{
		return EOculusMR_CameraDeviceEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusMR_EOculusMR_CameraDeviceEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusMR_EOculusMR_CameraDeviceEnum_Statics::Enumerators[] = {
		{ "EOculusMR_CameraDeviceEnum::CD_None", (int64)EOculusMR_CameraDeviceEnum::CD_None },
		{ "EOculusMR_CameraDeviceEnum::CD_WebCamera0", (int64)EOculusMR_CameraDeviceEnum::CD_WebCamera0 },
		{ "EOculusMR_CameraDeviceEnum::CD_WebCamera1", (int64)EOculusMR_CameraDeviceEnum::CD_WebCamera1 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusMR_EOculusMR_CameraDeviceEnum_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CD_None.DisplayName", "None" },
		{ "CD_None.Name", "EOculusMR_CameraDeviceEnum::CD_None" },
		{ "CD_WebCamera0.DisplayName", "Web Camera 0" },
		{ "CD_WebCamera0.Name", "EOculusMR_CameraDeviceEnum::CD_WebCamera0" },
		{ "CD_WebCamera1.DisplayName", "Web Camera 1" },
		{ "CD_WebCamera1.Name", "EOculusMR_CameraDeviceEnum::CD_WebCamera1" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusMR_EOculusMR_CameraDeviceEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusMR,
		nullptr,
		"EOculusMR_CameraDeviceEnum",
		"EOculusMR_CameraDeviceEnum",
		Z_Construct_UEnum_OculusMR_EOculusMR_CameraDeviceEnum_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusMR_EOculusMR_CameraDeviceEnum_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OculusMR_EOculusMR_CameraDeviceEnum_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OculusMR_EOculusMR_CameraDeviceEnum_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OculusMR_EOculusMR_CameraDeviceEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusMR_CameraDeviceEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusMR_CameraDeviceEnum.InnerSingleton, Z_Construct_UEnum_OculusMR_EOculusMR_CameraDeviceEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusMR_CameraDeviceEnum.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusMR_ClippingReference;
	static UEnum* EOculusMR_ClippingReference_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusMR_ClippingReference.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusMR_ClippingReference.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusMR_EOculusMR_ClippingReference, (UObject*)Z_Construct_UPackage__Script_OculusMR(), TEXT("EOculusMR_ClippingReference"));
		}
		return Z_Registration_Info_UEnum_EOculusMR_ClippingReference.OuterSingleton;
	}
	template<> OCULUSMR_API UEnum* StaticEnum<EOculusMR_ClippingReference>()
	{
		return EOculusMR_ClippingReference_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusMR_EOculusMR_ClippingReference_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusMR_EOculusMR_ClippingReference_Statics::Enumerators[] = {
		{ "EOculusMR_ClippingReference::CR_TrackingReference", (int64)EOculusMR_ClippingReference::CR_TrackingReference },
		{ "EOculusMR_ClippingReference::CR_Head", (int64)EOculusMR_ClippingReference::CR_Head },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusMR_EOculusMR_ClippingReference_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CR_Head.DisplayName", "Head" },
		{ "CR_Head.Name", "EOculusMR_ClippingReference::CR_Head" },
		{ "CR_TrackingReference.DisplayName", "Tracking Reference" },
		{ "CR_TrackingReference.Name", "EOculusMR_ClippingReference::CR_TrackingReference" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusMR_EOculusMR_ClippingReference_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusMR,
		nullptr,
		"EOculusMR_ClippingReference",
		"EOculusMR_ClippingReference",
		Z_Construct_UEnum_OculusMR_EOculusMR_ClippingReference_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusMR_EOculusMR_ClippingReference_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OculusMR_EOculusMR_ClippingReference_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OculusMR_EOculusMR_ClippingReference_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OculusMR_EOculusMR_ClippingReference()
	{
		if (!Z_Registration_Info_UEnum_EOculusMR_ClippingReference.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusMR_ClippingReference.InnerSingleton, Z_Construct_UEnum_OculusMR_EOculusMR_ClippingReference_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusMR_ClippingReference.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusMR_PostProcessEffects;
	static UEnum* EOculusMR_PostProcessEffects_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusMR_PostProcessEffects.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusMR_PostProcessEffects.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusMR_EOculusMR_PostProcessEffects, (UObject*)Z_Construct_UPackage__Script_OculusMR(), TEXT("EOculusMR_PostProcessEffects"));
		}
		return Z_Registration_Info_UEnum_EOculusMR_PostProcessEffects.OuterSingleton;
	}
	template<> OCULUSMR_API UEnum* StaticEnum<EOculusMR_PostProcessEffects>()
	{
		return EOculusMR_PostProcessEffects_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusMR_EOculusMR_PostProcessEffects_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusMR_EOculusMR_PostProcessEffects_Statics::Enumerators[] = {
		{ "EOculusMR_PostProcessEffects::PPE_Off", (int64)EOculusMR_PostProcessEffects::PPE_Off },
		{ "EOculusMR_PostProcessEffects::PPE_On", (int64)EOculusMR_PostProcessEffects::PPE_On },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusMR_EOculusMR_PostProcessEffects_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
		{ "PPE_Off.DisplayName", "Off" },
		{ "PPE_Off.Name", "EOculusMR_PostProcessEffects::PPE_Off" },
		{ "PPE_On.DisplayName", "On" },
		{ "PPE_On.Name", "EOculusMR_PostProcessEffects::PPE_On" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusMR_EOculusMR_PostProcessEffects_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusMR,
		nullptr,
		"EOculusMR_PostProcessEffects",
		"EOculusMR_PostProcessEffects",
		Z_Construct_UEnum_OculusMR_EOculusMR_PostProcessEffects_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusMR_EOculusMR_PostProcessEffects_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OculusMR_EOculusMR_PostProcessEffects_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OculusMR_EOculusMR_PostProcessEffects_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OculusMR_EOculusMR_PostProcessEffects()
	{
		if (!Z_Registration_Info_UEnum_EOculusMR_PostProcessEffects.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusMR_PostProcessEffects.InnerSingleton, Z_Construct_UEnum_OculusMR_EOculusMR_PostProcessEffects_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusMR_PostProcessEffects.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusMR_CompositionMethod;
	static UEnum* EOculusMR_CompositionMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusMR_CompositionMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusMR_CompositionMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusMR_EOculusMR_CompositionMethod, (UObject*)Z_Construct_UPackage__Script_OculusMR(), TEXT("EOculusMR_CompositionMethod"));
		}
		return Z_Registration_Info_UEnum_EOculusMR_CompositionMethod.OuterSingleton;
	}
	template<> OCULUSMR_API UEnum* StaticEnum<EOculusMR_CompositionMethod>()
	{
		return EOculusMR_CompositionMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusMR_EOculusMR_CompositionMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusMR_EOculusMR_CompositionMethod_Statics::Enumerators[] = {
		{ "EOculusMR_CompositionMethod::ExternalComposition", (int64)EOculusMR_CompositionMethod::ExternalComposition },
		{ "EOculusMR_CompositionMethod::DirectComposition", (int64)EOculusMR_CompositionMethod::DirectComposition },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusMR_EOculusMR_CompositionMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DirectComposition.Comment", "/* Composite the camera stream directly to the output with the proper depth.*/" },
		{ "DirectComposition.DisplayName", "Direct Composition" },
		{ "DirectComposition.Name", "EOculusMR_CompositionMethod::DirectComposition" },
		{ "DirectComposition.ToolTip", "Composite the camera stream directly to the output with the proper depth." },
		{ "ExternalComposition.Comment", "/* Generate both foreground and background views for compositing with 3rd-party software like OBS. */" },
		{ "ExternalComposition.DisplayName", "External Composition" },
		{ "ExternalComposition.Name", "EOculusMR_CompositionMethod::ExternalComposition" },
		{ "ExternalComposition.ToolTip", "Generate both foreground and background views for compositing with 3rd-party software like OBS." },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusMR_EOculusMR_CompositionMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusMR,
		nullptr,
		"EOculusMR_CompositionMethod",
		"EOculusMR_CompositionMethod",
		Z_Construct_UEnum_OculusMR_EOculusMR_CompositionMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusMR_EOculusMR_CompositionMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OculusMR_EOculusMR_CompositionMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OculusMR_EOculusMR_CompositionMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OculusMR_EOculusMR_CompositionMethod()
	{
		if (!Z_Registration_Info_UEnum_EOculusMR_CompositionMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusMR_CompositionMethod.InnerSingleton, Z_Construct_UEnum_OculusMR_EOculusMR_CompositionMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusMR_CompositionMethod.InnerSingleton;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusMR_Settings::execSaveToIni)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveToIni();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusMR_Settings::execLoadFromIni)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadFromIni();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusMR_Settings::execGetBindToTrackedCameraIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetBindToTrackedCameraIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusMR_Settings::execBindToTrackedCameraIndexIfAvailable)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InTrackedCameraIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindToTrackedCameraIndexIfAvailable(Z_Param_InTrackedCameraIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusMR_Settings::execSetIsCasting)
	{
		P_GET_UBOOL(Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsCasting(Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusMR_Settings::execGetIsCasting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsCasting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusMR_Settings::execSetCapturingCamera)
	{
		P_GET_ENUM(EOculusMR_CameraDeviceEnum,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCapturingCamera(EOculusMR_CameraDeviceEnum(Z_Param_val));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusMR_Settings::execGetCapturingCamera)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOculusMR_CameraDeviceEnum*)Z_Param__Result=P_THIS->GetCapturingCamera();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusMR_Settings::execSetCompositionMethod)
	{
		P_GET_ENUM(EOculusMR_CompositionMethod,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCompositionMethod(EOculusMR_CompositionMethod(Z_Param_val));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusMR_Settings::execGetCompositionMethod)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOculusMR_CompositionMethod*)Z_Param__Result=P_THIS->GetCompositionMethod();
		P_NATIVE_END;
	}
	void UDEPRECATED_UOculusMR_Settings::StaticRegisterNativesUDEPRECATED_UOculusMR_Settings()
	{
		UClass* Class = UDEPRECATED_UOculusMR_Settings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindToTrackedCameraIndexIfAvailable", &UDEPRECATED_UOculusMR_Settings::execBindToTrackedCameraIndexIfAvailable },
			{ "GetBindToTrackedCameraIndex", &UDEPRECATED_UOculusMR_Settings::execGetBindToTrackedCameraIndex },
			{ "GetCapturingCamera", &UDEPRECATED_UOculusMR_Settings::execGetCapturingCamera },
			{ "GetCompositionMethod", &UDEPRECATED_UOculusMR_Settings::execGetCompositionMethod },
			{ "GetIsCasting", &UDEPRECATED_UOculusMR_Settings::execGetIsCasting },
			{ "LoadFromIni", &UDEPRECATED_UOculusMR_Settings::execLoadFromIni },
			{ "SaveToIni", &UDEPRECATED_UOculusMR_Settings::execSaveToIni },
			{ "SetCapturingCamera", &UDEPRECATED_UOculusMR_Settings::execSetCapturingCamera },
			{ "SetCompositionMethod", &UDEPRECATED_UOculusMR_Settings::execSetCompositionMethod },
			{ "SetIsCasting", &UDEPRECATED_UOculusMR_Settings::execSetIsCasting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_BindToTrackedCameraIndexIfAvailable_Statics
	{
		struct UOculusMR_Settings_eventBindToTrackedCameraIndexIfAvailable_Parms
		{
			int32 InTrackedCameraIndex;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_InTrackedCameraIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_BindToTrackedCameraIndexIfAvailable_Statics::NewProp_InTrackedCameraIndex = { "InTrackedCameraIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusMR_Settings_eventBindToTrackedCameraIndexIfAvailable_Parms, InTrackedCameraIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_BindToTrackedCameraIndexIfAvailable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_BindToTrackedCameraIndexIfAvailable_Statics::NewProp_InTrackedCameraIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_BindToTrackedCameraIndexIfAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusMR" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The OculusVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_BindToTrackedCameraIndexIfAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings, nullptr, "BindToTrackedCameraIndexIfAvailable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_BindToTrackedCameraIndexIfAvailable_Statics::UOculusMR_Settings_eventBindToTrackedCameraIndexIfAvailable_Parms), Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_BindToTrackedCameraIndexIfAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_BindToTrackedCameraIndexIfAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_BindToTrackedCameraIndexIfAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_BindToTrackedCameraIndexIfAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_BindToTrackedCameraIndexIfAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_BindToTrackedCameraIndexIfAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetBindToTrackedCameraIndex_Statics
	{
		struct UOculusMR_Settings_eventGetBindToTrackedCameraIndex_Parms
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
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetBindToTrackedCameraIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusMR_Settings_eventGetBindToTrackedCameraIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetBindToTrackedCameraIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetBindToTrackedCameraIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetBindToTrackedCameraIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusMR" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The OculusVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetBindToTrackedCameraIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings, nullptr, "GetBindToTrackedCameraIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetBindToTrackedCameraIndex_Statics::UOculusMR_Settings_eventGetBindToTrackedCameraIndex_Parms), Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetBindToTrackedCameraIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetBindToTrackedCameraIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetBindToTrackedCameraIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetBindToTrackedCameraIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetBindToTrackedCameraIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetBindToTrackedCameraIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetCapturingCamera_Statics
	{
		struct UOculusMR_Settings_eventGetCapturingCamera_Parms
		{
			EOculusMR_CameraDeviceEnum ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetCapturingCamera_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetCapturingCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusMR_Settings_eventGetCapturingCamera_Parms, ReturnValue), Z_Construct_UEnum_OculusMR_EOculusMR_CameraDeviceEnum, METADATA_PARAMS(nullptr, 0) }; // 2428873684
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetCapturingCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetCapturingCamera_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetCapturingCamera_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetCapturingCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusMR" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The OculusVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetCapturingCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings, nullptr, "GetCapturingCamera", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetCapturingCamera_Statics::UOculusMR_Settings_eventGetCapturingCamera_Parms), Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetCapturingCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetCapturingCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetCapturingCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetCapturingCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetCapturingCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetCapturingCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetCompositionMethod_Statics
	{
		struct UOculusMR_Settings_eventGetCompositionMethod_Parms
		{
			EOculusMR_CompositionMethod ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetCompositionMethod_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetCompositionMethod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusMR_Settings_eventGetCompositionMethod_Parms, ReturnValue), Z_Construct_UEnum_OculusMR_EOculusMR_CompositionMethod, METADATA_PARAMS(nullptr, 0) }; // 3570676287
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetCompositionMethod_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetCompositionMethod_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetCompositionMethod_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetCompositionMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusMR" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The OculusVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetCompositionMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings, nullptr, "GetCompositionMethod", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetCompositionMethod_Statics::UOculusMR_Settings_eventGetCompositionMethod_Parms), Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetCompositionMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetCompositionMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetCompositionMethod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetCompositionMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetCompositionMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetCompositionMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetIsCasting_Statics
	{
		struct UOculusMR_Settings_eventGetIsCasting_Parms
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
	void Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetIsCasting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UOculusMR_Settings_eventGetIsCasting_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetIsCasting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOculusMR_Settings_eventGetIsCasting_Parms), &Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetIsCasting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetIsCasting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetIsCasting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetIsCasting_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusMR" },
		{ "Comment", "/** Is MRC on and off */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The OculusVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
		{ "ToolTip", "Is MRC on and off" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetIsCasting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings, nullptr, "GetIsCasting", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetIsCasting_Statics::UOculusMR_Settings_eventGetIsCasting_Parms), Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetIsCasting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetIsCasting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetIsCasting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetIsCasting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetIsCasting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetIsCasting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_LoadFromIni_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_LoadFromIni_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusMR" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The OculusVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_LoadFromIni_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings, nullptr, "LoadFromIni", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_LoadFromIni_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_LoadFromIni_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_LoadFromIni()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_LoadFromIni_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SaveToIni_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SaveToIni_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusMR" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The OculusVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SaveToIni_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings, nullptr, "SaveToIni", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SaveToIni_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SaveToIni_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SaveToIni()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SaveToIni_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SetCapturingCamera_Statics
	{
		struct UOculusMR_Settings_eventSetCapturingCamera_Parms
		{
			EOculusMR_CameraDeviceEnum val;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_val_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_val;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SetCapturingCamera_Statics::NewProp_val_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SetCapturingCamera_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusMR_Settings_eventSetCapturingCamera_Parms, val), Z_Construct_UEnum_OculusMR_EOculusMR_CameraDeviceEnum, METADATA_PARAMS(nullptr, 0) }; // 2428873684
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SetCapturingCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SetCapturingCamera_Statics::NewProp_val_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SetCapturingCamera_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SetCapturingCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusMR" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The OculusVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SetCapturingCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings, nullptr, "SetCapturingCamera", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SetCapturingCamera_Statics::UOculusMR_Settings_eventSetCapturingCamera_Parms), Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SetCapturingCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SetCapturingCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SetCapturingCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SetCapturingCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SetCapturingCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SetCapturingCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SetCompositionMethod_Statics
	{
		struct UOculusMR_Settings_eventSetCompositionMethod_Parms
		{
			EOculusMR_CompositionMethod val;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_val_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_val;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SetCompositionMethod_Statics::NewProp_val_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SetCompositionMethod_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusMR_Settings_eventSetCompositionMethod_Parms, val), Z_Construct_UEnum_OculusMR_EOculusMR_CompositionMethod, METADATA_PARAMS(nullptr, 0) }; // 3570676287
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SetCompositionMethod_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SetCompositionMethod_Statics::NewProp_val_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SetCompositionMethod_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SetCompositionMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusMR" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The OculusVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SetCompositionMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings, nullptr, "SetCompositionMethod", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SetCompositionMethod_Statics::UOculusMR_Settings_eventSetCompositionMethod_Parms), Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SetCompositionMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SetCompositionMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SetCompositionMethod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SetCompositionMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SetCompositionMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SetCompositionMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SetIsCasting_Statics
	{
		struct UOculusMR_Settings_eventSetIsCasting_Parms
		{
			bool val;
		};
		static void NewProp_val_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_val;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SetIsCasting_Statics::NewProp_val_SetBit(void* Obj)
	{
		((UOculusMR_Settings_eventSetIsCasting_Parms*)Obj)->val = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SetIsCasting_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOculusMR_Settings_eventSetIsCasting_Parms), &Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SetIsCasting_Statics::NewProp_val_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SetIsCasting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SetIsCasting_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SetIsCasting_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusMR" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The OculusVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SetIsCasting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings, nullptr, "SetIsCasting", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SetIsCasting_Statics::UOculusMR_Settings_eventSetIsCasting_Parms), Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SetIsCasting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SetIsCasting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SetIsCasting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SetIsCasting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SetIsCasting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SetIsCasting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_UOculusMR_Settings);
	UClass* Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_NoRegister()
	{
		return UDEPRECATED_UOculusMR_Settings::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ClippingReference_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClippingReference_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ClippingReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseTrackedCameraResolution_MetaData[];
#endif
		static void NewProp_bUseTrackedCameraResolution_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTrackedCameraResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidthPerView_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_WidthPerView;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightPerView_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_HeightPerView;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CastingLatency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CastingLatency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackdropColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackdropColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandPoseStateLatency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HandPoseStateLatency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChromaKeyColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChromaKeyColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChromaKeySimilarity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ChromaKeySimilarity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChromaKeySmoothRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ChromaKeySmoothRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChromaKeySpillRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ChromaKeySpillRange;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ExternalCompositionPostProcessEffects_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalCompositionPostProcessEffects_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ExternalCompositionPostProcessEffects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCasting_MetaData[];
#endif
		static void NewProp_bIsCasting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCasting;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CompositionMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompositionMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CompositionMethod;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CapturingCamera_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapturingCamera_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CapturingCamera;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusMR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_BindToTrackedCameraIndexIfAvailable, "BindToTrackedCameraIndexIfAvailable" }, // 2846021112
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetBindToTrackedCameraIndex, "GetBindToTrackedCameraIndex" }, // 3644999208
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetCapturingCamera, "GetCapturingCamera" }, // 152913346
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetCompositionMethod, "GetCompositionMethod" }, // 186147391
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_GetIsCasting, "GetIsCasting" }, // 1642670158
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_LoadFromIni, "LoadFromIni" }, // 4105079985
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SaveToIni, "SaveToIni" }, // 2861202565
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SetCapturingCamera, "SetCapturingCamera" }, // 305690037
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SetCompositionMethod, "SetCompositionMethod" }, // 4102045460
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusMR_Settings_SetIsCasting, "SetIsCasting" }, // 1943041272
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "OculusMR" },
		{ "DeprecationMessage", "OculusVR plugin is deprecated; please use the built-in OpenXR plugin or OculusXR plugin from the Marketplace." },
		{ "IncludePath", "OculusMR_Settings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_ClippingReference_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_ClippingReference_MetaData[] = {
		{ "Category", "OculusMR" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_ClippingReference = { "ClippingReference", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_UOculusMR_Settings, ClippingReference), Z_Construct_UEnum_OculusMR_EOculusMR_ClippingReference, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_ClippingReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_ClippingReference_MetaData)) }; // 2871245318
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_bUseTrackedCameraResolution_MetaData[] = {
		{ "Category", "OculusMR" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
	};
#endif
	void Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_bUseTrackedCameraResolution_SetBit(void* Obj)
	{
		((UDEPRECATED_UOculusMR_Settings*)Obj)->bUseTrackedCameraResolution = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_bUseTrackedCameraResolution = { "bUseTrackedCameraResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDEPRECATED_UOculusMR_Settings), &Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_bUseTrackedCameraResolution_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_bUseTrackedCameraResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_bUseTrackedCameraResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_WidthPerView_MetaData[] = {
		{ "Category", "OculusMR" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_WidthPerView = { "WidthPerView", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_UOculusMR_Settings, WidthPerView), METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_WidthPerView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_WidthPerView_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_HeightPerView_MetaData[] = {
		{ "Category", "OculusMR" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_HeightPerView = { "HeightPerView", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_UOculusMR_Settings, HeightPerView), METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_HeightPerView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_HeightPerView_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_CastingLatency_MetaData[] = {
		{ "Category", "OculusMR" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
		{ "UIMax", "0.1" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_CastingLatency = { "CastingLatency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_UOculusMR_Settings, CastingLatency), METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_CastingLatency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_CastingLatency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_BackdropColor_MetaData[] = {
		{ "Category", "OculusMR" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_BackdropColor = { "BackdropColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_UOculusMR_Settings, BackdropColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_BackdropColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_BackdropColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_HandPoseStateLatency_MetaData[] = {
		{ "Category", "OculusMR" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
		{ "UIMax", "0.5" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_HandPoseStateLatency = { "HandPoseStateLatency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_UOculusMR_Settings, HandPoseStateLatency), METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_HandPoseStateLatency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_HandPoseStateLatency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_ChromaKeyColor_MetaData[] = {
		{ "Category", "OculusMR" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_ChromaKeyColor = { "ChromaKeyColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_UOculusMR_Settings, ChromaKeyColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_ChromaKeyColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_ChromaKeyColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_ChromaKeySimilarity_MetaData[] = {
		{ "Category", "OculusMR" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_ChromaKeySimilarity = { "ChromaKeySimilarity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_UOculusMR_Settings, ChromaKeySimilarity), METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_ChromaKeySimilarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_ChromaKeySimilarity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_ChromaKeySmoothRange_MetaData[] = {
		{ "Category", "OculusMR" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
		{ "UIMax", "0.2" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_ChromaKeySmoothRange = { "ChromaKeySmoothRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_UOculusMR_Settings, ChromaKeySmoothRange), METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_ChromaKeySmoothRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_ChromaKeySmoothRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_ChromaKeySpillRange_MetaData[] = {
		{ "Category", "OculusMR" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
		{ "UIMax", "0.2" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_ChromaKeySpillRange = { "ChromaKeySpillRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_UOculusMR_Settings, ChromaKeySpillRange), METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_ChromaKeySpillRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_ChromaKeySpillRange_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_ExternalCompositionPostProcessEffects_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_ExternalCompositionPostProcessEffects_MetaData[] = {
		{ "Category", "OculusMR" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_ExternalCompositionPostProcessEffects = { "ExternalCompositionPostProcessEffects", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_UOculusMR_Settings, ExternalCompositionPostProcessEffects), Z_Construct_UEnum_OculusMR_EOculusMR_PostProcessEffects, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_ExternalCompositionPostProcessEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_ExternalCompositionPostProcessEffects_MetaData)) }; // 2753237882
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_bIsCasting_MetaData[] = {
		{ "Comment", "/** Turns MRC on and off (does not get saved to or loaded from ini) */" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
		{ "ToolTip", "Turns MRC on and off (does not get saved to or loaded from ini)" },
	};
#endif
	void Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_bIsCasting_SetBit(void* Obj)
	{
		((UDEPRECATED_UOculusMR_Settings*)Obj)->bIsCasting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_bIsCasting = { "bIsCasting", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDEPRECATED_UOculusMR_Settings), &Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_bIsCasting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_bIsCasting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_bIsCasting_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_CompositionMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_CompositionMethod_MetaData[] = {
		{ "Comment", "/** ExternalComposition: The casting window includes the background and foreground view\n\x09  * DirectComposition: The game scene would be composited with the camera frame directly\n\x09  */" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
		{ "ToolTip", "ExternalComposition: The casting window includes the background and foreground view\nDirectComposition: The game scene would be composited with the camera frame directly" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_CompositionMethod = { "CompositionMethod", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_UOculusMR_Settings, CompositionMethod), Z_Construct_UEnum_OculusMR_EOculusMR_CompositionMethod, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_CompositionMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_CompositionMethod_MetaData)) }; // 3570676287
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_CapturingCamera_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_CapturingCamera_MetaData[] = {
		{ "Comment", "/** When CompositionMethod is DirectComposition, the physical camera device which provide the frame */" },
		{ "ModuleRelativePath", "Public/OculusMR_Settings.h" },
		{ "ToolTip", "When CompositionMethod is DirectComposition, the physical camera device which provide the frame" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_CapturingCamera = { "CapturingCamera", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_UOculusMR_Settings, CapturingCamera), Z_Construct_UEnum_OculusMR_EOculusMR_CameraDeviceEnum, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_CapturingCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_CapturingCamera_MetaData)) }; // 2428873684
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_ClippingReference_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_ClippingReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_bUseTrackedCameraResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_WidthPerView,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_HeightPerView,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_CastingLatency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_BackdropColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_HandPoseStateLatency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_ChromaKeyColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_ChromaKeySimilarity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_ChromaKeySmoothRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_ChromaKeySpillRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_ExternalCompositionPostProcessEffects_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_ExternalCompositionPostProcessEffects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_bIsCasting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_CompositionMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_CompositionMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_CapturingCamera_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::NewProp_CapturingCamera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_UOculusMR_Settings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::ClassParams = {
		&UDEPRECATED_UOculusMR_Settings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::PropPointers),
		0,
		0x020002A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_UOculusMR_Settings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_UOculusMR_Settings.OuterSingleton, Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_UOculusMR_Settings.OuterSingleton;
	}
	template<> OCULUSMR_API UClass* StaticClass<UDEPRECATED_UOculusMR_Settings>()
	{
		return UDEPRECATED_UOculusMR_Settings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_UOculusMR_Settings);
	UDEPRECATED_UOculusMR_Settings::~UDEPRECATED_UOculusMR_Settings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMR_Settings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMR_Settings_h_Statics::EnumInfo[] = {
		{ EOculusMR_CameraDeviceEnum_StaticEnum, TEXT("EOculusMR_CameraDeviceEnum"), &Z_Registration_Info_UEnum_EOculusMR_CameraDeviceEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2428873684U) },
		{ EOculusMR_ClippingReference_StaticEnum, TEXT("EOculusMR_ClippingReference"), &Z_Registration_Info_UEnum_EOculusMR_ClippingReference, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2871245318U) },
		{ EOculusMR_PostProcessEffects_StaticEnum, TEXT("EOculusMR_PostProcessEffects"), &Z_Registration_Info_UEnum_EOculusMR_PostProcessEffects, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2753237882U) },
		{ EOculusMR_CompositionMethod_StaticEnum, TEXT("EOculusMR_CompositionMethod"), &Z_Registration_Info_UEnum_EOculusMR_CompositionMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3570676287U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMR_Settings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings, UDEPRECATED_UOculusMR_Settings::StaticClass, TEXT("UDEPRECATED_UOculusMR_Settings"), &Z_Registration_Info_UClass_UDEPRECATED_UOculusMR_Settings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_UOculusMR_Settings), 890729242U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMR_Settings_h_1058349730(TEXT("/Script/OculusMR"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMR_Settings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMR_Settings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMR_Settings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMR_Settings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
