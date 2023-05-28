// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaOutput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaOutput() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MEDIAIOCORE_API UClass* Z_Construct_UClass_UMediaCapture_NoRegister();
	MEDIAIOCORE_API UClass* Z_Construct_UClass_UMediaOutput();
	MEDIAIOCORE_API UClass* Z_Construct_UClass_UMediaOutput_NoRegister();
	MEDIAIOCORE_API UEnum* Z_Construct_UEnum_MediaIOCore_EMediaCaptureSourceType();
	UPackage* Z_Construct_UPackage__Script_MediaIOCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMediaCaptureSourceType;
	static UEnum* EMediaCaptureSourceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMediaCaptureSourceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMediaCaptureSourceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaCaptureSourceType, (UObject*)Z_Construct_UPackage__Script_MediaIOCore(), TEXT("EMediaCaptureSourceType"));
		}
		return Z_Registration_Info_UEnum_EMediaCaptureSourceType.OuterSingleton;
	}
	template<> MEDIAIOCORE_API UEnum* StaticEnum<EMediaCaptureSourceType>()
	{
		return EMediaCaptureSourceType_StaticEnum();
	}
	struct Z_Construct_UEnum_MediaIOCore_EMediaCaptureSourceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MediaIOCore_EMediaCaptureSourceType_Statics::Enumerators[] = {
		{ "EMediaCaptureSourceType::RENDER_TARGET", (int64)EMediaCaptureSourceType::RENDER_TARGET },
		{ "EMediaCaptureSourceType::SCENE_VIEWPORT", (int64)EMediaCaptureSourceType::SCENE_VIEWPORT },
		{ "EMediaCaptureSourceType::RHI_RESOURCE", (int64)EMediaCaptureSourceType::RHI_RESOURCE },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MediaIOCore_EMediaCaptureSourceType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MediaOutput.h" },
		{ "RENDER_TARGET.Name", "EMediaCaptureSourceType::RENDER_TARGET" },
		{ "RHI_RESOURCE.Name", "EMediaCaptureSourceType::RHI_RESOURCE" },
		{ "SCENE_VIEWPORT.Name", "EMediaCaptureSourceType::SCENE_VIEWPORT" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MediaIOCore_EMediaCaptureSourceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MediaIOCore,
		nullptr,
		"EMediaCaptureSourceType",
		"EMediaCaptureSourceType",
		Z_Construct_UEnum_MediaIOCore_EMediaCaptureSourceType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MediaIOCore_EMediaCaptureSourceType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MediaIOCore_EMediaCaptureSourceType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MediaIOCore_EMediaCaptureSourceType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MediaIOCore_EMediaCaptureSourceType()
	{
		if (!Z_Registration_Info_UEnum_EMediaCaptureSourceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMediaCaptureSourceType.InnerSingleton, Z_Construct_UEnum_MediaIOCore_EMediaCaptureSourceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMediaCaptureSourceType.InnerSingleton;
	}
	DEFINE_FUNCTION(UMediaOutput::execValidate)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutFailureReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Validate(Z_Param_Out_OutFailureReason);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaOutput::execCreateMediaCapture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMediaCapture**)Z_Param__Result=P_THIS->CreateMediaCapture();
		P_NATIVE_END;
	}
	void UMediaOutput::StaticRegisterNativesUMediaOutput()
	{
		UClass* Class = UMediaOutput::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateMediaCapture", &UMediaOutput::execCreateMediaCapture },
			{ "Validate", &UMediaOutput::execValidate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMediaOutput_CreateMediaCapture_Statics
	{
		struct MediaOutput_eventCreateMediaCapture_Parms
		{
			UMediaCapture* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaOutput_CreateMediaCapture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaOutput_eventCreateMediaCapture_Parms, ReturnValue), Z_Construct_UClass_UMediaCapture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaOutput_CreateMediaCapture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaOutput_CreateMediaCapture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaOutput_CreateMediaCapture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|Output" },
		{ "Comment", "/** Creates the specific implementation of the MediaCapture for the MediaOutput. */" },
		{ "ModuleRelativePath", "Public/MediaOutput.h" },
		{ "ToolTip", "Creates the specific implementation of the MediaCapture for the MediaOutput." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaOutput_CreateMediaCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaOutput, nullptr, "CreateMediaCapture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaOutput_CreateMediaCapture_Statics::MediaOutput_eventCreateMediaCapture_Parms), Z_Construct_UFunction_UMediaOutput_CreateMediaCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaOutput_CreateMediaCapture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaOutput_CreateMediaCapture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaOutput_CreateMediaCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaOutput_CreateMediaCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaOutput_CreateMediaCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaOutput_Validate_Statics
	{
		struct MediaOutput_eventValidate_Parms
		{
			FString OutFailureReason;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutFailureReason;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMediaOutput_Validate_Statics::NewProp_OutFailureReason = { "OutFailureReason", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaOutput_eventValidate_Parms, OutFailureReason), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMediaOutput_Validate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MediaOutput_eventValidate_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaOutput_Validate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MediaOutput_eventValidate_Parms), &Z_Construct_UFunction_UMediaOutput_Validate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaOutput_Validate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaOutput_Validate_Statics::NewProp_OutFailureReason,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaOutput_Validate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaOutput_Validate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|Output" },
		{ "Comment", "/**\n\x09 * Validate the media output settings (must be implemented in child classes).\n\x09 *\n\x09 * @return true if validation passed, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaOutput.h" },
		{ "ToolTip", "Validate the media output settings (must be implemented in child classes).\n\n@return true if validation passed, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaOutput_Validate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaOutput, nullptr, "Validate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaOutput_Validate_Statics::MediaOutput_eventValidate_Parms), Z_Construct_UFunction_UMediaOutput_Validate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaOutput_Validate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaOutput_Validate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaOutput_Validate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaOutput_Validate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaOutput_Validate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMediaOutput);
	UClass* Z_Construct_UClass_UMediaOutput_NoRegister()
	{
		return UMediaOutput::StaticClass();
	}
	struct Z_Construct_UClass_UMediaOutput_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfTextureBuffers_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfTextureBuffers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaIOCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMediaOutput_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMediaOutput_CreateMediaCapture, "CreateMediaCapture" }, // 2171863626
		{ &Z_Construct_UFunction_UMediaOutput_Validate, "Validate" }, // 3271321222
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaOutput_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Abstract base class for media output.\n *\n * Media output describe the location and/or settings of media objects that can\n * be used to output the content of Unreal Engine to a target device via a MediaCapture.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "MediaOutput.h" },
		{ "ModuleRelativePath", "Public/MediaOutput.h" },
		{ "ToolTip", "Abstract base class for media output.\n\nMedia output describe the location and/or settings of media objects that can\nbe used to output the content of Unreal Engine to a target device via a MediaCapture." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaOutput_Statics::NewProp_NumberOfTextureBuffers_MetaData[] = {
		{ "Category", "Output" },
		{ "ClampMax", "8" },
		{ "ClampMin", "1" },
		{ "Comment", "/**\n\x09 * Number of texture used to transfer the texture from the GPU to the system memory.\n\x09 * A smaller number is most likely to block the GPU (wait for the transfer to complete).\n\x09 * A bigger number is most likely to increase latency.\n\x09 * @note Some Capture are not are executed on the GPU. If it's the case then no buffer will be needed and no buffer will be created.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaOutput.h" },
		{ "ToolTip", "Number of texture used to transfer the texture from the GPU to the system memory.\nA smaller number is most likely to block the GPU (wait for the transfer to complete).\nA bigger number is most likely to increase latency.\n@note Some Capture are not are executed on the GPU. If it's the case then no buffer will be needed and no buffer will be created." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMediaOutput_Statics::NewProp_NumberOfTextureBuffers = { "NumberOfTextureBuffers", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaOutput, NumberOfTextureBuffers), METADATA_PARAMS(Z_Construct_UClass_UMediaOutput_Statics::NewProp_NumberOfTextureBuffers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaOutput_Statics::NewProp_NumberOfTextureBuffers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMediaOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaOutput_Statics::NewProp_NumberOfTextureBuffers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaOutput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMediaOutput_Statics::ClassParams = {
		&UMediaOutput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMediaOutput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMediaOutput_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMediaOutput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaOutput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaOutput()
	{
		if (!Z_Registration_Info_UClass_UMediaOutput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMediaOutput.OuterSingleton, Z_Construct_UClass_UMediaOutput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMediaOutput.OuterSingleton;
	}
	template<> MEDIAIOCORE_API UClass* StaticClass<UMediaOutput>()
	{
		return UMediaOutput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaOutput);
	UMediaOutput::~UMediaOutput() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaOutput_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaOutput_h_Statics::EnumInfo[] = {
		{ EMediaCaptureSourceType_StaticEnum, TEXT("EMediaCaptureSourceType"), &Z_Registration_Info_UEnum_EMediaCaptureSourceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3310025938U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaOutput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMediaOutput, UMediaOutput::StaticClass, TEXT("UMediaOutput"), &Z_Registration_Info_UClass_UMediaOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMediaOutput), 4160922494U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaOutput_h_3203188591(TEXT("/Script/MediaIOCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaOutput_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaOutput_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaOutput_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
