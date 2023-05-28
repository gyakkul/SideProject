// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MrcUtilLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMrcUtilLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	MIXEDREALITYCAPTUREFRAMEWORK_API UClass* Z_Construct_UClass_UMrcUtilLibrary();
	MIXEDREALITYCAPTUREFRAMEWORK_API UClass* Z_Construct_UClass_UMrcUtilLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MixedRealityCaptureFramework();
// End Cross Module References
	DEFINE_FUNCTION(UMrcUtilLibrary::execGetMixedRealityCaptureTexture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture**)Z_Param__Result=UMrcUtilLibrary::GetMixedRealityCaptureTexture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMrcUtilLibrary::execSetMixedRealityCaptureBroadcasting)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMrcUtilLibrary::SetMixedRealityCaptureBroadcasting(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMrcUtilLibrary::execIsMixedRealityCaptureBroadcasting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMrcUtilLibrary::IsMixedRealityCaptureBroadcasting();
		P_NATIVE_END;
	}
	void UMrcUtilLibrary::StaticRegisterNativesUMrcUtilLibrary()
	{
		UClass* Class = UMrcUtilLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMixedRealityCaptureTexture", &UMrcUtilLibrary::execGetMixedRealityCaptureTexture },
			{ "IsMixedRealityCaptureBroadcasting", &UMrcUtilLibrary::execIsMixedRealityCaptureBroadcasting },
			{ "SetMixedRealityCaptureBroadcasting", &UMrcUtilLibrary::execSetMixedRealityCaptureBroadcasting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMrcUtilLibrary_GetMixedRealityCaptureTexture_Statics
	{
		struct MrcUtilLibrary_eventGetMixedRealityCaptureTexture_Parms
		{
			UTexture* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMrcUtilLibrary_GetMixedRealityCaptureTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MrcUtilLibrary_eventGetMixedRealityCaptureTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMrcUtilLibrary_GetMixedRealityCaptureTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMrcUtilLibrary_GetMixedRealityCaptureTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMrcUtilLibrary_GetMixedRealityCaptureTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "MixedRealityCapture|Utils" },
		{ "Comment", "/**\n\x09 * Return the Capture Texture, or nullptr if there isn't one.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MrcUtilLibrary.h" },
		{ "ToolTip", "Return the Capture Texture, or nullptr if there isn't one." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMrcUtilLibrary_GetMixedRealityCaptureTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMrcUtilLibrary, nullptr, "GetMixedRealityCaptureTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMrcUtilLibrary_GetMixedRealityCaptureTexture_Statics::MrcUtilLibrary_eventGetMixedRealityCaptureTexture_Parms), Z_Construct_UFunction_UMrcUtilLibrary_GetMixedRealityCaptureTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMrcUtilLibrary_GetMixedRealityCaptureTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMrcUtilLibrary_GetMixedRealityCaptureTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMrcUtilLibrary_GetMixedRealityCaptureTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMrcUtilLibrary_GetMixedRealityCaptureTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMrcUtilLibrary_GetMixedRealityCaptureTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMrcUtilLibrary_IsMixedRealityCaptureBroadcasting_Statics
	{
		struct MrcUtilLibrary_eventIsMixedRealityCaptureBroadcasting_Parms
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
	void Z_Construct_UFunction_UMrcUtilLibrary_IsMixedRealityCaptureBroadcasting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MrcUtilLibrary_eventIsMixedRealityCaptureBroadcasting_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMrcUtilLibrary_IsMixedRealityCaptureBroadcasting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MrcUtilLibrary_eventIsMixedRealityCaptureBroadcasting_Parms), &Z_Construct_UFunction_UMrcUtilLibrary_IsMixedRealityCaptureBroadcasting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMrcUtilLibrary_IsMixedRealityCaptureBroadcasting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMrcUtilLibrary_IsMixedRealityCaptureBroadcasting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMrcUtilLibrary_IsMixedRealityCaptureBroadcasting_Statics::Function_MetaDataParams[] = {
		{ "Category", "MixedRealityCapture|Utils" },
		{ "Comment", "/**\n\x09 * Return true if the system is sending the capture texture to the spectator screen.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MrcUtilLibrary.h" },
		{ "ToolTip", "Return true if the system is sending the capture texture to the spectator screen." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMrcUtilLibrary_IsMixedRealityCaptureBroadcasting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMrcUtilLibrary, nullptr, "IsMixedRealityCaptureBroadcasting", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMrcUtilLibrary_IsMixedRealityCaptureBroadcasting_Statics::MrcUtilLibrary_eventIsMixedRealityCaptureBroadcasting_Parms), Z_Construct_UFunction_UMrcUtilLibrary_IsMixedRealityCaptureBroadcasting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMrcUtilLibrary_IsMixedRealityCaptureBroadcasting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMrcUtilLibrary_IsMixedRealityCaptureBroadcasting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMrcUtilLibrary_IsMixedRealityCaptureBroadcasting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMrcUtilLibrary_IsMixedRealityCaptureBroadcasting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMrcUtilLibrary_IsMixedRealityCaptureBroadcasting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMrcUtilLibrary_SetMixedRealityCaptureBroadcasting_Statics
	{
		struct MrcUtilLibrary_eventSetMixedRealityCaptureBroadcasting_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMrcUtilLibrary_SetMixedRealityCaptureBroadcasting_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((MrcUtilLibrary_eventSetMixedRealityCaptureBroadcasting_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMrcUtilLibrary_SetMixedRealityCaptureBroadcasting_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MrcUtilLibrary_eventSetMixedRealityCaptureBroadcasting_Parms), &Z_Construct_UFunction_UMrcUtilLibrary_SetMixedRealityCaptureBroadcasting_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMrcUtilLibrary_SetMixedRealityCaptureBroadcasting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMrcUtilLibrary_SetMixedRealityCaptureBroadcasting_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMrcUtilLibrary_SetMixedRealityCaptureBroadcasting_Statics::Function_MetaDataParams[] = {
		{ "Category", "MixedRealityCapture|Utils" },
		{ "Comment", "/**\n\x09 * Toggle whether the capture system is sending the capture texture to the spectator screen or not.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MrcUtilLibrary.h" },
		{ "ToolTip", "Toggle whether the capture system is sending the capture texture to the spectator screen or not." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMrcUtilLibrary_SetMixedRealityCaptureBroadcasting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMrcUtilLibrary, nullptr, "SetMixedRealityCaptureBroadcasting", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMrcUtilLibrary_SetMixedRealityCaptureBroadcasting_Statics::MrcUtilLibrary_eventSetMixedRealityCaptureBroadcasting_Parms), Z_Construct_UFunction_UMrcUtilLibrary_SetMixedRealityCaptureBroadcasting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMrcUtilLibrary_SetMixedRealityCaptureBroadcasting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMrcUtilLibrary_SetMixedRealityCaptureBroadcasting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMrcUtilLibrary_SetMixedRealityCaptureBroadcasting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMrcUtilLibrary_SetMixedRealityCaptureBroadcasting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMrcUtilLibrary_SetMixedRealityCaptureBroadcasting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMrcUtilLibrary);
	UClass* Z_Construct_UClass_UMrcUtilLibrary_NoRegister()
	{
		return UMrcUtilLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMrcUtilLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMrcUtilLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MixedRealityCaptureFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMrcUtilLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMrcUtilLibrary_GetMixedRealityCaptureTexture, "GetMixedRealityCaptureTexture" }, // 3264450525
		{ &Z_Construct_UFunction_UMrcUtilLibrary_IsMixedRealityCaptureBroadcasting, "IsMixedRealityCaptureBroadcasting" }, // 2338990899
		{ &Z_Construct_UFunction_UMrcUtilLibrary_SetMixedRealityCaptureBroadcasting, "SetMixedRealityCaptureBroadcasting" }, // 1268113531
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMrcUtilLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MrcUtilLibrary.h" },
		{ "ModuleRelativePath", "Public/MrcUtilLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMrcUtilLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMrcUtilLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMrcUtilLibrary_Statics::ClassParams = {
		&UMrcUtilLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMrcUtilLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMrcUtilLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMrcUtilLibrary()
	{
		if (!Z_Registration_Info_UClass_UMrcUtilLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMrcUtilLibrary.OuterSingleton, Z_Construct_UClass_UMrcUtilLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMrcUtilLibrary.OuterSingleton;
	}
	template<> MIXEDREALITYCAPTUREFRAMEWORK_API UClass* StaticClass<UMrcUtilLibrary>()
	{
		return UMrcUtilLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMrcUtilLibrary);
	UMrcUtilLibrary::~UMrcUtilLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcUtilLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcUtilLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMrcUtilLibrary, UMrcUtilLibrary::StaticClass, TEXT("UMrcUtilLibrary"), &Z_Registration_Info_UClass_UMrcUtilLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMrcUtilLibrary), 72922392U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcUtilLibrary_h_2169967181(TEXT("/Script/MixedRealityCaptureFramework"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcUtilLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcUtilLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
