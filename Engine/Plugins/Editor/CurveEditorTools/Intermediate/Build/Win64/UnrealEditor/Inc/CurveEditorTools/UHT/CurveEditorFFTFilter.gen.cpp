// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Filters/CurveEditorFFTFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveEditorFFTFilter() {}
// Cross Module References
	CURVEEDITOR_API UClass* Z_Construct_UClass_UCurveEditorFilterBase();
	CURVEEDITORTOOLS_API UClass* Z_Construct_UClass_UCurveEditorFFTFilter();
	CURVEEDITORTOOLS_API UClass* Z_Construct_UClass_UCurveEditorFFTFilter_NoRegister();
	CURVEEDITORTOOLS_API UEnum* Z_Construct_UEnum_CurveEditorTools_ECurveEditorFFTFilterClass();
	CURVEEDITORTOOLS_API UEnum* Z_Construct_UEnum_CurveEditorTools_ECurveEditorFFTFilterType();
	UPackage* Z_Construct_UPackage__Script_CurveEditorTools();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECurveEditorFFTFilterClass;
	static UEnum* ECurveEditorFFTFilterClass_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECurveEditorFFTFilterClass.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECurveEditorFFTFilterClass.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CurveEditorTools_ECurveEditorFFTFilterClass, (UObject*)Z_Construct_UPackage__Script_CurveEditorTools(), TEXT("ECurveEditorFFTFilterClass"));
		}
		return Z_Registration_Info_UEnum_ECurveEditorFFTFilterClass.OuterSingleton;
	}
	template<> CURVEEDITORTOOLS_API UEnum* StaticEnum<ECurveEditorFFTFilterClass>()
	{
		return ECurveEditorFFTFilterClass_StaticEnum();
	}
	struct Z_Construct_UEnum_CurveEditorTools_ECurveEditorFFTFilterClass_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CurveEditorTools_ECurveEditorFFTFilterClass_Statics::Enumerators[] = {
		{ "ECurveEditorFFTFilterClass::Butterworth", (int64)ECurveEditorFFTFilterClass::Butterworth },
		{ "ECurveEditorFFTFilterClass::Chebyshev", (int64)ECurveEditorFFTFilterClass::Chebyshev },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CurveEditorTools_ECurveEditorFFTFilterClass_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Butterworth.Name", "ECurveEditorFFTFilterClass::Butterworth" },
		{ "Chebyshev.Name", "ECurveEditorFFTFilterClass::Chebyshev" },
		{ "ModuleRelativePath", "Private/Filters/CurveEditorFFTFilter.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CurveEditorTools_ECurveEditorFFTFilterClass_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CurveEditorTools,
		nullptr,
		"ECurveEditorFFTFilterClass",
		"ECurveEditorFFTFilterClass",
		Z_Construct_UEnum_CurveEditorTools_ECurveEditorFFTFilterClass_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CurveEditorTools_ECurveEditorFFTFilterClass_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CurveEditorTools_ECurveEditorFFTFilterClass_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CurveEditorTools_ECurveEditorFFTFilterClass_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CurveEditorTools_ECurveEditorFFTFilterClass()
	{
		if (!Z_Registration_Info_UEnum_ECurveEditorFFTFilterClass.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECurveEditorFFTFilterClass.InnerSingleton, Z_Construct_UEnum_CurveEditorTools_ECurveEditorFFTFilterClass_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECurveEditorFFTFilterClass.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECurveEditorFFTFilterType;
	static UEnum* ECurveEditorFFTFilterType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECurveEditorFFTFilterType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECurveEditorFFTFilterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CurveEditorTools_ECurveEditorFFTFilterType, (UObject*)Z_Construct_UPackage__Script_CurveEditorTools(), TEXT("ECurveEditorFFTFilterType"));
		}
		return Z_Registration_Info_UEnum_ECurveEditorFFTFilterType.OuterSingleton;
	}
	template<> CURVEEDITORTOOLS_API UEnum* StaticEnum<ECurveEditorFFTFilterType>()
	{
		return ECurveEditorFFTFilterType_StaticEnum();
	}
	struct Z_Construct_UEnum_CurveEditorTools_ECurveEditorFFTFilterType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CurveEditorTools_ECurveEditorFFTFilterType_Statics::Enumerators[] = {
		{ "ECurveEditorFFTFilterType::Lowpass", (int64)ECurveEditorFFTFilterType::Lowpass },
		{ "ECurveEditorFFTFilterType::Highpass", (int64)ECurveEditorFFTFilterType::Highpass },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CurveEditorTools_ECurveEditorFFTFilterType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Highpass.Name", "ECurveEditorFFTFilterType::Highpass" },
		{ "Lowpass.Name", "ECurveEditorFFTFilterType::Lowpass" },
		{ "ModuleRelativePath", "Private/Filters/CurveEditorFFTFilter.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CurveEditorTools_ECurveEditorFFTFilterType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CurveEditorTools,
		nullptr,
		"ECurveEditorFFTFilterType",
		"ECurveEditorFFTFilterType",
		Z_Construct_UEnum_CurveEditorTools_ECurveEditorFFTFilterType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CurveEditorTools_ECurveEditorFFTFilterType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CurveEditorTools_ECurveEditorFFTFilterType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CurveEditorTools_ECurveEditorFFTFilterType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CurveEditorTools_ECurveEditorFFTFilterType()
	{
		if (!Z_Registration_Info_UEnum_ECurveEditorFFTFilterType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECurveEditorFFTFilterType.InnerSingleton, Z_Construct_UEnum_CurveEditorTools_ECurveEditorFFTFilterType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECurveEditorFFTFilterType.InnerSingleton;
	}
	void UCurveEditorFFTFilter::StaticRegisterNativesUCurveEditorFFTFilter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCurveEditorFFTFilter);
	UClass* Z_Construct_UClass_UCurveEditorFFTFilter_NoRegister()
	{
		return UCurveEditorFFTFilter::StaticClass();
	}
	struct Z_Construct_UClass_UCurveEditorFFTFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CutoffFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CutoffFrequency;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Response_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Response_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Response;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Order_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Order;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurveEditorFFTFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCurveEditorFilterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CurveEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEditorFFTFilter_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Fourier Transform (FFT)" },
		{ "IncludePath", "Filters/CurveEditorFFTFilter.h" },
		{ "ModuleRelativePath", "Private/Filters/CurveEditorFFTFilter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEditorFFTFilter_Statics::NewProp_CutoffFrequency_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Normalized between 0-1. In a low pass filter, the lower the value is the smoother the output. In a high pass filter the higher the value the smoother the output.*/" },
		{ "ModuleRelativePath", "Private/Filters/CurveEditorFFTFilter.h" },
		{ "ToolTip", "Normalized between 0-1. In a low pass filter, the lower the value is the smoother the output. In a high pass filter the higher the value the smoother the output." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCurveEditorFFTFilter_Statics::NewProp_CutoffFrequency = { "CutoffFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveEditorFFTFilter, CutoffFrequency), METADATA_PARAMS(Z_Construct_UClass_UCurveEditorFFTFilter_Statics::NewProp_CutoffFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorFFTFilter_Statics::NewProp_CutoffFrequency_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCurveEditorFFTFilter_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEditorFFTFilter_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Which frequencies are allowed through. For example, low-pass will let low frequency through and remove high frequency noise. */" },
		{ "ModuleRelativePath", "Private/Filters/CurveEditorFFTFilter.h" },
		{ "ToolTip", "Which frequencies are allowed through. For example, low-pass will let low frequency through and remove high frequency noise." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCurveEditorFFTFilter_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveEditorFFTFilter, Type), Z_Construct_UEnum_CurveEditorTools_ECurveEditorFFTFilterType, METADATA_PARAMS(Z_Construct_UClass_UCurveEditorFFTFilter_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorFFTFilter_Statics::NewProp_Type_MetaData)) }; // 23802741
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCurveEditorFFTFilter_Statics::NewProp_Response_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEditorFFTFilter_Statics::NewProp_Response_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Which FFT filter implementation to use. */" },
		{ "ModuleRelativePath", "Private/Filters/CurveEditorFFTFilter.h" },
		{ "ToolTip", "Which FFT filter implementation to use." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCurveEditorFFTFilter_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveEditorFFTFilter, Response), Z_Construct_UEnum_CurveEditorTools_ECurveEditorFFTFilterClass, METADATA_PARAMS(Z_Construct_UClass_UCurveEditorFFTFilter_Statics::NewProp_Response_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorFFTFilter_Statics::NewProp_Response_MetaData)) }; // 1359465582
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEditorFFTFilter_Statics::NewProp_Order_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The number of samples used to filter in the time domain. It maps how steep the roll off is for the filter. */" },
		{ "ModuleRelativePath", "Private/Filters/CurveEditorFFTFilter.h" },
		{ "ToolTip", "The number of samples used to filter in the time domain. It maps how steep the roll off is for the filter." },
		{ "UIMax", "8" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCurveEditorFFTFilter_Statics::NewProp_Order = { "Order", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveEditorFFTFilter, Order), METADATA_PARAMS(Z_Construct_UClass_UCurveEditorFFTFilter_Statics::NewProp_Order_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorFFTFilter_Statics::NewProp_Order_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCurveEditorFFTFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorFFTFilter_Statics::NewProp_CutoffFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorFFTFilter_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorFFTFilter_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorFFTFilter_Statics::NewProp_Response_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorFFTFilter_Statics::NewProp_Response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorFFTFilter_Statics::NewProp_Order,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurveEditorFFTFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveEditorFFTFilter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCurveEditorFFTFilter_Statics::ClassParams = {
		&UCurveEditorFFTFilter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCurveEditorFFTFilter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorFFTFilter_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCurveEditorFFTFilter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorFFTFilter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurveEditorFFTFilter()
	{
		if (!Z_Registration_Info_UClass_UCurveEditorFFTFilter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCurveEditorFFTFilter.OuterSingleton, Z_Construct_UClass_UCurveEditorFFTFilter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCurveEditorFFTFilter.OuterSingleton;
	}
	template<> CURVEEDITORTOOLS_API UClass* StaticClass<UCurveEditorFFTFilter>()
	{
		return UCurveEditorFFTFilter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveEditorFFTFilter);
	UCurveEditorFFTFilter::~UCurveEditorFFTFilter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_CurveEditorTools_Source_CurveEditorTools_Private_Filters_CurveEditorFFTFilter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_CurveEditorTools_Source_CurveEditorTools_Private_Filters_CurveEditorFFTFilter_h_Statics::EnumInfo[] = {
		{ ECurveEditorFFTFilterClass_StaticEnum, TEXT("ECurveEditorFFTFilterClass"), &Z_Registration_Info_UEnum_ECurveEditorFFTFilterClass, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1359465582U) },
		{ ECurveEditorFFTFilterType_StaticEnum, TEXT("ECurveEditorFFTFilterType"), &Z_Registration_Info_UEnum_ECurveEditorFFTFilterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 23802741U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_CurveEditorTools_Source_CurveEditorTools_Private_Filters_CurveEditorFFTFilter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCurveEditorFFTFilter, UCurveEditorFFTFilter::StaticClass, TEXT("UCurveEditorFFTFilter"), &Z_Registration_Info_UClass_UCurveEditorFFTFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCurveEditorFFTFilter), 1091402642U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_CurveEditorTools_Source_CurveEditorTools_Private_Filters_CurveEditorFFTFilter_h_3609582843(TEXT("/Script/CurveEditorTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_CurveEditorTools_Source_CurveEditorTools_Private_Filters_CurveEditorFFTFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_CurveEditorTools_Source_CurveEditorTools_Private_Filters_CurveEditorFFTFilter_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_CurveEditorTools_Source_CurveEditorTools_Private_Filters_CurveEditorFFTFilter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_CurveEditorTools_Source_CurveEditorTools_Private_Filters_CurveEditorFFTFilter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
