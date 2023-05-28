// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompositingElements/CompositingElementOutputs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompositingElementOutputs() {}
// Cross Module References
	COMPOSURE_API UClass* Z_Construct_UClass_UColorConverterOutputPass();
	COMPOSURE_API UClass* Z_Construct_UClass_UColorConverterOutputPass_NoRegister();
	COMPOSURE_API UClass* Z_Construct_UClass_UCompEditorImagePreviewInterface_NoRegister();
	COMPOSURE_API UClass* Z_Construct_UClass_UCompositingElementOutput();
	COMPOSURE_API UClass* Z_Construct_UClass_UCompositingElementTransform_NoRegister();
	COMPOSURE_API UClass* Z_Construct_UClass_UCompositingMediaCaptureOutput();
	COMPOSURE_API UClass* Z_Construct_UClass_UCompositingMediaCaptureOutput_NoRegister();
	COMPOSURE_API UClass* Z_Construct_UClass_UEXRFileCompositingOutput();
	COMPOSURE_API UClass* Z_Construct_UClass_UEXRFileCompositingOutput_NoRegister();
	COMPOSURE_API UClass* Z_Construct_UClass_URenderTargetCompositingOutput();
	COMPOSURE_API UClass* Z_Construct_UClass_URenderTargetCompositingOutput_NoRegister();
	COMPOSURE_API UEnum* Z_Construct_UEnum_Composure_EExrCompressionOptions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	MEDIAIOCORE_API UClass* Z_Construct_UClass_UMediaCapture_NoRegister();
	MEDIAIOCORE_API UClass* Z_Construct_UClass_UMediaOutput_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Composure();
