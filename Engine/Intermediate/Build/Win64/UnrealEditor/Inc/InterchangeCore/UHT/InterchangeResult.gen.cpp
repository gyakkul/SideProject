// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeResult() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeResult();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeResult_NoRegister();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeResultError();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeResultError_Generic();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeResultError_Generic_NoRegister();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeResultError_NoRegister();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeResultError_ReimportFail();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeResultError_ReimportFail_NoRegister();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeResultSuccess();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeResultSuccess_NoRegister();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeResultWarning();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeResultWarning_Generic();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeResultWarning_Generic_NoRegister();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeResultWarning_NoRegister();
	INTERCHANGECORE_API UEnum* Z_Construct_UEnum_InterchangeCore_EInterchangeResultType();
	UPackage* Z_Construct_UPackage__Script_InterchangeCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterchangeResultType;
	static UEnum* EInterchangeResultType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInterchangeResultType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInterchangeResultType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangeCore_EInterchangeResultType, (UObject*)Z_Construct_UPackage__Script_InterchangeCore(), TEXT("EInterchangeResultType"));
		}
		return Z_Registration_Info_UEnum_EInterchangeResultType.OuterSingleton;
	}
	template<> INTERCHANGECORE_API UEnum* StaticEnum<EInterchangeResultType>()
	{
		return EInterchangeResultType_StaticEnum();
	}
	struct Z_Construct_UEnum_InterchangeCore_EInterchangeResultType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InterchangeCore_EInterchangeResultType_Statics::Enumerators[] = {
		{ "EInterchangeResultType::Success", (int64)EInterchangeResultType::Success },
		{ "EInterchangeResultType::Warning", (int64)EInterchangeResultType::Warning },
		{ "EInterchangeResultType::Error", (int64)EInterchangeResultType::Error },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InterchangeCore_EInterchangeResultType_Statics::Enum_MetaDataParams[] = {
		{ "Error.Name", "EInterchangeResultType::Error" },
		{ "ModuleRelativePath", "Public/InterchangeResult.h" },
		{ "Success.Name", "EInterchangeResultType::Success" },
		{ "Warning.Name", "EInterchangeResultType::Warning" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangeCore_EInterchangeResultType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InterchangeCore,
		nullptr,
		"EInterchangeResultType",
		"EInterchangeResultType",
		Z_Construct_UEnum_InterchangeCore_EInterchangeResultType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeCore_EInterchangeResultType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_InterchangeCore_EInterchangeResultType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeCore_EInterchangeResultType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_InterchangeCore_EInterchangeResultType()
	{
		if (!Z_Registration_Info_UEnum_EInterchangeResultType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterchangeResultType.InnerSingleton, Z_Construct_UEnum_InterchangeCore_EInterchangeResultType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInterchangeResultType.InnerSingleton;
	}
	void UInterchangeResult::StaticRegisterNativesUInterchangeResult()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeResult);
	UClass* Z_Construct_UClass_UInterchangeResult_NoRegister()
	{
		return UInterchangeResult::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeResult_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceAssetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceAssetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationAssetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DestinationAssetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_AssetType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterchangeKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InterchangeKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeResult_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeResult_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for the result from an Interchange operation.\n */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangeResult.h" },
		{ "ModuleRelativePath", "Public/InterchangeResult.h" },
		{ "ToolTip", "Base class for the result from an Interchange operation." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeResult_Statics::NewProp_SourceAssetName_MetaData[] = {
		{ "ModuleRelativePath", "Public/InterchangeResult.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInterchangeResult_Statics::NewProp_SourceAssetName = { "SourceAssetName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeResult, SourceAssetName), METADATA_PARAMS(Z_Construct_UClass_UInterchangeResult_Statics::NewProp_SourceAssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResult_Statics::NewProp_SourceAssetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeResult_Statics::NewProp_DestinationAssetName_MetaData[] = {
		{ "ModuleRelativePath", "Public/InterchangeResult.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInterchangeResult_Statics::NewProp_DestinationAssetName = { "DestinationAssetName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeResult, DestinationAssetName), METADATA_PARAMS(Z_Construct_UClass_UInterchangeResult_Statics::NewProp_DestinationAssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResult_Statics::NewProp_DestinationAssetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeResult_Statics::NewProp_AssetType_MetaData[] = {
		{ "ModuleRelativePath", "Public/InterchangeResult.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_UInterchangeResult_Statics::NewProp_AssetType = { "AssetType", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeResult, AssetType), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterchangeResult_Statics::NewProp_AssetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResult_Statics::NewProp_AssetType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeResult_Statics::NewProp_InterchangeKey_MetaData[] = {
		{ "ModuleRelativePath", "Public/InterchangeResult.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInterchangeResult_Statics::NewProp_InterchangeKey = { "InterchangeKey", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeResult, InterchangeKey), METADATA_PARAMS(Z_Construct_UClass_UInterchangeResult_Statics::NewProp_InterchangeKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResult_Statics::NewProp_InterchangeKey_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeResult_Statics::NewProp_SourceAssetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeResult_Statics::NewProp_DestinationAssetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeResult_Statics::NewProp_AssetType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeResult_Statics::NewProp_InterchangeKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeResult_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeResult>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeResult_Statics::ClassParams = {
		&UInterchangeResult::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterchangeResult_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResult_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeResult_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResult_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeResult()
	{
		if (!Z_Registration_Info_UClass_UInterchangeResult.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeResult.OuterSingleton, Z_Construct_UClass_UInterchangeResult_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeResult.OuterSingleton;
	}
	template<> INTERCHANGECORE_API UClass* StaticClass<UInterchangeResult>()
	{
		return UInterchangeResult::StaticClass();
	}
	UInterchangeResult::UInterchangeResult(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeResult);
	UInterchangeResult::~UInterchangeResult() {}
	void UInterchangeResultSuccess::StaticRegisterNativesUInterchangeResultSuccess()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeResultSuccess);
	UClass* Z_Construct_UClass_UInterchangeResultSuccess_NoRegister()
	{
		return UInterchangeResultSuccess::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeResultSuccess_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeResultSuccess_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeResult,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeResultSuccess_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Class representing a succesful result.\n */" },
		{ "IncludePath", "InterchangeResult.h" },
		{ "ModuleRelativePath", "Public/InterchangeResult.h" },
		{ "ToolTip", "Class representing a succesful result." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeResultSuccess_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeResultSuccess>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeResultSuccess_Statics::ClassParams = {
		&UInterchangeResultSuccess::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeResultSuccess_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultSuccess_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeResultSuccess()
	{
		if (!Z_Registration_Info_UClass_UInterchangeResultSuccess.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeResultSuccess.OuterSingleton, Z_Construct_UClass_UInterchangeResultSuccess_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeResultSuccess.OuterSingleton;
	}
	template<> INTERCHANGECORE_API UClass* StaticClass<UInterchangeResultSuccess>()
	{
		return UInterchangeResultSuccess::StaticClass();
	}
	UInterchangeResultSuccess::UInterchangeResultSuccess(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeResultSuccess);
	UInterchangeResultSuccess::~UInterchangeResultSuccess() {}
	void UInterchangeResultWarning::StaticRegisterNativesUInterchangeResultWarning()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeResultWarning);
	UClass* Z_Construct_UClass_UInterchangeResultWarning_NoRegister()
	{
		return UInterchangeResultWarning::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeResultWarning_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeResultWarning_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeResult,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeResultWarning_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class representing a warning result.\n */" },
		{ "IncludePath", "InterchangeResult.h" },
		{ "ModuleRelativePath", "Public/InterchangeResult.h" },
		{ "ToolTip", "Base class representing a warning result." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeResultWarning_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeResultWarning>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeResultWarning_Statics::ClassParams = {
		&UInterchangeResultWarning::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeResultWarning_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultWarning_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeResultWarning()
	{
		if (!Z_Registration_Info_UClass_UInterchangeResultWarning.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeResultWarning.OuterSingleton, Z_Construct_UClass_UInterchangeResultWarning_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeResultWarning.OuterSingleton;
	}
	template<> INTERCHANGECORE_API UClass* StaticClass<UInterchangeResultWarning>()
	{
		return UInterchangeResultWarning::StaticClass();
	}
	UInterchangeResultWarning::UInterchangeResultWarning(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeResultWarning);
	UInterchangeResultWarning::~UInterchangeResultWarning() {}
	void UInterchangeResultError::StaticRegisterNativesUInterchangeResultError()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeResultError);
	UClass* Z_Construct_UClass_UInterchangeResultError_NoRegister()
	{
		return UInterchangeResultError::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeResultError_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeResultError_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeResult,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeResultError_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class representing a error result.\n */" },
		{ "IncludePath", "InterchangeResult.h" },
		{ "ModuleRelativePath", "Public/InterchangeResult.h" },
		{ "ToolTip", "Base class representing a error result." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeResultError_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeResultError>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeResultError_Statics::ClassParams = {
		&UInterchangeResultError::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeResultError_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultError_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeResultError()
	{
		if (!Z_Registration_Info_UClass_UInterchangeResultError.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeResultError.OuterSingleton, Z_Construct_UClass_UInterchangeResultError_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeResultError.OuterSingleton;
	}
	template<> INTERCHANGECORE_API UClass* StaticClass<UInterchangeResultError>()
	{
		return UInterchangeResultError::StaticClass();
	}
	UInterchangeResultError::UInterchangeResultError(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeResultError);
	UInterchangeResultError::~UInterchangeResultError() {}
	void UInterchangeResultWarning_Generic::StaticRegisterNativesUInterchangeResultWarning_Generic()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeResultWarning_Generic);
	UClass* Z_Construct_UClass_UInterchangeResultWarning_Generic_NoRegister()
	{
		return UInterchangeResultWarning_Generic::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeResultWarning_Generic_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeResultWarning_Generic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeResultWarning,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeResultWarning_Generic_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InterchangeResult.h" },
		{ "ModuleRelativePath", "Public/InterchangeResult.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeResultWarning_Generic_Statics::NewProp_Text_MetaData[] = {
		{ "ModuleRelativePath", "Public/InterchangeResult.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UInterchangeResultWarning_Generic_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeResultWarning_Generic, Text), METADATA_PARAMS(Z_Construct_UClass_UInterchangeResultWarning_Generic_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultWarning_Generic_Statics::NewProp_Text_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeResultWarning_Generic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeResultWarning_Generic_Statics::NewProp_Text,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeResultWarning_Generic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeResultWarning_Generic>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeResultWarning_Generic_Statics::ClassParams = {
		&UInterchangeResultWarning_Generic::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterchangeResultWarning_Generic_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultWarning_Generic_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeResultWarning_Generic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultWarning_Generic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeResultWarning_Generic()
	{
		if (!Z_Registration_Info_UClass_UInterchangeResultWarning_Generic.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeResultWarning_Generic.OuterSingleton, Z_Construct_UClass_UInterchangeResultWarning_Generic_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeResultWarning_Generic.OuterSingleton;
	}
	template<> INTERCHANGECORE_API UClass* StaticClass<UInterchangeResultWarning_Generic>()
	{
		return UInterchangeResultWarning_Generic::StaticClass();
	}
	UInterchangeResultWarning_Generic::UInterchangeResultWarning_Generic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeResultWarning_Generic);
	UInterchangeResultWarning_Generic::~UInterchangeResultWarning_Generic() {}
	void UInterchangeResultError_Generic::StaticRegisterNativesUInterchangeResultError_Generic()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeResultError_Generic);
	UClass* Z_Construct_UClass_UInterchangeResultError_Generic_NoRegister()
	{
		return UInterchangeResultError_Generic::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeResultError_Generic_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeResultError_Generic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeResultError,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeResultError_Generic_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InterchangeResult.h" },
		{ "ModuleRelativePath", "Public/InterchangeResult.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeResultError_Generic_Statics::NewProp_Text_MetaData[] = {
		{ "ModuleRelativePath", "Public/InterchangeResult.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UInterchangeResultError_Generic_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeResultError_Generic, Text), METADATA_PARAMS(Z_Construct_UClass_UInterchangeResultError_Generic_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultError_Generic_Statics::NewProp_Text_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeResultError_Generic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeResultError_Generic_Statics::NewProp_Text,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeResultError_Generic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeResultError_Generic>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeResultError_Generic_Statics::ClassParams = {
		&UInterchangeResultError_Generic::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterchangeResultError_Generic_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultError_Generic_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeResultError_Generic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultError_Generic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeResultError_Generic()
	{
		if (!Z_Registration_Info_UClass_UInterchangeResultError_Generic.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeResultError_Generic.OuterSingleton, Z_Construct_UClass_UInterchangeResultError_Generic_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeResultError_Generic.OuterSingleton;
	}
	template<> INTERCHANGECORE_API UClass* StaticClass<UInterchangeResultError_Generic>()
	{
		return UInterchangeResultError_Generic::StaticClass();
	}
	UInterchangeResultError_Generic::UInterchangeResultError_Generic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeResultError_Generic);
	UInterchangeResultError_Generic::~UInterchangeResultError_Generic() {}
	void UInterchangeResultError_ReimportFail::StaticRegisterNativesUInterchangeResultError_ReimportFail()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeResultError_ReimportFail);
	UClass* Z_Construct_UClass_UInterchangeResultError_ReimportFail_NoRegister()
	{
		return UInterchangeResultError_ReimportFail::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeResultError_ReimportFail_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeResultError_ReimportFail_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeResultError,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeResultError_ReimportFail_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InterchangeResult.h" },
		{ "ModuleRelativePath", "Public/InterchangeResult.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeResultError_ReimportFail_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeResultError_ReimportFail>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeResultError_ReimportFail_Statics::ClassParams = {
		&UInterchangeResultError_ReimportFail::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeResultError_ReimportFail_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultError_ReimportFail_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeResultError_ReimportFail()
	{
		if (!Z_Registration_Info_UClass_UInterchangeResultError_ReimportFail.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeResultError_ReimportFail.OuterSingleton, Z_Construct_UClass_UInterchangeResultError_ReimportFail_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeResultError_ReimportFail.OuterSingleton;
	}
	template<> INTERCHANGECORE_API UClass* StaticClass<UInterchangeResultError_ReimportFail>()
	{
		return UInterchangeResultError_ReimportFail::StaticClass();
	}
	UInterchangeResultError_ReimportFail::UInterchangeResultError_ReimportFail(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeResultError_ReimportFail);
	UInterchangeResultError_ReimportFail::~UInterchangeResultError_ReimportFail() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeResult_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeResult_h_Statics::EnumInfo[] = {
		{ EInterchangeResultType_StaticEnum, TEXT("EInterchangeResultType"), &Z_Registration_Info_UEnum_EInterchangeResultType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1605227153U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeResult_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeResult, UInterchangeResult::StaticClass, TEXT("UInterchangeResult"), &Z_Registration_Info_UClass_UInterchangeResult, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeResult), 2672849222U) },
		{ Z_Construct_UClass_UInterchangeResultSuccess, UInterchangeResultSuccess::StaticClass, TEXT("UInterchangeResultSuccess"), &Z_Registration_Info_UClass_UInterchangeResultSuccess, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeResultSuccess), 660453157U) },
		{ Z_Construct_UClass_UInterchangeResultWarning, UInterchangeResultWarning::StaticClass, TEXT("UInterchangeResultWarning"), &Z_Registration_Info_UClass_UInterchangeResultWarning, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeResultWarning), 181798934U) },
		{ Z_Construct_UClass_UInterchangeResultError, UInterchangeResultError::StaticClass, TEXT("UInterchangeResultError"), &Z_Registration_Info_UClass_UInterchangeResultError, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeResultError), 1669138176U) },
		{ Z_Construct_UClass_UInterchangeResultWarning_Generic, UInterchangeResultWarning_Generic::StaticClass, TEXT("UInterchangeResultWarning_Generic"), &Z_Registration_Info_UClass_UInterchangeResultWarning_Generic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeResultWarning_Generic), 2999335653U) },
		{ Z_Construct_UClass_UInterchangeResultError_Generic, UInterchangeResultError_Generic::StaticClass, TEXT("UInterchangeResultError_Generic"), &Z_Registration_Info_UClass_UInterchangeResultError_Generic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeResultError_Generic), 356766954U) },
		{ Z_Construct_UClass_UInterchangeResultError_ReimportFail, UInterchangeResultError_ReimportFail::StaticClass, TEXT("UInterchangeResultError_ReimportFail"), &Z_Registration_Info_UClass_UInterchangeResultError_ReimportFail, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeResultError_ReimportFail), 801829240U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeResult_h_2127733884(TEXT("/Script/InterchangeCore"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeResult_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeResult_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeResult_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeResult_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
