// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenXRInputFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenXRInputFunctionLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UPlayerMappableInputConfig_NoRegister();
	OPENXRINPUT_API UClass* Z_Construct_UClass_UOpenXRInputFunctionLibrary();
	OPENXRINPUT_API UClass* Z_Construct_UClass_UOpenXRInputFunctionLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OpenXRInput();
// End Cross Module References
	DEFINE_FUNCTION(UOpenXRInputFunctionLibrary::execEndXRSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UOpenXRInputFunctionLibrary::EndXRSession();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenXRInputFunctionLibrary::execBeginXRSession)
	{
		P_GET_OBJECT(UPlayerMappableInputConfig,Z_Param_InputConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOpenXRInputFunctionLibrary::BeginXRSession(Z_Param_InputConfig);
		P_NATIVE_END;
	}
	void UOpenXRInputFunctionLibrary::StaticRegisterNativesUOpenXRInputFunctionLibrary()
	{
		UClass* Class = UOpenXRInputFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginXRSession", &UOpenXRInputFunctionLibrary::execBeginXRSession },
			{ "EndXRSession", &UOpenXRInputFunctionLibrary::execEndXRSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOpenXRInputFunctionLibrary_BeginXRSession_Statics
	{
		struct OpenXRInputFunctionLibrary_eventBeginXRSession_Parms
		{
			UPlayerMappableInputConfig* InputConfig;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputConfig;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenXRInputFunctionLibrary_BeginXRSession_Statics::NewProp_InputConfig = { "InputConfig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenXRInputFunctionLibrary_eventBeginXRSession_Parms, InputConfig), Z_Construct_UClass_UPlayerMappableInputConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOpenXRInputFunctionLibrary_BeginXRSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OpenXRInputFunctionLibrary_eventBeginXRSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOpenXRInputFunctionLibrary_BeginXRSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OpenXRInputFunctionLibrary_eventBeginXRSession_Parms), &Z_Construct_UFunction_UOpenXRInputFunctionLibrary_BeginXRSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenXRInputFunctionLibrary_BeginXRSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRInputFunctionLibrary_BeginXRSession_Statics::NewProp_InputConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenXRInputFunctionLibrary_BeginXRSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenXRInputFunctionLibrary_BeginXRSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|XRTracking" },
		{ "Comment", "/**\n\x09* Add a player mappable input config for Enhanced Input. This will make the tracking system aware of the actions and bindings that are used for XR motion controllers.\n\x09* Attaching input configs to the session can only be done once, so if multiple input configs need to be added only check AttachToSession for the last input config.\n\x09* \n\x09* @param InputConfig\x09\x09The path to the player mappable input config asset\n\x09* @param AttachToSession\x09""Attach all pending configs to the running session\n\x09*\n\x09* @return\x09\x09\x09""False if the input config can't be attached to the session, true otherwise\n\x09*/" },
		{ "ModuleRelativePath", "Public/OpenXRInputFunctionLibrary.h" },
		{ "ToolTip", "Add a player mappable input config for Enhanced Input. This will make the tracking system aware of the actions and bindings that are used for XR motion controllers.\nAttaching input configs to the session can only be done once, so if multiple input configs need to be added only check AttachToSession for the last input config.\n\n@param InputConfig            The path to the player mappable input config asset\n@param AttachToSession        Attach all pending configs to the running session\n\n@return                       False if the input config can't be attached to the session, true otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenXRInputFunctionLibrary_BeginXRSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenXRInputFunctionLibrary, nullptr, "BeginXRSession", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOpenXRInputFunctionLibrary_BeginXRSession_Statics::OpenXRInputFunctionLibrary_eventBeginXRSession_Parms), Z_Construct_UFunction_UOpenXRInputFunctionLibrary_BeginXRSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRInputFunctionLibrary_BeginXRSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenXRInputFunctionLibrary_BeginXRSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRInputFunctionLibrary_BeginXRSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenXRInputFunctionLibrary_BeginXRSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOpenXRInputFunctionLibrary_BeginXRSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenXRInputFunctionLibrary_EndXRSession_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenXRInputFunctionLibrary_EndXRSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|XRTracking" },
		{ "ModuleRelativePath", "Public/OpenXRInputFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenXRInputFunctionLibrary_EndXRSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenXRInputFunctionLibrary, nullptr, "EndXRSession", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenXRInputFunctionLibrary_EndXRSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenXRInputFunctionLibrary_EndXRSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenXRInputFunctionLibrary_EndXRSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOpenXRInputFunctionLibrary_EndXRSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOpenXRInputFunctionLibrary);
	UClass* Z_Construct_UClass_UOpenXRInputFunctionLibrary_NoRegister()
	{
		return UOpenXRInputFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UOpenXRInputFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpenXRInputFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenXRInput,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOpenXRInputFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOpenXRInputFunctionLibrary_BeginXRSession, "BeginXRSession" }, // 2974879126
		{ &Z_Construct_UFunction_UOpenXRInputFunctionLibrary_EndXRSession, "EndXRSession" }, // 255869074
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRInputFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OpenXRInputFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/OpenXRInputFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpenXRInputFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenXRInputFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOpenXRInputFunctionLibrary_Statics::ClassParams = {
		&UOpenXRInputFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOpenXRInputFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRInputFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOpenXRInputFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UOpenXRInputFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOpenXRInputFunctionLibrary.OuterSingleton, Z_Construct_UClass_UOpenXRInputFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOpenXRInputFunctionLibrary.OuterSingleton;
	}
	template<> OPENXRINPUT_API UClass* StaticClass<UOpenXRInputFunctionLibrary>()
	{
		return UOpenXRInputFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenXRInputFunctionLibrary);
	UOpenXRInputFunctionLibrary::~UOpenXRInputFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenXR_Source_OpenXRInput_Public_OpenXRInputFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenXR_Source_OpenXRInput_Public_OpenXRInputFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOpenXRInputFunctionLibrary, UOpenXRInputFunctionLibrary::StaticClass, TEXT("UOpenXRInputFunctionLibrary"), &Z_Registration_Info_UClass_UOpenXRInputFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOpenXRInputFunctionLibrary), 2068339977U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenXR_Source_OpenXRInput_Public_OpenXRInputFunctionLibrary_h_92846914(TEXT("/Script/OpenXRInput"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenXR_Source_OpenXRInput_Public_OpenXRInputFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenXR_Source_OpenXRInput_Public_OpenXRInputFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