// End Cross Module References
	void UColorConverterOutputPass::StaticRegisterNativesUColorConverterOutputPass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UColorConverterOutputPass);
	UClass* Z_Construct_UClass_UColorConverterOutputPass_NoRegister()
	{
		return UColorConverterOutputPass::StaticClass();
	}
	struct Z_Construct_UClass_UColorConverterOutputPass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorConverter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ColorConverter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultConverterClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultConverterClass;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewResult_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewResult;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UColorConverterOutputPass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCompositingElementOutput,
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UColorConverterOutputPass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CompositingElements/CompositingElementOutputs.h" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementOutputs.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UColorConverterOutputPass_Statics::NewProp_ColorConverter_MetaData[] = {
		{ "Category", "Compositing Pass" },
		{ "DisplayAfter", "PassName" },
		{ "DisplayName", "Color Conversion" },
		{ "EditCondition", "bEnabled" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementOutputs.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UColorConverterOutputPass_Statics::NewProp_ColorConverter = { "ColorConverter", nullptr, (EPropertyFlags)0x0016000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UColorConverterOutputPass, ColorConverter), Z_Construct_UClass_UCompositingElementTransform_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UColorConverterOutputPass_Statics::NewProp_ColorConverter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UColorConverterOutputPass_Statics::NewProp_ColorConverter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UColorConverterOutputPass_Statics::NewProp_DefaultConverterClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementOutputs.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UColorConverterOutputPass_Statics::NewProp_DefaultConverterClass = { "DefaultConverterClass", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UColorConverterOutputPass, DefaultConverterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCompositingElementTransform_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UColorConverterOutputPass_Statics::NewProp_DefaultConverterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UColorConverterOutputPass_Statics::NewProp_DefaultConverterClass_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UColorConverterOutputPass_Statics::NewProp_PreviewResult_MetaData[] = {
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementOutputs.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UColorConverterOutputPass_Statics::NewProp_PreviewResult = { "PreviewResult", nullptr, (EPropertyFlags)0x0024080800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UColorConverterOutputPass, PreviewResult), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UColorConverterOutputPass_Statics::NewProp_PreviewResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UColorConverterOutputPass_Statics::NewProp_PreviewResult_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UColorConverterOutputPass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UColorConverterOutputPass_Statics::NewProp_ColorConverter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UColorConverterOutputPass_Statics::NewProp_DefaultConverterClass,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UColorConverterOutputPass_Statics::NewProp_PreviewResult,
#endif // WITH_EDITORONLY_DATA
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UColorConverterOutputPass_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UCompEditorImagePreviewInterface_NoRegister, (int32)VTABLE_OFFSET(UColorConverterOutputPass, ICompEditorImagePreviewInterface), false },  // 454777561
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UColorConverterOutputPass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UColorConverterOutputPass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UColorConverterOutputPass_Statics::ClassParams = {
		&UColorConverterOutputPass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UColorConverterOutputPass_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UColorConverterOutputPass_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UColorConverterOutputPass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UColorConverterOutputPass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UColorConverterOutputPass()
	{
		if (!Z_Registration_Info_UClass_UColorConverterOutputPass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UColorConverterOutputPass.OuterSingleton, Z_Construct_UClass_UColorConverterOutputPass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UColorConverterOutputPass.OuterSingleton;
	}
	template<> COMPOSURE_API UClass* StaticClass<UColorConverterOutputPass>()
	{
		return UColorConverterOutputPass::StaticClass();
	}
	UColorConverterOutputPass::UColorConverterOutputPass() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UColorConverterOutputPass);
	UColorConverterOutputPass::~UColorConverterOutputPass() {}
	void UCompositingMediaCaptureOutput::StaticRegisterNativesUCompositingMediaCaptureOutput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCompositingMediaCaptureOutput);
	UClass* Z_Construct_UClass_UCompositingMediaCaptureOutput_NoRegister()
	{
		return UCompositingMediaCaptureOutput::StaticClass();
	}
	struct Z_Construct_UClass_UCompositingMediaCaptureOutput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureOutput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CaptureOutput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveCapture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActiveCapture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCompositingMediaCaptureOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UColorConverterOutputPass,
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositingMediaCaptureOutput_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CompositingElements/CompositingElementOutputs.h" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementOutputs.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositingMediaCaptureOutput_Statics::NewProp_CaptureOutput_MetaData[] = {
		{ "Category", "Compositing Pass" },
		{ "DisplayAfter", "PassName" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementOutputs.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCompositingMediaCaptureOutput_Statics::NewProp_CaptureOutput = { "CaptureOutput", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCompositingMediaCaptureOutput, CaptureOutput), Z_Construct_UClass_UMediaOutput_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCompositingMediaCaptureOutput_Statics::NewProp_CaptureOutput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositingMediaCaptureOutput_Statics::NewProp_CaptureOutput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositingMediaCaptureOutput_Statics::NewProp_ActiveCapture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementOutputs.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCompositingMediaCaptureOutput_Statics::NewProp_ActiveCapture = { "ActiveCapture", nullptr, (EPropertyFlags)0x00c4000000202000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCompositingMediaCaptureOutput, ActiveCapture), Z_Construct_UClass_UMediaCapture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCompositingMediaCaptureOutput_Statics::NewProp_ActiveCapture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositingMediaCaptureOutput_Statics::NewProp_ActiveCapture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCompositingMediaCaptureOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositingMediaCaptureOutput_Statics::NewProp_CaptureOutput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositingMediaCaptureOutput_Statics::NewProp_ActiveCapture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCompositingMediaCaptureOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompositingMediaCaptureOutput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCompositingMediaCaptureOutput_Statics::ClassParams = {
		&UCompositingMediaCaptureOutput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCompositingMediaCaptureOutput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCompositingMediaCaptureOutput_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCompositingMediaCaptureOutput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositingMediaCaptureOutput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCompositingMediaCaptureOutput()
	{
		if (!Z_Registration_Info_UClass_UCompositingMediaCaptureOutput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCompositingMediaCaptureOutput.OuterSingleton, Z_Construct_UClass_UCompositingMediaCaptureOutput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCompositingMediaCaptureOutput.OuterSingleton;
	}
	template<> COMPOSURE_API UClass* StaticClass<UCompositingMediaCaptureOutput>()
	{
		return UCompositingMediaCaptureOutput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCompositingMediaCaptureOutput);
	UCompositingMediaCaptureOutput::~UCompositingMediaCaptureOutput() {}
	void URenderTargetCompositingOutput::StaticRegisterNativesURenderTargetCompositingOutput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URenderTargetCompositingOutput);
	UClass* Z_Construct_UClass_URenderTargetCompositingOutput_NoRegister()
	{
		return URenderTargetCompositingOutput::StaticClass();
	}
	struct Z_Construct_UClass_URenderTargetCompositingOutput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RenderTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URenderTargetCompositingOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCompositingElementOutput,
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderTargetCompositingOutput_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CompositingElements/CompositingElementOutputs.h" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementOutputs.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderTargetCompositingOutput_Statics::NewProp_RenderTarget_MetaData[] = {
		{ "Category", "Compositing Pass" },
		{ "DisplayAfter", "PassName" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementOutputs.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URenderTargetCompositingOutput_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URenderTargetCompositingOutput, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URenderTargetCompositingOutput_Statics::NewProp_RenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderTargetCompositingOutput_Statics::NewProp_RenderTarget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URenderTargetCompositingOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderTargetCompositingOutput_Statics::NewProp_RenderTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URenderTargetCompositingOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URenderTargetCompositingOutput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URenderTargetCompositingOutput_Statics::ClassParams = {
		&URenderTargetCompositingOutput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URenderTargetCompositingOutput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URenderTargetCompositingOutput_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_URenderTargetCompositingOutput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URenderTargetCompositingOutput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URenderTargetCompositingOutput()
	{
		if (!Z_Registration_Info_UClass_URenderTargetCompositingOutput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URenderTargetCompositingOutput.OuterSingleton, Z_Construct_UClass_URenderTargetCompositingOutput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URenderTargetCompositingOutput.OuterSingleton;
	}
	template<> COMPOSURE_API UClass* StaticClass<URenderTargetCompositingOutput>()
	{
		return URenderTargetCompositingOutput::StaticClass();
	}
	URenderTargetCompositingOutput::URenderTargetCompositingOutput() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URenderTargetCompositingOutput);
	URenderTargetCompositingOutput::~URenderTargetCompositingOutput() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EExrCompressionOptions;
	static UEnum* EExrCompressionOptions_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EExrCompressionOptions.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EExrCompressionOptions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Composure_EExrCompressionOptions, (UObject*)Z_Construct_UPackage__Script_Composure(), TEXT("EExrCompressionOptions"));
		}
		return Z_Registration_Info_UEnum_EExrCompressionOptions.OuterSingleton;
	}
	template<> COMPOSURE_API UEnum* StaticEnum<EExrCompressionOptions>()
	{
		return EExrCompressionOptions_StaticEnum();
	}
	struct Z_Construct_UEnum_Composure_EExrCompressionOptions_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Composure_EExrCompressionOptions_Statics::Enumerators[] = {
		{ "EExrCompressionOptions::Compressed", (int64)EExrCompressionOptions::Compressed },
		{ "EExrCompressionOptions::Uncompressed", (int64)EExrCompressionOptions::Uncompressed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Composure_EExrCompressionOptions_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/* UEXRFileCompositingOutput\n *****************************************************************************/" },
		{ "Compressed.Name", "EExrCompressionOptions::Compressed" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementOutputs.h" },
		{ "ToolTip", "UEXRFileCompositingOutput" },
		{ "Uncompressed.Name", "EExrCompressionOptions::Uncompressed" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Composure_EExrCompressionOptions_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Composure,
		nullptr,
		"EExrCompressionOptions",
		"EExrCompressionOptions",
		Z_Construct_UEnum_Composure_EExrCompressionOptions_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Composure_EExrCompressionOptions_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Composure_EExrCompressionOptions_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Composure_EExrCompressionOptions_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Composure_EExrCompressionOptions()
	{
		if (!Z_Registration_Info_UEnum_EExrCompressionOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EExrCompressionOptions.InnerSingleton, Z_Construct_UEnum_Composure_EExrCompressionOptions_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EExrCompressionOptions.InnerSingleton;
	}
	void UEXRFileCompositingOutput::StaticRegisterNativesUEXRFileCompositingOutput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEXRFileCompositingOutput);
	UClass* Z_Construct_UClass_UEXRFileCompositingOutput_NoRegister()
	{
		return UEXRFileCompositingOutput::StaticClass();
	}
	struct Z_Construct_UClass_UEXRFileCompositingOutput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputDirectiory_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputDirectiory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilenameFormat_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilenameFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputFrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputFrameRate;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Compression_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Compression_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Compression;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEXRFileCompositingOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCompositingElementOutput,
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEXRFileCompositingOutput_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CompositingElements/CompositingElementOutputs.h" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementOutputs.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEXRFileCompositingOutput_Statics::NewProp_OutputDirectiory_MetaData[] = {
		{ "Category", "Compositing Pass" },
		{ "DisplayAfter", "PassName" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementOutputs.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEXRFileCompositingOutput_Statics::NewProp_OutputDirectiory = { "OutputDirectiory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEXRFileCompositingOutput, OutputDirectiory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UEXRFileCompositingOutput_Statics::NewProp_OutputDirectiory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEXRFileCompositingOutput_Statics::NewProp_OutputDirectiory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEXRFileCompositingOutput_Statics::NewProp_FilenameFormat_MetaData[] = {
		{ "Category", "Compositing Pass" },
		{ "Comment", "/**\n\x09 * The format to use for the resulting filename. Extension will be added automatically. Any tokens of the form {token} will be replaced with the corresponding value:\n\x09 * {frame} - The current frame number\n\x09 */" },
		{ "DisplayAfter", "PassName" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementOutputs.h" },
		{ "ToolTip", "The format to use for the resulting filename. Extension will be added automatically. Any tokens of the form {token} will be replaced with the corresponding value:\n{frame} - The current frame number" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEXRFileCompositingOutput_Statics::NewProp_FilenameFormat = { "FilenameFormat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEXRFileCompositingOutput, FilenameFormat), METADATA_PARAMS(Z_Construct_UClass_UEXRFileCompositingOutput_Statics::NewProp_FilenameFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEXRFileCompositingOutput_Statics::NewProp_FilenameFormat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEXRFileCompositingOutput_Statics::NewProp_OutputFrameRate_MetaData[] = {
		{ "Category", "Compositing Pass" },
		{ "ClampMax", "200" },
		{ "ClampMin", "1" },
		{ "DisplayAfter", "PassName" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementOutputs.h" },
		{ "UIMax", "200" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEXRFileCompositingOutput_Statics::NewProp_OutputFrameRate = { "OutputFrameRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEXRFileCompositingOutput, OutputFrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UClass_UEXRFileCompositingOutput_Statics::NewProp_OutputFrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEXRFileCompositingOutput_Statics::NewProp_OutputFrameRate_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEXRFileCompositingOutput_Statics::NewProp_Compression_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEXRFileCompositingOutput_Statics::NewProp_Compression_MetaData[] = {
		{ "Category", "Compositing Pass" },
		{ "DisplayAfter", "PassName" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementOutputs.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEXRFileCompositingOutput_Statics::NewProp_Compression = { "Compression", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEXRFileCompositingOutput, Compression), Z_Construct_UEnum_Composure_EExrCompressionOptions, METADATA_PARAMS(Z_Construct_UClass_UEXRFileCompositingOutput_Statics::NewProp_Compression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEXRFileCompositingOutput_Statics::NewProp_Compression_MetaData)) }; // 1653449598
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEXRFileCompositingOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEXRFileCompositingOutput_Statics::NewProp_OutputDirectiory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEXRFileCompositingOutput_Statics::NewProp_FilenameFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEXRFileCompositingOutput_Statics::NewProp_OutputFrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEXRFileCompositingOutput_Statics::NewProp_Compression_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEXRFileCompositingOutput_Statics::NewProp_Compression,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEXRFileCompositingOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEXRFileCompositingOutput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEXRFileCompositingOutput_Statics::ClassParams = {
		&UEXRFileCompositingOutput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEXRFileCompositingOutput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEXRFileCompositingOutput_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEXRFileCompositingOutput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEXRFileCompositingOutput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEXRFileCompositingOutput()
	{
		if (!Z_Registration_Info_UClass_UEXRFileCompositingOutput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEXRFileCompositingOutput.OuterSingleton, Z_Construct_UClass_UEXRFileCompositingOutput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEXRFileCompositingOutput.OuterSingleton;
	}
	template<> COMPOSURE_API UClass* StaticClass<UEXRFileCompositingOutput>()
	{
		return UEXRFileCompositingOutput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEXRFileCompositingOutput);
	UEXRFileCompositingOutput::~UEXRFileCompositingOutput() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementOutputs_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementOutputs_h_Statics::EnumInfo[] = {
		{ EExrCompressionOptions_StaticEnum, TEXT("EExrCompressionOptions"), &Z_Registration_Info_UEnum_EExrCompressionOptions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1653449598U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementOutputs_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UColorConverterOutputPass, UColorConverterOutputPass::StaticClass, TEXT("UColorConverterOutputPass"), &Z_Registration_Info_UClass_UColorConverterOutputPass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UColorConverterOutputPass), 1614410819U) },
		{ Z_Construct_UClass_UCompositingMediaCaptureOutput, UCompositingMediaCaptureOutput::StaticClass, TEXT("UCompositingMediaCaptureOutput"), &Z_Registration_Info_UClass_UCompositingMediaCaptureOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCompositingMediaCaptureOutput), 1160472646U) },
		{ Z_Construct_UClass_URenderTargetCompositingOutput, URenderTargetCompositingOutput::StaticClass, TEXT("URenderTargetCompositingOutput"), &Z_Registration_Info_UClass_URenderTargetCompositingOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URenderTargetCompositingOutput), 4083684501U) },
		{ Z_Construct_UClass_UEXRFileCompositingOutput, UEXRFileCompositingOutput::StaticClass, TEXT("UEXRFileCompositingOutput"), &Z_Registration_Info_UClass_UEXRFileCompositingOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEXRFileCompositingOutput), 3860466296U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementOutputs_h_3810653910(TEXT("/Script/Composure"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementOutputs_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementOutputs_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementOutputs_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementOutputs_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
