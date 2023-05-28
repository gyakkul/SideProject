// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenColorIOBlueprintLibrary.h"
#include "OpenColorIOColorSpace.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenColorIOBlueprintLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	OPENCOLORIO_API UClass* Z_Construct_UClass_UOpenColorIOBlueprintLibrary();
	OPENCOLORIO_API UClass* Z_Construct_UClass_UOpenColorIOBlueprintLibrary_NoRegister();
	OPENCOLORIO_API UScriptStruct* Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings();
	UPackage* Z_Construct_UPackage__Script_OpenColorIO();
// End Cross Module References
	DEFINE_FUNCTION(UOpenColorIOBlueprintLibrary::execApplyColorSpaceTransform)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FOpenColorIOColorConversionSettings,Z_Param_Out_ConversionSettings);
		P_GET_OBJECT(UTexture,Z_Param_InputTexture);
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_OutputRenderTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOpenColorIOBlueprintLibrary::ApplyColorSpaceTransform(Z_Param_WorldContextObject,Z_Param_Out_ConversionSettings,Z_Param_InputTexture,Z_Param_OutputRenderTarget);
		P_NATIVE_END;
	}
	void UOpenColorIOBlueprintLibrary::StaticRegisterNativesUOpenColorIOBlueprintLibrary()
	{
		UClass* Class = UOpenColorIOBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyColorSpaceTransform", &UOpenColorIOBlueprintLibrary::execApplyColorSpaceTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOpenColorIOBlueprintLibrary_ApplyColorSpaceTransform_Statics
	{
		struct OpenColorIOBlueprintLibrary_eventApplyColorSpaceTransform_Parms
		{
			const UObject* WorldContextObject;
			FOpenColorIOColorConversionSettings ConversionSettings;
			UTexture* InputTexture;
			UTextureRenderTarget2D* OutputRenderTarget;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConversionSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConversionSettings;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputTexture;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutputRenderTarget;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenColorIOBlueprintLibrary_ApplyColorSpaceTransform_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenColorIOBlueprintLibrary_ApplyColorSpaceTransform_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenColorIOBlueprintLibrary_eventApplyColorSpaceTransform_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOpenColorIOBlueprintLibrary_ApplyColorSpaceTransform_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenColorIOBlueprintLibrary_ApplyColorSpaceTransform_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenColorIOBlueprintLibrary_ApplyColorSpaceTransform_Statics::NewProp_ConversionSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenColorIOBlueprintLibrary_ApplyColorSpaceTransform_Statics::NewProp_ConversionSettings = { "ConversionSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenColorIOBlueprintLibrary_eventApplyColorSpaceTransform_Parms, ConversionSettings), Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings, METADATA_PARAMS(Z_Construct_UFunction_UOpenColorIOBlueprintLibrary_ApplyColorSpaceTransform_Statics::NewProp_ConversionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenColorIOBlueprintLibrary_ApplyColorSpaceTransform_Statics::NewProp_ConversionSettings_MetaData)) }; // 349333024
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenColorIOBlueprintLibrary_ApplyColorSpaceTransform_Statics::NewProp_InputTexture = { "InputTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenColorIOBlueprintLibrary_eventApplyColorSpaceTransform_Parms, InputTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenColorIOBlueprintLibrary_ApplyColorSpaceTransform_Statics::NewProp_OutputRenderTarget = { "OutputRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenColorIOBlueprintLibrary_eventApplyColorSpaceTransform_Parms, OutputRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOpenColorIOBlueprintLibrary_ApplyColorSpaceTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OpenColorIOBlueprintLibrary_eventApplyColorSpaceTransform_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOpenColorIOBlueprintLibrary_ApplyColorSpaceTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OpenColorIOBlueprintLibrary_eventApplyColorSpaceTransform_Parms), &Z_Construct_UFunction_UOpenColorIOBlueprintLibrary_ApplyColorSpaceTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenColorIOBlueprintLibrary_ApplyColorSpaceTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenColorIOBlueprintLibrary_ApplyColorSpaceTransform_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenColorIOBlueprintLibrary_ApplyColorSpaceTransform_Statics::NewProp_ConversionSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenColorIOBlueprintLibrary_ApplyColorSpaceTransform_Statics::NewProp_InputTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenColorIOBlueprintLibrary_ApplyColorSpaceTransform_Statics::NewProp_OutputRenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenColorIOBlueprintLibrary_ApplyColorSpaceTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenColorIOBlueprintLibrary_ApplyColorSpaceTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "OpenColorIO" },
		{ "Comment", "/**\n\x09 * Applies a rendering pass of the color transform described in the settings\n\x09 *\n\x09 * @param WorldContextObject World from which to get the actual shader feature level we need to render\n\x09 * @param ConversionSettings Settings describing the color space transform to apply\n\x09 * @param InputTexture Texture in the source color space\n\x09 * @param OutputRenderTarget RenderTarget where to draw the input texture in the destination color space\n\x09 * @return True if a rendering command to apply the transform was queued.\n\x09 */" },
		{ "ModuleRelativePath", "Public/OpenColorIOBlueprintLibrary.h" },
		{ "ToolTip", "Applies a rendering pass of the color transform described in the settings\n\n@param WorldContextObject World from which to get the actual shader feature level we need to render\n@param ConversionSettings Settings describing the color space transform to apply\n@param InputTexture Texture in the source color space\n@param OutputRenderTarget RenderTarget where to draw the input texture in the destination color space\n@return True if a rendering command to apply the transform was queued." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenColorIOBlueprintLibrary_ApplyColorSpaceTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenColorIOBlueprintLibrary, nullptr, "ApplyColorSpaceTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOpenColorIOBlueprintLibrary_ApplyColorSpaceTransform_Statics::OpenColorIOBlueprintLibrary_eventApplyColorSpaceTransform_Parms), Z_Construct_UFunction_UOpenColorIOBlueprintLibrary_ApplyColorSpaceTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenColorIOBlueprintLibrary_ApplyColorSpaceTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenColorIOBlueprintLibrary_ApplyColorSpaceTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenColorIOBlueprintLibrary_ApplyColorSpaceTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenColorIOBlueprintLibrary_ApplyColorSpaceTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOpenColorIOBlueprintLibrary_ApplyColorSpaceTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOpenColorIOBlueprintLibrary);
	UClass* Z_Construct_UClass_UOpenColorIOBlueprintLibrary_NoRegister()
	{
		return UOpenColorIOBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UOpenColorIOBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpenColorIOBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenColorIO,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOpenColorIOBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOpenColorIOBlueprintLibrary_ApplyColorSpaceTransform, "ApplyColorSpaceTransform" }, // 163570775
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenColorIOBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OpenColorIOBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/OpenColorIOBlueprintLibrary.h" },
		{ "ScriptName", "OpenColorIOLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpenColorIOBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenColorIOBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOpenColorIOBlueprintLibrary_Statics::ClassParams = {
		&UOpenColorIOBlueprintLibrary::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOpenColorIOBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenColorIOBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOpenColorIOBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UOpenColorIOBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOpenColorIOBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UOpenColorIOBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOpenColorIOBlueprintLibrary.OuterSingleton;
	}
	template<> OPENCOLORIO_API UClass* StaticClass<UOpenColorIOBlueprintLibrary>()
	{
		return UOpenColorIOBlueprintLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenColorIOBlueprintLibrary);
	UOpenColorIOBlueprintLibrary::~UOpenColorIOBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOpenColorIOBlueprintLibrary, UOpenColorIOBlueprintLibrary::StaticClass, TEXT("UOpenColorIOBlueprintLibrary"), &Z_Registration_Info_UClass_UOpenColorIOBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOpenColorIOBlueprintLibrary), 2911994329U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOBlueprintLibrary_h_1898980669(TEXT("/Script/OpenColorIO"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
